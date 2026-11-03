#!/usr/bin/env python3
"""Dumps the observable API of a Python extension module, and diffs two dumps.

Used to check that two different binding backends produce the same Python API.
The dump only records what a user can observe, so it doesn't depend on how the module is implemented.

    python_api_dump.py dump <module> [--path DIR]... [--strip PREFIX]... -o out.json
    python_api_dump.py diff old.json new.json [--limit N] [--ignore-docs]

`<module>` is an importable name (e.g. `meshlib.mrmeshpy`), or a path to a `.pyd`/`.so` file.
`--strip` removes a module prefix from type names in signatures (e.g. `meshlib.mrmeshpy.`), so that dumps of modules with different names compare equal.
Each dump also writes `<out>.txt`, a sorted line-based form for plain `diff`.
"""

import argparse
import enum
import importlib
import importlib.util
import inspect
import json
import os
import re
import sys
import types

# Attributes every class has, which say nothing about the bindings.
SKIPPED_CLASS_ATTRS = {
    "__dict__", "__weakref__", "__module__", "__doc__", "__qualname__", "__slots__",
    "__annotations__", "__firstlineno__", "__static_attributes__",
}

# Attributes every module has.
SKIPPED_MODULE_ATTRS = {
    "__name__", "__doc__", "__file__", "__loader__", "__package__", "__spec__", "__builtins__", "__cached__", "__path__",
    "__mrbind_cpp_api__",  # The C++ interop capsule of `mrbind_gen_python`.
}

# Base classes that are implementation details of a backend.
IMPL_BASE_RE = re.compile(r"^(pybind11_builtins\.|builtins\.object$|mrbind_py\.)")

ADDR_RE = re.compile(r"0x[0-9a-fA-F]{6,}")


