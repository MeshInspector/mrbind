package mrbind_test.mr.cs;

/**
 * Generated from C++ container `std::vector<const MR::CSharp::A *>`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class std_vector_const_MR_CSharp_A_ptr extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public std_vector_const_MR_CSharp_A_ptr(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? std_vector_const_MR_CSharp_A_ptr::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.std_vector_const_MR_CSharp_A_ptr.H0.MR_C_std_vector_const_MR_CSharp_A_ptr_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_DefaultConstruct()`.
     */
    public std_vector_const_MR_CSharp_A_ptr()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_vector_const_MR_CSharp_A_ptr.H0.MR_C_std_vector_const_MR_CSharp_A_ptr_DefaultConstruct.invokeExact();
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
     * Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_ConstructFromAnother()`.
     */
    public std_vector_const_MR_CSharp_A_ptr(mrbind_test.mr.cs.std_vector_const_MR_CSharp_A_ptr other)
    {
        this(__ctor_constructFromAnother(other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.cs.std_vector_const_MR_CSharp_A_ptr other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_vector_const_MR_CSharp_A_ptr.H0.MR_C_std_vector_const_MR_CSharp_A_ptr_ConstructFromAnother.invokeExact(mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(other, "other"));
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
     * Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_AssignFromAnother()`.
     */
    public void assignFromAnother(mrbind_test.mr.cs.std_vector_const_MR_CSharp_A_ptr other)
    {
        try
        {
            mrbind_test.ffi.std_vector_const_MR_CSharp_A_ptr.H0.MR_C_std_vector_const_MR_CSharp_A_ptr_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(other, "other"));
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
     * Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_size()`.
     */
    public long size()
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.std_vector_const_MR_CSharp_A_ptr.H0.MR_C_std_vector_const_MR_CSharp_A_ptr_size.invokeExact(rawPointer());
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
     * Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_empty()`.
     */
    public boolean empty()
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_vector_const_MR_CSharp_A_ptr.H0.MR_C_std_vector_const_MR_CSharp_A_ptr_empty.invokeExact(rawPointer());
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
     * Resizes the container. The new elements if any are zeroed.
     *
     * Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_resize()`.
     */
    public void resize(long new_size)
    {
        try
        {
            mrbind_test.ffi.std_vector_const_MR_CSharp_A_ptr.H0.MR_C_std_vector_const_MR_CSharp_A_ptr_resize.invokeExact(rawPointer(), new_size);
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
     * Removes all elements from the container.
     *
     * Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_clear()`.
     */
    public void clear()
    {
        try
        {
            mrbind_test.ffi.std_vector_const_MR_CSharp_A_ptr.H0.MR_C_std_vector_const_MR_CSharp_A_ptr_clear.invokeExact(rawPointer());
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
     * Reserves memory for a certain number of elements. Never shrinks the memory.
     *
     * Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_reserve()`.
     */
    public void reserve(long new_capacity)
    {
        try
        {
            mrbind_test.ffi.std_vector_const_MR_CSharp_A_ptr.H0.MR_C_std_vector_const_MR_CSharp_A_ptr_reserve.invokeExact(rawPointer(), new_capacity);
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
     * Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_at()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment at(long i)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_vector_const_MR_CSharp_A_ptr.H0.MR_C_std_vector_const_MR_CSharp_A_ptr_at.invokeExact(rawPointer(), i);
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
     * The element at a specific index, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_at_mut()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment at_mut(long i)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_vector_const_MR_CSharp_A_ptr.H0.MR_C_std_vector_const_MR_CSharp_A_ptr_at_mut.invokeExact(rawPointer(), i);
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
     * The first element or null if empty, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_front()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment front()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_vector_const_MR_CSharp_A_ptr.H0.MR_C_std_vector_const_MR_CSharp_A_ptr_front.invokeExact(rawPointer());
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
     * The first element or null if empty, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_front_mut()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment front_mut()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_vector_const_MR_CSharp_A_ptr.H0.MR_C_std_vector_const_MR_CSharp_A_ptr_front_mut.invokeExact(rawPointer());
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
     * The last element or null if empty, read-only.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_back()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment back()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_vector_const_MR_CSharp_A_ptr.H0.MR_C_std_vector_const_MR_CSharp_A_ptr_back.invokeExact(rawPointer());
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
     * The last element or null if empty, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_back_mut()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment back_mut()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_vector_const_MR_CSharp_A_ptr.H0.MR_C_std_vector_const_MR_CSharp_A_ptr_back_mut.invokeExact(rawPointer());
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
     * Inserts a new element at the end.
     * The reference to the parameter `new_elem` might be preserved in this object.
     *
     * Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_push_back()`.
     */
    public void push_back(mrbind_test.mr.csharp.A new_elem)
    {
        try
        {
            mrbind_test.ffi.std_vector_const_MR_CSharp_A_ptr.H0.MR_C_std_vector_const_MR_CSharp_A_ptr_push_back.invokeExact(rawPointer(), mrbind_test.Ffi.ptr(new_elem));
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
     * Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_pop_back()`.
     */
    public void pop_back()
    {
        try
        {
            mrbind_test.ffi.std_vector_const_MR_CSharp_A_ptr.H0.MR_C_std_vector_const_MR_CSharp_A_ptr_pop_back.invokeExact(rawPointer());
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
     * Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_insert()`.
     */
    public void insert(long position, mrbind_test.mr.csharp.A new_elem)
    {
        try
        {
            mrbind_test.ffi.std_vector_const_MR_CSharp_A_ptr.H0.MR_C_std_vector_const_MR_CSharp_A_ptr_insert.invokeExact(rawPointer(), position, mrbind_test.Ffi.ptr(new_elem));
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
     * Calls `MR_C_std_vector_const_MR_CSharp_A_ptr_erase()`.
     */
    public void erase(long position)
    {
        try
        {
            mrbind_test.ffi.std_vector_const_MR_CSharp_A_ptr.H0.MR_C_std_vector_const_MR_CSharp_A_ptr_erase.invokeExact(rawPointer(), position);
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
}
