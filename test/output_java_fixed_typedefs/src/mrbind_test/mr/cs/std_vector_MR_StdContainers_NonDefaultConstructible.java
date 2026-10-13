package mrbind_test.mr.cs;

/**
 * Generated from C++ container `std::vector<MR::StdContainers::NonDefaultConstructible>`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class std_vector_MR_StdContainers_NonDefaultConstructible extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public std_vector_MR_StdContainers_NonDefaultConstructible(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? std_vector_MR_StdContainers_NonDefaultConstructible::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.std_vector_MR_StdContainers_NonDefaultConstructible.H0.MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_DefaultConstruct()`.
     */
    public std_vector_MR_StdContainers_NonDefaultConstructible()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_vector_MR_StdContainers_NonDefaultConstructible.H0.MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_DefaultConstruct.invokeExact();
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
     * Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_ConstructFromAnother()`.
     */
    public std_vector_MR_StdContainers_NonDefaultConstructible(mrbind_test.mr.cs.std_vector_MR_StdContainers_NonDefaultConstructible other)
    {
        this(__ctor_constructFromAnother(other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.cs.std_vector_MR_StdContainers_NonDefaultConstructible other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_vector_MR_StdContainers_NonDefaultConstructible.H0.MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_ConstructFromAnother.invokeExact(mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(other, "other"));
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
     * Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_AssignFromAnother()`.
     */
    public void assignFromAnother(mrbind_test.mr.cs.std_vector_MR_StdContainers_NonDefaultConstructible other)
    {
        try
        {
            mrbind_test.ffi.std_vector_MR_StdContainers_NonDefaultConstructible.H0.MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(other, "other"));
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
     * Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_size()`.
     */
    public long size()
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.std_vector_MR_StdContainers_NonDefaultConstructible.H0.MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_size.invokeExact(rawPointer());
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
     * Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_empty()`.
     */
    public boolean empty()
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_vector_MR_StdContainers_NonDefaultConstructible.H0.MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_empty.invokeExact(rawPointer());
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
     * Resizes the container. The new elements if any are set to the specified value.
     *
     * Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_resize_with_default_value()`.
     */
    public void resize_with_default_value(long new_size, mrbind_test.mr.stdcontainers.NonDefaultConstructible value)
    {
        try
        {
            mrbind_test.ffi.std_vector_MR_StdContainers_NonDefaultConstructible.H0.MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_resize_with_default_value.invokeExact(rawPointer(), new_size, mrbind_test.Ffi.ptrNonNull(value, "value"));
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
            java.lang.ref.Reference.reachabilityFence(value);
        }
    }

    /**
     * Removes all elements from the container.
     *
     * Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_clear()`.
     */
    public void clear()
    {
        try
        {
            mrbind_test.ffi.std_vector_MR_StdContainers_NonDefaultConstructible.H0.MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_clear.invokeExact(rawPointer());
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
     * The memory capacity, measued in the number of elements.
     *
     * Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_capacity()`.
     */
    public long capacity()
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.std_vector_MR_StdContainers_NonDefaultConstructible.H0.MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_capacity.invokeExact(rawPointer());
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
     * Reserves memory for a certain number of elements. Never shrinks the memory.
     *
     * Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_reserve()`.
     */
    public void reserve(long new_capacity)
    {
        try
        {
            mrbind_test.ffi.std_vector_MR_StdContainers_NonDefaultConstructible.H0.MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_reserve.invokeExact(rawPointer(), new_capacity);
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
     * Shrinks the capacity to match the size.
     *
     * Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_shrink_to_fit()`.
     */
    public void shrink_to_fit()
    {
        try
        {
            mrbind_test.ffi.std_vector_MR_StdContainers_NonDefaultConstructible.H0.MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_shrink_to_fit.invokeExact(rawPointer());
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
     * The element at a specific index, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_at()`.
     */
    public mrbind_test.mr.stdcontainers.NonDefaultConstructible at(long i)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_vector_MR_StdContainers_NonDefaultConstructible.H0.MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_at.invokeExact(rawPointer(), i);
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return new mrbind_test.mr.stdcontainers.NonDefaultConstructible(__ret, false, __owner);
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
     * Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_at_mut()`.
     */
    public mrbind_test.mr.stdcontainers.NonDefaultConstructible at_mut(long i)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_vector_MR_StdContainers_NonDefaultConstructible.H0.MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_at_mut.invokeExact(rawPointer(), i);
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return new mrbind_test.mr.stdcontainers.NonDefaultConstructible(__ret, false, __owner);
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
     * Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_front()`.
     */
    public mrbind_test.mr.stdcontainers.NonDefaultConstructible front()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_vector_MR_StdContainers_NonDefaultConstructible.H0.MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_front.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return __ret.address() == 0 ? null : new mrbind_test.mr.stdcontainers.NonDefaultConstructible(__ret, false, __owner);
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
     * Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_front_mut()`.
     */
    public mrbind_test.mr.stdcontainers.NonDefaultConstructible front_mut()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_vector_MR_StdContainers_NonDefaultConstructible.H0.MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_front_mut.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return __ret.address() == 0 ? null : new mrbind_test.mr.stdcontainers.NonDefaultConstructible(__ret, false, __owner);
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
     * Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_back()`.
     */
    public mrbind_test.mr.stdcontainers.NonDefaultConstructible back()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_vector_MR_StdContainers_NonDefaultConstructible.H0.MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_back.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return __ret.address() == 0 ? null : new mrbind_test.mr.stdcontainers.NonDefaultConstructible(__ret, false, __owner);
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
     * Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_back_mut()`.
     */
    public mrbind_test.mr.stdcontainers.NonDefaultConstructible back_mut()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_vector_MR_StdContainers_NonDefaultConstructible.H0.MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_back_mut.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return __ret.address() == 0 ? null : new mrbind_test.mr.stdcontainers.NonDefaultConstructible(__ret, false, __owner);
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
     * Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_push_back()`.
     */
    public void push_back(mrbind_test.mr.stdcontainers.NonDefaultConstructible new_elem)
    {
        try
        {
            mrbind_test.ffi.std_vector_MR_StdContainers_NonDefaultConstructible.H0.MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_push_back.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(new_elem, "new_elem"));
            mrbind_test.Ffi.checkException();
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
     * Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_pop_back()`.
     */
    public void pop_back()
    {
        try
        {
            mrbind_test.ffi.std_vector_MR_StdContainers_NonDefaultConstructible.H0.MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_pop_back.invokeExact(rawPointer());
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
     * Inserts a new element right before the specified position.
     * The reference to the parameter `new_elem` might be preserved in this object.
     *
     * Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_insert()`.
     */
    public void insert(long position, mrbind_test.mr.stdcontainers.NonDefaultConstructible new_elem)
    {
        try
        {
            mrbind_test.ffi.std_vector_MR_StdContainers_NonDefaultConstructible.H0.MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_insert.invokeExact(rawPointer(), position, mrbind_test.Ffi.ptrNonNull(new_elem, "new_elem"));
            mrbind_test.Ffi.checkException();
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
     * Erases the element at the specified position.
     *
     * Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_erase()`.
     */
    public void erase(long position)
    {
        try
        {
            mrbind_test.ffi.std_vector_MR_StdContainers_NonDefaultConstructible.H0.MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_erase.invokeExact(rawPointer(), position);
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
     * Inserts a new element right before the specified position.
     * The reference to the parameter `new_elem` might be preserved in this object.
     *
     * Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_insert_at_mutable_iter()`.
     */
    public void insert_at_mutable_iter(mrbind_test.mr.cs.std_vector_MR_StdContainers_NonDefaultConstructible_iterator position, mrbind_test.mr.stdcontainers.NonDefaultConstructible new_elem)
    {
        try
        {
            mrbind_test.ffi.std_vector_MR_StdContainers_NonDefaultConstructible.H0.MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_insert_at_mutable_iter.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(position, "position"), mrbind_test.Ffi.ptrNonNull(new_elem, "new_elem"));
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
            java.lang.ref.Reference.reachabilityFence(position);
            java.lang.ref.Reference.reachabilityFence(new_elem);
        }
    }

    /**
     * Erases the element at the specified position.
     *
     * Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_erase_at_mutable_iter()`.
     */
    public void erase_at_mutable_iter(mrbind_test.mr.cs.std_vector_MR_StdContainers_NonDefaultConstructible_iterator position)
    {
        try
        {
            mrbind_test.ffi.std_vector_MR_StdContainers_NonDefaultConstructible.H0.MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_erase_at_mutable_iter.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(position, "position"));
            mrbind_test.Ffi.checkException();
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
     * The reference to the parameter `new_elem` might be preserved in this object.
     *
     * Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_insert_at_iter()`.
     */
    public void insert_at_iter(mrbind_test.mr.cs.std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator position, mrbind_test.mr.stdcontainers.NonDefaultConstructible new_elem)
    {
        try
        {
            mrbind_test.ffi.std_vector_MR_StdContainers_NonDefaultConstructible.H0.MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_insert_at_iter.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(position, "position"), mrbind_test.Ffi.ptrNonNull(new_elem, "new_elem"));
            mrbind_test.Ffi.checkException();
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
            java.lang.ref.Reference.reachabilityFence(position);
            java.lang.ref.Reference.reachabilityFence(new_elem);
        }
    }

    /**
     * Erases the element at the specified position. This version takes the position in form of a const iterator, that's the only difference.
     *
     * Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_erase_at_iter()`.
     */
    public void erase_at_iter(mrbind_test.mr.cs.std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator position)
    {
        try
        {
            mrbind_test.ffi.std_vector_MR_StdContainers_NonDefaultConstructible.H0.MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_erase_at_iter.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(position, "position"));
            mrbind_test.Ffi.checkException();
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
     * Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_begin()`.
     */
    public mrbind_test.mr.cs.std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator begin()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_vector_MR_StdContainers_NonDefaultConstructible.H0.MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_begin.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
            return new mrbind_test.mr.cs.std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator(__ret, true, null);
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
     * Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_is_begin()`.
     */
    public boolean is_begin(mrbind_test.mr.cs.std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator iter)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_vector_MR_StdContainers_NonDefaultConstructible.H0.MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_is_begin.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(iter, "iter"));
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

    /**
     * The begin iterator, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_begin_mut()`.
     */
    public mrbind_test.mr.cs.std_vector_MR_StdContainers_NonDefaultConstructible_iterator begin_mut()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_vector_MR_StdContainers_NonDefaultConstructible.H0.MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_begin_mut.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
            return new mrbind_test.mr.cs.std_vector_MR_StdContainers_NonDefaultConstructible_iterator(__ret, true, null);
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
     * Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_is_begin_mut()`.
     */
    public boolean is_begin(mrbind_test.mr.cs.std_vector_MR_StdContainers_NonDefaultConstructible_iterator iter)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_vector_MR_StdContainers_NonDefaultConstructible.H0.MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_is_begin_mut.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(iter, "iter"));
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

    /**
     * The end iterator, const.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_end()`.
     */
    public mrbind_test.mr.cs.std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator end()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_vector_MR_StdContainers_NonDefaultConstructible.H0.MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_end.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
            return new mrbind_test.mr.cs.std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator(__ret, true, null);
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
     * Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_is_end()`.
     */
    public boolean is_end(mrbind_test.mr.cs.std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator iter)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_vector_MR_StdContainers_NonDefaultConstructible.H0.MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_is_end.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(iter, "iter"));
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

    /**
     * The end iterator, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_end_mut()`.
     */
    public mrbind_test.mr.cs.std_vector_MR_StdContainers_NonDefaultConstructible_iterator end_mut()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_vector_MR_StdContainers_NonDefaultConstructible.H0.MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_end_mut.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
            return new mrbind_test.mr.cs.std_vector_MR_StdContainers_NonDefaultConstructible_iterator(__ret, true, null);
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
     * Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_is_end_mut()`.
     */
    public boolean is_end(mrbind_test.mr.cs.std_vector_MR_StdContainers_NonDefaultConstructible_iterator iter)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_vector_MR_StdContainers_NonDefaultConstructible.H0.MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_is_end_mut.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(iter, "iter"));
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

    /**
     * Convert a const iterator to an index.
     *
     * Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_to_index()`.
     */
    public long to_index(mrbind_test.mr.cs.std_vector_MR_StdContainers_NonDefaultConstructible_const_iterator iter)
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.std_vector_MR_StdContainers_NonDefaultConstructible.H0.MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_to_index.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(iter, "iter"));
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

    /**
     * Convert a mutable iterator to an index.
     *
     * Calls `MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_to_index_mut()`.
     */
    public long to_index(mrbind_test.mr.cs.std_vector_MR_StdContainers_NonDefaultConstructible_iterator iter)
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.std_vector_MR_StdContainers_NonDefaultConstructible.H0.MR_C_std_vector_MR_StdContainers_NonDefaultConstructible_to_index_mut.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(iter, "iter"));
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
