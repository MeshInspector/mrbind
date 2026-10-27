// The wrappers of the C bindings file `MR/test_copy_inherited_members`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Generated from class `MR::CopyInheritedMembers::A`.
 * Derived classes:
 *   Virtual:
 *     `MR::CopyInheritedMembers::G`
 *     `MR::CopyInheritedMembers::H`
 *     `MR::CopyInheritedMembers::I`
 *   Non-virtual along a virtual path:
 *     `MR::CopyInheritedMembers::M`
 *     `MR::CopyInheritedMembers::N`
 *     `MR::CopyInheritedMembers::O`
 *   Direct: (non-virtual)
 *     `MR::CopyInheritedMembers::C`
 *     `MR::CopyInheritedMembers::E`
 *     `MR::CopyInheritedMembers::F`
 *     `MR::CopyInheritedMembers::J`
 *   Ambiguous:
 *     `MR::CopyInheritedMembers::K`
 *     `MR::CopyInheritedMembers::L`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CopyInheritedMembers_A extends ffi.CppObject
{
    /**
     * Returns a pointer to a member variable of class `MR::CopyInheritedMembers::A` named `StaticField`.
     *
     * Calls `MR_CopyInheritedMembers_A_Get_StaticField()`.
     */
    static StaticField: number;
    /**
     * Returns a pointer to a member variable of class `MR::CopyInheritedMembers::A` named `Field`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CopyInheritedMembers_A_Get_Field()`.
     */
    Field: number;
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CopyInheritedMembers_A_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs `MR::CopyInheritedMembers::A` elementwise.
     * The reference to the parameter `Field` might be preserved in the constructed object.
     *
     * Calls `MR_CopyInheritedMembers_A_ConstructFrom()`.
     */
    constructor(Field: number);
    /**
     * Generated from constructor `MR::CopyInheritedMembers::A::A`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CopyInheritedMembers_A_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CopyInheritedMembers_A);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CopyInheritedMembers::A::StaticFunc`.
     *
     * Calls `MR_CopyInheritedMembers_A_StaticFunc()`.
     */
    static StaticFunc(): void;
    /**
     * Generated from conversion operator `MR::CopyInheritedMembers::A::operator int32_t`.
     *
     * Calls `MR_CopyInheritedMembers_A_ConvertTo_int32_t()`.
     */
    convertTo_int32_t(): number;
    /**
     * Generated from method `MR::CopyInheritedMembers::A::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CopyInheritedMembers_A_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CopyInheritedMembers_A): L.MR_CopyInheritedMembers_A;
    /**
     * Generated from method `MR::CopyInheritedMembers::A::Method`.
     *
     * Calls `MR_CopyInheritedMembers_A_Method()`.
     */
    Method(): void;
}

/**
 * Generated from class `MR::CopyInheritedMembers::B`.
 * Derived classes:
 *   Direct: (non-virtual)
 *     `MR::CopyInheritedMembers::C`
 *     `MR::CopyInheritedMembers::D`
 *   Indirect: (non-virtual)
 *     `MR::CopyInheritedMembers::E`
 *     `MR::CopyInheritedMembers::F`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CopyInheritedMembers_B extends ffi.CppObject
{
    /**
     * Returns a pointer to a member variable of class `MR::CopyInheritedMembers::B` named `StaticField`.
     *
     * Calls `MR_CopyInheritedMembers_B_Get_StaticField()`.
     */
    static StaticField: number;
    /**
     * Returns a pointer to a member variable of class `MR::CopyInheritedMembers::B` named `Field`.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_CopyInheritedMembers_B_Get_Field()`.
     */
    Field: number;
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CopyInheritedMembers_B_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs `MR::CopyInheritedMembers::B` elementwise.
     * The reference to the parameter `Field` might be preserved in the constructed object.
     *
     * Calls `MR_CopyInheritedMembers_B_ConstructFrom()`.
     */
    constructor(Field: number);
    /**
     * Generated from constructor `MR::CopyInheritedMembers::B::B`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CopyInheritedMembers_B_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CopyInheritedMembers_B);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CopyInheritedMembers::B::StaticFunc`.
     *
     * Calls `MR_CopyInheritedMembers_B_StaticFunc()`.
     */
    static StaticFunc(): void;
    /**
     * Generated from conversion operator `MR::CopyInheritedMembers::B::operator int32_t`.
     *
     * Calls `MR_CopyInheritedMembers_B_ConvertTo_int32_t()`.
     */
    convertTo_int32_t(): number;
    /**
     * Generated from method `MR::CopyInheritedMembers::B::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CopyInheritedMembers_B_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CopyInheritedMembers_B): L.MR_CopyInheritedMembers_B;
    /**
     * Generated from method `MR::CopyInheritedMembers::B::Method`.
     *
     * Calls `MR_CopyInheritedMembers_B_Method()`.
     */
    Method(): void;
}

