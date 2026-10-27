// The wrappers of the C bindings file `MR/test_aggregates`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Aggregates get elementwise constructors. This is necessary if their elements are not default-constructible,
 *   because otherwise there would be no way to construct them.
 * Generated from class `MR::Aggregates::A`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_Aggregates_A extends ffi.CppObject
{
    /**
     * Returns a pointer to a member variable of class `MR::Aggregates::A` named `x`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_A_Get_x()`.
     */
    x: number;
    /**
     * Returns a pointer to a member variable of class `MR::Aggregates::A` named `y`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_A_Get_y()`.
     */
    get y(): L.MR_C_std_string;
    set y(value: string);
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_Aggregates_A_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::Aggregates::A::A`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_Aggregates_A_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_Aggregates_A);
    /**
     * Constructs `MR::Aggregates::A` elementwise.
     * The reference to the parameter `x` might be preserved in the constructed object.
     * The reference to the parameter `y` might be preserved in the constructed object.
     *
     * Calls `MR_Aggregates_A_ConstructFrom()`.
     */
    constructor(x: number, y: string);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::Aggregates::A::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_Aggregates_A_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_Aggregates_A): L.MR_Aggregates_A;
}

/**
 * This is an empty aggregate, it doesn't need an elementwise constructor.
 * Generated from class `MR::Aggregates::B`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_Aggregates_B extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_Aggregates_B_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::Aggregates::B::B`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_Aggregates_B_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_Aggregates_B);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::Aggregates::B::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_Aggregates_B_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_Aggregates_B): L.MR_Aggregates_B;
}

