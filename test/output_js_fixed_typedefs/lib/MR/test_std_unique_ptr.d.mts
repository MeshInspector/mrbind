// The wrappers of the C bindings file `MR/test_std_unique_ptr`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Now with a class:
 * Generated from class `MR::StdUniquePtr::A`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_StdUniquePtr_A extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_StdUniquePtr_A_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::StdUniquePtr::A::A`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_StdUniquePtr_A_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_StdUniquePtr_A);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::StdUniquePtr::A::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_StdUniquePtr_A_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_StdUniquePtr_A): L.MR_StdUniquePtr_A;
}

/**
 * Generated from function `MR::StdUniquePtr::GetInt`.
 *
 * Calls `MR_StdUniquePtr_GetInt()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
 */
export declare function MR_StdUniquePtr_GetInt(): number;

/**
 * Generated from function `MR::StdUniquePtr::SetInt`.
 *
 * Calls `MR_StdUniquePtr_SetInt()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
 */
export declare function MR_StdUniquePtr_SetInt(_1: number): void;

/**
 * Generated from function `MR::StdUniquePtr::SetIntConstRef`.
 *
 * Calls `MR_StdUniquePtr_SetIntConstRef()`.
 */
export declare function MR_StdUniquePtr_SetIntConstRef(_1: L.MR_C_std_unique_ptr_int32_t): void;

/**
 * Generated from function `MR::StdUniquePtr::SetIntDefTrivial`.
 *
 * Calls `MR_StdUniquePtr_SetIntDefTrivial()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `_1` defaults to `{}`.
 */
export declare function MR_StdUniquePtr_SetIntDefTrivial(_1: number): void;

/**
 * Generated from function `MR::StdUniquePtr::SetIntDef`.
 *
 * Calls `MR_StdUniquePtr_SetIntDef()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `_1` defaults to `std::make_unique<int>(42)`.
 */
export declare function MR_StdUniquePtr_SetIntDef(_1: number): void;

/**
 * Generated from function `MR::StdUniquePtr::SetIntLvalueRef`.
 *
 * Calls `MR_StdUniquePtr_SetIntLvalueRef()`.
 */
export declare function MR_StdUniquePtr_SetIntLvalueRef(_1: L.MR_C_std_unique_ptr_int32_t): void;

/**
 * Generated from function `MR::StdUniquePtr::SetIntLvalueConstRef`.
 *
 * Calls `MR_StdUniquePtr_SetIntLvalueConstRef()`.
 */
export declare function MR_StdUniquePtr_SetIntLvalueConstRef(_1: L.MR_C_std_unique_ptr_int32_t): void;

/**
 * Generated from function `MR::StdUniquePtr::SetIntRvalueRef`.
 *
 * Calls `MR_StdUniquePtr_SetIntRvalueRef()`.
 */
export declare function MR_StdUniquePtr_SetIntRvalueRef(_1: number): void;

/**
 * Generated from function `MR::StdUniquePtr::SetIntRvalueConstRef`.
 *
 * Calls `MR_StdUniquePtr_SetIntRvalueConstRef()`.
 */
export declare function MR_StdUniquePtr_SetIntRvalueConstRef(_1: number): void;

/**
 * Generated from function `MR::StdUniquePtr::GetIntArr`.
 *
 * Calls `MR_StdUniquePtr_GetIntArr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
 */
export declare function MR_StdUniquePtr_GetIntArr(): number;

/**
 * Generated from function `MR::StdUniquePtr::SetIntArr`.
 *
 * Calls `MR_StdUniquePtr_SetIntArr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
 */
export declare function MR_StdUniquePtr_SetIntArr(_1: number): void;

/**
 * Generated from function `MR::StdUniquePtr::SetIntArrDefTrivial`.
 *
 * Calls `MR_StdUniquePtr_SetIntArrDefTrivial()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `_1` defaults to `{}`.
 */
export declare function MR_StdUniquePtr_SetIntArrDefTrivial(_1: number): void;

/**
 * Generated from function `MR::StdUniquePtr::SetIntArrDef`.
 *
 * Calls `MR_StdUniquePtr_SetIntArrDef()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `_1` defaults to `std::make_unique<int[]>(42)`.
 */
export declare function MR_StdUniquePtr_SetIntArrDef(_1: number): void;

/**
 * Generated from function `MR::StdUniquePtr::GetClass`.
 *
 * Calls `MR_StdUniquePtr_GetClass()`.
 */
export declare function MR_StdUniquePtr_GetClass(): L.MR_StdUniquePtr_A;

/**
 * Generated from function `MR::StdUniquePtr::SetClass`.
 *
 * Calls `MR_StdUniquePtr_SetClass()`.
 */
export declare function MR_StdUniquePtr_SetClass(_1: L.MR_StdUniquePtr_A): void;

/**
 * Generated from function `MR::StdUniquePtr::SetClassConstRef`.
 *
 * Calls `MR_StdUniquePtr_SetClassConstRef()`.
 */
export declare function MR_StdUniquePtr_SetClassConstRef(_1: L.MR_C_std_unique_ptr_MR_StdUniquePtr_A): void;

