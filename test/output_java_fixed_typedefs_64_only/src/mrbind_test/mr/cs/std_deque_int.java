package mrbind_test.mr.cs;

/**
 * Generated from C++ container `std::deque<int>`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class std_deque_int extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public std_deque_int(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? std_deque_int::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.std_deque_int.H0.MR_C_std_deque_int_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_deque_int_DefaultConstruct()`.
     */
    public std_deque_int()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_deque_int.H0.MR_C_std_deque_int_DefaultConstruct.invokeExact();
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
     * Calls `MR_C_std_deque_int_ConstructFromAnother()`.
     */
    public std_deque_int(mrbind_test.mr.cs.std_deque_int other)
    {
        this(__ctor_constructFromAnother(other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.cs.std_deque_int other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_deque_int.H0.MR_C_std_deque_int_ConstructFromAnother.invokeExact(mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(other, "other"));
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
     * Calls `MR_C_std_deque_int_AssignFromAnother()`.
     */
    public void assignFromAnother(mrbind_test.mr.cs.std_deque_int other)
    {
        try
        {
            mrbind_test.ffi.std_deque_int.H0.MR_C_std_deque_int_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(other, "other"));
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
     * Calls `MR_C_std_deque_int_size()`.
     */
    public long size()
    {
        try
        {
            long __ret = (long)mrbind_test.ffi.std_deque_int.H0.MR_C_std_deque_int_size.invokeExact(rawPointer());
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
     * Calls `MR_C_std_deque_int_empty()`.
     */
    public boolean empty()
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_deque_int.H0.MR_C_std_deque_int_empty.invokeExact(rawPointer());
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
     * Calls `MR_C_std_deque_int_resize()`.
     */
    public void resize(long new_size)
    {
        try
        {
            mrbind_test.ffi.std_deque_int.H0.MR_C_std_deque_int_resize.invokeExact(rawPointer(), new_size);
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
     * Calls `MR_C_std_deque_int_clear()`.
     */
    public void clear()
    {
        try
        {
            mrbind_test.ffi.std_deque_int.H0.MR_C_std_deque_int_clear.invokeExact(rawPointer());
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
     * Calls `MR_C_std_deque_int_at()`.
     */
    public int at(long i)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_deque_int.H0.MR_C_std_deque_int_at.invokeExact(rawPointer(), i);
            mrbind_test.Ffi.checkException();
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
     * The element at a specific index, mutable.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_deque_int_at_mut()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment at_mut(long i)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_deque_int.H0.MR_C_std_deque_int_at_mut.invokeExact(rawPointer(), i);
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
     * Calls `MR_C_std_deque_int_front()`.
     */
    public java.lang.Integer front()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_deque_int.H0.MR_C_std_deque_int_front.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
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
     * Calls `MR_C_std_deque_int_front_mut()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment front_mut()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_deque_int.H0.MR_C_std_deque_int_front_mut.invokeExact(rawPointer());
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
     * Calls `MR_C_std_deque_int_back()`.
     */
    public java.lang.Integer back()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_deque_int.H0.MR_C_std_deque_int_back.invokeExact(rawPointer());
            mrbind_test.Ffi.checkException();
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
     * Calls `MR_C_std_deque_int_back_mut()`. Some types are raw C types, see the C bindings for the details.
     */
    public java.lang.foreign.MemorySegment back_mut()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_deque_int.H0.MR_C_std_deque_int_back_mut.invokeExact(rawPointer());
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
     *
     * Calls `MR_C_std_deque_int_push_back()`.
     */
    public void push_back(int new_elem)
    {
        try
        {
            mrbind_test.ffi.std_deque_int.H0.MR_C_std_deque_int_push_back.invokeExact(rawPointer(), new_elem);
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
     * Removes one element from the end.
     *
     * Calls `MR_C_std_deque_int_pop_back()`.
     */
    public void pop_back()
    {
        try
        {
            mrbind_test.ffi.std_deque_int.H0.MR_C_std_deque_int_pop_back.invokeExact(rawPointer());
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
     * Inserts a new element at the beginning.
     *
     * Calls `MR_C_std_deque_int_push_front()`.
     */
    public void push_front(int new_elem)
    {
        try
        {
            mrbind_test.ffi.std_deque_int.H0.MR_C_std_deque_int_push_front.invokeExact(rawPointer(), new_elem);
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
     * Removes one element from the beginning.
     *
     * Calls `MR_C_std_deque_int_pop_front()`.
     */
    public void pop_front()
    {
        try
        {
            mrbind_test.ffi.std_deque_int.H0.MR_C_std_deque_int_pop_front.invokeExact(rawPointer());
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
     *
     * Calls `MR_C_std_deque_int_insert()`.
     */
    public void insert(long position, int new_elem)
    {
        try
        {
            mrbind_test.ffi.std_deque_int.H0.MR_C_std_deque_int_insert.invokeExact(rawPointer(), position, new_elem);
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
     * Erases the element at the specified position.
     *
     * Calls `MR_C_std_deque_int_erase()`.
     */
    public void erase(long position)
    {
        try
        {
            mrbind_test.ffi.std_deque_int.H0.MR_C_std_deque_int_erase.invokeExact(rawPointer(), position);
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
