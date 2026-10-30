// The wrappers of the C bindings file `MR/test_csharp`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Enum comment.
 *
 * A C++ enum: the constants are numbers, so this also holds values that aren't named constants.
 */
export declare enum MR_CSharp_E1
{
    /**
     * A
     */
    a = 10,
    /**
     * B
     */
    b = 20,
    /**
     * C
     */
    c = 30,
}

/**
 * A C++ enum: the constants are numbers, so this also holds values that aren't named constants.
 */
export declare enum MR_CSharp_E2
{
    /**
     * < Test a same-line documentation comment. Add some >weird< & 'characters".
     */
    a = 0,
    b = 1,
}

/**
 * Other injection cases:
 *
 * A C++ enum: the constants are numbers, so this also holds values that aren't named constants.
 */
export declare enum MR_CSharp_StaticOpsEnum
{
}

/**
 * Generated from class `MR::CSharp::A`.
 * Derived classes:
 *   Virtual:
 *     `MR::CSharp::C`
 *   Direct: (non-virtual)
 *     `MR::CSharp::B`
 *     `MR::CSharp::F`
 *     `MR::CSharp::G`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_A extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_A_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::A::A`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_A_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_A);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::A::static_foo`.
     *
     * Calls `MR_CSharp_A_static_foo()`.
     */
    static static_foo(): void;
    /**
     * Generated from method `MR::CSharp::A::static_bar`.
     *
     * Calls `MR_CSharp_A_static_bar()`.
     */
    static static_bar(_1: number, _2: number): void;
    /**
     * Generated from method `MR::CSharp::A::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     * The reference to this object might be preserved in the return value.
     *
     * Calls `MR_CSharp_A_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_A): L.MR_CSharp_A;
    /**
     * Generated from method `MR::CSharp::A::foo`.
     *
     * Calls `MR_CSharp_A_foo()`.
     */
    foo(): void;
    /**
     * Generated from method `MR::CSharp::A::bar`.
     *
     * Calls `MR_CSharp_A_bar()`.
     */
    bar(_1: number, _2: number): void;
    /**
     * Generated from method `MR::CSharp::A::virtual_foo`.
     *
     * Calls `MR_CSharp_A_virtual_foo()`.
     */
    virtual_foo(): void;
    /**
     * Generated from method `MR::CSharp::A::virtual_bar`.
     *
     * Calls `MR_CSharp_A_virtual_bar()`.
     */
    virtual_bar(_1: number, _2: number): void;
    /**
     * Generated from method `MR::CSharp::A::refs`.
     *
     * Calls `MR_CSharp_A_refs()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    refs(x: L.int32_t_output, _2: L.int32_t_output): number;
}

/**
 * Generated from class `MR::CSharp::AmbiguousTemplates`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_AmbiguousTemplates extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_AmbiguousTemplates_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::AmbiguousTemplates::AmbiguousTemplates`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_AmbiguousTemplates_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_AmbiguousTemplates);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::AmbiguousTemplates::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_AmbiguousTemplates_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_AmbiguousTemplates): L.MR_CSharp_AmbiguousTemplates;
    /**
     * Generated from method `MR::CSharp::AmbiguousTemplates::template_a<int32_t>`.
     *
     * Calls `MR_CSharp_AmbiguousTemplates_template_a_int32_t()`.
     */
    template_a(_1: number): void;
    /**
     * Generated from method `MR::CSharp::AmbiguousTemplates::template_a<float>`.
     *
     * Calls `MR_CSharp_AmbiguousTemplates_template_a_float()`.
     */
    template_a_float(_1: number): void;
    /**
     * Generated from method `MR::CSharp::AmbiguousTemplates::template_b<int32_t>`.
     *
     * Calls `MR_CSharp_AmbiguousTemplates_template_b_int32_t()`.
     */
    template_b(): number;
    /**
     * Generated from method `MR::CSharp::AmbiguousTemplates::template_b<float>`.
     *
     * Calls `MR_CSharp_AmbiguousTemplates_template_b_float()`.
     */
    template_b_float(): number;
    /**
     * Generated from method `MR::CSharp::AmbiguousTemplates::template_c<int32_t>`.
     *
     * Calls `MR_CSharp_AmbiguousTemplates_template_c_int32_t()`.
     */
    template_c(): void;
    /**
     * Generated from method `MR::CSharp::AmbiguousTemplates::template_c<float>`.
     *
     * Calls `MR_CSharp_AmbiguousTemplates_template_c_float()`.
     */
    template_c_float(): void;
    /**
     * Generated from method `MR::CSharp::AmbiguousTemplates::instantiate`.
     *
     * Calls `MR_CSharp_AmbiguousTemplates_instantiate()`.
     */
    instantiate(): void;
}

/**
 * Test various array members.
 * Generated from class `MR::CSharp::ArrayMembers`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_ArrayMembers extends ffi.CppObject
{
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ArrayMembers` named `i`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_ArrayMembers_Get_i()`.
     */
    i: number;
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ArrayMembers` named `ia`. This is a pointer to the first element of an array.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_ArrayMembers_Get_ia()`.
     */
    readonly ia: number;
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ArrayMembers` named `iaa`. This is a pointer to the first element of an array.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_ArrayMembers_Get_iaa()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    readonly iaa: number;
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ArrayMembers` named `ci`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_ArrayMembers_Get_ci()`.
     */
    readonly ci: number;
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ArrayMembers` named `cia`. This is a pointer to the first element of an array.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_ArrayMembers_Get_cia()`.
     */
    readonly cia: number;
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ArrayMembers` named `ciaa`. This is a pointer to the first element of an array.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_ArrayMembers_Get_ciaa()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    readonly ciaa: number;
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ArrayMembers` named `s`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_ArrayMembers_Get_s()`.
     */
    get s(): L.MR_C_std_string;
    set s(value: string);
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ArrayMembers` named `sa`. This is a pointer to the first element of an array.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_ArrayMembers_Get_sa()`.
     */
    readonly sa: L.MR_C_std_string;
    /**
     * std::string saa[3][4]; // The C generator doesn't support those yet. We'd need to expose them as flat arrays, with N size getters, I think?
     * Returns a pointer to a member variable of class `MR::CSharp::ArrayMembers` named `cs`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_ArrayMembers_Get_cs()`.
     */
    readonly cs: L.MR_C_std_string;
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ArrayMembers` named `csa`. This is a pointer to the first element of an array.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_ArrayMembers_Get_csa()`.
     */
    readonly csa: L.MR_C_std_string;
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_ArrayMembers_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::ArrayMembers::ArrayMembers`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_ArrayMembers_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_ArrayMembers);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Returns the size of the array member of class `MR::CSharp::ArrayMembers` named `ia`. The size is `2`.
     *
     * Calls `MR_CSharp_ArrayMembers_GetSize_ia()`.
     */
    static iaSize(): number;
    /**
     * Returns the size of the array member of class `MR::CSharp::ArrayMembers` named `iaa`. The size is `3`.
     *
     * Calls `MR_CSharp_ArrayMembers_GetSize_iaa()`.
     */
    static iaaSize(): number;
    /**
     * Returns the size of the array member of class `MR::CSharp::ArrayMembers` named `cia`. The size is `2`.
     *
     * Calls `MR_CSharp_ArrayMembers_GetSize_cia()`.
     */
    static ciaSize(): number;
    /**
     * Returns the size of the array member of class `MR::CSharp::ArrayMembers` named `ciaa`. The size is `3`.
     *
     * Calls `MR_CSharp_ArrayMembers_GetSize_ciaa()`.
     */
    static ciaaSize(): number;
    /**
     * Returns the size of the array member of class `MR::CSharp::ArrayMembers` named `sa`. The size is `2`.
     *
     * Calls `MR_CSharp_ArrayMembers_GetSize_sa()`.
     */
    static saSize(): number;
    /**
     * Returns the size of the array member of class `MR::CSharp::ArrayMembers` named `csa`. The size is `2`.
     *
     * Calls `MR_CSharp_ArrayMembers_GetSize_csa()`.
     */
    static csaSize(): number;
}

/**
 * Generated from class `MR::CSharp::B`.
 * Base classes:
 *   Direct: (non-virtual)
 *     `MR::CSharp::A`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_B extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_B_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::B::B`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_B_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_B);
    /**
     * Generated from constructor `MR::CSharp::B::B`.
     *
     * Calls `MR_CSharp_B_Construct()`.
     */
    constructor(a: number, b: number);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::B::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_B_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_B): L.MR_CSharp_B;
    /** Upcasts to the base class `MR::CSharp::A`. The result refers to this object.
     *
     * Calls `MR_CSharp_B_MutableUpcastTo_MR_CSharp_A()`. */
    upcastToA(): L.MR_CSharp_A;
    /** Static downcast from the base class `MR::CSharp::A`. Undefined behavior if the object isn't actually a `B`. The result refers to `object`.
     *
     * Calls `MR_CSharp_B_MutableStaticDowncastFrom_MR_CSharp_A()`. */
    static staticDowncastFromA(object: L.MR_CSharp_A): L.MR_CSharp_B;
    /** Dynamic downcast from the base class `MR::CSharp::A`. Returns null if the object isn't actually a `B`. The result refers to `object`.
     *
     * Calls `MR_CSharp_B_MutableDynamicDowncastFrom_MR_CSharp_A()`. */
    static dynamicDowncastFromA(object: L.MR_CSharp_A): L.MR_CSharp_B | null;
}

/**
 * Generated from class `MR::CSharp::C`.
 * Base classes:
 *   Virtual:
 *     `MR::CSharp::A`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_C extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_C_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::C::C`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_C_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_C);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::C::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_C_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_C): L.MR_CSharp_C;
    /** Upcasts to the base class `MR::CSharp::A`. The result refers to this object.
     *
     * Calls `MR_CSharp_C_MutableUpcastTo_MR_CSharp_A()`. */
    upcastToA(): L.MR_CSharp_A;
    /** Dynamic downcast from the base class `MR::CSharp::A`. Returns null if the object isn't actually a `C`. The result refers to `object`.
     *
     * Calls `MR_CSharp_C_MutableDynamicDowncastFrom_MR_CSharp_A()`. */
    static dynamicDowncastFromA(object: L.MR_CSharp_A): L.MR_CSharp_C | null;
}

/**
 * Test the call operator, since it can have an unusual amount of arguments.
 * Not testing `[]` here to be able to run the tests on older C++.
 * Generated from class `MR::CSharp::CallOp`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_CallOp extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_CallOp_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::CallOp::CallOp`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_CallOp_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_CallOp);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::CallOp::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_CallOp_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_CallOp): L.MR_CSharp_CallOp;
    /**
     * Generated from method `MR::CSharp::CallOp::operator()`.
     *
     * Calls `MR_CSharp_CallOp_call_0()`.
     */
    call_0(): void;
    /**
     * Generated from method `MR::CSharp::CallOp::operator()`.
     *
     * Calls `MR_CSharp_CallOp_call_3()`.
     */
    call_3(_1: number, _2: number, _3: number): number;
}

/**
 * Generated from class `MR::CSharp::ClassMemberPointersBool`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_ClassMemberPointersBool extends ffi.CppObject
{
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersBool` named `sa`.
     *
     * Calls `MR_CSharp_ClassMemberPointersBool_Get_sa()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    static get sa(): number;
    static set sa(value: L.bool_output | null | undefined);
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersBool` named `sb`.
     *
     * Calls `MR_CSharp_ClassMemberPointersBool_Get_sb()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    static get sb(): number;
    static set sb(value: boolean | null | undefined);
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersBool` named `sc`.
     *
     * Calls `MR_CSharp_ClassMemberPointersBool_Get_sc()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    static readonly sc: number;
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersBool` named `sd`.
     *
     * Calls `MR_CSharp_ClassMemberPointersBool_Get_sd()`.
     */
    static readonly sd: boolean;
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersBool` named `a`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_ClassMemberPointersBool_Get_a()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    get a(): number;
    set a(value: L.bool_output | null | undefined);
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersBool` named `b`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_ClassMemberPointersBool_Get_b()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    get b(): number;
    set b(value: boolean | null | undefined);
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersBool` named `c`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_ClassMemberPointersBool_Get_c()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    readonly c: number;
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersBool` named `d`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_ClassMemberPointersBool_Get_d()`.
     */
    readonly d: boolean;
    /**
     * Generated from constructor `MR::CSharp::ClassMemberPointersBool::ClassMemberPointersBool`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_ClassMemberPointersBool_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_ClassMemberPointersBool);
    /**
     * Constructs `MR::CSharp::ClassMemberPointersBool` elementwise.
     * The reference to the parameter `a` might be preserved in the constructed object.
     * The reference to the parameter `b` might be preserved in the constructed object.
     * The reference to the parameter `c` might be preserved in the constructed object.
     * The reference to the parameter `d` might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_ClassMemberPointersBool_ConstructFrom()`.
     */
    constructor(a: L.bool_output | null | undefined, b: boolean | null | undefined, c: L.bool_output, d: boolean);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
}

/**
 * Class fields of pointer types:
 * Generated from class `MR::CSharp::ClassMemberPointersClass`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_ClassMemberPointersClass extends ffi.CppObject
{
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersClass` named `sa`.
     *
     * Calls `MR_CSharp_ClassMemberPointersClass_Get_sa()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    static get sa(): number;
    static set sa(value: L.MR_CSharp_A | null | undefined);
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersClass` named `sb`.
     *
     * Calls `MR_CSharp_ClassMemberPointersClass_Get_sb()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    static get sb(): number;
    static set sb(value: L.MR_CSharp_A | null | undefined);
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersClass` named `sc`.
     *
     * Calls `MR_CSharp_ClassMemberPointersClass_Get_sc()`.
     */
    static readonly sc: L.MR_CSharp_A;
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersClass` named `sd`.
     *
     * Calls `MR_CSharp_ClassMemberPointersClass_Get_sd()`.
     */
    static readonly sd: L.MR_CSharp_A;
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersClass` named `a`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_ClassMemberPointersClass_Get_a()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    get a(): number;
    set a(value: L.MR_CSharp_A | null | undefined);
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersClass` named `b`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_ClassMemberPointersClass_Get_b()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    get b(): number;
    set b(value: L.MR_CSharp_A | null | undefined);
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersClass` named `c`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_ClassMemberPointersClass_Get_c()`.
     */
    readonly c: L.MR_CSharp_A;
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersClass` named `d`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_ClassMemberPointersClass_Get_d()`.
     */
    readonly d: L.MR_CSharp_A;
    /**
     * Generated from constructor `MR::CSharp::ClassMemberPointersClass::ClassMemberPointersClass`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_ClassMemberPointersClass_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_ClassMemberPointersClass);
    /**
     * Constructs `MR::CSharp::ClassMemberPointersClass` elementwise.
     * The reference to the parameter `a` might be preserved in the constructed object.
     * The reference to the parameter `b` might be preserved in the constructed object.
     * The reference to the parameter `c` might be preserved in the constructed object.
     * The reference to the parameter `d` might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_ClassMemberPointersClass_ConstructFrom()`.
     */
    constructor(a: L.MR_CSharp_A | null | undefined, b: L.MR_CSharp_A | null | undefined, c: L.MR_CSharp_A, d: L.MR_CSharp_A);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
}

/**
 * Generated from class `MR::CSharp::ClassMemberPointersExposed`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_ClassMemberPointersExposed extends ffi.CppObject
{
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `sa`.
     *
     * Calls `MR_CSharp_ClassMemberPointersExposed_Get_sa()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    static get sa(): number;
    static set sa(value: L.MR_CSharp_ExposedLayout | null | undefined);
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `sb`.
     *
     * Calls `MR_CSharp_ClassMemberPointersExposed_Get_sb()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    static get sb(): number;
    static set sb(value: L.MR_CSharp_ExposedLayout | null | undefined);
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `sc`.
     *
     * Calls `MR_CSharp_ClassMemberPointersExposed_Get_sc()`.
     */
    static readonly sc: L.MR_CSharp_ExposedLayout;
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `sd`.
     *
     * Calls `MR_CSharp_ClassMemberPointersExposed_Get_sd()`.
     */
    static readonly sd: L.MR_CSharp_ExposedLayout;
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `a`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_ClassMemberPointersExposed_Get_a()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    get a(): number;
    set a(value: L.MR_CSharp_ExposedLayout | null | undefined);
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `b`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_ClassMemberPointersExposed_Get_b()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    get b(): number;
    set b(value: L.MR_CSharp_ExposedLayout | null | undefined);
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `c`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_ClassMemberPointersExposed_Get_c()`.
     */
    readonly c: L.MR_CSharp_ExposedLayout;
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersExposed` named `d`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_ClassMemberPointersExposed_Get_d()`.
     */
    readonly d: L.MR_CSharp_ExposedLayout;
    /**
     * Generated from constructor `MR::CSharp::ClassMemberPointersExposed::ClassMemberPointersExposed`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_ClassMemberPointersExposed_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_ClassMemberPointersExposed);
    /**
     * Constructs `MR::CSharp::ClassMemberPointersExposed` elementwise.
     * The reference to the parameter `a` might be preserved in the constructed object.
     * The reference to the parameter `b` might be preserved in the constructed object.
     * The reference to the parameter `c` might be preserved in the constructed object.
     * The reference to the parameter `d` might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_ClassMemberPointersExposed_ConstructFrom()`.
     */
    constructor(a: L.MR_CSharp_ExposedLayout | null | undefined, b: L.MR_CSharp_ExposedLayout | null | undefined, c: L.MR_CSharp_ExposedLayout, d: L.MR_CSharp_ExposedLayout);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
}

/**
 * Generated from class `MR::CSharp::ClassMemberPointersUshort`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_ClassMemberPointersUshort extends ffi.CppObject
{
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `sa`.
     *
     * Calls `MR_CSharp_ClassMemberPointersUshort_Get_sa()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    static get sa(): number;
    static set sa(value: L.uint16_t_output | null | undefined);
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `sb`.
     *
     * Calls `MR_CSharp_ClassMemberPointersUshort_Get_sb()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    static get sb(): number;
    static set sb(value: number | null | undefined);
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `sc`.
     *
     * Calls `MR_CSharp_ClassMemberPointersUshort_Get_sc()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    static readonly sc: number;
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `sd`.
     *
     * Calls `MR_CSharp_ClassMemberPointersUshort_Get_sd()`.
     */
    static readonly sd: number;
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `a`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_ClassMemberPointersUshort_Get_a()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    get a(): number;
    set a(value: L.uint16_t_output | null | undefined);
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `b`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_ClassMemberPointersUshort_Get_b()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    get b(): number;
    set b(value: number | null | undefined);
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `c`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_ClassMemberPointersUshort_Get_c()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    readonly c: number;
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::ClassMemberPointersUshort` named `d`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_ClassMemberPointersUshort_Get_d()`.
     */
    readonly d: number;
    /**
     * Generated from constructor `MR::CSharp::ClassMemberPointersUshort::ClassMemberPointersUshort`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_ClassMemberPointersUshort_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_ClassMemberPointersUshort);
    /**
     * Constructs `MR::CSharp::ClassMemberPointersUshort` elementwise.
     * The reference to the parameter `a` might be preserved in the constructed object.
     * The reference to the parameter `b` might be preserved in the constructed object.
     * The reference to the parameter `c` might be preserved in the constructed object.
     * The reference to the parameter `d` might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_ClassMemberPointersUshort_ConstructFrom()`.
     */
    constructor(a: L.uint16_t_output | null | undefined, b: number | null | undefined, c: L.uint16_t_output, d: number);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
}

/**
 * Test that we don't produce the const and non-const overloads of the same function under the same name in C#, as that would be a compilation error in C#.
 * Generated from class `MR::CSharp::ConstNonconstConflicts`.
 *
 * Has the same layout as the C++ struct, the fields are accessed in place in wasm memory. `new X(ffi.RAW, pointer, owned, owner)` wraps existing memory.
 */
export declare class MR_CSharp_ConstNonconstConflicts extends ffi.CppStruct
{
    /** The size of the struct in bytes. */
    static readonly SIZE: number;
    static readonly ALIGNMENT: number;
    x: number;
    /** Zero-initialized. */
    constructor();
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::ConstNonconstConflicts::foo`.
     *
     * Calls `MR_CSharp_ConstNonconstConflicts_foo_mut_int32_t()`.
     */
    foo(_1: number): void;
    /**
     * Generated from method `MR::CSharp::ConstNonconstConflicts::foo`.
     *
     * Calls `MR_CSharp_ConstNonconstConflicts_foo_float()`.
     */
    foo_float(_1: number): void;
    /**
     * Generated from method `MR::CSharp::ConstNonconstConflicts::foo`.
     *
     * Calls `MR_CSharp_ConstNonconstConflicts_foo_mut_char()`.
     */
    foo_mut_char(_1: number): void;
    /**
     * Generated from method `MR::CSharp::ConstNonconstConflicts::foo`.
     *
     * Calls `MR_CSharp_ConstNonconstConflicts_foo_char()`.
     */
    foo_char(_1: number): void;
    /**
     * Generated from method `MR::CSharp::ConstNonconstConflicts::operator+`.
     *
     * Calls `MR_C_pos_MR_CSharp_ConstNonconstConflicts_ref()`.
     */
    opAdd(): number;
    /**
     * Generated from method `MR::CSharp::ConstNonconstConflicts::operator+`.
     *
     * Calls `MR_C_pos_const_MR_CSharp_ConstNonconstConflicts_ref()`.
     */
    opPos_const_ref(): number;
    /**
     * Since this returns void, it gets rewritten into a method.
     * Generated from method `MR::CSharp::ConstNonconstConflicts::operator~`.
     *
     * Calls `MR_C_compl_MR_CSharp_ConstNonconstConflicts_ref()`.
     */
    opCompl(): void;
    /**
     * Generated from method `MR::CSharp::ConstNonconstConflicts::operator~`.
     *
     * Calls `MR_C_compl_const_MR_CSharp_ConstNonconstConflicts_ref()`.
     */
    opCompl_const_ref(): void;
    /**
     * Generated from method `MR::CSharp::ConstNonconstConflicts::operator/`.
     *
     * Calls `MR_C_div_MR_CSharp_ConstNonconstConflicts_ref_int32_t()`.
     */
    opDiv(_1: number): number;
    /**
     * Generated from method `MR::CSharp::ConstNonconstConflicts::operator/`.
     *
     * Calls `MR_C_div_const_MR_CSharp_ConstNonconstConflicts_ref_int32_t()`.
     */
    opDiv_const_ref_int32_t(_1: number): number;
}

/**
 * Conversion constructors. Right now we only provide conversion operators for implicit ones,
 *   because I have no idea when the explicit ones could be useful.
 * Generated from class `MR::CSharp::ConvCtor`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_ConvCtor extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_ConvCtor_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::ConvCtor::ConvCtor`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_ConvCtor_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_ConvCtor);
    /**
     * Generated from constructor `MR::CSharp::ConvCtor::ConvCtor`.
     *
     * Calls `MR_CSharp_ConvCtor_Construct_1_int32_t()`.
     */
    constructor(_1: number);
    /**
     * Generated from constructor `MR::CSharp::ConvCtor::ConvCtor`.
     *
     * Calls `MR_CSharp_ConvCtor_Construct_2_int32_t()`.
     */
    constructor(_1: number, _2: number);
    /**
     * Generated from constructor `MR::CSharp::ConvCtor::ConvCtor`.
     *
     * Calls `MR_CSharp_ConvCtor_Construct_2_int16_t()`. `_2` defaults to `42`.
     */
    constructor(_1: number, _2?: number | null);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /**
     * Generated from constructor `MR::CSharp::ConvCtor::ConvCtor`.
     *
     * Calls `MR_CSharp_ConvCtor_Construct_1_float()`.
     */
    static construct_1_float(_1: number): L.MR_CSharp_ConvCtor;
    /**
     * Generated from constructor `MR::CSharp::ConvCtor::ConvCtor`.
     *
     * Calls `MR_CSharp_ConvCtor_Construct_2_float()`.
     */
    static construct_2_float(_1: number, _2: number): L.MR_CSharp_ConvCtor;
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::ConvCtor::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_ConvCtor_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_ConvCtor): L.MR_CSharp_ConvCtor;
}

/**
 * A sad class that's copyable but not movable.
 * This can often happen if you have a user-provided destructor.
 * Generated from class `MR::CSharp::ConvCtorCopyButNoMove`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_ConvCtorCopyButNoMove extends ffi.CppObject
{
    /**
     * Generated from constructor `MR::CSharp::ConvCtorCopyButNoMove::ConvCtorCopyButNoMove`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_ConvCtorCopyButNoMove_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_ConvCtorCopyButNoMove);
    /**
     * Generated from constructor `MR::CSharp::ConvCtorCopyButNoMove::ConvCtorCopyButNoMove`.
     *
     * Calls `MR_CSharp_ConvCtorCopyButNoMove_Construct()`.
     */
    constructor(_1: number);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::ConvCtorCopyButNoMove::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     * The reference to this object might be preserved in the return value.
     *
     * Calls `MR_CSharp_ConvCtorCopyButNoMove_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_ConvCtorCopyButNoMove): L.MR_CSharp_ConvCtorCopyButNoMove;
}

/**
 * A converting ctor in an exposed struct.
 * Generated from class `MR::CSharp::ConvCtorExposed`.
 *
 * Has the same layout as the C++ struct, the fields are accessed in place in wasm memory. `new X(ffi.RAW, pointer, owned, owner)` wraps existing memory.
 */
export declare class MR_CSharp_ConvCtorExposed extends ffi.CppStruct
{
    /** The size of the struct in bytes. */
    static readonly SIZE: number;
    static readonly ALIGNMENT: number;
    x: number;
    /**
     * Generated from constructor `MR::CSharp::ConvCtorExposed::ConvCtorExposed`.
     *
     * Calls `MR_CSharp_ConvCtorExposed_Construct()`.
     */
    constructor(_1: number);
    /** Zero-initialized. */
    constructor();
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
}

/**
 * Test how a non-trivial class with a converting constructor gets the additional conversion operators in its parameter passing helpers.
 * Generated from class `MR::CSharp::ConvCtorNonTrivial`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_ConvCtorNonTrivial extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_ConvCtorNonTrivial_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::ConvCtorNonTrivial::ConvCtorNonTrivial`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_ConvCtorNonTrivial_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_ConvCtorNonTrivial);
    /**
     * Generated from constructor `MR::CSharp::ConvCtorNonTrivial::ConvCtorNonTrivial`.
     *
     * Calls `MR_CSharp_ConvCtorNonTrivial_Construct()`.
     */
    constructor(_1: number);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::ConvCtorNonTrivial::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_ConvCtorNonTrivial_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_ConvCtorNonTrivial): L.MR_CSharp_ConvCtorNonTrivial;
}

/**
 * A non-trivial move-only class with a converting ctor.
 * Here we test that our converting constructors injected into `_ByValue_...` don't attempt to copy the class.
 * Generated from class `MR::CSharp::ConvCtorNonTrivialRestricted`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_ConvCtorNonTrivialRestricted extends ffi.CppObject
{
    /**
     * Generated from constructor `MR::CSharp::ConvCtorNonTrivialRestricted::ConvCtorNonTrivialRestricted`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_ConvCtorNonTrivialRestricted_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_ConvCtorNonTrivialRestricted);
    /**
     * Generated from constructor `MR::CSharp::ConvCtorNonTrivialRestricted::ConvCtorNonTrivialRestricted`.
     *
     * Calls `MR_CSharp_ConvCtorNonTrivialRestricted_Construct()`.
     */
    constructor(_1: number);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::ConvCtorNonTrivialRestricted::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     * The reference to this object might be preserved in the return value.
     *
     * Calls `MR_CSharp_ConvCtorNonTrivialRestricted_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_ConvCtorNonTrivialRestricted): L.MR_CSharp_ConvCtorNonTrivialRestricted;
}

/**
 * Test how a trivial class with a converting constructor gets the additional conversion operators in its parameter passing helpers.
 * Generated from class `MR::CSharp::ConvCtorTrivial`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_ConvCtorTrivial extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_ConvCtorTrivial_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::ConvCtorTrivial::ConvCtorTrivial`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_ConvCtorTrivial_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_ConvCtorTrivial);
    /**
     * Generated from constructor `MR::CSharp::ConvCtorTrivial::ConvCtorTrivial`.
     *
     * Calls `MR_CSharp_ConvCtorTrivial_Construct()`.
     */
    constructor(_1: number);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::ConvCtorTrivial::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_ConvCtorTrivial_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_ConvCtorTrivial): L.MR_CSharp_ConvCtorTrivial;
}

/**
 * Test that the default argument of the parameter of a converting constructor is stripped when rewriting it as a conversion operator.
 * Generated from class `MR::CSharp::ConvCtorWithDefArg`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_ConvCtorWithDefArg extends ffi.CppObject
{
    /**
     * Generated from constructor `MR::CSharp::ConvCtorWithDefArg::ConvCtorWithDefArg`.
     *
     * Calls `MR_CSharp_ConvCtorWithDefArg_Construct()`. `_1` defaults to `42`.
     */
    constructor(_1?: number | null);
    /**
     * Generated from constructor `MR::CSharp::ConvCtorWithDefArg::ConvCtorWithDefArg`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_ConvCtorWithDefArg_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_ConvCtorWithDefArg);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::ConvCtorWithDefArg::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_ConvCtorWithDefArg_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_ConvCtorWithDefArg): L.MR_CSharp_ConvCtorWithDefArg;
}

/**
 * Conversion operators. We preserve explicit-ness.
 * Generated from class `MR::CSharp::ConvOp`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_ConvOp extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_ConvOp_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::ConvOp::ConvOp`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_ConvOp_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_ConvOp);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from conversion operator `MR::CSharp::ConvOp::operator int32_t`.
     *
     * Calls `MR_CSharp_ConvOp_ConvertTo_int32_t()`.
     */
    convertTo_int32_t(): number;
    /**
     * Generated from conversion operator `MR::CSharp::ConvOp::operator float`.
     *
     * Calls `MR_CSharp_ConvOp_ConvertTo_float()`.
     */
    convertTo_float(): number;
    /**
     * Generated from method `MR::CSharp::ConvOp::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_ConvOp_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_ConvOp): L.MR_CSharp_ConvOp;
}

/**
 * Conversion operators to references.
 * Generated from class `MR::CSharp::ConvOpToRef`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_ConvOpToRef extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_ConvOpToRef_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::ConvOpToRef::ConvOpToRef`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_ConvOpToRef_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_ConvOpToRef);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Not to a reference.
     * Generated from conversion operator `MR::CSharp::ConvOpToRef::operator int32_t`.
     *
     * Calls `MR_CSharp_ConvOpToRef_ConvertTo_int32_t()`.
     */
    convertTo_int32_t(): number;
    /**
     * To a reference.
     * Generated from conversion operator `MR::CSharp::ConvOpToRef::operator float &`.
     *
     * Calls `MR_CSharp_ConvOpToRef_ConvertTo_float_ref()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    convertTo_float_ref(): number;
    /**
     * To a reference, explicit.
     * Generated from conversion operator `MR::CSharp::ConvOpToRef::operator uint16_t &`.
     *
     * Calls `MR_CSharp_ConvOpToRef_ConvertTo_uint16_t_ref()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    convertTo_uint16_t_ref(): number;
    /**
     * Generated from method `MR::CSharp::ConvOpToRef::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_ConvOpToRef_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_ConvOpToRef): L.MR_CSharp_ConvOpToRef;
}

/**
 * Generated from class `MR::CSharp::D`.
 * Derived classes:
 *   Direct: (non-virtual)
 *     `MR::CSharp::F`
 *     `MR::CSharp::G`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_D extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_D_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::D::D`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_D_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_D);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::D::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_D_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_D): L.MR_CSharp_D;
    /**
     * Generated from method `MR::CSharp::D::d1`.
     *
     * Calls `MR_CSharp_D_d1()`.
     */
    d1(): void;
    /**
     * Generated from method `MR::CSharp::D::d2`.
     *
     * Calls `MR_CSharp_D_d2()`.
     */
    d2(): void;
}

/**
 * Generated from class `MR::CSharp::E`.
 * Derived classes:
 *   Virtual:
 *     `MR::CSharp::G`
 *   Direct: (non-virtual)
 *     `MR::CSharp::F`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_E extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_E_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::E::E`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_E_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_E);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::E::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_E_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_E): L.MR_CSharp_E;
    /**
     * Generated from method `MR::CSharp::E::e1`.
     *
     * Calls `MR_CSharp_E_e1()`.
     */
    e1(): void;
    /**
     * Generated from method `MR::CSharp::E::e2`.
     *
     * Calls `MR_CSharp_E_e2()`.
     */
    e2(): void;
}

/**
 * Test equality comparison.
 * Generated from class `MR::CSharp::EqualityA`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_EqualityA extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_EqualityA_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::EqualityA::EqualityA`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_EqualityA_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_EqualityA);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::EqualityA::operator==`.
     *
     * Calls `MR_C_equal_MR_CSharp_EqualityA_int32_t()`.
     */
    opEqual(_1: number): boolean;
    /**
     * Generated from method `MR::CSharp::EqualityA::operator==`.
     *
     * Calls `MR_C_equal_MR_CSharp_EqualityA()`.
     */
    opEqual(_1: L.MR_CSharp_EqualityA): boolean;
    /** The overloads of `opEqual` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /**
     * Generated from method `MR::CSharp::EqualityA::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_EqualityA_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_EqualityA): L.MR_CSharp_EqualityA;
    /**
     * Generated from method `MR::CSharp::EqualityA::operator==`.
     *
     * Calls `MR_C_equal_MR_CSharp_EqualityA_int32_t()`.
     */
    opEqual_int32_t(_1: number): boolean;
    /**
     * Generated from method `MR::CSharp::EqualityA::operator!=`.
     *
     * Calls `MR_C_not_equal_MR_CSharp_EqualityA_int32_t()`.
     */
    opNotEqual(_1: number): boolean;
    /**
     * Generated from method `MR::CSharp::EqualityA::operator==`.
     *
     * Calls `MR_C_equal_MR_CSharp_EqualityA()`.
     */
    opEqual_2(_1: L.MR_CSharp_EqualityA): boolean;
}

/**
 * Return type isn't `bool`.
 * Generated from class `MR::CSharp::EqualityB`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_EqualityB extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_EqualityB_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::EqualityB::EqualityB`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_EqualityB_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_EqualityB);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::EqualityB::operator==`.
     *
     * Calls `MR_C_equal_MR_CSharp_EqualityB_int32_t()`.
     */
    opEqual(_1: number): number;
    /**
     * Generated from method `MR::CSharp::EqualityB::operator==`.
     *
     * Calls `MR_C_equal_MR_CSharp_EqualityB()`.
     */
    opEqual(_1: L.MR_CSharp_EqualityB): number;
    /** The overloads of `opEqual` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /**
     * Generated from method `MR::CSharp::EqualityB::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_EqualityB_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_EqualityB): L.MR_CSharp_EqualityB;
    /**
     * Generated from method `MR::CSharp::EqualityB::operator==`.
     *
     * Calls `MR_C_equal_MR_CSharp_EqualityB_int32_t()`.
     */
    opEqual_int32_t(_1: number): number;
    /**
     * Generated from method `MR::CSharp::EqualityB::operator!=`.
     *
     * Calls `MR_C_not_equal_MR_CSharp_EqualityB_int32_t()`.
     */
    opNotEqual(_1: number): number;
    /**
     * Generated from method `MR::CSharp::EqualityB::operator==`.
     *
     * Calls `MR_C_equal_MR_CSharp_EqualityB()`.
     */
    opEqual_2(_1: L.MR_CSharp_EqualityB): number;
}

