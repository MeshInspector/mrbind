// The wrappers of the C bindings file `std_vector_MR_CSharp_A_ptr`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Generated from C++ container `std::vector<MR::CSharp::A *>`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_vector_MR_CSharp_A_ptr extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_vector_MR_CSharp_A_ptr_Destroy(ptr);}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_C_std_vector_MR_CSharp_A_ptr_DefaultConstruct();
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor_1(other)
    {
        const __ret = ffi.C.MR_C_std_vector_MR_CSharp_A_ptr_ConstructFromAnother(ffi.PASS_BY_COPY, ffi.ptrNonNull(other, "other"));
        ffi.check();
        return (__ret >>> 0);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_C_std_vector_MR_CSharp_A_ptr.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_vector_MR_CSharp_A_ptr))
            return L.MR_C_std_vector_MR_CSharp_A_ptr.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_vector_MR_CSharp_A_ptr.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_vector_MR_CSharp_A_ptr.__ctor(args), L.MR_C_std_vector_MR_CSharp_A_ptr.__destroy, null);
    }

    assignFromAnother(other)
    {
        ffi.C.MR_C_std_vector_MR_CSharp_A_ptr_AssignFromAnother(this.rawPointer(), ffi.PASS_BY_COPY, ffi.ptrNonNull(other, "other"));
        ffi.check();
    }

    size()
    {
        const __ret = ffi.C.MR_C_std_vector_MR_CSharp_A_ptr_size(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    empty()
    {
        const __ret = ffi.C.MR_C_std_vector_MR_CSharp_A_ptr_empty(this.rawPointer());
        ffi.check();
        return (__ret !== 0);
    }

    resize(new_size)
    {
        ffi.C.MR_C_std_vector_MR_CSharp_A_ptr_resize(this.rawPointer(), new_size);
        ffi.check();
    }

    resize_with_default_value(new_size, value)
    {
        ffi.C.MR_C_std_vector_MR_CSharp_A_ptr_resize_with_default_value(this.rawPointer(), new_size, ffi.ptr(value));
        ffi.check();
    }

    clear()
    {
        ffi.C.MR_C_std_vector_MR_CSharp_A_ptr_clear(this.rawPointer());
        ffi.check();
    }

    capacity()
    {
        const __ret = ffi.C.MR_C_std_vector_MR_CSharp_A_ptr_capacity(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    reserve(new_capacity)
    {
        ffi.C.MR_C_std_vector_MR_CSharp_A_ptr_reserve(this.rawPointer(), new_capacity);
        ffi.check();
    }

    shrink_to_fit()
    {
        ffi.C.MR_C_std_vector_MR_CSharp_A_ptr_shrink_to_fit(this.rawPointer());
        ffi.check();
    }

    at(i)
    {
        const __ret = ffi.C.MR_C_std_vector_MR_CSharp_A_ptr_at(this.rawPointer(), i);
        ffi.check();
        return (__ret >>> 0);
    }

    at_mut(i)
    {
        const __ret = ffi.C.MR_C_std_vector_MR_CSharp_A_ptr_at_mut(this.rawPointer(), i);
        ffi.check();
        return (__ret >>> 0);
    }

    front()
    {
        const __ret = ffi.C.MR_C_std_vector_MR_CSharp_A_ptr_front(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    front_mut()
    {
        const __ret = ffi.C.MR_C_std_vector_MR_CSharp_A_ptr_front_mut(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    back()
    {
        const __ret = ffi.C.MR_C_std_vector_MR_CSharp_A_ptr_back(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    back_mut()
    {
        const __ret = ffi.C.MR_C_std_vector_MR_CSharp_A_ptr_back_mut(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    push_back(new_elem)
    {
        ffi.C.MR_C_std_vector_MR_CSharp_A_ptr_push_back(this.rawPointer(), ffi.ptr(new_elem));
        ffi.check();
    }

    pop_back()
    {
        ffi.C.MR_C_std_vector_MR_CSharp_A_ptr_pop_back(this.rawPointer());
        ffi.check();
    }

    insert(position, new_elem)
    {
        ffi.C.MR_C_std_vector_MR_CSharp_A_ptr_insert(this.rawPointer(), position, ffi.ptr(new_elem));
        ffi.check();
    }

    erase(position)
    {
        ffi.C.MR_C_std_vector_MR_CSharp_A_ptr_erase(this.rawPointer(), position);
        ffi.check();
    }

    begin()
    {
        const __ret = ffi.C.MR_C_std_vector_MR_CSharp_A_ptr_begin(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    begin_mut()
    {
        const __ret = ffi.C.MR_C_std_vector_MR_CSharp_A_ptr_begin_mut(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    end()
    {
        const __ret = ffi.C.MR_C_std_vector_MR_CSharp_A_ptr_end(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }

    end_mut()
    {
        const __ret = ffi.C.MR_C_std_vector_MR_CSharp_A_ptr_end_mut(this.rawPointer());
        ffi.check();
        return (__ret >>> 0);
    }
}

