// The runtime support of the bindings.

/** The Emscripten module, after `init()`. */
export let M = null;
/** The raw wasm exports of the module: the C functions of the bindings. In wasm64 modules the pointers are `bigint`s here. */
export let C = null;

// The heap views. In a `-pthread` module another thread can grow the memory at any time, which makes the views of this thread stale
// (reads past the old length give `undefined`, writes are dropped), so every access goes through these functions, which compare
// the buffer first, like Emscripten's own `GROWABLE_HEAP_*`.
let heapBuffer = null;
let heap8, heapU8, heap16, heapU16, heap32, heapU32, heap64, heapU64, heapF32, heapF64;
function updateHeapViews()
{
    heapBuffer = M.wasmMemory.buffer;
    heap8 = new Int8Array(heapBuffer);
    heapU8 = new Uint8Array(heapBuffer);
    heap16 = new Int16Array(heapBuffer);
    heapU16 = new Uint16Array(heapBuffer);
    heap32 = new Int32Array(heapBuffer);
    heapU32 = new Uint32Array(heapBuffer);
    heap64 = new BigInt64Array(heapBuffer);
    heapU64 = new BigUint64Array(heapBuffer);
    heapF32 = new Float32Array(heapBuffer);
    heapF64 = new Float64Array(heapBuffer);
}
/** The current view over the wasm memory. Don't keep it: it becomes stale when the memory grows. */
export function HEAP8() {if (M.wasmMemory.buffer !== heapBuffer) updateHeapViews(); return heap8;}
export function HEAPU8() {if (M.wasmMemory.buffer !== heapBuffer) updateHeapViews(); return heapU8;}
export function HEAP16() {if (M.wasmMemory.buffer !== heapBuffer) updateHeapViews(); return heap16;}
export function HEAPU16() {if (M.wasmMemory.buffer !== heapBuffer) updateHeapViews(); return heapU16;}
export function HEAP32() {if (M.wasmMemory.buffer !== heapBuffer) updateHeapViews(); return heap32;}
export function HEAPU32() {if (M.wasmMemory.buffer !== heapBuffer) updateHeapViews(); return heapU32;}
export function HEAP64() {if (M.wasmMemory.buffer !== heapBuffer) updateHeapViews(); return heap64;}
export function HEAPU64() {if (M.wasmMemory.buffer !== heapBuffer) updateHeapViews(); return heapU64;}
export function HEAPF32() {if (M.wasmMemory.buffer !== heapBuffer) updateHeapViews(); return heapF32;}
export function HEAPF64() {if (M.wasmMemory.buffer !== heapBuffer) updateHeapViews(); return heapF64;}

/** The marker first argument of the constructors that wrap an existing pointer: `new X(RAW, pointer, owned, owner)`. */
export const RAW = Symbol("mrbind.raw");

/** How an object is passed to a C function. Matches the C enum `MR_C_PassBy`. */
export const PASS_BY_DEFAULT_CONSTRUCT = 0;
export const PASS_BY_COPY = 1;
export const PASS_BY_MOVE = 2;
export const PASS_BY_MOVE_AND_DESTROY = 3;
export const PASS_BY_DEFAULT_ARGUMENT = 4;
export const PASS_BY_NO_OBJECT = 5;

/** A C++ exception thrown by the C bindings. */
export class CppException extends Error
{
    constructor(message)
    {
        super(message);
        this.name = "CppException";
    }
}

/** Thrown by the wrappers of C++ functions returning `expected<T, E>` when the result holds an error. The message is the error converted to a string. */
export class UnexpectedResultException extends Error
{
    constructor(message)
    {
        super(message);
        this.name = "UnexpectedResultException";
    }
}

// What the wrapper must throw once the C call returns: a C++ exception message reported by the C bindings (a string),
// or whatever a JS callback threw (wrapped in an object).
let pending = null;

/** Throws if the last call into the C bindings threw a C++ exception, or a JS callback threw. The wrappers call this after every C call. */
export function check()
{
    if (pending !== null)
    {
        const p = pending;
        pending = null;
        if (typeof p === "string")
            throw new CppException(p);
        throw p.thrown;
    }
}