/**
 * Return type is `void`.
 * Generated from class `MR::CSharp::EqualityC`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_EqualityC extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_EqualityC_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::EqualityC::EqualityC`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_EqualityC_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_EqualityC);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::EqualityC::operator==`.
     *
     * Calls `MR_C_equal_MR_CSharp_EqualityC_int32_t()`.
     */
    opEqual(_1: number): void;
    /**
     * Generated from method `MR::CSharp::EqualityC::operator==`.
     *
     * Calls `MR_C_equal_MR_CSharp_EqualityC()`.
     */
    opEqual(_1: L.MR_CSharp_EqualityC): void;
    /** The overloads of `opEqual` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /**
     * Generated from method `MR::CSharp::EqualityC::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_EqualityC_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_EqualityC): L.MR_CSharp_EqualityC;
    /**
     * Generated from method `MR::CSharp::EqualityC::operator==`.
     *
     * Calls `MR_C_equal_MR_CSharp_EqualityC_int32_t()`.
     */
    opEqual_int32_t(_1: number): void;
    /**
     * Generated from method `MR::CSharp::EqualityC::operator!=`.
     *
     * Calls `MR_C_not_equal_MR_CSharp_EqualityC_int32_t()`.
     */
    opNotEqual(_1: number): void;
    /**
     * Generated from method `MR::CSharp::EqualityC::operator==`.
     *
     * Calls `MR_C_equal_MR_CSharp_EqualityC()`.
     */
    opEqual_2(_1: L.MR_CSharp_EqualityC): void;
}

/**
 * The C# parameter type ends with `?`, and isn't a managed type.
 * Generated from class `MR::CSharp::EqualityD`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_EqualityD extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_EqualityD_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::EqualityD::EqualityD`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_EqualityD_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_EqualityD);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::EqualityD::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_EqualityD_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_EqualityD): L.MR_CSharp_EqualityD;
    /**
     * Generated from method `MR::CSharp::EqualityD::operator==`.
     *
     * Calls `MR_C_equal_MR_CSharp_EqualityD_const_int32_t_ptr()`.
     */
    opEqual(_1?: number | null): boolean;
}

/**
 * The C# parameter type ends with `?`, and is a managed type.
 * Generated from class `MR::CSharp::EqualityE`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_EqualityE extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_EqualityE_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::EqualityE::EqualityE`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_EqualityE_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_EqualityE);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::EqualityE::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_EqualityE_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_EqualityE): L.MR_CSharp_EqualityE;
    /**
     * Generated from method `MR::CSharp::EqualityE::operator==`.
     *
     * Calls `MR_C_equal_MR_CSharp_EqualityE_MR_CSharp_EqualityD_ptr()`.
     */
    opEqual(_1?: L.MR_CSharp_EqualityD | null): boolean;
}

/**
 * Exposed structs:
 * Generated from class `MR::CSharp::ExposedLayout`.
 *
 * Has the same layout as the C++ struct, the fields are accessed in place in wasm memory. `new X(ffi.RAW, pointer, owned, owner)` wraps existing memory.
 */
export declare class MR_CSharp_ExposedLayout extends ffi.CppStruct
{
    /** The size of the struct in bytes. */
    static readonly SIZE: number;
    static readonly ALIGNMENT: number;
    x: number;
    /**
     * This is field `y`!
     */
    y: number;
    z: number;
    /** The element of the array field `arr[3]`. */
    getArr(i0: number): number;
    setArr(i0: number, value: number): void;
    b: boolean;
    /** The element of the array field `ba[4][5]`. */
    getBa(i0: number, i1: number): boolean;
    setBa(i0: number, i1: number, value: boolean): void;
    /** Zero-initialized. */
    constructor();
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::ExposedLayout::blah`.
     *
     * Calls `MR_CSharp_ExposedLayout_blah()`.
     */
    static blah(): void;
    /**
     * Generated from method `MR::CSharp::ExposedLayout::operator<`.
     *
     * Calls `MR_C_less_MR_CSharp_ExposedLayout()`.
     */
    opLess(_1: L.MR_CSharp_ExposedLayout): boolean;
    /**
     * Generated from method `MR::CSharp::ExposedLayout::operator<`.
     *
     * Calls `MR_C_less_MR_CSharp_ExposedLayout_char()`.
     */
    opLess(_1: number): boolean;
    /** The overloads of `opLess` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /**
     * Generated from method `MR::CSharp::ExposedLayout::foo`.
     *
     * Calls `MR_CSharp_ExposedLayout_foo()`.
     */
    foo(): void;
    /**
     * Generated from method `MR::CSharp::ExposedLayout::bar`.
     *
     * Calls `MR_CSharp_ExposedLayout_bar()`.
     */
    bar(): void;
    /**
     * Try some jank operators.
     * Generated from method `MR::CSharp::ExposedLayout::operator++`.
     *
     * Calls `MR_C_incr_MR_CSharp_ExposedLayout()`.
     */
    opIncr(): void;
    /**
     * Generated from method `MR::CSharp::ExposedLayout::operator+`.
     *
     * Calls `MR_C_add_MR_CSharp_ExposedLayout_ref_int32_t()`.
     */
    opAdd(_1: number): number;
    /**
     * Test how returning references to an exposed struct works, since C# overloaded operators can't return `ref`.
     * Note that this operator must be `const` to test this correctly, since we turn non-const operators in exposed structs into functions.
     * Generated from method `MR::CSharp::ExposedLayout::operator*`.
     *
     * Calls `MR_C_mul_MR_CSharp_ExposedLayout_int32_t()`.
     */
    opMul(_1: number): L.MR_CSharp_ExposedLayout;
    /**
     * Generated from method `MR::CSharp::ExposedLayout::operator+`.
     *
     * Calls `MR_C_add_const_MR_CSharp_ExposedLayout_ref_int32_t()`.
     */
    opAdd_const_ref_int32_t(_1: number): L.MR_CSharp_ExposedLayout;
    /**
     * Generated from method `MR::CSharp::ExposedLayout::operator<`.
     *
     * Calls `MR_C_less_MR_CSharp_ExposedLayout()`.
     */
    opLess_2(_1: L.MR_CSharp_ExposedLayout): boolean;
    /**
     * Generated from method `MR::CSharp::ExposedLayout::operator==`.
     *
     * Calls `MR_C_equal_MR_CSharp_ExposedLayout_float()`.
     */
    opEqual(_1: number): boolean;
    /**
     * Generated from method `MR::CSharp::ExposedLayout::operator<`.
     *
     * Calls `MR_C_less_MR_CSharp_ExposedLayout_char()`.
     */
    opLess_char(_1: number): boolean;
}

/**
 * Generated from class `MR::CSharp::ExposedLayoutB`.
 *
 * Has the same layout as the C++ struct, the fields are accessed in place in wasm memory. `new X(ffi.RAW, pointer, owned, owner)` wraps existing memory.
 */
export declare class MR_CSharp_ExposedLayoutB extends ffi.CppStruct
{
    /** The size of the struct in bytes. */
    static readonly SIZE: number;
    static readonly ALIGNMENT: number;
    x: number;
    /**
     * This gets a lifetime annotation from `--infer-lifetime-constructors`, but it should be a no-op in an exposed struct.
     * Generated from constructor `MR::CSharp::ExposedLayoutB::ExposedLayoutB`.
     *
     * Calls `MR_CSharp_ExposedLayoutB_Construct_1()`.
     */
    constructor(_1: L.MR_CSharp_A);
    /**
     * Some random ctor.
     * Generated from constructor `MR::CSharp::ExposedLayoutB::ExposedLayoutB`.
     *
     * Calls `MR_CSharp_ExposedLayoutB_Construct_2()`.
     */
    constructor(_1: number, _2: number);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Zero-initialized. */
    constructor();
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
}

/**
 * Just a simple exposed struct to test other things.
 * Generated from class `MR::CSharp::ExposedLayoutC`.
 *
 * Has the same layout as the C++ struct, the fields are accessed in place in wasm memory. `new X(ffi.RAW, pointer, owned, owner)` wraps existing memory.
 */
export declare class MR_CSharp_ExposedLayoutC extends ffi.CppStruct
{
    /** The size of the struct in bytes. */
    static readonly SIZE: number;
    static readonly ALIGNMENT: number;
    x: number;
    /** Zero-initialized. */
    constructor();
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
}

/**
 * This one is backed by a shared pointer.
 * Generated from class `MR::CSharp::ExposedLayoutSh`.
 *
 * Has the same layout as the C++ struct, the fields are accessed in place in wasm memory. `new X(ffi.RAW, pointer, owned, owner)` wraps existing memory.
 */
export declare class MR_CSharp_ExposedLayoutSh extends ffi.CppStruct
{
    /** The size of the struct in bytes. */
    static readonly SIZE: number;
    static readonly ALIGNMENT: number;
    x: number;
    /**
     * This is field `y`!
     */
    y: number;
    z: number;
    /** The element of the array field `arr[3]`. */
    getArr(i0: number): number;
    setArr(i0: number, value: number): void;
    b: boolean;
    /** The element of the array field `ba[4][5]`. */
    getBa(i0: number, i1: number): boolean;
    setBa(i0: number, i1: number, value: boolean): void;
    /** Zero-initialized. */
    constructor();
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::ExposedLayoutSh::blah`.
     *
     * Calls `MR_CSharp_ExposedLayoutSh_blah()`.
     */
    static blah(): void;
    /**
     * Generated from method `MR::CSharp::ExposedLayoutSh::operator<`.
     *
     * Calls `MR_C_less_MR_CSharp_ExposedLayoutSh()`.
     */
    opLess(_1: L.MR_CSharp_ExposedLayoutSh): boolean;
    /**
     * Generated from method `MR::CSharp::ExposedLayoutSh::operator<`.
     *
     * Calls `MR_C_less_MR_CSharp_ExposedLayoutSh_char()`.
     */
    opLess(_1: number): boolean;
    /** The overloads of `opLess` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /**
     * Generated from method `MR::CSharp::ExposedLayoutSh::operator==`.
     *
     * Calls `MR_C_equal_MR_CSharp_ExposedLayoutSh_float()`.
     */
    opEqual(_1: number): boolean;
    /**
     * While we're at it, test comparison against another exposed struct, since this is apparently non-trivial.
     * Generated from method `MR::CSharp::ExposedLayoutSh::operator==`.
     *
     * Calls `MR_C_equal_MR_CSharp_ExposedLayoutSh_MR_CSharp_ExposedLayout()`.
     */
    opEqual(_1: L.MR_CSharp_ExposedLayout): boolean;
    /**
     * And against itself, too.
     * Generated from method `MR::CSharp::ExposedLayoutSh::operator==`.
     *
     * Calls `MR_C_equal_MR_CSharp_ExposedLayoutSh()`.
     */
    opEqual(_1: L.MR_CSharp_ExposedLayoutSh): boolean;
    /** The overloads of `opEqual` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /**
     * Generated from method `MR::CSharp::ExposedLayoutSh::foo`.
     *
     * Calls `MR_CSharp_ExposedLayoutSh_foo()`.
     */
    foo(): void;
    /**
     * Generated from method `MR::CSharp::ExposedLayoutSh::bar`.
     *
     * Calls `MR_CSharp_ExposedLayoutSh_bar()`.
     */
    bar(): void;
    /**
     * Try some jank operators.
     * Generated from method `MR::CSharp::ExposedLayoutSh::operator++`.
     *
     * Calls `MR_C_incr_MR_CSharp_ExposedLayoutSh()`.
     */
    opIncr(): void;
    /**
     * Generated from method `MR::CSharp::ExposedLayoutSh::operator+`.
     *
     * Calls `MR_C_add_MR_CSharp_ExposedLayoutSh_int32_t()`.
     */
    opAdd(_1: number): number;
    /**
     * Generated from method `MR::CSharp::ExposedLayoutSh::operator*`.
     *
     * Calls `MR_C_mul_MR_CSharp_ExposedLayoutSh_int32_t()`.
     */
    opMul(_1: number): number;
    /**
     * Generated from method `MR::CSharp::ExposedLayoutSh::operator<`.
     *
     * Calls `MR_C_less_MR_CSharp_ExposedLayoutSh()`.
     */
    opLess_2(_1: L.MR_CSharp_ExposedLayoutSh): boolean;
    /**
     * Generated from method `MR::CSharp::ExposedLayoutSh::operator==`.
     *
     * Calls `MR_C_equal_MR_CSharp_ExposedLayoutSh_float()`.
     */
    opEqual_float(_1: number): boolean;
    /**
     * Generated from method `MR::CSharp::ExposedLayoutSh::operator<`.
     *
     * Calls `MR_C_less_MR_CSharp_ExposedLayoutSh_char()`.
     */
    opLess_char(_1: number): boolean;
    /**
     * While we're at it, test comparison against another exposed struct, since this is apparently non-trivial.
     * Generated from method `MR::CSharp::ExposedLayoutSh::operator==`.
     *
     * Calls `MR_C_equal_MR_CSharp_ExposedLayoutSh_MR_CSharp_ExposedLayout()`.
     */
    opEqual_MR_CSharp_ExposedLayout(_1: L.MR_CSharp_ExposedLayout): boolean;
    /**
     * And against itself, too.
     * Generated from method `MR::CSharp::ExposedLayoutSh::operator==`.
     *
     * Calls `MR_C_equal_MR_CSharp_ExposedLayoutSh()`.
     */
    opEqual_2(_1: L.MR_CSharp_ExposedLayoutSh): boolean;
}

/**
 * Generated from class `MR::CSharp::F`.
 * Base classes:
 *   Direct: (non-virtual)
 *     `MR::CSharp::A`
 *     `MR::CSharp::D`
 *     `MR::CSharp::E`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_F extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_F_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::F::F`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_F_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_F);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::F::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_F_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_F): L.MR_CSharp_F;
    /** Upcasts to the base class `MR::CSharp::A`. The result refers to this object.
     *
     * Calls `MR_CSharp_F_MutableUpcastTo_MR_CSharp_A()`. */
    upcastToA(): L.MR_CSharp_A;
    /** Static downcast from the base class `MR::CSharp::A`. Undefined behavior if the object isn't actually a `F`. The result refers to `object`.
     *
     * Calls `MR_CSharp_F_MutableStaticDowncastFrom_MR_CSharp_A()`. */
    static staticDowncastFromA(object: L.MR_CSharp_A): L.MR_CSharp_F;
    /** Dynamic downcast from the base class `MR::CSharp::A`. Returns null if the object isn't actually a `F`. The result refers to `object`.
     *
     * Calls `MR_CSharp_F_MutableDynamicDowncastFrom_MR_CSharp_A()`. */
    static dynamicDowncastFromA(object: L.MR_CSharp_A): L.MR_CSharp_F | null;
    /** Upcasts to the base class `MR::CSharp::D`. The result refers to this object.
     *
     * Calls `MR_CSharp_F_MutableUpcastTo_MR_CSharp_D()`. */
    upcastToD(): L.MR_CSharp_D;
    /** Static downcast from the base class `MR::CSharp::D`. Undefined behavior if the object isn't actually a `F`. The result refers to `object`.
     *
     * Calls `MR_CSharp_F_MutableStaticDowncastFrom_MR_CSharp_D()`. */
    static staticDowncastFromD(object: L.MR_CSharp_D): L.MR_CSharp_F;
    /** Upcasts to the base class `MR::CSharp::E`. The result refers to this object.
     *
     * Calls `MR_CSharp_F_MutableUpcastTo_MR_CSharp_E()`. */
    upcastToE(): L.MR_CSharp_E;
    /** Static downcast from the base class `MR::CSharp::E`. Undefined behavior if the object isn't actually a `F`. The result refers to `object`.
     *
     * Calls `MR_CSharp_F_MutableStaticDowncastFrom_MR_CSharp_E()`. */
    static staticDowncastFromE(object: L.MR_CSharp_E): L.MR_CSharp_F;
}

/**
 * Even if the secondary bases are virtual, this doesn't affect anything.
 * Generated from class `MR::CSharp::G`.
 * Base classes:
 *   Virtual:
 *     `MR::CSharp::E`
 *   Direct: (non-virtual)
 *     `MR::CSharp::A`
 *     `MR::CSharp::D`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_G extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_G_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::G::G`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_G_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_G);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::G::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_G_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_G): L.MR_CSharp_G;
    /** Upcasts to the base class `MR::CSharp::A`. The result refers to this object.
     *
     * Calls `MR_CSharp_G_MutableUpcastTo_MR_CSharp_A()`. */
    upcastToA(): L.MR_CSharp_A;
    /** Static downcast from the base class `MR::CSharp::A`. Undefined behavior if the object isn't actually a `G`. The result refers to `object`.
     *
     * Calls `MR_CSharp_G_MutableStaticDowncastFrom_MR_CSharp_A()`. */
    static staticDowncastFromA(object: L.MR_CSharp_A): L.MR_CSharp_G;
    /** Dynamic downcast from the base class `MR::CSharp::A`. Returns null if the object isn't actually a `G`. The result refers to `object`.
     *
     * Calls `MR_CSharp_G_MutableDynamicDowncastFrom_MR_CSharp_A()`. */
    static dynamicDowncastFromA(object: L.MR_CSharp_A): L.MR_CSharp_G | null;
    /** Upcasts to the base class `MR::CSharp::D`. The result refers to this object.
     *
     * Calls `MR_CSharp_G_MutableUpcastTo_MR_CSharp_D()`. */
    upcastToD(): L.MR_CSharp_D;
    /** Static downcast from the base class `MR::CSharp::D`. Undefined behavior if the object isn't actually a `G`. The result refers to `object`.
     *
     * Calls `MR_CSharp_G_MutableStaticDowncastFrom_MR_CSharp_D()`. */
    static staticDowncastFromD(object: L.MR_CSharp_D): L.MR_CSharp_G;
    /** Upcasts to the base class `MR::CSharp::E`. The result refers to this object.
     *
     * Calls `MR_CSharp_G_MutableUpcastTo_MR_CSharp_E()`. */
    upcastToE(): L.MR_CSharp_E;
}

/**
 * This is the happy path.
 * This emits static operators in the const half, and non-static operators (or functions pre C# 14) in the non-const half.
 * Generated from class `MR::CSharp::IncrDecrA`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_IncrDecrA extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_IncrDecrA_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::IncrDecrA::IncrDecrA`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_IncrDecrA_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_IncrDecrA);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::IncrDecrA::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_IncrDecrA_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_IncrDecrA): L.MR_CSharp_IncrDecrA;
    /**
     * Generated from method `MR::CSharp::IncrDecrA::operator++`.
     *
     * Calls `MR_C_incr_MR_CSharp_IncrDecrA()`.
     */
    opIncr(): L.MR_CSharp_IncrDecrA;
    /**
     * Generated from method `MR::CSharp::IncrDecrA::operator++`.
     *
     * Calls `MR_C_post_incr_MR_CSharp_IncrDecrA()`.
     */
    opPostIncr(): L.MR_CSharp_IncrDecrA;
    /**
     * Generated from method `MR::CSharp::IncrDecrA::operator--`.
     *
     * Calls `MR_C_decr_MR_CSharp_IncrDecrA()`.
     */
    opDecr(): L.MR_CSharp_IncrDecrA;
    /**
     * Generated from method `MR::CSharp::IncrDecrA::operator--`.
     *
     * Calls `MR_C_post_decr_MR_CSharp_IncrDecrA()`.
     */
    opPostDecr(): L.MR_CSharp_IncrDecrA;
}

/**
 * This is a somewhat happy path. Same as above, but everything gets emitted in the const half.
 * Generated from class `MR::CSharp::IncrDecrB`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_IncrDecrB extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_IncrDecrB_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::IncrDecrB::IncrDecrB`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_IncrDecrB_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_IncrDecrB);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::IncrDecrB::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_IncrDecrB_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_IncrDecrB): L.MR_CSharp_IncrDecrB;
    /**
     * Generated from method `MR::CSharp::IncrDecrB::operator++`.
     *
     * Calls `MR_C_incr_MR_CSharp_IncrDecrB()`.
     */
    opIncr(): L.MR_CSharp_IncrDecrB;
    /**
     * Generated from method `MR::CSharp::IncrDecrB::operator++`.
     *
     * Calls `MR_C_post_incr_MR_CSharp_IncrDecrB()`.
     */
    opPostIncr(): L.MR_CSharp_IncrDecrB;
    /**
     * Generated from method `MR::CSharp::IncrDecrB::operator--`.
     *
     * Calls `MR_C_decr_MR_CSharp_IncrDecrB()`.
     */
    opDecr(): L.MR_CSharp_IncrDecrB;
    /**
     * Generated from method `MR::CSharp::IncrDecrB::operator--`.
     *
     * Calls `MR_C_post_decr_MR_CSharp_IncrDecrB()`.
     */
    opPostDecr(): L.MR_CSharp_IncrDecrB;
}

/**
 * This is a somewhat happy path. Since here the copy ctor takes a non-const reference, the static operators get added to the non-const half.
 * The non-static ones are not marked const, so they're also in the non-const half.
 * Generated from class `MR::CSharp::IncrDecrC`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_IncrDecrC extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_IncrDecrC_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::IncrDecrC::IncrDecrC`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_IncrDecrC_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_IncrDecrC);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::IncrDecrC::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_IncrDecrC_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_IncrDecrC): L.MR_CSharp_IncrDecrC;
    /**
     * Generated from method `MR::CSharp::IncrDecrC::operator++`.
     *
     * Calls `MR_C_incr_MR_CSharp_IncrDecrC()`.
     */
    opIncr(): L.MR_CSharp_IncrDecrC;
    /**
     * Generated from method `MR::CSharp::IncrDecrC::operator++`.
     *
     * Calls `MR_C_post_incr_MR_CSharp_IncrDecrC()`.
     */
    opPostIncr(): L.MR_CSharp_IncrDecrC;
    /**
     * Generated from method `MR::CSharp::IncrDecrC::operator--`.
     *
     * Calls `MR_C_decr_MR_CSharp_IncrDecrC()`.
     */
    opDecr(): L.MR_CSharp_IncrDecrC;
    /**
     * Generated from method `MR::CSharp::IncrDecrC::operator--`.
     *
     * Calls `MR_C_post_decr_MR_CSharp_IncrDecrC()`.
     */
    opPostDecr(): L.MR_CSharp_IncrDecrC;
}

/**
 * This is a somewhat happy path. Since here the copy ctor takes a non-const reference, the static operators get added to the non-const half.
 * The non-static ones are in the const half due to being marked const.
 * Generated from class `MR::CSharp::IncrDecrD`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_IncrDecrD extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_IncrDecrD_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::IncrDecrD::IncrDecrD`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_IncrDecrD_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_IncrDecrD);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::IncrDecrD::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_IncrDecrD_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_IncrDecrD): L.MR_CSharp_IncrDecrD;
    /**
     * Generated from method `MR::CSharp::IncrDecrD::operator++`.
     *
     * Calls `MR_C_incr_MR_CSharp_IncrDecrD()`.
     */
    opIncr(): L.MR_CSharp_IncrDecrD;
    /**
     * Generated from method `MR::CSharp::IncrDecrD::operator++`.
     *
     * Calls `MR_C_post_incr_MR_CSharp_IncrDecrD()`.
     */
    opPostIncr(): L.MR_CSharp_IncrDecrD;
    /**
     * Generated from method `MR::CSharp::IncrDecrD::operator--`.
     *
     * Calls `MR_C_decr_MR_CSharp_IncrDecrD()`.
     */
    opDecr(): L.MR_CSharp_IncrDecrD;
    /**
     * Generated from method `MR::CSharp::IncrDecrD::operator--`.
     *
     * Calls `MR_C_post_decr_MR_CSharp_IncrDecrD()`.
     */
    opPostDecr(): L.MR_CSharp_IncrDecrD;
}

/**
 * Here we don't special-case those operators due to the class being non-copyable (and not trivially movable). They get spawned as functions as usual, in the non-const half.
 * Generated from class `MR::CSharp::IncrDecrE`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_IncrDecrE extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_IncrDecrE_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::IncrDecrE::IncrDecrE`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_IncrDecrE_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_IncrDecrE);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::IncrDecrE::operator++`.
     *
     * Calls `MR_C_incr_MR_CSharp_IncrDecrE()`.
     */
    opIncr(): L.MR_CSharp_IncrDecrE;
    /**
     * Generated from method `MR::CSharp::IncrDecrE::operator++`.
     *
     * Calls `MR_C_post_incr_MR_CSharp_IncrDecrE()`.
     */
    opPostIncr(): L.MR_CSharp_IncrDecrE;
    /**
     * Generated from method `MR::CSharp::IncrDecrE::operator--`.
     *
     * Calls `MR_C_decr_MR_CSharp_IncrDecrE()`.
     */
    opDecr(): L.MR_CSharp_IncrDecrE;
    /**
     * Generated from method `MR::CSharp::IncrDecrE::operator--`.
     *
     * Calls `MR_C_post_decr_MR_CSharp_IncrDecrE()`.
     */
    opPostDecr(): L.MR_CSharp_IncrDecrE;
}

/**
 * Here we don't special-case those operators due to the class being non-copyable (and not trivially movable). They get spawned as functions as usual, in the const half.
 * Generated from class `MR::CSharp::IncrDecrF`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_IncrDecrF extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_IncrDecrF_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::IncrDecrF::IncrDecrF`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_IncrDecrF_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_IncrDecrF);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::IncrDecrF::operator++`.
     *
     * Calls `MR_C_incr_MR_CSharp_IncrDecrF()`.
     */
    opIncr(): L.MR_CSharp_IncrDecrF;
    /**
     * Generated from method `MR::CSharp::IncrDecrF::operator++`.
     *
     * Calls `MR_C_post_incr_MR_CSharp_IncrDecrF()`.
     */
    opPostIncr(): L.MR_CSharp_IncrDecrF;
    /**
     * Generated from method `MR::CSharp::IncrDecrF::operator--`.
     *
     * Calls `MR_C_decr_MR_CSharp_IncrDecrF()`.
     */
    opDecr(): L.MR_CSharp_IncrDecrF;
    /**
     * Generated from method `MR::CSharp::IncrDecrF::operator--`.
     *
     * Calls `MR_C_post_decr_MR_CSharp_IncrDecrF()`.
     */
    opPostDecr(): L.MR_CSharp_IncrDecrF;
}

/**
 * This class is non-copyable, but is trivially movable, so we treat it as if it was copyable.
 * Generated from class `MR::CSharp::IncrDecrG`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_IncrDecrG extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_IncrDecrG_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::IncrDecrG::IncrDecrG`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_IncrDecrG_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_IncrDecrG);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::IncrDecrG::operator++`.
     *
     * Calls `MR_C_incr_MR_CSharp_IncrDecrG()`.
     */
    opIncr(): L.MR_CSharp_IncrDecrG;
    /**
     * Generated from method `MR::CSharp::IncrDecrG::operator++`.
     *
     * Calls `MR_C_post_incr_MR_CSharp_IncrDecrG()`.
     */
    opPostIncr(): L.MR_CSharp_IncrDecrG;
    /**
     * Generated from method `MR::CSharp::IncrDecrG::operator--`.
     *
     * Calls `MR_C_decr_MR_CSharp_IncrDecrG()`.
     */
    opDecr(): L.MR_CSharp_IncrDecrG;
    /**
     * Generated from method `MR::CSharp::IncrDecrG::operator--`.
     *
     * Calls `MR_C_post_decr_MR_CSharp_IncrDecrG()`.
     */
    opPostDecr(): L.MR_CSharp_IncrDecrG;
}

/**
 * This class is non-copyable, but is trivially movable, so we treat it as if it was copyable.
 * Generated from class `MR::CSharp::IncrDecrH`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_IncrDecrH extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_IncrDecrH_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::IncrDecrH::IncrDecrH`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_IncrDecrH_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_IncrDecrH);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::IncrDecrH::operator++`.
     *
     * Calls `MR_C_incr_MR_CSharp_IncrDecrH()`.
     */
    opIncr(): L.MR_CSharp_IncrDecrH;
    /**
     * Generated from method `MR::CSharp::IncrDecrH::operator++`.
     *
     * Calls `MR_C_post_incr_MR_CSharp_IncrDecrH()`.
     */
    opPostIncr(): L.MR_CSharp_IncrDecrH;
    /**
     * Generated from method `MR::CSharp::IncrDecrH::operator--`.
     *
     * Calls `MR_C_decr_MR_CSharp_IncrDecrH()`.
     */
    opDecr(): L.MR_CSharp_IncrDecrH;
    /**
     * Generated from method `MR::CSharp::IncrDecrH::operator--`.
     *
     * Calls `MR_C_post_decr_MR_CSharp_IncrDecrH()`.
     */
    opPostDecr(): L.MR_CSharp_IncrDecrH;
}

/**
 * Friend functions.
 * Generated from class `MR::CSharp::IncrDecrI`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_IncrDecrI extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_IncrDecrI_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::IncrDecrI::IncrDecrI`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_IncrDecrI_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_IncrDecrI);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::IncrDecrI::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_IncrDecrI_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_IncrDecrI): L.MR_CSharp_IncrDecrI;
}

/**
 * Subscription operator.
 * Generated from class `MR::CSharp::IndexerA`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_IndexerA extends ffi.CppObject
{
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::IndexerA` named `x`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_IndexerA_Get_x()`.
     */
    x: number;
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_IndexerA_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs `MR::CSharp::IndexerA` elementwise.
     * The reference to the parameter `x` might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_IndexerA_ConstructFrom()`.
     */
    constructor(x: number);
    /**
     * Generated from constructor `MR::CSharp::IndexerA::IndexerA`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_IndexerA_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_IndexerA);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::IndexerA::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_IndexerA_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_IndexerA): L.MR_CSharp_IndexerA;
    /**
     * Generated from method `MR::CSharp::IndexerA::operator[]`.
     *
     * Calls `MR_CSharp_IndexerA_index()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    index(i: number): number;
}

/**
 * Generated from class `MR::CSharp::IndexerB`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_IndexerB extends ffi.CppObject
{
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::IndexerB` named `a`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_IndexerB_Get_a()`.
     */
    a: L.MR_CSharp_IndexerA;
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_IndexerB_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs `MR::CSharp::IndexerB` elementwise.
     * The reference to the parameter `a` might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_IndexerB_ConstructFrom()`.
     */
    constructor(a: L.MR_CSharp_IndexerA);
    /**
     * Generated from constructor `MR::CSharp::IndexerB::IndexerB`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_IndexerB_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_IndexerB);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::IndexerB::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_IndexerB_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_IndexerB): L.MR_CSharp_IndexerB;
    /**
     * Generated from method `MR::CSharp::IndexerB::operator[]`.
     *
     * Calls `MR_CSharp_IndexerB_index_1()`.
     */
    index_1(i: number): L.MR_CSharp_IndexerA;
    /**
     * Generated from method `MR::CSharp::IndexerB::operator[]`.
     *
     * Calls `MR_CSharp_IndexerB_index_2()`.
     */
    index_2(i: number, j: number): L.MR_CSharp_IndexerA;
    /**
     * Generated from method `MR::CSharp::IndexerB::operator[]`.
     *
     * Calls `MR_CSharp_IndexerB_index_0()`.
     */
    index_0(): L.MR_CSharp_IndexerA;
}

/**
 * Generated from class `MR::CSharp::IndexerC`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_IndexerC extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_IndexerC_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::IndexerC::IndexerC`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_IndexerC_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_IndexerC);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::IndexerC::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_IndexerC_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_IndexerC): L.MR_CSharp_IndexerC;
    /**
     * Generated from method `MR::CSharp::IndexerC::operator[]`.
     *
     * Calls `MR_CSharp_IndexerC_index_mut()`.
     */
    index_mut(i: number): number;
    /**
     * Generated from method `MR::CSharp::IndexerC::operator[]`.
     *
     * Calls `MR_CSharp_IndexerC_index()`.
     */
    index(i: number): number;
}

/**
 * Const member functions.
 * Generated from class `MR::CSharp::IterableA`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_IterableA extends ffi.CppObject
{
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::IterableA` named `arr`. This is a pointer to the first element of an array.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_IterableA_Get_arr()`.
     */
    readonly arr: number;
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_IterableA_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::IterableA::IterableA`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_IterableA_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_IterableA);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Returns the size of the array member of class `MR::CSharp::IterableA` named `arr`. The size is `3`.
     *
     * Calls `MR_CSharp_IterableA_GetSize_arr()`.
     */
    static arrSize(): number;
    /**
     * Generated from method `MR::CSharp::IterableA::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_IterableA_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_IterableA): L.MR_CSharp_IterableA;
    /**
     * Generated from method `MR::CSharp::IterableA::begin`.
     * The reference to this object might be preserved in the return value.
     *
     * Calls `MR_CSharp_IterableA_begin()`.
     */
    begin(): number | null;
    /**
     * Generated from method `MR::CSharp::IterableA::end`.
     * The reference to this object might be preserved in the return value.
     *
     * Calls `MR_CSharp_IterableA_end()`.
     */
    end(): number | null;
}

/**
 * Mutable member functions.
 * Generated from class `MR::CSharp::IterableB`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_IterableB extends ffi.CppObject
{
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::IterableB` named `arr`. This is a pointer to the first element of an array.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_IterableB_Get_arr()`.
     */
    readonly arr: number;
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_IterableB_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::IterableB::IterableB`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_IterableB_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_IterableB);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Returns the size of the array member of class `MR::CSharp::IterableB` named `arr`. The size is `3`.
     *
     * Calls `MR_CSharp_IterableB_GetSize_arr()`.
     */
    static arrSize(): number;
    /**
     * Generated from method `MR::CSharp::IterableB::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_IterableB_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_IterableB): L.MR_CSharp_IterableB;
    /**
     * Generated from method `MR::CSharp::IterableB::begin`.
     * The reference to this object might be preserved in the return value.
     *
     * Calls `MR_CSharp_IterableB_begin()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    begin(): number;
    /**
     * Generated from method `MR::CSharp::IterableB::end`.
     * The reference to this object might be preserved in the return value.
     *
     * Calls `MR_CSharp_IterableB_end()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    end(): number;
}

/**
 * Both const and mutable member functions.
 * Generated from class `MR::CSharp::IterableC`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_IterableC extends ffi.CppObject
{
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::IterableC` named `arr`. This is a pointer to the first element of an array.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_IterableC_Get_arr()`.
     */
    readonly arr: number;
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_IterableC_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::IterableC::IterableC`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_IterableC_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_IterableC);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Returns the size of the array member of class `MR::CSharp::IterableC` named `arr`. The size is `3`.
     *
     * Calls `MR_CSharp_IterableC_GetSize_arr()`.
     */
    static arrSize(): number;
    /**
     * Generated from method `MR::CSharp::IterableC::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_IterableC_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_IterableC): L.MR_CSharp_IterableC;
    /**
     * Generated from method `MR::CSharp::IterableC::begin`.
     * The reference to this object might be preserved in the return value.
     *
     * Calls `MR_CSharp_IterableC_begin_mut()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    begin(): number;
    /**
     * Generated from method `MR::CSharp::IterableC::end`.
     * The reference to this object might be preserved in the return value.
     *
     * Calls `MR_CSharp_IterableC_end_mut()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    end(): number;
    /**
     * Generated from method `MR::CSharp::IterableC::begin`.
     * The reference to this object might be preserved in the return value.
     *
     * Calls `MR_CSharp_IterableC_begin()`.
     */
    begin_2(): number | null;
    /**
     * Generated from method `MR::CSharp::IterableC::end`.
     * The reference to this object might be preserved in the return value.
     *
     * Calls `MR_CSharp_IterableC_end()`.
     */
    end_2(): number | null;
}

