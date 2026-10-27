// The wrappers of the C bindings file `std_vector_std_expected_int_std_string`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Generated from C++ container `std::vector<std::expected<int, std::string>>`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_vector_std_expected_int_std_string extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_vector_std_expected_int_std_string_Destroy(ptr);}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_C_std_vector_std_expected_int_std_string_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(other)
    {
        const __ret = ffi.C.MR_C_std_vector_std_expected_int_std_string_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(other, "other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_C_std_vector_std_expected_int_std_string.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_vector_std_expected_int_std_string))
            return L.MR_C_std_vector_std_expected_int_std_string.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_vector_std_expected_int_std_string.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_vector_std_expected_int_std_string.__ctor(args), L.MR_C_std_vector_std_expected_int_std_string.__destroy, null);
    }

    assignFromAnother(other)
    {
        ffi.C.MR_C_std_vector_std_expected_int_std_string_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(other, "other"));
        ffi.check();
    }

    size()
    {
        const __ret = ffi.C.MR_C_std_vector_std_expected_int_std_string_size(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    empty()
    {
        const __ret = ffi.C.MR_C_std_vector_std_expected_int_std_string_empty(this.rawPointer());
        ffi.check();
        return (__ret !== 0);
    }

    resize(new_size)
    {
        ffi.C.MR_C_std_vector_std_expected_int_std_string_resize(this.rawPointer(), new_size);
        ffi.check();
    }

    resize_with_default_value(new_size, value)
    {
        ffi.C.MR_C_std_vector_std_expected_int_std_string_resize_with_default_value(this.rawPointer(), new_size, ffi.ptrNonNull(value, "value"));
        ffi.check();
    }

    clear()
    {
        ffi.C.MR_C_std_vector_std_expected_int_std_string_clear(this.rawPointer());
        ffi.check();
    }

    capacity()
    {
        const __ret = ffi.C.MR_C_std_vector_std_expected_int_std_string_capacity(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    reserve(new_capacity)
    {
        ffi.C.MR_C_std_vector_std_expected_int_std_string_reserve(this.rawPointer(), new_capacity);
        ffi.check();
    }

    shrink_to_fit()
    {
        ffi.C.MR_C_std_vector_std_expected_int_std_string_shrink_to_fit(this.rawPointer());
        ffi.check();
    }

    at(i)
    {
        const __ret = ffi.C.MR_C_std_vector_std_expected_int_std_string_at(this.rawPointer(), i);
        ffi.check();
        const __owner = this;
        return new L.MR_C_std_expected_int_std_string(ffi.RAW, (__ret >>> 0), false, __owner);
    }

    at_mut(i)
    {
        const __ret = ffi.C.MR_C_std_vector_std_expected_int_std_string_at_mut(this.rawPointer(), i);
        ffi.check();
        const __owner = this;
        return new L.MR_C_std_expected_int_std_string(ffi.RAW, (__ret >>> 0), false, __owner);
    }

    front()
    {
        const __ret = ffi.C.MR_C_std_vector_std_expected_int_std_string_front(this.rawPointer());
        ffi.check();
        const __owner = this;
        return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_expected_int_std_string(ffi.RAW, (__ret >>> 0), false, __owner));
    }

    front_mut()
    {
        const __ret = ffi.C.MR_C_std_vector_std_expected_int_std_string_front_mut(this.rawPointer());
        ffi.check();
        const __owner = this;
        return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_expected_int_std_string(ffi.RAW, (__ret >>> 0), false, __owner));
    }

    back()
    {
        const __ret = ffi.C.MR_C_std_vector_std_expected_int_std_string_back(this.rawPointer());
        ffi.check();
        const __owner = this;
        return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_expected_int_std_string(ffi.RAW, (__ret >>> 0), false, __owner));
    }

    back_mut()
    {
        const __ret = ffi.C.MR_C_std_vector_std_expected_int_std_string_back_mut(this.rawPointer());
        ffi.check();
        const __owner = this;
        return ((__ret >>> 0) === 0 ? null : new L.MR_C_std_expected_int_std_string(ffi.RAW, (__ret >>> 0), false, __owner));
    }

    push_back(new_elem)
    {
        ffi.C.MR_C_std_vector_std_expected_int_std_string_push_back(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(new_elem, "new_elem"));
        ffi.check();
    }

    pop_back()
    {
        ffi.C.MR_C_std_vector_std_expected_int_std_string_pop_back(this.rawPointer());
        ffi.check();
    }

    insert(position, new_elem)
    {
        ffi.C.MR_C_std_vector_std_expected_int_std_string_insert(this.rawPointer(), position, ffi.PASS_BY_COPY, ffi.ptrNonNull(new_elem, "new_elem"));
        ffi.check();
    }

    erase(position)
    {
        ffi.C.MR_C_std_vector_std_expected_int_std_string_erase(this.rawPointer(), position);
        ffi.check();
    }

    begin()
    {
        const __ret = ffi.C.MR_C_std_vector_std_expected_int_std_string_begin(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    begin_mut()
    {
        const __ret = ffi.C.MR_C_std_vector_std_expected_int_std_string_begin_mut(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    end()
    {
        const __ret = ffi.C.MR_C_std_vector_std_expected_int_std_string_end(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    end_mut()
    {
        const __ret = ffi.C.MR_C_std_vector_std_expected_int_std_string_end_mut(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }
}

