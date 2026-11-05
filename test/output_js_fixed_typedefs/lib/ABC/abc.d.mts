// The wrappers of the C bindings file `ABC/abc`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * A sub-library that nothing else uses. `make_csharp.sh` skips it in one of the C# variants (`--skip-split-lib`).
 * Generated from class `MR::SeparateABC`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_SeparateABC extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_SeparateABC_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::SeparateABC::SeparateABC`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_SeparateABC_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_SeparateABC);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::SeparateABC::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_SeparateABC_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_SeparateABC): L.MR_SeparateABC;
}

/**
 * Generated from function `MR::GetSeparateVecABC`.
 *
 * Calls `MR_GetSeparateVecABC()`.
 */
export declare function MR_GetSeparateVecABC(): L.MR_C_std_vector_MR_SeparateABC;