/**
 * Test the optional limit on the number of fields that we aggregate-initialize.
 * Generated from class `MR::Aggregates::C`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_Aggregates_C extends ffi.CppObject
{
    /**
     * Returns a pointer to a member variable of class `MR::Aggregates::C` named `a`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_C_Get_a()`.
     */
    a: number;
    /**
     * Returns a pointer to a member variable of class `MR::Aggregates::C` named `b`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_C_Get_b()`.
     */
    b: number;
    /**
     * Returns a pointer to a member variable of class `MR::Aggregates::C` named `c`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_C_Get_c()`.
     */
    c: number;
    /**
     * Returns a pointer to a member variable of class `MR::Aggregates::C` named `d`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_C_Get_d()`.
     */
    d: number;
    /**
     * Returns a pointer to a member variable of class `MR::Aggregates::C` named `e`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_C_Get_e()`.
     */
    e: number;
    /**
     * Returns a pointer to a member variable of class `MR::Aggregates::C` named `f`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_C_Get_f()`.
     */
    f: number;
    /**
     * Returns a pointer to a member variable of class `MR::Aggregates::C` named `g`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_C_Get_g()`.
     */
    g: number;
    /**
     * Returns a pointer to a member variable of class `MR::Aggregates::C` named `h`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_C_Get_h()`.
     */
    h: number;
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_Aggregates_C_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::Aggregates::C::C`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_Aggregates_C_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_Aggregates_C);
    /**
     * Constructs `MR::Aggregates::C` elementwise.
     * The reference to the parameter `a` might be preserved in the constructed object.
     * The reference to the parameter `b` might be preserved in the constructed object.
     * The reference to the parameter `c` might be preserved in the constructed object.
     * The reference to the parameter `d` might be preserved in the constructed object.
     * The reference to the parameter `e` might be preserved in the constructed object.
     * The reference to the parameter `f` might be preserved in the constructed object.
     * The reference to the parameter `g` might be preserved in the constructed object.
     * The reference to the parameter `h` might be preserved in the constructed object.
     *
     * Calls `MR_Aggregates_C_ConstructFrom()`.
     */
    constructor(a: number, b: number, c: number, d: number, e: number, f: number, g: number, h: number);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::Aggregates::C::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_Aggregates_C_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_Aggregates_C): L.MR_Aggregates_C;
}

/**
 * Generated from class `MR::Aggregates::D`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_Aggregates_D extends ffi.CppObject
{
    /**
     * Returns a pointer to a member variable of class `MR::Aggregates::D` named `a`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_D_Get_a()`.
     */
    a: number;
    /**
     * Returns a pointer to a member variable of class `MR::Aggregates::D` named `b`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_D_Get_b()`.
     */
    b: number;
    /**
     * Returns a pointer to a member variable of class `MR::Aggregates::D` named `c`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_D_Get_c()`.
     */
    c: number;
    /**
     * Returns a pointer to a member variable of class `MR::Aggregates::D` named `d`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_D_Get_d()`.
     */
    d: number;
    /**
     * Returns a pointer to a member variable of class `MR::Aggregates::D` named `e`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_D_Get_e()`.
     */
    e: number;
    /**
     * Returns a pointer to a member variable of class `MR::Aggregates::D` named `f`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_D_Get_f()`.
     */
    f: number;
    /**
     * Returns a pointer to a member variable of class `MR::Aggregates::D` named `g`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_D_Get_g()`.
     */
    g: number;
    /**
     * Returns a pointer to a member variable of class `MR::Aggregates::D` named `h`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_D_Get_h()`.
     */
    h: number;
    /**
     * Returns a pointer to a member variable of class `MR::Aggregates::D` named `i`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_D_Get_i()`.
     */
    i: number;
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_Aggregates_D_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::Aggregates::D::D`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_Aggregates_D_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_Aggregates_D);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::Aggregates::D::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_Aggregates_D_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_Aggregates_D): L.MR_Aggregates_D;
}

/**
 * Generated from class `MR::Aggregates::E`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_Aggregates_E extends ffi.CppObject
{
    /**
     * This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
     * Returns a pointer to a member variable of class `MR::Aggregates::E` named `a`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_E_Get_a()`.
     */
    a: number;
    /**
     * This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
     * Returns a pointer to a member variable of class `MR::Aggregates::E` named `b`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_E_Get_b()`.
     */
    b: number;
    /**
     * This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
     * Returns a pointer to a member variable of class `MR::Aggregates::E` named `c`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_E_Get_c()`.
     */
    c: number;
    /**
     * This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
     * Returns a pointer to a member variable of class `MR::Aggregates::E` named `d`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_E_Get_d()`.
     */
    d: number;
    /**
     * This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
     * Returns a pointer to a member variable of class `MR::Aggregates::E` named `e`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_E_Get_e()`.
     */
    e: number;
    /**
     * This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
     * Returns a pointer to a member variable of class `MR::Aggregates::E` named `f`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_E_Get_f()`.
     */
    f: number;
    /**
     * This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
     * Returns a pointer to a member variable of class `MR::Aggregates::E` named `g`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_E_Get_g()`.
     */
    g: number;
    /**
     * This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
     * Returns a pointer to a member variable of class `MR::Aggregates::E` named `h`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_E_Get_h()`.
     */
    h: number;
    /**
     * This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
     * Returns a pointer to a member variable of class `MR::Aggregates::E` named `i`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_E_Get_i()`.
     */
    i: number;
    /**
     * This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
     * Returns a pointer to a member variable of class `MR::Aggregates::E` named `j`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_Aggregates_E_Get_j()`.
     */
    j: L.MR_Aggregates_NonDefaultConstructible;
    /**
     * Generated from constructor `MR::Aggregates::E::E`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_Aggregates_E_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_Aggregates_E);
    /**
     * Constructs `MR::Aggregates::E` elementwise.
     * The reference to the parameter `a` might be preserved in the constructed object.
     * The reference to the parameter `b` might be preserved in the constructed object.
     * The reference to the parameter `c` might be preserved in the constructed object.
     * The reference to the parameter `d` might be preserved in the constructed object.
     * The reference to the parameter `e` might be preserved in the constructed object.
     * The reference to the parameter `f` might be preserved in the constructed object.
     * The reference to the parameter `g` might be preserved in the constructed object.
     * The reference to the parameter `h` might be preserved in the constructed object.
     * The reference to the parameter `i` might be preserved in the constructed object.
     * The reference to the parameter `j` might be preserved in the constructed object.
     *
     * Calls `MR_Aggregates_E_ConstructFrom()`.
     */
    constructor(a: number, b: number, c: number, d: number, e: number, f: number, g: number, h: number, i: number, j: L.MR_Aggregates_NonDefaultConstructible);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::Aggregates::E::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_Aggregates_E_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_Aggregates_E): L.MR_Aggregates_E;
}

/**
 * Generated from class `MR::Aggregates::NonDefaultConstructible`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_Aggregates_NonDefaultConstructible extends ffi.CppObject
{
    /**
     * Generated from constructor `MR::Aggregates::NonDefaultConstructible::NonDefaultConstructible`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_Aggregates_NonDefaultConstructible_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_Aggregates_NonDefaultConstructible);
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::Aggregates::NonDefaultConstructible::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_Aggregates_NonDefaultConstructible_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_Aggregates_NonDefaultConstructible): L.MR_Aggregates_NonDefaultConstructible;
}