/**
 * Const free functions.
 * Generated from class `MR::CSharp::IterableD`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_IterableD extends ffi.CppObject
{
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::IterableD` named `arr`. This is a pointer to the first element of an array.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_IterableD_Get_arr()`.
     */
    readonly arr: number;
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_IterableD_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::IterableD::IterableD`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_IterableD_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_IterableD);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Returns the size of the array member of class `MR::CSharp::IterableD` named `arr`. The size is `3`.
     *
     * Calls `MR_CSharp_IterableD_GetSize_arr()`.
     */
    static arrSize(): number;
    /**
     * Generated from method `MR::CSharp::IterableD::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_IterableD_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_IterableD): L.MR_CSharp_IterableD;
}

/**
 * Mutable free functions.
 * Generated from class `MR::CSharp::IterableE`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_IterableE extends ffi.CppObject
{
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::IterableE` named `arr`. This is a pointer to the first element of an array.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_IterableE_Get_arr()`.
     */
    readonly arr: number;
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_IterableE_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::IterableE::IterableE`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_IterableE_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_IterableE);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Returns the size of the array member of class `MR::CSharp::IterableE` named `arr`. The size is `3`.
     *
     * Calls `MR_CSharp_IterableE_GetSize_arr()`.
     */
    static arrSize(): number;
    /**
     * Generated from method `MR::CSharp::IterableE::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_IterableE_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_IterableE): L.MR_CSharp_IterableE;
}

/**
 * Both const and mutable free functions.
 * Generated from class `MR::CSharp::IterableF`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_IterableF extends ffi.CppObject
{
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::IterableF` named `arr`. This is a pointer to the first element of an array.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_IterableF_Get_arr()`.
     */
    readonly arr: number;
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_IterableF_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::IterableF::IterableF`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_IterableF_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_IterableF);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Returns the size of the array member of class `MR::CSharp::IterableF` named `arr`. The size is `3`.
     *
     * Calls `MR_CSharp_IterableF_GetSize_arr()`.
     */
    static arrSize(): number;
    /**
     * Generated from method `MR::CSharp::IterableF::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_IterableF_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_IterableF): L.MR_CSharp_IterableF;
}

/**
 * Returning mutable class instances.
 * Generated from class `MR::CSharp::IterableG`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_IterableG extends ffi.CppObject
{
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::IterableG` named `arr`. This is a pointer to the first element of an array.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_IterableG_Get_arr()`.
     */
    readonly arr: L.MR_C_std_string;
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_IterableG_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::IterableG::IterableG`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_IterableG_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_IterableG);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Returns the size of the array member of class `MR::CSharp::IterableG` named `arr`. The size is `3`.
     *
     * Calls `MR_CSharp_IterableG_GetSize_arr()`.
     */
    static arrSize(): number;
    /**
     * Generated from method `MR::CSharp::IterableG::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_IterableG_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_IterableG): L.MR_CSharp_IterableG;
    /**
     * Generated from method `MR::CSharp::IterableG::begin`.
     * The reference to this object might be preserved in the return value.
     *
     * Calls `MR_CSharp_IterableG_begin()`.
     */
    begin(): L.MR_C_std_string | null;
    /**
     * Generated from method `MR::CSharp::IterableG::end`.
     * The reference to this object might be preserved in the return value.
     *
     * Calls `MR_CSharp_IterableG_end()`.
     */
    end(): L.MR_C_std_string | null;
}

/**
 * Returning const class instances.
 * Generated from class `MR::CSharp::IterableH`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_IterableH extends ffi.CppObject
{
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::IterableH` named `arr`. This is a pointer to the first element of an array.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_IterableH_Get_arr()`.
     */
    readonly arr: L.MR_C_std_string;
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_IterableH_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::IterableH::IterableH`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_IterableH_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_IterableH);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Returns the size of the array member of class `MR::CSharp::IterableH` named `arr`. The size is `3`.
     *
     * Calls `MR_CSharp_IterableH_GetSize_arr()`.
     */
    static arrSize(): number;
    /**
     * Generated from method `MR::CSharp::IterableH::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_IterableH_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_IterableH): L.MR_CSharp_IterableH;
    /**
     * Not making those functions `const` for a change.
     * Generated from method `MR::CSharp::IterableH::begin`.
     * The reference to this object might be preserved in the return value.
     *
     * Calls `MR_CSharp_IterableH_begin()`.
     */
    begin(): L.MR_C_std_string | null;
    /**
     * Generated from method `MR::CSharp::IterableH::end`.
     * The reference to this object might be preserved in the return value.
     *
     * Calls `MR_CSharp_IterableH_end()`.
     */
    end(): L.MR_C_std_string | null;
}

/**
 * Returning mutable exposed struct instances.
 * Generated from class `MR::CSharp::IterableI`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_IterableI extends ffi.CppObject
{
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::IterableI` named `arr`. This is a pointer to the first element of an array.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_IterableI_Get_arr()`.
     */
    readonly arr: L.MR_CSharp_ExposedLayout;
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_IterableI_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::IterableI::IterableI`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_IterableI_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_IterableI);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Returns the size of the array member of class `MR::CSharp::IterableI` named `arr`. The size is `3`.
     *
     * Calls `MR_CSharp_IterableI_GetSize_arr()`.
     */
    static arrSize(): number;
    /**
     * Generated from method `MR::CSharp::IterableI::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_IterableI_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_IterableI): L.MR_CSharp_IterableI;
    /**
     * Generated from method `MR::CSharp::IterableI::begin`.
     * The reference to this object might be preserved in the return value.
     *
     * Calls `MR_CSharp_IterableI_begin()`.
     */
    begin(): L.MR_CSharp_ExposedLayout | null;
    /**
     * Generated from method `MR::CSharp::IterableI::end`.
     * The reference to this object might be preserved in the return value.
     *
     * Calls `MR_CSharp_IterableI_end()`.
     */
    end(): L.MR_CSharp_ExposedLayout | null;
}

/**
 * Returning const exposed struct instances.
 * Generated from class `MR::CSharp::IterableJ`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_IterableJ extends ffi.CppObject
{
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::IterableJ` named `arr`. This is a pointer to the first element of an array.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_IterableJ_Get_arr()`.
     */
    readonly arr: L.MR_CSharp_ExposedLayout;
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_IterableJ_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::IterableJ::IterableJ`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_IterableJ_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_IterableJ);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Returns the size of the array member of class `MR::CSharp::IterableJ` named `arr`. The size is `3`.
     *
     * Calls `MR_CSharp_IterableJ_GetSize_arr()`.
     */
    static arrSize(): number;
    /**
     * Generated from method `MR::CSharp::IterableJ::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_IterableJ_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_IterableJ): L.MR_CSharp_IterableJ;
    /**
     * Not making those functions `const` for a change.
     * Generated from method `MR::CSharp::IterableJ::begin`.
     * The reference to this object might be preserved in the return value.
     *
     * Calls `MR_CSharp_IterableJ_begin()`.
     */
    begin(): L.MR_CSharp_ExposedLayout | null;
    /**
     * Generated from method `MR::CSharp::IterableJ::end`.
     * The reference to this object might be preserved in the return value.
     *
     * Calls `MR_CSharp_IterableJ_end()`.
     */
    end(): L.MR_CSharp_ExposedLayout | null;
}

/**
 * The sentinel having a different type.
 * Generated from class `MR::CSharp::IterableK`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_IterableK extends ffi.CppObject
{
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::IterableK` named `arr`. This is a pointer to the first element of an array.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_IterableK_Get_arr()`.
     */
    readonly arr: number;
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_IterableK_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::IterableK::IterableK`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_IterableK_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_IterableK);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Returns the size of the array member of class `MR::CSharp::IterableK` named `arr`. The size is `3`.
     *
     * Calls `MR_CSharp_IterableK_GetSize_arr()`.
     */
    static arrSize(): number;
    /**
     * Generated from method `MR::CSharp::IterableK::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_IterableK_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_IterableK): L.MR_CSharp_IterableK;
    /**
     * Not making those functions `const` for a change.
     * Generated from method `MR::CSharp::IterableK::begin`.
     * The reference to this object might be preserved in the return value.
     *
     * Calls `MR_CSharp_IterableK_begin()`.
     */
    begin(): L.MR_CSharp_IterableK_Iter;
    /**
     * Generated from method `MR::CSharp::IterableK::end`.
     * The reference to this object might be preserved in the return value.
     *
     * Calls `MR_CSharp_IterableK_end()`.
     */
    end(): L.MR_CSharp_IterableK_Sentinel;
}

/**
 * Generated from class `MR::CSharp::IterableK::Iter`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_IterableK_Iter extends ffi.CppObject
{
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::IterableK::Iter` named `ptr`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_IterableK_Iter_Get_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    get ptr(): number;
    set ptr(value: L.int32_t_output | null | undefined);
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_IterableK_Iter_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs `MR::CSharp::IterableK::Iter` elementwise.
     * The reference to the parameter `ptr` might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_IterableK_Iter_ConstructFrom()`.
     */
    constructor(ptr?: L.int32_t_output | null);
    /**
     * Generated from constructor `MR::CSharp::IterableK::Iter::Iter`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_IterableK_Iter_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_IterableK_Iter);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::IterableK::Iter::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_IterableK_Iter_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_IterableK_Iter): L.MR_CSharp_IterableK_Iter;
    /**
     * Generated from method `MR::CSharp::IterableK::Iter::operator*`.
     * The reference to this object might be preserved in the return value.
     *
     * Calls `MR_C_deref_MR_CSharp_IterableK_Iter()`.
     */
    opMul(): number;
    /**
     * Generated from method `MR::CSharp::IterableK::Iter::operator++`.
     *
     * Calls `MR_C_incr_MR_CSharp_IterableK_Iter()`.
     */
    opIncr(): void;
    /**
     * Generated from method `MR::CSharp::IterableK::Iter::operator==`.
     *
     * Calls `MR_C_equal_MR_CSharp_IterableK_Iter_MR_CSharp_IterableK_Sentinel()`.
     */
    opEqual(s: L.MR_CSharp_IterableK_Sentinel): boolean;
}

/**
 * Generated from class `MR::CSharp::IterableK::Sentinel`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_IterableK_Sentinel extends ffi.CppObject
{
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::IterableK::Sentinel` named `ptr`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_IterableK_Sentinel_Get_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    get ptr(): number;
    set ptr(value: L.int32_t_output | null | undefined);
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_IterableK_Sentinel_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs `MR::CSharp::IterableK::Sentinel` elementwise.
     * The reference to the parameter `ptr` might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_IterableK_Sentinel_ConstructFrom()`.
     */
    constructor(ptr?: L.int32_t_output | null);
    /**
     * Generated from constructor `MR::CSharp::IterableK::Sentinel::Sentinel`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_IterableK_Sentinel_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_IterableK_Sentinel);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::IterableK::Sentinel::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_IterableK_Sentinel_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_IterableK_Sentinel): L.MR_CSharp_IterableK_Sentinel;
}

/**
 * Templated free functions.
 * Generated from class `MR::CSharp::IterableL<int32_t>`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_IterableL_int32_t extends ffi.CppObject
{
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::IterableL<int32_t>` named `arr`. This is a pointer to the first element of an array.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_IterableL_int32_t_Get_arr()`.
     */
    readonly arr: number;
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_IterableL_int32_t_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::IterableL<int32_t>::IterableL`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_IterableL_int32_t_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_IterableL_int32_t);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Returns the size of the array member of class `MR::CSharp::IterableL<int32_t>` named `arr`. The size is `3`.
     *
     * Calls `MR_CSharp_IterableL_int32_t_GetSize_arr()`.
     */
    static arrSize(): number;
    /**
     * Generated from method `MR::CSharp::IterableL<int32_t>::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_IterableL_int32_t_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_IterableL_int32_t): L.MR_CSharp_IterableL_int32_t;
    /**
     * Generated from method `MR::CSharp::IterableL<int32_t>::begin`.
     * The reference to this object might be preserved in the return value.
     *
     * Calls `MR_CSharp_IterableL_int32_t_begin()`.
     */
    begin(): number | null;
    /**
     * Generated from method `MR::CSharp::IterableL<int32_t>::end`.
     * The reference to this object might be preserved in the return value.
     *
     * Calls `MR_CSharp_IterableL_int32_t_end()`.
     */
    end(): number | null;
}

/**
 * Keep-alive sorcery:
 * Generated from class `MR::CSharp::LifetimesA`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_LifetimesA extends ffi.CppObject
{
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::LifetimesA` named `x`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_LifetimesA_Get_x()`.
     */
    x: number;
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_LifetimesA_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs `MR::CSharp::LifetimesA` elementwise.
     * The reference to the parameter `x` might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_LifetimesA_ConstructFrom()`.
     */
    constructor(x: number);
    /**
     * Generated from constructor `MR::CSharp::LifetimesA::LifetimesA`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_LifetimesA_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_LifetimesA);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::LifetimesA::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_LifetimesA_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_LifetimesA): L.MR_CSharp_LifetimesA;
    /**
     * Some degenerate cases that have to be ignored in C#, because we don't support the lifetime operations for those types.
     * Generated from method `MR::CSharp::LifetimesA::foo`.
     * The reference to this object might be preserved in the return value.
     *
     * Calls `MR_CSharp_LifetimesA_foo()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    foo(): number;
    /**
     * Generated from method `MR::CSharp::LifetimesA::bar`.
     * The reference to the parameter `ref` might be preserved in this object.
     *
     * Calls `MR_CSharp_LifetimesA_bar()`.
     */
    bar(ref: L.int32_t_output): void;
}

/**
 * Generated from class `MR::CSharp::LifetimesB`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_LifetimesB extends ffi.CppObject
{
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::LifetimesB` named `a`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_LifetimesB_Get_a()`.
     */
    a: L.MR_CSharp_LifetimesA;
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_LifetimesB_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs `MR::CSharp::LifetimesB` elementwise.
     * The reference to the parameter `a` might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_LifetimesB_ConstructFrom()`.
     */
    constructor(a: L.MR_CSharp_LifetimesA);
    /**
     * Generated from constructor `MR::CSharp::LifetimesB::LifetimesB`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_LifetimesB_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_LifetimesB);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::LifetimesB::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_LifetimesB_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_LifetimesB): L.MR_CSharp_LifetimesB;
    /**
     * `--infer-lifetime-iterators` should act on those:
     * Generated from method `MR::CSharp::LifetimesB::begin`.
     * The reference to this object might be preserved in the return value.
     *
     * Calls `MR_CSharp_LifetimesB_begin()`.
     */
    begin(): L.MR_CSharp_LifetimesA | null;
    /**
     * Generated from method `MR::CSharp::LifetimesB::end`.
     * The reference to this object might be preserved in the return value.
     *
     * Calls `MR_CSharp_LifetimesB_end()`.
     */
    end(): L.MR_CSharp_LifetimesA | null;
    /**
     * Generated from method `MR::CSharp::LifetimesB::operator*`.
     * The reference to this object might be preserved in the return value.
     *
     * Calls `MR_C_deref_MR_CSharp_LifetimesB_ref()`.
     */
    opMul(): L.MR_CSharp_LifetimesA;
}

/**
 * Generated from class `MR::CSharp::LifetimesC`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_LifetimesC extends ffi.CppObject
{
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::LifetimesC` named `a`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_LifetimesC_Get_a()`.
     */
    a: L.MR_CSharp_LifetimesA;
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_LifetimesC_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs `MR::CSharp::LifetimesC` elementwise.
     * The reference to the parameter `a` might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_LifetimesC_ConstructFrom()`.
     */
    constructor(a: L.MR_CSharp_LifetimesA);
    /**
     * Generated from constructor `MR::CSharp::LifetimesC::LifetimesC`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_LifetimesC_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_LifetimesC);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::LifetimesC::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_LifetimesC_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_LifetimesC): L.MR_CSharp_LifetimesC;
}

/**
 * Generated from class `MR::CSharp::LifetimesD`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_LifetimesD extends ffi.CppObject
{
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::LifetimesD` named `a`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_LifetimesD_Get_a()`.
     */
    a: L.MR_CSharp_LifetimesA;
    /**
     * Generated from constructor `MR::CSharp::LifetimesD::LifetimesD`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_LifetimesD_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_LifetimesD);
    /**
     * `--infer-lifetime-constructors` should act on this.
     * Generated from constructor `MR::CSharp::LifetimesD::LifetimesD`.
     *
     * Calls `MR_CSharp_LifetimesD_Construct_1_MR_CSharp_LifetimesA()`.
     */
    constructor(ref: L.MR_CSharp_LifetimesA);
    /**
     * Store reference to this in param.
     * `--infer-lifetime-constructors` skips this, because we already have custom attributes.
     * Generated from constructor `MR::CSharp::LifetimesD::LifetimesD`.
     * The reference to the constructed object might be preserved in the parameter `ref`.
     *
     * Calls `MR_CSharp_LifetimesD_Construct_1_MR_CSharp_LifetimesB()`.
     */
    constructor(ref: L.MR_CSharp_LifetimesB);
    /**
     * Store param references in this. The two annotation styles are equivalent for constructors.
     * Generated from constructor `MR::CSharp::LifetimesD::LifetimesD`.
     * The reference to the parameter `ref` might be preserved in the constructed object.
     * The reference to the parameter `other_ref` might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_LifetimesD_Construct_2()`.
     */
    constructor(ref: L.MR_CSharp_LifetimesA, other_ref: L.MR_CSharp_LifetimesB);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::LifetimesD::return_ref_static`.
     * The reference to the parameter `ref` might be preserved in the return value.
     *
     * Calls `MR_CSharp_LifetimesD_return_ref_static()`.
     */
    static return_ref_static(ref: L.MR_CSharp_LifetimesA): L.MR_CSharp_LifetimesA;
    /**
     * Generated from method `MR::CSharp::LifetimesD::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_LifetimesD_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_LifetimesD): L.MR_CSharp_LifetimesD;
    /**
     * Generated from method `MR::CSharp::LifetimesD::get`.
     * The reference to this object might be preserved in the return value.
     *
     * Calls `MR_CSharp_LifetimesD_get()`.
     */
    get(): L.MR_CSharp_LifetimesA;
    /**
     * Generated from method `MR::CSharp::LifetimesD::return_ref`.
     * The reference to the parameter `ref` might be preserved in the return value.
     *
     * Calls `MR_CSharp_LifetimesD_return_ref()`.
     */
    return_ref(ref: L.MR_CSharp_LifetimesA): L.MR_CSharp_LifetimesA;
    /**
     * Generated from method `MR::CSharp::LifetimesD::store_ref_in_this`.
     * The reference to the parameter `ref` might be preserved in this object.
     *
     * Calls `MR_CSharp_LifetimesD_store_ref_in_this()`.
     */
    store_ref_in_this(ref: L.MR_CSharp_LifetimesA): void;
    /**
     * Generated from method `MR::CSharp::LifetimesD::store_ref_in_param`.
     * The reference to the parameter `ref` might be preserved in the parameter `other_ref`.
     *
     * Calls `MR_CSharp_LifetimesD_store_ref_in_param()`.
     */
    store_ref_in_param(ref: L.MR_CSharp_LifetimesA, other_ref: L.MR_CSharp_LifetimesB): void;
    /**
     * Generated from method `MR::CSharp::LifetimesD::store_this_in_param`.
     * The reference to this object might be preserved in the parameter `ref`.
     *
     * Calls `MR_CSharp_LifetimesD_store_this_in_param()`.
     */
    store_this_in_param(ref: L.MR_CSharp_LifetimesA): void;
}

/**
 * Nested attributes.
 * Generated from class `MR::CSharp::LifetimesE`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_LifetimesE extends ffi.CppObject
{
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::LifetimesE` named `a`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_LifetimesE_Get_a()`.
     */
    a: L.MR_CSharp_LifetimesA;
    /**
     * Generated from constructor `MR::CSharp::LifetimesE::LifetimesE`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_LifetimesE_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_LifetimesE);
    /**
     * Generated from constructor `MR::CSharp::LifetimesE::LifetimesE`.
     * The reference to things referred to by the constructed object (if any) might be preserved in the parameter `ref`.
     *
     * Calls `MR_CSharp_LifetimesE_Construct()`.
     */
    constructor(ref: L.MR_CSharp_LifetimesB);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::LifetimesE::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_LifetimesE_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_LifetimesE): L.MR_CSharp_LifetimesE;
    /**
     * Generated from method `MR::CSharp::LifetimesE::get`.
     * The reference to things referred to by this object (if any) might be preserved in the return value.
     *
     * Calls `MR_CSharp_LifetimesE_get()`.
     */
    get(): L.MR_CSharp_LifetimesA;
    /**
     * Generated from method `MR::CSharp::LifetimesE::return_ref`.
     * The reference to things referred to by the parameter `ref` (if any) might be preserved in the return value.
     *
     * Calls `MR_CSharp_LifetimesE_return_ref()`.
     */
    return_ref(ref: L.MR_CSharp_LifetimesA): L.MR_CSharp_LifetimesA;
    /**
     * Generated from method `MR::CSharp::LifetimesE::store_ref_in_this`.
     * The reference to things referred to by the parameter `ref` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_LifetimesE_store_ref_in_this()`.
     */
    store_ref_in_this(ref: L.MR_CSharp_LifetimesA): void;
}

/**
 * Members having the same name as the exposed class, after rewriting.
 * Generated from class `MR::CSharp::NameConflicts`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_NameConflicts extends ffi.CppObject
{
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::NameConflicts` named `name_conflicts`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_NameConflicts_Get_name_conflicts()`.
     */
    name_conflicts: number;
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::NameConflicts` named `a`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_NameConflicts_Get_a()`.
     */
    a: L.MR_CSharp_NameConflicts_A;
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_NameConflicts_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::NameConflicts::NameConflicts`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_NameConflicts_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_NameConflicts);
    /**
     * Constructs `MR::CSharp::NameConflicts` elementwise.
     * The reference to the parameter `name_conflicts` might be preserved in the constructed object.
     * The reference to the parameter `a` might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_NameConflicts_ConstructFrom()`.
     */
    constructor(name_conflicts: number, a: L.MR_CSharp_NameConflicts_A);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::NameConflicts::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_NameConflicts_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_NameConflicts): L.MR_CSharp_NameConflicts;
    /**
     * Generated from method `MR::CSharp::NameConflicts::name_Conflicts`.
     *
     * Calls `MR_CSharp_NameConflicts_name_Conflicts()`.
     */
    name_Conflicts(): void;
}

/**
 * Generated from class `MR::CSharp::NameConflicts::A`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_NameConflicts_A extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_NameConflicts_A_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::NameConflicts::A::A`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_NameConflicts_A_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_NameConflicts_A);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::NameConflicts::A::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_NameConflicts_A_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_NameConflicts_A): L.MR_CSharp_NameConflicts_A;
}

/**
 * Generated from class `MR::CSharp::NameConflictsExposed`.
 *
 * Has the same layout as the C++ struct, the fields are accessed in place in wasm memory. `new X(ffi.RAW, pointer, owned, owner)` wraps existing memory.
 */
export declare class MR_CSharp_NameConflictsExposed extends ffi.CppStruct
{
    /** The size of the struct in bytes. */
    static readonly SIZE: number;
    static readonly ALIGNMENT: number;
    name_conflicts_exposed: number;
    a: L.MR_CSharp_NameConflictsExposed_A;
    /** Zero-initialized. */
    constructor();
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::NameConflictsExposed::name_Conflicts_exposed`.
     *
     * Calls `MR_CSharp_NameConflictsExposed_name_Conflicts_exposed()`.
     */
    name_Conflicts_exposed(): void;
}

/**
 * Generated from class `MR::CSharp::NameConflictsExposed::A`.
 *
 * Has the same layout as the C++ struct, the fields are accessed in place in wasm memory. `new X(ffi.RAW, pointer, owned, owner)` wraps existing memory.
 */
export declare class MR_CSharp_NameConflictsExposed_A extends ffi.CppStruct
{
    /** The size of the struct in bytes. */
    static readonly SIZE: number;
    static readonly ALIGNMENT: number;
    x: number;
    /** Zero-initialized. */
    constructor();
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
}

/**
 * The class is non-copyable, so operators with by-value parameters fail to inject.
 * Generated from class `MR::CSharp::NonCopyableClassByValueOps`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_NonCopyableClassByValueOps extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_NonCopyableClassByValueOps_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::NonCopyableClassByValueOps::NonCopyableClassByValueOps`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_NonCopyableClassByValueOps_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_NonCopyableClassByValueOps);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::NonCopyableClassByValueOps::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     * The reference to this object might be preserved in the return value.
     *
     * Calls `MR_CSharp_NonCopyableClassByValueOps_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_NonCopyableClassByValueOps): L.MR_CSharp_NonCopyableClassByValueOps;
}

/**
 * Generated from class `MR::CSharp::NonTrivial`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_NonTrivial extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_NonTrivial_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::NonTrivial::NonTrivial`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_NonTrivial_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_NonTrivial);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::NonTrivial::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_NonTrivial_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_NonTrivial): L.MR_CSharp_NonTrivial;
}

/**
 * Check how non-trivial class types are passed by value into operators.
 * Generated from class `MR::CSharp::NonTrivialClassOps`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_NonTrivialClassOps extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_NonTrivialClassOps_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::NonTrivialClassOps::NonTrivialClassOps`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_NonTrivialClassOps_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_NonTrivialClassOps);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::NonTrivialClassOps::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_NonTrivialClassOps_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_NonTrivialClassOps): L.MR_CSharp_NonTrivialClassOps;
    /**
     * Generated from method `MR::CSharp::NonTrivialClassOps::operator+`.
     *
     * Calls `MR_C_add_MR_CSharp_NonTrivialClassOps_int32_t()`.
     */
    opAdd(_1: number): number;
}

/**
 * Generated from class `MR::CSharp::NonTrivialDerived`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_NonTrivialDerived extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_NonTrivialDerived_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::NonTrivialDerived::NonTrivialDerived`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_NonTrivialDerived_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_NonTrivialDerived);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::NonTrivialDerived::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_NonTrivialDerived_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_NonTrivialDerived): L.MR_CSharp_NonTrivialDerived;
}

/**
 * Nested classes.
 * Generated from class `MR::CSharp::Outer`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_Outer extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_Outer_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::Outer::Outer`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_Outer_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_Outer);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::Outer::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_Outer_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_Outer): L.MR_CSharp_Outer;
    /**
     * Generated from method `MR::CSharp::Outer::foo`.
     *
     * Calls `MR_CSharp_Outer_foo()`.
     */
    foo(): void;
}

/**
 * Generated from class `MR::CSharp::Outer::Inner`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_Outer_Inner extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_Outer_Inner_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::Outer::Inner::Inner`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_Outer_Inner_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_Outer_Inner);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::Outer::Inner::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_Outer_Inner_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_Outer_Inner): L.MR_CSharp_Outer_Inner;
    /**
     * Generated from method `MR::CSharp::Outer::Inner::bar`.
     *
     * Calls `MR_CSharp_Outer_Inner_bar()`.
     */
    bar(): void;
}

/**
 * The happy path, the operator is const.
 * Generated from class `MR::CSharp::RelationalA`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_RelationalA extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_RelationalA_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::RelationalA::RelationalA`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_RelationalA_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_RelationalA);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::RelationalA::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_RelationalA_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_RelationalA): L.MR_CSharp_RelationalA;
    /**
     * Generated from method `MR::CSharp::RelationalA::operator<`.
     *
     * Calls `MR_C_less_MR_CSharp_RelationalA()`.
     */
    opLess(_1: L.MR_CSharp_RelationalA): boolean;
    /**
     * Generated from method `MR::CSharp::RelationalA::operator>`.
     *
     * Calls `MR_C_greater_MR_CSharp_RelationalA()`.
     */
    opGreater(_1: L.MR_CSharp_RelationalA): boolean;
    /**
     * Generated from method `MR::CSharp::RelationalA::operator<=`.
     *
     * Calls `MR_C_less_equal_MR_CSharp_RelationalA()`.
     */
    opLessEqual(_1: L.MR_CSharp_RelationalA): boolean;
    /**
     * Generated from method `MR::CSharp::RelationalA::operator>=`.
     *
     * Calls `MR_C_greater_equal_MR_CSharp_RelationalA()`.
     */
    opGreaterEqual(_1: L.MR_CSharp_RelationalA): boolean;
}

/**
 * The happy path, the operator is non-const.
 * Generated from class `MR::CSharp::RelationalB`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_RelationalB extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_RelationalB_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::RelationalB::RelationalB`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_RelationalB_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_RelationalB);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::RelationalB::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_RelationalB_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_RelationalB): L.MR_CSharp_RelationalB;
    /**
     * Generated from method `MR::CSharp::RelationalB::operator<`.
     *
     * Calls `MR_C_less_MR_CSharp_RelationalB()`.
     */
    opLess(_1: L.MR_CSharp_RelationalB): boolean;
    /**
     * Generated from method `MR::CSharp::RelationalB::operator>`.
     *
     * Calls `MR_C_greater_MR_CSharp_RelationalB()`.
     */
    opGreater(_1: L.MR_CSharp_RelationalB): boolean;
    /**
     * Generated from method `MR::CSharp::RelationalB::operator<=`.
     *
     * Calls `MR_C_less_equal_MR_CSharp_RelationalB()`.
     */
    opLessEqual(_1: L.MR_CSharp_RelationalB): boolean;
    /**
     * Generated from method `MR::CSharp::RelationalB::operator>=`.
     *
     * Calls `MR_C_greater_equal_MR_CSharp_RelationalB()`.
     */
    opGreaterEqual(_1: L.MR_CSharp_RelationalB): boolean;
}

/**
 * The operators have mixed constness, which causes them to be demoted to functions.
 * Generated from class `MR::CSharp::RelationalC`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_RelationalC extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_RelationalC_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::RelationalC::RelationalC`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_RelationalC_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_RelationalC);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::RelationalC::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_RelationalC_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_RelationalC): L.MR_CSharp_RelationalC;
    /**
     * Generated from method `MR::CSharp::RelationalC::operator<`.
     *
     * Calls `MR_C_less_MR_CSharp_RelationalC()`.
     */
    opLess(_1: L.MR_CSharp_RelationalC): boolean;
    /**
     * Generated from method `MR::CSharp::RelationalC::operator>`.
     *
     * Calls `MR_C_greater_MR_CSharp_RelationalC()`.
     */
    opGreater(_1: L.MR_CSharp_RelationalC): boolean;
    /**
     * bool operator<=(RelationalC &) const {return false;} // Skip one operator to observe the function missing.
     * Generated from method `MR::CSharp::RelationalC::operator>=`.
     *
     * Calls `MR_C_greater_equal_MR_CSharp_RelationalC()`.
     */
    opGreaterEqual(_1: L.MR_CSharp_RelationalC): boolean;
}

/**
 * The operators have operands of different types, causing them to be demoted to functions.
 * Generated from class `MR::CSharp::RelationalD`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_RelationalD extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_RelationalD_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::RelationalD::RelationalD`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_RelationalD_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_RelationalD);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::RelationalD::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_RelationalD_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_RelationalD): L.MR_CSharp_RelationalD;
    /**
     * Generated from method `MR::CSharp::RelationalD::operator<`.
     *
     * Calls `MR_C_less_MR_CSharp_RelationalD_MR_CSharp_RelationalC()`.
     */
    opLess(_1: L.MR_CSharp_RelationalC): boolean;
    /**
     * Generated from method `MR::CSharp::RelationalD::operator>`.
     *
     * Calls `MR_C_greater_MR_CSharp_RelationalD_MR_CSharp_RelationalC()`.
     */
    opGreater(_1: L.MR_CSharp_RelationalC): boolean;
    /**
     * Generated from method `MR::CSharp::RelationalD::operator<=`.
     *
     * Calls `MR_C_less_equal_MR_CSharp_RelationalD_MR_CSharp_RelationalC()`.
     */
    opLessEqual(_1: L.MR_CSharp_RelationalC): boolean;
    /**
     * Generated from method `MR::CSharp::RelationalD::operator>=`.
     *
     * Calls `MR_C_greater_equal_MR_CSharp_RelationalD_MR_CSharp_RelationalC()`.
     */
    opGreaterEqual(_1: L.MR_CSharp_RelationalC): boolean;
}

/**
 * The operators have a weird return type.
 * Generated from class `MR::CSharp::RelationalE`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_RelationalE extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_RelationalE_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::RelationalE::RelationalE`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_RelationalE_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_RelationalE);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::RelationalE::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_RelationalE_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_RelationalE): L.MR_CSharp_RelationalE;
    /**
     * Generated from method `MR::CSharp::RelationalE::operator<`.
     *
     * Calls `MR_C_less_MR_CSharp_RelationalE_MR_CSharp_RelationalC()`.
     */
    opLess(_1: L.MR_CSharp_RelationalC): number;
    /**
     * Generated from method `MR::CSharp::RelationalE::operator>`.
     *
     * Calls `MR_C_greater_MR_CSharp_RelationalE_MR_CSharp_RelationalC()`.
     */
    opGreater(_1: L.MR_CSharp_RelationalC): number;
    /**
     * Generated from method `MR::CSharp::RelationalE::operator<=`.
     *
     * Calls `MR_C_less_equal_MR_CSharp_RelationalE_MR_CSharp_RelationalC()`.
     */
    opLessEqual(_1: L.MR_CSharp_RelationalC): number;
    /**
     * Generated from method `MR::CSharp::RelationalE::operator>=`.
     *
     * Calls `MR_C_greater_equal_MR_CSharp_RelationalE_MR_CSharp_RelationalC()`.
     */
    opGreaterEqual(_1: L.MR_CSharp_RelationalC): number;
}

/**
 * The operators return void.
 * Generated from class `MR::CSharp::RelationalF`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_RelationalF extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_RelationalF_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::RelationalF::RelationalF`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_RelationalF_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_RelationalF);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::RelationalF::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_RelationalF_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_RelationalF): L.MR_CSharp_RelationalF;
    /**
     * Generated from method `MR::CSharp::RelationalF::operator<`.
     *
     * Calls `MR_C_less_MR_CSharp_RelationalF_MR_CSharp_RelationalC()`.
     */
    opLess(_1: L.MR_CSharp_RelationalC): void;
    /**
     * Generated from method `MR::CSharp::RelationalF::operator>`.
     *
     * Calls `MR_C_greater_MR_CSharp_RelationalF_MR_CSharp_RelationalC()`.
     */
    opGreater(_1: L.MR_CSharp_RelationalC): void;
    /**
     * Generated from method `MR::CSharp::RelationalF::operator<=`.
     *
     * Calls `MR_C_less_equal_MR_CSharp_RelationalF_MR_CSharp_RelationalC()`.
     */
    opLessEqual(_1: L.MR_CSharp_RelationalC): void;
    /**
     * Generated from method `MR::CSharp::RelationalF::operator>=`.
     *
     * Calls `MR_C_greater_equal_MR_CSharp_RelationalF_MR_CSharp_RelationalC()`.
     */
    opGreaterEqual(_1: L.MR_CSharp_RelationalC): void;
}

