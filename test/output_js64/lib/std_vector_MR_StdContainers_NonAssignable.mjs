// The wrappers of the C bindings file `std_vector_MR_StdContainers_NonAssignable`.
import * as ffi from "../ffi.mjs";
import * as L from "../lib/_all.mjs";

/**
 * Generated from C++ container `std::vector<MR::StdContainers::NonAssignable>`.
 *
 * Instances created here own their C++ objects, see `CppObject`. `new X(ffi.RAW, pointer, owned, owner)` wraps an existing object.
 */
export class MR_C_std_vector_MR_StdContainers_NonAssignable extends ffi.CppObject
{
    static __destroy(ptr) {ffi.C.MR_C_std_vector_MR_StdContainers_NonAssignable_Destroy(BigInt(ptr));}

    static __ctor_0()
    {
        const __ret = ffi.C.MR_C_std_vector_MR_StdContainers_NonAssignable_DefaultConstruct();
        ffi.check();
        return Number(__ret);
    }

    static __ctor_1(other)
    {
        const __ret = ffi.C.MR_C_std_vector_MR_StdContainers_NonAssignable_ConstructFromAnother(ffi.PASS_BY_COPY, BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
        return Number(__ret);
    }

    static __ctor(args)
    {
        const __n = args.length;
        if (__n === 0)
            return L.MR_C_std_vector_MR_StdContainers_NonAssignable.__ctor_0();
        if (__n === 1 && (args[0] instanceof L.MR_C_std_vector_MR_StdContainers_NonAssignable))
            return L.MR_C_std_vector_MR_StdContainers_NonAssignable.__ctor_1(args[0]);
        throw new TypeError("No overload of `constructor` accepts these arguments.");
    }

    constructor(...args)
    {
        if (args[0] === ffi.RAW)
        {
            super(args[1], args[2] ? L.MR_C_std_vector_MR_StdContainers_NonAssignable.__destroy : null, args[3]);
            return;
        }
        super(L.MR_C_std_vector_MR_StdContainers_NonAssignable.__ctor(args), L.MR_C_std_vector_MR_StdContainers_NonAssignable.__destroy, null);
    }

    assignFromAnother(other)
    {
        ffi.C.MR_C_std_vector_MR_StdContainers_NonAssignable_AssignFromAnother(BigInt(this.rawPointer()), ffi.PASS_BY_COPY, BigInt(ffi.ptrNonNull(other, "other")));
        ffi.check();
    }

    size()
    {
        const __ret = ffi.C.MR_C_std_vector_MR_StdContainers_NonAssignable_size(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }

    empty()
    {
        const __ret = ffi.C.MR_C_std_vector_MR_StdContainers_NonAssignable_empty(BigInt(this.rawPointer()));
        ffi.check();
        return (__ret !== 0);
    }

    resize(new_size)
    {
        ffi.C.MR_C_std_vector_MR_StdContainers_NonAssignable_resize(BigInt(this.rawPointer()), BigInt(new_size));
        ffi.check();
    }

    clear()
    {
        ffi.C.MR_C_std_vector_MR_StdContainers_NonAssignable_clear(BigInt(this.rawPointer()));
        ffi.check();
    }

    capacity()
    {
        const __ret = ffi.C.MR_C_std_vector_MR_StdContainers_NonAssignable_capacity(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }

    reserve(new_capacity)
    {
        ffi.C.MR_C_std_vector_MR_StdContainers_NonAssignable_reserve(BigInt(this.rawPointer()), BigInt(new_capacity));
        ffi.check();
    }

    shrink_to_fit()
    {
        ffi.C.MR_C_std_vector_MR_StdContainers_NonAssignable_shrink_to_fit(BigInt(this.rawPointer()));
        ffi.check();
    }

    at(i)
    {
        const __ret = ffi.C.MR_C_std_vector_MR_StdContainers_NonAssignable_at(BigInt(this.rawPointer()), BigInt(i));
        ffi.check();
        const __owner = this;
        return new L.MR_StdContainers_NonAssignable(ffi.RAW, Number(__ret), false, __owner);
    }

    at_mut(i)
    {
        const __ret = ffi.C.MR_C_std_vector_MR_StdContainers_NonAssignable_at_mut(BigInt(this.rawPointer()), BigInt(i));
        ffi.check();
        const __owner = this;
        return new L.MR_StdContainers_NonAssignable(ffi.RAW, Number(__ret), false, __owner);
    }

    front()
    {
        const __ret = ffi.C.MR_C_std_vector_MR_StdContainers_NonAssignable_front(BigInt(this.rawPointer()));
        ffi.check();
        const __owner = this;
        return (Number(__ret) === 0 ? null : new L.MR_StdContainers_NonAssignable(ffi.RAW, Number(__ret), false, __owner));
    }

    front_mut()
    {
        const __ret = ffi.C.MR_C_std_vector_MR_StdContainers_NonAssignable_front_mut(BigInt(this.rawPointer()));
        ffi.check();
        const __owner = this;
        return (Number(__ret) === 0 ? null : new L.MR_StdContainers_NonAssignable(ffi.RAW, Number(__ret), false, __owner));
    }

    back()
    {
        const __ret = ffi.C.MR_C_std_vector_MR_StdContainers_NonAssignable_back(BigInt(this.rawPointer()));
        ffi.check();
        const __owner = this;
        return (Number(__ret) === 0 ? null : new L.MR_StdContainers_NonAssignable(ffi.RAW, Number(__ret), false, __owner));
    }

    back_mut()
    {
        const __ret = ffi.C.MR_C_std_vector_MR_StdContainers_NonAssignable_back_mut(BigInt(this.rawPointer()));
        ffi.check();
        const __owner = this;
        return (Number(__ret) === 0 ? null : new L.MR_StdContainers_NonAssignable(ffi.RAW, Number(__ret), false, __owner));
    }

    push_back(new_elem)
    {
        ffi.C.MR_C_std_vector_MR_StdContainers_NonAssignable_push_back(BigInt(this.rawPointer()), ffi.PASS_BY_COPY, BigInt(ffi.ptrNonNull(new_elem, "new_elem")));
        ffi.check();
    }

    pop_back()
    {
        ffi.C.MR_C_std_vector_MR_StdContainers_NonAssignable_pop_back(BigInt(this.rawPointer()));
        ffi.check();
    }

    begin()
    {
        const __ret = ffi.C.MR_C_std_vector_MR_StdContainers_NonAssignable_begin(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }

    begin_mut()
    {
        const __ret = ffi.C.MR_C_std_vector_MR_StdContainers_NonAssignable_begin_mut(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }

    end()
    {
        const __ret = ffi.C.MR_C_std_vector_MR_StdContainers_NonAssignable_end(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }

    end_mut()
    {
        const __ret = ffi.C.MR_C_std_vector_MR_StdContainers_NonAssignable_end_mut(BigInt(this.rawPointer()));
        ffi.check();
        return Number(__ret);
    }
}

