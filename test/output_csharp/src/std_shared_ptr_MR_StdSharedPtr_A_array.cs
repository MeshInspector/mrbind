public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// Wraps a pointer to a shared reference-counted heap-allocated array of type `MR::StdSharedPtr::A`, of an unspecified size.
            /// Doesn't store the size, it has to be obtained separately.
            /// This is the const half of the class.
            public class Const_SharedPtr_MRStdSharedPtrAArray : MR.CS.Misc.Object<Const_SharedPtr_MRStdSharedPtrAArray>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_Destroy(_Underlying *_this);
                    __MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_SharedPtr_MRStdSharedPtrAArray() {Dispose(false);}

                internal unsafe Const_SharedPtr_MRStdSharedPtrAArray(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_SharedPtr_MRStdSharedPtrAArray() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_MRStdSharedPtrAArray._Underlying *__MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Const_SharedPtr_MRStdSharedPtrAArray(MR.CS.Std._ByValue_SharedPtr_MRStdSharedPtrAArray other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_MRStdSharedPtrAArray._Underlying *__MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.SharedPtr_MRStdSharedPtrAArray._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// Constructs a copy of another instance. The source remains alive.
                public Const_SharedPtr_MRStdSharedPtrAArray(Const_SharedPtr_MRStdSharedPtrAArray other) : this(new _ByValue_SharedPtr_MRStdSharedPtrAArray(other)) {}

                /// Constructs a copy of another instance. The source remains alive.
                public Const_SharedPtr_MRStdSharedPtrAArray(SharedPtr_MRStdSharedPtrAArray other) : this((Const_SharedPtr_MRStdSharedPtrAArray)other) {}

                /// Returns the stored pointer, possibly null.
                public unsafe MR.CS.StdSharedPtr.A? Get()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_get", ExactSpelling = true)]
                    extern static MR.CS.StdSharedPtr.A._Underlying *__MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_get(_Underlying *_this);
                    var __c_ret = __MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_get(_UnderlyingPtr);
                    MR.CS.StdSharedPtr.A? __ret;
                    __ret = __c_ret is not null ? new MR.CS.StdSharedPtr.A(__c_ret, is_owning: false) : null;
                    if (__ret is not null) __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// Returns an element from the stored array. The stored pointer must not be null.
                public unsafe MR.CS.StdSharedPtr.A this[long i]
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_at", ExactSpelling = true)]
                        extern static MR.CS.StdSharedPtr.A._Underlying *__MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_at(_Underlying *_this, long i);
                        MR.CS.StdSharedPtr.A __ret;
                        __ret = new(__MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_at(_UnderlyingPtr, i), is_owning: false);
                        __ret._KeepAliveEnclosingObject = this;
                        return __ret;
                    }
                }

                /// How many shared pointers share the managed object. Zero if no object is being managed.
                /// This being zero usually conincides with `MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_get()` returning null, but is ultimately orthogonal.
                /// Note that in multithreaded environments, the only safe way to use this number is comparing it with zero. Positive values might change by the time you get to use them.
                public unsafe int UseCount()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_use_count", ExactSpelling = true)]
                    extern static int __MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_use_count(_Underlying *_this);
                    return __MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_use_count(_UnderlyingPtr);
                }

                /// Create a new instance, taking ownership of an existing pointer.
                public unsafe Const_SharedPtr_MRStdSharedPtrAArray(void *ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_MRStdSharedPtrAArray._Underlying *__MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_Construct(void *ptr);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_Construct(ptr);
                }

                /// Create a new instance, storing a non-owning pointer.
                public unsafe Const_SharedPtr_MRStdSharedPtrAArray(MR.CS.StdSharedPtr.A? ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_ConstructNonOwning", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_MRStdSharedPtrAArray._Underlying *__MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_ConstructNonOwning(MR.CS.StdSharedPtr.A._Underlying *ptr);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_ConstructNonOwning(ptr is not null ? ptr._UnderlyingPtr : null);
                    if (ptr is not null) _KeepAlive(ptr);
                }

                /// The aliasing constructor. Create a new instance, copying ownership from an existing shared pointer and storing an arbitrary raw pointer.
                /// The input pointer can be reinterpreted from any other `std::shared_ptr<T>` to avoid constructing a new `std::shared_ptr<void>`.
                public unsafe Const_SharedPtr_MRStdSharedPtrAArray(MR.CS.Std._ByValue_SharedPtr_ConstVoid ownership, MR.CS.StdSharedPtr.A? ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_ConstructAliasing", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_MRStdSharedPtrAArray._Underlying *__MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_ConstructAliasing(MR.CS.Misc._PassBy ownership_pass_by, MR.CS.Std.SharedPtr_ConstVoid._Underlying *ownership, MR.CS.StdSharedPtr.A._Underlying *ptr);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_ConstructAliasing(ownership.PassByMode, ownership.Value is not null ? ownership.Value._UnderlyingPtr : null, ptr is not null ? ptr._UnderlyingPtr : null);
                    if (ptr is not null) _KeepAlive(ptr);
                }
            }

            /// Wraps a pointer to a shared reference-counted heap-allocated array of type `MR::StdSharedPtr::A`, of an unspecified size.
            /// Doesn't store the size, it has to be obtained separately.
            /// This is the non-const half of the class.
            public class SharedPtr_MRStdSharedPtrAArray : Const_SharedPtr_MRStdSharedPtrAArray
            {
                internal unsafe SharedPtr_MRStdSharedPtrAArray(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe SharedPtr_MRStdSharedPtrAArray() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_MRStdSharedPtrAArray._Underlying *__MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe SharedPtr_MRStdSharedPtrAArray(MR.CS.Std._ByValue_SharedPtr_MRStdSharedPtrAArray other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_MRStdSharedPtrAArray._Underlying *__MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.SharedPtr_MRStdSharedPtrAArray._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// Constructs a copy of another instance. The source remains alive.
                public SharedPtr_MRStdSharedPtrAArray(Const_SharedPtr_MRStdSharedPtrAArray other) : this(new _ByValue_SharedPtr_MRStdSharedPtrAArray(other)) {}

                /// Constructs a copy of another instance. The source remains alive.
                public SharedPtr_MRStdSharedPtrAArray(SharedPtr_MRStdSharedPtrAArray other) : this((Const_SharedPtr_MRStdSharedPtrAArray)other) {}

                /// Assigns the contents from another instance. Both objects remain alive after the call.
                public unsafe void Assign(MR.CS.Std._ByValue_SharedPtr_MRStdSharedPtrAArray other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.SharedPtr_MRStdSharedPtrAArray._Underlying *other);
                    _DiscardKeepAlive();
                    if (other.Value is not null) _KeepAlive(other.Value);
                    __MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// Create a new instance, taking ownership of an existing pointer.
                public unsafe SharedPtr_MRStdSharedPtrAArray(void *ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_MRStdSharedPtrAArray._Underlying *__MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_Construct(void *ptr);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_Construct(ptr);
                }

                /// Overwrite the existing instance, taking ownership of an existing pointer. The previously owned object, if any, has its reference count decremented.
                public unsafe void Assign(void *ptr)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_Assign", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_Assign(_Underlying *_this, void *ptr);
                    __MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_Assign(_UnderlyingPtr, ptr);
                }

                /// Create a new instance, storing a non-owning pointer.
                public unsafe SharedPtr_MRStdSharedPtrAArray(MR.CS.StdSharedPtr.A? ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_ConstructNonOwning", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_MRStdSharedPtrAArray._Underlying *__MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_ConstructNonOwning(MR.CS.StdSharedPtr.A._Underlying *ptr);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_ConstructNonOwning(ptr is not null ? ptr._UnderlyingPtr : null);
                    if (ptr is not null) _KeepAlive(ptr);
                }

                /// Overwrite the existing instance with a non-owning pointer. The previously owned object, if any, has its reference count decremented.
                public unsafe void Assign(MR.CS.StdSharedPtr.A? ptr)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_AssignNonOwning", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_AssignNonOwning(_Underlying *_this, MR.CS.StdSharedPtr.A._Underlying *ptr);
                    _DiscardKeepAlive();
                    if (ptr is not null) _KeepAlive(ptr);
                    __MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_AssignNonOwning(_UnderlyingPtr, ptr is not null ? ptr._UnderlyingPtr : null);
                }

                /// The aliasing constructor. Create a new instance, copying ownership from an existing shared pointer and storing an arbitrary raw pointer.
                /// The input pointer can be reinterpreted from any other `std::shared_ptr<T>` to avoid constructing a new `std::shared_ptr<void>`.
                public unsafe SharedPtr_MRStdSharedPtrAArray(MR.CS.Std._ByValue_SharedPtr_ConstVoid ownership, MR.CS.StdSharedPtr.A? ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_ConstructAliasing", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_MRStdSharedPtrAArray._Underlying *__MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_ConstructAliasing(MR.CS.Misc._PassBy ownership_pass_by, MR.CS.Std.SharedPtr_ConstVoid._Underlying *ownership, MR.CS.StdSharedPtr.A._Underlying *ptr);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_ConstructAliasing(ownership.PassByMode, ownership.Value is not null ? ownership.Value._UnderlyingPtr : null, ptr is not null ? ptr._UnderlyingPtr : null);
                    if (ptr is not null) _KeepAlive(ptr);
                }

                /// The aliasing assignment. Overwrite an existing instance, copying ownership from an existing shared pointer and storing an arbitrary raw pointer.
                /// The input pointer can be reinterpreted from any other `std::shared_ptr<T>` to avoid constructing a new `std::shared_ptr<void>`.
                public unsafe void AssignAliasing(MR.CS.Std._ByValue_SharedPtr_ConstVoid ownership, MR.CS.StdSharedPtr.A? ptr)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_AssignAliasing", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_AssignAliasing(_Underlying *_this, MR.CS.Misc._PassBy ownership_pass_by, MR.CS.Std.SharedPtr_ConstVoid._Underlying *ownership, MR.CS.StdSharedPtr.A._Underlying *ptr);
                    _DiscardKeepAlive();
                    if (ptr is not null) _KeepAlive(ptr);
                    __MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_AssignAliasing(_UnderlyingPtr, ownership.PassByMode, ownership.Value is not null ? ownership.Value._UnderlyingPtr : null, ptr is not null ? ptr._UnderlyingPtr : null);
                }
            }

            /// This is used as a function parameter when the underlying function receives `SharedPtr_MRStdSharedPtrAArray` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `SharedPtr_MRStdSharedPtrAArray`/`Const_SharedPtr_MRStdSharedPtrAArray` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            public class _ByValue_SharedPtr_MRStdSharedPtrAArray
            {
                internal readonly Const_SharedPtr_MRStdSharedPtrAArray? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_SharedPtr_MRStdSharedPtrAArray() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_SharedPtr_MRStdSharedPtrAArray(Const_SharedPtr_MRStdSharedPtrAArray new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_SharedPtr_MRStdSharedPtrAArray(Const_SharedPtr_MRStdSharedPtrAArray arg) {return new(arg);}
                public _ByValue_SharedPtr_MRStdSharedPtrAArray(MR.CS.Misc._Moved<SharedPtr_MRStdSharedPtrAArray> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_SharedPtr_MRStdSharedPtrAArray(MR.CS.Misc._Moved<SharedPtr_MRStdSharedPtrAArray> arg) {return new(arg);}
            }

            /// This is used for optional parameters of class `SharedPtr_MRStdSharedPtrAArray` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_SharedPtr_MRStdSharedPtrAArray`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `SharedPtr_MRStdSharedPtrAArray`/`Const_SharedPtr_MRStdSharedPtrAArray` directly.
            public class _InOptMut_SharedPtr_MRStdSharedPtrAArray
            {
                public SharedPtr_MRStdSharedPtrAArray? Opt;

                public _InOptMut_SharedPtr_MRStdSharedPtrAArray() {}
                public _InOptMut_SharedPtr_MRStdSharedPtrAArray(SharedPtr_MRStdSharedPtrAArray value) {Opt = value;}
                public static implicit operator _InOptMut_SharedPtr_MRStdSharedPtrAArray(SharedPtr_MRStdSharedPtrAArray value) {return new(value);}
            }

            /// This is used for optional parameters of class `SharedPtr_MRStdSharedPtrAArray` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_SharedPtr_MRStdSharedPtrAArray`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `SharedPtr_MRStdSharedPtrAArray`/`Const_SharedPtr_MRStdSharedPtrAArray` to pass it to the function.
            public class _InOptConst_SharedPtr_MRStdSharedPtrAArray
            {
                public Const_SharedPtr_MRStdSharedPtrAArray? Opt;

                public _InOptConst_SharedPtr_MRStdSharedPtrAArray() {}
                public _InOptConst_SharedPtr_MRStdSharedPtrAArray(Const_SharedPtr_MRStdSharedPtrAArray value) {Opt = value;}
                public static implicit operator _InOptConst_SharedPtr_MRStdSharedPtrAArray(Const_SharedPtr_MRStdSharedPtrAArray value) {return new(value);}
            }
        }
    }
}