/** Called by the callback trampolines when the JS function throws. The exception is rethrown by the wrapper that made the C call. */
export function callbackFailed(thrown)
{
    if (pending === null)
        pending = {thrown};
}

/**
 * Converts what a wasm function threw to the error to rethrow: a C++ exception that escaped the C bindings becomes a `CppException`
 * (with the message when the module was linked with `-sEXPORT_EXCEPTION_HANDLING_HELPERS`), a pending JS callback exception is rethrown as is.
 */
export function cppError(thrown)
{
    if (pending !== null)
    {
        const p = pending;
        pending = null;
        if (typeof p !== "string")
            return p.thrown;
    }
    // A C++ exception is the exception pointer (JS EH), a `WebAssembly.Exception` (wasm EH), or Emscripten's own `CppException`
    // holding the pointer in `excPtr` (JS EH with `-sEXCEPTION_STACK_TRACES`, which `-sASSERTIONS` implies).
    let exc = thrown;
    if (exc !== null && typeof exc === "object" && "excPtr" in exc)
        exc = exc.excPtr;
    if (typeof exc === "bigint")
        exc = Number(exc); // In a wasm64 module.
    if (typeof exc === "number" || (typeof WebAssembly.Exception === "function" && exc instanceof WebAssembly.Exception))
    {
        let message = "C++ exception";
        if (typeof M.getExceptionMessage === "function")
        {
            try
            {
                const [type, text] = M.getExceptionMessage(exc);
                message = text ? type + ": " + text : type;
            }
            catch (e)
            {
                return thrown; // Not a C++ exception after all.
            }
        }
        if (typeof M.decrementExceptionRefcount === "function")
            M.decrementExceptionRefcount(exc); // Takes the same forms as `getExceptionMessage()`.
        return new CppException(message);
    }
    return thrown;
}

/**
 * Calls `func` (which calls into C), converting what it throws with `cppError()` and checking for a pending exception.
 * An escaping C++ exception leaves the wasm stack pointer where the throwing frame had it, so it's restored here.
 */
export function cppCall(func)
{
    const sp = M.stackSave();
    let ret;
    try
    {
        ret = func();
    }
    catch (e)
    {
        M.stackRestore(sp);
        throw cppError(e);
    }
    check();
    return ret;
}

function exceptionHandler(messages, typeNames, userdata)
{
    const base = Number(messages);
    let text = "";
    for (let i = 0;; i++)
    {
        const message = Number(HEAPU64()[(base + i * 8) / 8]);
        if (message === 0)
            break;
        if (i > 0)
            text += "\n";
        text += M.UTF8ToString(message);
    }
    pending = text;
}

/**
 * Binds the wrappers to an instantiated Emscripten module. The module must be linked with the flags from `emcc_link_flags.rsp`.
 * Called by `init()` and `initWithModule()` of the root module.
 */
export function init(module)
{
    if (M !== null)
        throw new Error("The bindings are already initialized.");
    if (!module || !module.wasmExports)
        throw new Error("Not an Emscripten module with exported `wasmExports`, see `emcc_link_flags.rsp`.");
    M = module;
    C = module.wasmExports;
    // An optimized link minifies the names of the wasm exports (an internal Emscripten setting), then the real names are only on
    // the `_name` wrappers of the module, which take and return the same raw values as the exports.
    if (typeof C["MR_A_AssignFromAnother"] !== "function")
    {
        C = {};
        for (const key in module)
        {
            if (key.length > 1 && key[0] === "_" && typeof module[key] === "function")
                C[key.slice(1)] = module[key];
        }
        if (typeof C["MR_A_AssignFromAnother"] !== "function")
            throw new Error("The module doesn't export the C bindings, see `emcc_link_flags.rsp` and `exported_functions.txt`.");
    }
    // C++ exceptions are reported by the C bindings through this callback, which stores the message until the wrapper checks it.
    if (typeof C.MR_C_SetExceptionHandler === "function")
        C.MR_C_SetExceptionHandler(BigInt(addFunction(exceptionHandler, "vppp")), BigInt(0));
}

/** Allocates on the wasm heap. */
export function malloc(size)
{
    const p = M._malloc(size);
    if (p === 0)
        throw new Error("The wasm heap is out of memory.");
    return p;
}

/** Frees memory allocated by `malloc()`. */
export function free(p)
{
    M._free(p);
}