/**
 * Generated from class `MR::CopyInheritedMembers::C`.
 * Base classes:
 *   Direct: (non-virtual)
 *     `MR::CopyInheritedMembers::A`
 *     `MR::CopyInheritedMembers::B`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CopyInheritedMembers_C extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CopyInheritedMembers_C_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CopyInheritedMembers::C::C`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CopyInheritedMembers_C_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CopyInheritedMembers_C);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CopyInheritedMembers::C::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CopyInheritedMembers_C_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CopyInheritedMembers_C): L.MR_CopyInheritedMembers_C;
    /** Upcasts to the base class `MR::CopyInheritedMembers::A`. The result refers to this object.
     *
     * Calls `MR_CopyInheritedMembers_C_MutableUpcastTo_MR_CopyInheritedMembers_A()`. */
    upcastToA(): L.MR_CopyInheritedMembers_A;
    /** Static downcast from the base class `MR::CopyInheritedMembers::A`. Undefined behavior if the object isn't actually a `C`. The result refers to `object`.
     *
     * Calls `MR_CopyInheritedMembers_C_MutableStaticDowncastFrom_MR_CopyInheritedMembers_A()`. */
    static staticDowncastFromA(object: L.MR_CopyInheritedMembers_A): L.MR_CopyInheritedMembers_C;
    /** Upcasts to the base class `MR::CopyInheritedMembers::B`. The result refers to this object.
     *
     * Calls `MR_CopyInheritedMembers_C_MutableUpcastTo_MR_CopyInheritedMembers_B()`. */
    upcastToB(): L.MR_CopyInheritedMembers_B;
    /** Static downcast from the base class `MR::CopyInheritedMembers::B`. Undefined behavior if the object isn't actually a `C`. The result refers to `object`.
     *
     * Calls `MR_CopyInheritedMembers_C_MutableStaticDowncastFrom_MR_CopyInheritedMembers_B()`. */
    static staticDowncastFromB(object: L.MR_CopyInheritedMembers_B): L.MR_CopyInheritedMembers_C;
}

/**
 * Generated from class `MR::CopyInheritedMembers::D`.
 * Base classes:
 *   Direct: (non-virtual)
 *     `MR::CopyInheritedMembers::B`
 * Derived classes:
 *   Direct: (non-virtual)
 *     `MR::CopyInheritedMembers::E`
 *     `MR::CopyInheritedMembers::F`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CopyInheritedMembers_D extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CopyInheritedMembers_D_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CopyInheritedMembers::D::D`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CopyInheritedMembers_D_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CopyInheritedMembers_D);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CopyInheritedMembers::D::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CopyInheritedMembers_D_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CopyInheritedMembers_D): L.MR_CopyInheritedMembers_D;
    /** Upcasts to the base class `MR::CopyInheritedMembers::B`. The result refers to this object.
     *
     * Calls `MR_CopyInheritedMembers_D_MutableUpcastTo_MR_CopyInheritedMembers_B()`. */
    upcastToB(): L.MR_CopyInheritedMembers_B;
    /** Static downcast from the base class `MR::CopyInheritedMembers::B`. Undefined behavior if the object isn't actually a `D`. The result refers to `object`.
     *
     * Calls `MR_CopyInheritedMembers_D_MutableStaticDowncastFrom_MR_CopyInheritedMembers_B()`. */
    static staticDowncastFromB(object: L.MR_CopyInheritedMembers_B): L.MR_CopyInheritedMembers_D;
}

