// The wrappers of the C bindings file `MR/test_size_t_ptrdiff_t`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Generated from class `MR::TestSizeT::A<MR_C_uint64_t>`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_TestSizeT_A_uint64_t extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_TestSizeT_A_uint64_t_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::TestSizeT::A<MR_C_uint64_t>::A`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_TestSizeT_A_uint64_t_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_TestSizeT_A_uint64_t);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::TestSizeT::A<MR_C_uint64_t>::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_TestSizeT_A_uint64_t_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_TestSizeT_A_uint64_t): L.MR_TestSizeT_A_uint64_t;
    /**
     * Generated from method `MR::TestSizeT::A<MR_C_uint64_t>::foo`.
     *
     * Calls `MR_TestSizeT_A_uint64_t_foo()`.
     */
    foo(): bigint;
}

/**
 * Generated from function `MR::TestSizeT::foo`.
 *
 * Calls `MR_TestSizeT_foo_uint64_t()`.
 */
export declare function MR_TestSizeT_foo_uint64_t(_1: number | bigint): bigint;

/**
 * Generated from function `MR::TestSizeT::foo`.
 *
 * Calls `MR_TestSizeT_foo_uint64_t_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
 */
export declare function MR_TestSizeT_foo_uint64_t_ptr(_1: number): number;

/**
 * Generated from function `MR::TestSizeT::foo`.
 *
 * Calls `MR_TestSizeT_foo_std_vector_uint64_t()`.
 */
export declare function MR_TestSizeT_foo_std_vector_uint64_t(_1: L.MR_C_std_vector_uint64_t): L.MR_C_std_vector_uint64_t;

/**
 * Generated from function `MR::TestSizeT::foo`.
 *
 * Calls `MR_TestSizeT_foo_int64_t()`.
 */
export declare function MR_TestSizeT_foo_int64_t(_1: number | bigint): bigint;

/**
 * Generated from function `MR::TestSizeT::foo`.
 *
 * Calls `MR_TestSizeT_foo_int64_t_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
 */
export declare function MR_TestSizeT_foo_int64_t_ptr(_1: number): number;

/**
 * Generated from function `MR::TestSizeT::foo`.
 *
 * Calls `MR_TestSizeT_foo_std_vector_int64_t()`.
 */
export declare function MR_TestSizeT_foo_std_vector_int64_t(_1: L.MR_C_std_vector_int64_t): L.MR_C_std_vector_int64_t;

