// The wrappers of the C bindings file `MR/test_std_containers`.
import * as ffi from "../../ffi.mjs";
import * as L from "../../lib/_all.mjs";

/**
 * `std::array` behaves differently with simple types.
 * Generated from class `MR::StdContainers::A`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_StdContainers_A extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_StdContainers_A_Destroy(BigInt(ptr));}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_StdContainers_A_DefaultConstruct();
        ffi.check();
        return Number(__ret);
    }

    static __ctor_1(_other)
    {
        const __ret = ffi.C.MR_StdContainers_A_ConstructFromAnother(BigInt(ffi.ptrNonNull(_other, "_other")));
        ffi.check();
        return Number(__ret);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_StdContainers_A.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_StdContainers_A))
            return L.MR_StdContainers_A.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_StdContainers_A.__destroy : null, args[3]);
            return;
        }
        super(L.MR_StdContainers_A.__ctor(args), L.MR_StdContainers_A.__destroy, null);
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_StdContainers_A_AssignFromAnother(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(_other, "_other")));
        ffi.check();
        const __owner = this;
        return new L.MR_StdContainers_A(ffi.RAW, Number(__ret), false, __owner);
    }
}

/**
 * A non-assignable type?
 * Generated from class `MR::StdContainers::NonAssignable`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_StdContainers_NonAssignable extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_StdContainers_NonAssignable_Destroy(BigInt(ptr));}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_StdContainers_NonAssignable_DefaultConstruct();
        ffi.check();
        return Number(__ret);
    }

    static __ctor_1(_other)
    {
        const __ret = ffi.C.MR_StdContainers_NonAssignable_ConstructFromAnother(ffi.PASS_BY_COPY, BigInt(ffi.ptrNonNull(_other, "_other")));
        ffi.check();
        return Number(__ret);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_StdContainers_NonAssignable.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_StdContainers_NonAssignable))
            return L.MR_StdContainers_NonAssignable.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_StdContainers_NonAssignable.__destroy : null, args[3]);
            return;
        }
        super(L.MR_StdContainers_NonAssignable.__ctor(args), L.MR_StdContainers_NonAssignable.__destroy, null);
    }

    opLess(_1)
    {
        const __ret = ffi.C.MR_C_less_MR_StdContainers_NonAssignable(BigInt(this.rawPointer()), ffi.PASS_BY_COPY, BigInt(ffi.ptrNonNull(_1, "_1")));
        ffi.check();
        return (__ret !== 0);
    }

    opEqual(_1)
    {
        const __ret = ffi.C.MR_C_equal_MR_StdContainers_NonAssignable(BigInt(this.rawPointer()), ffi.PASS_BY_COPY, BigInt(ffi.ptrNonNull(_1, "_1")));
        ffi.check();
        return (__ret !== 0);
    }
}

/**
 * Test vectors of a non-default-constructible type.
 * Generated from class `MR::StdContainers::NonDefaultConstructible`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_StdContainers_NonDefaultConstructible extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_StdContainers_NonDefaultConstructible_Destroy(BigInt(ptr));}

    static __ctor_0(_other)
    {
        const __ret = ffi.C.MR_StdContainers_NonDefaultConstructible_ConstructFromAnother(BigInt(ffi.ptrNonNull(_other, "_other")));
        ffi.check();
        return Number(__ret);
    }

    static __ctor_1(_1)
    {
        const __ret = ffi.C.MR_StdContainers_NonDefaultConstructible_Construct(_1);
        ffi.check();
        return Number(__ret);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 1 && (args[0] instanceof L.MR_StdContainers_NonDefaultConstructible))
            return L.MR_StdContainers_NonDefaultConstructible.__ctor_0(args[0]);
        if (__n === 1 && typeof args[0] === "number")
            return L.MR_StdContainers_NonDefaultConstructible.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_StdContainers_NonDefaultConstructible.__destroy : null, args[3]);
            return;
        }
        super(L.MR_StdContainers_NonDefaultConstructible.__ctor(args), L.MR_StdContainers_NonDefaultConstructible.__destroy, null);
    }

    assignFromAnother(_other)
    {
        const __ret = ffi.C.MR_StdContainers_NonDefaultConstructible_AssignFromAnother(BigInt(this.rawPointer()), BigInt(ffi.ptrNonNull(_other, "_other")));
        ffi.check();
        const __owner = this;
        return new L.MR_StdContainers_NonDefaultConstructible(ffi.RAW, Number(__ret), false, __owner);
    }
}

export function MR_StdContainers_Set(_1)
{
    ffi.C.MR_StdContainers_Set(ffi.PASS_BY_COPY, BigInt(ffi.ptrNonNull(_1, "_1")));
    ffi.check();
}

export function MR_StdContainers_SetWithDefault(_1)
{
    ffi.C.MR_StdContainers_SetWithDefault((_1 == null ? ffi.PASS_BY_DEFAULT_ARGUMENT : ffi.PASS_BY_COPY), BigInt(ffi.ptr(_1)));
    ffi.check();
}

export function MR_StdContainers_Get()
{
    const __ret = ffi.C.MR_StdContainers_Get();
    ffi.check();
    return new L.MR_C_std_vector_int(ffi.RAW, Number(__ret), true, null);
}

export function MR_StdContainers_WriteToRef(_1)
{
    ffi.C.MR_StdContainers_WriteToRef(BigInt(ffi.ptrNonNull(_1, "_1")));
    ffi.check();
}

export function MR_StdContainers_WriteToPtr(_1)
{
    ffi.C.MR_StdContainers_WriteToPtr(BigInt(ffi.ptr(_1)));
    ffi.check();
}

export function MR_StdContainers_ConstRef(_1)
{
    ffi.C.MR_StdContainers_ConstRef(BigInt(ffi.ptrNonNull(_1, "_1")));
    ffi.check();
}

export function MR_StdContainers_RvalueRef(_1)
{
    ffi.C.MR_StdContainers_RvalueRef(BigInt(ffi.ptrNonNull(_1, "_1")));
    ffi.check();
}

export function MR_StdContainers_ConstRvalueRef(_1)
{
    ffi.C.MR_StdContainers_ConstRvalueRef(BigInt(ffi.ptrNonNull(_1, "_1")));
    ffi.check();
}

export function MR_StdContainers_GetDeque()
{
    const __ret = ffi.C.MR_StdContainers_GetDeque();
    ffi.check();
    return new L.MR_C_std_deque_int(ffi.RAW, Number(__ret), true, null);
}

export function MR_StdContainers_GetList()
{
    const __ret = ffi.C.MR_StdContainers_GetList();
    ffi.check();
    return new L.MR_C_std_list_int(ffi.RAW, Number(__ret), true, null);
}

export function MR_StdContainers_GetSet()
{
    const __ret = ffi.C.MR_StdContainers_GetSet();
    ffi.check();
    return new L.MR_C_std_set_int(ffi.RAW, Number(__ret), true, null);
}

export function MR_StdContainers_GetMultiSet()
{
    const __ret = ffi.C.MR_StdContainers_GetMultiSet();
    ffi.check();
    return new L.MR_C_std_multiset_int(ffi.RAW, Number(__ret), true, null);
}

export function MR_StdContainers_GetUnorderedSet()
{
    const __ret = ffi.C.MR_StdContainers_GetUnorderedSet();
    ffi.check();
    return new L.MR_C_std_unordered_set_int(ffi.RAW, Number(__ret), true, null);
}

export function MR_StdContainers_GetUnorderedMultiSet()
{
    const __ret = ffi.C.MR_StdContainers_GetUnorderedMultiSet();
    ffi.check();
    return new L.MR_C_std_unordered_multiset_int(ffi.RAW, Number(__ret), true, null);
}

export function MR_StdContainers_GetMap()
{
    const __ret = ffi.C.MR_StdContainers_GetMap();
    ffi.check();
    return new L.MR_C_std_map_int_float(ffi.RAW, Number(__ret), true, null);
}

export function MR_StdContainers_GetMultiMap()
{
    const __ret = ffi.C.MR_StdContainers_GetMultiMap();
    ffi.check();
    return new L.MR_C_std_multimap_int_float(ffi.RAW, Number(__ret), true, null);
}

export function MR_StdContainers_GetUnorderedMap()
{
    const __ret = ffi.C.MR_StdContainers_GetUnorderedMap();
    ffi.check();
    return new L.MR_C_std_unordered_map_int_float(ffi.RAW, Number(__ret), true, null);
}

export function MR_StdContainers_GetUnorderedMultiMap()
{
    const __ret = ffi.C.MR_StdContainers_GetUnorderedMultiMap();
    ffi.check();
    return new L.MR_C_std_unordered_multimap_int_float(ffi.RAW, Number(__ret), true, null);
}

export function MR_StdContainers_GetStdArray()
{
    const __ret = ffi.C.MR_StdContainers_GetStdArray();
    ffi.check();
    return new L.MR_C_std_array_MR_StdContainers_A_42(ffi.RAW, Number(__ret), true, null);
}

export function MR_StdContainers_GetStdArraySimple()
{
    const __sret = ffi.malloc(172);
    ffi.C.MR_StdContainers_GetStdArraySimple(BigInt(__sret));
    ffi.check();
    return new L.MR_C_std_array_int_43(ffi.RAW, __sret, true, null);
}

export function MR_StdContainers_StdArraySimpleParam(_1)
{
    const __sp = ffi.stackSave();
    try
    {
        const __copy__1 = ffi.stackCopy(ffi.ptrNonNull(_1, "_1"), 172);
        ffi.C.MR_StdContainers_StdArraySimpleParam(BigInt(__copy__1));
        ffi.check();
    }
    finally
    {
        ffi.stackRestore(__sp);
    }
}

export function MR_StdContainers_StdArraySimplePtr(param)
{
    const __ret = ffi.C.MR_StdContainers_StdArraySimplePtr(BigInt(ffi.ptr(param)));
    ffi.check();
    const __owner = param;
    return (Number(__ret) === 0 ? null : new L.MR_C_std_array_int_43(ffi.RAW, Number(__ret), false, __owner));
}

export function MR_StdContainers_GetMultiSetWithMergedIters()
{
    const __ret = ffi.C.MR_StdContainers_GetMultiSetWithMergedIters();
    ffi.check();
    return new L.MR_C_std_multiset_float(ffi.RAW, Number(__ret), true, null);
}

export function MR_StdContainers_GetMergedIter()
{
    const __ret = ffi.C.MR_StdContainers_GetMergedIter();
    ffi.check();
    return new L.MR_C_std_set_float_const_iterator(ffi.RAW, Number(__ret), true, null);
}

export function MR_StdContainers_GetMergedIterConst()
{
    const __ret = ffi.C.MR_StdContainers_GetMergedIterConst();
    ffi.check();
    return new L.MR_C_std_set_float_const_iterator(ffi.RAW, Number(__ret), true, null);
}

export function MR_StdContainers_NonDefCon()
{
    const __ret = ffi.C.MR_StdContainers_NonDefCon();
    ffi.check();
    return new L.MR_C_std_vector_MR_StdContainers_NonDefaultConstructible(ffi.RAW, Number(__ret), true, null);
}

export function MR_StdContainers_GetVectorNA()
{
    const __ret = ffi.C.MR_StdContainers_GetVectorNA();
    ffi.check();
    return new L.MR_C_std_vector_MR_StdContainers_NonAssignable(ffi.RAW, Number(__ret), true, null);
}

export function MR_StdContainers_GetDequeNA()
{
    const __ret = ffi.C.MR_StdContainers_GetDequeNA();
    ffi.check();
    return new L.MR_C_std_deque_MR_StdContainers_NonAssignable(ffi.RAW, Number(__ret), true, null);
}

export function MR_StdContainers_GetListNA()
{
    const __ret = ffi.C.MR_StdContainers_GetListNA();
    ffi.check();
    return new L.MR_C_std_list_MR_StdContainers_NonAssignable(ffi.RAW, Number(__ret), true, null);
}

export function MR_StdContainers_GetSetNA()
{
    const __ret = ffi.C.MR_StdContainers_GetSetNA();
    ffi.check();
    return new L.MR_C_std_set_MR_StdContainers_NonAssignable(ffi.RAW, Number(__ret), true, null);
}

export function MR_StdContainers_GetMultiSetNA()
{
    const __ret = ffi.C.MR_StdContainers_GetMultiSetNA();
    ffi.check();
    return new L.MR_C_std_multiset_MR_StdContainers_NonAssignable(ffi.RAW, Number(__ret), true, null);
}

export function MR_StdContainers_GetUnorderedSetNA()
{
    const __ret = ffi.C.MR_StdContainers_GetUnorderedSetNA();
    ffi.check();
    return new L.MR_C_std_unordered_set_MR_StdContainers_NonAssignable(ffi.RAW, Number(__ret), true, null);
}

export function MR_StdContainers_GetUnorderedMultiSetNA()
{
    const __ret = ffi.C.MR_StdContainers_GetUnorderedMultiSetNA();
    ffi.check();
    return new L.MR_C_std_unordered_multiset_MR_StdContainers_NonAssignable(ffi.RAW, Number(__ret), true, null);
}

export function MR_StdContainers_GetMapNA()
{
    const __ret = ffi.C.MR_StdContainers_GetMapNA();
    ffi.check();
    return new L.MR_C_std_map_MR_StdContainers_NonAssignable_float(ffi.RAW, Number(__ret), true, null);
}

export function MR_StdContainers_GetMultiMapNA()
{
    const __ret = ffi.C.MR_StdContainers_GetMultiMapNA();
    ffi.check();
    return new L.MR_C_std_multimap_MR_StdContainers_NonAssignable_float(ffi.RAW, Number(__ret), true, null);
}

export function MR_StdContainers_GetUnorderedMapNA()
{
    const __ret = ffi.C.MR_StdContainers_GetUnorderedMapNA();
    ffi.check();
    return new L.MR_C_std_unordered_map_MR_StdContainers_NonAssignable_float(ffi.RAW, Number(__ret), true, null);
}

export function MR_StdContainers_GetUnorderedMultiMapNA()
{
    const __ret = ffi.C.MR_StdContainers_GetUnorderedMultiMapNA();
    ffi.check();
    return new L.MR_C_std_unordered_multimap_MR_StdContainers_NonAssignable_float(ffi.RAW, Number(__ret), true, null);
}

export function MR_StdContainers_GetStdArrayNA()
{
    const __ret = ffi.C.MR_StdContainers_GetStdArrayNA();
    ffi.check();
    return new L.MR_C_std_array_MR_StdContainers_NonAssignable_42(ffi.RAW, Number(__ret), true, null);
}

export function MR_StdContainers_GetStdArrayOfPlainArray()
{
    const __sret = ffi.malloc(240);
    ffi.C.MR_StdContainers_GetStdArrayOfPlainArray(BigInt(__sret));
    ffi.check();
    return new L.MR_C_std_array_int_array_4_array_3_5(ffi.RAW, __sret, true, null);
}

