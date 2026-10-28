// The wrappers of the C bindings file `MR/test_std_shared_ptr`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Now with a class:
 * Generated from class `MR::StdSharedPtr::A`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_StdSharedPtr_A extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_StdSharedPtr_A_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::StdSharedPtr::A::A`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_StdSharedPtr_A_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_StdSharedPtr_A);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::StdSharedPtr::A::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_StdSharedPtr_A_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_StdSharedPtr_A): L.MR_StdSharedPtr_A;
}

/**
 * Generated from function `MR::StdSharedPtr::GetInt`.
 *
 * Calls `MR_StdSharedPtr_GetInt()`.
 */
export declare function MR_StdSharedPtr_GetInt(): L.MR_C_std_shared_ptr_int;

/**
 * Generated from function `MR::StdSharedPtr::SetInt`.
 *
 * Calls `MR_StdSharedPtr_SetInt()`.
 */
export declare function MR_StdSharedPtr_SetInt(_1: L.MR_C_std_shared_ptr_int): void;

/**
 * Generated from function `MR::StdSharedPtr::SetIntConstRef`.
 *
 * Calls `MR_StdSharedPtr_SetIntConstRef()`.
 */
export declare function MR_StdSharedPtr_SetIntConstRef(_1: L.MR_C_std_shared_ptr_int): void;

/**
 * Generated from function `MR::StdSharedPtr::SetIntDefTrivial`.
 *
 * Calls `MR_StdSharedPtr_SetIntDefTrivial()`. `_1` defaults to `{}`.
 */
export declare function MR_StdSharedPtr_SetIntDefTrivial(_1?: L.MR_C_std_shared_ptr_int | null): void;

/**
 * Generated from function `MR::StdSharedPtr::SetIntDef`.
 *
 * Calls `MR_StdSharedPtr_SetIntDef()`. `_1` defaults to `std::make_unique<int>(42)`.
 */
export declare function MR_StdSharedPtr_SetIntDef(_1?: L.MR_C_std_shared_ptr_int | null): void;

/**
 * Generated from function `MR::StdSharedPtr::SetIntLvalueRef`.
 *
 * Calls `MR_StdSharedPtr_SetIntLvalueRef()`.
 */
export declare function MR_StdSharedPtr_SetIntLvalueRef(_1: L.MR_C_std_shared_ptr_int): void;

/**
 * Generated from function `MR::StdSharedPtr::SetIntLvalueConstRef`.
 *
 * Calls `MR_StdSharedPtr_SetIntLvalueConstRef()`.
 */
export declare function MR_StdSharedPtr_SetIntLvalueConstRef(_1: L.MR_C_std_shared_ptr_int): void;

/**
 * Generated from function `MR::StdSharedPtr::SetIntRvalueRef`.
 *
 * Calls `MR_StdSharedPtr_SetIntRvalueRef()`.
 */
export declare function MR_StdSharedPtr_SetIntRvalueRef(_1: L.MR_C_std_shared_ptr_int): void;

/**
 * Generated from function `MR::StdSharedPtr::SetIntRvalueConstRef`.
 *
 * Calls `MR_StdSharedPtr_SetIntRvalueConstRef()`.
 */
export declare function MR_StdSharedPtr_SetIntRvalueConstRef(_1: L.MR_C_std_shared_ptr_int): void;

/**
 * Generated from function `MR::StdSharedPtr::GetIntArr`.
 *
 * Calls `MR_StdSharedPtr_GetIntArr()`.
 */
export declare function MR_StdSharedPtr_GetIntArr(): L.MR_C_std_shared_ptr_int_array;

/**
 * Generated from function `MR::StdSharedPtr::SetIntArr`.
 *
 * Calls `MR_StdSharedPtr_SetIntArr()`.
 */
export declare function MR_StdSharedPtr_SetIntArr(_1: L.MR_C_std_shared_ptr_int_array): void;

/**
 * Generated from function `MR::StdSharedPtr::SetIntArrDefTrivial`.
 *
 * Calls `MR_StdSharedPtr_SetIntArrDefTrivial()`. `_1` defaults to `{}`.
 */
export declare function MR_StdSharedPtr_SetIntArrDefTrivial(_1?: L.MR_C_std_shared_ptr_int_array | null): void;

/**
 * Generated from function `MR::StdSharedPtr::SetIntArrDef`.
 *
 * Calls `MR_StdSharedPtr_SetIntArrDef()`. `_1` defaults to `std::make_unique<int[]>(42)`.
 */
export declare function MR_StdSharedPtr_SetIntArrDef(_1?: L.MR_C_std_shared_ptr_int_array | null): void;

/**
 * Generated from function `MR::StdSharedPtr::GetIntArr42`.
 *
 * Calls `MR_StdSharedPtr_GetIntArr42()`.
 */
export declare function MR_StdSharedPtr_GetIntArr42(): L.MR_C_std_shared_ptr_int_array_42;

/**
 * Generated from function `MR::StdSharedPtr::SetIntArr42`.
 *
 * Calls `MR_StdSharedPtr_SetIntArr42()`.
 */
export declare function MR_StdSharedPtr_SetIntArr42(_1: L.MR_C_std_shared_ptr_int_array_42): void;

/**
 * Generated from function `MR::StdSharedPtr::SetIntArr42DefTrivial`.
 *
 * Calls `MR_StdSharedPtr_SetIntArr42DefTrivial()`. `_1` defaults to `{}`.
 */
export declare function MR_StdSharedPtr_SetIntArr42DefTrivial(_1?: L.MR_C_std_shared_ptr_int_array_42 | null): void;

/**
 * Generated from function `MR::StdSharedPtr::SetIntArr42Def`.
 *
 * Calls `MR_StdSharedPtr_SetIntArr42Def()`. `_1` defaults to `std::make_shared<int[42]>()`.
 */
export declare function MR_StdSharedPtr_SetIntArr42Def(_1?: L.MR_C_std_shared_ptr_int_array_42 | null): void;

/**
 * Generated from function `MR::StdSharedPtr::GetClass`.
 *
 * Calls `MR_StdSharedPtr_GetClass()`.
 */
export declare function MR_StdSharedPtr_GetClass(): L.MR_C_std_shared_ptr_MR_StdSharedPtr_A;

/**
 * Generated from function `MR::StdSharedPtr::SetClass`.
 *
 * Calls `MR_StdSharedPtr_SetClass()`.
 */
export declare function MR_StdSharedPtr_SetClass(_1: L.MR_C_std_shared_ptr_MR_StdSharedPtr_A): void;

/**
 * Generated from function `MR::StdSharedPtr::SetClassConstRef`.
 *
 * Calls `MR_StdSharedPtr_SetClassConstRef()`.
 */
export declare function MR_StdSharedPtr_SetClassConstRef(_1: L.MR_C_std_shared_ptr_MR_StdSharedPtr_A): void;

/**
 * Generated from function `MR::StdSharedPtr::SetClassDefTrivial`.
 *
 * Calls `MR_StdSharedPtr_SetClassDefTrivial()`. `_1` defaults to `{}`.
 */
export declare function MR_StdSharedPtr_SetClassDefTrivial(_1?: L.MR_C_std_shared_ptr_MR_StdSharedPtr_A | null): void;

/**
 * Generated from function `MR::StdSharedPtr::SetClassDef`.
 *
 * Calls `MR_StdSharedPtr_SetClassDef()`. `_1` defaults to `std::make_unique<MR::StdSharedPtr::A>(MR::StdSharedPtr::A{})`.
 */
export declare function MR_StdSharedPtr_SetClassDef(_1?: L.MR_C_std_shared_ptr_MR_StdSharedPtr_A | null): void;

/**
 * Generated from function `MR::StdSharedPtr::SetClassLvalueRef`.
 *
 * Calls `MR_StdSharedPtr_SetClassLvalueRef()`.
 */
export declare function MR_StdSharedPtr_SetClassLvalueRef(_1: L.MR_C_std_shared_ptr_MR_StdSharedPtr_A): void;

/**
 * Generated from function `MR::StdSharedPtr::SetClassLvalueConstRef`.
 *
 * Calls `MR_StdSharedPtr_SetClassLvalueConstRef()`.
 */
export declare function MR_StdSharedPtr_SetClassLvalueConstRef(_1: L.MR_C_std_shared_ptr_MR_StdSharedPtr_A): void;

/**
 * Generated from function `MR::StdSharedPtr::SetClassRvalueRef`.
 *
 * Calls `MR_StdSharedPtr_SetClassRvalueRef()`.
 */
export declare function MR_StdSharedPtr_SetClassRvalueRef(_1: L.MR_C_std_shared_ptr_MR_StdSharedPtr_A): void;

/**
 * Generated from function `MR::StdSharedPtr::SetClassRvalueConstRef`.
 *
 * Calls `MR_StdSharedPtr_SetClassRvalueConstRef()`.
 */
export declare function MR_StdSharedPtr_SetClassRvalueConstRef(_1: L.MR_C_std_shared_ptr_MR_StdSharedPtr_A): void;

/**
 * Generated from function `MR::StdSharedPtr::GetClassArr`.
 *
 * Calls `MR_StdSharedPtr_GetClassArr()`.
 */
export declare function MR_StdSharedPtr_GetClassArr(): L.MR_C_std_shared_ptr_MR_StdSharedPtr_A_array;

/**
 * Generated from function `MR::StdSharedPtr::SetClassArr`.
 *
 * Calls `MR_StdSharedPtr_SetClassArr()`.
 */
export declare function MR_StdSharedPtr_SetClassArr(_1: L.MR_C_std_shared_ptr_MR_StdSharedPtr_A_array): void;

/**
 * Generated from function `MR::StdSharedPtr::SetClassArrDefTrivial`.
 *
 * Calls `MR_StdSharedPtr_SetClassArrDefTrivial()`. `_1` defaults to `{}`.
 */
export declare function MR_StdSharedPtr_SetClassArrDefTrivial(_1?: L.MR_C_std_shared_ptr_MR_StdSharedPtr_A_array | null): void;

/**
 * Generated from function `MR::StdSharedPtr::SetClassArrDef`.
 *
 * Calls `MR_StdSharedPtr_SetClassArrDef()`. `_1` defaults to `std::make_unique<MR::StdSharedPtr::A[]>(42)`.
 */
export declare function MR_StdSharedPtr_SetClassArrDef(_1?: L.MR_C_std_shared_ptr_MR_StdSharedPtr_A_array | null): void;

/**
 * Generated from function `MR::StdSharedPtr::GetClassArr42`.
 *
 * Calls `MR_StdSharedPtr_GetClassArr42()`.
 */
export declare function MR_StdSharedPtr_GetClassArr42(): L.MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42;

/**
 * Generated from function `MR::StdSharedPtr::SetClassArr42`.
 *
 * Calls `MR_StdSharedPtr_SetClassArr42()`.
 */
export declare function MR_StdSharedPtr_SetClassArr42(_1: L.MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42): void;

/**
 * Generated from function `MR::StdSharedPtr::SetClassArr42DefTrivial`.
 *
 * Calls `MR_StdSharedPtr_SetClassArr42DefTrivial()`. `_1` defaults to `{}`.
 */
export declare function MR_StdSharedPtr_SetClassArr42DefTrivial(_1?: L.MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42 | null): void;

/**
 * Generated from function `MR::StdSharedPtr::SetClassArr42Def`.
 *
 * Calls `MR_StdSharedPtr_SetClassArr42Def()`. `_1` defaults to `std::make_shared<MR::StdSharedPtr::A[42]>()`.
 */
export declare function MR_StdSharedPtr_SetClassArr42Def(_1?: L.MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42 | null): void;

/**
 * With constness:
 * Try const element types:
 * Generated from function `MR::StdSharedPtr::GetConstInt`.
 *
 * Calls `MR_StdSharedPtr_GetConstInt()`.
 */
export declare function MR_StdSharedPtr_GetConstInt(): L.MR_C_std_shared_ptr_const_int;

/**
 * Generated from function `MR::StdSharedPtr::GetConstIntArr`.
 *
 * Calls `MR_StdSharedPtr_GetConstIntArr()`.
 */
export declare function MR_StdSharedPtr_GetConstIntArr(): L.MR_C_std_shared_ptr_const_int_array;

/**
 * Generated from function `MR::StdSharedPtr::GetConstIntArr42`.
 *
 * Calls `MR_StdSharedPtr_GetConstIntArr42()`.
 */
export declare function MR_StdSharedPtr_GetConstIntArr42(): L.MR_C_std_shared_ptr_const_int_array_42;

/**
 * Generated from function `MR::StdSharedPtr::GetConstClass`.
 *
 * Calls `MR_StdSharedPtr_GetConstClass()`.
 */
export declare function MR_StdSharedPtr_GetConstClass(): L.MR_C_std_shared_ptr_const_MR_StdSharedPtr_A;

/**
 * Generated from function `MR::StdSharedPtr::GetConstClassArr`.
 *
 * Calls `MR_StdSharedPtr_GetConstClassArr()`.
 */
export declare function MR_StdSharedPtr_GetConstClassArr(): L.MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array;

/**
 * Generated from function `MR::StdSharedPtr::GetConstClassArr42`.
 *
 * Calls `MR_StdSharedPtr_GetConstClassArr42()`.
 */
export declare function MR_StdSharedPtr_GetConstClassArr42(): L.MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42;

