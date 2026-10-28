// The wrappers of the C bindings file `MR/test_matching_layout`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Generated from class `MR::MatchingLayout::A`.
 *
 * Has the same layout as the C++ struct, the fields are accessed in place in wasm memory. `new X(ffi.RAW, pointer, owned, owner)` wraps existing memory.
 */
export declare class MR_MatchingLayout_A extends ffi.CppStruct
{
    /** The size of the struct in bytes. */
    static readonly SIZE: number;
    static readonly ALIGNMENT: number;
    /**
     * first
     */
    a: number;
    /**
     * second
     */
    b: number;
    /**
     * third
     */
    c: number;
    ll: bigint;
    /** The element of the array field `arr[3]`. */
    getArr(i0: number): number;
    setArr(i0: number, value: number): void;
    /** The element of the array field `arr2d[4][5]`. */
    getArr2d(i0: number, i1: number): number;
    setArr2d(i0: number, i1: number, value: number): void;
    /**
     * Having static fields is not an error! Those get their normal getters and setters.
     * Returns a pointer to a member variable of class `MR::MatchingLayout::A` named `x`.
     *
     * Calls `MR_MatchingLayout_A_Get_x()`.
     */
    static x: number;
    /** Zero-initialized. */
    constructor();
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
}

/**
 * Generated from class `MR::MatchingLayout::B`.
 *
 * Has the same layout as the C++ struct, the fields are accessed in place in wasm memory. `new X(ffi.RAW, pointer, owned, owner)` wraps existing memory.
 */
export declare class MR_MatchingLayout_B extends ffi.CppStruct
{
    /** The size of the struct in bytes. */
    static readonly SIZE: number;
    static readonly ALIGNMENT: number;
    x: number;
    a: L.MR_MatchingLayout_A;
    y: number;
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_MatchingLayout_B_DefaultConstruct()`.
     */
    constructor();
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
}

/**
 * Generated from function `MR::MatchingLayout::foo`.
 *
 * Calls `MR_MatchingLayout_foo()`.
 */
export declare function MR_MatchingLayout_foo(): L.MR_MatchingLayout_B;

/**
 * Generated from function `MR::MatchingLayout::bar`.
 *
 * Calls `MR_MatchingLayout_bar()`.
 */
export declare function MR_MatchingLayout_bar(_1: L.MR_MatchingLayout_B): void;

/**
 * Generated from function `MR::MatchingLayout::baz`.
 *
 * Calls `MR_MatchingLayout_baz()`. `_1` defaults to `MR::MatchingLayout::B{}`.
 */
export declare function MR_MatchingLayout_baz(_1?: L.MR_MatchingLayout_B | null): void;

/**
 * Generated from function `MR::MatchingLayout::bleh`.
 *
 * Calls `MR_MatchingLayout_bleh()`.
 */
export declare function MR_MatchingLayout_bleh(_1?: L.MR_MatchingLayout_B | null): L.MR_MatchingLayout_B | null;

