// The wrappers of the C bindings file `MR/test_simple_types`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Enums.
 *
 * A C++ enum: the constants are numbers, so this also holds values that aren't named constants.
 */
export declare enum MR_TestSimpleTypes_ClassTemplate_unsigned_long_Enum
{
}

/**
 * A C++ enum: the constants are numbers, so this also holds values that aren't named constants.
 */
export declare enum MR_TestSimpleTypes_E
{
    e1 = 0,
}

/**
 * This enum has a custom underlying type.
 *
 * A C++ enum: the constants are numbers, so this also holds values that aren't named constants.
 */
export declare enum MR_TestSimpleTypes_E2
{
    e1 = 0,
}

/**
 * This enum has no constants.
 *
 * A C++ enum: the constants are numbers, so this also holds values that aren't named constants.
 */
export declare enum MR_TestSimpleTypes_E3
{
}

/**
 * This has multiple words in the underlying type. This has caused a bug at one point...
 *
 * A C++ enum: the constants are numbers, so this also holds values that aren't named constants.
 */
export declare enum MR_TestSimpleTypes_E4
{
}

/**
 * This will use a custom typedef for the underlying type, if that's enabled!
 *
 * A C++ enum: the constants are numbers, so this also holds values that aren't named constants.
 */
export declare enum MR_TestSimpleTypes_E5
{
}

/**
 * Class templates.
 * Generated from class `MR::TestSimpleTypes::ClassTemplate<unsigned long>`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_TestSimpleTypes_ClassTemplate_unsigned_long extends ffi.CppObject
{
    /**
     * Returns a pointer to a member variable of class `MR::TestSimpleTypes::ClassTemplate<unsigned long>` named `var<unsigned long>`.
     *
     * Calls `MR_TestSimpleTypes_ClassTemplate_unsigned_long_Get_var_unsigned_long()`.
     */
    static var: number;
    /**
     * Generated from constructor `MR::TestSimpleTypes::ClassTemplate<unsigned long>::ClassTemplate`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_TestSimpleTypes_ClassTemplate_unsigned_long_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_TestSimpleTypes_ClassTemplate_unsigned_long);
    /**
     * Constructors.
     * Generated from constructor `MR::TestSimpleTypes::ClassTemplate<unsigned long>::ClassTemplate`.
     * The reference to the parameter `_1` might be preserved in the constructed object.
     *
     * Calls `MR_TestSimpleTypes_ClassTemplate_unsigned_long_Construct_unsigned_long()`.
     */
    constructor(_1: number);
    /** The overloads of `constructor` are resolved at runtime by the argument types; the first declared match wins. */
    /**
     * Constructors.
     * Generated from constructor `MR::TestSimpleTypes::ClassTemplate<unsigned long>::ClassTemplate`.
     *
     * Calls `MR_TestSimpleTypes_ClassTemplate_unsigned_long_Construct_int()`.
     */
    static construct_int(_1: number): L.MR_TestSimpleTypes_ClassTemplate_unsigned_long;
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::TestSimpleTypes::ClassTemplate<unsigned long>::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_TestSimpleTypes_ClassTemplate_unsigned_long_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_TestSimpleTypes_ClassTemplate_unsigned_long): L.MR_TestSimpleTypes_ClassTemplate_unsigned_long;
    /**
     * Methods.
     * Generated from method `MR::TestSimpleTypes::ClassTemplate<unsigned long>::foo<unsigned long>`.
     *
     * Calls `MR_TestSimpleTypes_ClassTemplate_unsigned_long_foo_unsigned_long()`.
     */
    foo(): void;
    /**
     * Methods.
     * Generated from method `MR::TestSimpleTypes::ClassTemplate<unsigned long>::foo<int>`.
     *
     * Calls `MR_TestSimpleTypes_ClassTemplate_unsigned_long_foo_int()`.
     */
    foo_int(): void;
}

/**
 * Generated from function `MR::TestSimpleTypes::GetInt`.
 *
 * Calls `MR_TestSimpleTypes_GetInt()`.
 */
export declare function MR_TestSimpleTypes_GetInt(): number;

/**
 * Generated from function `MR::TestSimpleTypes::SetInt`.
 *
 * Calls `MR_TestSimpleTypes_SetInt()`.
 */
export declare function MR_TestSimpleTypes_SetInt(_1: number): void;

/**
 * Generated from function `MR::TestSimpleTypes::SetIntDef`.
 *
 * Calls `MR_TestSimpleTypes_SetIntDef()`. `_1` defaults to `42`.
 */
export declare function MR_TestSimpleTypes_SetIntDef(_1?: number | null): void;