// The wasm stack is small (64 KB by default) and `stackAlloc()` doesn't check for overflow, so the temporaries above this size go to the heap.
// They're freed by the `stackRestore()` of the wrapper that allocated them: `stackSave()` opens a frame, the wrappers always pair the two.
const STACK_TEMP_LIMIT = 4096;
const heapTemps = [];
const heapTempFrames = [];

/** Saves the wasm stack pointer and opens a frame for the temporaries. Restore with `stackRestore()` in a `finally`. */
export function stackSave()
{
    heapTempFrames.push(heapTemps.length);
    return M.stackSave();
}

/** Restores the wasm stack pointer and frees the heap temporaries of the frame. */
export function stackRestore(p)
{
    M.stackRestore(p);
    const n = heapTempFrames.pop();
    while (heapTemps.length > n)
        free(heapTemps.pop());
}

/** Allocates `size` bytes of temporary memory: on the wasm stack, or on the heap for the large ones. */
export function stackAlloc(size)
{
    if (size <= STACK_TEMP_LIMIT)
        return M.stackAlloc(size);
    const p = malloc(size);
    heapTemps.push(p);
    return p;
}

/** Copies `size` bytes from `src` to temporary memory, see `stackAlloc()`. */
export function stackCopy(src, size)
{
    const p = stackAlloc(size);
    HEAPU8().copyWithin(p, src, src + size);
    return p;
}

/** Allocates `size` bytes of temporary memory and calls `write` with the address, see `stackAlloc()`. */
export function stackScalar(size, write)
{
    const p = stackAlloc(size);
    write(p);
    return p;
}

let utf8End_ = 0;

/** Copies the UTF-8 encoding of a string to temporary memory (see `stackAlloc()`), with a null terminator. `utf8End()` then returns the end pointer. */
export function utf8(str)
{
    const len = M.lengthBytesUTF8(str);
    const p = stackAlloc(len + 1);
    M.stringToUTF8(str, p, len + 1);
    utf8End_ = p + len;
    return p;
}

/** The end pointer of the string last copied by `utf8()`. */
export function utf8End() {return utf8End_;}

/** Decodes a UTF-8 string of `size` bytes at `ptr`. */
export function string(ptr, size)
{
    return size === 0 ? "" : M.UTF8ToString(ptr, size);
}

/** The contents of a `std::string` owned by the C bindings, which is then destroyed. */
export function takeString(ptr)
{
    const ret = string(Number(cppCall(() => C.MR_C_std_string_data(BigInt(ptr)))), Number(cppCall(() => C.MR_C_std_string_size(BigInt(ptr)))));
    C.MR_C_std_string_Destroy(BigInt(ptr));
    return ret;
}

/** The pointer of a wrapper, or 0 for a null wrapper. */
export function ptr(object)
{
    return object == null ? 0 : object.rawPointer();
}

/** The pointer of a wrapper. Throws if the wrapper is null. */
export function ptrNonNull(object, name)
{
    if (object == null)
        throw new TypeError("The parameter `" + name + "` must not be null.");
    return object.rawPointer();
}

export function nonNull(value, name)
{
    if (value == null)
        throw new TypeError("The parameter `" + name + "` must not be null.");
    return value;
}

export function nonNullString(value, name)
{
    if (typeof value !== "string")
        throw new TypeError("The parameter `" + name + "` must be a string.");
    return value;
}

export function nonNullFunction(value, name)
{
    if (typeof value !== "function")
        throw new TypeError("The parameter `" + name + "` must be a function.");
    return value;
}

/** A 64-bit integer parameter: a `bigint` as is, a `number` truncated. */
export function toI64(value)
{
    return typeof value === "bigint" ? value : BigInt(Math.trunc(value));
}

/** Registers a JS function in the wasm function table. Needs `-sALLOW_TABLE_GROWTH`. */
export function addFunction(func, signature)
{
    return M.addFunction(func, signature);
}

// The JS functions held by the `std::function` instances, keyed by the ids that are passed to C as the user data pointers.
// Each entry is the function and its reference count: the copies of a `std::function` share the user data.
const CALLBACKS = new Map();
let nextCallbackId = 1;

