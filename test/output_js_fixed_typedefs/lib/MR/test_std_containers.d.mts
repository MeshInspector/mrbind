// The wrappers of the C bindings file `MR/test_std_containers`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * `std::array` behaves differently with simple types.
 * Generated from class `MR::StdContainers::A`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_StdContainers_A extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_StdContainers_A_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::StdContainers::A::A`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_StdContainers_A_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_StdContainers_A);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::StdContainers::A::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_StdContainers_A_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_StdContainers_A): L.MR_StdContainers_A;
}

/**
 * A non-assignable type?
 * Generated from class `MR::StdContainers::NonAssignable`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_StdContainers_NonAssignable extends ffi.CppObject
{
    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_StdContainers_NonAssignable_DefaultConstruct()`.
     */
    constructor();
    /**
     * Generated from constructor `MR::StdContainers::NonAssignable::NonAssignable`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_StdContainers_NonAssignable_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_StdContainers_NonAssignable);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::StdContainers::NonAssignable::operator<`.
     *
     * Calls `MR_C_less_MR_StdContainers_NonAssignable()`.
     */
    opLess(_1: L.MR_StdContainers_NonAssignable): boolean;
    /**
     * Generated from method `MR::StdContainers::NonAssignable::operator==`.
     *
     * Calls `MR_C_equal_MR_StdContainers_NonAssignable()`.
     */
    opEqual(_1: L.MR_StdContainers_NonAssignable): boolean;
}

/**
 * Test vectors of a non-default-constructible type.
 * Generated from class `MR::StdContainers::NonDefaultConstructible`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export declare class MR_StdContainers_NonDefaultConstructible extends ffi.CppObject
{
    /**
     * Generated from constructor `MR::StdContainers::NonDefaultConstructible::NonDefaultConstructible`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
     *
     * Calls `MR_StdContainers_NonDefaultConstructible_ConstructFromAnother()`.
     */
    constructor(_other: L.MR_StdContainers_NonDefaultConstructible);
    /**
     * Generated from constructor `MR::StdContainers::NonDefaultConstructible::NonDefaultConstructible`.
     *
     * Calls `MR_StdContainers_NonDefaultConstructible_Construct()`.
     */
    constructor(_1: number);
    /** The overloads of `constructor` are resolved at runtime by the argument types: an exact parameter count wins, then the fewest parameters, then the declaration order. */
    /** Wraps an existing object: `new X(ffi.RAW, pointer, owned, owner)`. Not for normal use. */
    constructor(raw: typeof ffi.RAW, pointer: number, owned: boolean, owner: unknown);
    /**
     * Generated from method `MR::StdContainers::NonDefaultConstructible::operator=`.
     * The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
     *
     * Calls `MR_StdContainers_NonDefaultConstructible_AssignFromAnother()`.
     */
    assignFromAnother(_other: L.MR_StdContainers_NonDefaultConstructible): L.MR_StdContainers_NonDefaultConstructible;
}

/**
 * Generated from function `MR::StdContainers::Set`.
 *
 * Calls `MR_StdContainers_Set()`.
 */
export declare function MR_StdContainers_Set(_1: L.MR_C_std_vector_int32_t): void;

/**
 * Generated from function `MR::StdContainers::SetWithDefault`.
 *
 * Calls `MR_StdContainers_SetWithDefault()`. `_1` defaults to `{1, 2, 3}`.
 */
export declare function MR_StdContainers_SetWithDefault(_1?: L.MR_C_std_vector_int32_t | null): void;

/**
 * Generated from function `MR::StdContainers::Get`.
 *
 * Calls `MR_StdContainers_Get()`.
 */
export declare function MR_StdContainers_Get(): L.MR_C_std_vector_int32_t;

/**
 * Generated from function `MR::StdContainers::WriteToRef`.
 *
 * Calls `MR_StdContainers_WriteToRef()`.
 */
export declare function MR_StdContainers_WriteToRef(_1: L.MR_C_std_vector_int32_t): void;

/**
 * Generated from function `MR::StdContainers::WriteToPtr`.
 *
 * Calls `MR_StdContainers_WriteToPtr()`.
 */
export declare function MR_StdContainers_WriteToPtr(_1?: L.MR_C_std_vector_int32_t | null): void;

/**
 * Generated from function `MR::StdContainers::ConstRef`.
 *
 * Calls `MR_StdContainers_ConstRef()`.
 */
export declare function MR_StdContainers_ConstRef(_1: L.MR_C_std_vector_int32_t): void;

/**
 * Generated from function `MR::StdContainers::RvalueRef`.
 *
 * Calls `MR_StdContainers_RvalueRef()`.
 */