/**
 * Generated from function `MR::TestSimpleTypes::GetIntPtr`.
 *
 * Calls `MR_TestSimpleTypes_GetIntPtr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
 */
export declare function MR_TestSimpleTypes_GetIntPtr(): number;

/**
 * Generated from function `MR::TestSimpleTypes::SetIntPtr`.
 *
 * Calls `MR_TestSimpleTypes_SetIntPtr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
 */
export declare function MR_TestSimpleTypes_SetIntPtr(_1: number): void;

/**
 * Generated from function `MR::TestSimpleTypes::SetIntPtrDef`.
 *
 * Calls `MR_TestSimpleTypes_SetIntPtrDef()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `_1` defaults to `&global_int`.
 */
export declare function MR_TestSimpleTypes_SetIntPtrDef(_1: number): void;

/**
 * Generated from function `MR::TestSimpleTypes::SetIntPtrDefNull`.
 *
 * Calls `MR_TestSimpleTypes_SetIntPtrDefNull()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `_1` defaults to `nullptr`.
 */
export declare function MR_TestSimpleTypes_SetIntPtrDefNull(_1: number): void;

/**
 * Generated from function `MR::TestSimpleTypes::GetIntRef`.
 *
 * Calls `MR_TestSimpleTypes_GetIntRef()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
 */
export declare function MR_TestSimpleTypes_GetIntRef(): number;

/**
 * Generated from function `MR::TestSimpleTypes::SetIntRef`.
 *
 * Calls `MR_TestSimpleTypes_SetIntRef()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
 */
export declare function MR_TestSimpleTypes_SetIntRef(_1: number): void;

/**
 * Generated from function `MR::TestSimpleTypes::SetIntRefDef`.
 *
 * Calls `MR_TestSimpleTypes_SetIntRefDef()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `_1` defaults to `global_int`.
 */
export declare function MR_TestSimpleTypes_SetIntRefDef(_1: number): void;

/**
 * Generated from function `MR::TestSimpleTypes::GetVoidPtr`.
 *
 * Calls `MR_TestSimpleTypes_GetVoidPtr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
 */
export declare function MR_TestSimpleTypes_GetVoidPtr(): number;

/**
 * Generated from function `MR::TestSimpleTypes::SetVoidPtr`.
 *
 * Calls `MR_TestSimpleTypes_SetVoidPtr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
 */
export declare function MR_TestSimpleTypes_SetVoidPtr(_1: number): void;

/**
 * Generated from function `MR::TestSimpleTypes::SetVoidPtrDef`.
 *
 * Calls `MR_TestSimpleTypes_SetVoidPtrDef()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `_1` defaults to `&global_int`.
 */
export declare function MR_TestSimpleTypes_SetVoidPtrDef(_1: number): void;

/**
 * Generated from function `MR::TestSimpleTypes::SetVoidPtrDefNull`.
 *
 * Calls `MR_TestSimpleTypes_SetVoidPtrDefNull()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `_1` defaults to `nullptr`.
 */
export declare function MR_TestSimpleTypes_SetVoidPtrDefNull(_1: number): void;

/**
 * Generated from function `MR::TestSimpleTypes::GetConstVoidPtr`.
 *
 * Calls `MR_TestSimpleTypes_GetConstVoidPtr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
 */
export declare function MR_TestSimpleTypes_GetConstVoidPtr(): number;

/**
 * Generated from function `MR::TestSimpleTypes::SetConstVoidPtr`.
 *
 * Calls `MR_TestSimpleTypes_SetConstVoidPtr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
 */
export declare function MR_TestSimpleTypes_SetConstVoidPtr(_1: number): void;

/**
 * Generated from function `MR::TestSimpleTypes::SetConstVoidPtrDef`.
 *
 * Calls `MR_TestSimpleTypes_SetConstVoidPtrDef()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `_1` defaults to `&global_int`.
 */
export declare function MR_TestSimpleTypes_SetConstVoidPtrDef(_1: number): void;

/**
 * Generated from function `MR::TestSimpleTypes::SetConstVoidPtrDefNull`.
 *
 * Calls `MR_TestSimpleTypes_SetConstVoidPtrDefNull()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `_1` defaults to `nullptr`.
 */
export declare function MR_TestSimpleTypes_SetConstVoidPtrDefNull(_1: number): void;

/**
 * Generated from function `MR::TestSimpleTypes::GetVoidPtrPtr`.
 *
 * Calls `MR_TestSimpleTypes_GetVoidPtrPtr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
 */
