// The wrappers of the C bindings file `AB/common/std_vector_std_pair_MR_SeparateA_MR_SeparateB`.
import * as ffi from "../../../ffi.mjs";
import * as L from "../../../lib/_all.mjs";

/**
 * Generated from C++ container `std::vector<std::pair<MR::SeparateA, MR::SeparateB>>`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_Destroy(ptr);}

    static __ctor_0()
    {
        try
        {
            const __ret = ffi.C.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_DefaultConstruct();
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
            const __ret = ffi.C.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(other, "other"));
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
            return L.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB))
            return L.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB.__ctor(args), L.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB.__destroy, null);
    }

    assignFromAnother(other)
    {
        try
        {
            ffi.C.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(other, "other"));
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
            const __ret = ffi.C.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_size(this.rawPointer());
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
            const __ret = ffi.C.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_empty(this.rawPointer());
            ffi.check();
            return (__ret !== 0);
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
            ffi.C.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_resize_with_default_value(this.rawPointer(), new_size, ffi.ptrNonNull(value, "value"));
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
            ffi.C.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_clear(this.rawPointer());
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
            const __ret = ffi.C.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_capacity(this.rawPointer());
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
            ffi.C.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_reserve(this.rawPointer(), new_capacity);
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
            ffi.C.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_shrink_to_fit(this.rawPointer());
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
            const __ret = ffi.C.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_at(this.rawPointer(), i);
            ffi.check();
            const __owner = this;
            return new L.MR_C_std_pair_MR_SeparateA_MR_SeparateB(ffi.RAW, (__ret >>> 0), false, __owner);
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
            const __ret = ffi.C.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_at_mut(this.rawPointer(), i);
            ffi.check();
            const __owner = this;
            return new L.MR_C_std_pair_MR_SeparateA_MR_SeparateB(ffi.RAW, (__ret >>> 0), false, __owner);
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
            const __ret = ffi.C.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_front(this.rawPointer());
            ffi.check();
            const __owner = this;
            return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_pair_MR_SeparateA_MR_SeparateB(ffi.RAW, (__ret >>> 0), false, __owner));
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
            const __ret = ffi.C.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_front_mut(this.rawPointer());
            ffi.check();
            const __owner = this;
            return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_pair_MR_SeparateA_MR_SeparateB(ffi.RAW, (__ret >>> 0), false, __owner));
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
            const __ret = ffi.C.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_back(this.rawPointer());
            ffi.check();
            const __owner = this;
            return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_pair_MR_SeparateA_MR_SeparateB(ffi.RAW, (__ret >>> 0), false, __owner));
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
            const __ret = ffi.C.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_back_mut(this.rawPointer());
            ffi.check();
            const __owner = this;
            return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_pair_MR_SeparateA_MR_SeparateB(ffi.RAW, (__ret >>> 0), false, __owner));
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    push_back(new_elem)
    {
        try
        {
            ffi.C.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_push_back(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(new_elem, "new_elem"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    pop_back()
    {
        try
        {
            ffi.C.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_pop_back(this.rawPointer());
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    insert(position, new_elem)
    {
        try
        {
            ffi.C.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_insert(this.rawPointer(), position, ffi.PASS_BY_COPY, ffi.ptrNonNull(new_elem, "new_elem"));
            ffi.check();
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }

    erase(position)
    {
        try
        {
            ffi.C.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_erase(this.rawPointer(), position);
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
            const __ret = ffi.C.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_begin(this.rawPointer());
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
            const __ret = ffi.C.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_begin_mut(this.rawPointer());
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
            const __ret = ffi.C.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_end(this.rawPointer());
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
            const __ret = ffi.C.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_end_mut(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
        }
        catch (__e)
        {
            throw ffi.cppError(__e);
        }
    }
}

