// A smoke test for the generated JS bindings. Needs the C bindings compiled to `test/output_js/bleh.mjs`, see `make_js.sh`.

import * as lib from "../output_js/index.mjs";

function check(condition, what)
{
    if (!condition)
        throw new Error("Check failed: " + what);
}

await lib.init();
const MR = lib.MR;

// An opaque class with a `std::string` field.
{
    const a = new MR.A();
    check(a.x.toString() === "", "default x");
    a.x = "hello";
    check(a.x.toString() === "hello", "set x");
    const a2 = new MR.A(a); // The copy constructor.
    a.x.assignFrom("changed");
    check(a.x.toString() === "changed", "assign through the reference");
    check(a2.x.toString() === "hello", "the copy is independent");
    check(a.isOwned() && !a.x.isOwned(), "ownership");
    a.delete();
    let threw = false;
    try
    {
        a.x;
    }
    catch (e)
    {
        threw = true;
    }
    check(threw, "deleted object");
}

// Free functions, `std::string` parameters become strings, `std::string` returned by value becomes a string.
MR.StdString.Set("from js");
MR.StdString.SetWithDefault(null);
MR.StdString.SetWithDefault();
check(MR.StdString.Get() === "Hello!", "get");
const s2 = new MR.CS.std_string();
MR.StdString.WriteToRef(s2);
check(s2.toString() === "Hello!", "write to ref");
MR.StdString.WriteToPtr(s2);
check(s2 instanceof lib.CppObject, "CppObject");

// `std::vector<int>`.
const v = new MR.CS.std_vector_int();
check(v.empty(), "empty");
v.resize(3);
check(v.size() === 3, "size");
check(v.at(1) === 0, "at");
check(v.front() === 0 && v.back() === 0, "front and back");
v.push_back(7);
check(v.at(3) === 7, "push_back");
MR.StdContainers.Set(v);
MR.StdContainers.ConstRef(v);
const v2 = MR.StdContainers.Get();
check(v2.empty(), "get");
const v3 = new MR.CS.std_vector_int(v);
check(v3.size() === 4, "copy");

// Enums are numbers.
check(MR.CSharp.test_enum(MR.CSharp.E1.a, null) === MR.CSharp.E1.b, "enum default");
check(MR.CSharp.test_enum(MR.CSharp.E1.a) === MR.CSharp.E1.b, "enum default omitted");
check(MR.CSharp.test_enum(MR.CSharp.E1.a, MR.CSharp.E1.a) === MR.CSharp.E1.a, "enum");
check(MR.CSharp.E1[20] === "b", "enum reverse mapping");

// Exposed structs are views over wasm memory with the C++ layout.
const ex = new MR.CSharp.ExposedLayout();
ex.x = 1;
ex.y = 2;
ex.z = 3;
ex.setArr(2, 3);
ex.b = true;
ex.setBa(1, 2, true);
check(ex.x === 1 && ex.y === 2 && ex.z === 3 && ex.getArr(2) === 3 && ex.b === true && ex.getBa(1, 2) === true && ex.getBa(0, 0) === false, "fields");
ex.foo();
ex.bar();
MR.CSharp.ExposedLayout.blah();
const ex2 = ex.copy();
ex.x = 10;
check(ex2.x === 1, "struct copy");
check(MR.CSharp.ExposedLayout.SIZE > 0, "SIZE");

// A C++ exception becomes a `CppException`.
let caught = false;
try
{
    new MR.CS.std_vector_int().at(100); // `std::vector::at()` throws `std::out_of_range`.
}
catch (e)
{
    caught = e instanceof lib.CppException;
}
check(caught, "exception");

// `std::function` from a JS function. The copies of the `std::function` share it.
let counter = 0;
const f = MR.CS.std_function_int_from_int_int.of((x, y) => {counter++; return x + y;});
check(f.has_value(), "has_value");
check(f.call(2, 3) === 5, "call");
const f2 = new MR.CS.std_function_int_from_int_int(f);
check(f2.call(10, 20) === 30, "call the copy");
check(counter === 2, "shared function");
MR.StdFunction.foo(f);
MR.StdFunction.foo((x, y) => x * y); // A plain function is wrapped into a temporary.
const e = new MR.CS.std_function_void();
check(!e.has_value(), "empty");
e.assignFn(() => {});
check(e.has_value(), "assigned");
// Classes passed and returned by value.
const g = MR.CS.std_function_MR_StdFunction_A.of(() =>
{
    const a = new MR.StdFunction.A();
    a.a = "made in js";
    return a;
});
check(g.call().a.toString() === "made in js", "class returned by value");
const h = MR.CS.std_function_void_from_MR_StdFunction_A.of(a => check(a.a.toString() === "made in js", "class passed by reference"));
h.call(g.call());
// An exception thrown by the function is rethrown by the wrapper that called into C.
const bad = MR.CS.std_function_void.of(() => {throw new RangeError("from the function");});
caught = false;
try
{
    bad.call();
}
catch (error)
{
    caught = error instanceof RangeError && error.message === "from the function";
}
check(caught, "function exception");

// Casts between a class and its bases.
const b = new MR.Bases.B();
const aBase = b.upcastToA();
const back = MR.Bases.B.staticDowncastFromA(aBase);
check(back.rawPointer() === b.rawPointer(), "downcast gives the same object");
check(!aBase.isOwned() && b.isOwned(), "the cast result is a reference");

// `expected<T, E>` returned by value is unwrapped: the value, or `UnexpectedResultException`.
check(MR.StdExpected.GetExp() === 0, "expected<int> unwrapped");
MR.StdExpected.GetExpVoid();
check(new MR.CS.std_expected_int_std_string().valueOrThrow() === 0, "valueOrThrow");

// `using` disposes.
if (typeof Symbol.dispose === "symbol")
{
    const w = new MR.CS.std_vector_int();
    w[Symbol.dispose]();
    check(!w.isOwned(), "disposed");
}

console.log("All JS binding tests passed.");
