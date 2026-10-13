package mrbind_test.mr.cs;

/**
 * Generated from C++ container `std::list<int>`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class std_list_int extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public std_list_int(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? std_list_int::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.std_list_int.H0.MR_C_std_list_int_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_list_int_DefaultConstruct()`.
     */
    public std_list_int()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_list_int.H0.MR_C_std_list_int_DefaultConstruct.invokeExact();
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
     * Calls `MR_C_std_list_int_ConstructFromAnother()`.
     */
    public std_list_int(mrbind_test.mr.cs.std_list_int other)
    {
        this(__ctor_constructFromAnother(other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.cs.std_list_int other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_list_int.H0.MR_C_std_list_int_ConstructFromAnother.invokeExact(mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(other, "other"));
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
     * Calls `MR_C_std_list_int_AssignFromAnother()`.
     */
    public void assignFromAnother(mrbind_test.mr.cs.std_list_int other)
    {
        try
        {
            mrbind_test.ffi.std_list_int.H0.MR_C_std_list_int_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(other, "other"));
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
     * Calls `MR_C_std_list_int_ConstructFromRange()`.
     */
    public std_list_int(java.lang.Integer ptr, long size)
    {
        this(__ctor_constructFromRange(ptr, size), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromRange(java.lang.Integer ptr, long size)
    {
        try (java.lang.foreign.Arena __arena = java.lang.foreign.Arena.ofConfined())
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_list_int.H0.MR_C_std_list_int_ConstructFromRange.invokeExact((java.lang.foreign.MemorySegment)(ptr == null ? java.lang.foreign.MemorySegment.NULL : mrbind_test.Ffi.alloc(__arena, java.lang.foreign.ValueLayout.JAVA_INT, ptr)), size);
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
     * Calls `MR_C_std_list_int_AssignFromRange()`.
     */
    public void assignFromRange(java.lang.Integer ptr, long size)
    {
        try (java.lang.foreign.Arena __arena = java.lang.foreign.Arena.ofConfined())
        {
            mrbind_test.ffi.std_list_int.H0.MR_C_std_list_int_AssignFromRange.invokeExact(rawPointer(), (java.lang.foreign.MemorySegment)(ptr == null ? java.lang.foreign.MemorySegment.NULL : mrbind_test.Ffi.alloc(__arena, java.lang.foreign.ValueLayout.JAVA_INT, ptr)), size);
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
     * Calls `MR_C_std_list_int_size()`.
     */
    public long size()
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.std_list_int.H0.MR_C_std_list_int_size.invokeExact(rawPointer());
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
     * Calls `MR_C_std_list_int_empty()`.
     */
    public boolean empty()
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_list_int.H0.MR_C_std_list_int_empty.invokeExact(rawPointer());
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
     * Calls `MR_C_std_list_int_resize()`.
     */
    public void resize(long new_size)
    {
        try
        {
            mrbind_test.ffi.std_list_int.H0.MR_C_std_list_int_resize.invokeExact(rawPointer(), new_size);
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
     * Resizes the container. The new elements if any are set to the specified value.
     *
     * Calls `MR_C_std_list_int_resize_with_default_value()`.
     */
    public void resize_with_default_value(long new_size, int value)
    {
        try
        {
            mrbind_test.ffi.std_list_int.H0.MR_C_std_list_int_resize_with_default_value.invokeExact(rawPointer(), new_size, value);
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
     * Calls `MR_C_std_list_int_clear()`.
     */
    public void clear()
    {
        try
        {
            mrbind_test.ffi.std_list_int.H0.MR_C_std_list_int_clear.invokeExact(rawPointer());
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
     * Calls `MR_C_std_list_int_front()`.
     */
    public java.lang.Integer front()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_list_int.H0.MR_C_std_list_int_front.invokeExact(rawPointer());
            return __ret.address() == 0 ? null : (java.lang.Integer)__ret.reinterpret(4).get(java.lang.foreign.ValueLayout.JAVA_INT, 0);
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
     * Calls `MR_C_std_list_int_front_mut()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment front_mut()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_list_int.H0.MR_C_std_list_int_front_mut.invokeExact(rawPointer());
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
     * The last element or null if empty, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_list_int_back()`.
     */
    public java.lang.Integer back()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_list_int.H0.MR_C_std_list_int_back.invokeExact(rawPointer());
            return __ret.address() == 0 ? null : (java.lang.Integer)__ret.reinterpret(4).get(java.lang.foreign.ValueLayout.JAVA_INT, 0);
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
     * Calls `MR_C_std_list_int_back_mut()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment back_mut()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_list_int.H0.MR_C_std_list_int_back_mut.invokeExact(rawPointer());
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
     * Inserts a new element at the end.
     *
     * Calls `MR_C_std_list_int_push_back()`.
     */
    public void push_back(int new_elem)
    {
        try
        {
            mrbind_test.ffi.std_list_int.H0.MR_C_std_list_int_push_back.invokeExact(rawPointer(), new_elem);
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
     * Removes one element from the end.
     *
     * Calls `MR_C_std_list_int_pop_back()`.
     */
    public void pop_back()
    {
        try
        {
            mrbind_test.ffi.std_list_int.H0.MR_C_std_list_int_pop_back.invokeExact(rawPointer());
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
     *
     * Calls `MR_C_std_list_int_push_front()`.
     */
    public void push_front(int new_elem)
    {
        try
        {
            mrbind_test.ffi.std_list_int.H0.MR_C_std_list_int_push_front.invokeExact(rawPointer(), new_elem);
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
     * Removes one element from the beginning.
     *
     * Calls `MR_C_std_list_int_pop_front()`.
     */
    public void pop_front()
    {
        try
        {
            mrbind_test.ffi.std_list_int.H0.MR_C_std_list_int_pop_front.invokeExact(rawPointer());
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
     * Inserts a new element right before the specified position.
     *
     * Calls `MR_C_std_list_int_insert_at_mutable_iter()`.
     */
    public void insert_at_mutable_iter(mrbind_test.mr.cs.std_list_int_iterator position, int new_elem)
    {
        try
        {
            mrbind_test.ffi.std_list_int.H0.MR_C_std_list_int_insert_at_mutable_iter.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(position, "position"), new_elem);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
            java.lang.ref.Reference.reachabilityFence(position);
        }
    }

    /**
     * Erases the element at the specified position.
     *
     * Calls `MR_C_std_list_int_erase_at_mutable_iter()`.
     */
    public void erase_at_mutable_iter(mrbind_test.mr.cs.std_list_int_iterator position)
    {
        try
        {
            mrbind_test.ffi.std_list_int.H0.MR_C_std_list_int_erase_at_mutable_iter.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(position, "position"));
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
            java.lang.ref.Reference.reachabilityFence(position);
        }
    }

    /**
     * Inserts a new element right before the specified position. This version takes the position in form of a const iterator, that's the only difference.
     *
     * Calls `MR_C_std_list_int_insert_at_iter()`.
     */
    public void insert_at_iter(mrbind_test.mr.cs.std_list_int_const_iterator position, int new_elem)
    {
        try
        {
            mrbind_test.ffi.std_list_int.H0.MR_C_std_list_int_insert_at_iter.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(position, "position"), new_elem);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
            java.lang.ref.Reference.reachabilityFence(position);
        }
    }

    /**
     * Erases the element at the specified position. This version takes the position in form of a const iterator, that's the only difference.
     *
     * Calls `MR_C_std_list_int_erase_at_iter()`.
     */
    public void erase_at_iter(mrbind_test.mr.cs.std_list_int_const_iterator position)
    {
        try
        {
            mrbind_test.ffi.std_list_int.H0.MR_C_std_list_int_erase_at_iter.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(position, "position"));
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
            java.lang.ref.Reference.reachabilityFence(position);
        }
    }

    /**
     * The begin iterator, const.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_list_int_begin()`.
     */
    public mrbind_test.mr.cs.std_list_int_const_iterator begin()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_list_int.H0.MR_C_std_list_int_begin.invokeExact(rawPointer());
            return new mrbind_test.mr.cs.std_list_int_const_iterator(__ret, true, null);
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
     * Calls `MR_C_std_list_int_is_begin()`.
     */
    public boolean is_begin(mrbind_test.mr.cs.std_list_int_const_iterator iter)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_list_int.H0.MR_C_std_list_int_is_begin.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(iter, "iter"));
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
     * Calls `MR_C_std_list_int_begin_mut()`.
     */
    public mrbind_test.mr.cs.std_list_int_iterator begin_mut()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_list_int.H0.MR_C_std_list_int_begin_mut.invokeExact(rawPointer());
            return new mrbind_test.mr.cs.std_list_int_iterator(__ret, true, null);
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
     * Calls `MR_C_std_list_int_is_begin_mut()`.
     */
    public boolean is_begin(mrbind_test.mr.cs.std_list_int_iterator iter)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_list_int.H0.MR_C_std_list_int_is_begin_mut.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(iter, "iter"));
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
     * Calls `MR_C_std_list_int_end()`.
     */
    public mrbind_test.mr.cs.std_list_int_const_iterator end()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_list_int.H0.MR_C_std_list_int_end.invokeExact(rawPointer());
            return new mrbind_test.mr.cs.std_list_int_const_iterator(__ret, true, null);
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
     * Calls `MR_C_std_list_int_is_end()`.
     */
    public boolean is_end(mrbind_test.mr.cs.std_list_int_const_iterator iter)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_list_int.H0.MR_C_std_list_int_is_end.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(iter, "iter"));
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
     * Calls `MR_C_std_list_int_end_mut()`.
     */
    public mrbind_test.mr.cs.std_list_int_iterator end_mut()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_list_int.H0.MR_C_std_list_int_end_mut.invokeExact(rawPointer());
            return new mrbind_test.mr.cs.std_list_int_iterator(__ret, true, null);
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
     * Calls `MR_C_std_list_int_is_end_mut()`.
     */
    public boolean is_end(mrbind_test.mr.cs.std_list_int_iterator iter)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_list_int.H0.MR_C_std_list_int_is_end_mut.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(iter, "iter"));
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
