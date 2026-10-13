package mrbind_test.mr.cs;

/**
 * Wraps a pointer to a shared reference-counted heap-allocated array of type `const int`, of an unspecified size.
 * Doesn't store the size, it has to be obtained separately.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class std_shared_ptr_const_int_array extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public std_shared_ptr_const_int_array(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? std_shared_ptr_const_int_array::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.std_shared_ptr_const_int_array.H0.MR_C_std_shared_ptr_const_int_array_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_shared_ptr_const_int_array_DefaultConstruct()`.
     */
    public std_shared_ptr_const_int_array()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_shared_ptr_const_int_array.H0.MR_C_std_shared_ptr_const_int_array_DefaultConstruct.invokeExact();
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
     * Calls `MR_C_std_shared_ptr_const_int_array_ConstructFromAnother()`.
     */
    public std_shared_ptr_const_int_array(mrbind_test.mr.cs.std_shared_ptr_const_int_array other)
    {
        this(__ctor_constructFromAnother(other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.cs.std_shared_ptr_const_int_array other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_shared_ptr_const_int_array.H0.MR_C_std_shared_ptr_const_int_array_ConstructFromAnother.invokeExact(mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(other, "other"));
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
     * Calls `MR_C_std_shared_ptr_const_int_array_AssignFromAnother()`.
     */
    public void assignFromAnother(mrbind_test.mr.cs.std_shared_ptr_const_int_array other)
    {
        try
        {
            mrbind_test.ffi.std_shared_ptr_const_int_array.H0.MR_C_std_shared_ptr_const_int_array_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(other, "other"));
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
     * Returns the stored pointer, possibly null.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_shared_ptr_const_int_array_get()`.
     */
    public java.lang.Integer get()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_shared_ptr_const_int_array.H0.MR_C_std_shared_ptr_const_int_array_get.invokeExact(rawPointer());
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
     * Returns true if non-null.
     *
     * Calls `MR_C_std_shared_ptr_const_int_array_has_value()`.
     */
    public boolean has_value()
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_shared_ptr_const_int_array.H0.MR_C_std_shared_ptr_const_int_array_has_value.invokeExact(rawPointer());
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
     * Returns an element from the stored array. The stored pointer must not be null.
     * The reference to this object might be preserved as the return value.
     *
     * Calls `MR_C_std_shared_ptr_const_int_array_at()`.
     */
    public int at(long i)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_shared_ptr_const_int_array.H0.MR_C_std_shared_ptr_const_int_array_at.invokeExact(rawPointer(), i);
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
     * How many shared pointers share the managed object. Zero if no object is being managed.
     * This being zero usually conincides with `MR_C_std_shared_ptr_const_int_array_get()` returning null, but is ultimately orthogonal.
     * Note that in multithreaded environments, the only safe way to use this number is comparing it with zero. Positive values might change by the time you get to use them.
     *
     * Calls `MR_C_std_shared_ptr_const_int_array_use_count()`.
     */
    public int use_count()
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.std_shared_ptr_const_int_array.H0.MR_C_std_shared_ptr_const_int_array_use_count.invokeExact(rawPointer());
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
     * Resets the pointer to null.
     *
     * Calls `MR_C_std_shared_ptr_const_int_array_reset()`.
     */
    public void reset()
    {
        try
        {
            mrbind_test.ffi.std_shared_ptr_const_int_array.H0.MR_C_std_shared_ptr_const_int_array_reset.invokeExact(rawPointer());
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
     * Construct an array of the specified size.
     *
     * Calls `MR_C_std_shared_ptr_const_int_array_ConstructFromSize()`.
     */
    public std_shared_ptr_const_int_array(long size)
    {
        this(__ctor_constructFromSize(size), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromSize(long size)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_shared_ptr_const_int_array.H0.MR_C_std_shared_ptr_const_int_array_ConstructFromSize.invokeExact(size);
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Create a new instance, taking ownership of an existing pointer.
     *
     * Calls `MR_C_std_shared_ptr_const_int_array_Construct()`.
     */
    public std_shared_ptr_const_int_array(int ptr)
    {
        this(__ctor_construct(ptr), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_construct(int ptr)
    {
        try (java.lang.foreign.Arena __arena = java.lang.foreign.Arena.ofConfined())
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_shared_ptr_const_int_array.H0.MR_C_std_shared_ptr_const_int_array_Construct.invokeExact(mrbind_test.Ffi.alloc(__arena, java.lang.foreign.ValueLayout.JAVA_INT, ptr));
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Overwrite the existing instance, taking ownership of an existing pointer. The previously owned object, if any, has its reference count decremented.
     *
     * Calls `MR_C_std_shared_ptr_const_int_array_Assign()`.
     */
    public void assign(int ptr)
    {
        try (java.lang.foreign.Arena __arena = java.lang.foreign.Arena.ofConfined())
        {
            mrbind_test.ffi.std_shared_ptr_const_int_array.H0.MR_C_std_shared_ptr_const_int_array_Assign.invokeExact(rawPointer(), mrbind_test.Ffi.alloc(__arena, java.lang.foreign.ValueLayout.JAVA_INT, ptr));
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
     * Create a new instance, storing a non-owning pointer.
     * The reference to the parameter `ptr` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_shared_ptr_const_int_array_ConstructNonOwning()`.
     */
    public std_shared_ptr_const_int_array(java.lang.Integer ptr)
    {
        this(__ctor_constructNonOwning(ptr), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructNonOwning(java.lang.Integer ptr)
    {
        try (java.lang.foreign.Arena __arena = java.lang.foreign.Arena.ofConfined())
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_shared_ptr_const_int_array.H0.MR_C_std_shared_ptr_const_int_array_ConstructNonOwning.invokeExact((java.lang.foreign.MemorySegment)(ptr == null ? java.lang.foreign.MemorySegment.NULL : mrbind_test.Ffi.alloc(__arena, java.lang.foreign.ValueLayout.JAVA_INT, ptr)));
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Overwrite the existing instance with a non-owning pointer. The previously owned object, if any, has its reference count decremented.
     * The reference to the parameter `ptr` might be preserved in this object.
     *
     * Calls `MR_C_std_shared_ptr_const_int_array_AssignNonOwning()`.
     */
    public void assignNonOwning(java.lang.Integer ptr)
    {
        try (java.lang.foreign.Arena __arena = java.lang.foreign.Arena.ofConfined())
        {
            mrbind_test.ffi.std_shared_ptr_const_int_array.H0.MR_C_std_shared_ptr_const_int_array_AssignNonOwning.invokeExact(rawPointer(), (java.lang.foreign.MemorySegment)(ptr == null ? java.lang.foreign.MemorySegment.NULL : mrbind_test.Ffi.alloc(__arena, java.lang.foreign.ValueLayout.JAVA_INT, ptr)));
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
     * Create a new instance from a non-const pointer to the same type.
     *
     * Calls `MR_C_std_shared_ptr_const_int_array_ConstructFromMutable()`.
     */
    public std_shared_ptr_const_int_array(mrbind_test.mr.cs.std_shared_ptr_int_array ptr)
    {
        this(__ctor_constructFromMutable(ptr), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromMutable(mrbind_test.mr.cs.std_shared_ptr_int_array ptr)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_shared_ptr_const_int_array.H0.MR_C_std_shared_ptr_const_int_array_ConstructFromMutable.invokeExact(mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(ptr, "ptr"));
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
     * Overwrite the existing instance with a non-const pointer to the same type.
     *
     * Calls `MR_C_std_shared_ptr_const_int_array_AssignFromMutable()`.
     */
    public void assignFromMutable(mrbind_test.mr.cs.std_shared_ptr_int_array ptr)
    {
        try
        {
            mrbind_test.ffi.std_shared_ptr_const_int_array.H0.MR_C_std_shared_ptr_const_int_array_AssignFromMutable.invokeExact(rawPointer(), mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(ptr, "ptr"));
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
     * The aliasing constructor. Create a new instance, copying ownership from an existing shared pointer and storing an arbitrary raw pointer.
     * The input pointer can be reinterpreted from any other `std::shared_ptr<T>` to avoid constructing a new `std::shared_ptr<void>`.
     * The reference to the parameter `ptr` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_shared_ptr_const_int_array_ConstructAliasing()`.
     */
    public std_shared_ptr_const_int_array(mrbind_test.mr.cs.std_shared_ptr_const_void ownership, java.lang.Integer ptr)
    {
        this(__ctor_constructAliasing(ownership, ptr), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructAliasing(mrbind_test.mr.cs.std_shared_ptr_const_void ownership, java.lang.Integer ptr)
    {
        try (java.lang.foreign.Arena __arena = java.lang.foreign.Arena.ofConfined())
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_shared_ptr_const_int_array.H0.MR_C_std_shared_ptr_const_int_array_ConstructAliasing.invokeExact(mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(ownership, "ownership"), (java.lang.foreign.MemorySegment)(ptr == null ? java.lang.foreign.MemorySegment.NULL : mrbind_test.Ffi.alloc(__arena, java.lang.foreign.ValueLayout.JAVA_INT, ptr)));
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(ownership);
        }
    }

    /**
     * The aliasing assignment. Overwrite an existing instance, copying ownership from an existing shared pointer and storing an arbitrary raw pointer.
     * The input pointer can be reinterpreted from any other `std::shared_ptr<T>` to avoid constructing a new `std::shared_ptr<void>`.
     * The reference to the parameter `ptr` might be preserved in this object.
     *
     * Calls `MR_C_std_shared_ptr_const_int_array_AssignAliasing()`.
     */
    public void AssignAliasing(mrbind_test.mr.cs.std_shared_ptr_const_void ownership, java.lang.Integer ptr)
    {
        try (java.lang.foreign.Arena __arena = java.lang.foreign.Arena.ofConfined())
        {
            mrbind_test.ffi.std_shared_ptr_const_int_array.H0.MR_C_std_shared_ptr_const_int_array_AssignAliasing.invokeExact(rawPointer(), mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(ownership, "ownership"), (java.lang.foreign.MemorySegment)(ptr == null ? java.lang.foreign.MemorySegment.NULL : mrbind_test.Ffi.alloc(__arena, java.lang.foreign.ValueLayout.JAVA_INT, ptr)));
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
            java.lang.ref.Reference.reachabilityFence(ownership);
        }
    }

    /**
     * Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
     *
     * Calls `MR_C_std_shared_ptr_const_int_array_ConvertTo_MR_C_std_shared_ptr_const_void()`.
     */
    public mrbind_test.mr.cs.std_shared_ptr_const_void convertTo_MR_C_std_shared_ptr_const_void()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_shared_ptr_const_int_array.H0.MR_C_std_shared_ptr_const_int_array_ConvertTo_MR_C_std_shared_ptr_const_void.invokeExact(rawPointer());
            return new mrbind_test.mr.cs.std_shared_ptr_const_void(__ret, true, null);
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
     * Overwrites an existing `std::shared_ptr<void>` to point to the same object as this instance.
     *
     * Calls `MR_C_std_shared_ptr_const_int_array_AssignTo_MR_C_std_shared_ptr_const_void()`.
     */
    public void AssignTo_MR_C_std_shared_ptr_const_void(mrbind_test.mr.cs.std_shared_ptr_const_void _target)
    {
        try
        {
            mrbind_test.ffi.std_shared_ptr_const_int_array.H0.MR_C_std_shared_ptr_const_int_array_AssignTo_MR_C_std_shared_ptr_const_void.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_target, "_target"));
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
            java.lang.ref.Reference.reachabilityFence(_target);
        }
    }
}
