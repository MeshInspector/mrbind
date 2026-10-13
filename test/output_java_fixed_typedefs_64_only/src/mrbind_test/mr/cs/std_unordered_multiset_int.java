package mrbind_test.mr.cs;

/**
 * Generated from C++ container `std::unordered_multiset<int>`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class std_unordered_multiset_int extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public std_unordered_multiset_int(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? std_unordered_multiset_int::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.std_unordered_multiset_int.H0.MR_C_std_unordered_multiset_int_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_unordered_multiset_int_DefaultConstruct()`.
     */
    public std_unordered_multiset_int()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_unordered_multiset_int.H0.MR_C_std_unordered_multiset_int_DefaultConstruct.invokeExact();
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
     * Calls `MR_C_std_unordered_multiset_int_ConstructFromAnother()`.
     */
    public std_unordered_multiset_int(mrbind_test.mr.cs.std_unordered_multiset_int other)
    {
        this(__ctor_constructFromAnother(other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.cs.std_unordered_multiset_int other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_unordered_multiset_int.H0.MR_C_std_unordered_multiset_int_ConstructFromAnother.invokeExact(mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(other, "other"));
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
     * Calls `MR_C_std_unordered_multiset_int_AssignFromAnother()`.
     */
    public void assignFromAnother(mrbind_test.mr.cs.std_unordered_multiset_int other)
    {
        try
        {
            mrbind_test.ffi.std_unordered_multiset_int.H0.MR_C_std_unordered_multiset_int_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(other, "other"));
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
     * Construct from a range of elements.
     *
     * Calls `MR_C_std_unordered_multiset_int_ConstructFromRange()`.
     */
    public std_unordered_multiset_int(java.lang.Integer ptr, long size)
    {
        this(__ctor_constructFromRange(ptr, size), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromRange(java.lang.Integer ptr, long size)
    {
        try (java.lang.foreign.Arena __arena = java.lang.foreign.Arena.ofConfined())
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_unordered_multiset_int.H0.MR_C_std_unordered_multiset_int_ConstructFromRange.invokeExact((java.lang.foreign.MemorySegment)(ptr == null ? java.lang.foreign.MemorySegment.NULL : mrbind_test.Ffi.alloc(__arena, java.lang.foreign.ValueLayout.JAVA_INT, ptr)), size);
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Assign from a range of elements, overwriting previous contents.
     *
     * Calls `MR_C_std_unordered_multiset_int_AssignFromRange()`.
     */
    public void assignFromRange(java.lang.Integer ptr, long size)
    {
        try (java.lang.foreign.Arena __arena = java.lang.foreign.Arena.ofConfined())
        {
            mrbind_test.ffi.std_unordered_multiset_int.H0.MR_C_std_unordered_multiset_int_AssignFromRange.invokeExact(rawPointer(), (java.lang.foreign.MemorySegment)(ptr == null ? java.lang.foreign.MemorySegment.NULL : mrbind_test.Ffi.alloc(__arena, java.lang.foreign.ValueLayout.JAVA_INT, ptr)), size);
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
     * The number of elements.
     *
     * Calls `MR_C_std_unordered_multiset_int_size()`.
     */
    public long size()
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.std_unordered_multiset_int.H0.MR_C_std_unordered_multiset_int_size.invokeExact(rawPointer());
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
     * Calls `MR_C_std_unordered_multiset_int_empty()`.
     */
    public boolean empty()
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_unordered_multiset_int.H0.MR_C_std_unordered_multiset_int_empty.invokeExact(rawPointer());
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
     * Calls `MR_C_std_unordered_multiset_int_clear()`.
     */
    public void clear()
    {
        try
        {
            mrbind_test.ffi.std_unordered_multiset_int.H0.MR_C_std_unordered_multiset_int_clear.invokeExact(rawPointer());
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
     * Calls `MR_C_std_unordered_multiset_int_count()`.
     */
    public long count(int key)
    {
        try (java.lang.foreign.Arena __arena = java.lang.foreign.Arena.ofConfined())
        {
            long __ret = (long)mrbind_test.ffi.std_unordered_multiset_int.H0.MR_C_std_unordered_multiset_int_count.invokeExact(rawPointer(), mrbind_test.Ffi.alloc(__arena, java.lang.foreign.ValueLayout.JAVA_INT, key));
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
     * Calls `MR_C_std_unordered_multiset_int_find()`.
     */
    public mrbind_test.mr.cs.std_unordered_multiset_int_const_iterator find(int key)
    {
        try (java.lang.foreign.Arena __arena = java.lang.foreign.Arena.ofConfined())
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_unordered_multiset_int.H0.MR_C_std_unordered_multiset_int_find.invokeExact(rawPointer(), mrbind_test.Ffi.alloc(__arena, java.lang.foreign.ValueLayout.JAVA_INT, key));
            return new mrbind_test.mr.cs.std_unordered_multiset_int_const_iterator(__ret, true, null);
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
     * Calls `MR_C_std_unordered_multiset_int_insert()`.
     */
    public void insert(int new_elem)
    {
        try
        {
            mrbind_test.ffi.std_unordered_multiset_int.H0.MR_C_std_unordered_multiset_int_insert.invokeExact(rawPointer(), new_elem);
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
     * Calls `MR_C_std_unordered_multiset_int_begin()`.
     */
    public mrbind_test.mr.cs.std_unordered_multiset_int_const_iterator begin()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_unordered_multiset_int.H0.MR_C_std_unordered_multiset_int_begin.invokeExact(rawPointer());
            return new mrbind_test.mr.cs.std_unordered_multiset_int_const_iterator(__ret, true, null);
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
     * Tests whether a const iterator is the begin iterator.
     *
     * Calls `MR_C_std_unordered_multiset_int_is_begin()`.
     */
    public boolean is_begin(mrbind_test.mr.cs.std_unordered_multiset_int_const_iterator iter)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_unordered_multiset_int.H0.MR_C_std_unordered_multiset_int_is_begin.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(iter, "iter"));
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

    /**
     * The end iterator, const.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_unordered_multiset_int_end()`.
     */
    public mrbind_test.mr.cs.std_unordered_multiset_int_const_iterator end()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_unordered_multiset_int.H0.MR_C_std_unordered_multiset_int_end.invokeExact(rawPointer());
            return new mrbind_test.mr.cs.std_unordered_multiset_int_const_iterator(__ret, true, null);
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
     * Calls `MR_C_std_unordered_multiset_int_is_end()`.
     */
    public boolean is_end(mrbind_test.mr.cs.std_unordered_multiset_int_const_iterator iter)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_unordered_multiset_int.H0.MR_C_std_unordered_multiset_int_is_end.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(iter, "iter"));
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