/** Registers a function and returns its user data pointer, with one reference. */
export function newCallbackState(func)
{
    const id = nextCallbackId++;
    CALLBACKS.set(id, {func, refs: 1});
    return id;
}

/** The function registered under a user data pointer. */
export function callbackState(userdata)
{
    const entry = CALLBACKS.get(userdata);
    if (entry === undefined)
        throw new Error("Unknown callback state: " + userdata + ".");
    return entry.func;
}

// The `userdata_callback` of the C bindings: releases the user data of `this` object, then copies the other one into it, if any.
function callbackStateChanged(thisUserdata, otherUserdata)
{
    const slot = Number(thisUserdata);
    const other = Number(otherUserdata);
    const current = Number(HEAPU64()[(slot) / 8]);
    if (current !== 0)
    {
        const entry = CALLBACKS.get(current);
        if (entry !== undefined && --entry.refs === 0)
            CALLBACKS.delete(current);
        HEAPU64()[(slot) / 8] = BigInt(0);
    }
    if (other !== 0)
    {
        const entry = CALLBACKS.get(other);
        if (entry !== undefined)
            entry.refs++;
        HEAPU64()[(slot) / 8] = BigInt(other);
    }
}

let callbackStateStub_ = 0;
export function callbackStateStub()
{
    return callbackStateStub_ || (callbackStateStub_ = addFunction(callbackStateChanged, "vpp"));
}

/** A copy of `size` bytes at `src` as an owned struct wrapper, for the callbacks receiving structs by value. */
export function structCopy(cls, src, size)
{
    const p = malloc(size);
    HEAPU8().copyWithin(p, src, src + size);
    return new cls(RAW, p, true, null);
}

/** An owned struct wrapper filled by `write`, for the callbacks receiving singleton structs as scalars. */
export function structFromScalar(cls, size, write)
{
    const p = malloc(size);
    HEAPU8().fill(0, p, p + size);
    write(p);
    return new cls(RAW, p, true, null);
}

/** A copy of `count` scalars of the typed array class `cls` at `ptr`. */
export function typedArrayCopy(cls, ptr, count)
{
    return new cls(HEAPU8().buffer, ptr, count).slice();
}

/** A typed array of class `cls` over `count` scalars at `ptr` in the wasm memory, without a copy. Invalid once the memory grows. */
export function typedArrayAt(cls, ptr, count)
{
    return new cls(HEAPU8().buffer, ptr, count);
}

/** Zeroed memory for a struct. */
export function zeroStruct(size)
{
    const p = malloc(size);
    HEAPU8().fill(0, p, p + size);
    return p;
}

// Destroys the C++ objects of the wrappers that were garbage-collected without `delete()`.
const registry = new FinalizationRegistry((state) =>
{
    if (state.owned)
    {
        state.owned = false;
        state.destroy(state.ptr);
    }
});

/**
 * The base class of the wrappers of the opaque C++ classes.
 *
 * An instance either owns its C++ object (then the object is destroyed when `delete()` is called, or when the wrapper is garbage-collected),
 * or is a reference to an object owned by something else. References returned by methods keep their owner alive.
 * Since the garbage collector is not prompt, call `delete()` (or use `using`) on the large objects.
 */
export class CppObject
{
    /** Wraps a pointer from the C bindings. If `destroy` is not null, the object is owned and `destroy` is called on it when the wrapper dies. `owner` is kept alive as long as this wrapper is. */
    constructor(ptr, destroy, owner)
    {
        if (ptr === 0)
            throw new Error("The C bindings returned a null pointer.");
        this.__ptr = ptr;
        this.__owner = owner;
        this.__state = null;
        if (destroy)
        {
            this.__state = {ptr, destroy, owned: true};
            registry.register(this, this.__state, this);
        }
    }

    /** The address of the C++ object. Throws if the wrapper was deleted or moved from. */
    rawPointer()
    {
        if (this.__ptr === 0)
            throw new Error("This object was deleted or moved from.");
        return this.__ptr;
    }

    /** Does this wrapper own its C++ object? */
    isOwned() {return this.__state !== null && this.__state.owned;}

