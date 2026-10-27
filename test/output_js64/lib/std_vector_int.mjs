// The wrappers of the C bindings file `std_vector_int`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Generated from C++ container `std::vector<int>`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_vector_int extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_vector_int_Destroy(BigInt(ptr));}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_C_std_vector_int_DefaultConstruct();
        ffi.check();
        return Number(__ret);
    }

    static __ctor_1(other)
    {
        const __ret = ffi.C.MR_C_std_vector_int_ConstructFromAnother(ffi.PASS_BY_COPY, BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
        return Number(__ret);
    }

    static __ctor_2(ptr, size)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ptr_ptr = ptr == null ? 0 : ffi.stackScalar(4, (p) => {ffi.HEAPU32()[(p) / 4] = ptr;});
            const __ret = ffi.C.MR_C_std_vector_int_ConstructFromRange(BigInt(__ptr_ptr), ffi.toI64(size));
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
            return L.MR_C_std_vector_int.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_vector_int))
            return L.MR_C_std_vector_int.__ctor_1(args[0]);
        if (__n === 2 && (__n <= 0 || (args[0] == null || typeof args[0] === "number")) && typeof args[1] === "number")
            return L.MR_C_std_vector_int.__ctor_2(args[0], args[1]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_vector_int.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_vector_int.__ctor(args), L.MR_C_std_vector_int.__destroy, null);
    }

    assignFromAnother(other)
    {
        ffi.C.MR_C_std_vector_int_AssignFromAnother(BigInt(this.rawPointer()), ffi.PASS_BY_COPY, BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
    }

    assignFromRange(ptr, size)
    {
        const __sp = ffi.stackSave();
        try
        {
            const __ptr_ptr = ptr == null ? 0 : ffi.stackScalar(4, (p) => {ffi.HEAPU32()[(p) / 4] = ptr;});
            ffi.C.MR_C_std_vector_int_AssignFromRange(BigInt(this.rawPointer()), BigInt(__ptr_ptr), ffi.toI64(size));
            ffi.check();
        }
        finally
        {
            ffi.stackRestore(__sp);
        }
    }

    size()
    {
        const __ret = ffi.C.MR_C_std_vector_int_size(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }

    empty()
    {
        const __ret = ffi.C.MR_C_std_vector_int_empty(BigInt(this.rawPointer()));
        ffi.check();
        return (__ret !== 0);
    }

    resize(new_size)
    {
        ffi.C.MR_C_std_vector_int_resize(BigInt(this.rawPointer()), ffi.toI64(new_size));
        ffi.check();
    }

    resize_with_default_value(new_size, value)
    {
        ffi.C.MR_C_std_vector_int_resize_with_default_value(BigInt(this.rawPointer()), ffi.toI64(new_size), value);
        ffi.check();
    }

    clear()
    {
        ffi.C.MR_C_std_vector_int_clear(BigInt(this.rawPointer()));
        ffi.check();
    }

    capacity()
    {
        const __ret = ffi.C.MR_C_std_vector_int_capacity(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }

    reserve(new_capacity)
    {
        ffi.C.MR_C_std_vector_int_reserve(BigInt(this.rawPointer()), ffi.toI64(new_capacity));
        ffi.check();
    }

    shrink_to_fit()
    {
        ffi.C.MR_C_std_vector_int_shrink_to_fit(BigInt(this.rawPointer()));
        ffi.check();
    }

    at(i)
    {
        const __ret = ffi.C.MR_C_std_vector_int_at(BigInt(this.rawPointer()), ffi.toI64(i));
        ffi.check();
        return ffi.HEAP32()[(Number(__ret)) / 4];
    }

    at_mut(i)
    {
        const __ret = ffi.C.MR_C_std_vector_int_at_mut(BigInt(this.rawPointer()), ffi.toI64(i));
        ffi.check();
        return Number(__ret);
    }

    front()
    {
        const __ret = ffi.C.MR_C_std_vector_int_front(BigInt(this.rawPointer()));
        ffi.check();
        return (Number(__ret) === 0 ? null : ffi.HEAP32()[(Number(__ret)) / 4]);
    }

    front_mut()
    {
        const __ret = ffi.C.MR_C_std_vector_int_front_mut(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }

    back()
    {
        const __ret = ffi.C.MR_C_std_vector_int_back(BigInt(this.rawPointer()));
        ffi.check();
        return (Number(__ret) === 0 ? null : ffi.HEAP32()[(Number(__ret)) / 4]);
    }

    back_mut()
    {
        const __ret = ffi.C.MR_C_std_vector_int_back_mut(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }

    data()
    {
        const __ret = ffi.C.MR_C_std_vector_int_data(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }

    data_mut()
    {
        const __ret = ffi.C.MR_C_std_vector_int_data_mut(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }

    push_back(new_elem)
    {
        ffi.C.MR_C_std_vector_int_push_back(BigInt(this.rawPointer()), new_elem);
        ffi.check();
    }

    pop_back()
    {
        ffi.C.MR_C_std_vector_int_pop_back(BigInt(this.rawPointer()));
        ffi.check();
    }

    insert(position, new_elem)
    {
        ffi.C.MR_C_std_vector_int_insert(BigInt(this.rawPointer()), ffi.toI64(position), new_elem);
        ffi.check();
    }

    erase(position)
    {
        ffi.C.MR_C_std_vector_int_erase(BigInt(this.rawPointer()), ffi.toI64(position));
        ffi.check();
    }

    begin()
    {
        const __ret = ffi.C.MR_C_std_vector_int_begin(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }

    begin_mut()
    {
        const __ret = ffi.C.MR_C_std_vector_int_begin_mut(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }

    end()
    {
        const __ret = ffi.C.MR_C_std_vector_int_end(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }

    end_mut()
    {
        const __ret = ffi.C.MR_C_std_vector_int_end_mut(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }

    toArray()
    {
        const __n = Number(ffi.cppCall(() => ffi.C.MR_C_std_vector_int_size(BigInt(this.rawPointer()))));
        const __p = Number(ffi.cppCall(() => ffi.C.MR_C_std_vector_int_data(BigInt(this.rawPointer()))));
        return ffi.typedArrayCopy(Int32Array, __p, __n * 1);
    }

    view()
    {
        const __n = Number(ffi.cppCall(() => ffi.C.MR_C_std_vector_int_size(BigInt(this.rawPointer()))));
        const __p = Number(ffi.cppCall(() => ffi.C.MR_C_std_vector_int_data(BigInt(this.rawPointer()))));
        return ffi.typedArrayAt(Int32Array, __p, __n * 1);
    }

    setFromArray(array)
    {
        const __n = Math.floor(array.length / 1);
        ffi.cppCall(() => ffi.C.MR_C_std_vector_int_resize(BigInt(this.rawPointer()), ffi.toI64(__n)));
        const __p = Number(ffi.cppCall(() => ffi.C.MR_C_std_vector_int_data_mut(BigInt(this.rawPointer()))));
        ffi.typedArrayAt(Int32Array, __p, __n * 1).set(array.length === __n * 1 ? array : Array.prototype.slice.call(array, 0, __n * 1));
    }

    static fromArray(array)
    {
        const __ret = new L.MR_C_std_vector_int();
        __ret.setFromArray(array);
        return __ret;
    }
}