/**
 * Generated from class `MR::CSharp::SA`.
 * Derived classes:
 *   Direct: (non-virtual)
 *     `MR::CSharp::SC`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_SA extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_SA_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::SA::SA`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_SA_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_SA);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::SA::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_SA_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_SA): L.MR_CSharp_SA;
}

/**
 * Generated from class `MR::CSharp::SB`.
 * Derived classes:
 *   Direct: (non-virtual)
 *     `MR::CSharp::SC`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_SB extends ffi.CppObject
{
    /**
     * Make this non-trivial for a change.
     * Returns a pointer to a member variable of class `MR::CSharp::SB` named `s`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_SB_Get_s()`.
     */
    get s(): L.MR_C_std_string;
    set s(value: string);
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_SB_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs `MR::CSharp::SB` elementwise.
     * The reference to the parameter `s` might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_SB_ConstructFrom()`.
     */
    constructor(s: string);
    /**
     * Generated from constructor `MR::CSharp::SB::SB`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_SB_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_SB);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::SB::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_SB_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_SB): L.MR_CSharp_SB;
}

/**
 * Generated from class `MR::CSharp::SC`.
 * Base classes:
 *   Direct: (non-virtual)
 *     `MR::CSharp::SA`
 *     `MR::CSharp::SB`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_SC extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_SC_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::SC::SC`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_SC_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_SC);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::SC::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_SC_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_SC): L.MR_CSharp_SC;
    /** Upcasts to the base class `MR::CSharp::SA`. The result refers to this object.
     *
     * Calls `MR_CSharp_SC_MutableUpcastTo_MR_CSharp_SA()`. */
    upcastToSA(): L.MR_CSharp_SA;
    /** Static downcast from the base class `MR::CSharp::SA`. Undefined behavior if the object isn't actually a `SC`. The result refers to `object`.
     *
     * Calls `MR_CSharp_SC_MutableStaticDowncastFrom_MR_CSharp_SA()`. */
    static staticDowncastFromSA(object: L.MR_CSharp_SA): L.MR_CSharp_SC;
    /** Upcasts to the base class `MR::CSharp::SB`. The result refers to this object.
     *
     * Calls `MR_CSharp_SC_MutableUpcastTo_MR_CSharp_SB()`. */
    upcastToSB(): L.MR_CSharp_SB;
    /** Static downcast from the base class `MR::CSharp::SB`. Undefined behavior if the object isn't actually a `SC`. The result refers to `object`.
     *
     * Calls `MR_CSharp_SC_MutableStaticDowncastFrom_MR_CSharp_SB()`. */
    static staticDowncastFromSB(object: L.MR_CSharp_SB): L.MR_CSharp_SC;
}

/**
 * Generated from class `MR::CSharp::SD`.
 * Derived classes:
 *   Direct: (non-virtual)
 *     `MR::CSharp::SF`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_SD extends ffi.CppObject
{
    /**
     * Add the remaining stuff to silence deprection warnings caused by the destructor:
     *
     * Calls `MR_CSharp_SD_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::SD::SD`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_SD_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_SD);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::SD::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     * The reference to this object might be preserved in the return value.
     *
     * Calls `MR_CSharp_SD_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_SD): L.MR_CSharp_SD;
}

/**
 * Generated from class `MR::CSharp::SE`.
 * Derived classes:
 *   Direct: (non-virtual)
 *     `MR::CSharp::SF`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_SE extends ffi.CppObject
{
    /**
     * Make this non-trivial for a change.
     * Returns a pointer to a member variable of class `MR::CSharp::SE` named `s`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_SE_Get_s()`.
     */
    get s(): L.MR_C_std_string;
    set s(value: string);
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_SE_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs `MR::CSharp::SE` elementwise.
     * The reference to the parameter `s` might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_SE_ConstructFrom()`.
     */
    constructor(s: string);
    /**
     * Generated from constructor `MR::CSharp::SE::SE`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_SE_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_SE);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::SE::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_SE_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_SE): L.MR_CSharp_SE;
}

/**
 * Generated from class `MR::CSharp::SF`.
 * Base classes:
 *   Direct: (non-virtual)
 *     `MR::CSharp::SD`
 *     `MR::CSharp::SE`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_SF extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_SF_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::SF::SF`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_SF_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_SF);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::SF::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_SF_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_SF): L.MR_CSharp_SF;
    /** Upcasts to the base class `MR::CSharp::SD`. The result refers to this object.
     *
     * Calls `MR_CSharp_SF_MutableUpcastTo_MR_CSharp_SD()`. */
    upcastToSD(): L.MR_CSharp_SD;
    /** Static downcast from the base class `MR::CSharp::SD`. Undefined behavior if the object isn't actually a `SF`. The result refers to `object`.
     *
     * Calls `MR_CSharp_SF_MutableStaticDowncastFrom_MR_CSharp_SD()`. */
    static staticDowncastFromSD(object: L.MR_CSharp_SD): L.MR_CSharp_SF;
    /** Dynamic downcast from the base class `MR::CSharp::SD`. Returns null if the object isn't actually a `SF`. The result refers to `object`.
     *
     * Calls `MR_CSharp_SF_MutableDynamicDowncastFrom_MR_CSharp_SD()`. */
    static dynamicDowncastFromSD(object: L.MR_CSharp_SD): L.MR_CSharp_SF | null;
    /** Upcasts to the base class `MR::CSharp::SE`. The result refers to this object.
     *
     * Calls `MR_CSharp_SF_MutableUpcastTo_MR_CSharp_SE()`. */
    upcastToSE(): L.MR_CSharp_SE;
    /** Static downcast from the base class `MR::CSharp::SE`. Undefined behavior if the object isn't actually a `SF`. The result refers to `object`.
     *
     * Calls `MR_CSharp_SF_MutableStaticDowncastFrom_MR_CSharp_SE()`. */
    static staticDowncastFromSE(object: L.MR_CSharp_SE): L.MR_CSharp_SF;
}

/**
 * Make sure non-passable classes work fine as `std::shared_ptr` template arguments.
 * Generated from class `MR::CSharp::SG`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_SG extends ffi.CppObject
{
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
}

/**
 * The operator is injected correctly.
 * Generated from class `MR::CSharp::StaticOpsLhsA`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_StaticOpsLhsA extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_StaticOpsLhsA_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::StaticOpsLhsA::StaticOpsLhsA`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_StaticOpsLhsA_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_StaticOpsLhsA);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::StaticOpsLhsA::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_StaticOpsLhsA_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_StaticOpsLhsA): L.MR_CSharp_StaticOpsLhsA;
}

/**
 * The operator injects but becomes a function, because it returns void.
 * Generated from class `MR::CSharp::StaticOpsLhsB`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_StaticOpsLhsB extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_StaticOpsLhsB_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::StaticOpsLhsB::StaticOpsLhsB`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_StaticOpsLhsB_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_StaticOpsLhsB);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::StaticOpsLhsB::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_StaticOpsLhsB_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_StaticOpsLhsB): L.MR_CSharp_StaticOpsLhsB;
}

/**
 * The operator fails to inject because the class isn't copyable (and isn't trivially movable), and the operator takes it by value.
 * Generated from class `MR::CSharp::StaticOpsLhsC`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_StaticOpsLhsC extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_StaticOpsLhsC_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::StaticOpsLhsC::StaticOpsLhsC`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_StaticOpsLhsC_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_StaticOpsLhsC);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
}

/**
 * The class is non-copyable, but is trivially movable, so the by-value operator injects fine.
 * Generated from class `MR::CSharp::StaticOpsLhsD`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_StaticOpsLhsD extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_StaticOpsLhsD_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::StaticOpsLhsD::StaticOpsLhsD`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_StaticOpsLhsD_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_StaticOpsLhsD);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
}

/**
 * The class isn't copyable, but the operator takes it by reference, so it injects fine.
 * Generated from class `MR::CSharp::StaticOpsLhsE`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_StaticOpsLhsE extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_StaticOpsLhsE_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::StaticOpsLhsE::StaticOpsLhsE`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_StaticOpsLhsE_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_StaticOpsLhsE);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::StaticOpsLhsE::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     * The reference to this object might be preserved in the return value.
     *
     * Calls `MR_CSharp_StaticOpsLhsE_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_StaticOpsLhsE): L.MR_CSharp_StaticOpsLhsE;
}

/**
 * The class isn't copyable, but the operator takes it by const reference, so it injects fine.
 * Generated from class `MR::CSharp::StaticOpsLhsF`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_StaticOpsLhsF extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_StaticOpsLhsF_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::StaticOpsLhsF::StaticOpsLhsF`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_StaticOpsLhsF_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_StaticOpsLhsF);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::StaticOpsLhsF::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     * The reference to this object might be preserved in the return value.
     *
     * Calls `MR_CSharp_StaticOpsLhsF_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_StaticOpsLhsF): L.MR_CSharp_StaticOpsLhsF;
}

/**
 * The copy ctor uses a non-const reference, so an operator with a by-value parameter gets injected into the non-const half.
 * Generated from class `MR::CSharp::StaticOpsLhsG`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_StaticOpsLhsG extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_StaticOpsLhsG_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::StaticOpsLhsG::StaticOpsLhsG`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_StaticOpsLhsG_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_StaticOpsLhsG);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::StaticOpsLhsG::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_StaticOpsLhsG_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_StaticOpsLhsG): L.MR_CSharp_StaticOpsLhsG;
}

/**
 * The copy ctor uses a non-const reference, but it doesn't matter because the operator takes the parameter by const reference,
 *   so the operator gets injected into the const half.
 * Generated from class `MR::CSharp::StaticOpsLhsH`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_StaticOpsLhsH extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_StaticOpsLhsH_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::StaticOpsLhsH::StaticOpsLhsH`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_StaticOpsLhsH_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_StaticOpsLhsH);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::StaticOpsLhsH::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_StaticOpsLhsH_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_StaticOpsLhsH): L.MR_CSharp_StaticOpsLhsH;
}

/**
 * Generated from class `MR::CSharp::StaticOpsMixedLhs`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_StaticOpsMixedLhs extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_StaticOpsMixedLhs_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::StaticOpsMixedLhs::StaticOpsMixedLhs`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_StaticOpsMixedLhs_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_StaticOpsMixedLhs);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::StaticOpsMixedLhs::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_StaticOpsMixedLhs_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_StaticOpsMixedLhs): L.MR_CSharp_StaticOpsMixedLhs;
}

/**
 * Generated from class `MR::CSharp::StaticOpsMixedRhs`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_StaticOpsMixedRhs extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_StaticOpsMixedRhs_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::StaticOpsMixedRhs::StaticOpsMixedRhs`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_StaticOpsMixedRhs_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_StaticOpsMixedRhs);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::StaticOpsMixedRhs::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_StaticOpsMixedRhs_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_StaticOpsMixedRhs): L.MR_CSharp_StaticOpsMixedRhs;
}

/**
 * The operator is injected correctly.
 * Generated from class `MR::CSharp::StaticOpsRhsA`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_StaticOpsRhsA extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_StaticOpsRhsA_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::StaticOpsRhsA::StaticOpsRhsA`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_StaticOpsRhsA_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_StaticOpsRhsA);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::StaticOpsRhsA::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_StaticOpsRhsA_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_StaticOpsRhsA): L.MR_CSharp_StaticOpsRhsA;
}

/**
 * The operator injects but becomes a function, because it returns void.
 * Generated from class `MR::CSharp::StaticOpsRhsB`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_StaticOpsRhsB extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_StaticOpsRhsB_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::StaticOpsRhsB::StaticOpsRhsB`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_StaticOpsRhsB_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_StaticOpsRhsB);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::StaticOpsRhsB::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_StaticOpsRhsB_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_StaticOpsRhsB): L.MR_CSharp_StaticOpsRhsB;
}

/**
 * The operator fails to inject because the class isn't copyable (and isn't trivially movable), and the operator takes it by value.
 * Generated from class `MR::CSharp::StaticOpsRhsC`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_StaticOpsRhsC extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_StaticOpsRhsC_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::StaticOpsRhsC::StaticOpsRhsC`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_StaticOpsRhsC_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_StaticOpsRhsC);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
}

/**
 * The class is non-copyable, but is trivially movable, so the by-value operator injects fine.
 * Generated from class `MR::CSharp::StaticOpsRhsD`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_StaticOpsRhsD extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_StaticOpsRhsD_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::StaticOpsRhsD::StaticOpsRhsD`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_StaticOpsRhsD_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_StaticOpsRhsD);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
}

/**
 * The class isn't copyable, but the operator takes it by reference, so it injects fine.
 * Generated from class `MR::CSharp::StaticOpsRhsE`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_StaticOpsRhsE extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_StaticOpsRhsE_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::StaticOpsRhsE::StaticOpsRhsE`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_StaticOpsRhsE_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_StaticOpsRhsE);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::StaticOpsRhsE::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     * The reference to this object might be preserved in the return value.
     *
     * Calls `MR_CSharp_StaticOpsRhsE_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_StaticOpsRhsE): L.MR_CSharp_StaticOpsRhsE;
}

/**
 * The class isn't copyable, but the operator takes it by const reference, so it injects fine.
 * Generated from class `MR::CSharp::StaticOpsRhsF`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_StaticOpsRhsF extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_StaticOpsRhsF_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::StaticOpsRhsF::StaticOpsRhsF`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_StaticOpsRhsF_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_StaticOpsRhsF);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::StaticOpsRhsF::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     * The reference to this object might be preserved in the return value.
     *
     * Calls `MR_CSharp_StaticOpsRhsF_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_StaticOpsRhsF): L.MR_CSharp_StaticOpsRhsF;
}

/**
 * The copy ctor uses a non-const reference, so an operator with a by-value parameter gets injected into the non-const half.
 * Generated from class `MR::CSharp::StaticOpsRhsG`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_StaticOpsRhsG extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_StaticOpsRhsG_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::StaticOpsRhsG::StaticOpsRhsG`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_StaticOpsRhsG_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_StaticOpsRhsG);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::StaticOpsRhsG::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_StaticOpsRhsG_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_StaticOpsRhsG): L.MR_CSharp_StaticOpsRhsG;
}

/**
 * The copy ctor uses a non-const reference, but it doesn't matter because the operator takes the parameter by const reference,
 *   so the operator gets injected into the const half.
 * Generated from class `MR::CSharp::StaticOpsRhsH`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_StaticOpsRhsH extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_StaticOpsRhsH_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::StaticOpsRhsH::StaticOpsRhsH`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_StaticOpsRhsH_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_StaticOpsRhsH);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::StaticOpsRhsH::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_StaticOpsRhsH_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_StaticOpsRhsH): L.MR_CSharp_StaticOpsRhsH;
}

/**
 * Generated from class `MR::CSharp::StringConvFsPath`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_StringConvFsPath extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_StringConvFsPath_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::StringConvFsPath::StringConvFsPath`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_StringConvFsPath_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_StringConvFsPath);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from conversion operator `MR::CSharp::StringConvFsPath::operator std::filesystem::path`.
     *
     * Calls `MR_CSharp_StringConvFsPath_ConvertTo_std_filesystem_path()`.
     */
    convertTo_std_filesystem_path(): L.MR_C_std_filesystem_path;
    /**
     * Generated from method `MR::CSharp::StringConvFsPath::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_StringConvFsPath_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_StringConvFsPath): L.MR_CSharp_StringConvFsPath;
}

/**
 * Conversions to string-like types.
 * Those create the additional `operator string` to convert directly to a C# string, and `override string ToString()` to override the method of the implicit base `object`.
 * Generated from class `MR::CSharp::StringConvString`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_StringConvString extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_StringConvString_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::StringConvString::StringConvString`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_StringConvString_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_StringConvString);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from conversion operator `MR::CSharp::StringConvString::operator std::string`.
     *
     * Calls `MR_CSharp_StringConvString_ConvertTo_std_string()`.
     */
    convertTo_std_string(): string;
    /**
     * Generated from method `MR::CSharp::StringConvString::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_StringConvString_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_StringConvString): L.MR_CSharp_StringConvString;
}

/**
 * Generated from class `MR::CSharp::StringConvStringView`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_StringConvStringView extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_StringConvStringView_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::StringConvStringView::StringConvStringView`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_StringConvStringView_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_StringConvStringView);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Mark this `explicit` and `const` for a change.
     * Generated from conversion operator `MR::CSharp::StringConvStringView::operator std::string_view`.
     *
     * Calls `MR_CSharp_StringConvStringView_ConvertTo_std_string_view()`.
     */
    convertTo_std_string_view(): L.MR_C_std_string_view;
    /**
     * Generated from method `MR::CSharp::StringConvStringView::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_StringConvStringView_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_StringConvStringView): L.MR_CSharp_StringConvStringView;
}

/**
 * Generated from class `MR::CSharp::TestConstness`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_TestConstness extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_TestConstness_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::TestConstness::TestConstness`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_TestConstness_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_TestConstness);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::TestConstness::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_TestConstness_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_TestConstness): L.MR_CSharp_TestConstness;
    /**
     * Generated from method `MR::CSharp::TestConstness::foo`.
     *
     * Calls `MR_CSharp_TestConstness_foo_mut()`.
     */
    foo(): void;
    /**
     * Generated from method `MR::CSharp::TestConstness::foo`.
     *
     * Calls `MR_CSharp_TestConstness_foo()`.
     */
    foo_2(): void;
}

/**
 * Generated from class `MR::CSharp::TestFields`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_TestFields extends ffi.CppObject
{
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `static_i`.
     *
     * Calls `MR_CSharp_TestFields_Get_static_i()`.
     */
    static static_i: number;
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `static_const_i`.
     *
     * Calls `MR_CSharp_TestFields_Get_static_const_i()`.
     */
    static readonly static_const_i: number;
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `static_i_ref`.
     *
     * Calls `MR_CSharp_TestFields_Get_static_i_ref()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    static readonly static_i_ref: number;
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `static_const_i_ref`.
     *
     * Calls `MR_CSharp_TestFields_Get_static_const_i_ref()`.
     */
    static readonly static_const_i_ref: number;
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `static_s`.
     *
     * Calls `MR_CSharp_TestFields_Get_static_s()`.
     */
    static get static_s(): L.MR_C_std_string;
    static set static_s(value: string);
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `static_const_s`.
     *
     * Calls `MR_CSharp_TestFields_Get_static_const_s()`.
     */
    static readonly static_const_s: L.MR_C_std_string;
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `static_s_ref`.
     *
     * Calls `MR_CSharp_TestFields_Get_static_s_ref()`.
     */
    static readonly static_s_ref: L.MR_C_std_string;
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `static_const_s_ref`.
     *
     * Calls `MR_CSharp_TestFields_Get_static_const_s_ref()`.
     */
    static readonly static_const_s_ref: L.MR_C_std_string;
    /**
     * < Test same-line documentation comment.
     * Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `i`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_TestFields_Get_i()`.
     */
    i: number;
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `const_i`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_TestFields_Get_const_i()`.
     */
    readonly const_i: number;
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `i_ref`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_TestFields_Get_i_ref()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
     */
    readonly i_ref: number;
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `const_i_ref`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_TestFields_Get_const_i_ref()`.
     */
    readonly const_i_ref: number;
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `s`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_TestFields_Get_s()`.
     */
    get s(): L.MR_C_std_string;
    set s(value: string);
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `const_s`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_TestFields_Get_const_s()`.
     */
    readonly const_s: L.MR_C_std_string;
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `s_ref`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_TestFields_Get_s_ref()`.
     */
    readonly s_ref: L.MR_C_std_string;
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `const_s_ref`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_TestFields_Get_const_s_ref()`.
     */
    readonly const_s_ref: L.MR_C_std_string;
    /**
     * Generated from constructor `MR::CSharp::TestFields::TestFields`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_TestFields_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_TestFields);
    /**
     * Constructs `MR::CSharp::TestFields` elementwise.
     * The reference to the parameter `i` might be preserved in the constructed object.
     * The reference to the parameter `const_i` might be preserved in the constructed object.
     * The reference to the parameter `i_ref` might be preserved in the constructed object.
     * The reference to the parameter `const_i_ref` might be preserved in the constructed object.
     * The reference to the parameter `s` might be preserved in the constructed object.
     * The reference to the parameter `const_s` might be preserved in the constructed object.
     * The reference to the parameter `s_ref` might be preserved in the constructed object.
     * The reference to the parameter `const_s_ref` might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_TestFields_ConstructFrom()`.
     */
    constructor(i: number, const_i: number, i_ref: L.int32_t_output, const_i_ref: number, s: string, const_s: string, s_ref: L.MR_C_std_string, const_s_ref: string);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
}

/**
 * Generated from class `MR::CSharp::TestOpsA`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_TestOpsA extends ffi.CppObject
{
    /**
     * Generated from constructor `MR::CSharp::TestOpsA::TestOpsA`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_TestOpsA_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_TestOpsA);
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::TestOpsA::operator+`.
     *
     * Calls `MR_C_pos_MR_CSharp_TestOpsA()`.
     */
    opAdd(): number;
    /**
     * Generated from method `MR::CSharp::TestOpsA::operator+`.
     *
     * Calls `MR_C_add_MR_CSharp_TestOpsA()`.
     */
    opAdd(_1: L.MR_CSharp_TestOpsA): number;
    /** The overloads of `opAdd` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /**
     * Generated from method `MR::CSharp::TestOpsA::operator-`.
     *
     * Calls `MR_C_neg_MR_CSharp_TestOpsA()`.
     */
    opSub(): number;
    /**
     * Generated from method `MR::CSharp::TestOpsA::operator-`.
     *
     * Calls `MR_C_sub_MR_CSharp_TestOpsA()`.
     */
    opSub(_1: L.MR_CSharp_TestOpsA): number;
    /** The overloads of `opSub` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /**
     * Generated from method `MR::CSharp::TestOpsA::operator*`.
     * The reference to this object might be preserved in the return value.
     *
     * Calls `MR_C_deref_MR_CSharp_TestOpsA()`.
     */
    opMul(): number;
    /**
     * Generated from method `MR::CSharp::TestOpsA::operator*`.
     *
     * Calls `MR_C_mul_MR_CSharp_TestOpsA()`.
     */
    opMul(_1: L.MR_CSharp_TestOpsA): number;
    /** The overloads of `opMul` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /**
     * Generated from method `MR::CSharp::TestOpsA::operator&`.
     *
     * Calls `MR_C_addressof_MR_CSharp_TestOpsA()`.
     */
    opBitand(): number;
    /**
     * Generated from method `MR::CSharp::TestOpsA::operator&`.
     *
     * Calls `MR_C_bitand_MR_CSharp_TestOpsA()`.
     */
    opBitand(_1: L.MR_CSharp_TestOpsA): number;
    /** The overloads of `opBitand` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /**
     * Generated from method `MR::CSharp::TestOpsA::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_TestOpsA_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_TestOpsA): number;
    /**
     * Generated from method `MR::CSharp::TestOpsA::operator+`.
     *
     * Calls `MR_C_pos_MR_CSharp_TestOpsA()`.
     */
    opPos(): number;
    /**
     * Generated from method `MR::CSharp::TestOpsA::operator+`.
     *
     * Calls `MR_C_add_MR_CSharp_TestOpsA()`.
     */
    opAdd_2(_1: L.MR_CSharp_TestOpsA): number;
    /**
     * Generated from method `MR::CSharp::TestOpsA::operator-`.
     *
     * Calls `MR_C_neg_MR_CSharp_TestOpsA()`.
     */
    opNeg(): number;
    /**
     * Generated from method `MR::CSharp::TestOpsA::operator-`.
     *
     * Calls `MR_C_sub_MR_CSharp_TestOpsA()`.
     */
    opSub_2(_1: L.MR_CSharp_TestOpsA): number;
    /**
     * Generated from method `MR::CSharp::TestOpsA::operator*`.
     * The reference to this object might be preserved in the return value.
     *
     * Calls `MR_C_deref_MR_CSharp_TestOpsA()`.
     */
    opDeref(): number;
    /**
     * Generated from method `MR::CSharp::TestOpsA::operator*`.
     *
     * Calls `MR_C_mul_MR_CSharp_TestOpsA()`.
     */
    opMul_2(_1: L.MR_CSharp_TestOpsA): number;
    /**
     * Generated from method `MR::CSharp::TestOpsA::operator/`.
     *
     * Calls `MR_C_div_MR_CSharp_TestOpsA()`.
     */
    opDiv(_1: L.MR_CSharp_TestOpsA): number;
    /**
     * Generated from method `MR::CSharp::TestOpsA::operator%`.
     *
     * Calls `MR_C_mod_MR_CSharp_TestOpsA()`.
     */
    opMod(_1: L.MR_CSharp_TestOpsA): number;
    /**
     * Generated from method `MR::CSharp::TestOpsA::operator^`.
     *
     * Calls `MR_C_xor_MR_CSharp_TestOpsA()`.
     */
    opXor(_1: L.MR_CSharp_TestOpsA): number;
    /**
     * Generated from method `MR::CSharp::TestOpsA::operator&`.
     *
     * Calls `MR_C_addressof_MR_CSharp_TestOpsA()`.
     */
    opAddressof(): number;
    /**
     * Generated from method `MR::CSharp::TestOpsA::operator&`.
     *
     * Calls `MR_C_bitand_MR_CSharp_TestOpsA()`.
     */
    opBitand_2(_1: L.MR_CSharp_TestOpsA): number;
    /**
     * Generated from method `MR::CSharp::TestOpsA::operator|`.
     *
     * Calls `MR_C_bitor_MR_CSharp_TestOpsA()`.
     */
    opBitor(_1: L.MR_CSharp_TestOpsA): number;
    /**
     * Generated from method `MR::CSharp::TestOpsA::operator~`.
     *
     * Calls `MR_C_compl_MR_CSharp_TestOpsA()`.
     */
    opCompl(): number;
    /**
     * Generated from method `MR::CSharp::TestOpsA::operator!`.
     *
     * Calls `MR_C_not_MR_CSharp_TestOpsA()`.
     */
    opNot(): number;
    /**
     * Generated from method `MR::CSharp::TestOpsA::operator+=`.
     *
     * Calls `MR_CSharp_TestOpsA_add_assign()`.
     */
    add_assign(_1: L.MR_CSharp_TestOpsA): number;
    /**
     * Generated from method `MR::CSharp::TestOpsA::operator-=`.
     *
     * Calls `MR_CSharp_TestOpsA_sub_assign()`.
     */
    sub_assign(_1: L.MR_CSharp_TestOpsA): number;
    /**
     * Generated from method `MR::CSharp::TestOpsA::operator*=`.
     *
     * Calls `MR_CSharp_TestOpsA_mul_assign()`.
     */
    mul_assign(_1: L.MR_CSharp_TestOpsA): number;
    /**
     * Generated from method `MR::CSharp::TestOpsA::operator/=`.
     *
     * Calls `MR_CSharp_TestOpsA_div_assign()`.
     */
    div_assign(_1: L.MR_CSharp_TestOpsA): number;
    /**
     * Generated from method `MR::CSharp::TestOpsA::operator%=`.
     *
     * Calls `MR_CSharp_TestOpsA_mod_assign()`.
     */
    mod_assign(_1: L.MR_CSharp_TestOpsA): number;
    /**
     * Generated from method `MR::CSharp::TestOpsA::operator^=`.
     *
     * Calls `MR_CSharp_TestOpsA_xor_assign()`.
     */
    xor_assign(_1: L.MR_CSharp_TestOpsA): number;
    /**
     * Generated from method `MR::CSharp::TestOpsA::operator&=`.
     *
     * Calls `MR_CSharp_TestOpsA_bitand_assign()`.
     */
    bitand_assign(_1: L.MR_CSharp_TestOpsA): number;
    /**
     * Generated from method `MR::CSharp::TestOpsA::operator|=`.
     *
     * Calls `MR_CSharp_TestOpsA_bitor_assign()`.
     */
    bitor_assign(_1: L.MR_CSharp_TestOpsA): number;
    /**
     * Generated from method `MR::CSharp::TestOpsA::operator<<`.
     *
     * Calls `MR_C_lshift_MR_CSharp_TestOpsA()`.
     */
    opLshift(_1: L.MR_CSharp_TestOpsA): number;
    /**
     * Generated from method `MR::CSharp::TestOpsA::operator>>`.
     *
     * Calls `MR_C_rshift_MR_CSharp_TestOpsA()`.
     */
    opRshift(_1: L.MR_CSharp_TestOpsA): number;
    /**
     * Generated from method `MR::CSharp::TestOpsA::operator<<=`.
     *
     * Calls `MR_CSharp_TestOpsA_lshift_assign()`.
     */
    lshift_assign(_1: L.MR_CSharp_TestOpsA): number;
    /**
     * Generated from method `MR::CSharp::TestOpsA::operator>>=`.
     *
     * Calls `MR_CSharp_TestOpsA_rshift_assign()`.
     */
    rshift_assign(_1: L.MR_CSharp_TestOpsA): number;
    /**
     * Generated from method `MR::CSharp::TestOpsA::operator<=>`.
     *
     * Calls `MR_C_compare_three_way_MR_CSharp_TestOpsA()`.
     */
    opCompareThreeWay(_1: L.MR_CSharp_TestOpsA): number;
    /**
     * Generated from method `MR::CSharp::TestOpsA::operator&&`.
     *
     * Calls `MR_C_and_MR_CSharp_TestOpsA()`.
     */
    opAnd(_1: L.MR_CSharp_TestOpsA): number;
    /**
     * Generated from method `MR::CSharp::TestOpsA::operator||`.
     *
     * Calls `MR_C_or_MR_CSharp_TestOpsA()`.
     */
    opOr(_1: L.MR_CSharp_TestOpsA): number;
    /**
     * Generated from method `MR::CSharp::TestOpsA::operator,`.
     *
     * Calls `MR_C_comma_MR_CSharp_TestOpsA()`.
     */
    opComma(_1: L.MR_CSharp_TestOpsA): number;
    /**
     * Generated from method `MR::CSharp::TestOpsA::operator->*`.
     *
     * Calls `MR_CSharp_TestOpsA_arrow_star()`.
     */
    arrow_star(_1: L.MR_CSharp_TestOpsA): number;
    /**
     * Generated from method `MR::CSharp::TestOpsA::operator->`.
     *
     * Calls `MR_CSharp_TestOpsA_arrow()`.
     */
    arrow(): number;
    /**
     * Generated from method `MR::CSharp::TestOpsA::operator()`.
     *
     * Calls `MR_CSharp_TestOpsA_call()`.
     */
    call(_1: L.MR_CSharp_TestOpsA): number;
    /**
     * Generated from method `MR::CSharp::TestOpsA::operator[]`.
     *
     * Calls `MR_CSharp_TestOpsA_index()`.
     */
    index(_1: L.MR_CSharp_TestOpsA): number;
}

/**
 * Generated from class `MR::CSharp::TestOpsB`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_TestOpsB extends ffi.CppObject
{
    /**
     * Generated from constructor `MR::CSharp::TestOpsB::TestOpsB`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_TestOpsB_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_TestOpsB);
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::TestOpsB::operator+`.
     *
     * Calls `MR_C_pos_MR_CSharp_TestOpsB()`.
     */
    opAdd(): number;
    /**
     * Generated from method `MR::CSharp::TestOpsB::operator+`.
     *
     * Calls `MR_C_add_MR_CSharp_TestOpsB()`.
     */
    opAdd(_1: L.MR_CSharp_TestOpsB): number;
    /** The overloads of `opAdd` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /**
     * Generated from method `MR::CSharp::TestOpsB::operator-`.
     *
     * Calls `MR_C_neg_MR_CSharp_TestOpsB()`.
     */
    opSub(): number;
    /**
     * Generated from method `MR::CSharp::TestOpsB::operator-`.
     *
     * Calls `MR_C_sub_MR_CSharp_TestOpsB()`.
     */
    opSub(_1: L.MR_CSharp_TestOpsB): number;
    /** The overloads of `opSub` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /**
     * Generated from method `MR::CSharp::TestOpsB::operator*`.
     * The reference to this object might be preserved in the return value.
     *
     * Calls `MR_C_deref_MR_CSharp_TestOpsB()`.
     */
    opMul(): number;
    /**
     * Generated from method `MR::CSharp::TestOpsB::operator*`.
     *
     * Calls `MR_C_mul_MR_CSharp_TestOpsB()`.
     */
    opMul(_1: L.MR_CSharp_TestOpsB): number;
    /** The overloads of `opMul` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /**
     * Generated from method `MR::CSharp::TestOpsB::operator&`.
     *
     * Calls `MR_C_addressof_MR_CSharp_TestOpsB()`.
     */
    opBitand(): number;
    /**
     * Generated from method `MR::CSharp::TestOpsB::operator&`.
     *
     * Calls `MR_C_bitand_MR_CSharp_TestOpsB()`.
     */
    opBitand(_1: L.MR_CSharp_TestOpsB): number;
    /** The overloads of `opBitand` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /**
     * Generated from method `MR::CSharp::TestOpsB::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_TestOpsB_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_TestOpsB): number;
    /**
     * Generated from method `MR::CSharp::TestOpsB::operator+`.
     *
     * Calls `MR_C_pos_MR_CSharp_TestOpsB()`.
     */
    opPos(): number;
    /**
     * Generated from method `MR::CSharp::TestOpsB::operator+`.
     *
     * Calls `MR_C_add_MR_CSharp_TestOpsB()`.
     */
    opAdd_2(_1: L.MR_CSharp_TestOpsB): number;
    /**
     * Generated from method `MR::CSharp::TestOpsB::operator-`.
     *
     * Calls `MR_C_neg_MR_CSharp_TestOpsB()`.
     */
    opNeg(): number;
    /**
     * Generated from method `MR::CSharp::TestOpsB::operator-`.
     *
     * Calls `MR_C_sub_MR_CSharp_TestOpsB()`.
     */
    opSub_2(_1: L.MR_CSharp_TestOpsB): number;
    /**
     * Generated from method `MR::CSharp::TestOpsB::operator*`.
     * The reference to this object might be preserved in the return value.
     *
     * Calls `MR_C_deref_MR_CSharp_TestOpsB()`.
     */
    opDeref(): number;
    /**
     * Generated from method `MR::CSharp::TestOpsB::operator*`.
     *
     * Calls `MR_C_mul_MR_CSharp_TestOpsB()`.
     */
    opMul_2(_1: L.MR_CSharp_TestOpsB): number;
    /**
     * Generated from method `MR::CSharp::TestOpsB::operator/`.
     *
     * Calls `MR_C_div_MR_CSharp_TestOpsB()`.
     */
    opDiv(_1: L.MR_CSharp_TestOpsB): number;
    /**
     * Generated from method `MR::CSharp::TestOpsB::operator%`.
     *
     * Calls `MR_C_mod_MR_CSharp_TestOpsB()`.
     */
    opMod(_1: L.MR_CSharp_TestOpsB): number;
    /**
     * Generated from method `MR::CSharp::TestOpsB::operator^`.
     *
     * Calls `MR_C_xor_MR_CSharp_TestOpsB()`.
     */
    opXor(_1: L.MR_CSharp_TestOpsB): number;
    /**
     * Generated from method `MR::CSharp::TestOpsB::operator&`.
     *
     * Calls `MR_C_addressof_MR_CSharp_TestOpsB()`.
     */
    opAddressof(): number;
    /**
     * Generated from method `MR::CSharp::TestOpsB::operator&`.
     *
     * Calls `MR_C_bitand_MR_CSharp_TestOpsB()`.
     */
    opBitand_2(_1: L.MR_CSharp_TestOpsB): number;
    /**
     * Generated from method `MR::CSharp::TestOpsB::operator|`.
     *
     * Calls `MR_C_bitor_MR_CSharp_TestOpsB()`.
     */
    opBitor(_1: L.MR_CSharp_TestOpsB): number;
    /**
     * Generated from method `MR::CSharp::TestOpsB::operator~`.
     *
     * Calls `MR_C_compl_MR_CSharp_TestOpsB()`.
     */
    opCompl(): number;
    /**
     * Generated from method `MR::CSharp::TestOpsB::operator!`.
     *
     * Calls `MR_C_not_MR_CSharp_TestOpsB()`.
     */
    opNot(): number;
    /**
     * Generated from method `MR::CSharp::TestOpsB::operator+=`.
     *
     * Calls `MR_CSharp_TestOpsB_add_assign()`.
     */
    add_assign(_1: L.MR_CSharp_TestOpsB): number;
    /**
     * Generated from method `MR::CSharp::TestOpsB::operator-=`.
     *
     * Calls `MR_CSharp_TestOpsB_sub_assign()`.
     */
    sub_assign(_1: L.MR_CSharp_TestOpsB): number;
    /**
     * Generated from method `MR::CSharp::TestOpsB::operator*=`.
     *
     * Calls `MR_CSharp_TestOpsB_mul_assign()`.
     */
    mul_assign(_1: L.MR_CSharp_TestOpsB): number;
    /**
     * Generated from method `MR::CSharp::TestOpsB::operator/=`.
     *
     * Calls `MR_CSharp_TestOpsB_div_assign()`.
     */
    div_assign(_1: L.MR_CSharp_TestOpsB): number;
    /**
     * Generated from method `MR::CSharp::TestOpsB::operator%=`.
     *
     * Calls `MR_CSharp_TestOpsB_mod_assign()`.
     */
    mod_assign(_1: L.MR_CSharp_TestOpsB): number;
    /**
     * Generated from method `MR::CSharp::TestOpsB::operator^=`.
     *
     * Calls `MR_CSharp_TestOpsB_xor_assign()`.
     */
    xor_assign(_1: L.MR_CSharp_TestOpsB): number;
    /**
     * Generated from method `MR::CSharp::TestOpsB::operator&=`.
     *
     * Calls `MR_CSharp_TestOpsB_bitand_assign()`.
     */
    bitand_assign(_1: L.MR_CSharp_TestOpsB): number;
    /**
     * Generated from method `MR::CSharp::TestOpsB::operator|=`.
     *
     * Calls `MR_CSharp_TestOpsB_bitor_assign()`.
     */
    bitor_assign(_1: L.MR_CSharp_TestOpsB): number;
    /**
     * Generated from method `MR::CSharp::TestOpsB::operator<<`.
     *
     * Calls `MR_C_lshift_MR_CSharp_TestOpsB()`.
     */
    opLshift(_1: L.MR_CSharp_TestOpsB): number;
    /**
     * Generated from method `MR::CSharp::TestOpsB::operator>>`.
     *
     * Calls `MR_C_rshift_MR_CSharp_TestOpsB()`.
     */
    opRshift(_1: L.MR_CSharp_TestOpsB): number;
    /**
     * Generated from method `MR::CSharp::TestOpsB::operator<<=`.
     *
     * Calls `MR_CSharp_TestOpsB_lshift_assign()`.
     */
    lshift_assign(_1: L.MR_CSharp_TestOpsB): number;
    /**
     * Generated from method `MR::CSharp::TestOpsB::operator>>=`.
     *
     * Calls `MR_CSharp_TestOpsB_rshift_assign()`.
     */
    rshift_assign(_1: L.MR_CSharp_TestOpsB): number;
    /**
     * Generated from method `MR::CSharp::TestOpsB::operator<=>`.
     *
     * Calls `MR_C_compare_three_way_MR_CSharp_TestOpsB()`.
     */
    opCompareThreeWay(_1: L.MR_CSharp_TestOpsB): number;
    /**
     * Generated from method `MR::CSharp::TestOpsB::operator&&`.
     *
     * Calls `MR_C_and_MR_CSharp_TestOpsB()`.
     */
    opAnd(_1: L.MR_CSharp_TestOpsB): number;
    /**
     * Generated from method `MR::CSharp::TestOpsB::operator||`.
     *
     * Calls `MR_C_or_MR_CSharp_TestOpsB()`.
     */
    opOr(_1: L.MR_CSharp_TestOpsB): number;
    /**
     * Generated from method `MR::CSharp::TestOpsB::operator,`.
     *
     * Calls `MR_C_comma_MR_CSharp_TestOpsB()`.
     */
    opComma(_1: L.MR_CSharp_TestOpsB): number;
    /**
     * Generated from method `MR::CSharp::TestOpsB::operator->*`.
     *
     * Calls `MR_CSharp_TestOpsB_arrow_star()`.
     */
    arrow_star(_1: L.MR_CSharp_TestOpsB): number;
    /**
     * Generated from method `MR::CSharp::TestOpsB::operator->`.
     *
     * Calls `MR_CSharp_TestOpsB_arrow()`.
     */
    arrow(): number;
    /**
     * Generated from method `MR::CSharp::TestOpsB::operator()`.
     *
     * Calls `MR_CSharp_TestOpsB_call()`.
     */
    call(_1: L.MR_CSharp_TestOpsB): number;
    /**
     * Generated from method `MR::CSharp::TestOpsB::operator[]`.
     *
     * Calls `MR_CSharp_TestOpsB_index()`.
     */
    index(_1: L.MR_CSharp_TestOpsB): number;
}

