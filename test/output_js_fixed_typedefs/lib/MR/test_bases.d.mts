// The wrappers of the C bindings file `MR/test_bases`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Generated from class `MR::Bases::A`.
 * Derived classes:
 *   Virtual:
 *     `MR::Bases::I`
 *   Direct: (non-virtual)
 *     `MR::Bases::B`
 *     `MR::Bases::C`
 *     `MR::Bases::H`
 *   Indirect: (non-virtual)
 *     `MR::Bases::B2`
 *   Ambiguous:
 *     `MR::Bases::D`
 *     `MR::Bases::D2`
 *     `MR::Bases::D3`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_Bases_A extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_Bases_A_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::Bases::A::A`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_Bases_A_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_Bases_A);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::Bases::A::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_Bases_A_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_Bases_A): L.MR_Bases_A;
}

/**
 * Generated from class `MR::Bases::B`.
 * Base classes:
 *   Direct: (non-virtual)
 *     `MR::Bases::A`
 * Derived classes:
 *   Direct: (non-virtual)
 *     `MR::Bases::B2`
 *     `MR::Bases::D`
 *     `MR::Bases::D2`
 *     `MR::Bases::D3`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_Bases_B extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_Bases_B_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::Bases::B::B`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_Bases_B_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_Bases_B);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::Bases::B::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_Bases_B_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_Bases_B): L.MR_Bases_B;
    /** Upcasts to the base class `MR::Bases::A`. The result refers to this object.
     *
     * Calls `MR_Bases_B_MutableUpcastTo_MR_Bases_A()`. */
    upcastToA(): L.MR_Bases_A;
    /** Static downcast from the base class `MR::Bases::A`. Undefined behavior if the object isn't actually a `B`. The result refers to `object`.
     *
     * Calls `MR_Bases_B_MutableStaticDowncastFrom_MR_Bases_A()`. */
    static staticDowncastFromA(object: L.MR_Bases_A): L.MR_Bases_B;
}

/**
 * Generated from class `MR::Bases::B2`.
 * Base classes:
 *   Direct: (non-virtual)
 *     `MR::Bases::B`
 *   Indirect: (non-virtual)
 *     `MR::Bases::A`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_Bases_B2 extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_Bases_B2_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::Bases::B2::B2`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_Bases_B2_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_Bases_B2);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::Bases::B2::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_Bases_B2_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_Bases_B2): L.MR_Bases_B2;
    /** Upcasts to the base class `MR::Bases::A`. The result refers to this object.
     *
     * Calls `MR_Bases_B2_MutableUpcastTo_MR_Bases_A()`. */
    upcastToA(): L.MR_Bases_A;
    /** Static downcast from the base class `MR::Bases::A`. Undefined behavior if the object isn't actually a `B2`. The result refers to `object`.
     *
     * Calls `MR_Bases_B2_MutableStaticDowncastFrom_MR_Bases_A()`. */
    static staticDowncastFromA(object: L.MR_Bases_A): L.MR_Bases_B2;
    /** Upcasts to the base class `MR::Bases::B`. The result refers to this object.
     *
     * Calls `MR_Bases_B2_MutableUpcastTo_MR_Bases_B()`. */
    upcastToB(): L.MR_Bases_B;
    /** Static downcast from the base class `MR::Bases::B`. Undefined behavior if the object isn't actually a `B2`. The result refers to `object`.
     *
     * Calls `MR_Bases_B2_MutableStaticDowncastFrom_MR_Bases_B()`. */
    static staticDowncastFromB(object: L.MR_Bases_B): L.MR_Bases_B2;
}

/**
 * Generated from class `MR::Bases::C`.
 * Base classes:
 *   Direct: (non-virtual)
 *     `MR::Bases::A`
 * Derived classes:
 *   Direct: (non-virtual)
 *     `MR::Bases::D`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_Bases_C extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_Bases_C_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::Bases::C::C`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_Bases_C_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_Bases_C);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::Bases::C::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_Bases_C_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_Bases_C): L.MR_Bases_C;
    /** Upcasts to the base class `MR::Bases::A`. The result refers to this object.
     *
     * Calls `MR_Bases_C_MutableUpcastTo_MR_Bases_A()`. */
    upcastToA(): L.MR_Bases_A;
    /** Static downcast from the base class `MR::Bases::A`. Undefined behavior if the object isn't actually a `C`. The result refers to `object`.
     *
     * Calls `MR_Bases_C_MutableStaticDowncastFrom_MR_Bases_A()`. */
    static staticDowncastFromA(object: L.MR_Bases_A): L.MR_Bases_C;
}