/**
 * Generated from function `MR::StdUniquePtr::SetClassDefTrivial`.
 *
 * Calls `MR_StdUniquePtr_SetClassDefTrivial()`. `_1` defaults to `{}`.
 */
export declare function MR_StdUniquePtr_SetClassDefTrivial(_1: L.MR_StdUniquePtr_A): void;

/**
 * Generated from function `MR::StdUniquePtr::SetClassDef`.
 *
 * Calls `MR_StdUniquePtr_SetClassDef()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `_1` defaults to `std::make_unique<MR::StdUniquePtr::A>(MR::StdUniquePtr::A{})`.
 */
export declare function MR_StdUniquePtr_SetClassDef(_1: number): void;

/**
 * Generated from function `MR::StdUniquePtr::SetClassLvalueRef`.
 *
 * Calls `MR_StdUniquePtr_SetClassLvalueRef()`.
 */
export declare function MR_StdUniquePtr_SetClassLvalueRef(_1: L.MR_C_std_unique_ptr_MR_StdUniquePtr_A): void;

/**
 * Generated from function `MR::StdUniquePtr::SetClassLvalueConstRef`.
 *
 * Calls `MR_StdUniquePtr_SetClassLvalueConstRef()`.
 */
export declare function MR_StdUniquePtr_SetClassLvalueConstRef(_1: L.MR_C_std_unique_ptr_MR_StdUniquePtr_A): void;

/**
 * Generated from function `MR::StdUniquePtr::SetClassRvalueRef`.
 *
 * Calls `MR_StdUniquePtr_SetClassRvalueRef()`.
 */
export declare function MR_StdUniquePtr_SetClassRvalueRef(_1: L.MR_StdUniquePtr_A): void;

/**
 * Generated from function `MR::StdUniquePtr::SetClassRvalueConstRef`.
 *
 * Calls `MR_StdUniquePtr_SetClassRvalueConstRef()`.
 */
export declare function MR_StdUniquePtr_SetClassRvalueConstRef(_1: L.MR_StdUniquePtr_A): void;

/**
 * Generated from function `MR::StdUniquePtr::GetClassArr`.
 *
 * Calls `MR_StdUniquePtr_GetClassArr()`.
 */
export declare function MR_StdUniquePtr_GetClassArr(): L.MR_StdUniquePtr_A;

/**
 * Generated from function `MR::StdUniquePtr::SetClassArr`.
 *
 * Calls `MR_StdUniquePtr_SetClassArr()`.
 */
export declare function MR_StdUniquePtr_SetClassArr(_1: L.MR_StdUniquePtr_A): void;

/**
 * Generated from function `MR::StdUniquePtr::SetClassArrDefTrivial`.
 *
 * Calls `MR_StdUniquePtr_SetClassArrDefTrivial()`. `_1` defaults to `{}`.
 */
export declare function MR_StdUniquePtr_SetClassArrDefTrivial(_1: L.MR_StdUniquePtr_A): void;

/**
 * Generated from function `MR::StdUniquePtr::SetClassArrDef`.
 *
 * Calls `MR_StdUniquePtr_SetClassArrDef()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `_1` defaults to `std::make_unique<MR::StdUniquePtr::A[]>(42)`.
 */
export declare function MR_StdUniquePtr_SetClassArrDef(_1: number): void;

/**
 * Try const element types:
 * Generated from function `MR::StdUniquePtr::GetConstInt`.
 *
 * Calls `MR_StdUniquePtr_GetConstInt()`.
 */
export declare function MR_StdUniquePtr_GetConstInt(): number;

/**
 * Generated from function `MR::StdUniquePtr::GetConstIntArr`.
 *
 * Calls `MR_StdUniquePtr_GetConstIntArr()`.
 */
export declare function MR_StdUniquePtr_GetConstIntArr(): number;

/**
 * Generated from function `MR::StdUniquePtr::GetConstClass`.
 *
 * Calls `MR_StdUniquePtr_GetConstClass()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
 */
export declare function MR_StdUniquePtr_GetConstClass(): number;

/**
 * Generated from function `MR::StdUniquePtr::GetConstClassArr`.
 *
 * Calls `MR_StdUniquePtr_GetConstClassArr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
 */
export declare function MR_StdUniquePtr_GetConstClassArr(): number;

/**
 * Here `std::unique_ptr<float>` never gets emitted as an actual type (since we don't have non-null default arguments), so its header should not be emitted.
 * Generated from function `MR::StdUniquePtr::GetFloat`.
 *
 * Calls `MR_StdUniquePtr_GetFloat()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
 */
export declare function MR_StdUniquePtr_GetFloat(): number;

/**
 * Generated from function `MR::StdUniquePtr::SetFloat`.
 *
 * Calls `MR_StdUniquePtr_SetFloat()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
 */
export declare function MR_StdUniquePtr_SetFloat(_1: number): void;

/**
 * Generated from function `MR::StdUniquePtr::SetFloatDefTrivial`.
 *
 * Calls `MR_StdUniquePtr_SetFloatDefTrivial()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `_1` defaults to `{}`.
 */
export declare function MR_StdUniquePtr_SetFloatDefTrivial(_1: number): void;