/**
 * Generated from class `MR::CopyInheritedMembers::E`.
 * Base classes:
 *   Direct: (non-virtual)
 *     `MR::CopyInheritedMembers::A`
 *     `MR::CopyInheritedMembers::D`
 *   Indirect: (non-virtual)
 *     `MR::CopyInheritedMembers::B`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CopyInheritedMembers_E extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CopyInheritedMembers_E_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CopyInheritedMembers::E::E`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CopyInheritedMembers_E_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CopyInheritedMembers_E);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CopyInheritedMembers::E::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CopyInheritedMembers_E_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CopyInheritedMembers_E): L.MR_CopyInheritedMembers_E;
    /** Upcasts to the base class `MR::CopyInheritedMembers::A`. The result refers to this object.
     *
     * Calls `MR_CopyInheritedMembers_E_MutableUpcastTo_MR_CopyInheritedMembers_A()`. */
    upcastToA(): L.MR_CopyInheritedMembers_A;
    /** Static downcast from the base class `MR::CopyInheritedMembers::A`. Undefined behavior if the object isn't actually a `E`. The result refers to `object`.
     *
     * Calls `MR_CopyInheritedMembers_E_MutableStaticDowncastFrom_MR_CopyInheritedMembers_A()`. */
    static staticDowncastFromA(object: L.MR_CopyInheritedMembers_A): L.MR_CopyInheritedMembers_E;
    /** Upcasts to the base class `MR::CopyInheritedMembers::B`. The result refers to this object.
     *
     * Calls `MR_CopyInheritedMembers_E_MutableUpcastTo_MR_CopyInheritedMembers_B()`. */
    upcastToB(): L.MR_CopyInheritedMembers_B;
    /** Static downcast from the base class `MR::CopyInheritedMembers::B`. Undefined behavior if the object isn't actually a `E`. The result refers to `object`.
     *
     * Calls `MR_CopyInheritedMembers_E_MutableStaticDowncastFrom_MR_CopyInheritedMembers_B()`. */
    static staticDowncastFromB(object: L.MR_CopyInheritedMembers_B): L.MR_CopyInheritedMembers_E;
    /** Upcasts to the base class `MR::CopyInheritedMembers::D`. The result refers to this object.
     *
     * Calls `MR_CopyInheritedMembers_E_MutableUpcastTo_MR_CopyInheritedMembers_D()`. */
    upcastToD(): L.MR_CopyInheritedMembers_D;
    /** Static downcast from the base class `MR::CopyInheritedMembers::D`. Undefined behavior if the object isn't actually a `E`. The result refers to `object`.
     *
     * Calls `MR_CopyInheritedMembers_E_MutableStaticDowncastFrom_MR_CopyInheritedMembers_D()`. */
    static staticDowncastFromD(object: L.MR_CopyInheritedMembers_D): L.MR_CopyInheritedMembers_E;
}

