package mrbind_test.mr.cs;

/**
 * Wraps a pointer to a single shared reference-counted heap-allocated `MR::CSharp::SE`.
 *
 * Instances created here own their C++ objects, see `CppObject`.
 */
@java.lang.SuppressWarnings({"restricted", "cast"})
public final class std_shared_ptr_MR_CSharp_SE extends mrbind_test.CppObject
{
    /** Wraps a pointer from the C bindings. If `owned`, the object is destroyed when the wrapper dies. `owner` is kept alive as long as this wrapper is. Not for normal use. */
    public std_shared_ptr_MR_CSharp_SE(java.lang.foreign.MemorySegment ptr, boolean owned, java.lang.Object owner) {super(ptr, owned ? std_shared_ptr_MR_CSharp_SE::__destroy : null, owner);}

    private static void __destroy(java.lang.foreign.MemorySegment ptr)
    {
        try
        {
            mrbind_test.ffi.std_shared_ptr_MR_CSharp_SE.H0.MR_C_std_shared_ptr_MR_CSharp_SE_Destroy.invokeExact(ptr);
        }
        catch (java.lang.Throwable e)
        {
            throw mrbind_test.Ffi.rethrow(e);
        }
    }

    /**
     * Constructs an empty (default-constructed) instance.
     *
     * Calls `MR_C_std_shared_ptr_MR_CSharp_SE_DefaultConstruct()`.
     */
    public std_shared_ptr_MR_CSharp_SE()
    {
        this(__ctor_defaultConstruct(), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_defaultConstruct()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_shared_ptr_MR_CSharp_SE.H0.MR_C_std_shared_ptr_MR_CSharp_SE_DefaultConstruct.invokeExact();
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
     * Calls `MR_C_std_shared_ptr_MR_CSharp_SE_ConstructFromAnother()`.
     */
    public std_shared_ptr_MR_CSharp_SE(mrbind_test.mr.cs.std_shared_ptr_MR_CSharp_SE other)
    {
        this(__ctor_constructFromAnother(other), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructFromAnother(mrbind_test.mr.cs.std_shared_ptr_MR_CSharp_SE other)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_shared_ptr_MR_CSharp_SE.H0.MR_C_std_shared_ptr_MR_CSharp_SE_ConstructFromAnother.invokeExact(mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(other, "other"));
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
     * Calls `MR_C_std_shared_ptr_MR_CSharp_SE_AssignFromAnother()`.
     */
    public void assignFromAnother(mrbind_test.mr.cs.std_shared_ptr_MR_CSharp_SE other)
    {
        try
        {
            mrbind_test.ffi.std_shared_ptr_MR_CSharp_SE.H0.MR_C_std_shared_ptr_MR_CSharp_SE_AssignFromAnother.invokeExact(rawPointer(), mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(other, "other"));
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
     * Calls `MR_C_std_shared_ptr_MR_CSharp_SE_get()`.
     */
    public mrbind_test.mr.csharp.SE get()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_shared_ptr_MR_CSharp_SE.H0.MR_C_std_shared_ptr_MR_CSharp_SE_get.invokeExact(rawPointer());
            java.lang.Object __owner = this;
            return __ret.address() == 0 ? null : new mrbind_test.mr.csharp.SE(__ret, false, __owner);
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
     * Calls `MR_C_std_shared_ptr_MR_CSharp_SE_has_value()`.
     */
    public boolean has_value()
    {
        try
        {
            boolean __ret = (boolean)mrbind_test.ffi.std_shared_ptr_MR_CSharp_SE.H0.MR_C_std_shared_ptr_MR_CSharp_SE_has_value.invokeExact(rawPointer());
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
     * How many shared pointers share the managed object. Zero if no object is being managed.
     * This being zero usually conincides with `MR_C_std_shared_ptr_MR_CSharp_SE_get()` returning null, but is ultimately orthogonal.
     * Note that in multithreaded environments, the only safe way to use this number is comparing it with zero. Positive values might change by the time you get to use them.
     *
     * Calls `MR_C_std_shared_ptr_MR_CSharp_SE_use_count()`.
     */
    public int use_count()
    {
        try
        {
            int __ret = (int)mrbind_test.ffi.std_shared_ptr_MR_CSharp_SE.H0.MR_C_std_shared_ptr_MR_CSharp_SE_use_count.invokeExact(rawPointer());
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
     * Calls `MR_C_std_shared_ptr_MR_CSharp_SE_reset()`.
     */
    public void reset()
    {
        try
        {
            mrbind_test.ffi.std_shared_ptr_MR_CSharp_SE.H0.MR_C_std_shared_ptr_MR_CSharp_SE_reset.invokeExact(rawPointer());
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
     * Construct from a value.
     * The reference to the parameter `value` might be preserved in the constructed object.
     *
     * Calls `MR_C_std_shared_ptr_MR_CSharp_SE_ConstructFromValue()`.
     */
    public static mrbind_test.mr.cs.std_shared_ptr_MR_CSharp_SE constructFromValue(mrbind_test.mr.csharp.SE value)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_shared_ptr_MR_CSharp_SE.H0.MR_C_std_shared_ptr_MR_CSharp_SE_ConstructFromValue.invokeExact(mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(value, "value"));
            return new mrbind_test.mr.cs.std_shared_ptr_MR_CSharp_SE(__ret, true, null);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(value);
        }
    }

    /**
     * Create a new instance, taking ownership of an existing pointer.
     *
     * Calls `MR_C_std_shared_ptr_MR_CSharp_SE_Construct()`.
     */
    public static mrbind_test.mr.cs.std_shared_ptr_MR_CSharp_SE construct(mrbind_test.mr.csharp.SE ptr)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_shared_ptr_MR_CSharp_SE.H0.MR_C_std_shared_ptr_MR_CSharp_SE_Construct.invokeExact(java.util.Objects.requireNonNull(ptr, "ptr").release());
            return new mrbind_test.mr.cs.std_shared_ptr_MR_CSharp_SE(__ret, true, null);
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
    }

    /**
     * Overwrite the existing instance, taking ownership of an existing pointer. The previously owned object, if any, has its reference count decremented.
     *
     * Calls `MR_C_std_shared_ptr_MR_CSharp_SE_Assign()`.
     */
    public void assign(mrbind_test.mr.csharp.SE ptr)
    {
        try
        {
            mrbind_test.ffi.std_shared_ptr_MR_CSharp_SE.H0.MR_C_std_shared_ptr_MR_CSharp_SE_Assign.invokeExact(rawPointer(), java.util.Objects.requireNonNull(ptr, "ptr").release());
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
     * Calls `MR_C_std_shared_ptr_MR_CSharp_SE_ConstructNonOwning()`.
     */
    public static mrbind_test.mr.cs.std_shared_ptr_MR_CSharp_SE constructNonOwning(mrbind_test.mr.csharp.SE ptr)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_shared_ptr_MR_CSharp_SE.H0.MR_C_std_shared_ptr_MR_CSharp_SE_ConstructNonOwning.invokeExact(mrbind_test.Ffi.ptr(ptr));
            return new mrbind_test.mr.cs.std_shared_ptr_MR_CSharp_SE(__ret, true, null);
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
     * Overwrite the existing instance with a non-owning pointer. The previously owned object, if any, has its reference count decremented.
     * The reference to the parameter `ptr` might be preserved in this object.
     *
     * Calls `MR_C_std_shared_ptr_MR_CSharp_SE_AssignNonOwning()`.
     */
    public void assignNonOwning(mrbind_test.mr.csharp.SE ptr)
    {
        try
        {
            mrbind_test.ffi.std_shared_ptr_MR_CSharp_SE.H0.MR_C_std_shared_ptr_MR_CSharp_SE_AssignNonOwning.invokeExact(rawPointer(), mrbind_test.Ffi.ptr(ptr));
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
     * Calls `MR_C_std_shared_ptr_MR_CSharp_SE_ConstructAliasing()`.
     */
    public std_shared_ptr_MR_CSharp_SE(mrbind_test.mr.cs.std_shared_ptr_const_void ownership, mrbind_test.mr.csharp.SE ptr)
    {
        this(__ctor_constructAliasing(ownership, ptr), true, null);
    }

    private static java.lang.foreign.MemorySegment __ctor_constructAliasing(mrbind_test.mr.cs.std_shared_ptr_const_void ownership, mrbind_test.mr.csharp.SE ptr)
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_shared_ptr_MR_CSharp_SE.H0.MR_C_std_shared_ptr_MR_CSharp_SE_ConstructAliasing.invokeExact(mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(ownership, "ownership"), mrbind_test.Ffi.ptr(ptr));
            return __ret;
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(ownership);
            java.lang.ref.Reference.reachabilityFence(ptr);
        }
    }

    /**
     * The aliasing assignment. Overwrite an existing instance, copying ownership from an existing shared pointer and storing an arbitrary raw pointer.
     * The input pointer can be reinterpreted from any other `std::shared_ptr<T>` to avoid constructing a new `std::shared_ptr<void>`.
     * The reference to the parameter `ptr` might be preserved in this object.
     *
     * Calls `MR_C_std_shared_ptr_MR_CSharp_SE_AssignAliasing()`.
     */
    public void AssignAliasing(mrbind_test.mr.cs.std_shared_ptr_const_void ownership, mrbind_test.mr.csharp.SE ptr)
    {
        try
        {
            mrbind_test.ffi.std_shared_ptr_MR_CSharp_SE.H0.MR_C_std_shared_ptr_MR_CSharp_SE_AssignAliasing.invokeExact(rawPointer(), mrbind_test.Ffi.PASS_BY_COPY, mrbind_test.Ffi.ptrNonNull(ownership, "ownership"), mrbind_test.Ffi.ptr(ptr));
        }
        catch (java.lang.Throwable __e)
        {
            throw mrbind_test.Ffi.rethrow(__e);
        }
        finally
        {
            java.lang.ref.Reference.reachabilityFence(this);
            java.lang.ref.Reference.reachabilityFence(ownership);
            java.lang.ref.Reference.reachabilityFence(ptr);
        }
    }

    /**
     * Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
     *
     * Calls `MR_C_std_shared_ptr_MR_CSharp_SE_ConvertTo_MR_C_std_shared_ptr_void()`.
     */
    public mrbind_test.mr.cs.std_shared_ptr_void convertTo_MR_C_std_shared_ptr_void()
    {
        try
        {
            java.lang.foreign.MemorySegment __ret = (java.lang.foreign.MemorySegment)mrbind_test.ffi.std_shared_ptr_MR_CSharp_SE.H0.MR_C_std_shared_ptr_MR_CSharp_SE_ConvertTo_MR_C_std_shared_ptr_void.invokeExact(rawPointer());
            return new mrbind_test.mr.cs.std_shared_ptr_void(__ret, true, null);
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
     * Calls `MR_C_std_shared_ptr_MR_CSharp_SE_AssignTo_MR_C_std_shared_ptr_void()`.
     */
    public void AssignTo_MR_C_std_shared_ptr_void(mrbind_test.mr.cs.std_shared_ptr_void _target)
    {
        try
        {
            mrbind_test.ffi.std_shared_ptr_MR_CSharp_SE.H0.MR_C_std_shared_ptr_MR_CSharp_SE_AssignTo_MR_C_std_shared_ptr_void.invokeExact(rawPointer(), mrbind_test.Ffi.ptrNonNull(_target, "_target"));
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
