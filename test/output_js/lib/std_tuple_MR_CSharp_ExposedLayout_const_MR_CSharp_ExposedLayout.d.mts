// The wrappers of the C bindings file `std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Stores 2 objects: `MR::CSharp::ExposedLayout`, `const MR::CSharp::ExposedLayout`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_DefaultConstruct()`.
     */
    constructor();
    /**
     * Constructs a copy of another instance. The source remains alive.
     * The reference to the parameter `other` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_ConstructFromAnother()`.
     */
    constructor(other: L.MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout);
    /**
     * Constructs the tuple elementwise.
     * The reference to the parameter `_0` might be preserved in the constructed object.
     * The reference to the parameter `_1` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_Construct()`.
     */
    constructor(_0: L.MR_CSharp_ExposedLayout, _1: L.MR_CSharp_ExposedLayout);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * The element 0, of type `MR::CSharp::ExposedLayout`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_get_MR_CSharp_ExposedLayout()`.
     */
    get_MR_CSharp_ExposedLayout(): L.MR_CSharp_ExposedLayout;
    /**
     * The element 0, of type `MR::CSharp::ExposedLayout`, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_get_MR_CSharp_ExposedLayout_mut()`.
     */
    get_MR_CSharp_ExposedLayout_mut(): L.MR_CSharp_ExposedLayout;
    /**
     * The element 1, of type `const MR::CSharp::ExposedLayout`, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_get_const_MR_CSharp_ExposedLayout()`.
     */
    get_const_MR_CSharp_ExposedLayout(): L.MR_CSharp_ExposedLayout;
}