/**
 * Generated from class `MR::CopyInheritedMembers::F`.
 * Base classes:
 *   Direct: (non-virtual)
 *     `MR::CopyInheritedMembers::D`
 *     `MR::CopyInheritedMembers::A`
 *   Indirect: (non-virtual)
 *     `MR::CopyInheritedMembers::B`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CopyInheritedMembers_F extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CopyInheritedMembers_F_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CopyInheritedMembers::F::F`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CopyInheritedMembers_F_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CopyInheritedMembers_F);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CopyInheritedMembers::F::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CopyInheritedMembers_F_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CopyInheritedMembers_F): L.MR_CopyInheritedMembers_F;
    /** Upcasts to the base class `MR::CopyInheritedMembers::B`. The result refers to this object.
     *
     * Calls `MR_CopyInheritedMembers_F_MutableUpcastTo_MR_CopyInheritedMembers_B()`. */
    upcastToB(): L.MR_CopyInheritedMembers_B;
    /** Static downcast from the base class `MR::CopyInheritedMembers::B`. Undefined behavior if the object isn't actually a `F`. The result refers to `object`.
     *
     * Calls `MR_CopyInheritedMembers_F_MutableStaticDowncastFrom_MR_CopyInheritedMembers_B()`. */
    static staticDowncastFromB(object: L.MR_CopyInheritedMembers_B): L.MR_CopyInheritedMembers_F;
    /** Upcasts to the base class `MR::CopyInheritedMembers::D`. The result refers to this object.
     *
     * Calls `MR_CopyInheritedMembers_F_MutableUpcastTo_MR_CopyInheritedMembers_D()`. */
    upcastToD(): L.MR_CopyInheritedMembers_D;
    /** Static downcast from the base class `MR::CopyInheritedMembers::D`. Undefined behavior if the object isn't actually a `F`. The result refers to `object`.
     *
     * Calls `MR_CopyInheritedMembers_F_MutableStaticDowncastFrom_MR_CopyInheritedMembers_D()`. */
    static staticDowncastFromD(object: L.MR_CopyInheritedMembers_D): L.MR_CopyInheritedMembers_F;
    /** Upcasts to the base class `MR::CopyInheritedMembers::A`. The result refers to this object.
     *
     * Calls `MR_CopyInheritedMembers_F_MutableUpcastTo_MR_CopyInheritedMembers_A()`. */
    upcastToA(): L.MR_CopyInheritedMembers_A;
    /** Static downcast from the base class `MR::CopyInheritedMembers::A`. Undefined behavior if the object isn't actually a `F`. The result refers to `object`.
     *
     * Calls `MR_CopyInheritedMembers_F_MutableStaticDowncastFrom_MR_CopyInheritedMembers_A()`. */
    static staticDowncastFromA(object: L.MR_CopyInheritedMembers_A): L.MR_CopyInheritedMembers_F;
}

/**
 * Generated from class `MR::CopyInheritedMembers::G`.
 * Base classes:
 *   Virtual:
 *     `MR::CopyInheritedMembers::A`
 * Derived classes:
 *   Direct: (non-virtual)
 *     `MR::CopyInheritedMembers::H`
 *     `MR::CopyInheritedMembers::I`
 *     `MR::CopyInheritedMembers::K`
 *     `MR::CopyInheritedMembers::L`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CopyInheritedMembers_G extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CopyInheritedMembers_G_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CopyInheritedMembers::G::G`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CopyInheritedMembers_G_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CopyInheritedMembers_G);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CopyInheritedMembers::G::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CopyInheritedMembers_G_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CopyInheritedMembers_G): L.MR_CopyInheritedMembers_G;
    /** Upcasts to the base class `MR::CopyInheritedMembers::A`. The result refers to this object.
     *
     * Calls `MR_CopyInheritedMembers_G_MutableUpcastTo_MR_CopyInheritedMembers_A()`. */
    upcastToA(): L.MR_CopyInheritedMembers_A;
}

