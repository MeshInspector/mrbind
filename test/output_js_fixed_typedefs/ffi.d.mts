// The runtime support of the bindings.

// `Symbol.dispose` is only declared by the `esnext.disposable` lib of TypeScript, so declare it here too (the declarations merge).
declare global
{
    interface SymbolConstructor
    {
        readonly dispose: unique symbol;
    }
}

/** The Emscripten module, after `init()`. */
export let M: any;
/** The raw wasm exports of the module: the C functions of the bindings. In wasm64 modules the pointers are `bigint`s here. */
export let C: any;
/** The current view over the wasm memory. Don't keep it: it becomes stale when the memory grows. */
export function HEAP8(): Int8Array;
export function HEAPU8(): Uint8Array;
export function HEAP16(): Int16Array;
export function HEAPU16(): Uint16Array;
export function HEAP32(): Int32Array;
export function HEAPU32(): Uint32Array;
export function HEAP64(): BigInt64Array;
export function HEAPU64(): BigUint64Array;
export function HEAPF32(): Float32Array;
export function HEAPF64(): Float64Array;
/** The marker first argument of the constructors that wrap an existing pointer: `new X(RAW, pointer, owned, owner)`. */
export const RAW: unique symbol;
export const PASS_BY_DEFAULT_CONSTRUCT: 0;
export const PASS_BY_COPY: 1;
export const PASS_BY_MOVE: 2;
export const PASS_BY_MOVE_AND_DESTROY: 3;
export const PASS_BY_DEFAULT_ARGUMENT: 4;
export const PASS_BY_NO_OBJECT: 5;
/** A C++ exception thrown by the C bindings. */
export class CppException extends Error {}
/** Thrown by the wrappers of C++ functions returning `expected<T, E>` when the result holds an error. The message is the error converted to a string. */
export class UnexpectedResultException extends Error {}
export function check(): void;
export function callbackFailed(thrown: unknown): void;
export function cppError(thrown: unknown): unknown;
export function cppCall<T>(func: () => T): T;
export function init(module: any): void;
export function malloc(size: number): number;
export function free(p: number): void;
export function stackSave(): number;
export function stackRestore(p: number): void;
export function stackAlloc(size: number): number;
export function stackCopy(src: number, size: number): number;
export function stackScalar(size: number, write: (p: number) => void): number;
export function utf8(str: string): number;
export function utf8End(): number;
export function string(ptr: number, size: number): string;
export function takeString(ptr: number): string;
export function ptr(object: CppObject | null | undefined): number;
export function ptrNonNull(object: CppObject | null | undefined, name: string): number;
export function nonNull<T>(value: T | null | undefined, name: string): T;
export function nonNullString(value: unknown, name: string): string;
export function nonNullFunction<T>(value: T, name: string): T;
export function toI64(value: number | bigint): bigint;
export function addFunction(func: Function, signature: string): number;
export function newCallbackState(func: Function): number;
export function callbackState(userdata: number): Function;
export function callbackStateStub(): number;
export function structCopy<T>(cls: new (...args: any[]) => T, src: number, size: number): T;
export function structFromScalar<T>(cls: new (...args: any[]) => T, size: number, write: (p: number) => void): T;
export function zeroStruct(size: number): number;
export function typedArrayCopy<T>(cls: new (buffer: ArrayBufferLike, byteOffset: number, length: number) => T, ptr: number, count: number): T;
export function typedArrayAt<T>(cls: new (buffer: ArrayBufferLike, byteOffset: number, length: number) => T, ptr: number, count: number): T;
/**
 * The base class of the wrappers of the opaque C++ classes.
 *
 * An instance either owns its C++ object (then the object is destroyed when `delete()` is called, or when the wrapper is garbage-collected),
 * or is a reference to an object owned by something else. References returned by methods keep their owner alive.
 */
export class CppObject
{
    constructor(ptr: number, destroy: ((ptr: number) => void) | null, owner: unknown);
    /** The address of the C++ object. Throws if the wrapper was deleted or moved from. */
    rawPointer(): number;
    /** Does this wrapper own its C++ object? */
    isOwned(): boolean;
    /** Destroys the C++ object now, if owned. The wrapper can't be used after this. Calling it again does nothing. */
    delete(): void;
    [Symbol.dispose](): void;
    /** Gives up the ownership of the C++ object and returns its pointer. The caller is responsible for destroying it. The wrapper can't be used after this. */
    release(): number;
}
/**
 * The base class of the wrappers of the C++ structs exposed with `--expose-as-struct`.
 *
 * An instance is a view over wasm memory holding the struct, the fields are accessors reading and writing it in place.
 */
export class CppStruct extends CppObject
{
    constructor(ptr: number, owned: boolean, owner: unknown);
    /** A copy of the struct, in its own memory. */
    copy(): this;
    /** Overwrites the contents with those of another struct. */
    set(other: this): void;
}
/**
 * The base class of `int_output`, `float_output`, ... (named after the C type, like in the Python bindings), which the wrappers take for
 * the mutable scalar parameters: `int &` needs exactly one element, `int *` accepts null, one element, or an array.
 * An instance owns `length` scalars in wasm memory (freed by `delete()` or by the garbage collector), which the C++ functions read and write.
 */
export class ScalarOutput<T> extends CppObject
{
    /** `size` elements equal to `value`, zero by default. */
    constructor(size?: number, value?: T);
    readonly length: number;
    /** The element `i`. */
    at(i: number): T;
    /** Sets the element `i`. */
    set(i: number, value: T): void;
    /** The only element. Throws unless there is exactly one. */
    value: T;
    /** A copy of the elements. */
    readonly values: T[];
    /** The pointer for a reference parameter: checks that there is exactly one element. */
    static ref(object: ScalarOutput<unknown> | null | undefined, name: string): number;
}