class Dumper:
    def __init__(self, strip, module_name):
        self.strip = strip
        self.module_name = module_name
        self.entries = {}
        self.visited = {}  # id(type or module) -> qualified dump name

    def norm(self, text):
        if text is None:
            return None
        for prefix in self.strip:
            text = text.replace(prefix, "")
        return ADDR_RE.sub("0xADDR", text)

    def type_name(self, t):
        mod = getattr(t, "__module__", "") or ""
        qual = getattr(t, "__qualname__", t.__name__)
        return self.norm(f"{mod}.{qual}" if mod and mod != "builtins" else qual)

    def add(self, name, entry):
        self.entries[name] = entry

    # Splits a pybind11-style docstring into overload signatures and the docs attached to each.
    def split_doc(self, name, doc):
        doc = self.norm(doc)
        if doc is None:
            return [], None
        short = name.rsplit(".", 1)[-1]
        lines = doc.split("\n")
        if len(lines) >= 2 and lines[1] == "Overloaded function." and lines[0].startswith(short + "("):
            sigs = []
            rest = "\n".join(lines[2:])
            parts = re.split(r"(?m)^\d+\. (?=" + re.escape(short) + r"\()", rest)
            for part in parts[1:]:
                sig, _, body = part.partition("\n")
                sigs.append({"sig": sig, "doc": body.strip("\n") or None})
            return sigs, None
        if lines and lines[0].startswith(short + "("):
            body = "\n".join(lines[1:]).strip("\n")
            return [{"sig": lines[0], "doc": body or None}], None
        return [], doc

    def callable_entry(self, name, kind, obj):
        sigs, doc = self.split_doc(name, getattr(obj, "__doc__", None))
        entry = {"kind": kind, "overloads": sigs}
        if doc is not None:
            entry["doc"] = doc
        return entry

    def dump_value(self, name, obj):
        if isinstance(obj, (bool, int, float, str, type(None))):
            return {"kind": "value", "type": type(obj).__name__, "repr": self.norm(repr(obj))}
        t = type(obj)
        entry = {"kind": "value", "type": self.type_name(t)}
        if hasattr(t, "__members__"):  # An enum constant, e.g. exported into the enclosing scope.
            try:
                entry["int"] = int(obj)
            except Exception:  # noqa: BLE001
                pass
            entry["str"] = self.norm(str(obj))
        else:
            entry["repr"] = self.norm(repr(obj))
        return entry

    def dump_class_member(self, owner, name, raw, owner_type):
        full = f"{owner}.{name}"
        if isinstance(raw, type):
            self.dump_type(full, raw)
            return
        if isinstance(raw, staticmethod):
            self.add(full, self.callable_entry(full, "staticmethod", raw.__func__))
            return
        if isinstance(raw, classmethod):
            self.add(full, self.callable_entry(full, "classmethod", raw.__func__))
            return
        if isinstance(raw, property) or type(raw).__name__ in ("pybind11_static_property", "static_property"):
            static = not isinstance(raw, property) or type(raw) is not property
            entry = {
                "kind": "static_property" if static else "property",
                "readonly": getattr(raw, "fset", None) is None,
            }
            doc = self.norm(getattr(raw, "__doc__", None))
            if doc:
                entry["doc"] = doc
            if static and entry["readonly"]:
                try:
                    value = getattr(owner_type, name)
                    if isinstance(value, (bool, int, float, str)):
                        entry["value"] = value
                except Exception:  # noqa: BLE001
                    pass
            self.add(full, entry)
            return
        if isinstance(raw, (types.GetSetDescriptorType, types.MemberDescriptorType)):
            entry = {"kind": "property", "readonly": None}
            doc = self.norm(raw.__doc__)
            if doc:
                entry["doc"] = doc
            self.add(full, entry)
            return
        if raw is None:  # E.g. `__hash__ = None` next to `__eq__`.
            self.add(full, {"kind": "value", "type": "NoneType", "repr": "None"})
            return
        if callable(raw) or inspect.ismethoddescriptor(raw):
            self.add(full, self.callable_entry(full, "method", raw))
            return
        self.add(full, self.dump_value(full, raw))

    def dump_type(self, name, t):
        # A type reachable under several names (typedefs) is dumped under its own `__qualname__`, the others are aliases.
        canon = None
        if getattr(t, "__module__", None) == self.module_name:
            canon = "M." + t.__qualname__
        if self.visited.get(id(t)) == name:
            return
        if id(t) in self.visited or (canon is not None and canon != name):
            if id(t) not in self.visited:
                self.dump_type(canon, t)
            self.add(name, {"kind": "alias", "target": self.visited[id(t)]})
            return
        self.visited[id(t)] = name
        entry = {"kind": "class", "name": t.__name__}
        bases = [self.type_name(b) for b in t.__bases__]
        entry["bases"] = [b for b in bases if not IMPL_BASE_RE.match(b)]
        if t.__doc__:
            entry["doc"] = self.norm(t.__doc__)
        members = getattr(t, "__members__", None)
        if isinstance(members, dict) and not issubclass(t, enum.Enum) or isinstance(members, types.MappingProxyType):
            entry["kind"] = "enum"
            vals = {}
            for k, v in members.items():
                try:
                    vals[k] = int(v)
                except Exception:  # noqa: BLE001
                    vals[k] = self.norm(repr(v))
            entry["members"] = vals
        self.add(name, entry)
        for attr in sorted(t.__dict__):
            if attr in SKIPPED_CLASS_ATTRS or attr.startswith("_pybind11") or attr == "__members__":
                continue
            self.dump_class_member(name, attr, t.__dict__[attr], t)

    def dump_module(self, name, mod):
        self.visited[id(mod)] = name
        for attr in sorted(vars(mod)):
            if attr in SKIPPED_MODULE_ATTRS:
                continue
            obj = getattr(mod, attr)
            full = f"{name}.{attr}"
            if isinstance(obj, types.ModuleType):
                if id(obj) in self.visited:
                    self.add(full, {"kind": "alias", "target": self.visited[id(obj)]})
                elif getattr(obj, "__name__", "").startswith(mod.__name__ + "."):
                    self.add(full, {"kind": "module"})
                    self.dump_module(full, obj)
                else:
                    self.add(full, {"kind": "external_module", "name": obj.__name__})
            elif isinstance(obj, type):
                self.dump_type(full, obj)
            elif callable(obj):
                self.add(full, self.callable_entry(full, "function", obj))
            else:
                self.add(full, self.dump_value(full, obj))


def load_module(spec_str, paths):
    for p in paths:
        sys.path.insert(0, os.path.abspath(p))
    if os.path.isfile(spec_str):
        base = os.path.basename(spec_str).split(".")[0]
        if hasattr(os, "add_dll_directory"):
            os.add_dll_directory(os.path.dirname(os.path.abspath(spec_str)))
        spec = importlib.util.spec_from_file_location(base, spec_str)
        mod = importlib.util.module_from_spec(spec)
        sys.modules[base] = mod
        spec.loader.exec_module(mod)
        return mod
    return importlib.import_module(spec_str)


