// The wrappers of the C bindings file `MR/test_std_optional`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * A C++ enum: the constants are numbers, so this also holds values that aren't named constants.
 */
export declare enum MR_StdOptional_E
{
    e1 = 0,
}

/**
 * Generated from class `MR::StdOptional::A`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_StdOptional_A extends ffi.CppObject
{
    /**
     * Returns a pointer to a member variable of class `MR::StdOptional::A` named `x`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_StdOptional_A_Get_x()`.
     */
    x: number;
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_StdOptional_A_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs `MR::StdOptional::A` elementwise.
     *
     * Calls `MR_StdOptional_A_ConstructFrom()`.
     */
    constructor(x: number);
    /**
     * Generated from constructor `MR::StdOptional::A::A`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_StdOptional_A_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_StdOptional_A);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::StdOptional::A::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_StdOptional_A_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_StdOptional_A): L.MR_StdOptional_A;
}

/**
 * Generated from class `MR::StdOptional::B`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_StdOptional_B extends ffi.CppObject
{
    /**
     * Returns a pointer to a member variable of class `MR::StdOptional::B` named `s`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_StdOptional_B_Get_s()`.
     */
    get s(): L.MR_C_std_string;
    set s(value: string);
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_StdOptional_B_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs `MR::StdOptional::B` elementwise.
     * The reference to the parameter `s` might be preserved in the constructed object.
     *
     * Calls `MR_StdOptional_B_ConstructFrom()`.
     */
    constructor(s: string);
    /**
     * Generated from constructor `MR::StdOptional::B::B`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_StdOptional_B_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_StdOptional_B);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::StdOptional::B::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_StdOptional_B_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_StdOptional_B): L.MR_StdOptional_B;
}

/**
 * Generated from function `MR::StdOptional::GetInt`.
 *
 * Calls `MR_StdOptional_GetInt()`.
 */
export declare function MR_StdOptional_GetInt(): L.MR_C_std_optional_int;

/**
 * Generated from function `MR::StdOptional::SetInt`.
 *
 * Calls `MR_StdOptional_SetInt()`.
 */
export declare function MR_StdOptional_SetInt(_1: number): void;

/**
 * Generated from function `MR::StdOptional::SetIntConstRef`.
 *
 * Calls `MR_StdOptional_SetIntConstRef()`.
 */
export declare function MR_StdOptional_SetIntConstRef(_1: number): void;

/**
 * Generated from function `MR::StdOptional::SetIntDefTrivial`.
 *
 * Calls `MR_StdOptional_SetIntDefTrivial()`. `_1` defaults to `{}`.
 */
export declare function MR_StdOptional_SetIntDefTrivial(_1: number): void;

/**
 * Generated from function `MR::StdOptional::SetIntDef`.
 *
 * Calls `MR_StdOptional_SetIntDef()`. `_1` defaults to `42`.
 */
export declare function MR_StdOptional_SetIntDef(_1?: L.MR_C_std_optional_int | null): void;

/**
 * Generated from function `MR::StdOptional::GetEnum`.
 *
 * Calls `MR_StdOptional_GetEnum()`.
 */
export declare function MR_StdOptional_GetEnum(): L.MR_C_std_optional_MR_StdOptional_E;

/**
 * Generated from function `MR::StdOptional::SetEnum`.
 *
 * Calls `MR_StdOptional_SetEnum()`.
 */
export declare function MR_StdOptional_SetEnum(_1: L.MR_StdOptional_E): void;

/**
 * Generated from function `MR::StdOptional::SetEnumConstRef`.
 *
 * Calls `MR_StdOptional_SetEnumConstRef()`.
 */
export declare function MR_StdOptional_SetEnumConstRef(_1: L.MR_StdOptional_E): void;

/**
 * Generated from function `MR::StdOptional::SetEnumDefTrivial`.
 *
 * Calls `MR_StdOptional_SetEnumDefTrivial()`. `_1` defaults to `{}`.
 */
export declare function MR_StdOptional_SetEnumDefTrivial(_1: L.MR_StdOptional_E): void;

/**
 * Generated from function `MR::StdOptional::SetEnumDef`.
 *
 * Calls `MR_StdOptional_SetEnumDef()`. `_1` defaults to `MR::StdOptional::E::e1`.
 */
export declare function MR_StdOptional_SetEnumDef(_1?: L.MR_C_std_optional_MR_StdOptional_E | null): void;

/**
 * Generated from function `MR::StdOptional::GetClass`.
 *
 * Calls `MR_StdOptional_GetClass()`.
 */
export declare function MR_StdOptional_GetClass(): L.MR_C_std_optional_MR_StdOptional_A;

/**
 * Generated from function `MR::StdOptional::SetClass`.
 *
 * Calls `MR_StdOptional_SetClass()`.
 */
export declare function MR_StdOptional_SetClass(_1: L.MR_StdOptional_A): void;

/**
 * Generated from function `MR::StdOptional::SetClassConstRef`.
 *
 * Calls `MR_StdOptional_SetClassConstRef()`.
 */
export declare function MR_StdOptional_SetClassConstRef(_1: L.MR_StdOptional_A): void;

/**
 * Generated from function `MR::StdOptional::SetClassDefTrivial`.
 *
 * Calls `MR_StdOptional_SetClassDefTrivial()`. `_1` defaults to `{}`.
 */
export declare function MR_StdOptional_SetClassDefTrivial(_1: L.MR_StdOptional_A): void;

/**
 * Generated from function `MR::StdOptional::SetClassDef`.
 *
 * Calls `MR_StdOptional_SetClassDef()`. `_1` defaults to `MR::StdOptional::A{42}`.
 */
export declare function MR_StdOptional_SetClassDef(_1?: L.MR_C_std_optional_MR_StdOptional_A | null): void;

/**
 * Generated from function `MR::StdOptional::GetClass2`.
 *
 * Calls `MR_StdOptional_GetClass2()`.
 */
export declare function MR_StdOptional_GetClass2(): L.MR_C_std_optional_MR_StdOptional_B;

/**
 * Generated from function `MR::StdOptional::SetClass2`.
 *
 * Calls `MR_StdOptional_SetClass2()`.
 */
export declare function MR_StdOptional_SetClass2(_1?: L.MR_StdOptional_B | null): void;

/**
 * Generated from function `MR::StdOptional::SetClass2ConstRef`.
 *
 * Calls `MR_StdOptional_SetClass2ConstRef()`.
 */
export declare function MR_StdOptional_SetClass2ConstRef(_1?: L.MR_StdOptional_B | null): void;

/**
 * Generated from function `MR::StdOptional::SetClass2DefTrivial`.
 *
 * Calls `MR_StdOptional_SetClass2DefTrivial()`. `_1` defaults to `{}`.
 */
export declare function MR_StdOptional_SetClass2DefTrivial(_1?: L.MR_StdOptional_B | null): void;

/**
 * Generated from function `MR::StdOptional::SetClass2Def`.
 *
 * Calls `MR_StdOptional_SetClass2Def()`. `_1` defaults to `MR::StdOptional::B{"blah"}`.
 */
export declare function MR_StdOptional_SetClass2Def(_1?: L.MR_StdOptional_B | null): void;

