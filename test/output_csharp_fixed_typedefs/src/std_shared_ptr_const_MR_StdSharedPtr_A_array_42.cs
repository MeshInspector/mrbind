public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// Wraps a pointer to a shared reference-counted heap-allocated array of type `const MR::StdSharedPtr::A`, of size 42.
            /// This is the const half of the class.
            /// </summary>
            public class Const_SharedPtr_ConstMRStdSharedPtrAArray42 : MR.CS.Misc.Object<Const_SharedPtr_ConstMRStdSharedPtrAArray42>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_Destroy(_Underlying *_this);
                    __MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_SharedPtr_ConstMRStdSharedPtrAArray42() {Dispose(false);}

                internal unsafe Const_SharedPtr_ConstMRStdSharedPtrAArray42(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_SharedPtr_ConstMRStdSharedPtrAArray42() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_ConstMRStdSharedPtrAArray42._Underlying *__MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Const_SharedPtr_ConstMRStdSharedPtrAArray42(MR.CS.Std._ByValue_SharedPtr_ConstMRStdSharedPtrAArray42 other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_ConstMRStdSharedPtrAArray42._Underlying *__MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.SharedPtr_ConstMRStdSharedPtrAArray42._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Const_SharedPtr_ConstMRStdSharedPtrAArray42(Const_SharedPtr_ConstMRStdSharedPtrAArray42 other) : this(new _ByValue_SharedPtr_ConstMRStdSharedPtrAArray42(other)) {}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Const_SharedPtr_ConstMRStdSharedPtrAArray42(SharedPtr_ConstMRStdSharedPtrAArray42 other) : this((Const_SharedPtr_ConstMRStdSharedPtrAArray42)other) {}

                /// <summary>
                /// Returns the stored pointer, possibly null.
                /// </summary>
                public unsafe MR.CS.StdSharedPtr.Const_A? get()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_get", ExactSpelling = true)]
                    extern static MR.CS.StdSharedPtr.Const_A._Underlying *__MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_get(_Underlying *_this);
                    var __c_ret = __MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_get(_UnderlyingPtr);
                    MR.CS.StdSharedPtr.Const_A? __ret;
                    __ret = __c_ret is not null ? new MR.CS.StdSharedPtr.Const_A(__c_ret, is_owning: false) : null;
                    if (__ret is not null) __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// How many shared pointers share the managed object. Zero if no object is being managed.
                /// This being zero usually conincides with `MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_get()` returning null, but is ultimately orthogonal.
                /// Note that in multithreaded environments, the only safe way to use this number is comparing it with zero. Positive values might change by the time you get to use them.
                /// </summary>
                public unsafe int useCount()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_use_count", ExactSpelling = true)]
                    extern static int __MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_use_count(_Underlying *_this);
                    return __MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_use_count(_UnderlyingPtr);
                }

                /// <summary>
                /// Create a new instance, taking ownership of an existing pointer.
                /// </summary>
                public unsafe Const_SharedPtr_ConstMRStdSharedPtrAArray42(void *ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_ConstMRStdSharedPtrAArray42._Underlying *__MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_Construct(void *ptr);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_Construct(ptr);
                }

                /// <summary>
                /// Create a new instance, storing a non-owning pointer.
                /// </summary>
                public unsafe Const_SharedPtr_ConstMRStdSharedPtrAArray42(MR.CS.StdSharedPtr.Const_A? ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_ConstructNonOwning", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_ConstMRStdSharedPtrAArray42._Underlying *__MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_ConstructNonOwning(MR.CS.StdSharedPtr.Const_A._Underlying *ptr);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_ConstructNonOwning(ptr is not null ? ptr._UnderlyingPtr : null);
                    if (ptr is not null) _KeepAlive(ptr);
                }

                /// <summary>
                /// Create a new instance from a non-const pointer to the same type.
                /// </summary>
                public unsafe Const_SharedPtr_ConstMRStdSharedPtrAArray42(MR.CS.Std._ByValue_SharedPtr_MRStdSharedPtrAArray42 ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_ConstructFromMutable", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_ConstMRStdSharedPtrAArray42._Underlying *__MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_ConstructFromMutable(MR.CS.Misc._PassBy ptr_pass_by, MR.CS.Std.SharedPtr_MRStdSharedPtrAArray42._Underlying *ptr);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_ConstructFromMutable(ptr.PassByMode, ptr.Value is not null ? ptr.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Create a new instance from a non-const pointer to the same type.
                /// </summary>
                public static unsafe implicit operator Const_SharedPtr_ConstMRStdSharedPtrAArray42(MR.CS.Std._ByValue_SharedPtr_MRStdSharedPtrAArray42 ptr) {return new(ptr);}

                /// <summary>
                /// The aliasing constructor. Create a new instance, copying ownership from an existing shared pointer and storing an arbitrary raw pointer.
                /// The input pointer can be reinterpreted from any other `std::shared_ptr<T>` to avoid constructing a new `std::shared_ptr<void>`.
                /// </summary>
                public unsafe Const_SharedPtr_ConstMRStdSharedPtrAArray42(MR.CS.Std._ByValue_SharedPtr_ConstVoid ownership, MR.CS.StdSharedPtr.Const_A? ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_ConstructAliasing", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_ConstMRStdSharedPtrAArray42._Underlying *__MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_ConstructAliasing(MR.CS.Misc._PassBy ownership_pass_by, MR.CS.Std.SharedPtr_ConstVoid._Underlying *ownership, MR.CS.StdSharedPtr.Const_A._Underlying *ptr);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_ConstructAliasing(ownership.PassByMode, ownership.Value is not null ? ownership.Value._UnderlyingPtr : null, ptr is not null ? ptr._UnderlyingPtr : null);
                    if (ptr is not null) _KeepAlive(ptr);
                }
            }

            /// <summary>
            /// Wraps a pointer to a shared reference-counted heap-allocated array of type `const MR::StdSharedPtr::A`, of size 42.
            /// This is the non-const half of the class.
            /// </summary>
            public class SharedPtr_ConstMRStdSharedPtrAArray42 : Const_SharedPtr_ConstMRStdSharedPtrAArray42
            {
                internal unsafe SharedPtr_ConstMRStdSharedPtrAArray42(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe SharedPtr_ConstMRStdSharedPtrAArray42() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_ConstMRStdSharedPtrAArray42._Underlying *__MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe SharedPtr_ConstMRStdSharedPtrAArray42(MR.CS.Std._ByValue_SharedPtr_ConstMRStdSharedPtrAArray42 other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_ConstMRStdSharedPtrAArray42._Underlying *__MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.SharedPtr_ConstMRStdSharedPtrAArray42._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public SharedPtr_ConstMRStdSharedPtrAArray42(Const_SharedPtr_ConstMRStdSharedPtrAArray42 other) : this(new _ByValue_SharedPtr_ConstMRStdSharedPtrAArray42(other)) {}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public SharedPtr_ConstMRStdSharedPtrAArray42(SharedPtr_ConstMRStdSharedPtrAArray42 other) : this((Const_SharedPtr_ConstMRStdSharedPtrAArray42)other) {}

                /// <summary>
                /// Assigns the contents from another instance. Both objects remain alive after the call.
                /// </summary>
                public unsafe void assign(MR.CS.Std._ByValue_SharedPtr_ConstMRStdSharedPtrAArray42 other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.SharedPtr_ConstMRStdSharedPtrAArray42._Underlying *other);
                    _DiscardKeepAlive();
                    if (other.Value is not null) _KeepAlive(other.Value);
                    __MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Create a new instance, taking ownership of an existing pointer.
                /// </summary>
                public unsafe SharedPtr_ConstMRStdSharedPtrAArray42(void *ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_ConstMRStdSharedPtrAArray42._Underlying *__MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_Construct(void *ptr);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_Construct(ptr);
                }

                /// <summary>
                /// Overwrite the existing instance, taking ownership of an existing pointer. The previously owned object, if any, has its reference count decremented.
                /// </summary>
                public unsafe void assign(void *ptr)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_Assign", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_Assign(_Underlying *_this, void *ptr);
                    __MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_Assign(_UnderlyingPtr, ptr);
                }

                /// <summary>
                /// Create a new instance, storing a non-owning pointer.
                /// </summary>
                public unsafe SharedPtr_ConstMRStdSharedPtrAArray42(MR.CS.StdSharedPtr.Const_A? ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_ConstructNonOwning", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_ConstMRStdSharedPtrAArray42._Underlying *__MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_ConstructNonOwning(MR.CS.StdSharedPtr.Const_A._Underlying *ptr);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_ConstructNonOwning(ptr is not null ? ptr._UnderlyingPtr : null);
                    if (ptr is not null) _KeepAlive(ptr);
                }

                /// <summary>
                /// Overwrite the existing instance with a non-owning pointer. The previously owned object, if any, has its reference count decremented.
                /// </summary>
                public unsafe void assign(MR.CS.StdSharedPtr.Const_A? ptr)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_AssignNonOwning", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_AssignNonOwning(_Underlying *_this, MR.CS.StdSharedPtr.Const_A._Underlying *ptr);
                    _DiscardKeepAlive();
                    if (ptr is not null) _KeepAlive(ptr);
                    __MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_AssignNonOwning(_UnderlyingPtr, ptr is not null ? ptr._UnderlyingPtr : null);
                }

                /// <summary>
                /// Create a new instance from a non-const pointer to the same type.
                /// </summary>
                public unsafe SharedPtr_ConstMRStdSharedPtrAArray42(MR.CS.Std._ByValue_SharedPtr_MRStdSharedPtrAArray42 ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_ConstructFromMutable", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_ConstMRStdSharedPtrAArray42._Underlying *__MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_ConstructFromMutable(MR.CS.Misc._PassBy ptr_pass_by, MR.CS.Std.SharedPtr_MRStdSharedPtrAArray42._Underlying *ptr);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_ConstructFromMutable(ptr.PassByMode, ptr.Value is not null ? ptr.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Create a new instance from a non-const pointer to the same type.
                /// </summary>
                public static unsafe implicit operator SharedPtr_ConstMRStdSharedPtrAArray42(MR.CS.Std._ByValue_SharedPtr_MRStdSharedPtrAArray42 ptr) {return new(ptr);}

                /// <summary>
                /// Overwrite the existing instance with a non-const pointer to the same type.
                /// </summary>
                public unsafe void assign(MR.CS.Std._ByValue_SharedPtr_MRStdSharedPtrAArray42 ptr)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_AssignFromMutable", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_AssignFromMutable(_Underlying *_this, MR.CS.Misc._PassBy ptr_pass_by, MR.CS.Std.SharedPtr_MRStdSharedPtrAArray42._Underlying *ptr);
                    __MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_AssignFromMutable(_UnderlyingPtr, ptr.PassByMode, ptr.Value is not null ? ptr.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// The aliasing constructor. Create a new instance, copying ownership from an existing shared pointer and storing an arbitrary raw pointer.
                /// The input pointer can be reinterpreted from any other `std::shared_ptr<T>` to avoid constructing a new `std::shared_ptr<void>`.
                /// </summary>
                public unsafe SharedPtr_ConstMRStdSharedPtrAArray42(MR.CS.Std._ByValue_SharedPtr_ConstVoid ownership, MR.CS.StdSharedPtr.Const_A? ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_ConstructAliasing", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_ConstMRStdSharedPtrAArray42._Underlying *__MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_ConstructAliasing(MR.CS.Misc._PassBy ownership_pass_by, MR.CS.Std.SharedPtr_ConstVoid._Underlying *ownership, MR.CS.StdSharedPtr.Const_A._Underlying *ptr);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_ConstructAliasing(ownership.PassByMode, ownership.Value is not null ? ownership.Value._UnderlyingPtr : null, ptr is not null ? ptr._UnderlyingPtr : null);
                    if (ptr is not null) _KeepAlive(ptr);
                }

                /// <summary>
                /// The aliasing assignment. Overwrite an existing instance, copying ownership from an existing shared pointer and storing an arbitrary raw pointer.
                /// The input pointer can be reinterpreted from any other `std::shared_ptr<T>` to avoid constructing a new `std::shared_ptr<void>`.
                /// </summary>
                public unsafe void assignAliasing(MR.CS.Std._ByValue_SharedPtr_ConstVoid ownership, MR.CS.StdSharedPtr.Const_A? ptr)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_AssignAliasing", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_AssignAliasing(_Underlying *_this, MR.CS.Misc._PassBy ownership_pass_by, MR.CS.Std.SharedPtr_ConstVoid._Underlying *ownership, MR.CS.StdSharedPtr.Const_A._Underlying *ptr);
                    _DiscardKeepAlive();
                    if (ptr is not null) _KeepAlive(ptr);
                    __MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42_AssignAliasing(_UnderlyingPtr, ownership.PassByMode, ownership.Value is not null ? ownership.Value._UnderlyingPtr : null, ptr is not null ? ptr._UnderlyingPtr : null);
                }
            }

            /// <summary>
            /// This is used as a function parameter when the underlying function receives `SharedPtr_ConstMRStdSharedPtrAArray42` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `SharedPtr_ConstMRStdSharedPtrAArray42`/`Const_SharedPtr_ConstMRStdSharedPtrAArray42` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            /// </summary>
            public class _ByValue_SharedPtr_ConstMRStdSharedPtrAArray42
            {
                internal readonly Const_SharedPtr_ConstMRStdSharedPtrAArray42? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_SharedPtr_ConstMRStdSharedPtrAArray42() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_SharedPtr_ConstMRStdSharedPtrAArray42(Const_SharedPtr_ConstMRStdSharedPtrAArray42 new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_SharedPtr_ConstMRStdSharedPtrAArray42(Const_SharedPtr_ConstMRStdSharedPtrAArray42 arg) {return new(arg);}
                public _ByValue_SharedPtr_ConstMRStdSharedPtrAArray42(MR.CS.Misc._Moved<SharedPtr_ConstMRStdSharedPtrAArray42> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_SharedPtr_ConstMRStdSharedPtrAArray42(MR.CS.Misc._Moved<SharedPtr_ConstMRStdSharedPtrAArray42> arg) {return new(arg);}

                /// <summary>
                /// Create a new instance from a non-const pointer to the same type.
                /// </summary>
                public static unsafe implicit operator _ByValue_SharedPtr_ConstMRStdSharedPtrAArray42(MR.CS.Std._ByValue_SharedPtr_MRStdSharedPtrAArray42 ptr) {return new MR.CS.Misc._Moved<MR.CS.Std.SharedPtr_ConstMRStdSharedPtrAArray42>(ptr);}
            }

            /// <summary>
            /// This is used for optional parameters of class `SharedPtr_ConstMRStdSharedPtrAArray42` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_SharedPtr_ConstMRStdSharedPtrAArray42`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `SharedPtr_ConstMRStdSharedPtrAArray42`/`Const_SharedPtr_ConstMRStdSharedPtrAArray42` directly.
            /// </summary>
            public class _InOptMut_SharedPtr_ConstMRStdSharedPtrAArray42
            {
                public SharedPtr_ConstMRStdSharedPtrAArray42? Opt;

                public _InOptMut_SharedPtr_ConstMRStdSharedPtrAArray42() {}
                public _InOptMut_SharedPtr_ConstMRStdSharedPtrAArray42(SharedPtr_ConstMRStdSharedPtrAArray42 value) {Opt = value;}
                public static implicit operator _InOptMut_SharedPtr_ConstMRStdSharedPtrAArray42(SharedPtr_ConstMRStdSharedPtrAArray42 value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `SharedPtr_ConstMRStdSharedPtrAArray42` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_SharedPtr_ConstMRStdSharedPtrAArray42`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `SharedPtr_ConstMRStdSharedPtrAArray42`/`Const_SharedPtr_ConstMRStdSharedPtrAArray42` to pass it to the function.
            /// </summary>
            public class _InOptConst_SharedPtr_ConstMRStdSharedPtrAArray42
            {
                public Const_SharedPtr_ConstMRStdSharedPtrAArray42? Opt;

                public _InOptConst_SharedPtr_ConstMRStdSharedPtrAArray42() {}
                public _InOptConst_SharedPtr_ConstMRStdSharedPtrAArray42(Const_SharedPtr_ConstMRStdSharedPtrAArray42 value) {Opt = value;}
                public static implicit operator _InOptConst_SharedPtr_ConstMRStdSharedPtrAArray42(Const_SharedPtr_ConstMRStdSharedPtrAArray42 value) {return new(value);}

                /// <summary>
                /// Create a new instance from a non-const pointer to the same type.
                /// </summary>
                public static unsafe implicit operator _InOptConst_SharedPtr_ConstMRStdSharedPtrAArray42(MR.CS.Std._ByValue_SharedPtr_MRStdSharedPtrAArray42 ptr) {return new Const_SharedPtr_ConstMRStdSharedPtrAArray42(ptr);}
            }
        }
    }
}
