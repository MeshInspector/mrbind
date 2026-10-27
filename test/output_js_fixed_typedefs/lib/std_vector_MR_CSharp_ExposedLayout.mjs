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
    static __destroy(ptr) {ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_1(other)
    {
        try
        {
            const __ret = ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(other, "other"));
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    static __ctor_2(ptr, size)
    {
        try
        {
            const __ret = ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_ConstructFromRange(ffi.ptr(ptr), size);
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
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
        try
        {
            ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(other, "other"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    assignFromRange(ptr, size)
    {
        try
        {
            ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_AssignFromRange(this.rawPointer(), ffi.ptr(ptr), size);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    size()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_size(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    empty()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_empty(this.rawPointer());
            ffi.check();
            return (__ret !== 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    resize(new_size)
    {
        try
        {
            ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_resize(this.rawPointer(), new_size);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    resize_with_default_value(new_size, value)
    {
        try
        {
            ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_resize_with_default_value(this.rawPointer(), new_size, ffi.ptrNonNull(value, "value"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    clear()
    {
        try
        {
            ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_clear(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    capacity()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_capacity(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    reserve(new_capacity)
    {
        try
        {
            ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_reserve(this.rawPointer(), new_capacity);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    shrink_to_fit()
    {
        try
        {
            ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_shrink_to_fit(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    at(i)
    {
        try
        {
            const __ret = ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_at(this.rawPointer(), i);
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_ExposedLayout(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    at_mut(i)
    {
        try
        {
            const __ret = ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_at_mut(this.rawPointer(), i);
            ffi.check();
            const __owner = this;
            return new L.MR_CSharp_ExposedLayout(ffi.RAW, (__ret >>> 0), false, __owner);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    front()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_front(this.rawPointer());
            ffi.check();
            const __owner = this;
            return ((__ret >>> 0) === 0 ? null : new L.MR_CSharp_ExposedLayout(ffi.RAW, (__ret >>> 0), false, __owner));
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    front_mut()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_front_mut(this.rawPointer());
            ffi.check();
            const __owner = this;
            return ((__ret >>> 0) === 0 ? null : new L.MR_CSharp_ExposedLayout(ffi.RAW, (__ret >>> 0), false, __owner));
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    back()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_back(this.rawPointer());
            ffi.check();
            const __owner = this;
            return ((__ret >>> 0) === 0 ? null : new L.MR_CSharp_ExposedLayout(ffi.RAW, (__ret >>> 0), false, __owner));
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    back_mut()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_back_mut(this.rawPointer());
            ffi.check();
            const __owner = this;
            return ((__ret >>> 0) === 0 ? null : new L.MR_CSharp_ExposedLayout(ffi.RAW, (__ret >>> 0), false, __owner));
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    data()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_data(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    data_mut()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_data_mut(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    push_back(new_elem)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __copy_new_elem = ffi.stackCopy(ffi.ptrNonNull(new_elem, "new_elem"), 56);
            ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_push_back(this.rawPointer(), __copy_new_elem);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
        finally
        {
            ffi.stackRestore(__sp);
        }
    }

    pop_back()
    {
        try
        {
            ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_pop_back(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    insert(position, new_elem)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __copy_new_elem = ffi.stackCopy(ffi.ptrNonNull(new_elem, "new_elem"), 56);
            ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_insert(this.rawPointer(), position, __copy_new_elem);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
        finally
        {
            ffi.stackRestore(__sp);
        }
    }

    erase(position)
    {
        try
        {
            ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_erase(this.rawPointer(), position);
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    begin()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_begin(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    begin_mut()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_begin_mut(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    end()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_end(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    end_mut()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_vector_MR_CSharp_ExposedLayout_end_mut(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

