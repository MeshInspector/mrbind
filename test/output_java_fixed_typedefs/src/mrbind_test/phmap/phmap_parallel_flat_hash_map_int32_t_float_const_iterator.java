package mrbind_test.phmap;

/**
 * Read-only iterator for `MR_C_phmap_parallel_flat_hash_map_int32_t_float`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class phmap_parallel_flat_hash_map_int32_t_float_const_iterator extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public phmap_parallel_flat_hash_map_int32_t_float_const_iterator(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? phmap_parallel_flat_hash_map_int32_t_float_const_iterator::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.phmap_parallel_flat_hash_map_int32_t_float.H0.MR_C_phmap_parallel_flat_hash_map_int32_t_float_const_iterator_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_phmap_parallel_flat_hash_map_int32_t_float_const_iterator_DefaultConstruct()`.
     */
    public phmap_parallel_flat_hash_map_int32_t_float_const_iterator()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.phmap_parallel_flat_hash_map_int32_t_float.H0.MR_C_phmap_parallel_flat_hash_map_int32_t_float_const_iterator_DefaultConstruct.invokeExact();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Constructs a copy of another instance. The source remains alive.
     * The reference to the parameter `other` might be preserved in the constructed object.
     *
     * Calls `MR_C_phmap_parallel_flat_hash_map_int32_t_float_const_iterator_ConstructFromAnother()`.
     */
    public phmap_parallel_flat_hash_map_int32_t_float_const_iterator(mrbind_test.phmap.phmap_parallel_flat_hash_map_int32_t_float_const_iterator other)
    {
        this(__ctor_constructFromAnother(other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.phmap.phmap_parallel_flat_hash_map_int32_t_float_const_iterator other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.phmap_parallel_flat_hash_map_int32_t_float.H0.MR_C_phmap_parallel_flat_hash_map_int32_t_float_const_iterator_ConstructFromAnother.invokeExact(mrbind_test.Ffi.ptrNonNull(other, "other"));
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(other);
        }
    }

    /**
     * Assigns the contents from another instance. Both objects remain alive after the call.
     * The reference to the parameter `other` might be preserved in this object.
     *
     * Calls `MR_C_phmap_parallel_flat_hash_map_int32_t_float_const_iterator_AssignFromAnother()`.
     */
    public void assignFromAnother(mrbind_test.phmap.phmap_parallel_flat_hash_map_int32_t_float_const_iterator other)
    {
        try
        {
            mrbind_test.ffi.phmap_parallel_flat_hash_map_int32_t_float.H0.MR_C_phmap_parallel_flat_hash_map_int32_t_float_const_iterator_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(other, "other"));
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
            java.lang.ref.Reference.reachabilityFence(other);
        }
    }

    /**
     * Makes a const iterator from a mutable one.
     *
     * Calls `MR_C_phmap_parallel_flat_hash_map_int32_t_float_const_iterator_from_mutable()`.
     */
    public phmap_parallel_flat_hash_map_int32_t_float_const_iterator(mrbind_test.phmap.phmap_parallel_flat_hash_map_int32_t_float_iterator iter)
    {
        this(__ctor_from_mutable(iter), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_from_mutable(mrbind_test.phmap.phmap_parallel_flat_hash_map_int32_t_float_iterator iter)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.phmap_parallel_flat_hash_map_int32_t_float.H0.MR_C_phmap_parallel_flat_hash_map_int32_t_float_const_iterator_from_mutable.invokeExact(mrbind_test.Ffi.ptrNonNull(iter, "iter"));
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(iter);
        }
    }

    /**
     * Dereferences a const iterator.
     * The reference to things referred to by this object (if any) might be preserved as the return value.
     *
     * Calls `MR_C_phmap_parallel_flat_hash_map_int32_t_float_const_iterator_deref()`.
     */
    public mrbind_test.mr.cs.std_pair_const_int32_t_float deref()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.phmap_parallel_flat_hash_map_int32_t_float.H0.MR_C_phmap_parallel_flat_hash_map_int32_t_float_const_iterator_deref.invokeExact(rawPointer());
            java.lang.Object __owner = this;
            return new mrbind_test.mr.cs.std_pair_const_int32_t_float(__ret, false, __owner);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
        }
    }

    /**
     * Dereferences a const iterator, returning the key.
     * The reference to things referred to by this object (if any) might be preserved as the return value.
     *
     * Calls `MR_C_phmap_parallel_flat_hash_map_int32_t_float_const_iterator_deref_key()`.
     */
    public int deref_key()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.phmap_parallel_flat_hash_map_int32_t_float.H0.MR_C_phmap_parallel_flat_hash_map_int32_t_float_const_iterator_deref_key.invokeExact(rawPointer());
            return __ret.reinterpret(4).get(java.lang.foreign.ValueLayout.JAVA_INT, 0);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
        }
    }

    /**
     * Dereferences a const iterator, returning the mapped value.
     * The reference to things referred to by this object (if any) might be preserved as the return value.
     *
     * Calls `MR_C_phmap_parallel_flat_hash_map_int32_t_float_const_iterator_deref_value()`.
     */
    public float deref_value()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.phmap_parallel_flat_hash_map_int32_t_float.H0.MR_C_phmap_parallel_flat_hash_map_int32_t_float_const_iterator_deref_value.invokeExact(rawPointer());
            return __ret.reinterpret(4).get(java.lang.foreign.ValueLayout.JAVA_FLOAT, 0);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
        }
    }

    /**
     * Increments a const iterator.
     *
     * Calls `MR_C_phmap_parallel_flat_hash_map_int32_t_float_const_iterator_incr()`.
     */
    public void incr()
    {
        try
        {
            mrbind_test.ffi.phmap_parallel_flat_hash_map_int32_t_float.H0.MR_C_phmap_parallel_flat_hash_map_int32_t_float_const_iterator_incr.invokeExact(rawPointer());
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
        }
    }
}
