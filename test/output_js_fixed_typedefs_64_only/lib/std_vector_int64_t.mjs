// The wrappers of the C bindings file `std_vector_int64_t`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Generated from C++ container `std::vector<MR_C_int64_t>`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_vector_int64_t extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_vector_int64_t_Destroy(ptr);}

    static __ctor_0()
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_std_vector_int64_t_DefaultConstruct();
            ffi.check();
            return (__ret >>> 0);
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

    static __ctor_1(other)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_std_vector_int64_t_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(other, "other"));
            ffi.check();
            return (__ret >>> 0);
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

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_C_std_vector_int64_t.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_vector_int64_t))
            return L.MR_C_std_vector_int64_t.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_vector_int64_t.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_vector_int64_t.__ctor(args), L.MR_C_std_vector_int64_t.__destroy, null);
    }

    assignFromAnother(other)
    {
        const __sp = ffi.stackSave();
        try
        {
            ffi.C.MR_C_std_vector_int64_t_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(other, "other"));
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

    size()
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_std_vector_int64_t_size(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
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

    empty()
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_std_vector_int64_t_empty(this.rawPointer());
            ffi.check();
            return (__ret !== 0);
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

    resize(new_size)
    {
        const __sp = ffi.stackSave();
        try
        {
            ffi.C.MR_C_std_vector_int64_t_resize(this.rawPointer(), new_size);
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

    clear()
    {
        const __sp = ffi.stackSave();
        try
        {
            ffi.C.MR_C_std_vector_int64_t_clear(this.rawPointer());
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

    reserve(new_capacity)
    {
        const __sp = ffi.stackSave();
        try
        {
            ffi.C.MR_C_std_vector_int64_t_reserve(this.rawPointer(), new_capacity);
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

    at(i)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_std_vector_int64_t_at(this.rawPointer(), i);
            ffi.check();
            return ffi.HEAP64()[((__ret >>> 0)) >>> 3];
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

    at_mut(i)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_std_vector_int64_t_at_mut(this.rawPointer(), i);
            ffi.check();
            return (__ret >>> 0);
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

    front()
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_std_vector_int64_t_front(this.rawPointer());
            ffi.check();
            return ((__ret >>> 0) === 0 ? null : ffi.HEAP64()[((__ret >>> 0)) >>> 3]);
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

    front_mut()
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_std_vector_int64_t_front_mut(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
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

    back()
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_std_vector_int64_t_back(this.rawPointer());
            ffi.check();
            return ((__ret >>> 0) === 0 ? null : ffi.HEAP64()[((__ret >>> 0)) >>> 3]);
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

    back_mut()
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_std_vector_int64_t_back_mut(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
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

    data()
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_std_vector_int64_t_data(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
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

    data_mut()
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ret = ffi.C.MR_C_std_vector_int64_t_data_mut(this.rawPointer());
            ffi.check();
            return (__ret >>> 0);
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

    push_back(new_elem)
    {
        const __sp = ffi.stackSave();
        try
        {
            ffi.C.MR_C_std_vector_int64_t_push_back(this.rawPointer(), ffi.toI64(new_elem));
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
        const __sp = ffi.stackSave();
        try
        {
            ffi.C.MR_C_std_vector_int64_t_pop_back(this.rawPointer());
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

    insert(position, new_elem)
    {
        const __sp = ffi.stackSave();
        try
        {
            ffi.C.MR_C_std_vector_int64_t_insert(this.rawPointer(), position, ffi.toI64(new_elem));
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
        const __sp = ffi.stackSave();
        try
        {
            ffi.C.MR_C_std_vector_int64_t_erase(this.rawPointer(), position);
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

    toArray()
    {
        const __n = (ffi.cppCall(() => ffi.C.MR_C_std_vector_int64_t_size(this.rawPointer())) >>> 0);
        const __p = (ffi.cppCall(() => ffi.C.MR_C_std_vector_int64_t_data(this.rawPointer())) >>> 0);
        return ffi.typedArrayCopy(BigInt64Array, __p, __n * 1);
    }

    view()
    {
        const __n = (ffi.cppCall(() => ffi.C.MR_C_std_vector_int64_t_size(this.rawPointer())) >>> 0);
        const __p = (ffi.cppCall(() => ffi.C.MR_C_std_vector_int64_t_data(this.rawPointer())) >>> 0);
        return ffi.typedArrayAt(BigInt64Array, __p, __n * 1);
    }

    setFromArray(array)
    {
        const __n = Math.floor(array.length / 1);
        ffi.cppCall(() => ffi.C.MR_C_std_vector_int64_t_resize(this.rawPointer(), __n));
        const __p = (ffi.cppCall(() => ffi.C.MR_C_std_vector_int64_t_data_mut(this.rawPointer())) >>> 0);
        ffi.typedArrayAt(BigInt64Array, __p, __n * 1).set(array.length === __n * 1 ? array : Array.prototype.slice.call(array, 0, __n * 1));
    }

    static fromArray(array)
    {
        const __ret = new L.MR_C_std_vector_int64_t();
        __ret.setFromArray(array);
        return __ret;
    }
}