/**
 * Generated from class `MR::CSharp::TestOpsC`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_TestOpsC extends ffi.CppObject
{
    /**
     * Generated from constructor `MR::CSharp::TestOpsC::TestOpsC`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_TestOpsC_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_TestOpsC);
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::TestOpsC::operator+`.
     *
     * Calls `MR_C_pos_MR_CSharp_TestOpsC()`.
     */
    opAdd(): void;
    /**
     * Generated from method `MR::CSharp::TestOpsC::operator+`.
     *
     * Calls `MR_C_add_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA()`.
     */
    opAdd(_1: L.MR_CSharp_TestOpsA): void;
    /** The overloads of `opAdd` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /**
     * Generated from method `MR::CSharp::TestOpsC::operator-`.
     *
     * Calls `MR_C_neg_MR_CSharp_TestOpsC()`.
     */
    opSub(): void;
    /**
     * Generated from method `MR::CSharp::TestOpsC::operator-`.
     *
     * Calls `MR_C_sub_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA()`.
     */
    opSub(_1: L.MR_CSharp_TestOpsA): void;
    /** The overloads of `opSub` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /**
     * Generated from method `MR::CSharp::TestOpsC::operator*`.
     *
     * Calls `MR_C_deref_MR_CSharp_TestOpsC()`.
     */
    opMul(): void;
    /**
     * Generated from method `MR::CSharp::TestOpsC::operator*`.
     *
     * Calls `MR_C_mul_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA()`.
     */
    opMul(_1: L.MR_CSharp_TestOpsA): void;
    /** The overloads of `opMul` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /**
     * Generated from method `MR::CSharp::TestOpsC::operator&`.
     *
     * Calls `MR_C_addressof_MR_CSharp_TestOpsC()`.
     */
    opBitand(): void;
    /**
     * Generated from method `MR::CSharp::TestOpsC::operator&`.
     *
     * Calls `MR_C_bitand_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA()`.
     */
    opBitand(_1: L.MR_CSharp_TestOpsA): void;
    /** The overloads of `opBitand` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /**
     * Generated from method `MR::CSharp::TestOpsC::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_TestOpsC_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_TestOpsC): L.MR_CSharp_TestOpsC;
    /**
     * Generated from method `MR::CSharp::TestOpsC::operator+`.
     *
     * Calls `MR_C_pos_MR_CSharp_TestOpsC()`.
     */
    opPos(): void;
    /**
     * Generated from method `MR::CSharp::TestOpsC::operator+`.
     *
     * Calls `MR_C_add_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA()`.
     */
    opAdd_MR_CSharp_TestOpsA(_1: L.MR_CSharp_TestOpsA): void;
    /**
     * Generated from method `MR::CSharp::TestOpsC::operator-`.
     *
     * Calls `MR_C_neg_MR_CSharp_TestOpsC()`.
     */
    opNeg(): void;
    /**
     * Generated from method `MR::CSharp::TestOpsC::operator-`.
     *
     * Calls `MR_C_sub_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA()`.
     */
    opSub_MR_CSharp_TestOpsA(_1: L.MR_CSharp_TestOpsA): void;
    /**
     * Generated from method `MR::CSharp::TestOpsC::operator*`.
     *
     * Calls `MR_C_deref_MR_CSharp_TestOpsC()`.
     */
    opDeref(): void;
    /**
     * Generated from method `MR::CSharp::TestOpsC::operator*`.
     *
     * Calls `MR_C_mul_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA()`.
     */
    opMul_MR_CSharp_TestOpsA(_1: L.MR_CSharp_TestOpsA): void;
    /**
     * Generated from method `MR::CSharp::TestOpsC::operator/`.
     *
     * Calls `MR_C_div_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA()`.
     */
    opDiv(_1: L.MR_CSharp_TestOpsA): void;
    /**
     * Generated from method `MR::CSharp::TestOpsC::operator%`.
     *
     * Calls `MR_C_mod_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA()`.
     */
    opMod(_1: L.MR_CSharp_TestOpsA): void;
    /**
     * Generated from method `MR::CSharp::TestOpsC::operator^`.
     *
     * Calls `MR_C_xor_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA()`.
     */
    opXor(_1: L.MR_CSharp_TestOpsA): void;
    /**
     * Generated from method `MR::CSharp::TestOpsC::operator&`.
     *
     * Calls `MR_C_addressof_MR_CSharp_TestOpsC()`.
     */
    opAddressof(): void;
    /**
     * Generated from method `MR::CSharp::TestOpsC::operator&`.
     *
     * Calls `MR_C_bitand_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA()`.
     */
    opBitand_MR_CSharp_TestOpsA(_1: L.MR_CSharp_TestOpsA): void;
    /**
     * Generated from method `MR::CSharp::TestOpsC::operator|`.
     *
     * Calls `MR_C_bitor_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA()`.
     */
    opBitor(_1: L.MR_CSharp_TestOpsA): void;
    /**
     * Generated from method `MR::CSharp::TestOpsC::operator~`.
     *
     * Calls `MR_C_compl_MR_CSharp_TestOpsC()`.
     */
    opCompl(): void;
    /**
     * Generated from method `MR::CSharp::TestOpsC::operator!`.
     *
     * Calls `MR_C_not_MR_CSharp_TestOpsC()`.
     */
    opNot(): void;
    /**
     * Generated from method `MR::CSharp::TestOpsC::operator=`.
     *
     * Calls `MR_CSharp_TestOpsC_assign()`.
     */
    assign(_1: L.MR_CSharp_TestOpsA): void;
    /**
     * Generated from method `MR::CSharp::TestOpsC::operator+=`.
     *
     * Calls `MR_CSharp_TestOpsC_add_assign()`.
     */
    add_assign(_1: L.MR_CSharp_TestOpsA): void;
    /**
     * Generated from method `MR::CSharp::TestOpsC::operator-=`.
     *
     * Calls `MR_CSharp_TestOpsC_sub_assign()`.
     */
    sub_assign(_1: L.MR_CSharp_TestOpsA): void;
    /**
     * Generated from method `MR::CSharp::TestOpsC::operator*=`.
     *
     * Calls `MR_CSharp_TestOpsC_mul_assign()`.
     */
    mul_assign(_1: L.MR_CSharp_TestOpsA): void;
    /**
     * Generated from method `MR::CSharp::TestOpsC::operator/=`.
     *
     * Calls `MR_CSharp_TestOpsC_div_assign()`.
     */
    div_assign(_1: L.MR_CSharp_TestOpsA): void;
    /**
     * Generated from method `MR::CSharp::TestOpsC::operator%=`.
     *
     * Calls `MR_CSharp_TestOpsC_mod_assign()`.
     */
    mod_assign(_1: L.MR_CSharp_TestOpsA): void;
    /**
     * Generated from method `MR::CSharp::TestOpsC::operator^=`.
     *
     * Calls `MR_CSharp_TestOpsC_xor_assign()`.
     */
    xor_assign(_1: L.MR_CSharp_TestOpsA): void;
    /**
     * Generated from method `MR::CSharp::TestOpsC::operator&=`.
     *
     * Calls `MR_CSharp_TestOpsC_bitand_assign()`.
     */
    bitand_assign(_1: L.MR_CSharp_TestOpsA): void;
    /**
     * Generated from method `MR::CSharp::TestOpsC::operator|=`.
     *
     * Calls `MR_CSharp_TestOpsC_bitor_assign()`.
     */
    bitor_assign(_1: L.MR_CSharp_TestOpsA): void;
    /**
     * Generated from method `MR::CSharp::TestOpsC::operator<<`.
     *
     * Calls `MR_C_lshift_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA()`.
     */
    opLshift(_1: L.MR_CSharp_TestOpsA): void;
    /**
     * Generated from method `MR::CSharp::TestOpsC::operator>>`.
     *
     * Calls `MR_C_rshift_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA()`.
     */
    opRshift(_1: L.MR_CSharp_TestOpsA): void;
    /**
     * Generated from method `MR::CSharp::TestOpsC::operator<<=`.
     *
     * Calls `MR_CSharp_TestOpsC_lshift_assign()`.
     */
    lshift_assign(_1: L.MR_CSharp_TestOpsA): void;
    /**
     * Generated from method `MR::CSharp::TestOpsC::operator>>=`.
     *
     * Calls `MR_CSharp_TestOpsC_rshift_assign()`.
     */
    rshift_assign(_1: L.MR_CSharp_TestOpsA): void;
    /**
     * Generated from method `MR::CSharp::TestOpsC::operator<=>`.
     *
     * Calls `MR_C_compare_three_way_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA()`.
     */
    opCompareThreeWay(_1: L.MR_CSharp_TestOpsA): void;
    /**
     * Generated from method `MR::CSharp::TestOpsC::operator&&`.
     *
     * Calls `MR_C_and_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA()`.
     */
    opAnd(_1: L.MR_CSharp_TestOpsA): void;
    /**
     * Generated from method `MR::CSharp::TestOpsC::operator||`.
     *
     * Calls `MR_C_or_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA()`.
     */
    opOr(_1: L.MR_CSharp_TestOpsA): void;
    /**
     * Generated from method `MR::CSharp::TestOpsC::operator,`.
     *
     * Calls `MR_C_comma_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA()`.
     */
    opComma(_1: L.MR_CSharp_TestOpsA): void;
    /**
     * Generated from method `MR::CSharp::TestOpsC::operator->*`.
     *
     * Calls `MR_CSharp_TestOpsC_arrow_star()`.
     */
    arrow_star(_1: L.MR_CSharp_TestOpsA): void;
    /**
     * Generated from method `MR::CSharp::TestOpsC::operator->`.
     *
     * Calls `MR_CSharp_TestOpsC_arrow()`.
     */
    arrow(): void;
    /**
     * Generated from method `MR::CSharp::TestOpsC::operator()`.
     *
     * Calls `MR_CSharp_TestOpsC_call()`.
     */
    call(_1: L.MR_CSharp_TestOpsA): void;
    /**
     * Generated from method `MR::CSharp::TestOpsC::operator[]`.
     *
     * Calls `MR_CSharp_TestOpsC_index()`.
     */
    index(_1: L.MR_CSharp_TestOpsA): void;
}

/**
 * Test `std::function`.
 * Generated from class `MR::CSharp::TestStdFunction`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_TestStdFunction extends ffi.CppObject
{
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::TestStdFunction` named `f1`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_TestStdFunction_Get_f1()`.
     */
    get f1(): L.MR_C_std_function_int32_t_from_std_string;
    set f1(value: L.MR_C_std_function_int32_t_from_std_string | L.MR_C_std_function_int32_t_from_std_string.Fn);
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::TestStdFunction` named `f2`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_TestStdFunction_Get_f2()`.
     */
    get f2(): L.MR_C_std_function_std_string_from_int32_t_int32_t;
    set f2(value: L.MR_C_std_function_std_string_from_int32_t_int32_t | L.MR_C_std_function_std_string_from_int32_t_int32_t.Fn);
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::TestStdFunction` named `f3`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_TestStdFunction_Get_f3()`.
     */
    get f3(): L.MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1;
    set f3(value: L.MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1 | L.MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1.Fn);
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::TestStdFunction` named `f4`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_TestStdFunction_Get_f4()`.
     */
    get f4(): L.MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC;
    set f4(value: L.MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC | L.MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC.Fn);
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::TestStdFunction` named `f5`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_TestStdFunction_Get_f5()`.
     */
    get f5(): L.MR_C_std_function_int32_t_ref_from_int32_t_ref_int32_t_rvalue_ref;
    set f5(value: L.MR_C_std_function_int32_t_ref_from_int32_t_ref_int32_t_rvalue_ref | L.MR_C_std_function_int32_t_ref_from_int32_t_ref_int32_t_rvalue_ref.Fn);
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::TestStdFunction` named `f6`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_TestStdFunction_Get_f6()`.
     */
    get f6(): L.MR_C_std_function_int32_t_rvalue_ref;
    set f6(value: L.MR_C_std_function_int32_t_rvalue_ref | L.MR_C_std_function_int32_t_rvalue_ref.Fn);
    /**
     * Returns a pointer to a member variable of class `MR::CSharp::TestStdFunction` named `f7`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CSharp_TestStdFunction_Get_f7()`.
     */
    get f7(): L.MR_C_std_function_void;
    set f7(value: L.MR_C_std_function_void | L.MR_C_std_function_void.Fn);
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_TestStdFunction_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::TestStdFunction::TestStdFunction`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_TestStdFunction_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_TestStdFunction);
    /**
     * Constructs `MR::CSharp::TestStdFunction` elementwise.
     * The reference to the parameter `f1` might be preserved in the constructed object.
     * The reference to the parameter `f2` might be preserved in the constructed object.
     * The reference to the parameter `f3` might be preserved in the constructed object.
     * The reference to the parameter `f4` might be preserved in the constructed object.
     * The reference to the parameter `f5` might be preserved in the constructed object.
     * The reference to the parameter `f6` might be preserved in the constructed object.
     * The reference to the parameter `f7` might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_TestStdFunction_ConstructFrom()`.
     */
    constructor(f1: L.MR_C_std_function_int32_t_from_std_string | L.MR_C_std_function_int32_t_from_std_string.Fn, f2: L.MR_C_std_function_std_string_from_int32_t_int32_t | L.MR_C_std_function_std_string_from_int32_t_int32_t.Fn, f3: L.MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1 | L.MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1.Fn, f4: L.MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC | L.MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC.Fn, f5: L.MR_C_std_function_int32_t_ref_from_int32_t_ref_int32_t_rvalue_ref | L.MR_C_std_function_int32_t_ref_from_int32_t_ref_int32_t_rvalue_ref.Fn, f6: L.MR_C_std_function_int32_t_rvalue_ref | L.MR_C_std_function_int32_t_rvalue_ref.Fn, f7: L.MR_C_std_function_void | L.MR_C_std_function_void.Fn);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::TestStdFunction::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_TestStdFunction_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_TestStdFunction): L.MR_CSharp_TestStdFunction;
    /**
     * Generated from method `MR::CSharp::TestStdFunction::Call`.
     *
     * Calls `MR_CSharp_TestStdFunction_Call()`.
     */
    Call(): void;
}

/**
 * Generated from class `MR::CSharp::Trivial`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_Trivial extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_Trivial_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::Trivial::Trivial`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_Trivial_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_Trivial);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::Trivial::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_Trivial_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_Trivial): L.MR_CSharp_Trivial;
}

/**
 * Generated from class `MR::CSharp::TrivialDerived`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CSharp_TrivialDerived extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CSharp_TrivialDerived_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CSharp::TrivialDerived::TrivialDerived`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CSharp_TrivialDerived_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CSharp_TrivialDerived);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CSharp::TrivialDerived::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CSharp_TrivialDerived_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CSharp_TrivialDerived): L.MR_CSharp_TrivialDerived;
}

/**
 * Generated from function `MR::CSharp::foo`.
 *
 * Calls `MR_CSharp_foo()`.
 */
export declare function MR_CSharp_foo(): void;

/**
 * Generated from function `MR::CSharp::test_int`.
 *
 * Calls `MR_CSharp_test_int()`. `b` defaults to `42`.
 */
export declare function MR_CSharp_test_int(a: number, b?: number | null): number;

/**
 * Marking this `noexcept` for testing.
 * Generated from function `MR::CSharp::test_bool`.
 *
 * Calls `MR_CSharp_test_bool()`. `b` defaults to `true`.
 */
export declare function MR_CSharp_test_bool(a: boolean, b?: boolean | null): boolean;

/**
 * Generated from function `MR::CSharp::test_bool_ref`.
 *
 * Calls `MR_CSharp_test_bool_ref()`. `b` defaults to `MR::CSharp::default_bool`.
 */
export declare function MR_CSharp_test_bool_ref(a: L.bool_output, b?: L.bool_output | null): void;

/**
 * Generated from function `MR::CSharp::test_bool_ref2`.
 *
 * Calls `MR_CSharp_test_bool_ref2()`. `b` defaults to `MR::CSharp::default_bool`.
 */
export declare function MR_CSharp_test_bool_ref2(a: L.bool_output, b?: L.bool_output | null): number;

/**
 * Generated from function `MR::CSharp::get_bool_ref`.
 *
 * Calls `MR_CSharp_get_bool_ref()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
 */
export declare function MR_CSharp_get_bool_ref(): number;

/**
 * Generated from function `MR::CSharp::print_bool_ref`.
 *
 * Calls `MR_CSharp_print_bool_ref()`.
 */
export declare function MR_CSharp_print_bool_ref(): void;

/**
 * Generated from function `MR::CSharp::test_bool_cref`.
 *
 * Calls `MR_CSharp_test_bool_cref()`. `_2` defaults to `MR::CSharp::default_bool`.
 */
export declare function MR_CSharp_test_bool_cref(_1: boolean, _2?: boolean | null): boolean;

/**
 * Generated from function `MR::CSharp::test_int_ref`.
 *
 * Calls `MR_CSharp_test_int_ref()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `MR::CSharp::default_int`.
 */
export declare function MR_CSharp_test_int_ref(a: L.int32_t_output, b?: L.int32_t_output | null): number;

/**
 * Generated from function `MR::CSharp::test_int_cref`.
 *
 * Calls `MR_CSharp_test_int_cref()`. `b` defaults to `MR::CSharp::default_int`.
 */
export declare function MR_CSharp_test_int_cref(a: number, b?: number | null): number;

/**
 * Generated from function `MR::CSharp::test_int_rref`.
 *
 * Calls `MR_CSharp_test_int_rref()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `42`.
 */
export declare function MR_CSharp_test_int_rref(a: number, b?: number | null): number;

/**
 * Generated from function `MR::CSharp::test_int_crref`.
 *
 * Calls `MR_CSharp_test_int_crref()`. `b` defaults to `42`.
 */
export declare function MR_CSharp_test_int_crref(a: number, b?: number | null): number;

/**
 * Generated from function `MR::CSharp::test_int_ptr`.
 *
 * Calls `MR_CSharp_test_int_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_int`.
 */
export declare function MR_CSharp_test_int_ptr(a: L.int32_t_output | null | undefined, b: L.int32_t_output | null | undefined, c: number): number;

/**
 * Generated from function `MR::CSharp::test_int_cptr`.
 *
 * Calls `MR_CSharp_test_int_cptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_int`.
 */
export declare function MR_CSharp_test_int_cptr(a: number | null | undefined, b: number | null | undefined, c: number): number | null;

/**
 * Generated from function `MR::CSharp::test_ushort`.
 *
 * Calls `MR_CSharp_test_ushort()`. `b` defaults to `42`.
 */
export declare function MR_CSharp_test_ushort(a: number, b?: number | null): number;

/**
 * Generated from function `MR::CSharp::test_ushort_ref`.
 *
 * Calls `MR_CSharp_test_ushort_ref()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `MR::CSharp::default_ushort`.
 */
export declare function MR_CSharp_test_ushort_ref(a: L.uint16_t_output, b?: L.uint16_t_output | null): number;

/**
 * Generated from function `MR::CSharp::test_ushort_cref`.
 *
 * Calls `MR_CSharp_test_ushort_cref()`. `b` defaults to `MR::CSharp::default_ushort`.
 */
export declare function MR_CSharp_test_ushort_cref(a: number, b?: number | null): number;

/**
 * Generated from function `MR::CSharp::test_ushort_rref`.
 *
 * Calls `MR_CSharp_test_ushort_rref()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `(unsigned short&&)MR::CSharp::default_ushort`.
 */
export declare function MR_CSharp_test_ushort_rref(a: number, b?: number | null): number;

/**
 * Generated from function `MR::CSharp::test_ushort_crref`.
 *
 * Calls `MR_CSharp_test_ushort_crref()`. `b` defaults to `(unsigned short&&)MR::CSharp::default_ushort`.
 */
export declare function MR_CSharp_test_ushort_crref(a: number, b?: number | null): number;

/**
 * Generated from function `MR::CSharp::test_ushort_ptr`.
 *
 * Calls `MR_CSharp_test_ushort_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_ushort`.
 */
export declare function MR_CSharp_test_ushort_ptr(a: L.uint16_t_output | null | undefined, b: L.uint16_t_output | null | undefined, c: number): number;

/**
 * Generated from function `MR::CSharp::test_ushort_cptr`.
 *
 * Calls `MR_CSharp_test_ushort_cptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_ushort`.
 */
export declare function MR_CSharp_test_ushort_cptr(a: number | null | undefined, b: number | null | undefined, c: number): number | null;

/**
 * Generated from function `MR::CSharp::test_constness_int`.
 *
 * Calls `MR_CSharp_test_constness_int()`. `_2` defaults to `42`.
 */
export declare function MR_CSharp_test_constness_int(_1: number, _2?: number | null): number;

/**
 * Generated from function `MR::CSharp::test_constness_str`.
 *
 * Calls `MR_CSharp_test_constness_str()`. `_2` defaults to `"42"`.
 */
export declare function MR_CSharp_test_constness_str(_1: string, _2?: string | null): string;

/**
 * Test how we adjust keywords in parameter names.
 * \param params blah
 * @param params blah
 * `params` 'params' "params" params huhparams paramshuh \p params \c params @p params @c params \A params @A params
 * In this comment, only quoted and `\param ...` uses are adjusted, and not standalone occurences of the word (even if it's a separate word, let alone if it's just a part of a word).
 * `\c ...` and `\p ...` are handled, but unknown tags like `\A ...` are not.
 * <param name="params">This is also handled, naturally, because we handle quotes.</param>
 * Generated from function `MR::CSharp::test_keyword_in_param_name`.
 *
 * Calls `MR_CSharp_test_keyword_in_param_name()`.
 */
export declare function MR_CSharp_test_keyword_in_param_name(params: number): void;

/**
 * Generated from function `MR::CSharp::test_enum`.
 *
 * Calls `MR_CSharp_test_enum_MR_CSharp_E1()`. `b` defaults to `MR::CSharp::E1::b`.
 */
export declare function MR_CSharp_test_enum_MR_CSharp_E1(a: L.MR_CSharp_E1, b?: L.MR_CSharp_E1 | null): L.MR_CSharp_E1;

/**
 * Generated from function `MR::CSharp::test_enum_ref`.
 *
 * Calls `MR_CSharp_test_enum_ref_MR_CSharp_E1()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `MR::CSharp::default_e1`.
 */
export declare function MR_CSharp_test_enum_ref_MR_CSharp_E1(a: number, b: number): number;

/**
 * Generated from function `MR::CSharp::test_enum_cref`.
 *
 * Calls `MR_CSharp_test_enum_cref_MR_CSharp_E1()`. `b` defaults to `MR::CSharp::default_e1`.
 */
export declare function MR_CSharp_test_enum_cref_MR_CSharp_E1(a: L.MR_CSharp_E1, b?: L.MR_CSharp_E1 | null): L.MR_CSharp_E1;

/**
 * Generated from function `MR::CSharp::test_enum_rref`.
 *
 * Calls `MR_CSharp_test_enum_rref_MR_CSharp_E1()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `(MR::CSharp::E1&&)MR::CSharp::default_e1`.
 */
export declare function MR_CSharp_test_enum_rref_MR_CSharp_E1(a: number, b: number): number;

/**
 * Generated from function `MR::CSharp::test_enum_crref`.
 *
 * Calls `MR_CSharp_test_enum_crref_MR_CSharp_E1()`. `b` defaults to `(MR::CSharp::E1&&)MR::CSharp::default_e1`.
 */
export declare function MR_CSharp_test_enum_crref_MR_CSharp_E1(a: L.MR_CSharp_E1, b?: L.MR_CSharp_E1 | null): L.MR_CSharp_E1;

/**
 * Generated from function `MR::CSharp::test_enum_ptr`.
 *
 * Calls `MR_CSharp_test_enum_ptr_MR_CSharp_E1_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_e1`.
 */
export declare function MR_CSharp_test_enum_ptr_MR_CSharp_E1_ptr(a: number, b: number, c: number): number;

/**
 * Generated from function `MR::CSharp::test_enum_cptr`.
 *
 * Calls `MR_CSharp_test_enum_cptr_const_MR_CSharp_E1_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_e1`.
 */
export declare function MR_CSharp_test_enum_cptr_const_MR_CSharp_E1_ptr(a: L.MR_CSharp_E1 | null | undefined, b: L.MR_CSharp_E1 | null | undefined, c: number): L.MR_CSharp_E1 | null;

/**
 * Generated from function `MR::CSharp::test_enum`.
 *
 * Calls `MR_CSharp_test_enum_MR_CSharp_E2()`. `b` defaults to `MR::CSharp::E2::b`.
 */
export declare function MR_CSharp_test_enum_MR_CSharp_E2(a: L.MR_CSharp_E2, b?: L.MR_CSharp_E2 | null): L.MR_CSharp_E2;

/**
 * Generated from function `MR::CSharp::test_enum_ref`.
 *
 * Calls `MR_CSharp_test_enum_ref_MR_CSharp_E2()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `MR::CSharp::default_e2`.
 */
export declare function MR_CSharp_test_enum_ref_MR_CSharp_E2(a: number, b: number): number;

/**
 * Generated from function `MR::CSharp::test_enum_cref`.
 *
 * Calls `MR_CSharp_test_enum_cref_MR_CSharp_E2()`. `b` defaults to `MR::CSharp::default_e2`.
 */
export declare function MR_CSharp_test_enum_cref_MR_CSharp_E2(a: L.MR_CSharp_E2, b?: L.MR_CSharp_E2 | null): L.MR_CSharp_E2;

/**
 * Generated from function `MR::CSharp::test_enum_rref`.
 *
 * Calls `MR_CSharp_test_enum_rref_MR_CSharp_E2()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `(MR::CSharp::E2&&)MR::CSharp::default_e2`.
 */
export declare function MR_CSharp_test_enum_rref_MR_CSharp_E2(a: number, b: number): number;

/**
 * Generated from function `MR::CSharp::test_enum_crref`.
 *
 * Calls `MR_CSharp_test_enum_crref_MR_CSharp_E2()`. `b` defaults to `(MR::CSharp::E2&&)MR::CSharp::default_e2`.
 */
export declare function MR_CSharp_test_enum_crref_MR_CSharp_E2(a: L.MR_CSharp_E2, b?: L.MR_CSharp_E2 | null): L.MR_CSharp_E2;

/**
 * Generated from function `MR::CSharp::test_enum_ptr`.
 *
 * Calls `MR_CSharp_test_enum_ptr_MR_CSharp_E2_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_e2`.
 */
export declare function MR_CSharp_test_enum_ptr_MR_CSharp_E2_ptr(a: number, b: number, c: number): number;

/**
 * Generated from function `MR::CSharp::test_enum_cptr`.
 *
 * Calls `MR_CSharp_test_enum_cptr_const_MR_CSharp_E2_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_e2`.
 */
export declare function MR_CSharp_test_enum_cptr_const_MR_CSharp_E2_ptr(a: L.MR_CSharp_E2 | null | undefined, b: L.MR_CSharp_E2 | null | undefined, c: number): L.MR_CSharp_E2 | null;

/**
 * Generated from function `MR::CSharp::test_class_trivial`.
 *
 * Calls `MR_CSharp_test_class_trivial()`. `b` defaults to `{}`.
 */
export declare function MR_CSharp_test_class_trivial(a: L.MR_CSharp_Trivial, b?: L.MR_CSharp_Trivial | null): L.MR_CSharp_Trivial;

/**
 * Generated from function `MR::CSharp::test_class_trivial_ref`.
 *
 * Calls `MR_CSharp_test_class_trivial_ref()`. `b` defaults to `MR::CSharp::default_trivial`.
 */
export declare function MR_CSharp_test_class_trivial_ref(a: L.MR_CSharp_Trivial, b?: L.MR_CSharp_Trivial | null): L.MR_CSharp_Trivial;

/**
 * Generated from function `MR::CSharp::test_class_trivial_cref`.
 *
 * Calls `MR_CSharp_test_class_trivial_cref()`. `b` defaults to `MR::CSharp::default_trivial`.
 */
export declare function MR_CSharp_test_class_trivial_cref(a: L.MR_CSharp_Trivial, b?: L.MR_CSharp_Trivial | null): L.MR_CSharp_Trivial;

/**
 * Generated from function `MR::CSharp::test_class_trivial_rref`.
 *
 * Calls `MR_CSharp_test_class_trivial_rref()`. `b` defaults to `(MR::CSharp::Trivial&&)MR::CSharp::default_trivial`.
 */
export declare function MR_CSharp_test_class_trivial_rref(a: L.MR_CSharp_Trivial, b?: L.MR_CSharp_Trivial | null): L.MR_CSharp_Trivial;

/**
 * Generated from function `MR::CSharp::test_class_trivial_crref`.
 *
 * Calls `MR_CSharp_test_class_trivial_crref()`. `b` defaults to `(MR::CSharp::Trivial&&)MR::CSharp::default_trivial`.
 */
export declare function MR_CSharp_test_class_trivial_crref(a: L.MR_CSharp_Trivial, b?: L.MR_CSharp_Trivial | null): L.MR_CSharp_Trivial;

/**
 * Generated from function `MR::CSharp::test_class_trivial_ptr`.
 *
 * Calls `MR_CSharp_test_class_trivial_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_trivial`.
 */
export declare function MR_CSharp_test_class_trivial_ptr(a: L.MR_CSharp_Trivial | null | undefined, b: L.MR_CSharp_Trivial | null | undefined, c: number): L.MR_CSharp_Trivial | null;

/**
 * Generated from function `MR::CSharp::test_class_trivial_cptr`.
 *
 * Calls `MR_CSharp_test_class_trivial_cptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_trivial`.
 */
export declare function MR_CSharp_test_class_trivial_cptr(a: L.MR_CSharp_Trivial | null | undefined, b: L.MR_CSharp_Trivial | null | undefined, c: number): L.MR_CSharp_Trivial | null;

/**
 * Generated from function `MR::CSharp::test_class_nontrivial`.
 *
 * Calls `MR_CSharp_test_class_nontrivial()`. `b` defaults to `{}`.
 */
export declare function MR_CSharp_test_class_nontrivial(a: L.MR_CSharp_NonTrivial, b?: L.MR_CSharp_NonTrivial | null): L.MR_CSharp_NonTrivial;

/**
 * Generated from function `MR::CSharp::test_class_nontrivial_ref`.
 *
 * Calls `MR_CSharp_test_class_nontrivial_ref()`. `b` defaults to `MR::CSharp::default_nontrivial`.
 */
export declare function MR_CSharp_test_class_nontrivial_ref(a: L.MR_CSharp_NonTrivial, b?: L.MR_CSharp_NonTrivial | null): L.MR_CSharp_NonTrivial;

/**
 * Generated from function `MR::CSharp::test_class_nontrivial_cref`.
 *
 * Calls `MR_CSharp_test_class_nontrivial_cref()`. `b` defaults to `MR::CSharp::default_nontrivial`.
 */
export declare function MR_CSharp_test_class_nontrivial_cref(a: L.MR_CSharp_NonTrivial, b?: L.MR_CSharp_NonTrivial | null): L.MR_CSharp_NonTrivial;

/**
 * Generated from function `MR::CSharp::test_class_nontrivial_rref`.
 *
 * Calls `MR_CSharp_test_class_nontrivial_rref()`. `b` defaults to `(MR::CSharp::NonTrivial&&)MR::CSharp::default_nontrivial`.
 */