/**
 * Generated from class `MR::CopyInheritedMembers::H`.
 * Base classes:
 *   Virtual:
 *     `MR::CopyInheritedMembers::A`
 *   Direct: (non-virtual)
 *     `MR::CopyInheritedMembers::G`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CopyInheritedMembers_H extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CopyInheritedMembers_H_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CopyInheritedMembers::H::H`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CopyInheritedMembers_H_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CopyInheritedMembers_H);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CopyInheritedMembers::H::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CopyInheritedMembers_H_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CopyInheritedMembers_H): L.MR_CopyInheritedMembers_H;
    /** Upcasts to the base class `MR::CopyInheritedMembers::A`. The result refers to this object.
     *
     * Calls `MR_CopyInheritedMembers_H_MutableUpcastTo_MR_CopyInheritedMembers_A()`. */
    upcastToA(): L.MR_CopyInheritedMembers_A;
    /** Upcasts to the base class `MR::CopyInheritedMembers::G`. The result refers to this object.
     *
     * Calls `MR_CopyInheritedMembers_H_MutableUpcastTo_MR_CopyInheritedMembers_G()`. */
    upcastToG(): L.MR_CopyInheritedMembers_G;
    /** Static downcast from the base class `MR::CopyInheritedMembers::G`. Undefined behavior if the object isn't actually a `H`. The result refers to `object`.
     *
     * Calls `MR_CopyInheritedMembers_H_MutableStaticDowncastFrom_MR_CopyInheritedMembers_G()`. */
    static staticDowncastFromG(object: L.MR_CopyInheritedMembers_G): L.MR_CopyInheritedMembers_H;
}

/**
 * Generated from class `MR::CopyInheritedMembers::I`.
 * Base classes:
 *   Virtual:
 *     `MR::CopyInheritedMembers::A`
 *   Direct: (non-virtual)
 *     `MR::CopyInheritedMembers::G`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CopyInheritedMembers_I extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CopyInheritedMembers_I_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CopyInheritedMembers::I::I`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CopyInheritedMembers_I_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CopyInheritedMembers_I);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CopyInheritedMembers::I::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CopyInheritedMembers_I_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CopyInheritedMembers_I): L.MR_CopyInheritedMembers_I;
    /** Upcasts to the base class `MR::CopyInheritedMembers::A`. The result refers to this object.
     *
     * Calls `MR_CopyInheritedMembers_I_MutableUpcastTo_MR_CopyInheritedMembers_A()`. */
    upcastToA(): L.MR_CopyInheritedMembers_A;
    /** Upcasts to the base class `MR::CopyInheritedMembers::G`. The result refers to this object.
     *
     * Calls `MR_CopyInheritedMembers_I_MutableUpcastTo_MR_CopyInheritedMembers_G()`. */
    upcastToG(): L.MR_CopyInheritedMembers_G;
    /** Static downcast from the base class `MR::CopyInheritedMembers::G`. Undefined behavior if the object isn't actually a `I`. The result refers to `object`.
     *
     * Calls `MR_CopyInheritedMembers_I_MutableStaticDowncastFrom_MR_CopyInheritedMembers_G()`. */
    static staticDowncastFromG(object: L.MR_CopyInheritedMembers_G): L.MR_CopyInheritedMembers_I;
}

/**
 * Generated from class `MR::CopyInheritedMembers::J`.
 * Base classes:
 *   Direct: (non-virtual)
 *     `MR::CopyInheritedMembers::A`
 * Derived classes:
 *   Virtual:
 *     `MR::CopyInheritedMembers::M`
 *     `MR::CopyInheritedMembers::N`
 *     `MR::CopyInheritedMembers::O`
 *   Direct: (non-virtual)
 *     `MR::CopyInheritedMembers::K`
 *     `MR::CopyInheritedMembers::L`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CopyInheritedMembers_J extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CopyInheritedMembers_J_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CopyInheritedMembers::J::J`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CopyInheritedMembers_J_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CopyInheritedMembers_J);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CopyInheritedMembers::J::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CopyInheritedMembers_J_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CopyInheritedMembers_J): L.MR_CopyInheritedMembers_J;
    /** Upcasts to the base class `MR::CopyInheritedMembers::A`. The result refers to this object.
     *
     * Calls `MR_CopyInheritedMembers_J_MutableUpcastTo_MR_CopyInheritedMembers_A()`. */
    upcastToA(): L.MR_CopyInheritedMembers_A;
    /** Static downcast from the base class `MR::CopyInheritedMembers::A`. Undefined behavior if the object isn't actually a `J`. The result refers to `object`.
     *
     * Calls `MR_CopyInheritedMembers_J_MutableStaticDowncastFrom_MR_CopyInheritedMembers_A()`. */
    static staticDowncastFromA(object: L.MR_CopyInheritedMembers_A): L.MR_CopyInheritedMembers_J;
}