export declare function MR_StdContainers_RvalueRef(_1: L.MR_C_std_vector_int32_t): void;

/**
 * Generated from function `MR::StdContainers::ConstRvalueRef`.
 *
 * Calls `MR_StdContainers_ConstRvalueRef()`.
 */
export declare function MR_StdContainers_ConstRvalueRef(_1: L.MR_C_std_vector_int32_t): void;

/**
 * Just the list of other containers.
 * Generated from function `MR::StdContainers::GetDeque`.
 *
 * Calls `MR_StdContainers_GetDeque()`.
 */
export declare function MR_StdContainers_GetDeque(): L.MR_C_std_deque_int32_t;

/**
 * Generated from function `MR::StdContainers::GetList`.
 *
 * Calls `MR_StdContainers_GetList()`.
 */
export declare function MR_StdContainers_GetList(): L.MR_C_std_list_int32_t;

/**
 * Generated from function `MR::StdContainers::GetSet`.
 *
 * Calls `MR_StdContainers_GetSet()`.
 */
export declare function MR_StdContainers_GetSet(): L.MR_C_std_set_int32_t;

/**
 * Generated from function `MR::StdContainers::GetMultiSet`.
 *
 * Calls `MR_StdContainers_GetMultiSet()`.
 */
export declare function MR_StdContainers_GetMultiSet(): L.MR_C_std_multiset_int32_t;

/**
 * Generated from function `MR::StdContainers::GetUnorderedSet`.
 *
 * Calls `MR_StdContainers_GetUnorderedSet()`.
 */
export declare function MR_StdContainers_GetUnorderedSet(): L.MR_C_std_unordered_set_int32_t;

/**
 * Generated from function `MR::StdContainers::GetUnorderedMultiSet`.
 *
 * Calls `MR_StdContainers_GetUnorderedMultiSet()`.
 */
export declare function MR_StdContainers_GetUnorderedMultiSet(): L.MR_C_std_unordered_multiset_int32_t;

/**
 * Generated from function `MR::StdContainers::GetMap`.
 *
 * Calls `MR_StdContainers_GetMap()`.
 */
export declare function MR_StdContainers_GetMap(): L.MR_C_std_map_int32_t_float;

/**
 * Generated from function `MR::StdContainers::GetMultiMap`.
 *
 * Calls `MR_StdContainers_GetMultiMap()`.
 */
export declare function MR_StdContainers_GetMultiMap(): L.MR_C_std_multimap_int32_t_float;

/**
 * Generated from function `MR::StdContainers::GetUnorderedMap`.
 *
 * Calls `MR_StdContainers_GetUnorderedMap()`.
 */
export declare function MR_StdContainers_GetUnorderedMap(): L.MR_C_std_unordered_map_int32_t_float;

/**
 * Generated from function `MR::StdContainers::GetUnorderedMultiMap`.
 *
 * Calls `MR_StdContainers_GetUnorderedMultiMap()`.
 */
export declare function MR_StdContainers_GetUnorderedMultiMap(): L.MR_C_std_unordered_multimap_int32_t_float;

/**
 * Generated from function `MR::StdContainers::GetStdArray`.
 *
 * Calls `MR_StdContainers_GetStdArray()`.
 */
export declare function MR_StdContainers_GetStdArray(): L.MR_C_std_array_MR_StdContainers_A_42;

/**
 * Generated from function `MR::StdContainers::GetStdArraySimple`.
 *
 * Calls `MR_StdContainers_GetStdArraySimple()`.
 */
export declare function MR_StdContainers_GetStdArraySimple(): L.MR_C_std_array_int32_t_43;

/**
 * The custom simple array needs a bit more testing:
 * Generated from function `MR::StdContainers::StdArraySimpleParam`.
 *
 * Calls `MR_StdContainers_StdArraySimpleParam()`.
 */
export declare function MR_StdContainers_StdArraySimpleParam(_1: L.MR_C_std_array_int32_t_43): void;

/**
 * Generated from function `MR::StdContainers::StdArraySimplePtr`.
 *
 * Calls `MR_StdContainers_StdArraySimplePtr()`.
 */
export declare function MR_StdContainers_StdArraySimplePtr(param?: L.MR_C_std_array_int32_t_43 | null): L.MR_C_std_array_int32_t_43 | null;

/**
 * For this `std::multiset` specialization, mention all iterators so that they get merged.
 * Generated from function `MR::StdContainers::GetMultiSetWithMergedIters`.
 *
 * Calls `MR_StdContainers_GetMultiSetWithMergedIters()`.
 */
export declare function MR_StdContainers_GetMultiSetWithMergedIters(): L.MR_C_std_multiset_float;