/**
 * Generated from class `MR::Bases::D`.
 * Base classes:
 *   Direct: (non-virtual)
 *     `MR::Bases::B`
 *     `MR::Bases::C`
 *   Ambiguous:
 *     `MR::Bases::A`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_Bases_D extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_Bases_D_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::Bases::D::D`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_Bases_D_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_Bases_D);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::Bases::D::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_Bases_D_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_Bases_D): L.MR_Bases_D;
}

/**
 * Generated from class `MR::Bases::D2`.
 * Base classes:
 *   Direct: (non-virtual)
 *     `MR::Bases::B`
 *   Ambiguous:
 *     `MR::Bases::A`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_Bases_D2 extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_Bases_D2_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::Bases::D2::D2`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_Bases_D2_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_Bases_D2);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::Bases::D2::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_Bases_D2_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_Bases_D2): L.MR_Bases_D2;
}

/**
 * Generated from class `MR::Bases::D3`.
 * Base classes:
 *   Direct: (non-virtual)
 *     `MR::Bases::B`
 *   Ambiguous:
 *     `MR::Bases::A`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_Bases_D3 extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_Bases_D3_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::Bases::D3::D3`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_Bases_D3_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_Bases_D3);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::Bases::D3::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_Bases_D3_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_Bases_D3): L.MR_Bases_D3;
}

/**
 * Generated from class `MR::Bases::E`.
 * Derived classes:
 *   Non-virtual along a virtual path:
 *     `MR::Bases::G`
 *     `MR::Bases::H`
 *     `MR::Bases::I`
 *   Direct: (non-virtual)
 *     `MR::Bases::F`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_Bases_E extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_Bases_E_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::Bases::E::E`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_Bases_E_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_Bases_E);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::Bases::E::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_Bases_E_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_Bases_E): L.MR_Bases_E;
}

/**
 * Generated from class `MR::Bases::F`.
 * Base classes:
 *   Direct: (non-virtual)
 *     `MR::Bases::E`
 * Derived classes:
 *   Virtual:
 *     `MR::Bases::G`
 *     `MR::Bases::H`
 *     `MR::Bases::I`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_Bases_F extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_Bases_F_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::Bases::F::F`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_Bases_F_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_Bases_F);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::Bases::F::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_Bases_F_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_Bases_F): L.MR_Bases_F;
    /** Upcasts to the base class `MR::Bases::E`. The result refers to this object.
     *
     * Calls `MR_Bases_F_MutableUpcastTo_MR_Bases_E()`. */
    upcastToE(): L.MR_Bases_E;
    /** Static downcast from the base class `MR::Bases::E`. Undefined behavior if the object isn't actually a `F`. The result refers to `object`.
     *
     * Calls `MR_Bases_F_MutableStaticDowncastFrom_MR_Bases_E()`. */
    static staticDowncastFromE(object: L.MR_Bases_E): L.MR_Bases_F;
}

/**
 * Generated from class `MR::Bases::G`.
 * Base classes:
 *   Virtual:
 *     `MR::Bases::F`
 *   Non-virtual along a virtual path:
 *     `MR::Bases::E`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_Bases_G extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_Bases_G_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::Bases::G::G`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_Bases_G_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_Bases_G);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::Bases::G::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_Bases_G_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_Bases_G): L.MR_Bases_G;
    /** Upcasts to the base class `MR::Bases::E`. The result refers to this object.
     *
     * Calls `MR_Bases_G_MutableUpcastTo_MR_Bases_E()`. */
    upcastToE(): L.MR_Bases_E;
    /** Upcasts to the base class `MR::Bases::F`. The result refers to this object.
     *
     * Calls `MR_Bases_G_MutableUpcastTo_MR_Bases_F()`. */
    upcastToF(): L.MR_Bases_F;
}

/**
 * Generated from class `MR::Bases::H`.
 * Base classes:
 *   Virtual:
 *     `MR::Bases::F`
 *   Non-virtual along a virtual path:
 *     `MR::Bases::E`
 *   Direct: (non-virtual)
 *     `MR::Bases::A`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_Bases_H extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_Bases_H_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::Bases::H::H`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_Bases_H_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_Bases_H);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::Bases::H::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_Bases_H_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_Bases_H): L.MR_Bases_H;
    /** Upcasts to the base class `MR::Bases::E`. The result refers to this object.
     *
     * Calls `MR_Bases_H_MutableUpcastTo_MR_Bases_E()`. */
    upcastToE(): L.MR_Bases_E;
    /** Upcasts to the base class `MR::Bases::F`. The result refers to this object.
     *
     * Calls `MR_Bases_H_MutableUpcastTo_MR_Bases_F()`. */
    upcastToF(): L.MR_Bases_F;
    /** Upcasts to the base class `MR::Bases::A`. The result refers to this object.
     *
     * Calls `MR_Bases_H_MutableUpcastTo_MR_Bases_A()`. */
    upcastToA(): L.MR_Bases_A;
    /** Static downcast from the base class `MR::Bases::A`. Undefined behavior if the object isn't actually a `H`. The result refers to `object`.
     *
     * Calls `MR_Bases_H_MutableStaticDowncastFrom_MR_Bases_A()`. */
    static staticDowncastFromA(object: L.MR_Bases_A): L.MR_Bases_H;
}

/**
 * Generated from class `MR::Bases::I`.
 * Base classes:
 *   Virtual:
 *     `MR::Bases::F`
 *     `MR::Bases::A`
 *   Non-virtual along a virtual path:
 *     `MR::Bases::E`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_Bases_I extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_Bases_I_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::Bases::I::I`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_Bases_I_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_Bases_I);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::Bases::I::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_Bases_I_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_Bases_I): L.MR_Bases_I;
    /** Upcasts to the base class `MR::Bases::E`. The result refers to this object.
     *
     * Calls `MR_Bases_I_MutableUpcastTo_MR_Bases_E()`. */
    upcastToE(): L.MR_Bases_E;
    /** Upcasts to the base class `MR::Bases::F`. The result refers to this object.
     *
     * Calls `MR_Bases_I_MutableUpcastTo_MR_Bases_F()`. */
    upcastToF(): L.MR_Bases_F;
    /** Upcasts to the base class `MR::Bases::A`. The result refers to this object.
     *
     * Calls `MR_Bases_I_MutableUpcastTo_MR_Bases_A()`. */
    upcastToA(): L.MR_Bases_A;
}