/**
 * Generated from class `MR::CopyInheritedMembers::K`.
 * Base classes:
 *   Direct: (non-virtual)
 *     `MR::CopyInheritedMembers::G`
 *     `MR::CopyInheritedMembers::J`
 *   Ambiguous:
 *     `MR::CopyInheritedMembers::A`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CopyInheritedMembers_K extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CopyInheritedMembers_K_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CopyInheritedMembers::K::K`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CopyInheritedMembers_K_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CopyInheritedMembers_K);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CopyInheritedMembers::K::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CopyInheritedMembers_K_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CopyInheritedMembers_K): L.MR_CopyInheritedMembers_K;
}

/**
 * Generated from class `MR::CopyInheritedMembers::L`.
 * Base classes:
 *   Direct: (non-virtual)
 *     `MR::CopyInheritedMembers::J`
 *     `MR::CopyInheritedMembers::G`
 *   Ambiguous:
 *     `MR::CopyInheritedMembers::A`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CopyInheritedMembers_L extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CopyInheritedMembers_L_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CopyInheritedMembers::L::L`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CopyInheritedMembers_L_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CopyInheritedMembers_L);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CopyInheritedMembers::L::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CopyInheritedMembers_L_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CopyInheritedMembers_L): L.MR_CopyInheritedMembers_L;
}

/**
 * Now test that a non-virtual base of a virtual base gets treated as a virtual.
 * Generated from class `MR::CopyInheritedMembers::M`.
 * Base classes:
 *   Virtual:
 *     `MR::CopyInheritedMembers::J`
 *   Non-virtual along a virtual path:
 *     `MR::CopyInheritedMembers::A`
 * Derived classes:
 *   Direct: (non-virtual)
 *     `MR::CopyInheritedMembers::N`
 *   Indirect: (non-virtual)
 *     `MR::CopyInheritedMembers::O`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CopyInheritedMembers_M extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CopyInheritedMembers_M_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CopyInheritedMembers::M::M`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CopyInheritedMembers_M_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CopyInheritedMembers_M);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CopyInheritedMembers::M::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CopyInheritedMembers_M_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CopyInheritedMembers_M): L.MR_CopyInheritedMembers_M;
    /** Upcasts to the base class `MR::CopyInheritedMembers::A`. The result refers to this object.
     *
     * Calls `MR_CopyInheritedMembers_M_MutableUpcastTo_MR_CopyInheritedMembers_A()`. */
    upcastToA(): L.MR_CopyInheritedMembers_A;
    /** Upcasts to the base class `MR::CopyInheritedMembers::J`. The result refers to this object.
     *
     * Calls `MR_CopyInheritedMembers_M_MutableUpcastTo_MR_CopyInheritedMembers_J()`. */
    upcastToJ(): L.MR_CopyInheritedMembers_J;
}

