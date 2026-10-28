// The wrappers of the C bindings file `MR/test_abstract_classes`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * Generated from class `MR::AbstractClasses::A`.
 *
 * Can't be created from JS, only references to it are used (`new X(ffi.RAW, pointer, false, owner)`).
 */
export declare class MR_AbstractClasses_A extends ffi.CppObject
{
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::AbstractClasses::A::foo`.
     *
     * Calls `MR_AbstractClasses_A_foo()`.
     */
    foo(): void;
}

/**
 * Generated from class `MR::AbstractClasses::B`.
 * Derived classes:
 *   Direct: (non-virtual)
 *     `MR::AbstractClasses::C`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_AbstractClasses_B extends ffi.CppObject
{
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::AbstractClasses::B::foo`.
     *
     * Calls `MR_AbstractClasses_B_foo()`.
     */
    foo(): void;
}

/**
 * Generated from class `MR::AbstractClasses::C`.
 * Base classes:
 *   Direct: (non-virtual)
 *     `MR::AbstractClasses::B`
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_AbstractClasses_C extends ffi.CppObject
{
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /** Upcasts to the base class `MR::AbstractClasses::B`. The result refers to this object.
     *
     * Calls `MR_AbstractClasses_C_MutableUpcastTo_MR_AbstractClasses_B()`. */
    upcastToB(): L.MR_AbstractClasses_B;
    /** Static downcast from the base class `MR::AbstractClasses::B`. Undefined behavior if the object isn't actually a `C`. The result refers to `object`.
     *
     * Calls `MR_AbstractClasses_C_MutableStaticDowncastFrom_MR_AbstractClasses_B()`. */
    static staticDowncastFromB(object: L.MR_AbstractClasses_B): L.MR_AbstractClasses_C;
    /** Dynamic downcast from the base class `MR::AbstractClasses::B`. Returns null if the object isn't actually a `C`. The result refers to `object`.
     *
     * Calls `MR_AbstractClasses_C_MutableDynamicDowncastFrom_MR_AbstractClasses_B()`. */
    static dynamicDowncastFromB(object: L.MR_AbstractClasses_B): L.MR_AbstractClasses_C | null;
}