    /** Destroys the C++ object now, if owned. The wrapper can't be used after this. Calling it again does nothing. */
    delete()
    {
        if (this.__state !== null)
        {
            registry.unregister(this);
            if (this.__state.owned)
            {
                this.__state.owned = false;
                this.__state.destroy(this.__state.ptr);
            }
        }
        this.__ptr = 0;
        this.__owner = null;
    }

    /** Gives up the ownership of the C++ object and returns its pointer. The caller is responsible for destroying it. The wrapper can't be used after this. */
    release()
    {
        if (!this.isOwned())
            throw new Error("This object is not owned by the wrapper, it can't be moved from.");
        registry.unregister(this);
        this.__state.owned = false;
        const p = this.__ptr;
        this.__ptr = 0;
        this.__owner = null;
        return p;
    }
}
if (typeof Symbol.dispose === "symbol")
    CppObject.prototype[Symbol.dispose] = CppObject.prototype.delete;

/**
 * The base class of the wrappers of the C++ structs exposed with `--expose-as-struct`.
 *
 * An instance is a view over wasm memory holding the struct, the fields are accessors reading and writing it in place.
 * Instances created in JS own their memory (freed by `delete()` or by the garbage collector),
 * those returned by reference from the bindings point into memory owned by something else, which they keep alive.
 */
export class CppStruct extends CppObject
{
    constructor(ptr, owned, owner)
    {
        super(ptr, owned ? free : null, owner);
    }

    /** A copy of the struct, in its own memory. */
    copy()
    {
        const cls = this.constructor;
        const p = malloc(cls.SIZE);
        HEAPU8().copyWithin(p, this.rawPointer(), this.rawPointer() + cls.SIZE);
        return new cls(RAW, p, true, null);
    }

    /** Overwrites the contents with those of another struct. */
    set(other)
    {
        const src = ptrNonNull(other, "other");
        HEAPU8().copyWithin(this.rawPointer(), src, src + this.constructor.SIZE);
    }
}

/**
 * The base class of `int_output`, `float_output`, ... (named after the C type, like in the Python bindings), which the wrappers take for
 * the mutable scalar parameters: `int &` needs exactly one element, `int *` accepts null, one element, or an array.
 * An instance owns `length` scalars in wasm memory (freed by `delete()` or by the garbage collector), which the C++ functions read and write.
 */
export class ScalarOutput extends CppObject
{
    /** `size` elements equal to `value`, zero by default. */
    constructor(size = 1, value = undefined)
    {
        if (!Number.isSafeInteger(size) || size < 0)
            throw new RangeError("The size must be a non-negative integer.");
        super(malloc(Math.max(size, 1) * new.target.SIZE), free, null);
        this.length = size;
        for (let i = 0; i < size; i++)
            this.set(i, value === undefined ? new.target.ZERO : value);
    }

    /** The element `i`. */
    at(i)
    {
        return this.constructor.read(this.rawPointer() + scalarOutputIndex(this, i) * this.constructor.SIZE);
    }

    /** Sets the element `i`. */
    set(i, value)
    {
        if (!this.constructor.check(value))
            throw new TypeError("Expected " + this.constructor.TYPE + ", got " + typeof value + ".");
        this.constructor.write(this.rawPointer() + scalarOutputIndex(this, i) * this.constructor.SIZE, value);
    }

    /** The only element. Throws unless there is exactly one. */
    get value()
    {
        scalarOutputSingle(this);
        return this.at(0);
    }
    set value(value)
    {
        scalarOutputSingle(this);
        this.set(0, value);
    }

    /** A copy of the elements. */
    get values()
    {
        const ret = [];
        for (let i = 0; i < this.length; i++)
            ret.push(this.at(i));
        return ret;
    }

    toString()
    {
        return this.constructor.name + "[" + this.values.join(", ") + "]";
    }

    /** The pointer for a reference parameter: checks that there is exactly one element. */
    static ref(object, name)
    {
        const p = ptrNonNull(object, name);
        scalarOutputSingle(object);
        return p;
    }
}

function scalarOutputIndex(object, i)
{
    if (!Number.isSafeInteger(i) || i < 0 || i >= object.length)
        throw new RangeError("Index " + i + " is out of range, the size is " + object.length + ".");
    return i;
}

function scalarOutputSingle(object)
{
    if (object.length !== 1)
        throw new RangeError("Expected exactly one value, the size is " + object.length + ".");
}
