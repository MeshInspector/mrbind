// The wrappers of the C bindings file `MR/test_size_t_ptrdiff_t`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Generated from class `MR::TestSizeT::A<unsigned long>`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_TestSizeT_A_unsigned_long extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_TestSizeT_A_unsigned_long_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::TestSizeT::A<unsigned long>::A`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_TestSizeT_A_unsigned_long_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_TestSizeT_A_unsigned_long);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::TestSizeT::A<unsigned long>::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_TestSizeT_A_unsigned_long_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_TestSizeT_A_unsigned_long): L.MR_TestSizeT_A_unsigned_long;
    /**
     * Generated from method `MR::TestSizeT::A<unsigned long>::foo`.
     *
     * Calls `MR_TestSizeT_A_unsigned_long_foo()`.
     */
    foo(): number;
}

/**
 * Generated from function `MR::TestSizeT::foo`.
 *
 * Calls `MR_TestSizeT_foo_unsigned_long()`.
 */
export declare function MR_TestSizeT_foo_unsigned_long(_1: number): number;

/**
 * Generated from function `MR::TestSizeT::foo`.
 *
 * Calls `MR_TestSizeT_foo_unsigned_long_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
 */
export declare function MR_TestSizeT_foo_unsigned_long_ptr(_1: number): number;

/**
 * Generated from function `MR::TestSizeT::foo`.
 *
 * Calls `MR_TestSizeT_foo_std_vector_unsigned_long()`.
 */
export declare function MR_TestSizeT_foo_std_vector_unsigned_long(_1: L.MR_C_std_vector_unsigned_long): L.MR_C_std_vector_unsigned_long;

/**
 * Generated from function `MR::TestSizeT::foo`.
 *
 * Calls `MR_TestSizeT_foo_long()`.
 */
export declare function MR_TestSizeT_foo_long(_1: number): number;

/**
 * Generated from function `MR::TestSizeT::foo`.
 *
 * Calls `MR_TestSizeT_foo_long_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
 */
export declare function MR_TestSizeT_foo_long_ptr(_1: number): number;

/**
 * Generated from function `MR::TestSizeT::foo`.
 *
 * Calls `MR_TestSizeT_foo_std_vector_long()`.
 */
export declare function MR_TestSizeT_foo_std_vector_long(_1: L.MR_C_std_vector_long): L.MR_C_std_vector_long;

