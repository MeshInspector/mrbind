package mrbind_test.mr.cs;

/**
 * Generated from C++ container `std::vector<MR::CSharp::ExposedLayout>`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class std_vector_MR_CSharp_ExposedLayout extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public std_vector_MR_CSharp_ExposedLayout(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? std_vector_MR_CSharp_ExposedLayout::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.std_vector_MR_CSharp_ExposedLayout.H0.MR_C_std_vector_MR_CSharp_ExposedLayout_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_DefaultConstruct()`.
     */
    public std_vector_MR_CSharp_ExposedLayout()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_vector_MR_CSharp_ExposedLayout.H0.MR_C_std_vector_MR_CSharp_ExposedLayout_DefaultConstruct.invokeExact();
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
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_ConstructFromAnother()`.
     */
    public std_vector_MR_CSharp_ExposedLayout(mrbind_test.mr.cs.std_vector_MR_CSharp_ExposedLayout other)
    {
        this(__ctor_constructFromAnother(other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.cs.std_vector_MR_CSharp_ExposedLayout other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_vector_MR_CSharp_ExposedLayout.H0.MR_C_std_vector_MR_CSharp_ExposedLayout_ConstructFromAnother.invokeExact(mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(other, "other"));
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
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_AssignFromAnother()`.
     */
    public void assignFromAnother(mrbind_test.mr.cs.std_vector_MR_CSharp_ExposedLayout other)
    {
        try
        {
            mrbind_test.ffi.std_vector_MR_CSharp_ExposedLayout.H0.MR_C_std_vector_MR_CSharp_ExposedLayout_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(other, "other"));
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
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_ConstructFromRange()`.
     */
    public std_vector_MR_CSharp_ExposedLayout(mrbind_test.mr.csharp.ExposedLayout ptr, long size)
    {
        this(__ctor_constructFromRange(ptr, size), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromRange(mrbind_test.mr.csharp.ExposedLayout ptr, long size)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_vector_MR_CSharp_ExposedLayout.H0.MR_C_std_vector_MR_CSharp_ExposedLayout_ConstructFromRange.invokeExact(mrbind_test.Ffi.ptr(ptr), size);
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(ptr);
        }
    }

    /**
     * Assign from a range of elements, overwriting previous contents.
     *
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_AssignFromRange()`.
     */
    public void assignFromRange(mrbind_test.mr.csharp.ExposedLayout ptr, long size)
    {
        try
        {
            mrbind_test.ffi.std_vector_MR_CSharp_ExposedLayout.H0.MR_C_std_vector_MR_CSharp_ExposedLayout_AssignFromRange.invokeExact(rawPointer(), mrbind_test.Ffi.ptr(ptr), size);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
            java.lang.ref.Reference.reachabilityFence(ptr);
        }
    }

    /**
     * The number of elements.
     *
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_size()`.
     */
    public long size()
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.std_vector_MR_CSharp_ExposedLayout.H0.MR_C_std_vector_MR_CSharp_ExposedLayout_size.invokeExact(rawPointer());
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
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_empty()`.
     */
    public boolean empty()
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_vector_MR_CSharp_ExposedLayout.H0.MR_C_std_vector_MR_CSharp_ExposedLayout_empty.invokeExact(rawPointer());
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
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_resize()`.
     */
    public void resize(long new_size)
    {
        try
        {
            mrbind_test.ffi.std_vector_MR_CSharp_ExposedLayout.H0.MR_C_std_vector_MR_CSharp_ExposedLayout_resize.invokeExact(rawPointer(), new_size);
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
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_resize_with_default_value()`.
     */
    public void resize_with_default_value(long new_size, mrbind_test.mr.csharp.ExposedLayout value)
    {
        try
        {
            mrbind_test.ffi.std_vector_MR_CSharp_ExposedLayout.H0.MR_C_std_vector_MR_CSharp_ExposedLayout_resize_with_default_value.invokeExact(rawPointer(), new_size, mrbind_test.Ffi.ptrNonNull(value, "value"));
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
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_clear()`.
     */
    public void clear()
    {
        try
        {
            mrbind_test.ffi.std_vector_MR_CSharp_ExposedLayout.H0.MR_C_std_vector_MR_CSharp_ExposedLayout_clear.invokeExact(rawPointer());
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
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_capacity()`.
     */
    public long capacity()
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.std_vector_MR_CSharp_ExposedLayout.H0.MR_C_std_vector_MR_CSharp_ExposedLayout_capacity.invokeExact(rawPointer());
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
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_reserve()`.
     */
    public void reserve(long new_capacity)
    {
        try
        {
            mrbind_test.ffi.std_vector_MR_CSharp_ExposedLayout.H0.MR_C_std_vector_MR_CSharp_ExposedLayout_reserve.invokeExact(rawPointer(), new_capacity);
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
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_shrink_to_fit()`.
     */
    public void shrink_to_fit()
    {
        try
        {
            mrbind_test.ffi.std_vector_MR_CSharp_ExposedLayout.H0.MR_C_std_vector_MR_CSharp_ExposedLayout_shrink_to_fit.invokeExact(rawPointer());
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
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_at()`.
     */
    public mrbind_test.mr.csharp.ExposedLayout at(long i)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_vector_MR_CSharp_ExposedLayout.H0.MR_C_std_vector_MR_CSharp_ExposedLayout_at.invokeExact(rawPointer(), i);
            java.lang.Object __owner = this;
            return new mrbind_test.mr.csharp.ExposedLayout(__ret.reinterpret(mrbind_test.mr.csharp.ExposedLayout.LAYOUT.byteSize()), __owner);
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
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_at_mut()`.
     */
    public mrbind_test.mr.csharp.ExposedLayout at_mut(long i)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_vector_MR_CSharp_ExposedLayout.H0.MR_C_std_vector_MR_CSharp_ExposedLayout_at_mut.invokeExact(rawPointer(), i);
            java.lang.Object __owner = this;
            return new mrbind_test.mr.csharp.ExposedLayout(__ret.reinterpret(mrbind_test.mr.csharp.ExposedLayout.LAYOUT.byteSize()), __owner);
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
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_front()`.
     */
    public mrbind_test.mr.csharp.ExposedLayout front()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_vector_MR_CSharp_ExposedLayout.H0.MR_C_std_vector_MR_CSharp_ExposedLayout_front.invokeExact(rawPointer());
            java.lang.Object __owner = this;
            return __ret.address() == 0 ? null : new mrbind_test.mr.csharp.ExposedLayout(__ret.reinterpret(mrbind_test.mr.csharp.ExposedLayout.LAYOUT.byteSize()), __owner);
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
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_front_mut()`.
     */
    public mrbind_test.mr.csharp.ExposedLayout front_mut()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_vector_MR_CSharp_ExposedLayout.H0.MR_C_std_vector_MR_CSharp_ExposedLayout_front_mut.invokeExact(rawPointer());
            java.lang.Object __owner = this;
            return __ret.address() == 0 ? null : new mrbind_test.mr.csharp.ExposedLayout(__ret.reinterpret(mrbind_test.mr.csharp.ExposedLayout.LAYOUT.byteSize()), __owner);
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
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_back()`.
     */
    public mrbind_test.mr.csharp.ExposedLayout back()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_vector_MR_CSharp_ExposedLayout.H0.MR_C_std_vector_MR_CSharp_ExposedLayout_back.invokeExact(rawPointer());
            java.lang.Object __owner = this;
            return __ret.address() == 0 ? null : new mrbind_test.mr.csharp.ExposedLayout(__ret.reinterpret(mrbind_test.mr.csharp.ExposedLayout.LAYOUT.byteSize()), __owner);
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
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_back_mut()`.
     */
    public mrbind_test.mr.csharp.ExposedLayout back_mut()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_vector_MR_CSharp_ExposedLayout.H0.MR_C_std_vector_MR_CSharp_ExposedLayout_back_mut.invokeExact(rawPointer());
            java.lang.Object __owner = this;
            return __ret.address() == 0 ? null : new mrbind_test.mr.csharp.ExposedLayout(__ret.reinterpret(mrbind_test.mr.csharp.ExposedLayout.LAYOUT.byteSize()), __owner);
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
     * Returns a pointer to the continuous storage that holds all elements, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_data()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment data()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_vector_MR_CSharp_ExposedLayout.H0.MR_C_std_vector_MR_CSharp_ExposedLayout_data.invokeExact(rawPointer());
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
     * Returns a pointer to the continuous storage that holds all elements, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_data_mut()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment data_mut()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_vector_MR_CSharp_ExposedLayout.H0.MR_C_std_vector_MR_CSharp_ExposedLayout_data_mut.invokeExact(rawPointer());
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
     * The reference to the parameter `new_elem` might be preserved in this object.
     *
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_push_back()`.
     */
    public void push_back(mrbind_test.mr.csharp.ExposedLayout new_elem)
    {
        try
        {
            mrbind_test.ffi.std_vector_MR_CSharp_ExposedLayout.H0.MR_C_std_vector_MR_CSharp_ExposedLayout_push_back.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(new_elem, "new_elem"));
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
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_pop_back()`.
     */
    public void pop_back()
    {
        try
        {
            mrbind_test.ffi.std_vector_MR_CSharp_ExposedLayout.H0.MR_C_std_vector_MR_CSharp_ExposedLayout_pop_back.invokeExact(rawPointer());
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
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_insert()`.
     */
    public void insert(long position, mrbind_test.mr.csharp.ExposedLayout new_elem)
    {
        try
        {
            mrbind_test.ffi.std_vector_MR_CSharp_ExposedLayout.H0.MR_C_std_vector_MR_CSharp_ExposedLayout_insert.invokeExact(rawPointer(), position, mrbind_test.Ffi.ptrNonNull(new_elem, "new_elem"));
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
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_erase()`.
     */
    public void erase(long position)
    {
        try
        {
            mrbind_test.ffi.std_vector_MR_CSharp_ExposedLayout.H0.MR_C_std_vector_MR_CSharp_ExposedLayout_erase.invokeExact(rawPointer(), position);
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
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_insert_at_mutable_iter()`.
     */
    public void insert_at_mutable_iter(mrbind_test.mr.cs.std_vector_MR_CSharp_ExposedLayout_iterator position, mrbind_test.mr.csharp.ExposedLayout new_elem)
    {
        try
        {
            mrbind_test.ffi.std_vector_MR_CSharp_ExposedLayout.H0.MR_C_std_vector_MR_CSharp_ExposedLayout_insert_at_mutable_iter.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(position, "position"), mrbind_test.Ffi.ptrNonNull(new_elem, "new_elem"));
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
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_erase_at_mutable_iter()`.
     */
    public void erase_at_mutable_iter(mrbind_test.mr.cs.std_vector_MR_CSharp_ExposedLayout_iterator position)
    {
        try
        {
            mrbind_test.ffi.std_vector_MR_CSharp_ExposedLayout.H0.MR_C_std_vector_MR_CSharp_ExposedLayout_erase_at_mutable_iter.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(position, "position"));
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
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_insert_at_iter()`.
     */
    public void insert_at_iter(mrbind_test.mr.cs.std_vector_MR_CSharp_ExposedLayout_const_iterator position, mrbind_test.mr.csharp.ExposedLayout new_elem)
    {
        try
        {
            mrbind_test.ffi.std_vector_MR_CSharp_ExposedLayout.H0.MR_C_std_vector_MR_CSharp_ExposedLayout_insert_at_iter.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(position, "position"), mrbind_test.Ffi.ptrNonNull(new_elem, "new_elem"));
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
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_erase_at_iter()`.
     */
    public void erase_at_iter(mrbind_test.mr.cs.std_vector_MR_CSharp_ExposedLayout_const_iterator position)
    {
        try
        {
            mrbind_test.ffi.std_vector_MR_CSharp_ExposedLayout.H0.MR_C_std_vector_MR_CSharp_ExposedLayout_erase_at_iter.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(position, "position"));
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
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_begin()`.
     */
    public mrbind_test.mr.cs.std_vector_MR_CSharp_ExposedLayout_const_iterator begin()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_vector_MR_CSharp_ExposedLayout.H0.MR_C_std_vector_MR_CSharp_ExposedLayout_begin.invokeExact(rawPointer());
            return new mrbind_test.mr.cs.std_vector_MR_CSharp_ExposedLayout_const_iterator(__ret, true, null);
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
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_is_begin()`.
     */
    public boolean is_begin(mrbind_test.mr.cs.std_vector_MR_CSharp_ExposedLayout_const_iterator iter)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_vector_MR_CSharp_ExposedLayout.H0.MR_C_std_vector_MR_CSharp_ExposedLayout_is_begin.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(iter, "iter"));
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
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_begin_mut()`.
     */
    public mrbind_test.mr.cs.std_vector_MR_CSharp_ExposedLayout_iterator begin_mut()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_vector_MR_CSharp_ExposedLayout.H0.MR_C_std_vector_MR_CSharp_ExposedLayout_begin_mut.invokeExact(rawPointer());
            return new mrbind_test.mr.cs.std_vector_MR_CSharp_ExposedLayout_iterator(__ret, true, null);
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
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_is_begin_mut()`.
     */
    public boolean is_begin(mrbind_test.mr.cs.std_vector_MR_CSharp_ExposedLayout_iterator iter)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_vector_MR_CSharp_ExposedLayout.H0.MR_C_std_vector_MR_CSharp_ExposedLayout_is_begin_mut.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(iter, "iter"));
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
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_end()`.
     */
    public mrbind_test.mr.cs.std_vector_MR_CSharp_ExposedLayout_const_iterator end()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_vector_MR_CSharp_ExposedLayout.H0.MR_C_std_vector_MR_CSharp_ExposedLayout_end.invokeExact(rawPointer());
            return new mrbind_test.mr.cs.std_vector_MR_CSharp_ExposedLayout_const_iterator(__ret, true, null);
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
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_is_end()`.
     */
    public boolean is_end(mrbind_test.mr.cs.std_vector_MR_CSharp_ExposedLayout_const_iterator iter)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_vector_MR_CSharp_ExposedLayout.H0.MR_C_std_vector_MR_CSharp_ExposedLayout_is_end.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(iter, "iter"));
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
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_end_mut()`.
     */
    public mrbind_test.mr.cs.std_vector_MR_CSharp_ExposedLayout_iterator end_mut()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_vector_MR_CSharp_ExposedLayout.H0.MR_C_std_vector_MR_CSharp_ExposedLayout_end_mut.invokeExact(rawPointer());
            return new mrbind_test.mr.cs.std_vector_MR_CSharp_ExposedLayout_iterator(__ret, true, null);
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
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_is_end_mut()`.
     */
    public boolean is_end(mrbind_test.mr.cs.std_vector_MR_CSharp_ExposedLayout_iterator iter)
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_vector_MR_CSharp_ExposedLayout.H0.MR_C_std_vector_MR_CSharp_ExposedLayout_is_end_mut.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(iter, "iter"));
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
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_to_index()`.
     */
    public long to_index(mrbind_test.mr.cs.std_vector_MR_CSharp_ExposedLayout_const_iterator iter)
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.std_vector_MR_CSharp_ExposedLayout.H0.MR_C_std_vector_MR_CSharp_ExposedLayout_to_index.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(iter, "iter"));
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
     * Calls `MR_C_std_vector_MR_CSharp_ExposedLayout_to_index_mut()`.
     */
    public long to_index(mrbind_test.mr.cs.std_vector_MR_CSharp_ExposedLayout_iterator iter)
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.std_vector_MR_CSharp_ExposedLayout.H0.MR_C_std_vector_MR_CSharp_ExposedLayout_to_index_mut.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(iter, "iter"));
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
