package mrbind_test.mr.cs;

/**
 * Generated from C++ container `std::vector<std::pair<MR::SeparateA, MR::SeparateB>>`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class std_vector_std_pair_MR_SeparateA_MR_SeparateB extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public std_vector_std_pair_MR_SeparateA_MR_SeparateB(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? std_vector_std_pair_MR_SeparateA_MR_SeparateB::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.AB.std_vector_std_pair_MR_SeparateA_MR_SeparateB.H0.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_DefaultConstruct()`.
     */
    public std_vector_std_pair_MR_SeparateA_MR_SeparateB()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.AB.std_vector_std_pair_MR_SeparateA_MR_SeparateB.H0.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_DefaultConstruct.invokeExact();
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
     * Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_ConstructFromAnother()`.
     */
    public std_vector_std_pair_MR_SeparateA_MR_SeparateB(mrbind_test.mr.cs.std_vector_std_pair_MR_SeparateA_MR_SeparateB other)
    {
        this(__ctor_constructFromAnother(other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.cs.std_vector_std_pair_MR_SeparateA_MR_SeparateB other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.AB.std_vector_std_pair_MR_SeparateA_MR_SeparateB.H0.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_ConstructFromAnother.invokeExact(mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(other, "other"));
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
     * Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_AssignFromAnother()`.
     */
    public void assignFromAnother(mrbind_test.mr.cs.std_vector_std_pair_MR_SeparateA_MR_SeparateB other)
    {
        try
        {
            mrbind_test.ffi.AB.std_vector_std_pair_MR_SeparateA_MR_SeparateB.H0.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(other, "other"));
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
     * Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_size()`.
     */
    public long size()
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.AB.std_vector_std_pair_MR_SeparateA_MR_SeparateB.H0.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_size.invokeExact(rawPointer());
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
     * Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_empty()`.
     */
    public boolean empty()
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.AB.std_vector_std_pair_MR_SeparateA_MR_SeparateB.H0.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_empty.invokeExact(rawPointer());
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
     * Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_resize_with_default_value()`.
     */
    public void resize_with_default_value(long new_size, mrbind_test.mr.cs.std_pair_MR_SeparateA_MR_SeparateB value)
    {
        try
        {
            mrbind_test.ffi.AB.std_vector_std_pair_MR_SeparateA_MR_SeparateB.H0.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_resize_with_default_value.invokeExact(rawPointer(), new_size, mrbind_test.Ffi.ptrNonNull(value, "value"));
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
     * Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_clear()`.
     */
    public void clear()
    {
        try
        {
            mrbind_test.ffi.AB.std_vector_std_pair_MR_SeparateA_MR_SeparateB.H0.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_clear.invokeExact(rawPointer());
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
     * Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_capacity()`.
     */
    public long capacity()
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.AB.std_vector_std_pair_MR_SeparateA_MR_SeparateB.H0.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_capacity.invokeExact(rawPointer());
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
     * Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_reserve()`.
     */
    public void reserve(long new_capacity)
    {
        try
        {
            mrbind_test.ffi.AB.std_vector_std_pair_MR_SeparateA_MR_SeparateB.H0.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_reserve.invokeExact(rawPointer(), new_capacity);
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
     * Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_shrink_to_fit()`.
     */
    public void shrink_to_fit()
    {
        try
        {
            mrbind_test.ffi.AB.std_vector_std_pair_MR_SeparateA_MR_SeparateB.H0.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_shrink_to_fit.invokeExact(rawPointer());
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
     * Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_at()`.
     */
    public mrbind_test.mr.cs.std_pair_MR_SeparateA_MR_SeparateB at(long i)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.AB.std_vector_std_pair_MR_SeparateA_MR_SeparateB.H0.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_at.invokeExact(rawPointer(), i);
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return new mrbind_test.mr.cs.std_pair_MR_SeparateA_MR_SeparateB(__ret, false, __owner);
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
     * Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_at_mut()`.
     */
    public mrbind_test.mr.cs.std_pair_MR_SeparateA_MR_SeparateB at_mut(long i)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.AB.std_vector_std_pair_MR_SeparateA_MR_SeparateB.H0.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_at_mut.invokeExact(rawPointer(), i);
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return new mrbind_test.mr.cs.std_pair_MR_SeparateA_MR_SeparateB(__ret, false, __owner);
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
     * Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_front()`.
     */
    public mrbind_test.mr.cs.std_pair_MR_SeparateA_MR_SeparateB front()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.AB.std_vector_std_pair_MR_SeparateA_MR_SeparateB.H0.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_front.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return __ret.address() == 0 ? null : new mrbind_test.mr.cs.std_pair_MR_SeparateA_MR_SeparateB(__ret, false, __owner);
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
     * Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_front_mut()`.
     */
    public mrbind_test.mr.cs.std_pair_MR_SeparateA_MR_SeparateB front_mut()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.AB.std_vector_std_pair_MR_SeparateA_MR_SeparateB.H0.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_front_mut.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return __ret.address() == 0 ? null : new mrbind_test.mr.cs.std_pair_MR_SeparateA_MR_SeparateB(__ret, false, __owner);
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
     * Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_back()`.
     */
    public mrbind_test.mr.cs.std_pair_MR_SeparateA_MR_SeparateB back()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.AB.std_vector_std_pair_MR_SeparateA_MR_SeparateB.H0.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_back.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return __ret.address() == 0 ? null : new mrbind_test.mr.cs.std_pair_MR_SeparateA_MR_SeparateB(__ret, false, __owner);
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
     * Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_back_mut()`.
     */
    public mrbind_test.mr.cs.std_pair_MR_SeparateA_MR_SeparateB back_mut()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.AB.std_vector_std_pair_MR_SeparateA_MR_SeparateB.H0.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_back_mut.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
            java.lang.Object __owner = this;
            return __ret.address() == 0 ? null : new mrbind_test.mr.cs.std_pair_MR_SeparateA_MR_SeparateB(__ret, false, __owner);
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
     * Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_push_back()`.
     */
    public void push_back(mrbind_test.mr.cs.std_pair_MR_SeparateA_MR_SeparateB new_elem)
    {
        try
        {
            mrbind_test.ffi.AB.std_vector_std_pair_MR_SeparateA_MR_SeparateB.H0.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_push_back.invokeExact(rawPointer(), mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(new_elem, "new_elem"));
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
     * Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_pop_back()`.
     */
    public void pop_back()
    {
        try
        {
            mrbind_test.ffi.AB.std_vector_std_pair_MR_SeparateA_MR_SeparateB.H0.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_pop_back.invokeExact(rawPointer());
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
     * Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_insert()`.
     */
    public void insert(long position, mrbind_test.mr.cs.std_pair_MR_SeparateA_MR_SeparateB new_elem)
    {
        try
        {
            mrbind_test.ffi.AB.std_vector_std_pair_MR_SeparateA_MR_SeparateB.H0.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_insert.invokeExact(rawPointer(), position, mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(new_elem, "new_elem"));
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
     * Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_erase()`.
     */
    public void erase(long position)
    {
        try
        {
            mrbind_test.ffi.AB.std_vector_std_pair_MR_SeparateA_MR_SeparateB.H0.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_erase.invokeExact(rawPointer(), position);
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
     * The begin iterator, const. Iterators of this container are plain pointers.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_begin()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment begin()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.AB.std_vector_std_pair_MR_SeparateA_MR_SeparateB.H0.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_begin.invokeExact(rawPointer());
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
     * The begin iterator, mutable. Iterators of this container are plain pointers.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_begin_mut()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment begin_mut()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.AB.std_vector_std_pair_MR_SeparateA_MR_SeparateB.H0.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_begin_mut.invokeExact(rawPointer());
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
     * The end iterator, const. Iterators of this container are plain pointers.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_end()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment end()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.AB.std_vector_std_pair_MR_SeparateA_MR_SeparateB.H0.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_end.invokeExact(rawPointer());
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
     * The end iterator, mutable. Iterators of this container are plain pointers.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_end_mut()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment end_mut()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.AB.std_vector_std_pair_MR_SeparateA_MR_SeparateB.H0.MR_C_std_vector_std_pair_MR_SeparateA_MR_SeparateB_end_mut.invokeExact(rawPointer());
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
}