/**
 * Generated from function `MR::StdContainers::GetMergedIter`.
 *
 * Calls `MR_StdContainers_GetMergedIter()`.
 */
export declare function MR_StdContainers_GetMergedIter(): L.MR_C_std_set_float_const_iterator;

/**
 * Generated from function `MR::StdContainers::GetMergedIterConst`.
 *
 * Calls `MR_StdContainers_GetMergedIterConst()`.
 */
export declare function MR_StdContainers_GetMergedIterConst(): L.MR_C_std_set_float_const_iterator;

/**
 * Generated from function `MR::StdContainers::NonDefCon`.
 *
 * Calls `MR_StdContainers_NonDefCon()`.
 */
export declare function MR_StdContainers_NonDefCon(): L.MR_C_std_vector_MR_StdContainers_NonDefaultConstructible;

/**
 * Generated from function `MR::StdContainers::GetVectorNA`.
 *
 * Calls `MR_StdContainers_GetVectorNA()`.
 */
export declare function MR_StdContainers_GetVectorNA(): L.MR_C_std_vector_MR_StdContainers_NonAssignable;

/**
 * Generated from function `MR::StdContainers::GetDequeNA`.
 *
 * Calls `MR_StdContainers_GetDequeNA()`.
 */
export declare function MR_StdContainers_GetDequeNA(): L.MR_C_std_deque_MR_StdContainers_NonAssignable;

/**
 * Generated from function `MR::StdContainers::GetListNA`.
 *
 * Calls `MR_StdContainers_GetListNA()`.
 */
export declare function MR_StdContainers_GetListNA(): L.MR_C_std_list_MR_StdContainers_NonAssignable;

/**
 * Generated from function `MR::StdContainers::GetSetNA`.
 *
 * Calls `MR_StdContainers_GetSetNA()`.
 */
export declare function MR_StdContainers_GetSetNA(): L.MR_C_std_set_MR_StdContainers_NonAssignable;

/**
 * Generated from function `MR::StdContainers::GetMultiSetNA`.
 *
 * Calls `MR_StdContainers_GetMultiSetNA()`.
 */
export declare function MR_StdContainers_GetMultiSetNA(): L.MR_C_std_multiset_MR_StdContainers_NonAssignable;

/**
 * Generated from function `MR::StdContainers::GetUnorderedSetNA`.
 *
 * Calls `MR_StdContainers_GetUnorderedSetNA()`.
 */
export declare function MR_StdContainers_GetUnorderedSetNA(): L.MR_C_std_unordered_set_MR_StdContainers_NonAssignable;

/**
 * Generated from function `MR::StdContainers::GetUnorderedMultiSetNA`.
 *
 * Calls `MR_StdContainers_GetUnorderedMultiSetNA()`.
 */
export declare function MR_StdContainers_GetUnorderedMultiSetNA(): L.MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable;

/**
 * Generated from function `MR::StdContainers::GetMapNA`.
 *
 * Calls `MR_StdContainers_GetMapNA()`.
 */
export declare function MR_StdContainers_GetMapNA(): L.MR_C_std_map_MR_StdContainers_NonAssignable_float;

/**
 * Generated from function `MR::StdContainers::GetMultiMapNA`.
 *
 * Calls `MR_StdContainers_GetMultiMapNA()`.
 */
export declare function MR_StdContainers_GetMultiMapNA(): L.MR_C_std_multimap_MR_StdContainers_NonAssignable_float;

/**
 * Generated from function `MR::StdContainers::GetUnorderedMapNA`.
 *
 * Calls `MR_StdContainers_GetUnorderedMapNA()`.
 */
export declare function MR_StdContainers_GetUnorderedMapNA(): L.MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float;

/**
 * Generated from function `MR::StdContainers::GetUnorderedMultiMapNA`.
 *
 * Calls `MR_StdContainers_GetUnorderedMultiMapNA()`.
 */
export declare function MR_StdContainers_GetUnorderedMultiMapNA(): L.MR_C_std_unordered_multimap_MR_StdContainers_NonAssignable_float;

/**
 * Generated from function `MR::StdContainers::GetStdArrayNA`.
 *
 * Calls `MR_StdContainers_GetStdArrayNA()`.
 */
export declare function MR_StdContainers_GetStdArrayNA(): L.MR_C_std_array_MR_StdContainers_NonAssignable_42;

/**
 * Fun stuff!
 * The type name is a bit weird for this, but at least it works.
 * Generated from function `MR::StdContainers::GetStdArrayOfPlainArray`.
 *
 * Calls `MR_StdContainers_GetStdArrayOfPlainArray()`.
 */
export declare function MR_StdContainers_GetStdArrayOfPlainArray(): L.MR_C_std_array_int32_t_array_4_array_3_5;