export declare function MR_CSharp_test_class_nontrivial_rref(a: L.MR_CSharp_NonTrivial, b?: L.MR_CSharp_NonTrivial | null): L.MR_CSharp_NonTrivial;

/**
 * Generated from function `MR::CSharp::test_class_nontrivial_crref`.
 *
 * Calls `MR_CSharp_test_class_nontrivial_crref()`. `b` defaults to `(MR::CSharp::NonTrivial&&)MR::CSharp::default_nontrivial`.
 */
export declare function MR_CSharp_test_class_nontrivial_crref(a: L.MR_CSharp_NonTrivial, b?: L.MR_CSharp_NonTrivial | null): L.MR_CSharp_NonTrivial;

/**
 * Generated from function `MR::CSharp::test_class_nontrivial_ptr`.
 *
 * Calls `MR_CSharp_test_class_nontrivial_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_nontrivial`.
 */
export declare function MR_CSharp_test_class_nontrivial_ptr(a: L.MR_CSharp_NonTrivial | null | undefined, b: L.MR_CSharp_NonTrivial | null | undefined, c: number): L.MR_CSharp_NonTrivial | null;

/**
 * Generated from function `MR::CSharp::test_class_nontrivial_cptr`.
 *
 * Calls `MR_CSharp_test_class_nontrivial_cptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_nontrivial`.
 */
export declare function MR_CSharp_test_class_nontrivial_cptr(a: L.MR_CSharp_NonTrivial | null | undefined, b: L.MR_CSharp_NonTrivial | null | undefined, c: number): L.MR_CSharp_NonTrivial | null;

/**
 * Generated from function `MR::CSharp::test_void_ptr`.
 *
 * Calls `MR_CSharp_test_void_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `(void*)42`.
 */
export declare function MR_CSharp_test_void_ptr(a: number, b: number, c: number): number;

/**
 * Generated from function `MR::CSharp::test_void_cptr`.
 *
 * Calls `MR_CSharp_test_void_cptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `(const void*)42`.
 */
export declare function MR_CSharp_test_void_cptr(a: number, b: number, c: number): number;

/**
 * Generated from function `MR::CSharp::mark_se_as_shared`.
 *
 * Calls `MR_CSharp_mark_se_as_shared()`.
 */
export declare function MR_CSharp_mark_se_as_shared(): L.MR_C_std_shared_ptr_MR_CSharp_SE;

/**
 * Poking a shared pointer type for a single class causes `std::shared_ptr` to be instantiated for the entire hierarchy (when `--bind-shared-ptr-virally`, which is required for `C#`).
 * Generated from function `MR::CSharp::test_shptr`.
 *
 * Calls `MR_CSharp_test_shptr()`. `b` defaults to `MR::CSharp::default_shptr`.
 */
export declare function MR_CSharp_test_shptr(a: L.MR_C_std_shared_ptr_MR_CSharp_SA, b?: L.MR_C_std_shared_ptr_MR_CSharp_SA | null): L.MR_C_std_shared_ptr_MR_CSharp_SA;

/**
 * Generated from function `MR::CSharp::test_shptr_ref`.
 *
 * Calls `MR_CSharp_test_shptr_ref()`. `b` defaults to `MR::CSharp::default_shptr`.
 */
export declare function MR_CSharp_test_shptr_ref(a: L.MR_C_std_shared_ptr_MR_CSharp_SA, b?: L.MR_C_std_shared_ptr_MR_CSharp_SA | null): L.MR_C_std_shared_ptr_MR_CSharp_SA;

/**
 * Generated from function `MR::CSharp::test_shptr_cref`.
 *
 * Calls `MR_CSharp_test_shptr_cref()`. `b` defaults to `MR::CSharp::default_shptr`.
 */
export declare function MR_CSharp_test_shptr_cref(a: L.MR_C_std_shared_ptr_MR_CSharp_SA, b?: L.MR_C_std_shared_ptr_MR_CSharp_SA | null): L.MR_C_std_shared_ptr_MR_CSharp_SA;

/**
 * Generated from function `MR::CSharp::test_shptr_rref`.
 *
 * Calls `MR_CSharp_test_shptr_rref()`. `b` defaults to `(std::shared_ptr<MR::CSharp::SA>&&)MR::CSharp::default_shptr`.
 */
export declare function MR_CSharp_test_shptr_rref(a: L.MR_C_std_shared_ptr_MR_CSharp_SA, b?: L.MR_C_std_shared_ptr_MR_CSharp_SA | null): L.MR_C_std_shared_ptr_MR_CSharp_SA;

/**
 * Generated from function `MR::CSharp::test_shptr_crref`.
 *
 * Calls `MR_CSharp_test_shptr_crref()`. `b` defaults to `(std::shared_ptr<MR::CSharp::SA>&&)MR::CSharp::default_shptr`.
 */
export declare function MR_CSharp_test_shptr_crref(a: L.MR_C_std_shared_ptr_MR_CSharp_SA, b?: L.MR_C_std_shared_ptr_MR_CSharp_SA | null): L.MR_C_std_shared_ptr_MR_CSharp_SA;

/**
 * Generated from function `MR::CSharp::test_shptr_ptr`.
 *
 * Calls `MR_CSharp_test_shptr_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `&MR::CSharp::default_shptr`.
 */
export declare function MR_CSharp_test_shptr_ptr(a: L.MR_C_std_shared_ptr_MR_CSharp_SA | null | undefined, b: number): L.MR_C_std_shared_ptr_MR_CSharp_SA | null;

/**
 * Generated from function `MR::CSharp::test_shptr_cptr`.
 *
 * Calls `MR_CSharp_test_shptr_cptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `&MR::CSharp::default_shptr`.
 */
export declare function MR_CSharp_test_shptr_cptr(a: L.MR_C_std_shared_ptr_MR_CSharp_SA | null | undefined, b: number): L.MR_C_std_shared_ptr_MR_CSharp_SA | null;

/**
 * Generated from function `MR::CSharp::test_shcptr`.
 *
 * Calls `MR_CSharp_test_shcptr()`. `b` defaults to `MR::CSharp::default_shcptr`.
 */
export declare function MR_CSharp_test_shcptr(a: L.MR_C_std_shared_ptr_const_MR_CSharp_SA, b?: L.MR_C_std_shared_ptr_const_MR_CSharp_SA | null): L.MR_C_std_shared_ptr_const_MR_CSharp_SA;

/**
 * Generated from function `MR::CSharp::test_shcptr_ref`.
 *
 * Calls `MR_CSharp_test_shcptr_ref()`. `b` defaults to `MR::CSharp::default_shcptr`.
 */
export declare function MR_CSharp_test_shcptr_ref(a: L.MR_C_std_shared_ptr_const_MR_CSharp_SA, b?: L.MR_C_std_shared_ptr_const_MR_CSharp_SA | null): L.MR_C_std_shared_ptr_const_MR_CSharp_SA;

/**
 * Generated from function `MR::CSharp::test_shcptr_cref`.
 *
 * Calls `MR_CSharp_test_shcptr_cref()`. `b` defaults to `MR::CSharp::default_shcptr`.
 */
export declare function MR_CSharp_test_shcptr_cref(a: L.MR_C_std_shared_ptr_const_MR_CSharp_SA, b?: L.MR_C_std_shared_ptr_const_MR_CSharp_SA | null): L.MR_C_std_shared_ptr_const_MR_CSharp_SA;

/**
 * Generated from function `MR::CSharp::test_shcptr_rref`.
 *
 * Calls `MR_CSharp_test_shcptr_rref()`. `b` defaults to `(std::shared_ptr<const MR::CSharp::SA>&&)MR::CSharp::default_shcptr`.
 */
export declare function MR_CSharp_test_shcptr_rref(a: L.MR_C_std_shared_ptr_const_MR_CSharp_SA, b?: L.MR_C_std_shared_ptr_const_MR_CSharp_SA | null): L.MR_C_std_shared_ptr_const_MR_CSharp_SA;

/**
 * Generated from function `MR::CSharp::test_shcptr_crref`.
 *
 * Calls `MR_CSharp_test_shcptr_crref()`. `b` defaults to `(std::shared_ptr<const MR::CSharp::SA>&&)MR::CSharp::default_shcptr`.
 */
export declare function MR_CSharp_test_shcptr_crref(a: L.MR_C_std_shared_ptr_const_MR_CSharp_SA, b?: L.MR_C_std_shared_ptr_const_MR_CSharp_SA | null): L.MR_C_std_shared_ptr_const_MR_CSharp_SA;

/**
 * Generated from function `MR::CSharp::test_shcptr_ptr`.
 *
 * Calls `MR_CSharp_test_shcptr_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `&MR::CSharp::default_shcptr`.
 */
export declare function MR_CSharp_test_shcptr_ptr(a: L.MR_C_std_shared_ptr_const_MR_CSharp_SA | null | undefined, b: number): L.MR_C_std_shared_ptr_const_MR_CSharp_SA | null;

/**
 * Generated from function `MR::CSharp::test_shcptr_cptr`.
 *
 * Calls `MR_CSharp_test_shcptr_cptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `&MR::CSharp::default_shcptr`.
 */
export declare function MR_CSharp_test_shcptr_cptr(a: L.MR_C_std_shared_ptr_const_MR_CSharp_SA | null | undefined, b: number): L.MR_C_std_shared_ptr_const_MR_CSharp_SA | null;

/**
 * Generated from function `MR::CSharp::mark_sg_as_shared`.
 *
 * Calls `MR_CSharp_mark_sg_as_shared()`.
 */
export declare function MR_CSharp_mark_sg_as_shared(): L.MR_C_std_shared_ptr_MR_CSharp_SG;

/**
 * Generated from function `MR::CSharp::test_string`.
 *
 * Calls `MR_CSharp_test_string()`. `b` defaults to `MR::CSharp::default_string`.
 */
export declare function MR_CSharp_test_string(a: string, b?: string | null): string;

/**
 * Generated from function `MR::CSharp::test_string_ref`.
 *
 * Calls `MR_CSharp_test_string_ref()`. `b` defaults to `MR::CSharp::default_string`.
 */
export declare function MR_CSharp_test_string_ref(a: L.MR_C_std_string, b?: L.MR_C_std_string | null): L.MR_C_std_string;

/**
 * Generated from function `MR::CSharp::test_string_cref`.
 *
 * Calls `MR_CSharp_test_string_cref()`. `b` defaults to `MR::CSharp::default_string`.
 */
export declare function MR_CSharp_test_string_cref(a: string, b?: string | null): L.MR_C_std_string;

/**
 * Generated from function `MR::CSharp::test_string_rref`.
 *
 * Calls `MR_CSharp_test_string_rref()`. `b` defaults to `(std::string&&)MR::CSharp::default_string`.
 */
export declare function MR_CSharp_test_string_rref(a: string, b?: string | null): L.MR_C_std_string;

/**
 * Generated from function `MR::CSharp::test_string_crref`.
 *
 * Calls `MR_CSharp_test_string_crref()`. `b` defaults to `(std::string&&)MR::CSharp::default_string`.
 */
export declare function MR_CSharp_test_string_crref(a: string, b?: string | null): L.MR_C_std_string;

/**
 * Generated from function `MR::CSharp::test_string_ptr`.
 *
 * Calls `MR_CSharp_test_string_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `&MR::CSharp::default_string`.
 */
export declare function MR_CSharp_test_string_ptr(a: L.MR_C_std_string | null | undefined, b: number): L.MR_C_std_string | null;

/**
 * Generated from function `MR::CSharp::test_string_cptr`.
 *
 * Calls `MR_CSharp_test_string_cptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `&MR::CSharp::default_string`.
 */
export declare function MR_CSharp_test_string_cptr(a: L.MR_C_std_string | null | undefined, b: number): L.MR_C_std_string | null;

/**
 * Generated from function `MR::CSharp::test_stringview`.
 *
 * Calls `MR_CSharp_test_stringview()`. `b` defaults to `MR::CSharp::default_stringview`.
 */
export declare function MR_CSharp_test_stringview(a: string, b?: string | null): L.MR_C_std_string_view;

/**
 * Generated from function `MR::CSharp::test_stringview_ref`.
 *
 * Calls `MR_CSharp_test_stringview_ref()`. `b` defaults to `MR::CSharp::default_stringview`.
 */
export declare function MR_CSharp_test_stringview_ref(a: L.MR_C_std_string_view, b?: L.MR_C_std_string_view | null): L.MR_C_std_string_view;

/**
 * Generated from function `MR::CSharp::test_stringview_cref`.
 *
 * Calls `MR_CSharp_test_stringview_cref()`. `b` defaults to `MR::CSharp::default_stringview`.
 */
export declare function MR_CSharp_test_stringview_cref(a: string, b?: string | null): L.MR_C_std_string_view;

/**
 * Generated from function `MR::CSharp::test_stringview_rref`.
 *
 * Calls `MR_CSharp_test_stringview_rref()`. `b` defaults to `(std::string_view&&)MR::CSharp::default_stringview`.
 */
export declare function MR_CSharp_test_stringview_rref(a: string, b?: string | null): L.MR_C_std_string_view;

/**
 * Generated from function `MR::CSharp::test_stringview_crref`.
 *
 * Calls `MR_CSharp_test_stringview_crref()`. `b` defaults to `(std::string_view&&)MR::CSharp::default_stringview`.
 */
export declare function MR_CSharp_test_stringview_crref(a: string, b?: string | null): L.MR_C_std_string_view;

/**
 * Generated from function `MR::CSharp::test_stringview_ptr`.
 *
 * Calls `MR_CSharp_test_stringview_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `&MR::CSharp::default_stringview`.
 */
export declare function MR_CSharp_test_stringview_ptr(a: L.MR_C_std_string_view | null | undefined, b: number): L.MR_C_std_string_view | null;

/**
 * Generated from function `MR::CSharp::test_stringview_cptr`.
 *
 * Calls `MR_CSharp_test_stringview_cptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `&MR::CSharp::default_stringview`.
 */
export declare function MR_CSharp_test_stringview_cptr(a: L.MR_C_std_string_view | null | undefined, b: number): L.MR_C_std_string_view | null;

/**
 * Generated from function `MR::CSharp::test_fspath`.
 *
 * Calls `MR_CSharp_test_fspath()`. `b` defaults to `MR::CSharp::default_fspath`.
 */
export declare function MR_CSharp_test_fspath(a: string, b?: string | null): L.MR_C_std_filesystem_path;

/**
 * Generated from function `MR::CSharp::test_fspath_ref`.
 *
 * Calls `MR_CSharp_test_fspath_ref()`. `b` defaults to `MR::CSharp::default_fspath`.
 */
export declare function MR_CSharp_test_fspath_ref(a: L.MR_C_std_filesystem_path, b?: L.MR_C_std_filesystem_path | null): L.MR_C_std_filesystem_path;

/**
 * Generated from function `MR::CSharp::test_fspath_cref`.
 *
 * Calls `MR_CSharp_test_fspath_cref()`. `b` defaults to `MR::CSharp::default_fspath`.
 */
export declare function MR_CSharp_test_fspath_cref(a: string, b?: string | null): L.MR_C_std_filesystem_path;

/**
 * Generated from function `MR::CSharp::test_fspath_rref`.
 *
 * Calls `MR_CSharp_test_fspath_rref()`. `b` defaults to `(std::filesystem::path&&)MR::CSharp::default_fspath`.
 */
export declare function MR_CSharp_test_fspath_rref(a: string, b?: string | null): L.MR_C_std_filesystem_path;

/**
 * Generated from function `MR::CSharp::test_fspath_crref`.
 *
 * Calls `MR_CSharp_test_fspath_crref()`. `b` defaults to `(std::filesystem::path&&)MR::CSharp::default_fspath`.
 */
export declare function MR_CSharp_test_fspath_crref(a: string, b?: string | null): L.MR_C_std_filesystem_path;

/**
 * Generated from function `MR::CSharp::test_fspath_ptr`.
 *
 * Calls `MR_CSharp_test_fspath_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `&MR::CSharp::default_fspath`.
 */
export declare function MR_CSharp_test_fspath_ptr(a: L.MR_C_std_filesystem_path | null | undefined, b: number): L.MR_C_std_filesystem_path | null;

/**
 * Generated from function `MR::CSharp::test_fspath_cptr`.
 *
 * Calls `MR_CSharp_test_fspath_cptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `&MR::CSharp::default_fspath`.
 */
export declare function MR_CSharp_test_fspath_cptr(a: L.MR_C_std_filesystem_path | null | undefined, b: number): L.MR_C_std_filesystem_path | null;

/**
 * Generated from function `MR::CSharp::operator++`.
 *
 * Calls `MR_C_incr_MR_CSharp_IncrDecrI()`.
 */
export declare function MR_C_incr_MR_CSharp_IncrDecrI(_1: L.MR_CSharp_IncrDecrI): number;

/**
 * Generated from function `MR::CSharp::operator++`.
 *
 * Calls `MR_C_post_incr_MR_CSharp_IncrDecrI()`.
 */
export declare function MR_C_post_incr_MR_CSharp_IncrDecrI(_1: L.MR_CSharp_IncrDecrI): number;

/**
 * Generated from function `MR::CSharp::operator--`.
 *
 * Calls `MR_C_decr_MR_CSharp_IncrDecrI()`.
 */
export declare function MR_C_decr_MR_CSharp_IncrDecrI(_1: L.MR_CSharp_IncrDecrI): number;

/**
 * Generated from function `MR::CSharp::operator--`.
 *
 * Calls `MR_C_post_decr_MR_CSharp_IncrDecrI()`.
 */
export declare function MR_C_post_decr_MR_CSharp_IncrDecrI(_1: L.MR_CSharp_IncrDecrI): number;

/**
 * Generated from function `MR::CSharp::operator+`.
 *
 * Calls `MR_C_add_MR_CSharp_StaticOpsLhsA_int32_t()`.
 */
export declare function MR_C_add_MR_CSharp_StaticOpsLhsA_int32_t(_1: L.MR_CSharp_StaticOpsLhsA, _2: number): number;

/**
 * Generated from function `MR::CSharp::operator+`.
 *
 * Calls `MR_C_add_MR_CSharp_StaticOpsLhsB_int32_t()`.
 */
export declare function MR_C_add_MR_CSharp_StaticOpsLhsB_int32_t(_1: L.MR_CSharp_StaticOpsLhsB, _2: number): void;

/**
 * Generated from function `MR::CSharp::operator+`.
 *
 * Calls `MR_C_add_MR_CSharp_StaticOpsLhsC_int32_t()`.
 */
export declare function MR_C_add_MR_CSharp_StaticOpsLhsC_int32_t(_1: L.MR_CSharp_StaticOpsLhsC, _2: number): number;

/**
 * Generated from function `MR::CSharp::operator+`.
 *
 * Calls `MR_C_add_MR_CSharp_StaticOpsLhsD_int32_t()`.
 */
export declare function MR_C_add_MR_CSharp_StaticOpsLhsD_int32_t(_1: L.MR_CSharp_StaticOpsLhsD, _2: number): number;

/**
 * Generated from function `MR::CSharp::operator+`.
 *
 * Calls `MR_C_add_MR_CSharp_StaticOpsLhsE_int32_t()`.
 */
export declare function MR_C_add_MR_CSharp_StaticOpsLhsE_int32_t(_1: L.MR_CSharp_StaticOpsLhsE, _2: number): number;

/**
 * Generated from function `MR::CSharp::operator+`.
 *
 * Calls `MR_C_add_MR_CSharp_StaticOpsLhsF_int32_t()`.
 */
export declare function MR_C_add_MR_CSharp_StaticOpsLhsF_int32_t(_1: L.MR_CSharp_StaticOpsLhsF, _2: number): number;

/**
 * Generated from function `MR::CSharp::operator+`.
 *
 * Calls `MR_C_add_MR_CSharp_StaticOpsLhsG_int32_t()`.
 */
export declare function MR_C_add_MR_CSharp_StaticOpsLhsG_int32_t(_1: L.MR_CSharp_StaticOpsLhsG, _2: number): number;

/**
 * Generated from function `MR::CSharp::operator+`.
 *
 * Calls `MR_C_add_MR_CSharp_StaticOpsLhsH_int32_t()`.
 */
export declare function MR_C_add_MR_CSharp_StaticOpsLhsH_int32_t(_1: L.MR_CSharp_StaticOpsLhsH, _2: number): number;

/**
 * Generated from function `MR::CSharp::operator+`.
 *
 * Calls `MR_C_add_int32_t_MR_CSharp_StaticOpsRhsA()`.
 */
export declare function MR_C_add_int32_t_MR_CSharp_StaticOpsRhsA(_1: number, _2: L.MR_CSharp_StaticOpsRhsA): number;

/**
 * Generated from function `MR::CSharp::operator+`.
 *
 * Calls `MR_C_add_int32_t_MR_CSharp_StaticOpsRhsB()`.
 */
export declare function MR_C_add_int32_t_MR_CSharp_StaticOpsRhsB(_1: number, _2: L.MR_CSharp_StaticOpsRhsB): void;

/**
 * Generated from function `MR::CSharp::operator+`.
 *
 * Calls `MR_C_add_int32_t_MR_CSharp_StaticOpsRhsC()`.
 */
export declare function MR_C_add_int32_t_MR_CSharp_StaticOpsRhsC(_1: number, _2: L.MR_CSharp_StaticOpsRhsC): number;

/**
 * Generated from function `MR::CSharp::operator+`.
 *
 * Calls `MR_C_add_int32_t_MR_CSharp_StaticOpsRhsD()`.
 */
export declare function MR_C_add_int32_t_MR_CSharp_StaticOpsRhsD(_1: number, _2: L.MR_CSharp_StaticOpsRhsD): number;

/**
 * Generated from function `MR::CSharp::operator+`.
 *
 * Calls `MR_C_add_int32_t_MR_CSharp_StaticOpsRhsE()`.
 */
export declare function MR_C_add_int32_t_MR_CSharp_StaticOpsRhsE(_1: number, _2: L.MR_CSharp_StaticOpsRhsE): number;

/**
 * Generated from function `MR::CSharp::operator+`.
 *
 * Calls `MR_C_add_int32_t_MR_CSharp_StaticOpsRhsF()`.
 */
export declare function MR_C_add_int32_t_MR_CSharp_StaticOpsRhsF(_1: number, _2: L.MR_CSharp_StaticOpsRhsF): number;

/**
 * Generated from function `MR::CSharp::operator+`.
 *
 * Calls `MR_C_add_int32_t_MR_CSharp_StaticOpsRhsG()`.
 */
export declare function MR_C_add_int32_t_MR_CSharp_StaticOpsRhsG(_1: number, _2: L.MR_CSharp_StaticOpsRhsG): number;

/**
 * Generated from function `MR::CSharp::operator+`.
 *
 * Calls `MR_C_add_int32_t_MR_CSharp_StaticOpsRhsH()`.
 */
export declare function MR_C_add_int32_t_MR_CSharp_StaticOpsRhsH(_1: number, _2: L.MR_CSharp_StaticOpsRhsH): number;

/**
 * Fails to inject, becomes a free function.
 * Generated from function `MR::CSharp::operator+`.
 *
 * Calls `MR_C_add_MR_CSharp_StaticOpsEnum_int32_t()`.
 */
export declare function MR_C_add_MR_CSharp_StaticOpsEnum_int32_t(_1: L.MR_CSharp_StaticOpsEnum, _2: number): number;

/**
 * Gets injected into the lhs by default.
 * Generated from function `MR::CSharp::operator+`.
 *
 * Calls `MR_C_add_MR_CSharp_StaticOpsMixedLhs_MR_CSharp_StaticOpsMixedRhs()`.
 */
export declare function MR_C_add_MR_CSharp_StaticOpsMixedLhs_MR_CSharp_StaticOpsMixedRhs(_1: L.MR_CSharp_StaticOpsMixedLhs, _2: L.MR_CSharp_StaticOpsMixedRhs): number;

/**
 * Generated from function `MR::CSharp::operator+`.
 *
 * Calls `MR_C_add_MR_CSharp_NonTrivialClassOps_float()`.
 */
export declare function MR_C_add_MR_CSharp_NonTrivialClassOps_float(_1: L.MR_CSharp_NonTrivialClassOps, _2: number): number;

/**
 * Generated from function `MR::CSharp::operator+`.
 *
 * Calls `MR_C_add_float_MR_CSharp_NonTrivialClassOps()`.
 */
export declare function MR_C_add_float_MR_CSharp_NonTrivialClassOps(_1: number, _2: L.MR_CSharp_NonTrivialClassOps): number;

/**
 * Generated from function `MR::CSharp::operator+`.
 *
 * Calls `MR_C_add_MR_CSharp_NonCopyableClassByValueOps_int32_t()`.
 */
export declare function MR_C_add_MR_CSharp_NonCopyableClassByValueOps_int32_t(_1: L.MR_CSharp_NonCopyableClassByValueOps, _2: number): number;

/**
 * Generated from function `MR::CSharp::operator+`.
 *
 * Calls `MR_C_add_int32_t_MR_CSharp_NonCopyableClassByValueOps()`.
 */
export declare function MR_C_add_int32_t_MR_CSharp_NonCopyableClassByValueOps(_1: number, _2: L.MR_CSharp_NonCopyableClassByValueOps): number;

/**
 * Generated from function `MR::CSharp::test_class_convtrivial`.
 *
 * Calls `MR_CSharp_test_class_convtrivial()`. `b` defaults to `{}`.
 */
export declare function MR_CSharp_test_class_convtrivial(a: L.MR_CSharp_ConvCtorTrivial, b?: L.MR_CSharp_ConvCtorTrivial | null): L.MR_CSharp_ConvCtorTrivial;

/**
 * Generated from function `MR::CSharp::test_class_convtrivial_ref`.
 *
 * Calls `MR_CSharp_test_class_convtrivial_ref()`. `b` defaults to `MR::CSharp::default_convtrivial`.
 */
export declare function MR_CSharp_test_class_convtrivial_ref(a: L.MR_CSharp_ConvCtorTrivial, b?: L.MR_CSharp_ConvCtorTrivial | null): L.MR_CSharp_ConvCtorTrivial;

/**
 * Generated from function `MR::CSharp::test_class_convtrivial_cref`.
 *
 * Calls `MR_CSharp_test_class_convtrivial_cref()`. `b` defaults to `MR::CSharp::default_convtrivial`.
 */
export declare function MR_CSharp_test_class_convtrivial_cref(a: L.MR_CSharp_ConvCtorTrivial, b?: L.MR_CSharp_ConvCtorTrivial | null): L.MR_CSharp_ConvCtorTrivial;

/**
 * Generated from function `MR::CSharp::test_class_convtrivial_ptr`.
 *
 * Calls `MR_CSharp_test_class_convtrivial_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_convtrivial`.
 */
export declare function MR_CSharp_test_class_convtrivial_ptr(a: L.MR_CSharp_ConvCtorTrivial | null | undefined, b: L.MR_CSharp_ConvCtorTrivial | null | undefined, c: number): L.MR_CSharp_ConvCtorTrivial | null;

/**
 * Generated from function `MR::CSharp::test_class_convtrivial_cptr`.
 *
 * Calls `MR_CSharp_test_class_convtrivial_cptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_convtrivial`.
 */
export declare function MR_CSharp_test_class_convtrivial_cptr(a: L.MR_CSharp_ConvCtorTrivial | null | undefined, b: L.MR_CSharp_ConvCtorTrivial | null | undefined, c: number): L.MR_CSharp_ConvCtorTrivial | null;

/**
 * Generated from function `MR::CSharp::test_class_convnontrivial`.
 *
 * Calls `MR_CSharp_test_class_convnontrivial()`. `b` defaults to `{}`.
 */
export declare function MR_CSharp_test_class_convnontrivial(a: L.MR_CSharp_ConvCtorNonTrivial, b?: L.MR_CSharp_ConvCtorNonTrivial | null): L.MR_CSharp_ConvCtorNonTrivial;

/**
 * Generated from function `MR::CSharp::test_class_convnontrivial_ref`.
 *
 * Calls `MR_CSharp_test_class_convnontrivial_ref()`. `b` defaults to `MR::CSharp::default_convnontrivial`.
 */
export declare function MR_CSharp_test_class_convnontrivial_ref(a: L.MR_CSharp_ConvCtorNonTrivial, b?: L.MR_CSharp_ConvCtorNonTrivial | null): L.MR_CSharp_ConvCtorNonTrivial;

/**
 * Generated from function `MR::CSharp::test_class_convnontrivial_cref`.
 *
 * Calls `MR_CSharp_test_class_convnontrivial_cref()`. `b` defaults to `MR::CSharp::default_convnontrivial`.
 */
export declare function MR_CSharp_test_class_convnontrivial_cref(a: L.MR_CSharp_ConvCtorNonTrivial, b?: L.MR_CSharp_ConvCtorNonTrivial | null): L.MR_CSharp_ConvCtorNonTrivial;

/**
 * Generated from function `MR::CSharp::test_class_convnontrivial_ptr`.
 *
 * Calls `MR_CSharp_test_class_convnontrivial_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_convnontrivial`.
 */
export declare function MR_CSharp_test_class_convnontrivial_ptr(a: L.MR_CSharp_ConvCtorNonTrivial | null | undefined, b: L.MR_CSharp_ConvCtorNonTrivial | null | undefined, c: number): L.MR_CSharp_ConvCtorNonTrivial | null;

/**
 * Generated from function `MR::CSharp::test_class_convnontrivial_cptr`.
 *
 * Calls `MR_CSharp_test_class_convnontrivial_cptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_convnontrivial`.
 */
export declare function MR_CSharp_test_class_convnontrivial_cptr(a: L.MR_CSharp_ConvCtorNonTrivial | null | undefined, b: L.MR_CSharp_ConvCtorNonTrivial | null | undefined, c: number): L.MR_CSharp_ConvCtorNonTrivial | null;

/**
 * Generated from function `MR::CSharp::operator-`.
 *
 * Calls `MR_C_sub_int32_t_MR_CSharp_ExposedLayout()`.
 */
export declare function MR_C_sub_int32_t_MR_CSharp_ExposedLayout(_1: number, _2: L.MR_CSharp_ExposedLayout): number;

/**
 * Generated from function `MR::CSharp::operator/`.
 *
 * Calls `MR_C_div_int32_t_MR_CSharp_ExposedLayout()`.
 */
export declare function MR_C_div_int32_t_MR_CSharp_ExposedLayout(_1: number, _2: L.MR_CSharp_ExposedLayout): number;

/**
 * Generated from function `MR::CSharp::operator%`.
 *
 * Calls `MR_C_mod_int32_t_MR_CSharp_ExposedLayout()`.
 */
export declare function MR_C_mod_int32_t_MR_CSharp_ExposedLayout(_1: number, _2: L.MR_CSharp_ExposedLayout): number;

/**
 * Generated from function `MR::CSharp::operator--`.
 *
 * Calls `MR_C_decr_MR_CSharp_ExposedLayout()`.
 */
export declare function MR_C_decr_MR_CSharp_ExposedLayout(_1: L.MR_CSharp_ExposedLayout): void;

/**
 * Generated from function `MR::CSharp::test_exposed`.
 *
 * Calls `MR_CSharp_test_exposed_MR_CSharp_ExposedLayout()`. `b` defaults to `MR::CSharp::default_exposed`.
 */
export declare function MR_CSharp_test_exposed_MR_CSharp_ExposedLayout(a: L.MR_CSharp_ExposedLayout, b?: L.MR_CSharp_ExposedLayout | null): L.MR_CSharp_ExposedLayout;

/**
 * Generated from function `MR::CSharp::test_exposed_ref`.
 *
 * Calls `MR_CSharp_test_exposed_ref_MR_CSharp_ExposedLayout()`. `b` defaults to `MR::CSharp::default_exposed`.
 */
export declare function MR_CSharp_test_exposed_ref_MR_CSharp_ExposedLayout(a: L.MR_CSharp_ExposedLayout, b?: L.MR_CSharp_ExposedLayout | null): L.MR_CSharp_ExposedLayout;

/**
 * Generated from function `MR::CSharp::test_exposed_cref`.
 *
 * Calls `MR_CSharp_test_exposed_cref_MR_CSharp_ExposedLayout()`. `b` defaults to `MR::CSharp::default_exposed`.
 */
export declare function MR_CSharp_test_exposed_cref_MR_CSharp_ExposedLayout(a: L.MR_CSharp_ExposedLayout, b?: L.MR_CSharp_ExposedLayout | null): L.MR_CSharp_ExposedLayout;

/**
 * Generated from function `MR::CSharp::test_exposed_rref`.
 *
 * Calls `MR_CSharp_test_exposed_rref()`. `b` defaults to `(MR::CSharp::ExposedLayout&&)MR::CSharp::default_exposed`.
 */
export declare function MR_CSharp_test_exposed_rref(a: L.MR_CSharp_ExposedLayout, b?: L.MR_CSharp_ExposedLayout | null): L.MR_CSharp_ExposedLayout;

/**
 * Generated from function `MR::CSharp::test_exposed_crref`.
 *
 * Calls `MR_CSharp_test_exposed_crref()`. `b` defaults to `(MR::CSharp::ExposedLayout&&)MR::CSharp::default_exposed`.
 */
export declare function MR_CSharp_test_exposed_crref(a: L.MR_CSharp_ExposedLayout, b?: L.MR_CSharp_ExposedLayout | null): L.MR_CSharp_ExposedLayout;

/**
 * Generated from function `MR::CSharp::test_exposed_ptr`.
 *
 * Calls `MR_CSharp_test_exposed_ptr_MR_CSharp_ExposedLayout_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_exposed`.
 */
export declare function MR_CSharp_test_exposed_ptr_MR_CSharp_ExposedLayout_ptr(a: L.MR_CSharp_ExposedLayout | null | undefined, b: L.MR_CSharp_ExposedLayout | null | undefined, c: number): L.MR_CSharp_ExposedLayout | null;

/**
 * Generated from function `MR::CSharp::test_exposed_cptr`.
 *
 * Calls `MR_CSharp_test_exposed_cptr_const_MR_CSharp_ExposedLayout_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_exposed`.
 */
export declare function MR_CSharp_test_exposed_cptr_const_MR_CSharp_ExposedLayout_ptr(a: L.MR_CSharp_ExposedLayout | null | undefined, b: L.MR_CSharp_ExposedLayout | null | undefined, c: number): L.MR_CSharp_ExposedLayout | null;

/**
 * This broke at one point, so testing it too.
 * Generated from function `MR::CSharp::test_exposed_vec`.
 *
 * Calls `MR_CSharp_test_exposed_vec()`.
 */
export declare function MR_CSharp_test_exposed_vec(): L.MR_C_std_vector_MR_CSharp_ExposedLayout;

/**
 * Test that capturing lifetime of an exposed struct is a no-op.
 * Generated from function `MR::CSharp::asave_ref_in_exposed_layout`.
 * The reference to the parameter `ref` might be preserved in the return value.
 *
 * Calls `MR_CSharp_asave_ref_in_exposed_layout()`.
 */
export declare function MR_CSharp_asave_ref_in_exposed_layout(ref: L.MR_CSharp_ExposedLayout): L.MR_CSharp_NonTrivial;

/**
 * Generated from function `MR::CSharp::operator-`.
 *
 * Calls `MR_C_sub_int32_t_MR_CSharp_ExposedLayoutSh()`.
 */
export declare function MR_C_sub_int32_t_MR_CSharp_ExposedLayoutSh(_1: number, _2: L.MR_CSharp_ExposedLayoutSh): number;

/**
 * Generated from function `MR::CSharp::operator/`.
 *
 * Calls `MR_C_div_int32_t_MR_CSharp_ExposedLayoutSh()`.
 */
