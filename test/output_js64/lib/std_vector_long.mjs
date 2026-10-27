// The wrappers of the C bindings file `std_vector_long`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Generated from C++ container `std::vector<long>`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_vector_long extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_vector_long_Destroy(BigInt(ptr));}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_C_std_vector_long_DefaultConstruct();
        ffi.check();
        return Number(__ret);
    }

    static __ctor_1(other)
    {
        const __ret = ffi.C.MR_C_std_vector_long_ConstructFromAnother(ffi.PASS_BY_COPY, BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
        return Number(__ret);
    }

    static __ctor_2(ptr, size)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ptr_ptr = ptr == null ? 0 : ffi.stackScalar(8, (p) => {ffi.M.HEAPU64[(p) >>> 3] = BigInt(BigInt(ptr));});
            const __ret = ffi.C.MR_C_std_vector_long_ConstructFromRange(BigInt(__ptr_ptr), BigInt(size));
            ffi.check();
            return Number(__ret);
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
            return L.MR_C_std_vector_long.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_vector_long))
            return L.MR_C_std_vector_long.__ctor_1(args[0]);
        if (__n === 2 && (__n <= 0 || (args[0] == null || typeof args[0] === "number")) && typeof args[1] === "number")
            return L.MR_C_std_vector_long.__ctor_2(args[0], args[1]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_vector_long.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_vector_long.__ctor(args), L.MR_C_std_vector_long.__destroy, null);
    }

    assignFromAnother(other)
    {
        ffi.C.MR_C_std_vector_long_AssignFromAnother(BigInt(this.rawPointer()), ffi.PASS_BY_COPY, BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
    }

    assignFromRange(ptr, size)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ptr_ptr = ptr == null ? 0 : ffi.stackScalar(8, (p) => {ffi.M.HEAPU64[(p) >>> 3] = BigInt(BigInt(ptr));});
            ffi.C.MR_C_std_vector_long_AssignFromRange(BigInt(this.rawPointer()), BigInt(__ptr_ptr), BigInt(size));
            ffi.check();
        }
        finally
        {
            ffi.stackRestore(__sp);
        }
    }

    size()
    {
        const __ret = ffi.C.MR_C_std_vector_long_size(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }

    empty()
    {
        const __ret = ffi.C.MR_C_std_vector_long_empty(BigInt(this.rawPointer()));
        ffi.check();
        return (__ret !== 0);
    }

    resize(new_size)
    {
        ffi.C.MR_C_std_vector_long_resize(BigInt(this.rawPointer()), BigInt(new_size));
        ffi.check();
    }

    resize_with_default_value(new_size, value)
    {
        ffi.C.MR_C_std_vector_long_resize_with_default_value(BigInt(this.rawPointer()), BigInt(new_size), BigInt(value));
        ffi.check();
    }

    clear()
    {
        ffi.C.MR_C_std_vector_long_clear(BigInt(this.rawPointer()));
        ffi.check();
    }

    capacity()
    {
        const __ret = ffi.C.MR_C_std_vector_long_capacity(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }

    reserve(new_capacity)
    {
        ffi.C.MR_C_std_vector_long_reserve(BigInt(this.rawPointer()), BigInt(new_capacity));
        ffi.check();
    }

    shrink_to_fit()
    {
        ffi.C.MR_C_std_vector_long_shrink_to_fit(BigInt(this.rawPointer()));
        ffi.check();
    }

    at(i)
    {
        const __ret = ffi.C.MR_C_std_vector_long_at(BigInt(this.rawPointer()), BigInt(i));
        ffi.check();
        return Number(ffi.M.HEAP64[(Number(__ret)) >>> 3]);
    }

    at_mut(i)
    {
        const __ret = ffi.C.MR_C_std_vector_long_at_mut(BigInt(this.rawPointer()), BigInt(i));
        ffi.check();
        return Number(__ret);
    }

    front()
    {
        const __ret = ffi.C.MR_C_std_vector_long_front(BigInt(this.rawPointer()));
        ffi.check();
        return (Number(__ret) === 0 ? null : Number(ffi.M.HEAP64[(Number(__ret)) >>> 3]));
    }

    front_mut()
    {
        const __ret = ffi.C.MR_C_std_vector_long_front_mut(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }

    back()
    {
        const __ret = ffi.C.MR_C_std_vector_long_back(BigInt(this.rawPointer()));
        ffi.check();
        return (Number(__ret) === 0 ? null : Number(ffi.M.HEAP64[(Number(__ret)) >>> 3]));
    }

    back_mut()
    {
        const __ret = ffi.C.MR_C_std_vector_long_back_mut(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }

    data()
    {
        const __ret = ffi.C.MR_C_std_vector_long_data(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }

    data_mut()
    {
        const __ret = ffi.C.MR_C_std_vector_long_data_mut(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }

    push_back(new_elem)
    {
        ffi.C.MR_C_std_vector_long_push_back(BigInt(this.rawPointer()), BigInt(new_elem));
        ffi.check();
    }

    pop_back()
    {
        ffi.C.MR_C_std_vector_long_pop_back(BigInt(this.rawPointer()));
        ffi.check();
    }

    insert(position, new_elem)
    {
        ffi.C.MR_C_std_vector_long_insert(BigInt(this.rawPointer()), BigInt(position), BigInt(new_elem));
        ffi.check();
    }

    erase(position)
    {
        ffi.C.MR_C_std_vector_long_erase(BigInt(this.rawPointer()), BigInt(position));
        ffi.check();
    }

    begin()
    {
        const __ret = ffi.C.MR_C_std_vector_long_begin(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }

    begin_mut()
    {
        const __ret = ffi.C.MR_C_std_vector_long_begin_mut(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }

    end()
    {
        const __ret = ffi.C.MR_C_std_vector_long_end(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }

    end_mut()
    {
        const __ret = ffi.C.MR_C_std_vector_long_end_mut(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }

    toArray()
    {
        const __n = Number(ffi.cppCall(() => ffi.C.MR_C_std_vector_long_size(BigInt(this.rawPointer()))));
        const __p = Number(ffi.cppCall(() => ffi.C.MR_C_std_vector_long_data(BigInt(this.rawPointer()))));
        return ffi.typedArrayCopy(BigInt64Array, __p, __n * 1);
    }

    view()
    {
        const __n = Number(ffi.cppCall(() => ffi.C.MR_C_std_vector_long_size(BigInt(this.rawPointer()))));
        const __p = Number(ffi.cppCall(() => ffi.C.MR_C_std_vector_long_data(BigInt(this.rawPointer()))));
        return ffi.typedArrayAt(BigInt64Array, __p, __n * 1);
    }

    setFromArray(array)
    {
        const __n = Math.floor(array.length / 1);
        ffi.cppCall(() => ffi.C.MR_C_std_vector_long_resize(BigInt(this.rawPointer()), BigInt(__n)));
        const __p = Number(ffi.cppCall(() => ffi.C.MR_C_std_vector_long_data_mut(BigInt(this.rawPointer()))));
        ffi.typedArrayAt(BigInt64Array, __p, __n * 1).set(array.length === __n * 1 ? array : Array.prototype.slice.call(array, 0, __n * 1));
    }

    static fromArray(array)
    {
        const __ret = new L.MR_C_std_vector_long();
        __ret.setFromArray(array);
        return __ret;
    }
}

