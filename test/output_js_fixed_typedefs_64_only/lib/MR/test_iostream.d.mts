// The wrappers of the C bindings file `MR/test_iostream`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Generated from class `MR::IOStream::A`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_IOStream_A extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_IOStream_A_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::IOStream::A::A`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_IOStream_A_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_IOStream_A);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::IOStream::A::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_IOStream_A_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_IOStream_A): L.MR_IOStream_A;
}

/**
 * Generated from function `MR::IOStream::operator<<`.
 *
 * Calls `MR_C_print_MR_IOStream_A()`.
 */
export declare function MR_C_print_MR_IOStream_A(_1: L.MR_C_std_ostream, _2: L.MR_IOStream_A): void;

/**
 * Generated from function `MR::IOStream::operator>>`.
 *
 * Calls `MR_C_input_MR_IOStream_A()`.
 */
export declare function MR_C_input_MR_IOStream_A(_1: L.MR_C_std_istream, _2: L.MR_IOStream_A): void;

