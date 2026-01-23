public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// Wraps a pointer to a single shared reference-counted heap-allocated `void`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_SharedPtr_Void : MR.CS.Misc.Object<Const_SharedPtr_Void>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_SharedPtr_Void(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_void_Destroy(_Underlying *_this);
                    __MR_C_std_shared_ptr_void_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_SharedPtr_Void() {Dispose(false);}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_SharedPtr_Void() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Const_SharedPtr_Void(MR.CS.Std._ByValue_SharedPtr_Void other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.SharedPtr_Void._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// <summary>
                /// Returns the stored pointer, possibly null.
                /// Returns a mutable pointer.
                /// </summary>
                public unsafe void *get()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_Get", ExactSpelling = true)]
                    extern static void *__MR_C_std_shared_ptr_void_Get(_Underlying *_this);
                    return __MR_C_std_shared_ptr_void_Get(_UnderlyingPtr);
                }

                /// <summary>
                /// How many shared pointers share the managed object. Zero if no object is being managed.
                /// This being zero usually conincides with `MR_C_std_shared_ptr_void_Get()` returning null, but is ultimately orthogonal.
                /// Note that in multithreaded environments, the only safe way to use this number is comparing it with zero. Positive values might change by the time you get to use them.
                /// </summary>
                public unsafe int useCount()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_UseCount", ExactSpelling = true)]
                    extern static int __MR_C_std_shared_ptr_void_UseCount(_Underlying *_this);
                    return __MR_C_std_shared_ptr_void_UseCount(_UnderlyingPtr);
                }

                /// <summary>
                /// Create a new instance, storing a non-owning pointer.
                /// Parameter `ptr` is a mutable pointer.
                /// </summary>
                public unsafe Const_SharedPtr_Void(void *ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_ConstructNonOwning", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_ConstructNonOwning(void *ptr);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_ConstructNonOwning(ptr);
                }

                /// <summary>
                /// The aliasing constructor. Create a new instance, copying ownership from an existing shared pointer and storing an arbitrary raw pointer.
                /// The input pointer can be reinterpreted from any other `std::shared_ptr<T>` to avoid constructing a new `std::shared_ptr<void>`.
                /// Parameter `ptr` is a mutable pointer.
                /// </summary>
                public unsafe Const_SharedPtr_Void(MR.CS.Std._ByValue_SharedPtr_ConstVoid ownership, void *ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_ConstructAliasing", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_ConstructAliasing(MR.CS.Misc._PassBy ownership_pass_by, MR.CS.Std.SharedPtr_ConstVoid._Underlying *ownership, void *ptr);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_ConstructAliasing(ownership.PassByMode, ownership.Value is not null ? ownership.Value._UnderlyingPtr : null, ptr);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public unsafe Const_SharedPtr_Void(MR.CS.CSharp._ByValueShared_SD _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SD", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SD(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.SD._UnderlyingShared *_other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SD(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingSharedPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator Const_SharedPtr_Void(MR.CS.CSharp._ByValueShared_SD _other) {return new(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public unsafe Const_SharedPtr_Void(MR.CS.CSharp._ByValueShared_SF _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SF", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SF(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.SF._UnderlyingShared *_other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SF(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingSharedPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator Const_SharedPtr_Void(MR.CS.CSharp._ByValueShared_SF _other) {return new(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public unsafe Const_SharedPtr_Void(MR.CS.CSharp._ByValueShared_SE _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SE", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SE(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.SE._UnderlyingShared *_other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SE(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingSharedPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator Const_SharedPtr_Void(MR.CS.CSharp._ByValueShared_SE _other) {return new(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public unsafe Const_SharedPtr_Void(MR.CS.CSharp._ByValueShared_SB _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SB", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SB(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.SB._UnderlyingShared *_other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SB(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingSharedPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator Const_SharedPtr_Void(MR.CS.CSharp._ByValueShared_SB _other) {return new(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public unsafe Const_SharedPtr_Void(MR.CS.CSharp._ByValueShared_SC _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SC", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SC(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.SC._UnderlyingShared *_other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SC(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingSharedPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator Const_SharedPtr_Void(MR.CS.CSharp._ByValueShared_SC _other) {return new(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public unsafe Const_SharedPtr_Void(MR.CS.CSharp._ByValueShared_SA _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SA", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SA(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.SA._UnderlyingShared *_other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SA(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingSharedPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator Const_SharedPtr_Void(MR.CS.CSharp._ByValueShared_SA _other) {return new(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public unsafe Const_SharedPtr_Void(MR.CS.CSharp._ByValueShared_ExposedLayoutSh _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.Mut_ExposedLayoutSh._UnderlyingShared *_other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingSharedPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator Const_SharedPtr_Void(MR.CS.CSharp._ByValueShared_ExposedLayoutSh _other) {return new(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public unsafe Const_SharedPtr_Void(MR.CS.Std._ByValue_SharedPtr_Int _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_int", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_int(MR.CS.Misc._PassBy _other_pass_by, MR.CS.Std.SharedPtr_Int._Underlying *_other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_int(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator Const_SharedPtr_Void(MR.CS.Std._ByValue_SharedPtr_Int _other) {return new(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public unsafe Const_SharedPtr_Void(MR.CS.Std._ByValue_SharedPtr_IntArray _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_int_array", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_int_array(MR.CS.Misc._PassBy _other_pass_by, MR.CS.Std.SharedPtr_IntArray._Underlying *_other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_int_array(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator Const_SharedPtr_Void(MR.CS.Std._ByValue_SharedPtr_IntArray _other) {return new(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public unsafe Const_SharedPtr_Void(MR.CS.Std._ByValue_SharedPtr_IntArray42 _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_int_array_42", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_int_array_42(MR.CS.Misc._PassBy _other_pass_by, MR.CS.Std.SharedPtr_IntArray42._Underlying *_other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_int_array_42(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator Const_SharedPtr_Void(MR.CS.Std._ByValue_SharedPtr_IntArray42 _other) {return new(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public unsafe Const_SharedPtr_Void(MR.CS.StdSharedPtr._ByValueShared_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_StdSharedPtr_A", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_StdSharedPtr_A(MR.CS.Misc._PassBy _other_pass_by, MR.CS.StdSharedPtr.A._UnderlyingShared *_other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_StdSharedPtr_A(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingSharedPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator Const_SharedPtr_Void(MR.CS.StdSharedPtr._ByValueShared_A _other) {return new(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public unsafe Const_SharedPtr_Void(MR.CS.Std._ByValue_SharedPtr_MRStdSharedPtrAArray _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_StdSharedPtr_A_array", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_StdSharedPtr_A_array(MR.CS.Misc._PassBy _other_pass_by, MR.CS.Std.SharedPtr_MRStdSharedPtrAArray._Underlying *_other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_StdSharedPtr_A_array(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator Const_SharedPtr_Void(MR.CS.Std._ByValue_SharedPtr_MRStdSharedPtrAArray _other) {return new(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public unsafe Const_SharedPtr_Void(MR.CS.Std._ByValue_SharedPtr_MRStdSharedPtrAArray42 _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42(MR.CS.Misc._PassBy _other_pass_by, MR.CS.Std.SharedPtr_MRStdSharedPtrAArray42._Underlying *_other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator Const_SharedPtr_Void(MR.CS.Std._ByValue_SharedPtr_MRStdSharedPtrAArray42 _other) {return new(_other);}
            }

            /// <summary>
            /// Wraps a pointer to a single shared reference-counted heap-allocated `void`.
            /// This is the non-const half of the class.
            /// </summary>
            public class SharedPtr_Void : Const_SharedPtr_Void
            {
                internal unsafe SharedPtr_Void(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe SharedPtr_Void() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe SharedPtr_Void(MR.CS.Std._ByValue_SharedPtr_Void other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.SharedPtr_Void._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// <summary>
                /// Assigns the contents from another instance. Both objects remain alive after the call.
                /// </summary>
                public unsafe void assign(MR.CS.Std._ByValue_SharedPtr_Void other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_void_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.SharedPtr_Void._Underlying *other);
                    _DiscardKeepAlive();
                    if (other.Value is not null) _KeepAlive(other.Value);
                    __MR_C_std_shared_ptr_void_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Create a new instance, storing a non-owning pointer.
                /// Parameter `ptr` is a mutable pointer.
                /// </summary>
                public unsafe SharedPtr_Void(void *ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_ConstructNonOwning", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_ConstructNonOwning(void *ptr);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_ConstructNonOwning(ptr);
                }

                /// <summary>
                /// Overwrite the existing instance with a non-owning pointer. The previously owned object, if any, has its reference count decremented.
                /// Parameter `ptr` is a mutable pointer.
                /// </summary>
                public unsafe void assign(void *ptr)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_AssignNonOwning", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_void_AssignNonOwning(_Underlying *_this, void *ptr);
                    _DiscardKeepAlive();
                    __MR_C_std_shared_ptr_void_AssignNonOwning(_UnderlyingPtr, ptr);
                }

                /// <summary>
                /// The aliasing constructor. Create a new instance, copying ownership from an existing shared pointer and storing an arbitrary raw pointer.
                /// The input pointer can be reinterpreted from any other `std::shared_ptr<T>` to avoid constructing a new `std::shared_ptr<void>`.
                /// Parameter `ptr` is a mutable pointer.
                /// </summary>
                public unsafe SharedPtr_Void(MR.CS.Std._ByValue_SharedPtr_ConstVoid ownership, void *ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_ConstructAliasing", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_ConstructAliasing(MR.CS.Misc._PassBy ownership_pass_by, MR.CS.Std.SharedPtr_ConstVoid._Underlying *ownership, void *ptr);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_ConstructAliasing(ownership.PassByMode, ownership.Value is not null ? ownership.Value._UnderlyingPtr : null, ptr);
                }

                /// <summary>
                /// The aliasing assignment. Overwrite an existing instance, copying ownership from an existing shared pointer and storing an arbitrary raw pointer.
                /// The input pointer can be reinterpreted from any other `std::shared_ptr<T>` to avoid constructing a new `std::shared_ptr<void>`.
                /// Parameter `ptr` is a mutable pointer.
                /// </summary>
                public unsafe void assignAliasing(MR.CS.Std._ByValue_SharedPtr_ConstVoid ownership, void *ptr)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_AssignAliasing", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_void_AssignAliasing(_Underlying *_this, MR.CS.Misc._PassBy ownership_pass_by, MR.CS.Std.SharedPtr_ConstVoid._Underlying *ownership, void *ptr);
                    _DiscardKeepAlive();
                    __MR_C_std_shared_ptr_void_AssignAliasing(_UnderlyingPtr, ownership.PassByMode, ownership.Value is not null ? ownership.Value._UnderlyingPtr : null, ptr);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public unsafe SharedPtr_Void(MR.CS.CSharp._ByValueShared_SD _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SD", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SD(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.SD._UnderlyingShared *_other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SD(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingSharedPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator SharedPtr_Void(MR.CS.CSharp._ByValueShared_SD _other) {return new(_other);}

                /// <summary>
                /// Overwrites an existing `std::shared_ptr<void>` to point to the same object as this instance.
                /// </summary>
                public unsafe void assign(MR.CS.CSharp._ByValueShared_SD _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_MR_CSharp_SD", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_MR_CSharp_SD(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.SD._UnderlyingShared *_other);
                    __MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_MR_CSharp_SD(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingSharedPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public unsafe SharedPtr_Void(MR.CS.CSharp._ByValueShared_SF _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SF", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SF(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.SF._UnderlyingShared *_other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SF(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingSharedPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator SharedPtr_Void(MR.CS.CSharp._ByValueShared_SF _other) {return new(_other);}

                /// <summary>
                /// Overwrites an existing `std::shared_ptr<void>` to point to the same object as this instance.
                /// </summary>
                public unsafe void assign(MR.CS.CSharp._ByValueShared_SF _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_MR_CSharp_SF", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_MR_CSharp_SF(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.SF._UnderlyingShared *_other);
                    __MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_MR_CSharp_SF(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingSharedPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public unsafe SharedPtr_Void(MR.CS.CSharp._ByValueShared_SE _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SE", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SE(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.SE._UnderlyingShared *_other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SE(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingSharedPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator SharedPtr_Void(MR.CS.CSharp._ByValueShared_SE _other) {return new(_other);}

                /// <summary>
                /// Overwrites an existing `std::shared_ptr<void>` to point to the same object as this instance.
                /// </summary>
                public unsafe void assign(MR.CS.CSharp._ByValueShared_SE _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_MR_CSharp_SE", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_MR_CSharp_SE(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.SE._UnderlyingShared *_other);
                    __MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_MR_CSharp_SE(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingSharedPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public unsafe SharedPtr_Void(MR.CS.CSharp._ByValueShared_SB _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SB", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SB(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.SB._UnderlyingShared *_other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SB(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingSharedPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator SharedPtr_Void(MR.CS.CSharp._ByValueShared_SB _other) {return new(_other);}

                /// <summary>
                /// Overwrites an existing `std::shared_ptr<void>` to point to the same object as this instance.
                /// </summary>
                public unsafe void assign(MR.CS.CSharp._ByValueShared_SB _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_MR_CSharp_SB", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_MR_CSharp_SB(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.SB._UnderlyingShared *_other);
                    __MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_MR_CSharp_SB(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingSharedPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public unsafe SharedPtr_Void(MR.CS.CSharp._ByValueShared_SC _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SC", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SC(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.SC._UnderlyingShared *_other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SC(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingSharedPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator SharedPtr_Void(MR.CS.CSharp._ByValueShared_SC _other) {return new(_other);}

                /// <summary>
                /// Overwrites an existing `std::shared_ptr<void>` to point to the same object as this instance.
                /// </summary>
                public unsafe void assign(MR.CS.CSharp._ByValueShared_SC _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_MR_CSharp_SC", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_MR_CSharp_SC(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.SC._UnderlyingShared *_other);
                    __MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_MR_CSharp_SC(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingSharedPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public unsafe SharedPtr_Void(MR.CS.CSharp._ByValueShared_SA _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SA", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SA(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.SA._UnderlyingShared *_other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SA(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingSharedPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator SharedPtr_Void(MR.CS.CSharp._ByValueShared_SA _other) {return new(_other);}

                /// <summary>
                /// Overwrites an existing `std::shared_ptr<void>` to point to the same object as this instance.
                /// </summary>
                public unsafe void assign(MR.CS.CSharp._ByValueShared_SA _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_MR_CSharp_SA", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_MR_CSharp_SA(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.SA._UnderlyingShared *_other);
                    __MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_MR_CSharp_SA(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingSharedPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public unsafe SharedPtr_Void(MR.CS.CSharp._ByValueShared_ExposedLayoutSh _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.Mut_ExposedLayoutSh._UnderlyingShared *_other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingSharedPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator SharedPtr_Void(MR.CS.CSharp._ByValueShared_ExposedLayoutSh _other) {return new(_other);}

                /// <summary>
                /// Overwrites an existing `std::shared_ptr<void>` to point to the same object as this instance.
                /// </summary>
                public unsafe void assign(MR.CS.CSharp._ByValueShared_ExposedLayoutSh _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.Mut_ExposedLayoutSh._UnderlyingShared *_other);
                    __MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_MR_CSharp_ExposedLayoutSh(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingSharedPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public unsafe SharedPtr_Void(MR.CS.Std._ByValue_SharedPtr_Int _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_int", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_int(MR.CS.Misc._PassBy _other_pass_by, MR.CS.Std.SharedPtr_Int._Underlying *_other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_int(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator SharedPtr_Void(MR.CS.Std._ByValue_SharedPtr_Int _other) {return new(_other);}

                /// <summary>
                /// Overwrites an existing `std::shared_ptr<void>` to point to the same object as this instance.
                /// </summary>
                public unsafe void assign(MR.CS.Std._ByValue_SharedPtr_Int _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_int", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_int(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.Std.SharedPtr_Int._Underlying *_other);
                    __MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_int(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public unsafe SharedPtr_Void(MR.CS.Std._ByValue_SharedPtr_IntArray _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_int_array", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_int_array(MR.CS.Misc._PassBy _other_pass_by, MR.CS.Std.SharedPtr_IntArray._Underlying *_other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_int_array(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator SharedPtr_Void(MR.CS.Std._ByValue_SharedPtr_IntArray _other) {return new(_other);}

                /// <summary>
                /// Overwrites an existing `std::shared_ptr<void>` to point to the same object as this instance.
                /// </summary>
                public unsafe void assign(MR.CS.Std._ByValue_SharedPtr_IntArray _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_int_array", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_int_array(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.Std.SharedPtr_IntArray._Underlying *_other);
                    __MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_int_array(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public unsafe SharedPtr_Void(MR.CS.Std._ByValue_SharedPtr_IntArray42 _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_int_array_42", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_int_array_42(MR.CS.Misc._PassBy _other_pass_by, MR.CS.Std.SharedPtr_IntArray42._Underlying *_other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_int_array_42(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator SharedPtr_Void(MR.CS.Std._ByValue_SharedPtr_IntArray42 _other) {return new(_other);}

                /// <summary>
                /// Overwrites an existing `std::shared_ptr<void>` to point to the same object as this instance.
                /// </summary>
                public unsafe void assign(MR.CS.Std._ByValue_SharedPtr_IntArray42 _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_int_array_42", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_int_array_42(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.Std.SharedPtr_IntArray42._Underlying *_other);
                    __MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_int_array_42(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public unsafe SharedPtr_Void(MR.CS.StdSharedPtr._ByValueShared_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_StdSharedPtr_A", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_StdSharedPtr_A(MR.CS.Misc._PassBy _other_pass_by, MR.CS.StdSharedPtr.A._UnderlyingShared *_other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_StdSharedPtr_A(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingSharedPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator SharedPtr_Void(MR.CS.StdSharedPtr._ByValueShared_A _other) {return new(_other);}

                /// <summary>
                /// Overwrites an existing `std::shared_ptr<void>` to point to the same object as this instance.
                /// </summary>
                public unsafe void assign(MR.CS.StdSharedPtr._ByValueShared_A _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_MR_StdSharedPtr_A", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_MR_StdSharedPtr_A(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.StdSharedPtr.A._UnderlyingShared *_other);
                    __MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_MR_StdSharedPtr_A(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingSharedPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public unsafe SharedPtr_Void(MR.CS.Std._ByValue_SharedPtr_MRStdSharedPtrAArray _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_StdSharedPtr_A_array", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_StdSharedPtr_A_array(MR.CS.Misc._PassBy _other_pass_by, MR.CS.Std.SharedPtr_MRStdSharedPtrAArray._Underlying *_other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_StdSharedPtr_A_array(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator SharedPtr_Void(MR.CS.Std._ByValue_SharedPtr_MRStdSharedPtrAArray _other) {return new(_other);}

                /// <summary>
                /// Overwrites an existing `std::shared_ptr<void>` to point to the same object as this instance.
                /// </summary>
                public unsafe void assign(MR.CS.Std._ByValue_SharedPtr_MRStdSharedPtrAArray _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_MR_StdSharedPtr_A_array", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_MR_StdSharedPtr_A_array(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.Std.SharedPtr_MRStdSharedPtrAArray._Underlying *_other);
                    __MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_MR_StdSharedPtr_A_array(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public unsafe SharedPtr_Void(MR.CS.Std._ByValue_SharedPtr_MRStdSharedPtrAArray42 _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42(MR.CS.Misc._PassBy _other_pass_by, MR.CS.Std.SharedPtr_MRStdSharedPtrAArray42._Underlying *_other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator SharedPtr_Void(MR.CS.Std._ByValue_SharedPtr_MRStdSharedPtrAArray42 _other) {return new(_other);}

                /// <summary>
                /// Overwrites an existing `std::shared_ptr<void>` to point to the same object as this instance.
                /// </summary>
                public unsafe void assign(MR.CS.Std._ByValue_SharedPtr_MRStdSharedPtrAArray42 _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.Std.SharedPtr_MRStdSharedPtrAArray42._Underlying *_other);
                    __MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_MR_StdSharedPtr_A_array_42(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }
            }

            /// <summary>
            /// This is used as a function parameter when the underlying function receives `SharedPtr_Void` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `SharedPtr_Void`/`Const_SharedPtr_Void` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            /// </summary>
            public class _ByValue_SharedPtr_Void
            {
                internal readonly Const_SharedPtr_Void? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_SharedPtr_Void() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_SharedPtr_Void(Const_SharedPtr_Void new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_SharedPtr_Void(Const_SharedPtr_Void arg) {return new(arg);}
                public _ByValue_SharedPtr_Void(MR.CS.Misc._Moved<SharedPtr_Void> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_SharedPtr_Void(MR.CS.Misc._Moved<SharedPtr_Void> arg) {return new(arg);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator _ByValue_SharedPtr_Void(MR.CS.CSharp._ByValueShared_SD _other) {return new MR.CS.Misc._Moved<MR.CS.Std.SharedPtr_Void>(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator _ByValue_SharedPtr_Void(MR.CS.CSharp._ByValueShared_SF _other) {return new MR.CS.Misc._Moved<MR.CS.Std.SharedPtr_Void>(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator _ByValue_SharedPtr_Void(MR.CS.CSharp._ByValueShared_SE _other) {return new MR.CS.Misc._Moved<MR.CS.Std.SharedPtr_Void>(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator _ByValue_SharedPtr_Void(MR.CS.CSharp._ByValueShared_SB _other) {return new MR.CS.Misc._Moved<MR.CS.Std.SharedPtr_Void>(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator _ByValue_SharedPtr_Void(MR.CS.CSharp._ByValueShared_SC _other) {return new MR.CS.Misc._Moved<MR.CS.Std.SharedPtr_Void>(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator _ByValue_SharedPtr_Void(MR.CS.CSharp._ByValueShared_SA _other) {return new MR.CS.Misc._Moved<MR.CS.Std.SharedPtr_Void>(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator _ByValue_SharedPtr_Void(MR.CS.CSharp._ByValueShared_ExposedLayoutSh _other) {return new MR.CS.Misc._Moved<MR.CS.Std.SharedPtr_Void>(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator _ByValue_SharedPtr_Void(MR.CS.Std._ByValue_SharedPtr_Int _other) {return new MR.CS.Misc._Moved<MR.CS.Std.SharedPtr_Void>(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator _ByValue_SharedPtr_Void(MR.CS.Std._ByValue_SharedPtr_IntArray _other) {return new MR.CS.Misc._Moved<MR.CS.Std.SharedPtr_Void>(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator _ByValue_SharedPtr_Void(MR.CS.Std._ByValue_SharedPtr_IntArray42 _other) {return new MR.CS.Misc._Moved<MR.CS.Std.SharedPtr_Void>(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator _ByValue_SharedPtr_Void(MR.CS.StdSharedPtr._ByValueShared_A _other) {return new MR.CS.Misc._Moved<MR.CS.Std.SharedPtr_Void>(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator _ByValue_SharedPtr_Void(MR.CS.Std._ByValue_SharedPtr_MRStdSharedPtrAArray _other) {return new MR.CS.Misc._Moved<MR.CS.Std.SharedPtr_Void>(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator _ByValue_SharedPtr_Void(MR.CS.Std._ByValue_SharedPtr_MRStdSharedPtrAArray42 _other) {return new MR.CS.Misc._Moved<MR.CS.Std.SharedPtr_Void>(_other);}
            }

            /// <summary>
            /// This is used for optional parameters of class `SharedPtr_Void` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_SharedPtr_Void`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `SharedPtr_Void`/`Const_SharedPtr_Void` directly.
            /// </summary>
            public class _InOptMut_SharedPtr_Void
            {
                public SharedPtr_Void? Opt;

                public _InOptMut_SharedPtr_Void() {}
                public _InOptMut_SharedPtr_Void(SharedPtr_Void value) {Opt = value;}
                public static implicit operator _InOptMut_SharedPtr_Void(SharedPtr_Void value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `SharedPtr_Void` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_SharedPtr_Void`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `SharedPtr_Void`/`Const_SharedPtr_Void` to pass it to the function.
            /// </summary>
            public class _InOptConst_SharedPtr_Void
            {
                public Const_SharedPtr_Void? Opt;

                public _InOptConst_SharedPtr_Void() {}
                public _InOptConst_SharedPtr_Void(Const_SharedPtr_Void value) {Opt = value;}
                public static implicit operator _InOptConst_SharedPtr_Void(Const_SharedPtr_Void value) {return new(value);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator _InOptConst_SharedPtr_Void(MR.CS.CSharp._ByValueShared_SD _other) {return new Const_SharedPtr_Void(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator _InOptConst_SharedPtr_Void(MR.CS.CSharp._ByValueShared_SF _other) {return new Const_SharedPtr_Void(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator _InOptConst_SharedPtr_Void(MR.CS.CSharp._ByValueShared_SE _other) {return new Const_SharedPtr_Void(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator _InOptConst_SharedPtr_Void(MR.CS.CSharp._ByValueShared_SB _other) {return new Const_SharedPtr_Void(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator _InOptConst_SharedPtr_Void(MR.CS.CSharp._ByValueShared_SC _other) {return new Const_SharedPtr_Void(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator _InOptConst_SharedPtr_Void(MR.CS.CSharp._ByValueShared_SA _other) {return new Const_SharedPtr_Void(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator _InOptConst_SharedPtr_Void(MR.CS.CSharp._ByValueShared_ExposedLayoutSh _other) {return new Const_SharedPtr_Void(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator _InOptConst_SharedPtr_Void(MR.CS.Std._ByValue_SharedPtr_Int _other) {return new Const_SharedPtr_Void(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator _InOptConst_SharedPtr_Void(MR.CS.Std._ByValue_SharedPtr_IntArray _other) {return new Const_SharedPtr_Void(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator _InOptConst_SharedPtr_Void(MR.CS.Std._ByValue_SharedPtr_IntArray42 _other) {return new Const_SharedPtr_Void(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator _InOptConst_SharedPtr_Void(MR.CS.StdSharedPtr._ByValueShared_A _other) {return new Const_SharedPtr_Void(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator _InOptConst_SharedPtr_Void(MR.CS.Std._ByValue_SharedPtr_MRStdSharedPtrAArray _other) {return new Const_SharedPtr_Void(_other);}

                /// <summary>
                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator _InOptConst_SharedPtr_Void(MR.CS.Std._ByValue_SharedPtr_MRStdSharedPtrAArray42 _other) {return new Const_SharedPtr_Void(_other);}
            }
        }
    }
}