/**
 * Generated from class `MR::CopyInheritedMembers::N`.
 * Base classes:
 *   Virtual:
 *     `MR::CopyInheritedMembers::J`
 *   Non-virtual along a virtual path:
 *     `MR::CopyInheritedMembers::A`
 *   Direct: (non-virtual)
 *     `MR::CopyInheritedMembers::M`
 * Derived classes:
 *   Direct: (non-virtual)
 *     `MR::CopyInheritedMembers::O`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CopyInheritedMembers_N extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CopyInheritedMembers_N_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CopyInheritedMembers::N::N`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CopyInheritedMembers_N_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CopyInheritedMembers_N);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CopyInheritedMembers::N::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CopyInheritedMembers_N_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CopyInheritedMembers_N): L.MR_CopyInheritedMembers_N;
    /** Upcasts to the base class `MR::CopyInheritedMembers::A`. The result refers to this object.
     *
     * Calls `MR_CopyInheritedMembers_N_MutableUpcastTo_MR_CopyInheritedMembers_A()`. */
    upcastToA(): L.MR_CopyInheritedMembers_A;
    /** Upcasts to the base class `MR::CopyInheritedMembers::J`. The result refers to this object.
     *
     * Calls `MR_CopyInheritedMembers_N_MutableUpcastTo_MR_CopyInheritedMembers_J()`. */
    upcastToJ(): L.MR_CopyInheritedMembers_J;
    /** Upcasts to the base class `MR::CopyInheritedMembers::M`. The result refers to this object.
     *
     * Calls `MR_CopyInheritedMembers_N_MutableUpcastTo_MR_CopyInheritedMembers_M()`. */
    upcastToM(): L.MR_CopyInheritedMembers_M;
    /** Static downcast from the base class `MR::CopyInheritedMembers::M`. Undefined behavior if the object isn't actually a `N`. The result refers to `object`.
     *
     * Calls `MR_CopyInheritedMembers_N_MutableStaticDowncastFrom_MR_CopyInheritedMembers_M()`. */
    static staticDowncastFromM(object: L.MR_CopyInheritedMembers_M): L.MR_CopyInheritedMembers_N;
}

/**
 * Generated from class `MR::CopyInheritedMembers::O`.
 * Base classes:
 *   Virtual:
 *     `MR::CopyInheritedMembers::J`
 *   Non-virtual along a virtual path:
 *     `MR::CopyInheritedMembers::A`
 *   Direct: (non-virtual)
 *     `MR::CopyInheritedMembers::N`
 *   Indirect: (non-virtual)
 *     `MR::CopyInheritedMembers::M`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_CopyInheritedMembers_O extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_CopyInheritedMembers_O_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::CopyInheritedMembers::O::O`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_CopyInheritedMembers_O_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_CopyInheritedMembers_O);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::CopyInheritedMembers::O::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_CopyInheritedMembers_O_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_CopyInheritedMembers_O): L.MR_CopyInheritedMembers_O;
    /** Upcasts to the base class `MR::CopyInheritedMembers::A`. The result refers to this object.
     *
     * Calls `MR_CopyInheritedMembers_O_MutableUpcastTo_MR_CopyInheritedMembers_A()`. */
    upcastToA(): L.MR_CopyInheritedMembers_A;
    /** Upcasts to the base class `MR::CopyInheritedMembers::J`. The result refers to this object.
     *
     * Calls `MR_CopyInheritedMembers_O_MutableUpcastTo_MR_CopyInheritedMembers_J()`. */
    upcastToJ(): L.MR_CopyInheritedMembers_J;
    /** Upcasts to the base class `MR::CopyInheritedMembers::M`. The result refers to this object.
     *
     * Calls `MR_CopyInheritedMembers_O_MutableUpcastTo_MR_CopyInheritedMembers_M()`. */
    upcastToM(): L.MR_CopyInheritedMembers_M;
    /** Static downcast from the base class `MR::CopyInheritedMembers::M`. Undefined behavior if the object isn't actually a `O`. The result refers to `object`.
     *
     * Calls `MR_CopyInheritedMembers_O_MutableStaticDowncastFrom_MR_CopyInheritedMembers_M()`. */
    static staticDowncastFromM(object: L.MR_CopyInheritedMembers_M): L.MR_CopyInheritedMembers_O;
    /** Upcasts to the base class `MR::CopyInheritedMembers::N`. The result refers to this object.
     *
     * Calls `MR_CopyInheritedMembers_O_MutableUpcastTo_MR_CopyInheritedMembers_N()`. */
    upcastToN(): L.MR_CopyInheritedMembers_N;
    /** Static downcast from the base class `MR::CopyInheritedMembers::N`. Undefined behavior if the object isn't actually a `O`. The result refers to `object`.
     *
     * Calls `MR_CopyInheritedMembers_O_MutableStaticDowncastFrom_MR_CopyInheritedMembers_N()`. */
    static staticDowncastFromN(object: L.MR_CopyInheritedMembers_N): L.MR_CopyInheritedMembers_O;
}

