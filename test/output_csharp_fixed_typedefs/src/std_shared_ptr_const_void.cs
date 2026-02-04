public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// Wraps a pointer to a single shared reference-counted heap-allocated `const void`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_SharedPtr_ConstVoid : MR.CS.Misc.Object<Const_SharedPtr_ConstVoid>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_const_void_Destroy(_Underlying *_this);
                    __MR_C_std_shared_ptr_const_void_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_SharedPtr_ConstVoid() {Dispose(false);}

                internal unsafe Const_SharedPtr_ConstVoid(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_SharedPtr_ConstVoid() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_ConstVoid._Underlying *__MR_C_std_shared_ptr_const_void_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_void_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Const_SharedPtr_ConstVoid(MR.CS.Std._ByValue_SharedPtr_ConstVoid other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_ConstVoid._Underlying *__MR_C_std_shared_ptr_const_void_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.SharedPtr_ConstVoid._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_void_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Const_SharedPtr_ConstVoid(Const_SharedPtr_ConstVoid other) : this(new _ByValue_SharedPtr_ConstVoid(other)) {}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Const_SharedPtr_ConstVoid(SharedPtr_ConstVoid other) : this((Const_SharedPtr_ConstVoid)other) {}

                /// <summary>
                /// Returns the stored pointer, possibly null.
                /// Returns a read-only pointer.
                /// </summary>
                public unsafe void *get()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_Get", ExactSpelling = true)]
                    extern static void *__MR_C_std_shared_ptr_const_void_Get(_Underlying *_this);
                    return __MR_C_std_shared_ptr_const_void_Get(_UnderlyingPtr);
                }

                /// <summary>
                /// How many shared pointers share the managed object. Zero if no object is being managed.
                /// This being zero usually conincides with `MR_C_std_shared_ptr_const_void_Get()` returning null, but is ultimately orthogonal.
                /// Note that in multithreaded environments, the only safe way to use this number is comparing it with zero. Positive values might change by the time you get to use them.
                /// </summary>
                public unsafe int useCount()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_UseCount", ExactSpelling = true)]
                    extern static int __MR_C_std_shared_ptr_const_void_UseCount(_Underlying *_this);
                    return __MR_C_std_shared_ptr_const_void_UseCount(_UnderlyingPtr);
                }

                /// <summary>
                /// Create a new instance, storing a non-owning pointer.
                /// Parameter `ptr` is a read-only pointer.
                /// </summary>
                public unsafe Const_SharedPtr_ConstVoid(void *ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_ConstructNonOwning", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_ConstVoid._Underlying *__MR_C_std_shared_ptr_const_void_ConstructNonOwning(void *ptr);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_void_ConstructNonOwning(ptr);
                }

                /// <summary>
                /// Create a new instance from a non-const pointer to the same type.
                /// </summary>
                public unsafe Const_SharedPtr_ConstVoid(MR.CS.Std._ByValue_SharedPtr_Void ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_ConstructFromMutable", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_ConstVoid._Underlying *__MR_C_std_shared_ptr_const_void_ConstructFromMutable(MR.CS.Misc._PassBy ptr_pass_by, MR.CS.Std.SharedPtr_Void._Underlying *ptr);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_void_ConstructFromMutable(ptr.PassByMode, ptr.Value is not null ? ptr.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Create a new instance from a non-const pointer to the same type.
                /// </summary>
                public static unsafe implicit operator Const_SharedPtr_ConstVoid(MR.CS.Std._ByValue_SharedPtr_Void ptr) {return new(ptr);}

                /// <summary>
                /// The aliasing constructor. Create a new instance, copying ownership from an existing shared pointer and storing an arbitrary raw pointer.
                /// The input pointer can be reinterpreted from any other `std::shared_ptr<T>` to avoid constructing a new `std::shared_ptr<void>`.
                /// Parameter `ptr` is a read-only pointer.
                /// </summary>
                public unsafe Const_SharedPtr_ConstVoid(MR.CS.Std._ByValue_SharedPtr_ConstVoid ownership, void *ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_ConstructAliasing", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_ConstVoid._Underlying *__MR_C_std_shared_ptr_const_void_ConstructAliasing(MR.CS.Misc._PassBy ownership_pass_by, MR.CS.Std.SharedPtr_ConstVoid._Underlying *ownership, void *ptr);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_void_ConstructAliasing(ownership.PassByMode, ownership.Value is not null ? ownership.Value._UnderlyingPtr : null, ptr);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public unsafe Const_SharedPtr_ConstVoid(MR.CS.CSharp._ByValueShared_SA _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_MR_CSharp_SA", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_ConstVoid._Underlying *__MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_MR_CSharp_SA(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.SA._UnderlyingShared *_other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_MR_CSharp_SA(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingSharedPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator Const_SharedPtr_ConstVoid(MR.CS.CSharp._ByValueShared_SA _other) {return new(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public unsafe Const_SharedPtr_ConstVoid(MR.CS.Std._ByValue_SharedPtr_ConstInt32T _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_int32_t", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_ConstVoid._Underlying *__MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_int32_t(MR.CS.Misc._PassBy _other_pass_by, MR.CS.Std.SharedPtr_ConstInt32T._Underlying *_other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_int32_t(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator Const_SharedPtr_ConstVoid(MR.CS.Std._ByValue_SharedPtr_ConstInt32T _other) {return new(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public unsafe Const_SharedPtr_ConstVoid(MR.CS.Std._ByValue_SharedPtr_ConstInt32TArray _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_int32_t_array", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_ConstVoid._Underlying *__MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_int32_t_array(MR.CS.Misc._PassBy _other_pass_by, MR.CS.Std.SharedPtr_ConstInt32TArray._Underlying *_other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_int32_t_array(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator Const_SharedPtr_ConstVoid(MR.CS.Std._ByValue_SharedPtr_ConstInt32TArray _other) {return new(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public unsafe Const_SharedPtr_ConstVoid(MR.CS.Std._ByValue_SharedPtr_ConstInt32TArray42 _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_int32_t_array_42", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_ConstVoid._Underlying *__MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_int32_t_array_42(MR.CS.Misc._PassBy _other_pass_by, MR.CS.Std.SharedPtr_ConstInt32TArray42._Underlying *_other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_int32_t_array_42(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator Const_SharedPtr_ConstVoid(MR.CS.Std._ByValue_SharedPtr_ConstInt32TArray42 _other) {return new(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public unsafe Const_SharedPtr_ConstVoid(MR.CS.StdSharedPtr._ByValueShared_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_MR_StdSharedPtr_A", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_ConstVoid._Underlying *__MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_MR_StdSharedPtr_A(MR.CS.Misc._PassBy _other_pass_by, MR.CS.StdSharedPtr.A._UnderlyingShared *_other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_MR_StdSharedPtr_A(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingSharedPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator Const_SharedPtr_ConstVoid(MR.CS.StdSharedPtr._ByValueShared_A _other) {return new(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public unsafe Const_SharedPtr_ConstVoid(MR.CS.Std._ByValue_SharedPtr_ConstMRStdSharedPtrAArray _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_ConstVoid._Underlying *__MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array(MR.CS.Misc._PassBy _other_pass_by, MR.CS.Std.SharedPtr_ConstMRStdSharedPtrAArray._Underlying *_other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator Const_SharedPtr_ConstVoid(MR.CS.Std._ByValue_SharedPtr_ConstMRStdSharedPtrAArray _other) {return new(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public unsafe Const_SharedPtr_ConstVoid(MR.CS.Std._ByValue_SharedPtr_ConstMRStdSharedPtrAArray42 _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_ConstVoid._Underlying *__MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42(MR.CS.Misc._PassBy _other_pass_by, MR.CS.Std.SharedPtr_ConstMRStdSharedPtrAArray42._Underlying *_other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator Const_SharedPtr_ConstVoid(MR.CS.Std._ByValue_SharedPtr_ConstMRStdSharedPtrAArray42 _other) {return new(_other);}
            }

            /// <summary>
            /// Wraps a pointer to a single shared reference-counted heap-allocated `const void`.
            /// This is the non-const half of the class.
            /// </summary>
            public class SharedPtr_ConstVoid : Const_SharedPtr_ConstVoid
            {
                internal unsafe SharedPtr_ConstVoid(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe SharedPtr_ConstVoid() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_ConstVoid._Underlying *__MR_C_std_shared_ptr_const_void_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_void_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe SharedPtr_ConstVoid(MR.CS.Std._ByValue_SharedPtr_ConstVoid other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_ConstVoid._Underlying *__MR_C_std_shared_ptr_const_void_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.SharedPtr_ConstVoid._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_void_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public SharedPtr_ConstVoid(Const_SharedPtr_ConstVoid other) : this(new _ByValue_SharedPtr_ConstVoid(other)) {}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public SharedPtr_ConstVoid(SharedPtr_ConstVoid other) : this((Const_SharedPtr_ConstVoid)other) {}

                /// <summary>
                /// Assigns the contents from another instance. Both objects remain alive after the call.
                /// </summary>
                public unsafe void assign(MR.CS.Std._ByValue_SharedPtr_ConstVoid other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_const_void_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.SharedPtr_ConstVoid._Underlying *other);
                    _DiscardKeepAlive();
                    if (other.Value is not null) _KeepAlive(other.Value);
                    __MR_C_std_shared_ptr_const_void_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Create a new instance, storing a non-owning pointer.
                /// Parameter `ptr` is a read-only pointer.
                /// </summary>
                public unsafe SharedPtr_ConstVoid(void *ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_ConstructNonOwning", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_ConstVoid._Underlying *__MR_C_std_shared_ptr_const_void_ConstructNonOwning(void *ptr);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_void_ConstructNonOwning(ptr);
                }

                /// <summary>
                /// Overwrite the existing instance with a non-owning pointer. The previously owned object, if any, has its reference count decremented.
                /// Parameter `ptr` is a read-only pointer.
                /// </summary>
                public unsafe void assign(void *ptr)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_AssignNonOwning", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_const_void_AssignNonOwning(_Underlying *_this, void *ptr);
                    _DiscardKeepAlive();
                    __MR_C_std_shared_ptr_const_void_AssignNonOwning(_UnderlyingPtr, ptr);
                }

                /// <summary>
                /// Create a new instance from a non-const pointer to the same type.
                /// </summary>
                public unsafe SharedPtr_ConstVoid(MR.CS.Std._ByValue_SharedPtr_Void ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_ConstructFromMutable", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_ConstVoid._Underlying *__MR_C_std_shared_ptr_const_void_ConstructFromMutable(MR.CS.Misc._PassBy ptr_pass_by, MR.CS.Std.SharedPtr_Void._Underlying *ptr);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_void_ConstructFromMutable(ptr.PassByMode, ptr.Value is not null ? ptr.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Create a new instance from a non-const pointer to the same type.
                /// </summary>
                public static unsafe implicit operator SharedPtr_ConstVoid(MR.CS.Std._ByValue_SharedPtr_Void ptr) {return new(ptr);}

                /// <summary>
                /// Overwrite the existing instance with a non-const pointer to the same type.
                /// </summary>
                public unsafe void assign(MR.CS.Std._ByValue_SharedPtr_Void ptr)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_AssignFromMutable", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_const_void_AssignFromMutable(_Underlying *_this, MR.CS.Misc._PassBy ptr_pass_by, MR.CS.Std.SharedPtr_Void._Underlying *ptr);
                    __MR_C_std_shared_ptr_const_void_AssignFromMutable(_UnderlyingPtr, ptr.PassByMode, ptr.Value is not null ? ptr.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// The aliasing constructor. Create a new instance, copying ownership from an existing shared pointer and storing an arbitrary raw pointer.
                /// The input pointer can be reinterpreted from any other `std::shared_ptr<T>` to avoid constructing a new `std::shared_ptr<void>`.
                /// Parameter `ptr` is a read-only pointer.
                /// </summary>
                public unsafe SharedPtr_ConstVoid(MR.CS.Std._ByValue_SharedPtr_ConstVoid ownership, void *ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_ConstructAliasing", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_ConstVoid._Underlying *__MR_C_std_shared_ptr_const_void_ConstructAliasing(MR.CS.Misc._PassBy ownership_pass_by, MR.CS.Std.SharedPtr_ConstVoid._Underlying *ownership, void *ptr);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_void_ConstructAliasing(ownership.PassByMode, ownership.Value is not null ? ownership.Value._UnderlyingPtr : null, ptr);
                }

                /// <summary>
                /// The aliasing assignment. Overwrite an existing instance, copying ownership from an existing shared pointer and storing an arbitrary raw pointer.
                /// The input pointer can be reinterpreted from any other `std::shared_ptr<T>` to avoid constructing a new `std::shared_ptr<void>`.
                /// Parameter `ptr` is a read-only pointer.
                /// </summary>
                public unsafe void assignAliasing(MR.CS.Std._ByValue_SharedPtr_ConstVoid ownership, void *ptr)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_AssignAliasing", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_const_void_AssignAliasing(_Underlying *_this, MR.CS.Misc._PassBy ownership_pass_by, MR.CS.Std.SharedPtr_ConstVoid._Underlying *ownership, void *ptr);
                    _DiscardKeepAlive();
                    __MR_C_std_shared_ptr_const_void_AssignAliasing(_UnderlyingPtr, ownership.PassByMode, ownership.Value is not null ? ownership.Value._UnderlyingPtr : null, ptr);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public unsafe SharedPtr_ConstVoid(MR.CS.CSharp._ByValueShared_SA _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_MR_CSharp_SA", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_ConstVoid._Underlying *__MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_MR_CSharp_SA(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.SA._UnderlyingShared *_other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_MR_CSharp_SA(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingSharedPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator SharedPtr_ConstVoid(MR.CS.CSharp._ByValueShared_SA _other) {return new(_other);}

                /// <summary>
                /// Overwrites an existing `std::shared_ptr<void>` to point to the same object as this instance.
                /// </summary>
                public unsafe void assign(MR.CS.CSharp._ByValueShared_SA _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_AssignFrom_MR_C_std_shared_ptr_const_MR_CSharp_SA", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_const_void_AssignFrom_MR_C_std_shared_ptr_const_MR_CSharp_SA(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.SA._UnderlyingShared *_other);
                    __MR_C_std_shared_ptr_const_void_AssignFrom_MR_C_std_shared_ptr_const_MR_CSharp_SA(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingSharedPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public unsafe SharedPtr_ConstVoid(MR.CS.Std._ByValue_SharedPtr_ConstInt32T _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_int32_t", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_ConstVoid._Underlying *__MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_int32_t(MR.CS.Misc._PassBy _other_pass_by, MR.CS.Std.SharedPtr_ConstInt32T._Underlying *_other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_int32_t(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator SharedPtr_ConstVoid(MR.CS.Std._ByValue_SharedPtr_ConstInt32T _other) {return new(_other);}

                /// <summary>
                /// Overwrites an existing `std::shared_ptr<void>` to point to the same object as this instance.
                /// </summary>
                public unsafe void assign(MR.CS.Std._ByValue_SharedPtr_ConstInt32T _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_AssignFrom_MR_C_std_shared_ptr_const_int32_t", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_const_void_AssignFrom_MR_C_std_shared_ptr_const_int32_t(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.Std.SharedPtr_ConstInt32T._Underlying *_other);
                    __MR_C_std_shared_ptr_const_void_AssignFrom_MR_C_std_shared_ptr_const_int32_t(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public unsafe SharedPtr_ConstVoid(MR.CS.Std._ByValue_SharedPtr_ConstInt32TArray _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_int32_t_array", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_ConstVoid._Underlying *__MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_int32_t_array(MR.CS.Misc._PassBy _other_pass_by, MR.CS.Std.SharedPtr_ConstInt32TArray._Underlying *_other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_int32_t_array(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator SharedPtr_ConstVoid(MR.CS.Std._ByValue_SharedPtr_ConstInt32TArray _other) {return new(_other);}

                /// <summary>
                /// Overwrites an existing `std::shared_ptr<void>` to point to the same object as this instance.
                /// </summary>
                public unsafe void assign(MR.CS.Std._ByValue_SharedPtr_ConstInt32TArray _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_AssignFrom_MR_C_std_shared_ptr_const_int32_t_array", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_const_void_AssignFrom_MR_C_std_shared_ptr_const_int32_t_array(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.Std.SharedPtr_ConstInt32TArray._Underlying *_other);
                    __MR_C_std_shared_ptr_const_void_AssignFrom_MR_C_std_shared_ptr_const_int32_t_array(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public unsafe SharedPtr_ConstVoid(MR.CS.Std._ByValue_SharedPtr_ConstInt32TArray42 _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_int32_t_array_42", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_ConstVoid._Underlying *__MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_int32_t_array_42(MR.CS.Misc._PassBy _other_pass_by, MR.CS.Std.SharedPtr_ConstInt32TArray42._Underlying *_other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_int32_t_array_42(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator SharedPtr_ConstVoid(MR.CS.Std._ByValue_SharedPtr_ConstInt32TArray42 _other) {return new(_other);}

                /// <summary>
                /// Overwrites an existing `std::shared_ptr<void>` to point to the same object as this instance.
                /// </summary>
                public unsafe void assign(MR.CS.Std._ByValue_SharedPtr_ConstInt32TArray42 _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_AssignFrom_MR_C_std_shared_ptr_const_int32_t_array_42", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_const_void_AssignFrom_MR_C_std_shared_ptr_const_int32_t_array_42(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.Std.SharedPtr_ConstInt32TArray42._Underlying *_other);
                    __MR_C_std_shared_ptr_const_void_AssignFrom_MR_C_std_shared_ptr_const_int32_t_array_42(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public unsafe SharedPtr_ConstVoid(MR.CS.StdSharedPtr._ByValueShared_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_MR_StdSharedPtr_A", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_ConstVoid._Underlying *__MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_MR_StdSharedPtr_A(MR.CS.Misc._PassBy _other_pass_by, MR.CS.StdSharedPtr.A._UnderlyingShared *_other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_MR_StdSharedPtr_A(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingSharedPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator SharedPtr_ConstVoid(MR.CS.StdSharedPtr._ByValueShared_A _other) {return new(_other);}

                /// <summary>
                /// Overwrites an existing `std::shared_ptr<void>` to point to the same object as this instance.
                /// </summary>
                public unsafe void assign(MR.CS.StdSharedPtr._ByValueShared_A _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_AssignFrom_MR_C_std_shared_ptr_const_MR_StdSharedPtr_A", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_const_void_AssignFrom_MR_C_std_shared_ptr_const_MR_StdSharedPtr_A(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.StdSharedPtr.A._UnderlyingShared *_other);
                    __MR_C_std_shared_ptr_const_void_AssignFrom_MR_C_std_shared_ptr_const_MR_StdSharedPtr_A(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingSharedPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public unsafe SharedPtr_ConstVoid(MR.CS.Std._ByValue_SharedPtr_ConstMRStdSharedPtrAArray _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_ConstVoid._Underlying *__MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array(MR.CS.Misc._PassBy _other_pass_by, MR.CS.Std.SharedPtr_ConstMRStdSharedPtrAArray._Underlying *_other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator SharedPtr_ConstVoid(MR.CS.Std._ByValue_SharedPtr_ConstMRStdSharedPtrAArray _other) {return new(_other);}

                /// <summary>
                /// Overwrites an existing `std::shared_ptr<void>` to point to the same object as this instance.
                /// </summary>
                public unsafe void assign(MR.CS.Std._ByValue_SharedPtr_ConstMRStdSharedPtrAArray _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_AssignFrom_MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_const_void_AssignFrom_MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.Std.SharedPtr_ConstMRStdSharedPtrAArray._Underlying *_other);
                    __MR_C_std_shared_ptr_const_void_AssignFrom_MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public unsafe SharedPtr_ConstVoid(MR.CS.Std._ByValue_SharedPtr_ConstMRStdSharedPtrAArray42 _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_ConstVoid._Underlying *__MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42(MR.CS.Misc._PassBy _other_pass_by, MR.CS.Std.SharedPtr_ConstMRStdSharedPtrAArray42._Underlying *_other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator SharedPtr_ConstVoid(MR.CS.Std._ByValue_SharedPtr_ConstMRStdSharedPtrAArray42 _other) {return new(_other);}

                /// <summary>
                /// Overwrites an existing `std::shared_ptr<void>` to point to the same object as this instance.
                /// </summary>
                public unsafe void assign(MR.CS.Std._ByValue_SharedPtr_ConstMRStdSharedPtrAArray42 _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_AssignFrom_MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_const_void_AssignFrom_MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.Std.SharedPtr_ConstMRStdSharedPtrAArray42._Underlying *_other);
                    __MR_C_std_shared_ptr_const_void_AssignFrom_MR_C_std_shared_ptr_const_MR_StdSharedPtr_A_array_42(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }
            }

            /// <summary>
            /// This is used as a function parameter when the underlying function receives `SharedPtr_ConstVoid` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `SharedPtr_ConstVoid`/`Const_SharedPtr_ConstVoid` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            /// </summary>
            public class _ByValue_SharedPtr_ConstVoid
            {
                internal readonly Const_SharedPtr_ConstVoid? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_SharedPtr_ConstVoid() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_SharedPtr_ConstVoid(Const_SharedPtr_ConstVoid new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_SharedPtr_ConstVoid(Const_SharedPtr_ConstVoid arg) {return new(arg);}
                public _ByValue_SharedPtr_ConstVoid(MR.CS.Misc._Moved<SharedPtr_ConstVoid> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_SharedPtr_ConstVoid(MR.CS.Misc._Moved<SharedPtr_ConstVoid> arg) {return new(arg);}

                /// <summary>
                /// Create a new instance from a non-const pointer to the same type.
                /// </summary>
                public static unsafe implicit operator _ByValue_SharedPtr_ConstVoid(MR.CS.Std._ByValue_SharedPtr_Void ptr) {return new MR.CS.Misc._Moved<MR.CS.Std.SharedPtr_ConstVoid>(ptr);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator _ByValue_SharedPtr_ConstVoid(MR.CS.CSharp._ByValueShared_SA _other) {return new MR.CS.Misc._Moved<MR.CS.Std.SharedPtr_ConstVoid>(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator _ByValue_SharedPtr_ConstVoid(MR.CS.Std._ByValue_SharedPtr_ConstInt32T _other) {return new MR.CS.Misc._Moved<MR.CS.Std.SharedPtr_ConstVoid>(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator _ByValue_SharedPtr_ConstVoid(MR.CS.Std._ByValue_SharedPtr_ConstInt32TArray _other) {return new MR.CS.Misc._Moved<MR.CS.Std.SharedPtr_ConstVoid>(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator _ByValue_SharedPtr_ConstVoid(MR.CS.Std._ByValue_SharedPtr_ConstInt32TArray42 _other) {return new MR.CS.Misc._Moved<MR.CS.Std.SharedPtr_ConstVoid>(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator _ByValue_SharedPtr_ConstVoid(MR.CS.StdSharedPtr._ByValueShared_A _other) {return new MR.CS.Misc._Moved<MR.CS.Std.SharedPtr_ConstVoid>(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator _ByValue_SharedPtr_ConstVoid(MR.CS.Std._ByValue_SharedPtr_ConstMRStdSharedPtrAArray _other) {return new MR.CS.Misc._Moved<MR.CS.Std.SharedPtr_ConstVoid>(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator _ByValue_SharedPtr_ConstVoid(MR.CS.Std._ByValue_SharedPtr_ConstMRStdSharedPtrAArray42 _other) {return new MR.CS.Misc._Moved<MR.CS.Std.SharedPtr_ConstVoid>(_other);}
            }

            /// <summary>
            /// This is used for optional parameters of class `SharedPtr_ConstVoid` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_SharedPtr_ConstVoid`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `SharedPtr_ConstVoid`/`Const_SharedPtr_ConstVoid` directly.
            /// </summary>
            public class _InOptMut_SharedPtr_ConstVoid
            {
                public SharedPtr_ConstVoid? Opt;

                public _InOptMut_SharedPtr_ConstVoid() {}
                public _InOptMut_SharedPtr_ConstVoid(SharedPtr_ConstVoid value) {Opt = value;}
                public static implicit operator _InOptMut_SharedPtr_ConstVoid(SharedPtr_ConstVoid value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `SharedPtr_ConstVoid` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_SharedPtr_ConstVoid`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `SharedPtr_ConstVoid`/`Const_SharedPtr_ConstVoid` to pass it to the function.
            /// </summary>
            public class _InOptConst_SharedPtr_ConstVoid
            {
                public Const_SharedPtr_ConstVoid? Opt;

                public _InOptConst_SharedPtr_ConstVoid() {}
                public _InOptConst_SharedPtr_ConstVoid(Const_SharedPtr_ConstVoid value) {Opt = value;}
                public static implicit operator _InOptConst_SharedPtr_ConstVoid(Const_SharedPtr_ConstVoid value) {return new(value);}

                /// <summary>
                /// Create a new instance from a non-const pointer to the same type.
                /// </summary>
                public static unsafe implicit operator _InOptConst_SharedPtr_ConstVoid(MR.CS.Std._ByValue_SharedPtr_Void ptr) {return new Const_SharedPtr_ConstVoid(ptr);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator _InOptConst_SharedPtr_ConstVoid(MR.CS.CSharp._ByValueShared_SA _other) {return new Const_SharedPtr_ConstVoid(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator _InOptConst_SharedPtr_ConstVoid(MR.CS.Std._ByValue_SharedPtr_ConstInt32T _other) {return new Const_SharedPtr_ConstVoid(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator _InOptConst_SharedPtr_ConstVoid(MR.CS.Std._ByValue_SharedPtr_ConstInt32TArray _other) {return new Const_SharedPtr_ConstVoid(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator _InOptConst_SharedPtr_ConstVoid(MR.CS.Std._ByValue_SharedPtr_ConstInt32TArray42 _other) {return new Const_SharedPtr_ConstVoid(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator _InOptConst_SharedPtr_ConstVoid(MR.CS.StdSharedPtr._ByValueShared_A _other) {return new Const_SharedPtr_ConstVoid(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator _InOptConst_SharedPtr_ConstVoid(MR.CS.Std._ByValue_SharedPtr_ConstMRStdSharedPtrAArray _other) {return new Const_SharedPtr_ConstVoid(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator _InOptConst_SharedPtr_ConstVoid(MR.CS.Std._ByValue_SharedPtr_ConstMRStdSharedPtrAArray42 _other) {return new Const_SharedPtr_ConstVoid(_other);}
            }
        }
    }
}
