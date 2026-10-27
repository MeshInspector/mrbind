// The wrappers of the C bindings file `MR/test_declaration_order`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * A C++ enum: the constants are numbers, so this also holds values that aren't named constants.
 */
export declare enum MR_DeclOrder_A_E
{
}

/**
 * Here all classes are whitelisted using `--expose-as-struct`.
 * Generated from class `MR::DeclOrder::A`.
 *
 * Has the same layout as the C++ struct, the fields are accessed in place in wasm memory. `new X(ffi.RAW, pointer, owned, owner)` wraps existing memory.
 */
export declare class MR_DeclOrder_A extends ffi.CppStruct
{
    /** The size of the struct in bytes. */
    static readonly SIZE: number;
    static readonly ALIGNMENT: number;
    blah: number;
    /** Zero-initialized. */
    constructor();
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::DeclOrder::A::c`.
     *
     * Calls `MR_DeclOrder_A_c()`.
     */
    c(): L.MR_DeclOrder_A_B;
    /**
     * Generated from method `MR::DeclOrder::A::d`.
     *
     * Calls `MR_DeclOrder_A_d()`.
     */
    d(): L.MR_DeclOrder_A_E;
}

/**
 * Generated from class `MR::DeclOrder::A::B`.
 *
 * Has the same layout as the C++ struct, the fields are accessed in place in wasm memory. `new X(ffi.RAW, pointer, owned, owner)` wraps existing memory.
 */
export declare class MR_DeclOrder_A_B extends ffi.CppStruct
{
    /** The size of the struct in bytes. */
    static readonly SIZE: number;
    static readonly ALIGNMENT: number;
    bleh: number;
    /** Zero-initialized. */
    constructor();
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::DeclOrder::A::B::a`.
     *
     * Calls `MR_DeclOrder_A_B_a()`.
     */
    a(): L.MR_DeclOrder_A;
    /**
     * Generated from method `MR::DeclOrder::A::B::b`.
     *
     * Calls `MR_DeclOrder_A_B_b()`.
     */
    b(): L.MR_DeclOrder_A_E;
}

/**
 * Generated from class `MR::DeclOrder::C<false>`.
 *
 * Has the same layout as the C++ struct, the fields are accessed in place in wasm memory. `new X(ffi.RAW, pointer, owned, owner)` wraps existing memory.
 */
export declare class MR_DeclOrder_C_false extends ffi.CppStruct
{
    /** The size of the struct in bytes. */
    static readonly SIZE: number;
    static readonly ALIGNMENT: number;
    bleh: number;
    /** Zero-initialized. */
    constructor();
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::DeclOrder::C<false>::blah`.
     *
     * Calls `MR_DeclOrder_C_false_blah()`.
     */
    blah(): L.MR_DeclOrder_C_true;
}

/**
 * Generated from class `MR::DeclOrder::C<true>`.
 *
 * Has the same layout as the C++ struct, the fields are accessed in place in wasm memory. `new X(ffi.RAW, pointer, owned, owner)` wraps existing memory.
 */
export declare class MR_DeclOrder_C_true extends ffi.CppStruct
{
    /** The size of the struct in bytes. */
    static readonly SIZE: number;
    static readonly ALIGNMENT: number;
    bleh: number;
    /** Zero-initialized. */
    constructor();
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::DeclOrder::C<true>::blah`.
     *
     * Calls `MR_DeclOrder_C_true_blah()`.
     */
    blah(): L.MR_DeclOrder_C_false;
}

