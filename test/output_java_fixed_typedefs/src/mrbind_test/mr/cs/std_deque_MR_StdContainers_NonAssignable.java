package mrbind_test.mr.cs;

/**
 * Generated from C++ container `std::deque<MR::StdContainers::NonAssignable>`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class std_deque_MR_StdContainers_NonAssignable extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public std_deque_MR_StdContainers_NonAssignable(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? std_deque_MR_StdContainers_NonAssignable::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.std_deque_MR_StdContainers_NonAssignable.H0.MR_C_std_deque_MR_StdContainers_NonAssignable_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_DefaultConstruct()`.
     */
    public std_deque_MR_StdContainers_NonAssignable()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_deque_MR_StdContainers_NonAssignable.H0.MR_C_std_deque_MR_StdContainers_NonAssignable_DefaultConstruct.invokeExact();
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
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_ConstructFromAnother()`.
     */
    public std_deque_MR_StdContainers_NonAssignable(mrbind_test.mr.cs.std_deque_MR_StdContainers_NonAssignable other)
    {
        this(__ctor_constructFromAnother(other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.cs.std_deque_MR_StdContainers_NonAssignable other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_deque_MR_StdContainers_NonAssignable.H0.MR_C_std_deque_MR_StdContainers_NonAssignable_ConstructFromAnother.invokeExact(mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(other, "other"));
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
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_AssignFromAnother()`.
     */
    public void assignFromAnother(mrbind_test.mr.cs.std_deque_MR_StdContainers_NonAssignable other)
    {
        try
        {
            mrbind_test.ffi.std_deque_MR_StdContainers_NonAssignable.H0.MR_C_std_deque_MR_StdContainers_NonAssignable_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(other, "other"));
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
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_size()`.
     */
    public long size()
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.std_deque_MR_StdContainers_NonAssignable.H0.MR_C_std_deque_MR_StdContainers_NonAssignable_size.invokeExact(rawPointer());
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
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_empty()`.
     */
    public boolean empty()
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_deque_MR_StdContainers_NonAssignable.H0.MR_C_std_deque_MR_StdContainers_NonAssignable_empty.invokeExact(rawPointer());
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
     * Resizes the container. The new elements if any are zeroed.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_resize()`.
     */
    public void resize(long new_size)
    {
        try
        {
            mrbind_test.ffi.std_deque_MR_StdContainers_NonAssignable.H0.MR_C_std_deque_MR_StdContainers_NonAssignable_resize.invokeExact(rawPointer(), new_size);
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
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_clear()`.
     */
    public void clear()
    {
        try
        {
            mrbind_test.ffi.std_deque_MR_StdContainers_NonAssignable.H0.MR_C_std_deque_MR_StdContainers_NonAssignable_clear.invokeExact(rawPointer());
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
     * The element at a specific index, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_at()`.
     */
    public mrbind_test.mr.stdcontainers.NonAssignable at(long i)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_deque_MR_StdContainers_NonAssignable.H0.MR_C_std_deque_MR_StdContainers_NonAssignable_at.invokeExact(rawPointer(), i);
            java.lang.Object __owner = this;
            return new mrbind_test.mr.stdcontainers.NonAssignable(__ret, false, __owner);
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
     * The element at a specific index, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_at_mut()`.
     */
    public mrbind_test.mr.stdcontainers.NonAssignable at_mut(long i)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_deque_MR_StdContainers_NonAssignable.H0.MR_C_std_deque_MR_StdContainers_NonAssignable_at_mut.invokeExact(rawPointer(), i);
            java.lang.Object __owner = this;
            return new mrbind_test.mr.stdcontainers.NonAssignable(__ret, false, __owner);
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
     * The first element or null if empty, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_front()`.
     */
    public mrbind_test.mr.stdcontainers.NonAssignable front()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_deque_MR_StdContainers_NonAssignable.H0.MR_C_std_deque_MR_StdContainers_NonAssignable_front.invokeExact(rawPointer());
            java.lang.Object __owner = this;
            return __ret.address() == 0 ? null : new mrbind_test.mr.stdcontainers.NonAssignable(__ret, false, __owner);
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
     * The first element or null if empty, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_front_mut()`.
     */
    public mrbind_test.mr.stdcontainers.NonAssignable front_mut()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_deque_MR_StdContainers_NonAssignable.H0.MR_C_std_deque_MR_StdContainers_NonAssignable_front_mut.invokeExact(rawPointer());
            java.lang.Object __owner = this;
            return __ret.address() == 0 ? null : new mrbind_test.mr.stdcontainers.NonAssignable(__ret, false, __owner);
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
     * The last element or null if empty, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_back()`.
     */
    public mrbind_test.mr.stdcontainers.NonAssignable back()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_deque_MR_StdContainers_NonAssignable.H0.MR_C_std_deque_MR_StdContainers_NonAssignable_back.invokeExact(rawPointer());
            java.lang.Object __owner = this;
            return __ret.address() == 0 ? null : new mrbind_test.mr.stdcontainers.NonAssignable(__ret, false, __owner);
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
     * The last element or null if empty, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_back_mut()`.
     */
    public mrbind_test.mr.stdcontainers.NonAssignable back_mut()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_deque_MR_StdContainers_NonAssignable.H0.MR_C_std_deque_MR_StdContainers_NonAssignable_back_mut.invokeExact(rawPointer());
            java.lang.Object __owner = this;
            return __ret.address() == 0 ? null : new mrbind_test.mr.stdcontainers.NonAssignable(__ret, false, __owner);
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
     * Inserts a new element at the end.
     * The reference to the parameter `new_elem` might be preserved in this object.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_push_back()`.
     */
    public void push_back(mrbind_test.mr.stdcontainers.NonAssignable new_elem)
    {
        try
        {
            mrbind_test.ffi.std_deque_MR_StdContainers_NonAssignable.H0.MR_C_std_deque_MR_StdContainers_NonAssignable_push_back.invokeExact(rawPointer(), mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(new_elem, "new_elem"));
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
            java.lang.ref.Reference.reachabilityFence(new_elem);
        }
    }

    /**
     * Removes one element from the end.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_pop_back()`.
     */
    public void pop_back()
    {
        try
        {
            mrbind_test.ffi.std_deque_MR_StdContainers_NonAssignable.H0.MR_C_std_deque_MR_StdContainers_NonAssignable_pop_back.invokeExact(rawPointer());
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
     * Inserts a new element at the beginning.
     * The reference to the parameter `new_elem` might be preserved in this object.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_push_front()`.
     */
    public void push_front(mrbind_test.mr.stdcontainers.NonAssignable new_elem)
    {
        try
        {
            mrbind_test.ffi.std_deque_MR_StdContainers_NonAssignable.H0.MR_C_std_deque_MR_StdContainers_NonAssignable_push_front.invokeExact(rawPointer(), mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(new_elem, "new_elem"));
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
            java.lang.ref.Reference.reachabilityFence(new_elem);
        }
    }

    /**
     * Removes one element from the beginning.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_pop_front()`.
     */
    public void pop_front()
    {
        try
        {
            mrbind_test.ffi.std_deque_MR_StdContainers_NonAssignable.H0.MR_C_std_deque_MR_StdContainers_NonAssignable_pop_front.invokeExact(rawPointer());
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
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_begin()`.
     */
    public mrbind_test.mr.cs.std_deque_MR_StdContainers_NonAssignable_const_iterator begin()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_deque_MR_StdContainers_NonAssignable.H0.MR_C_std_deque_MR_StdContainers_NonAssignable_begin.invokeExact(rawPointer());
            return new mrbind_test.mr.cs.std_deque_MR_StdContainers_NonAssignable_const_iterator(__ret, true, null);
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
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_is_begin()`.
     */
    public boolean is_begin(mrbind_test.mr.cs.std_deque_MR_StdContainers_NonAssignable_const_iterator iter)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_deque_MR_StdContainers_NonAssignable.H0.MR_C_std_deque_MR_StdContainers_NonAssignable_is_begin.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(iter, "iter"));
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
     * The begin iterator, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_begin_mut()`.
     */
    public mrbind_test.mr.cs.std_deque_MR_StdContainers_NonAssignable_iterator begin_mut()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_deque_MR_StdContainers_NonAssignable.H0.MR_C_std_deque_MR_StdContainers_NonAssignable_begin_mut.invokeExact(rawPointer());
            return new mrbind_test.mr.cs.std_deque_MR_StdContainers_NonAssignable_iterator(__ret, true, null);
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
     * Tests whether a mutable iterator is the begin iterator.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_is_begin_mut()`.
     */
    public boolean is_begin(mrbind_test.mr.cs.std_deque_MR_StdContainers_NonAssignable_iterator iter)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_deque_MR_StdContainers_NonAssignable.H0.MR_C_std_deque_MR_StdContainers_NonAssignable_is_begin_mut.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(iter, "iter"));
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
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_end()`.
     */
    public mrbind_test.mr.cs.std_deque_MR_StdContainers_NonAssignable_const_iterator end()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_deque_MR_StdContainers_NonAssignable.H0.MR_C_std_deque_MR_StdContainers_NonAssignable_end.invokeExact(rawPointer());
            return new mrbind_test.mr.cs.std_deque_MR_StdContainers_NonAssignable_const_iterator(__ret, true, null);
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
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_is_end()`.
     */
    public boolean is_end(mrbind_test.mr.cs.std_deque_MR_StdContainers_NonAssignable_const_iterator iter)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_deque_MR_StdContainers_NonAssignable.H0.MR_C_std_deque_MR_StdContainers_NonAssignable_is_end.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(iter, "iter"));
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
     * The end iterator, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_end_mut()`.
     */
    public mrbind_test.mr.cs.std_deque_MR_StdContainers_NonAssignable_iterator end_mut()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_deque_MR_StdContainers_NonAssignable.H0.MR_C_std_deque_MR_StdContainers_NonAssignable_end_mut.invokeExact(rawPointer());
            return new mrbind_test.mr.cs.std_deque_MR_StdContainers_NonAssignable_iterator(__ret, true, null);
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
     * Tests whether a mutable iterator is the end iterator.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_is_end_mut()`.
     */
    public boolean is_end(mrbind_test.mr.cs.std_deque_MR_StdContainers_NonAssignable_iterator iter)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_deque_MR_StdContainers_NonAssignable.H0.MR_C_std_deque_MR_StdContainers_NonAssignable_is_end_mut.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(iter, "iter"));
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
     * Convert a const iterator to an index.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_to_index()`.
     */
    public long to_index(mrbind_test.mr.cs.std_deque_MR_StdContainers_NonAssignable_const_iterator iter)
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.std_deque_MR_StdContainers_NonAssignable.H0.MR_C_std_deque_MR_StdContainers_NonAssignable_to_index.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(iter, "iter"));
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
     * Convert a mutable iterator to an index.
     *
     * Calls `MR_C_std_deque_MR_StdContainers_NonAssignable_to_index_mut()`.
     */
    public long to_index(mrbind_test.mr.cs.std_deque_MR_StdContainers_NonAssignable_iterator iter)
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.std_deque_MR_StdContainers_NonAssignable.H0.MR_C_std_deque_MR_StdContainers_NonAssignable_to_index_mut.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(iter, "iter"));
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