export declare function MR_C_div_int32_t_MR_CSharp_ExposedLayoutSh(_1: number, _2: L.MR_CSharp_ExposedLayoutSh): number;

/**
 * Generated from function `MR::CSharp::operator%`.
 *
 * Calls `MR_C_mod_int32_t_MR_CSharp_ExposedLayoutSh()`.
 */
export declare function MR_C_mod_int32_t_MR_CSharp_ExposedLayoutSh(_1: number, _2: L.MR_CSharp_ExposedLayoutSh): number;

/**
 * Generated from function `MR::CSharp::operator--`.
 *
 * Calls `MR_C_decr_MR_CSharp_ExposedLayoutSh()`.
 */
export declare function MR_C_decr_MR_CSharp_ExposedLayoutSh(_1: L.MR_CSharp_ExposedLayoutSh): void;

/**
 * Generated from function `MR::CSharp::make_exposed_sh`.
 *
 * Calls `MR_CSharp_make_exposed_sh()`.
 */
export declare function MR_CSharp_make_exposed_sh(): L.MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh;

/**
 * Generated from function `MR::CSharp::test_exposed`.
 *
 * Calls `MR_CSharp_test_exposed_MR_CSharp_ExposedLayoutSh()`. `b` defaults to `MR::CSharp::default_exposed_sh`.
 */
export declare function MR_CSharp_test_exposed_MR_CSharp_ExposedLayoutSh(a: L.MR_CSharp_ExposedLayoutSh, b?: L.MR_CSharp_ExposedLayoutSh | null): L.MR_CSharp_ExposedLayoutSh;

/**
 * Generated from function `MR::CSharp::test_exposed_ref`.
 *
 * Calls `MR_CSharp_test_exposed_ref_MR_CSharp_ExposedLayoutSh()`. `b` defaults to `MR::CSharp::default_exposed_sh`.
 */
export declare function MR_CSharp_test_exposed_ref_MR_CSharp_ExposedLayoutSh(a: L.MR_CSharp_ExposedLayoutSh, b?: L.MR_CSharp_ExposedLayoutSh | null): L.MR_CSharp_ExposedLayoutSh;

/**
 * Generated from function `MR::CSharp::test_exposed_cref`.
 *
 * Calls `MR_CSharp_test_exposed_cref_MR_CSharp_ExposedLayoutSh()`. `b` defaults to `MR::CSharp::default_exposed_sh`.
 */
export declare function MR_CSharp_test_exposed_cref_MR_CSharp_ExposedLayoutSh(a: L.MR_CSharp_ExposedLayoutSh, b?: L.MR_CSharp_ExposedLayoutSh | null): L.MR_CSharp_ExposedLayoutSh;

/**
 * Generated from function `MR::CSharp::test_exposed_ptr`.
 *
 * Calls `MR_CSharp_test_exposed_ptr_MR_CSharp_ExposedLayoutSh_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_exposed_sh`.
 */
export declare function MR_CSharp_test_exposed_ptr_MR_CSharp_ExposedLayoutSh_ptr(a: L.MR_CSharp_ExposedLayoutSh | null | undefined, b: L.MR_CSharp_ExposedLayoutSh | null | undefined, c: number): L.MR_CSharp_ExposedLayoutSh | null;

/**
 * Generated from function `MR::CSharp::test_exposed_cptr`.
 *
 * Calls `MR_CSharp_test_exposed_cptr_const_MR_CSharp_ExposedLayoutSh_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_exposed_sh`.
 */
export declare function MR_CSharp_test_exposed_cptr_const_MR_CSharp_ExposedLayoutSh_ptr(a: L.MR_CSharp_ExposedLayoutSh | null | undefined, b: L.MR_CSharp_ExposedLayoutSh | null | undefined, c: number): L.MR_CSharp_ExposedLayoutSh | null;

/**
 * And try an equality comparison!
 * Generated from function `MR::CSharp::operator==`.
 *
 * Calls `MR_C_equal_MR_CSharp_ExposedLayoutB()`.
 */
export declare function MR_C_equal_MR_CSharp_ExposedLayoutB(_1: L.MR_CSharp_ExposedLayoutB, _2: L.MR_CSharp_ExposedLayoutB): boolean;

/**
 * Generated from function `MR::CSharp::test_optint`.
 *
 * Calls `MR_CSharp_test_optint()`. `b` defaults to `MR::CSharp::default_optint`. `c` defaults to `MR::CSharp::default_optint`.
 */
export declare function MR_CSharp_test_optint(a: number, b?: L.MR_C_std_optional_int32_t | null, c?: L.MR_C_std_optional_int32_t | null): L.MR_C_std_optional_int32_t;

/**
 * Generated from function `MR::CSharp::test_optint_ref`.
 *
 * Calls `MR_CSharp_test_optint_ref()`. `b` defaults to `MR::CSharp::default_optint`.
 */
export declare function MR_CSharp_test_optint_ref(a: L.MR_C_std_optional_int32_t, b?: L.MR_C_std_optional_int32_t | null): L.MR_C_std_optional_int32_t;

/**
 * Generated from function `MR::CSharp::test_optint_cref`.
 *
 * Calls `MR_CSharp_test_optint_cref()`. `b` defaults to `MR::CSharp::default_optint`.
 */
export declare function MR_CSharp_test_optint_cref(a: number, b?: L.MR_C_std_optional_int32_t | null): L.MR_C_std_optional_int32_t;

/**
 * Generated from function `MR::CSharp::test_optint_ptr`.
 *
 * Calls `MR_CSharp_test_optint_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_optint`.
 */
export declare function MR_CSharp_test_optint_ptr(a: L.MR_C_std_optional_int32_t | null | undefined, b: L.MR_C_std_optional_int32_t | null | undefined, c: number): L.MR_C_std_optional_int32_t | null;

/**
 * Generated from function `MR::CSharp::test_optint_cptr`.
 *
 * Calls `MR_CSharp_test_optint_cptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_optint`.
 */
export declare function MR_CSharp_test_optint_cptr(a: L.MR_C_std_optional_int32_t | null | undefined, b: L.MR_C_std_optional_int32_t | null | undefined, c: number): L.MR_C_std_optional_int32_t | null;

/**
 * Generated from function `MR::CSharp::test_optstr`.
 *
 * Calls `MR_CSharp_test_optstr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `MR::CSharp::default_optstr`. `c` defaults to `MR::CSharp::default_optstr`.
 */
export declare function MR_CSharp_test_optstr(a: [number, number], b?: L.MR_C_std_optional_std_string | null, c?: L.MR_C_std_optional_std_string | null): L.MR_C_std_optional_std_string;

/**
 * Generated from function `MR::CSharp::test_optstr_ref`.
 *
 * Calls `MR_CSharp_test_optstr_ref()`. `b` defaults to `MR::CSharp::default_optstr`.
 */
export declare function MR_CSharp_test_optstr_ref(a: L.MR_C_std_optional_std_string, b?: L.MR_C_std_optional_std_string | null): L.MR_C_std_optional_std_string;

/**
 * Generated from function `MR::CSharp::test_optstr_cref`.
 *
 * Calls `MR_CSharp_test_optstr_cref()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `MR::CSharp::default_optstr`.
 */
export declare function MR_CSharp_test_optstr_cref(a: [number, number], b?: L.MR_C_std_optional_std_string | null): L.MR_C_std_optional_std_string;

/**
 * Generated from function `MR::CSharp::test_optstr_ptr`.
 *
 * Calls `MR_CSharp_test_optstr_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_optstr`.
 */
export declare function MR_CSharp_test_optstr_ptr(a: L.MR_C_std_optional_std_string | null | undefined, b: L.MR_C_std_optional_std_string | null | undefined, c: number): L.MR_C_std_optional_std_string | null;

/**
 * Generated from function `MR::CSharp::test_optstr_cptr`.
 *
 * Calls `MR_CSharp_test_optstr_cptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_optstr`.
 */
export declare function MR_CSharp_test_optstr_cptr(a: L.MR_C_std_optional_std_string | null | undefined, b: L.MR_C_std_optional_std_string | null | undefined, c: number): L.MR_C_std_optional_std_string | null;

/**
 * Generated from function `MR::CSharp::test_opttriv`.
 *
 * Calls `MR_CSharp_test_opttriv()`. `b` defaults to `MR::CSharp::default_opttriv`. `c` defaults to `MR::CSharp::default_opttriv`.
 */
export declare function MR_CSharp_test_opttriv(a: L.MR_CSharp_Trivial, b?: L.MR_C_std_optional_MR_CSharp_Trivial | null, c?: L.MR_C_std_optional_MR_CSharp_Trivial | null): L.MR_C_std_optional_MR_CSharp_Trivial;

/**
 * Generated from function `MR::CSharp::test_opttriv_ref`.
 *
 * Calls `MR_CSharp_test_opttriv_ref()`. `b` defaults to `MR::CSharp::default_opttriv`.
 */
export declare function MR_CSharp_test_opttriv_ref(a: L.MR_C_std_optional_MR_CSharp_Trivial, b?: L.MR_C_std_optional_MR_CSharp_Trivial | null): L.MR_C_std_optional_MR_CSharp_Trivial;

/**
 * Generated from function `MR::CSharp::test_opttriv_cref`.
 *
 * Calls `MR_CSharp_test_opttriv_cref()`. `b` defaults to `MR::CSharp::default_opttriv`.
 */
export declare function MR_CSharp_test_opttriv_cref(a: L.MR_CSharp_Trivial, b?: L.MR_C_std_optional_MR_CSharp_Trivial | null): L.MR_C_std_optional_MR_CSharp_Trivial;

/**
 * Generated from function `MR::CSharp::test_opttriv_ptr`.
 *
 * Calls `MR_CSharp_test_opttriv_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_opttriv`.
 */
export declare function MR_CSharp_test_opttriv_ptr(a: L.MR_C_std_optional_MR_CSharp_Trivial | null | undefined, b: L.MR_C_std_optional_MR_CSharp_Trivial | null | undefined, c: number): L.MR_C_std_optional_MR_CSharp_Trivial | null;

/**
 * Generated from function `MR::CSharp::test_opttriv_cptr`.
 *
 * Calls `MR_CSharp_test_opttriv_cptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_opttriv`.
 */
export declare function MR_CSharp_test_opttriv_cptr(a: L.MR_C_std_optional_MR_CSharp_Trivial | null | undefined, b: L.MR_C_std_optional_MR_CSharp_Trivial | null | undefined, c: number): L.MR_C_std_optional_MR_CSharp_Trivial | null;

/**
 * Generated from function `MR::CSharp::test_optnontriv`.
 *
 * Calls `MR_CSharp_test_optnontriv()`. `b` defaults to `MR::CSharp::default_optnontriv`. `c` defaults to `MR::CSharp::default_optnontriv`.
 */
export declare function MR_CSharp_test_optnontriv(a?: L.MR_CSharp_NonTrivial | null, b?: L.MR_CSharp_NonTrivial | null, c?: L.MR_CSharp_NonTrivial | null): L.MR_C_std_optional_MR_CSharp_NonTrivial;

/**
 * Generated from function `MR::CSharp::test_optnontriv_ref`.
 *
 * Calls `MR_CSharp_test_optnontriv_ref()`. `b` defaults to `MR::CSharp::default_optnontriv`.
 */
export declare function MR_CSharp_test_optnontriv_ref(a: L.MR_C_std_optional_MR_CSharp_NonTrivial, b?: L.MR_C_std_optional_MR_CSharp_NonTrivial | null): L.MR_C_std_optional_MR_CSharp_NonTrivial;

/**
 * Generated from function `MR::CSharp::test_optnontriv_cref`.
 *
 * Calls `MR_CSharp_test_optnontriv_cref()`. `b` defaults to `MR::CSharp::default_optnontriv`.
 */
export declare function MR_CSharp_test_optnontriv_cref(a?: L.MR_CSharp_NonTrivial | null, b?: L.MR_CSharp_NonTrivial | null): L.MR_C_std_optional_MR_CSharp_NonTrivial;

/**
 * Generated from function `MR::CSharp::test_optnontriv_ptr`.
 *
 * Calls `MR_CSharp_test_optnontriv_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_optnontriv`.
 */
export declare function MR_CSharp_test_optnontriv_ptr(a: L.MR_C_std_optional_MR_CSharp_NonTrivial | null | undefined, b: L.MR_C_std_optional_MR_CSharp_NonTrivial | null | undefined, c: number): L.MR_C_std_optional_MR_CSharp_NonTrivial | null;

/**
 * Generated from function `MR::CSharp::test_optnontriv_cptr`.
 *
 * Calls `MR_CSharp_test_optnontriv_cptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_optnontriv`.
 */
export declare function MR_CSharp_test_optnontriv_cptr(a: L.MR_C_std_optional_MR_CSharp_NonTrivial | null | undefined, b: L.MR_C_std_optional_MR_CSharp_NonTrivial | null | undefined, c: number): L.MR_C_std_optional_MR_CSharp_NonTrivial | null;

/**
 * Generated from function `MR::CSharp::test_optshexp`.
 *
 * Calls `MR_CSharp_test_optshexp()`. `b` defaults to `MR::CSharp::default_optshexp`. `c` defaults to `MR::CSharp::default_optshexp`.
 */
export declare function MR_CSharp_test_optshexp(a: L.MR_CSharp_ExposedLayoutSh, b?: L.MR_C_std_optional_MR_CSharp_ExposedLayoutSh | null, c?: L.MR_C_std_optional_MR_CSharp_ExposedLayoutSh | null): L.MR_C_std_optional_MR_CSharp_ExposedLayoutSh;

/**
 * Generated from function `MR::CSharp::test_optshexp_ref`.
 *
 * Calls `MR_CSharp_test_optshexp_ref()`. `b` defaults to `MR::CSharp::default_optshexp`.
 */
export declare function MR_CSharp_test_optshexp_ref(a: L.MR_C_std_optional_MR_CSharp_ExposedLayoutSh, b?: L.MR_C_std_optional_MR_CSharp_ExposedLayoutSh | null): L.MR_C_std_optional_MR_CSharp_ExposedLayoutSh;

/**
 * Generated from function `MR::CSharp::test_optshexp_cref`.
 *
 * Calls `MR_CSharp_test_optshexp_cref()`. `b` defaults to `MR::CSharp::default_optshexp`.
 */
export declare function MR_CSharp_test_optshexp_cref(a: L.MR_CSharp_ExposedLayoutSh, b?: L.MR_C_std_optional_MR_CSharp_ExposedLayoutSh | null): L.MR_C_std_optional_MR_CSharp_ExposedLayoutSh;

/**
 * Generated from function `MR::CSharp::test_optshexp_ptr`.
 *
 * Calls `MR_CSharp_test_optshexp_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_optshexp`.
 */
export declare function MR_CSharp_test_optshexp_ptr(a: L.MR_C_std_optional_MR_CSharp_ExposedLayoutSh | null | undefined, b: L.MR_C_std_optional_MR_CSharp_ExposedLayoutSh | null | undefined, c: number): L.MR_C_std_optional_MR_CSharp_ExposedLayoutSh | null;

/**
 * Generated from function `MR::CSharp::test_optshexp_cptr`.
 *
 * Calls `MR_CSharp_test_optshexp_cptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_optshexp`.
 */
export declare function MR_CSharp_test_optshexp_cptr(a: L.MR_C_std_optional_MR_CSharp_ExposedLayoutSh | null | undefined, b: L.MR_C_std_optional_MR_CSharp_ExposedLayoutSh | null | undefined, c: number): L.MR_C_std_optional_MR_CSharp_ExposedLayoutSh | null;

/**
 * Generated from function `MR::CSharp::test_optshtriv`.
 *
 * Calls `MR_CSharp_test_optshtriv()`. `b` defaults to `MR::CSharp::default_optshtriv`. `c` defaults to `MR::CSharp::default_optshtriv`.
 */
export declare function MR_CSharp_test_optshtriv(a: L.MR_CSharp_SA, b?: L.MR_C_std_optional_MR_CSharp_SA | null, c?: L.MR_C_std_optional_MR_CSharp_SA | null): L.MR_C_std_optional_MR_CSharp_SA;

/**
 * Generated from function `MR::CSharp::test_optshtriv_ref`.
 *
 * Calls `MR_CSharp_test_optshtriv_ref()`. `b` defaults to `MR::CSharp::default_optshtriv`.
 */
export declare function MR_CSharp_test_optshtriv_ref(a: L.MR_C_std_optional_MR_CSharp_SA, b?: L.MR_C_std_optional_MR_CSharp_SA | null): L.MR_C_std_optional_MR_CSharp_SA;

/**
 * Generated from function `MR::CSharp::test_optshtriv_cref`.
 *
 * Calls `MR_CSharp_test_optshtriv_cref()`. `b` defaults to `MR::CSharp::default_optshtriv`.
 */
export declare function MR_CSharp_test_optshtriv_cref(a: L.MR_CSharp_SA, b?: L.MR_C_std_optional_MR_CSharp_SA | null): L.MR_C_std_optional_MR_CSharp_SA;

/**
 * Generated from function `MR::CSharp::test_optshtriv_ptr`.
 *
 * Calls `MR_CSharp_test_optshtriv_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_optshtriv`.
 */
export declare function MR_CSharp_test_optshtriv_ptr(a: L.MR_C_std_optional_MR_CSharp_SA | null | undefined, b: L.MR_C_std_optional_MR_CSharp_SA | null | undefined, c: number): L.MR_C_std_optional_MR_CSharp_SA | null;

/**
 * Generated from function `MR::CSharp::test_optshtriv_cptr`.
 *
 * Calls `MR_CSharp_test_optshtriv_cptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_optshtriv`.
 */
export declare function MR_CSharp_test_optshtriv_cptr(a: L.MR_C_std_optional_MR_CSharp_SA | null | undefined, b: L.MR_C_std_optional_MR_CSharp_SA | null | undefined, c: number): L.MR_C_std_optional_MR_CSharp_SA | null;

/**
 * Tag types:
 * Generated from function `MR::CSharp::test_tag`.
 *
 * Calls `MR_CSharp_test_tag()`.
 */
export declare function MR_CSharp_test_tag(): void;

/**
 * Generated from function `MR::CSharp::test_tag_cref`.
 *
 * Calls `MR_CSharp_test_tag_cref()`.
 */
export declare function MR_CSharp_test_tag_cref(): void;

/**
 * Generated from function `MR::CSharp::test_tag_ptr`.
 *
 * Calls `MR_CSharp_test_tag_ptr()`.
 */
export declare function MR_CSharp_test_tag_ptr(): boolean;

/**
 * Generated from function `MR::CSharp::test_tag_cptr`.
 *
 * Calls `MR_CSharp_test_tag_cptr()`.
 */
export declare function MR_CSharp_test_tag_cptr(): boolean;

/**
 * Generated from function `MR::CSharp::test_variant`.
 *
 * Calls `MR_CSharp_test_variant()`. `b` defaults to `MR::CSharp::default_variant`.
 */
export declare function MR_CSharp_test_variant(a: L.MR_C_std_variant_std_monostate_int32_t_float, b?: L.MR_C_std_variant_std_monostate_int32_t_float | null): L.MR_C_std_variant_std_monostate_int32_t_float;

/**
 * Generated from function `MR::CSharp::test_variant_ref`.
 *
 * Calls `MR_CSharp_test_variant_ref()`. `b` defaults to `MR::CSharp::default_variant`.
 */
export declare function MR_CSharp_test_variant_ref(a: L.MR_C_std_variant_std_monostate_int32_t_float, b?: L.MR_C_std_variant_std_monostate_int32_t_float | null): L.MR_C_std_variant_std_monostate_int32_t_float;

/**
 * Generated from function `MR::CSharp::test_variant_cref`.
 *
 * Calls `MR_CSharp_test_variant_cref()`. `b` defaults to `MR::CSharp::default_variant`.
 */
export declare function MR_CSharp_test_variant_cref(a: L.MR_C_std_variant_std_monostate_int32_t_float, b?: L.MR_C_std_variant_std_monostate_int32_t_float | null): L.MR_C_std_variant_std_monostate_int32_t_float;

/**
 * Generated from function `MR::CSharp::test_variant_ptr`.
 *
 * Calls `MR_CSharp_test_variant_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `&MR::CSharp::default_variant`.
 */
export declare function MR_CSharp_test_variant_ptr(a: L.MR_C_std_variant_std_monostate_int32_t_float | null | undefined, b: number): L.MR_C_std_variant_std_monostate_int32_t_float | null;

/**
 * Generated from function `MR::CSharp::test_variant_cptr`.
 *
 * Calls `MR_CSharp_test_variant_cptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `&MR::CSharp::default_variant`.
 */
export declare function MR_CSharp_test_variant_cptr(a: L.MR_C_std_variant_std_monostate_int32_t_float | null | undefined, b: number): L.MR_C_std_variant_std_monostate_int32_t_float | null;

/**
 * Test a variant that has duplicate element types.
 * Generated from function `MR::CSharp::test_variant_with_repeated_types`.
 *
 * Calls `MR_CSharp_test_variant_with_repeated_types()`.
 */
export declare function MR_CSharp_test_variant_with_repeated_types(): L.MR_C_std_variant_std_monostate_int32_t_float_float;

/**
 * Input and output streams:
 * Generated from function `MR::CSharp::test_iostreams_ref`.
 *
 * Calls `MR_CSharp_test_iostreams_ref()`.
 */
export declare function MR_CSharp_test_iostreams_ref(_1: L.MR_C_std_istream): L.MR_C_std_ostream;

/**
 * Generated from function `MR::CSharp::test_iostreams_ptr`.
 *
 * Calls `MR_CSharp_test_iostreams_ptr()`.
 */
export declare function MR_CSharp_test_iostreams_ptr(_1?: L.MR_C_std_istream | null): L.MR_C_std_ostream | null;

/**
 * Generated from function `MR::CSharp::test_iostreams_cref`.
 *
 * Calls `MR_CSharp_test_iostreams_cref()`.
 */
export declare function MR_CSharp_test_iostreams_cref(_1: L.MR_C_std_istream): L.MR_C_std_ostream;

/**
 * Generated from function `MR::CSharp::test_iostreams_cptr`.
 *
 * Calls `MR_CSharp_test_iostreams_cptr()`.
 */
export declare function MR_CSharp_test_iostreams_cptr(_1?: L.MR_C_std_istream | null): L.MR_C_std_ostream | null;

/**
 * Generated from function `MR::CSharp::test_uniqueptr`.
 *
 * Calls `MR_CSharp_test_uniqueptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `std::move(MR::CSharp::default_uniqueptr)`.
 */
export declare function MR_CSharp_test_uniqueptr(a: number, b: number): number;

/**
 * Generated from function `MR::CSharp::test_uniqueptr_ref`.
 *
 * Calls `MR_CSharp_test_uniqueptr_ref()`. `b` defaults to `MR::CSharp::default_uniqueptr`.
 */
export declare function MR_CSharp_test_uniqueptr_ref(a: L.MR_C_std_unique_ptr_int32_t, b: L.MR_C_std_unique_ptr_int32_t): L.MR_C_std_unique_ptr_int32_t;

/**
 * Generated from function `MR::CSharp::test_uniqueptr_cref`.
 *
 * Calls `MR_CSharp_test_uniqueptr_cref()`. `b` defaults to `MR::CSharp::default_uniqueptr`.
 */
export declare function MR_CSharp_test_uniqueptr_cref(a: L.MR_C_std_unique_ptr_int32_t, b?: L.MR_C_std_unique_ptr_int32_t | null): L.MR_C_std_unique_ptr_int32_t;

/**
 * Generated from function `MR::CSharp::test_uniqueptr_ptr`.
 *
 * Calls `MR_CSharp_test_uniqueptr_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_uniqueptr`.
 */
export declare function MR_CSharp_test_uniqueptr_ptr(a: L.MR_C_std_unique_ptr_int32_t, b: L.MR_C_std_unique_ptr_int32_t, c: number): L.MR_C_std_unique_ptr_int32_t;

/**
 * Generated from function `MR::CSharp::test_uniqueptr_cptr`.
 *
 * Calls `MR_CSharp_test_uniqueptr_cptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_uniqueptr`.
 */
export declare function MR_CSharp_test_uniqueptr_cptr(a: L.MR_C_std_unique_ptr_int32_t | null | undefined, b: L.MR_C_std_unique_ptr_int32_t | null | undefined, c: number): L.MR_C_std_unique_ptr_int32_t | null;

/**
 * Generated from function `MR::CSharp::test_plainarr_ref`.
 *
 * Calls `MR_CSharp_test_plainarr_ref()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `MR::CSharp::default_plainarr`.
 */
export declare function MR_CSharp_test_plainarr_ref(a: number, b: number): number;

/**
 * Generated from function `MR::CSharp::test_plainarr_cref`.
 *
 * Calls `MR_CSharp_test_plainarr_cref()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `MR::CSharp::default_plainarr`.
 */
export declare function MR_CSharp_test_plainarr_cref(a: number, b: number): number;

/**
 * Generated from function `MR::CSharp::test_plainarr_rref`.
 *
 * Calls `MR_CSharp_test_plainarr_rref()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `(MR::CSharp::PlainArray&&)MR::CSharp::default_plainarr`.
 */
export declare function MR_CSharp_test_plainarr_rref(a: number, b: number): number;

/**
 * Generated from function `MR::CSharp::test_plainarr_crref`.
 *
 * Calls `MR_CSharp_test_plainarr_crref()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `(MR::CSharp::PlainArray&&)MR::CSharp::default_plainarr`.
 */
export declare function MR_CSharp_test_plainarr_crref(a: number, b: number): number;

/**
 * Generated from function `MR::CSharp::test_plainarr_ptr`.
 *
 * Calls `MR_CSharp_test_plainarr_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_plainarr`.
 */
export declare function MR_CSharp_test_plainarr_ptr(a: number, b: number, c: number): number;

/**
 * Generated from function `MR::CSharp::test_plainarr_cptr`.
 *
 * Calls `MR_CSharp_test_plainarr_cptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_plainarr`.
 */
export declare function MR_CSharp_test_plainarr_cptr(a: number, b: number, c: number): number;

/**
 * Generated from function `MR::CSharp::test_plainarr2_ref`.
 *
 * Calls `MR_CSharp_test_plainarr2_ref()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `MR::CSharp::default_plainarr2`.
 */
export declare function MR_CSharp_test_plainarr2_ref(a: number, b: number): number;

/**
 * Generated from function `MR::CSharp::test_plainarr2_cref`.
 *
 * Calls `MR_CSharp_test_plainarr2_cref()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `MR::CSharp::default_plainarr2`.
 */
export declare function MR_CSharp_test_plainarr2_cref(a: number, b: number): number;

/**
 * Generated from function `MR::CSharp::test_plainarr2_rref`.
 *
 * Calls `MR_CSharp_test_plainarr2_rref()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `(MR::CSharp::PlainArray2&&)MR::CSharp::default_plainarr2`.
 */
export declare function MR_CSharp_test_plainarr2_rref(a: number, b: number): number;

/**
 * Generated from function `MR::CSharp::test_plainarr2_crref`.
 *
 * Calls `MR_CSharp_test_plainarr2_crref()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `(MR::CSharp::PlainArray2&&)MR::CSharp::default_plainarr2`.
 */
export declare function MR_CSharp_test_plainarr2_crref(a: number, b: number): number;

/**
 * Generated from function `MR::CSharp::test_plainarr2_ptr`.
 *
 * Calls `MR_CSharp_test_plainarr2_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_plainarr2`.
 */
export declare function MR_CSharp_test_plainarr2_ptr(a: number, b: number, c: number): number;

/**
 * Generated from function `MR::CSharp::test_plainarr2_cptr`.
 *
 * Calls `MR_CSharp_test_plainarr2_cptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_plainarr2`.
 */
export declare function MR_CSharp_test_plainarr2_cptr(a: number, b: number, c: number): number;

/**
 * Generated from function `MR::CSharp::test_plainarrenum_ref`.
 *
 * Calls `MR_CSharp_test_plainarrenum_ref()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `MR::CSharp::default_plainarrenum`.
 */
export declare function MR_CSharp_test_plainarrenum_ref(a: number, b: number): number;

/**
 * Generated from function `MR::CSharp::test_plainarrenum_cref`.
 *
 * Calls `MR_CSharp_test_plainarrenum_cref()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `MR::CSharp::default_plainarrenum`.
 */
export declare function MR_CSharp_test_plainarrenum_cref(a: number, b: number): number;

/**
 * Generated from function `MR::CSharp::test_plainarrenum_ptr`.
 *
 * Calls `MR_CSharp_test_plainarrenum_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_plainarrenum`.
 */
export declare function MR_CSharp_test_plainarrenum_ptr(a: number, b: number, c: number): number;

/**
 * Generated from function `MR::CSharp::test_plainarrenum_cptr`.
 *
 * Calls `MR_CSharp_test_plainarrenum_cptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_plainarrenum`.
 */
export declare function MR_CSharp_test_plainarrenum_cptr(a: number, b: number, c: number): number;

/**
 * Generated from function `MR::CSharp::test_plainarrenum2_ref`.
 *
 * Calls `MR_CSharp_test_plainarrenum2_ref()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `MR::CSharp::default_plainarrenum2`.
 */
export declare function MR_CSharp_test_plainarrenum2_ref(a: number, b: number): number;

/**
 * Generated from function `MR::CSharp::test_plainarrenum2_cref`.
 *
 * Calls `MR_CSharp_test_plainarrenum2_cref()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `MR::CSharp::default_plainarrenum2`.
 */
export declare function MR_CSharp_test_plainarrenum2_cref(a: number, b: number): number;

/**
 * Generated from function `MR::CSharp::test_plainarrenum2_ptr`.
 *
 * Calls `MR_CSharp_test_plainarrenum2_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_plainarrenum2`.
 */
export declare function MR_CSharp_test_plainarrenum2_ptr(a: number, b: number, c: number): number;

/**
 * Generated from function `MR::CSharp::test_plainarrenum2_cptr`.
 *
 * Calls `MR_CSharp_test_plainarrenum2_cptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_plainarrenum2`.
 */
export declare function MR_CSharp_test_plainarrenum2_cptr(a: number, b: number, c: number): number;

/**
 * Some multi-level pointer madness:
 * Generated from function `MR::CSharp::test_ptrs1`.
 *
 * Calls `MR_CSharp_test_ptrs1()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
 */
export declare function MR_CSharp_test_ptrs1(ptr: number, ref: number): number;

/**
 * Generated from function `MR::CSharp::test_ptrs2`.
 *
 * Calls `MR_CSharp_test_ptrs2()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
 */
export declare function MR_CSharp_test_ptrs2(ptr: number, ref: number): number;

/**
 * Generated from function `MR::CSharp::test_intptr_ref`.
 *
 * Calls `MR_CSharp_test_intptr_ref()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `MR::CSharp::default_intptr`.
 */
export declare function MR_CSharp_test_intptr_ref(a: number, b: number): number;

/**
 * Generated from function `MR::CSharp::test_intptr_cref`.
 *
 * Calls `MR_CSharp_test_intptr_cref()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `MR::CSharp::default_intptr`.
 */
export declare function MR_CSharp_test_intptr_cref(a: number, b: number): number;

/**
 * Generated from function `MR::CSharp::test_intptr_ptr`.
 *
 * Calls `MR_CSharp_test_intptr_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_intptr`.
 */
export declare function MR_CSharp_test_intptr_ptr(a: number, b: number, c: number): number;

/**
 * Generated from function `MR::CSharp::test_intptr_cptr`.
 *
 * Calls `MR_CSharp_test_intptr_cptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_intptr`.
 */
export declare function MR_CSharp_test_intptr_cptr(a: number, b: number, c: number): number;

/**
 * Generated from function `MR::CSharp::test_intcptr_ref`.
 *
 * Calls `MR_CSharp_test_intcptr_ref()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `MR::CSharp::default_intcptr`.
 */
export declare function MR_CSharp_test_intcptr_ref(a: number, b: number): number;

/**
 * Generated from function `MR::CSharp::test_intcptr_cref`.
 *
 * Calls `MR_CSharp_test_intcptr_cref()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `MR::CSharp::default_intcptr`.
 */
export declare function MR_CSharp_test_intcptr_cref(a: number, b: number): number;

/**
 * Generated from function `MR::CSharp::test_intcptr_ptr`.
 *
 * Calls `MR_CSharp_test_intcptr_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_intcptr`.
 */
export declare function MR_CSharp_test_intcptr_ptr(a: number, b: number, c: number): number;

/**
 * Generated from function `MR::CSharp::test_intcptr_cptr`.
 *
 * Calls `MR_CSharp_test_intcptr_cptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_intcptr`.
 */
export declare function MR_CSharp_test_intcptr_cptr(a: number, b: number, c: number): number;

/**
 * Generated from function `MR::CSharp::test_intptrptr_ref`.
 *
 * Calls `MR_CSharp_test_intptrptr_ref()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `MR::CSharp::default_intptrptr`.
 */
export declare function MR_CSharp_test_intptrptr_ref(a: number, b: number): number;

/**
 * Generated from function `MR::CSharp::test_intptrptr_cref`.
 *
 * Calls `MR_CSharp_test_intptrptr_cref()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `MR::CSharp::default_intptrptr`.
 */
export declare function MR_CSharp_test_intptrptr_cref(a: number, b: number): number;

/**
 * Generated from function `MR::CSharp::test_intptrptr_ptr`.
 *
 * Calls `MR_CSharp_test_intptrptr_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_intptrptr`.
 */
export declare function MR_CSharp_test_intptrptr_ptr(a: number, b: number, c: number): number;

/**
 * Generated from function `MR::CSharp::test_intptrptr_cptr`.
 *
 * Calls `MR_CSharp_test_intptrptr_cptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_intptrptr`.
 */
export declare function MR_CSharp_test_intptrptr_cptr(a: number, b: number, c: number): number;

/**
 * Generated from function `MR::CSharp::test_voidptr_ref`.
 *
 * Calls `MR_CSharp_test_voidptr_ref()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `MR::CSharp::default_voidptr`.
 */
export declare function MR_CSharp_test_voidptr_ref(a: number, b: number): number;

/**
 * Generated from function `MR::CSharp::test_voidptr_cref`.
 *
 * Calls `MR_CSharp_test_voidptr_cref()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `MR::CSharp::default_voidptr`.
 */
export declare function MR_CSharp_test_voidptr_cref(a: number, b: number): number;

/**
 * Generated from function `MR::CSharp::test_voidptr_ptr`.
 *
 * Calls `MR_CSharp_test_voidptr_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_voidptr`.
 */
export declare function MR_CSharp_test_voidptr_ptr(a: number, b: number, c: number): number;

/**
 * Generated from function `MR::CSharp::test_voidptr_cptr`.
 *
 * Calls `MR_CSharp_test_voidptr_cptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_voidptr`.
 */
export declare function MR_CSharp_test_voidptr_cptr(a: number, b: number, c: number): number;

/**
 * Generated from function `MR::CSharp::test_voidptrptr_ref`.
 *
 * Calls `MR_CSharp_test_voidptrptr_ref()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `MR::CSharp::default_voidptrptr`.
 */
export declare function MR_CSharp_test_voidptrptr_ref(a: number, b: number): number;

/**
 * Generated from function `MR::CSharp::test_voidptrptr_cref`.
 *
 * Calls `MR_CSharp_test_voidptrptr_cref()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `MR::CSharp::default_voidptrptr`.
 */
export declare function MR_CSharp_test_voidptrptr_cref(a: number, b: number): number;

/**
 * Generated from function `MR::CSharp::test_voidptrptr_ptr`.
 *
 * Calls `MR_CSharp_test_voidptrptr_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_voidptrptr`.
 */
export declare function MR_CSharp_test_voidptrptr_ptr(a: number, b: number, c: number): number;