export declare function MR_TestSimpleTypes_GetVoidPtrPtr(): number;

/**
 * Generated from function `MR::TestSimpleTypes::SetVoidPtrPtr`.
 *
 * Calls `MR_TestSimpleTypes_SetVoidPtrPtr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
 */
export declare function MR_TestSimpleTypes_SetVoidPtrPtr(_1: number): void;

/**
 * Generated from function `MR::TestSimpleTypes::SetVoidPtrPtrDef`.
 *
 * Calls `MR_TestSimpleTypes_SetVoidPtrPtrDef()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `_1` defaults to `&global_void_ptr`.
 */
export declare function MR_TestSimpleTypes_SetVoidPtrPtrDef(_1: number): void;

/**
 * Generated from function `MR::TestSimpleTypes::SetVoidPtrPtrDefNull`.
 *
 * Calls `MR_TestSimpleTypes_SetVoidPtrPtrDefNull()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `_1` defaults to `nullptr`.
 */
export declare function MR_TestSimpleTypes_SetVoidPtrPtrDefNull(_1: number): void;

/**
 * Generated from function `MR::TestSimpleTypes::GetEnum`.
 *
 * Calls `MR_TestSimpleTypes_GetEnum()`.
 */
export declare function MR_TestSimpleTypes_GetEnum(): number;

/**
 * Generated from function `MR::TestSimpleTypes::SetEnum`.
 *
 * Calls `MR_TestSimpleTypes_SetEnum()`.
 */
export declare function MR_TestSimpleTypes_SetEnum(_1: L.MR_TestSimpleTypes_E): void;

/**
 * Generated from function `MR::TestSimpleTypes::SetEnumDef`.
 *
 * Calls `MR_TestSimpleTypes_SetEnumDef()`. `_1` defaults to `MR::TestSimpleTypes::E::e1`.
 */
export declare function MR_TestSimpleTypes_SetEnumDef(_1?: L.MR_TestSimpleTypes_E | null): void;

/**
 * Generated from function `MR::TestSimpleTypes::GetEnumPtr`.
 *
 * Calls `MR_TestSimpleTypes_GetEnumPtr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
 */
export declare function MR_TestSimpleTypes_GetEnumPtr(): number;

/**
 * Generated from function `MR::TestSimpleTypes::SetEnumPtr`.
 *
 * Calls `MR_TestSimpleTypes_SetEnumPtr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
 */
export declare function MR_TestSimpleTypes_SetEnumPtr(_1: number): void;

/**
 * Generated from function `MR::TestSimpleTypes::SetEnumPtrDef`.
 *
 * Calls `MR_TestSimpleTypes_SetEnumPtrDef()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `_1` defaults to `&global_enum`.
 */
export declare function MR_TestSimpleTypes_SetEnumPtrDef(_1: number): void;

/**
 * Generated from function `MR::TestSimpleTypes::SetEnumPtrDefNull`.
 *
 * Calls `MR_TestSimpleTypes_SetEnumPtrDefNull()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `_1` defaults to `nullptr`.
 */
export declare function MR_TestSimpleTypes_SetEnumPtrDefNull(_1: number): void;

/**
 * Generated from function `MR::TestSimpleTypes::GetEnumRef`.
 *
 * Calls `MR_TestSimpleTypes_GetEnumRef()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
 */
export declare function MR_TestSimpleTypes_GetEnumRef(): number;

/**
 * Generated from function `MR::TestSimpleTypes::SetEnumRef`.
 *
 * Calls `MR_TestSimpleTypes_SetEnumRef()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
 */
export declare function MR_TestSimpleTypes_SetEnumRef(_1: number): void;

/**
 * Generated from function `MR::TestSimpleTypes::SetEnumRefDef`.
 *
 * Calls `MR_TestSimpleTypes_SetEnumRefDef()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `_1` defaults to `global_enum`.
 */
export declare function MR_TestSimpleTypes_SetEnumRefDef(_1: number): void;

/**
 * Generated from function `MR::TestSimpleTypes::GetEnum2`.
 *
 * Calls `MR_TestSimpleTypes_GetEnum2()`.
 */
export declare function MR_TestSimpleTypes_GetEnum2(): number;

/**
 * Generated from function `MR::TestSimpleTypes::SetEnum2`.
 *
 * Calls `MR_TestSimpleTypes_SetEnum2()`.
 */
export declare function MR_TestSimpleTypes_SetEnum2(_1: L.MR_TestSimpleTypes_E2): void;

/**
 * Generated from function `MR::TestSimpleTypes::SetEnum2Def`.
 *
 * Calls `MR_TestSimpleTypes_SetEnum2Def()`. `_1` defaults to `MR::TestSimpleTypes::E2::e1`.
 */
