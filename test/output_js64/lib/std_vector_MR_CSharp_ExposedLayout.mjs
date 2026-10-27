// The wrappers of the C bindings file `std_vector_MR_CSharp_ExposedLayout`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Generated from C++ container `std::vector<MR::CSharp::ExposedLayout>`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_vector_MR_CSharp_ExposedLayout extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_Destroy(BigInt(ptr));}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_DefaultConstruct();
        ffi.check();
        return Number(__ret);
    }

    static __ctor_1(other)
    {
        const __ret = ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_ConstructFromAnother(ffi.PASS_BY_COPY, BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
        return Number(__ret);
    }

    static __ctor_2(ptr, size)
    {
        const __ret = ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_ConstructFromRange(BigInt(ffi.ptr(ptr)), ffi.toI64(size));
        ffi.check();
        return Number(__ret);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_C_std_vector_MR_CSharp_ExposedLayout.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_vector_MR_CSharp_ExposedLayout))
            return L.MR_C_std_vector_MR_CSharp_ExposedLayout.__ctor_1(args[0]);
        if (__n === 2 && (__n <= 0 || (args[0] == null || args[0] instanceof L.MR_CSharp_ExposedLayout)) && typeof args[1] === "number")
            return L.MR_C_std_vector_MR_CSharp_ExposedLayout.__ctor_2(args[0], args[1]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_vector_MR_CSharp_ExposedLayout.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_vector_MR_CSharp_ExposedLayout.__ctor(args), L.MR_C_std_vector_MR_CSharp_ExposedLayout.__destroy, null);
    }

    assignFromAnother(other)
    {
        ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_AssignFromAnother(BigInt(this.rawPointer()), ffi.PASS_BY_COPY, BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
    }

    assignFromRange(ptr, size)
    {
        ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_AssignFromRange(BigInt(this.rawPointer()), BigInt(ffi.ptr(ptr)), ffi.toI64(size));
        ffi.check();
    }

    size()
    {
        const __ret = ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_size(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }

    empty()
    {
        const __ret = ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_empty(BigInt(this.rawPointer()));
        ffi.check();
        return (__ret !== 0);
    }

    resize(new_size)
    {
        ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_resize(BigInt(this.rawPointer()), ffi.toI64(new_size));
        ffi.check();
    }

    resize_with_default_value(new_size, value)
    {
        ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_resize_with_default_value(BigInt(this.rawPointer()), ffi.toI64(new_size), BigInt(ffi.ptrNonNull(value, "value")));
        ffi.check();
    }

    clear()
    {
        ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_clear(BigInt(this.rawPointer()));
        ffi.check();
    }

    capacity()
    {
        const __ret = ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_capacity(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }

    reserve(new_capacity)
    {
        ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_reserve(BigInt(this.rawPointer()), ffi.toI64(new_capacity));
        ffi.check();
    }

    shrink_to_fit()
    {
        ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_shrink_to_fit(BigInt(this.rawPointer()));
        ffi.check();
    }

    at(i)
    {
        const __ret = ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_at(BigInt(this.rawPointer()), ffi.toI64(i));
        ffi.check();
        const __owner = this;
        return new L.MR_CSharp_ExposedLayout(ffi.RAW, Number(__ret), false, __owner);
    }

    at_mut(i)
    {
        const __ret = ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_at_mut(BigInt(this.rawPointer()), ffi.toI64(i));
        ffi.check();
        const __owner = this;
        return new L.MR_CSharp_ExposedLayout(ffi.RAW, Number(__ret), false, __owner);
    }

    front()
    {
        const __ret = ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_front(BigInt(this.rawPointer()));
        ffi.check();
        const __owner = this;
        return (Number(__ret) === 0 ? null : new L.MR_CSharp_ExposedLayout(ffi.RAW, Number(__ret), false, __owner));
    }

    front_mut()
    {
        const __ret = ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_front_mut(BigInt(this.rawPointer()));
        ffi.check();
        const __owner = this;
        return (Number(__ret) === 0 ? null : new L.MR_CSharp_ExposedLayout(ffi.RAW, Number(__ret), false, __owner));
    }

    back()
    {
        const __ret = ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_back(BigInt(this.rawPointer()));
        ffi.check();
        const __owner = this;
        return (Number(__ret) === 0 ? null : new L.MR_CSharp_ExposedLayout(ffi.RAW, Number(__ret), false, __owner));
    }

    back_mut()
    {
        const __ret = ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_back_mut(BigInt(this.rawPointer()));
        ffi.check();
        const __owner = this;
        return (Number(__ret) === 0 ? null : new L.MR_CSharp_ExposedLayout(ffi.RAW, Number(__ret), false, __owner));
    }

    data()
    {
        const __ret = ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_data(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }

    data_mut()
    {
        const __ret = ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_data_mut(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }

    push_back(new_elem)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __copy_new_elem = ffi.stackCopy(ffi.ptrNonNull(new_elem, "new_elem"), 56);
            ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_push_back(BigInt(this.rawPointer()), BigInt(__copy_new_elem));
            ffi.check();
        }
        finally
        {
            ffi.stackRestore(__sp);
        }
    }

    pop_back()
    {
        ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_pop_back(BigInt(this.rawPointer()));
        ffi.check();
    }

    insert(position, new_elem)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __copy_new_elem = ffi.stackCopy(ffi.ptrNonNull(new_elem, "new_elem"), 56);
            ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_insert(BigInt(this.rawPointer()), ffi.toI64(position), BigInt(__copy_new_elem));
            ffi.check();
        }
        finally
        {
            ffi.stackRestore(__sp);
        }
    }

    erase(position)
    {
        ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_erase(BigInt(this.rawPointer()), ffi.toI64(position));
        ffi.check();
    }

    begin()
    {
        const __ret = ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_begin(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }

    begin_mut()
    {
        const __ret = ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_begin_mut(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }

    end()
    {
        const __ret = ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_end(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }

    end_mut()
    {
        const __ret = ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_end_mut(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }
}