/**
 * Generated from function `MR::CSharp::test_voidptrptr_cptr`.
 *
 * Calls `MR_CSharp_test_voidptrptr_cptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_voidptrptr`.
 */
export declare function MR_CSharp_test_voidptrptr_cptr(a: number, b: number, c: number): number;

/**
 * Generated from function `MR::CSharp::test_arrptr_ref`.
 *
 * Calls `MR_CSharp_test_arrptr_ref()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `MR::CSharp::default_arrptr`.
 */
export declare function MR_CSharp_test_arrptr_ref(a: number, b: number): number;

/**
 * Generated from function `MR::CSharp::test_arrptr_cref`.
 *
 * Calls `MR_CSharp_test_arrptr_cref()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `MR::CSharp::default_arrptr`.
 */
export declare function MR_CSharp_test_arrptr_cref(a: number, b: number): number;

/**
 * Generated from function `MR::CSharp::test_arrptr_ptr`.
 *
 * Calls `MR_CSharp_test_arrptr_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_arrptr`.
 */
export declare function MR_CSharp_test_arrptr_ptr(a: number, b: number, c: number): number;

/**
 * Generated from function `MR::CSharp::test_arrptr_cptr`.
 *
 * Calls `MR_CSharp_test_arrptr_cptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_arrptr`.
 */
export declare function MR_CSharp_test_arrptr_cptr(a: number, b: number, c: number): number;

/**
 * Generated from function `MR::CSharp::test_arrcptr_ref`.
 *
 * Calls `MR_CSharp_test_arrcptr_ref()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `MR::CSharp::default_arrcptr`.
 */
export declare function MR_CSharp_test_arrcptr_ref(a: number, b: number): number;

/**
 * Generated from function `MR::CSharp::test_arrcptr_cref`.
 *
 * Calls `MR_CSharp_test_arrcptr_cref()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `MR::CSharp::default_arrcptr`.
 */
export declare function MR_CSharp_test_arrcptr_cref(a: number, b: number): number;

/**
 * Generated from function `MR::CSharp::test_arrcptr_ptr`.
 *
 * Calls `MR_CSharp_test_arrcptr_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_arrcptr`.
 */
export declare function MR_CSharp_test_arrcptr_ptr(a: number, b: number, c: number): number;

/**
 * Generated from function `MR::CSharp::test_arrcptr_cptr`.
 *
 * Calls `MR_CSharp_test_arrcptr_cptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_arrcptr`.
 */
export declare function MR_CSharp_test_arrcptr_cptr(a: number, b: number, c: number): number;

/**
 * Generated from function `MR::CSharp::nameConflicts`.
 *
 * Calls `MR_CSharp_nameConflicts()`.
 */
export declare function MR_CSharp_nameConflicts(): void;

/**
 * Generated from function `MR::CSharp::nameConflictsExposed`.
 *
 * Calls `MR_CSharp_nameConflictsExposed()`.
 */
export declare function MR_CSharp_nameConflictsExposed(): void;

/**
 * Test how template arguments are added to function names when needed to avoid ambiguities.
 * Generated from function `MR::CSharp::template_a<int32_t>`.
 *
 * Calls `MR_CSharp_template_a_int32_t()`.
 */
export declare function MR_CSharp_template_a_int32_t(_1: number): void;

/**
 * Test how template arguments are added to function names when needed to avoid ambiguities.
 * Generated from function `MR::CSharp::template_a<float>`.
 *
 * Calls `MR_CSharp_template_a_float()`.
 */
export declare function MR_CSharp_template_a_float(_1: number): void;

/**
 * Generated from function `MR::CSharp::template_b<int32_t>`.
 *
 * Calls `MR_CSharp_template_b_int32_t()`.
 */
export declare function MR_CSharp_template_b_int32_t(): number;

/**
 * Generated from function `MR::CSharp::template_b<float>`.
 *
 * Calls `MR_CSharp_template_b_float()`.
 */
export declare function MR_CSharp_template_b_float(): number;

/**
 * Generated from function `MR::CSharp::template_c<int32_t>`.
 *
 * Calls `MR_CSharp_template_c_int32_t()`.
 */
export declare function MR_CSharp_template_c_int32_t(): void;

/**
 * Generated from function `MR::CSharp::template_c<float>`.
 *
 * Calls `MR_CSharp_template_c_float()`.
 */
export declare function MR_CSharp_template_c_float(): void;

/**
 * Generated from function `MR::CSharp::instantiate`.
 *
 * Calls `MR_CSharp_instantiate()`.
 */
export declare function MR_CSharp_instantiate(): void;

/**
 * Generated from function `MR::CSharp::operator-`.
 *
 * Calls `MR_C_neg_MR_CSharp_ConstNonconstConflicts_ref()`.
 */
export declare function MR_C_neg_MR_CSharp_ConstNonconstConflicts_ref(_1: L.MR_CSharp_ConstNonconstConflicts): number;

/**
 * Generated from function `MR::CSharp::operator-`.
 *
 * Calls `MR_C_neg_const_MR_CSharp_ConstNonconstConflicts_ref()`.
 */
export declare function MR_C_neg_const_MR_CSharp_ConstNonconstConflicts_ref(_1: L.MR_CSharp_ConstNonconstConflicts): number;

/**
 * Since this returns void, it gets rewritten into a method.
 * Generated from function `MR::CSharp::operator!`.
 *
 * Calls `MR_C_not_MR_CSharp_ConstNonconstConflicts_ref()`.
 */
export declare function MR_C_not_MR_CSharp_ConstNonconstConflicts_ref(_1: L.MR_CSharp_ConstNonconstConflicts): void;

/**
 * Generated from function `MR::CSharp::operator!`.
 *
 * Calls `MR_C_not_const_MR_CSharp_ConstNonconstConflicts_ref()`.
 */
export declare function MR_C_not_const_MR_CSharp_ConstNonconstConflicts_ref(_1: L.MR_CSharp_ConstNonconstConflicts): void;

/**
 * Generated from function `MR::CSharp::operator&`.
 *
 * Calls `MR_C_bitand_int32_t_MR_CSharp_ConstNonconstConflicts_ref()`.
 */
export declare function MR_C_bitand_int32_t_MR_CSharp_ConstNonconstConflicts_ref(_1: number, _2: L.MR_CSharp_ConstNonconstConflicts): number;

/**
 * Generated from function `MR::CSharp::operator&`.
 *
 * Calls `MR_C_bitand_int32_t_const_MR_CSharp_ConstNonconstConflicts_ref()`.
 */
export declare function MR_C_bitand_int32_t_const_MR_CSharp_ConstNonconstConflicts_ref(_1: number, _2: L.MR_CSharp_ConstNonconstConflicts): number;

/**
 * `--infer-lifetime-iterators` should act on those:
 * Generated from function `MR::CSharp::begin`.
 * The reference to the parameter `b` might be preserved in the return value.
 *
 * Calls `MR_CSharp_begin_const_MR_CSharp_LifetimesB_ref()`.
 */
export declare function MR_CSharp_begin_const_MR_CSharp_LifetimesB_ref(b: L.MR_CSharp_LifetimesB): L.MR_CSharp_LifetimesA | null;

/**
 * Generated from function `MR::CSharp::end`.
 * The reference to the parameter `b` might be preserved in the return value.
 *
 * Calls `MR_CSharp_end_const_MR_CSharp_LifetimesB_ref()`.
 */
export declare function MR_CSharp_end_const_MR_CSharp_LifetimesB_ref(b: L.MR_CSharp_LifetimesB): L.MR_CSharp_LifetimesA | null;

/**
 * Generated from function `MR::CSharp::operator*`.
 * The reference to the parameter `b` might be preserved in the return value.
 *
 * Calls `MR_C_deref_const_MR_CSharp_LifetimesB_ref()`.
 */
export declare function MR_C_deref_const_MR_CSharp_LifetimesB_ref(b: L.MR_CSharp_LifetimesB): L.MR_CSharp_LifetimesA;

/**
 * `--infer-lifetime-iterators` should act on those:
 * Generated from function `MR::CSharp::begin`.
 * The reference to the parameter `c` might be preserved in the return value.
 *
 * Calls `MR_CSharp_begin_const_MR_CSharp_LifetimesC_ref()`.
 */
export declare function MR_CSharp_begin_const_MR_CSharp_LifetimesC_ref(c: L.MR_CSharp_LifetimesC): L.MR_CSharp_LifetimesA | null;

/**
 * Generated from function `MR::CSharp::end`.
 * The reference to the parameter `c` might be preserved in the return value.
 *
 * Calls `MR_CSharp_end_const_MR_CSharp_LifetimesC_ref()`.
 */
export declare function MR_CSharp_end_const_MR_CSharp_LifetimesC_ref(c: L.MR_CSharp_LifetimesC): L.MR_CSharp_LifetimesA | null;

/**
 * Generated from function `MR::CSharp::operator*`.
 * The reference to the parameter `c` might be preserved in the return value.
 *
 * Calls `MR_C_deref_MR_CSharp_LifetimesC()`.
 */
export declare function MR_C_deref_MR_CSharp_LifetimesC(c: L.MR_CSharp_LifetimesC): L.MR_CSharp_LifetimesA;

/**
 * Generated from function `MR::CSharp::begin`.
 * The reference to the parameter `self` might be preserved in the return value.
 *
 * Calls `MR_CSharp_begin_const_MR_CSharp_IterableD_ref()`.
 */
export declare function MR_CSharp_begin_const_MR_CSharp_IterableD_ref(self: L.MR_CSharp_IterableD): number | null;

/**
 * Generated from function `MR::CSharp::end`.
 * The reference to the parameter `self` might be preserved in the return value.
 *
 * Calls `MR_CSharp_end_const_MR_CSharp_IterableD_ref()`.
 */
export declare function MR_CSharp_end_const_MR_CSharp_IterableD_ref(self: L.MR_CSharp_IterableD): number | null;

/**
 * Generated from function `MR::CSharp::begin`.
 * The reference to the parameter `self` might be preserved in the return value.
 *
 * Calls `MR_CSharp_begin_MR_CSharp_IterableE_ref()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
 */
export declare function MR_CSharp_begin_MR_CSharp_IterableE_ref(self: L.MR_CSharp_IterableE): number;

/**
 * Generated from function `MR::CSharp::end`.
 * The reference to the parameter `self` might be preserved in the return value.
 *
 * Calls `MR_CSharp_end_MR_CSharp_IterableE_ref()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
 */
export declare function MR_CSharp_end_MR_CSharp_IterableE_ref(self: L.MR_CSharp_IterableE): number;

/**
 * Generated from function `MR::CSharp::begin`.
 * The reference to the parameter `self` might be preserved in the return value.
 *
 * Calls `MR_CSharp_begin_const_MR_CSharp_IterableF_ref()`.
 */
export declare function MR_CSharp_begin_const_MR_CSharp_IterableF_ref(self: L.MR_CSharp_IterableF): number | null;

/**
 * Generated from function `MR::CSharp::end`.
 * The reference to the parameter `self` might be preserved in the return value.
 *
 * Calls `MR_CSharp_end_const_MR_CSharp_IterableF_ref()`.
 */
export declare function MR_CSharp_end_const_MR_CSharp_IterableF_ref(self: L.MR_CSharp_IterableF): number | null;

/**
 * Generated from function `MR::CSharp::begin`.
 * The reference to the parameter `self` might be preserved in the return value.
 *
 * Calls `MR_CSharp_begin_MR_CSharp_IterableF_ref()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
 */
export declare function MR_CSharp_begin_MR_CSharp_IterableF_ref(self: L.MR_CSharp_IterableF): number;

/**
 * Generated from function `MR::CSharp::end`.
 * The reference to the parameter `self` might be preserved in the return value.
 *
 * Calls `MR_CSharp_end_MR_CSharp_IterableF_ref()`. Some types are raw C types (pointers as numbers), see the C bindings for the details.
 */
export declare function MR_CSharp_end_MR_CSharp_IterableF_ref(self: L.MR_CSharp_IterableF): number;

/**
 * Generated from function `MR::CSharp::begin<int32_t>`.
 * The reference to the parameter `self` might be preserved in the return value.
 *
 * Calls `MR_CSharp_begin_int32_t()`.
 */
export declare function MR_CSharp_begin_int32_t(self: L.MR_CSharp_IterableL_int32_t): number | null;

/**
 * Generated from function `MR::CSharp::end<int32_t>`.
 * The reference to the parameter `self` might be preserved in the return value.
 *
 * Calls `MR_CSharp_end_int32_t()`.
 */
export declare function MR_CSharp_end_int32_t(self: L.MR_CSharp_IterableL_int32_t): number | null;

/**
 * Vectors of pointers to a class.
 * Currently `IEnumerable` is disabled for those, it needs to be fixed.
 * Generated from function `MR::CSharp::test_vec_of_mut_ptr_to_class`.
 *
 * Calls `MR_CSharp_test_vec_of_mut_ptr_to_class()`.
 */
export declare function MR_CSharp_test_vec_of_mut_ptr_to_class(): L.MR_C_std_vector_MR_CSharp_A_ptr;

/**
 * Generated from function `MR::CSharp::test_vec_of_const_ptr_to_class`.
 *
 * Calls `MR_CSharp_test_vec_of_const_ptr_to_class()`.
 */
export declare function MR_CSharp_test_vec_of_const_ptr_to_class(): L.MR_C_std_vector_const_MR_CSharp_A_ptr;

/**
 * Test decomposition for certain whitelisted standard tuple-like types: (tuples and pairs)
 * Generated from function `MR::CSharp::get_tuple0`.
 *
 * Calls `MR_CSharp_get_tuple0()`.
 */
export declare function MR_CSharp_get_tuple0(): L.MR_C_std_tuple;

/**
 * Generated from function `MR::CSharp::get_tuple1`.
 *
 * Calls `MR_CSharp_get_tuple1()`.
 */
export declare function MR_CSharp_get_tuple1(): L.MR_C_std_tuple_int32_t;

/**
 * Generated from function `MR::CSharp::get_tuple2`.
 *
 * Calls `MR_CSharp_get_tuple2()`.
 */
export declare function MR_CSharp_get_tuple2(): L.MR_C_std_tuple_int32_t_std_string;

/**
 * Generated from function `MR::CSharp::get_pair2`.
 *
 * Calls `MR_CSharp_get_pair2()`.
 */
export declare function MR_CSharp_get_pair2(): L.MR_C_std_pair_int32_t_std_string;

/**
 * Generated from function `MR::CSharp::get_tuple_const`.
 *
 * Calls `MR_CSharp_get_tuple_const()`.
 */
export declare function MR_CSharp_get_tuple_const(): L.MR_C_std_tuple_const_int32_t_std_string;

/**
 * Generated from function `MR::CSharp::get_tuple_refs`.
 *
 * Calls `MR_CSharp_get_tuple_refs()`.
 */
export declare function MR_CSharp_get_tuple_refs(): L.MR_C_std_tuple_int32_t_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref;

/**
 * Generated from function `MR::CSharp::get_tuple_crefs`.
 *
 * Calls `MR_CSharp_get_tuple_crefs()`.
 */
export declare function MR_CSharp_get_tuple_crefs(): L.MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref;

/**
 * Generated from function `MR::CSharp::get_tuple_exposed_value`.
 *
 * Calls `MR_CSharp_get_tuple_exposed_value()`.
 */
export declare function MR_CSharp_get_tuple_exposed_value(): L.MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout;

/**
 * Generated from function `MR::CSharp::get_tuple_exposed_lvalue_ref`.
 *
 * Calls `MR_CSharp_get_tuple_exposed_lvalue_ref()`.
 */
export declare function MR_CSharp_get_tuple_exposed_lvalue_ref(): L.MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref;

/**
 * Generated from function `MR::CSharp::get_tuple_exposed_rvalue_ref`.
 *
 * Calls `MR_CSharp_get_tuple_exposed_rvalue_ref()`.
 */
export declare function MR_CSharp_get_tuple_exposed_rvalue_ref(): L.MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref;

/**
 * Generated from function `MR::CSharp::test_expected_int`.
 *
 * Calls `MR_CSharp_test_expected_int()`. The C++ function returns `expected<int32_t, float>`: the value is returned and an error is thrown as `UnexpectedResultException`. `b` defaults to `expected<int, float>{42}`.
 */
export declare function MR_CSharp_test_expected_int(a: L.MR_C_expected_int32_t_float, b?: L.MR_C_expected_int32_t_float | null): number;

/**
 * Generated from function `MR::CSharp::test_expected_int_ref`.
 *
 * Calls `MR_CSharp_test_expected_int_ref()`. `b` defaults to `MR::CSharp::default_expected_int`.
 */
export declare function MR_CSharp_test_expected_int_ref(a: L.MR_C_expected_int32_t_float, b?: L.MR_C_expected_int32_t_float | null): L.MR_C_expected_int32_t_float;

/**
 * Generated from function `MR::CSharp::test_expected_int_cref`.
 *
 * Calls `MR_CSharp_test_expected_int_cref()`. `b` defaults to `MR::CSharp::default_expected_int`.
 */
export declare function MR_CSharp_test_expected_int_cref(a: L.MR_C_expected_int32_t_float, b?: L.MR_C_expected_int32_t_float | null): L.MR_C_expected_int32_t_float;

/**
 * Generated from function `MR::CSharp::test_expected_int_ptr`.
 *
 * Calls `MR_CSharp_test_expected_int_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_expected_int`.
 */
export declare function MR_CSharp_test_expected_int_ptr(a: L.MR_C_expected_int32_t_float | null | undefined, b: L.MR_C_expected_int32_t_float | null | undefined, c: number): L.MR_C_expected_int32_t_float | null;

/**
 * Generated from function `MR::CSharp::test_expected_int_cptr`.
 *
 * Calls `MR_CSharp_test_expected_int_cptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_expected_int`.
 */
export declare function MR_CSharp_test_expected_int_cptr(a: L.MR_C_expected_int32_t_float | null | undefined, b: L.MR_C_expected_int32_t_float | null | undefined, c: number): L.MR_C_expected_int32_t_float | null;

/**
 * Generated from function `MR::CSharp::test_expected_void`.
 *
 * Calls `MR_CSharp_test_expected_void()`. The C++ function returns `expected<void, float>`: the value is returned and an error is thrown as `UnexpectedResultException`. `b` defaults to `expected<void, float>{}`.
 */
export declare function MR_CSharp_test_expected_void(a: L.MR_C_expected_void_float, b?: L.MR_C_expected_void_float | null): void;

/**
 * Generated from function `MR::CSharp::test_expected_void_ref`.
 *
 * Calls `MR_CSharp_test_expected_void_ref()`. `b` defaults to `MR::CSharp::default_expected_void`.
 */
export declare function MR_CSharp_test_expected_void_ref(a: L.MR_C_expected_void_float, b?: L.MR_C_expected_void_float | null): L.MR_C_expected_void_float;

/**
 * Generated from function `MR::CSharp::test_expected_void_cref`.
 *
 * Calls `MR_CSharp_test_expected_void_cref()`. `b` defaults to `MR::CSharp::default_expected_void`.
 */
export declare function MR_CSharp_test_expected_void_cref(a: L.MR_C_expected_void_float, b?: L.MR_C_expected_void_float | null): L.MR_C_expected_void_float;

/**
 * Generated from function `MR::CSharp::test_expected_void_ptr`.
 *
 * Calls `MR_CSharp_test_expected_void_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_expected_void`.
 */
export declare function MR_CSharp_test_expected_void_ptr(a: L.MR_C_expected_void_float | null | undefined, b: L.MR_C_expected_void_float | null | undefined, c: number): L.MR_C_expected_void_float | null;

/**
 * Generated from function `MR::CSharp::test_expected_void_cptr`.
 *
 * Calls `MR_CSharp_test_expected_void_cptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_expected_void`.
 */
export declare function MR_CSharp_test_expected_void_cptr(a: L.MR_C_expected_void_float | null | undefined, b: L.MR_C_expected_void_float | null | undefined, c: number): L.MR_C_expected_void_float | null;

/**
 * Generated from function `MR::CSharp::test_expected_enum`.
 *
 * Calls `MR_CSharp_test_expected_enum()`. The C++ function returns `expected<MR::CSharp::E1, float>`: the value is returned and an error is thrown as `UnexpectedResultException`. `b` defaults to `expected<MR::CSharp::E1, float>{MR::CSharp::E1::b}`.
 */
export declare function MR_CSharp_test_expected_enum(a: L.MR_C_expected_MR_CSharp_E1_float, b?: L.MR_C_expected_MR_CSharp_E1_float | null): L.MR_CSharp_E1;

/**
 * Generated from function `MR::CSharp::test_expected_enum_ref`.
 *
 * Calls `MR_CSharp_test_expected_enum_ref()`. `b` defaults to `MR::CSharp::default_expected_enum`.
 */
export declare function MR_CSharp_test_expected_enum_ref(a: L.MR_C_expected_MR_CSharp_E1_float, b?: L.MR_C_expected_MR_CSharp_E1_float | null): L.MR_C_expected_MR_CSharp_E1_float;

/**
 * Generated from function `MR::CSharp::test_expected_enum_cref`.
 *
 * Calls `MR_CSharp_test_expected_enum_cref()`. `b` defaults to `MR::CSharp::default_expected_enum`.
 */
export declare function MR_CSharp_test_expected_enum_cref(a: L.MR_C_expected_MR_CSharp_E1_float, b?: L.MR_C_expected_MR_CSharp_E1_float | null): L.MR_C_expected_MR_CSharp_E1_float;

/**
 * Generated from function `MR::CSharp::test_expected_enum_ptr`.
 *
 * Calls `MR_CSharp_test_expected_enum_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_expected_enum`.
 */
export declare function MR_CSharp_test_expected_enum_ptr(a: L.MR_C_expected_MR_CSharp_E1_float | null | undefined, b: L.MR_C_expected_MR_CSharp_E1_float | null | undefined, c: number): L.MR_C_expected_MR_CSharp_E1_float | null;

/**
 * Generated from function `MR::CSharp::test_expected_enum_cptr`.
 *
 * Calls `MR_CSharp_test_expected_enum_cptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_expected_enum`.
 */
export declare function MR_CSharp_test_expected_enum_cptr(a: L.MR_C_expected_MR_CSharp_E1_float | null | undefined, b: L.MR_C_expected_MR_CSharp_E1_float | null | undefined, c: number): L.MR_C_expected_MR_CSharp_E1_float | null;

/**
 * Generated from function `MR::CSharp::test_expected_triv`.
 *
 * Calls `MR_CSharp_test_expected_triv()`. The C++ function returns `expected<MR::CSharp::Trivial, float>`: the value is returned and an error is thrown as `UnexpectedResultException`. `b` defaults to `expected<MR::CSharp::Trivial, float>{MR::CSharp::Trivial{}}`.
 */
export declare function MR_CSharp_test_expected_triv(a: L.MR_C_expected_MR_CSharp_Trivial_float, b?: L.MR_C_expected_MR_CSharp_Trivial_float | null): L.MR_CSharp_Trivial;

/**
 * Generated from function `MR::CSharp::test_expected_triv_ref`.
 *
 * Calls `MR_CSharp_test_expected_triv_ref()`. `b` defaults to `MR::CSharp::default_expected_triv`.
 */
export declare function MR_CSharp_test_expected_triv_ref(a: L.MR_C_expected_MR_CSharp_Trivial_float, b?: L.MR_C_expected_MR_CSharp_Trivial_float | null): L.MR_C_expected_MR_CSharp_Trivial_float;

/**
 * Generated from function `MR::CSharp::test_expected_triv_cref`.
 *
 * Calls `MR_CSharp_test_expected_triv_cref()`. `b` defaults to `MR::CSharp::default_expected_triv`.
 */
export declare function MR_CSharp_test_expected_triv_cref(a: L.MR_C_expected_MR_CSharp_Trivial_float, b?: L.MR_C_expected_MR_CSharp_Trivial_float | null): L.MR_C_expected_MR_CSharp_Trivial_float;

/**
 * Generated from function `MR::CSharp::test_expected_triv_ptr`.
 *
 * Calls `MR_CSharp_test_expected_triv_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_expected_triv`.
 */
export declare function MR_CSharp_test_expected_triv_ptr(a: L.MR_C_expected_MR_CSharp_Trivial_float | null | undefined, b: L.MR_C_expected_MR_CSharp_Trivial_float | null | undefined, c: number): L.MR_C_expected_MR_CSharp_Trivial_float | null;

/**
 * Generated from function `MR::CSharp::test_expected_triv_cptr`.
 *
 * Calls `MR_CSharp_test_expected_triv_cptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_expected_triv`.
 */
export declare function MR_CSharp_test_expected_triv_cptr(a: L.MR_C_expected_MR_CSharp_Trivial_float | null | undefined, b: L.MR_C_expected_MR_CSharp_Trivial_float | null | undefined, c: number): L.MR_C_expected_MR_CSharp_Trivial_float | null;

/**
 * Generated from function `MR::CSharp::test_expected_nontriv`.
 *
 * Calls `MR_CSharp_test_expected_nontriv()`. The C++ function returns `expected<MR::CSharp::NonTrivial, float>`: the value is returned and an error is thrown as `UnexpectedResultException`. `b` defaults to `expected<MR::CSharp::NonTrivial, float>{MR::CSharp::NonTrivial{}}`.
 */
export declare function MR_CSharp_test_expected_nontriv(a: L.MR_C_expected_MR_CSharp_NonTrivial_float, b?: L.MR_C_expected_MR_CSharp_NonTrivial_float | null): L.MR_CSharp_NonTrivial;

/**
 * Generated from function `MR::CSharp::test_expected_nontriv_ref`.
 *
 * Calls `MR_CSharp_test_expected_nontriv_ref()`. `b` defaults to `MR::CSharp::default_expected_nontriv`.
 */
export declare function MR_CSharp_test_expected_nontriv_ref(a: L.MR_C_expected_MR_CSharp_NonTrivial_float, b?: L.MR_C_expected_MR_CSharp_NonTrivial_float | null): L.MR_C_expected_MR_CSharp_NonTrivial_float;

/**
 * Generated from function `MR::CSharp::test_expected_nontriv_cref`.
 *
 * Calls `MR_CSharp_test_expected_nontriv_cref()`. `b` defaults to `MR::CSharp::default_expected_nontriv`.
 */
export declare function MR_CSharp_test_expected_nontriv_cref(a: L.MR_C_expected_MR_CSharp_NonTrivial_float, b?: L.MR_C_expected_MR_CSharp_NonTrivial_float | null): L.MR_C_expected_MR_CSharp_NonTrivial_float;

/**
 * Generated from function `MR::CSharp::test_expected_nontriv_ptr`.
 *
 * Calls `MR_CSharp_test_expected_nontriv_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_expected_nontriv`.
 */
export declare function MR_CSharp_test_expected_nontriv_ptr(a: L.MR_C_expected_MR_CSharp_NonTrivial_float | null | undefined, b: L.MR_C_expected_MR_CSharp_NonTrivial_float | null | undefined, c: number): L.MR_C_expected_MR_CSharp_NonTrivial_float | null;

/**
 * Generated from function `MR::CSharp::test_expected_nontriv_cptr`.
 *
 * Calls `MR_CSharp_test_expected_nontriv_cptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_expected_nontriv`.
 */
export declare function MR_CSharp_test_expected_nontriv_cptr(a: L.MR_C_expected_MR_CSharp_NonTrivial_float | null | undefined, b: L.MR_C_expected_MR_CSharp_NonTrivial_float | null | undefined, c: number): L.MR_C_expected_MR_CSharp_NonTrivial_float | null;

/**
 * Generated from function `MR::CSharp::test_expected_shared`.
 *
 * Calls `MR_CSharp_test_expected_shared()`. The C++ function returns `expected<MR::CSharp::SA, float>`: the value is returned and an error is thrown as `UnexpectedResultException`. `b` defaults to `expected<MR::CSharp::SA, float>{MR::CSharp::SA{}}`.
 */
export declare function MR_CSharp_test_expected_shared(a: L.MR_C_expected_MR_CSharp_SA_float, b?: L.MR_C_expected_MR_CSharp_SA_float | null): L.MR_CSharp_SA;

/**
 * Generated from function `MR::CSharp::test_expected_shared_ref`.
 *
 * Calls `MR_CSharp_test_expected_shared_ref()`. `b` defaults to `MR::CSharp::default_expected_shared`.
 */
export declare function MR_CSharp_test_expected_shared_ref(a: L.MR_C_expected_MR_CSharp_SA_float, b?: L.MR_C_expected_MR_CSharp_SA_float | null): L.MR_C_expected_MR_CSharp_SA_float;

/**
 * Generated from function `MR::CSharp::test_expected_shared_cref`.
 *
 * Calls `MR_CSharp_test_expected_shared_cref()`. `b` defaults to `MR::CSharp::default_expected_shared`.
 */
export declare function MR_CSharp_test_expected_shared_cref(a: L.MR_C_expected_MR_CSharp_SA_float, b?: L.MR_C_expected_MR_CSharp_SA_float | null): L.MR_C_expected_MR_CSharp_SA_float;

/**
 * Generated from function `MR::CSharp::test_expected_shared_ptr`.
 *
 * Calls `MR_CSharp_test_expected_shared_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_expected_shared`.
 */
export declare function MR_CSharp_test_expected_shared_ptr(a: L.MR_C_expected_MR_CSharp_SA_float | null | undefined, b: L.MR_C_expected_MR_CSharp_SA_float | null | undefined, c: number): L.MR_C_expected_MR_CSharp_SA_float | null;

/**
 * Generated from function `MR::CSharp::test_expected_shared_cptr`.
 *
 * Calls `MR_CSharp_test_expected_shared_cptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_expected_shared`.
 */
export declare function MR_CSharp_test_expected_shared_cptr(a: L.MR_C_expected_MR_CSharp_SA_float | null | undefined, b: L.MR_C_expected_MR_CSharp_SA_float | null | undefined, c: number): L.MR_C_expected_MR_CSharp_SA_float | null;

/**
 * Generated from function `MR::CSharp::test_expected_exposed`.
 *
 * Calls `MR_CSharp_test_expected_exposed()`. The C++ function returns `expected<MR::CSharp::ExposedLayout, float>`: the value is returned and an error is thrown as `UnexpectedResultException`. `b` defaults to `expected<MR::CSharp::ExposedLayout, float>{MR::CSharp::ExposedLayout{}}`.
 */
export declare function MR_CSharp_test_expected_exposed(a: L.MR_C_expected_MR_CSharp_ExposedLayout_float, b?: L.MR_C_expected_MR_CSharp_ExposedLayout_float | null): L.MR_CSharp_ExposedLayout;

/**
 * Generated from function `MR::CSharp::test_expected_exposed_ref`.
 *
 * Calls `MR_CSharp_test_expected_exposed_ref()`. `b` defaults to `MR::CSharp::default_expected_exposed`.
 */
export declare function MR_CSharp_test_expected_exposed_ref(a: L.MR_C_expected_MR_CSharp_ExposedLayout_float, b?: L.MR_C_expected_MR_CSharp_ExposedLayout_float | null): L.MR_C_expected_MR_CSharp_ExposedLayout_float;

/**
 * Generated from function `MR::CSharp::test_expected_exposed_cref`.
 *
 * Calls `MR_CSharp_test_expected_exposed_cref()`. `b` defaults to `MR::CSharp::default_expected_exposed`.
 */
export declare function MR_CSharp_test_expected_exposed_cref(a: L.MR_C_expected_MR_CSharp_ExposedLayout_float, b?: L.MR_C_expected_MR_CSharp_ExposedLayout_float | null): L.MR_C_expected_MR_CSharp_ExposedLayout_float;

/**
 * Generated from function `MR::CSharp::test_expected_exposed_ptr`.
 *
 * Calls `MR_CSharp_test_expected_exposed_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_expected_exposed`.
 */
export declare function MR_CSharp_test_expected_exposed_ptr(a: L.MR_C_expected_MR_CSharp_ExposedLayout_float | null | undefined, b: L.MR_C_expected_MR_CSharp_ExposedLayout_float | null | undefined, c: number): L.MR_C_expected_MR_CSharp_ExposedLayout_float | null;

/**
 * Generated from function `MR::CSharp::test_expected_exposed_cptr`.
 *
 * Calls `MR_CSharp_test_expected_exposed_cptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_expected_exposed`.
 */
export declare function MR_CSharp_test_expected_exposed_cptr(a: L.MR_C_expected_MR_CSharp_ExposedLayout_float | null | undefined, b: L.MR_C_expected_MR_CSharp_ExposedLayout_float | null | undefined, c: number): L.MR_C_expected_MR_CSharp_ExposedLayout_float | null;

/**
 * Generated from function `MR::CSharp::test_expected_exposed_shared`.
 *
 * Calls `MR_CSharp_test_expected_exposed_shared()`. The C++ function returns `expected<MR::CSharp::ExposedLayoutSh, float>`: the value is returned and an error is thrown as `UnexpectedResultException`. `b` defaults to `expected<MR::CSharp::ExposedLayoutSh, float>{MR::CSharp::ExposedLayoutSh{}}`.
 */
export declare function MR_CSharp_test_expected_exposed_shared(a: L.MR_C_expected_MR_CSharp_ExposedLayoutSh_float, b?: L.MR_C_expected_MR_CSharp_ExposedLayoutSh_float | null): L.MR_CSharp_ExposedLayoutSh;

/**
 * Generated from function `MR::CSharp::test_expected_exposed_shared_ref`.
 *
 * Calls `MR_CSharp_test_expected_exposed_shared_ref()`. `b` defaults to `MR::CSharp::default_expected_exposed_shared`.
 */
export declare function MR_CSharp_test_expected_exposed_shared_ref(a: L.MR_C_expected_MR_CSharp_ExposedLayoutSh_float, b?: L.MR_C_expected_MR_CSharp_ExposedLayoutSh_float | null): L.MR_C_expected_MR_CSharp_ExposedLayoutSh_float;

/**
 * Generated from function `MR::CSharp::test_expected_exposed_shared_cref`.
 *
 * Calls `MR_CSharp_test_expected_exposed_shared_cref()`. `b` defaults to `MR::CSharp::default_expected_exposed_shared`.
 */
export declare function MR_CSharp_test_expected_exposed_shared_cref(a: L.MR_C_expected_MR_CSharp_ExposedLayoutSh_float, b?: L.MR_C_expected_MR_CSharp_ExposedLayoutSh_float | null): L.MR_C_expected_MR_CSharp_ExposedLayoutSh_float;

/**
 * Generated from function `MR::CSharp::test_expected_exposed_shared_ptr`.
 *
 * Calls `MR_CSharp_test_expected_exposed_shared_ptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_expected_exposed_shared`.
 */
export declare function MR_CSharp_test_expected_exposed_shared_ptr(a: L.MR_C_expected_MR_CSharp_ExposedLayoutSh_float | null | undefined, b: L.MR_C_expected_MR_CSharp_ExposedLayoutSh_float | null | undefined, c: number): L.MR_C_expected_MR_CSharp_ExposedLayoutSh_float | null;

/**
 * Generated from function `MR::CSharp::test_expected_exposed_shared_cptr`.
 *
 * Calls `MR_CSharp_test_expected_exposed_shared_cptr()`. Some types are raw C types (pointers as numbers), see the C bindings for the details. `b` defaults to `nullptr`. `c` defaults to `&MR::CSharp::default_expected_exposed_shared`.
 */
export declare function MR_CSharp_test_expected_exposed_shared_cptr(a: L.MR_C_expected_MR_CSharp_ExposedLayoutSh_float | null | undefined, b: L.MR_C_expected_MR_CSharp_ExposedLayoutSh_float | null | undefined, c: number): L.MR_C_expected_MR_CSharp_ExposedLayoutSh_float | null;

