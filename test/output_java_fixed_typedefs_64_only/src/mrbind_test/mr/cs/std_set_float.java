package mrbind_test.mr.cs;

/**
 * Generated from C++ container `std::set<float>`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class std_set_float extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public std_set_float(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? std_set_float::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.std_set_float.H0.MR_C_std_set_float_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_set_float_DefaultConstruct()`.
     */
    public std_set_float()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_set_float.H0.MR_C_std_set_float_DefaultConstruct.invokeExact();
            mrbind_test.Ffi.checkException();
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
     * Calls `MR_C_std_set_float_ConstructFromAnother()`.
     */
    public std_set_float(mrbind_test.mr.cs.std_set_float other)
    {
        this(__ctor_constructFromAnother(other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.cs.std_set_float other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_set_float.H0.MR_C_std_set_float_ConstructFromAnother.invokeExact(mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(other, "other"));
            mrbind_test.Ffi.checkException();
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
     * Calls `MR_C_std_set_float_AssignFromAnother()`.
     */
    public void assignFromAnother(mrbind_test.mr.cs.std_set_float other)
    {
        try
        {
            mrbind_test.ffi.std_set_float.H0.MR_C_std_set_float_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(other, "other"));
            mrbind_test.Ffi.checkException();
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
     * The number of elements.
     *
     * Calls `MR_C_std_set_float_size()`.
     */
    public long size()
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.std_set_float.H0.MR_C_std_set_float_size.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
            return __ret;
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
     * Returns true if the size is zero.
     *
     * Calls `MR_C_std_set_float_empty()`.
     */
    public boolean empty()
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_set_float.H0.MR_C_std_set_float_empty.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
            return __ret;
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
     * Removes all elements from the container.
     *
     * Calls `MR_C_std_set_float_clear()`.
     */
    public void clear()
    {
        try
        {
            mrbind_test.ffi.std_set_float.H0.MR_C_std_set_float_clear.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
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
     * Checks if the contain contains this key.
     *
     * Calls `MR_C_std_set_float_contains()`.
     */
    public boolean contains(float key)
    {
        try (java.lang.foreign.Arena __arena = java.lang.foreign.Arena.ofConfined())
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_set_float.H0.MR_C_std_set_float_contains.invokeExact(rawPointer(), mrbind_test.Ffi.alloc(__arena, java.lang.foreign.ValueLayout.JAVA_FLOAT, key));
            mrbind_test.Ffi.checkException();
            return __ret;
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
     * Finds the element by key, or returns the end iterator if no such key. Returns a read-only iterator.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_set_float_find()`.
     */
    public mrbind_test.mr.cs.std_set_float_const_iterator find(float key)
    {
        try (java.lang.foreign.Arena __arena = java.lang.foreign.Arena.ofConfined())
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_set_float.H0.MR_C_std_set_float_find.invokeExact(rawPointer(), mrbind_test.Ffi.alloc(__arena, java.lang.foreign.ValueLayout.JAVA_FLOAT, key));
            mrbind_test.Ffi.checkException();
            return new mrbind_test.mr.cs.std_set_float_const_iterator(__ret, true, null);
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
     * Inserts a new element.
     *
     * Calls `MR_C_std_set_float_insert()`.
     */
    public void insert(float new_elem)
    {
        try
        {
            mrbind_test.ffi.std_set_float.H0.MR_C_std_set_float_insert.invokeExact(rawPointer(), new_elem);
            mrbind_test.Ffi.checkException();
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
     * The begin iterator, const.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_set_float_begin()`.
     */
    public mrbind_test.mr.cs.std_set_float_const_iterator begin()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_set_float.H0.MR_C_std_set_float_begin.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
            return new mrbind_test.mr.cs.std_set_float_const_iterator(__ret, true, null);
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
     * The end iterator, const.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_set_float_end()`.
     */
    public mrbind_test.mr.cs.std_set_float_const_iterator end()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_set_float.H0.MR_C_std_set_float_end.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
            return new mrbind_test.mr.cs.std_set_float_const_iterator(__ret, true, null);
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
     * Tests whether a const iterator is the end iterator.
     *
     * Calls `MR_C_std_set_float_is_end()`.
     */
    public boolean is_end(mrbind_test.mr.cs.std_set_float_const_iterator iter)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_set_float.H0.MR_C_std_set_float_is_end.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(iter, "iter"));
            mrbind_test.Ffi.checkException();
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
            java.lang.ref.Reference.reachabilityFence(iter);
        }
    }
}
