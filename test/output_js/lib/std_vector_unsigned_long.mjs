// The wrappers of the C bindings file `std_vector_unsigned_long`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Generated from C++ container `std::vector<unsigned long>`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_vector_unsigned_long extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_vector_unsigned_long_Destroy(ptr);}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_C_std_vector_unsigned_long_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(other)
    {
        const __ret = ffi.C.MR_C_std_vector_unsigned_long_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(other, "other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_2(ptr, size)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ptr_ptr = ptr == null ? 0 : ffi.stackScalar(4, (p) => {ffi.M.HEAPU32[(p) >>> 2] = ptr;});
            const __ret = ffi.C.MR_C_std_vector_unsigned_long_ConstructFromRange(__ptr_ptr, size);
            ffi.check();
            return (__ret >>> 0);
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
            return L.MR_C_std_vector_unsigned_long.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_vector_unsigned_long))
            return L.MR_C_std_vector_unsigned_long.__ctor_1(args[0]);
        if (__n === 2 && (__n <= 0 || (args[0] == null || typeof args[0] === "number")) && typeof args[1] === "number")
            return L.MR_C_std_vector_unsigned_long.__ctor_2(args[0], args[1]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_vector_unsigned_long.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_vector_unsigned_long.__ctor(args), L.MR_C_std_vector_unsigned_long.__destroy, null);
    }

    assignFromAnother(other)
    {
        ffi.C.MR_C_std_vector_unsigned_long_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(other, "other"));
        ffi.check();
    }

    assignFromRange(ptr, size)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ptr_ptr = ptr == null ? 0 : ffi.stackScalar(4, (p) => {ffi.M.HEAPU32[(p) >>> 2] = ptr;});
            ffi.C.MR_C_std_vector_unsigned_long_AssignFromRange(this.rawPointer(), __ptr_ptr, size);
            ffi.check();
        }
        finally
        {
            ffi.stackRestore(__sp);
        }
    }

    size()
    {
        const __ret = ffi.C.MR_C_std_vector_unsigned_long_size(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    empty()
    {
        const __ret = ffi.C.MR_C_std_vector_unsigned_long_empty(this.rawPointer());
        ffi.check();
        return (__ret !== 0);
    }

    resize(new_size)
    {
        ffi.C.MR_C_std_vector_unsigned_long_resize(this.rawPointer(), new_size);
        ffi.check();
    }

    resize_with_default_value(new_size, value)
    {
        ffi.C.MR_C_std_vector_unsigned_long_resize_with_default_value(this.rawPointer(), new_size, value);
        ffi.check();
    }

    clear()
    {
        ffi.C.MR_C_std_vector_unsigned_long_clear(this.rawPointer());
        ffi.check();
    }

    capacity()
    {
        const __ret = ffi.C.MR_C_std_vector_unsigned_long_capacity(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    reserve(new_capacity)
    {
        ffi.C.MR_C_std_vector_unsigned_long_reserve(this.rawPointer(), new_capacity);
        ffi.check();
    }

    shrink_to_fit()
    {
        ffi.C.MR_C_std_vector_unsigned_long_shrink_to_fit(this.rawPointer());
        ffi.check();
    }

    at(i)
    {
        const __ret = ffi.C.MR_C_std_vector_unsigned_long_at(this.rawPointer(), i);
        ffi.check();
        return ffi.M.HEAPU32[((__ret >>> 0)) >>> 2];
    }

    at_mut(i)
    {
        const __ret = ffi.C.MR_C_std_vector_unsigned_long_at_mut(this.rawPointer(), i);
        ffi.check();
        return (__ret >>> 0);
    }

    front()
    {
        const __ret = ffi.C.MR_C_std_vector_unsigned_long_front(this.rawPointer());
        ffi.check();
        return ((__ret >>> 0) === 0 ? null : ffi.M.HEAPU32[((__ret >>> 0)) >>> 2]);
    }

    front_mut()
    {
        const __ret = ffi.C.MR_C_std_vector_unsigned_long_front_mut(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    back()
    {
        const __ret = ffi.C.MR_C_std_vector_unsigned_long_back(this.rawPointer());
        ffi.check();
        return ((__ret >>> 0) === 0 ? null : ffi.M.HEAPU32[((__ret >>> 0)) >>> 2]);
    }

    back_mut()
    {
        const __ret = ffi.C.MR_C_std_vector_unsigned_long_back_mut(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    data()
    {
        const __ret = ffi.C.MR_C_std_vector_unsigned_long_data(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    data_mut()
    {
        const __ret = ffi.C.MR_C_std_vector_unsigned_long_data_mut(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    push_back(new_elem)
    {
        ffi.C.MR_C_std_vector_unsigned_long_push_back(this.rawPointer(), new_elem);
        ffi.check();
    }

    pop_back()
    {
        ffi.C.MR_C_std_vector_unsigned_long_pop_back(this.rawPointer());
        ffi.check();
    }

    insert(position, new_elem)
    {
        ffi.C.MR_C_std_vector_unsigned_long_insert(this.rawPointer(), position, new_elem);
        ffi.check();
    }

    erase(position)
    {
        ffi.C.MR_C_std_vector_unsigned_long_erase(this.rawPointer(), position);
        ffi.check();
    }

    begin()
    {
        const __ret = ffi.C.MR_C_std_vector_unsigned_long_begin(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    begin_mut()
    {
        const __ret = ffi.C.MR_C_std_vector_unsigned_long_begin_mut(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    end()
    {
        const __ret = ffi.C.MR_C_std_vector_unsigned_long_end(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    end_mut()
    {
        const __ret = ffi.C.MR_C_std_vector_unsigned_long_end_mut(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    toArray()
    {
        const __n = (ffi.cppCall(() => ffi.C.MR_C_std_vector_unsigned_long_size(this.rawPointer())) >>> 0);
        const __p = (ffi.cppCall(() => ffi.C.MR_C_std_vector_unsigned_long_data(this.rawPointer())) >>> 0);
        return ffi.typedArrayCopy(Uint32Array, __p, __n * 1);
    }

    view()
    {
        const __n = (ffi.cppCall(() => ffi.C.MR_C_std_vector_unsigned_long_size(this.rawPointer())) >>> 0);
        const __p = (ffi.cppCall(() => ffi.C.MR_C_std_vector_unsigned_long_data(this.rawPointer())) >>> 0);
        return ffi.typedArrayAt(Uint32Array, __p, __n * 1);
    }

    setFromArray(array)
    {
        const __n = Math.floor(array.length / 1);
        ffi.cppCall(() => ffi.C.MR_C_std_vector_unsigned_long_resize(this.rawPointer(), __n));
        const __p = (ffi.cppCall(() => ffi.C.MR_C_std_vector_unsigned_long_data_mut(this.rawPointer())) >>> 0);
        ffi.typedArrayAt(Uint32Array, __p, __n * 1).set(array.length === __n * 1 ? array : Array.prototype.slice.call(array, 0, __n * 1));
    }

    static fromArray(array)
    {
        const __ret = new L.MR_C_std_vector_unsigned_long();
        __ret.setFromArray(array);
        return __ret;
    }
}