def to_lines(entries):
    lines = []
    for name in sorted(entries):
        e = entries[name]
        head = {k: v for k, v in e.items() if k not in ("doc", "overloads")}
        lines.append(f"{name} {json.dumps(head, sort_keys=True)}")
        for i, o in enumerate(e.get("overloads", [])):
            lines.append(f"{name} #{i} {o['sig']}")
            if o.get("doc"):
                lines.append(f"{name} #{i} doc {json.dumps(o['doc'])}")
        if e.get("doc"):
            lines.append(f"{name} doc {json.dumps(e['doc'])}")
    return lines


def cmd_dump(args):
    mod = load_module(args.module, args.path)
    d = Dumper(args.strip, mod.__name__)
    d.dump_module("M", mod)
    with open(args.output, "w", encoding="utf-8", newline="\n") as f:
        json.dump({"module": mod.__name__, "entries": d.entries}, f, indent=0, sort_keys=True)
    with open(args.output + ".txt", "w", encoding="utf-8", newline="\n") as f:
        f.write("\n".join(to_lines(d.entries)) + "\n")
    kinds = {}
    for e in d.entries.values():
        kinds[e["kind"]] = kinds.get(e["kind"], 0) + 1
    print(f"{len(d.entries)} entries: " + ", ".join(f"{k} {v}" for k, v in sorted(kinds.items())))


def cmd_diff(args):
    with open(args.old, encoding="utf-8") as f:
        old = json.load(f)["entries"]
    with open(args.new, encoding="utf-8") as f:
        new = json.load(f)["entries"]

    cats = {}

    def note(cat, text):
        cats.setdefault(cat, []).append(text)

    for name in sorted(set(old) | set(new)):
        a, b = old.get(name), new.get(name)
        if b is None:
            note("missing", f"{name} ({a['kind']})")
            continue
        if a is None:
            note("extra", f"{name} ({b['kind']})")
            continue
        if a["kind"] != b["kind"]:
            note("kind", f"{name}: {a['kind']} -> {b['kind']}")
            continue
        for key in sorted((set(a) | set(b)) - {"kind", "doc", "overloads"}):
            if a.get(key) != b.get(key):
                note(key, f"{name}: {a.get(key)!r} -> {b.get(key)!r}")
        sa = [o["sig"] for o in a.get("overloads", [])]
        sb = [o["sig"] for o in b.get("overloads", [])]
        if sa != sb:
            if sorted(sa) == sorted(sb):
                note("overload_order", name)
            else:
                lost = [s for s in sa if s not in sb]
                gained = [s for s in sb if s not in sa]
                note("signature", f"{name}:\n      - " + "\n      - ".join(lost) + "\n      + " + "\n      + ".join(gained))
        if not args.ignore_docs:
            da = [a.get("doc")] + [o.get("doc") for o in a.get("overloads", [])]
            db = [b.get("doc")] + [o.get("doc") for o in b.get("overloads", [])]
            if da != db and sa == sb:
                note("doc", name)

    total = sum(len(v) for v in cats.values())
    print(f"old {len(old)} entries, new {len(new)} entries, {total} differences")
    for cat in sorted(cats, key=lambda c: -len(cats[c])):
        items = cats[cat]
        print(f"\n== {cat}: {len(items)}")
        for item in items[: args.limit]:
            print("  " + item)
        if len(items) > args.limit:
            print(f"  ... {len(items) - args.limit} more")
    return 1 if total else 0


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = ap.add_subparsers(dest="cmd", required=True)
    d = sub.add_parser("dump")
    d.add_argument("module")
    d.add_argument("-o", "--output", required=True)
    d.add_argument("--path", action="append", default=[], help="Prepend to sys.path.")
    d.add_argument("--strip", action="append", default=[], help="Module prefix to remove from type names.")
    f = sub.add_parser("diff")
    f.add_argument("old")
    f.add_argument("new")
    f.add_argument("--limit", type=int, default=20)
    f.add_argument("--ignore-docs", action="store_true")
    args = ap.parse_args()
    if args.cmd == "dump":
        cmd_dump(args)
        return 0
    return cmd_diff(args)


if __name__ == "__main__":
    sys.exit(main())