export declare function MR_TestSimpleTypes_SetEnum2Def(_1?: L.MR_TestSimpleTypes_E2 | null): void;

/**
 * Generated from function `MR::TestSimpleTypes::GetEnum2Ptr`.
 *
 * Calls `MR_TestSimpleTypes_GetEnum2Ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
 */
export declare function MR_TestSimpleTypes_GetEnum2Ptr(): number;

/**
 * Generated from function `MR::TestSimpleTypes::SetEnum2Ptr`.
 *
 * Calls `MR_TestSimpleTypes_SetEnum2Ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
 */
export declare function MR_TestSimpleTypes_SetEnum2Ptr(_1: number): void;

/**
 * Generated from function `MR::TestSimpleTypes::SetEnum2PtrDef`.
 *
 * Calls `MR_TestSimpleTypes_SetEnum2PtrDef()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `_1` defaults to `&global_enum2`.
 */
export declare function MR_TestSimpleTypes_SetEnum2PtrDef(_1: number): void;

/**
 * Generated from function `MR::TestSimpleTypes::SetEnum2PtrDefNull`.
 *
 * Calls `MR_TestSimpleTypes_SetEnum2PtrDefNull()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `_1` defaults to `nullptr`.
 */
export declare function MR_TestSimpleTypes_SetEnum2PtrDefNull(_1: number): void;

/**
 * Generated from function `MR::TestSimpleTypes::GetEnum2Ref`.
 *
 * Calls `MR_TestSimpleTypes_GetEnum2Ref()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
 */
export declare function MR_TestSimpleTypes_GetEnum2Ref(): number;

/**
 * Generated from function `MR::TestSimpleTypes::SetEnum2Ref`.
 *
 * Calls `MR_TestSimpleTypes_SetEnum2Ref()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
 */
export declare function MR_TestSimpleTypes_SetEnum2Ref(_1: number): void;

/**
 * Generated from function `MR::TestSimpleTypes::SetEnum2RefDef`.
 *
 * Calls `MR_TestSimpleTypes_SetEnum2RefDef()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `_1` defaults to `global_enum2`.
 */
export declare function MR_TestSimpleTypes_SetEnum2RefDef(_1: number): void;

/**
 * Test all kinds of `char`.
 * Generated from function `MR::TestSimpleTypes::CheckCharMaybeUnsigned`.
 *
 * Calls `MR_TestSimpleTypes_CheckCharMaybeUnsigned()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
 */
export declare function MR_TestSimpleTypes_CheckCharMaybeUnsigned(_1: number): void;

/**
 * Generated from function `MR::TestSimpleTypes::CheckChar`.
 *
 * Calls `MR_TestSimpleTypes_CheckChar_unsigned_char_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
 */
export declare function MR_TestSimpleTypes_CheckChar_unsigned_char_ptr(_1: number): void;

/**
 * Generated from function `MR::TestSimpleTypes::CheckChar`.
 *
 * Calls `MR_TestSimpleTypes_CheckChar_signed_char_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
 */
export declare function MR_TestSimpleTypes_CheckChar_signed_char_ptr(_1: number): void;

/**
 * Generated from function `MR::TestSimpleTypes::LongLong`.
 *
 * Calls `MR_TestSimpleTypes_LongLong()`.
 */
export declare function MR_TestSimpleTypes_LongLong(x: number | bigint): bigint;

/**
 * Generated from function `MR::TestSimpleTypes::blah`.
 *
 * Calls `MR_TestSimpleTypes_blah_unsigned_long()`.
 */
export declare function MR_TestSimpleTypes_blah_unsigned_long(x: number): number;

/**
 * Generated from function `MR::TestSimpleTypes::blah`.
 *
 * Calls `MR_TestSimpleTypes_blah_long()`.
 */
export declare function MR_TestSimpleTypes_blah_long(x: number): number;

/**
 * Function templates.
 * Generated from function `MR::TestSimpleTypes::FuncTemplate<unsigned long>`.
 *
 * Calls `MR_TestSimpleTypes_FuncTemplate_unsigned_long()`.
 */
export declare function MR_TestSimpleTypes_FuncTemplate_unsigned_long(_1: number): number;

/**
 * Function templates.
 * Generated from function `MR::TestSimpleTypes::FuncTemplate<int>`.
 *
 * Calls `MR_TestSimpleTypes_FuncTemplate_int()`.
 */
export declare function MR_TestSimpleTypes_FuncTemplate_int(_1: number): number;

