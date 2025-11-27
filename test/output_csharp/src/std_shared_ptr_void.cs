public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// Wraps a pointer to a single shared reference-counted heap-allocated `void`.
            /// This is the const half of the class.
            public class ConstSharedPtr_Void : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstSharedPtr_Void(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

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
                ~ConstSharedPtr_Void() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstSharedPtr_Void() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.ConstSharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe ConstSharedPtr_Void(MR.CS.Misc.ByValue<MR.CS.Std.SharedPtr_Void, MR.CS.Std.ConstSharedPtr_Void> other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.ConstSharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.SharedPtr_Void._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// Returns the stored pointer, possibly null.
                /// Returns a mutable pointer.
                public unsafe void *Get()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_Get", ExactSpelling = true)]
                    extern static void *__MR_C_std_shared_ptr_void_Get(_Underlying *_this);
                    return __MR_C_std_shared_ptr_void_Get(_UnderlyingPtr);
                }

                /// How many shared pointers share the managed object. Zero if no object is being managed.
                /// This being zero usually conincides with `MR_C_std_shared_ptr_void_Get()` returning null, but is ultimately orthogonal.
                /// Note that in multithreaded environments, the only safe way to use this number is comparing it with zero. Positive values might change by the time you get to use them.
                public unsafe int UseCount()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_UseCount", ExactSpelling = true)]
                    extern static int __MR_C_std_shared_ptr_void_UseCount(_Underlying *_this);
                    return __MR_C_std_shared_ptr_void_UseCount(_UnderlyingPtr);
                }

                /// Create a new instance, storing a non-owning pointer.
                /// Parameter `ptr` is a mutable pointer.
                public unsafe ConstSharedPtr_Void(void *ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_ConstructNonOwning", ExactSpelling = true)]
                    extern static MR.CS.Std.ConstSharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_ConstructNonOwning(void *ptr);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_ConstructNonOwning(ptr);
                }

                /// The aliasing constructor. Create a new instance, copying ownership from an existing shared pointer and storing an arbitrary raw pointer.
                /// The input pointer can be reinterpreted from any other `std::shared_ptr<T>` to avoid constructing a new `std::shared_ptr<void>`.
                /// Parameter `ptr` is a mutable pointer.
                public unsafe ConstSharedPtr_Void(MR.CS.Misc.ByValue<MR.CS.Std.SharedPtr_ConstVoid, MR.CS.Std.ConstSharedPtr_ConstVoid> ownership, void *ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_ConstructAliasing", ExactSpelling = true)]
                    extern static MR.CS.Std.ConstSharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_ConstructAliasing(MR.CS.Misc._PassBy ownership_pass_by, MR.CS.Std.SharedPtr_ConstVoid._Underlying *ownership, void *ptr);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_ConstructAliasing(ownership.PassByMode, ownership.Value is not null ? ownership.Value._UnderlyingPtr : null, ptr);
                }

                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                public unsafe ConstSharedPtr_Void(MR.CS.Misc.ByValue<MR.CS.CSharp.SB, MR.CS.CSharp.ConstSB> _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SB", ExactSpelling = true)]
                    extern static MR.CS.Std.ConstSharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SB(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.SB._UnderlyingShared *_other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SB(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingSharedPtr : null);
                }

                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                public static unsafe implicit operator ConstSharedPtr_Void(MR.CS.Misc.ByValue<MR.CS.CSharp.SB, MR.CS.CSharp.ConstSB> _other) {return new(_other);}

                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                public unsafe ConstSharedPtr_Void(MR.CS.Misc.ByValue<MR.CS.CSharp.SC, MR.CS.CSharp.ConstSC> _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SC", ExactSpelling = true)]
                    extern static MR.CS.Std.ConstSharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SC(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.SC._UnderlyingShared *_other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SC(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingSharedPtr : null);
                }

                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                public static unsafe implicit operator ConstSharedPtr_Void(MR.CS.Misc.ByValue<MR.CS.CSharp.SC, MR.CS.CSharp.ConstSC> _other) {return new(_other);}

                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                public unsafe ConstSharedPtr_Void(MR.CS.Misc.ByValue<MR.CS.CSharp.SA, MR.CS.CSharp.ConstSA> _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SA", ExactSpelling = true)]
                    extern static MR.CS.Std.ConstSharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SA(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.SA._UnderlyingShared *_other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SA(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingSharedPtr : null);
                }

                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                public static unsafe implicit operator ConstSharedPtr_Void(MR.CS.Misc.ByValue<MR.CS.CSharp.SA, MR.CS.CSharp.ConstSA> _other) {return new(_other);}
            }

            /// Wraps a pointer to a single shared reference-counted heap-allocated `void`.
            /// This is the non-const half of the class.
            public class SharedPtr_Void : ConstSharedPtr_Void
            {
                internal unsafe SharedPtr_Void(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe SharedPtr_Void() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.ConstSharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe SharedPtr_Void(MR.CS.Misc.ByValue<MR.CS.Std.SharedPtr_Void, MR.CS.Std.ConstSharedPtr_Void> other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.ConstSharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.SharedPtr_Void._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// Assigns the contents from another instance. Both objects remain alive after the call.
                public unsafe void Assign(MR.CS.Misc.ByValue<MR.CS.Std.SharedPtr_Void, MR.CS.Std.ConstSharedPtr_Void> other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_void_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.SharedPtr_Void._Underlying *other);
                    __MR_C_std_shared_ptr_void_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// Create a new instance, storing a non-owning pointer.
                /// Parameter `ptr` is a mutable pointer.
                public unsafe SharedPtr_Void(void *ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_ConstructNonOwning", ExactSpelling = true)]
                    extern static MR.CS.Std.ConstSharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_ConstructNonOwning(void *ptr);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_ConstructNonOwning(ptr);
                }

                /// Overwrite the existing instance with a non-owning pointer. The previously owned object, if any, has its reference count decremented.
                /// Parameter `ptr` is a mutable pointer.
                public unsafe void Assign(void *ptr)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_AssignNonOwning", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_void_AssignNonOwning(_Underlying *_this, void *ptr);
                    __MR_C_std_shared_ptr_void_AssignNonOwning(_UnderlyingPtr, ptr);
                }

                /// The aliasing constructor. Create a new instance, copying ownership from an existing shared pointer and storing an arbitrary raw pointer.
                /// The input pointer can be reinterpreted from any other `std::shared_ptr<T>` to avoid constructing a new `std::shared_ptr<void>`.
                /// Parameter `ptr` is a mutable pointer.
                public unsafe SharedPtr_Void(MR.CS.Misc.ByValue<MR.CS.Std.SharedPtr_ConstVoid, MR.CS.Std.ConstSharedPtr_ConstVoid> ownership, void *ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_ConstructAliasing", ExactSpelling = true)]
                    extern static MR.CS.Std.ConstSharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_ConstructAliasing(MR.CS.Misc._PassBy ownership_pass_by, MR.CS.Std.SharedPtr_ConstVoid._Underlying *ownership, void *ptr);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_ConstructAliasing(ownership.PassByMode, ownership.Value is not null ? ownership.Value._UnderlyingPtr : null, ptr);
                }

                /// The aliasing assignment. Overwrite an existing instance, copying ownership from an existing shared pointer and storing an arbitrary raw pointer.
                /// The input pointer can be reinterpreted from any other `std::shared_ptr<T>` to avoid constructing a new `std::shared_ptr<void>`.
                /// Parameter `ptr` is a mutable pointer.
                public unsafe void AssignAliasing(MR.CS.Misc.ByValue<MR.CS.Std.SharedPtr_ConstVoid, MR.CS.Std.ConstSharedPtr_ConstVoid> ownership, void *ptr)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_AssignAliasing", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_void_AssignAliasing(_Underlying *_this, MR.CS.Misc._PassBy ownership_pass_by, MR.CS.Std.SharedPtr_ConstVoid._Underlying *ownership, void *ptr);
                    __MR_C_std_shared_ptr_void_AssignAliasing(_UnderlyingPtr, ownership.PassByMode, ownership.Value is not null ? ownership.Value._UnderlyingPtr : null, ptr);
                }

                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                public unsafe SharedPtr_Void(MR.CS.Misc.ByValue<MR.CS.CSharp.SB, MR.CS.CSharp.ConstSB> _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SB", ExactSpelling = true)]
                    extern static MR.CS.Std.ConstSharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SB(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.SB._UnderlyingShared *_other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SB(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingSharedPtr : null);
                }

                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                public static unsafe implicit operator SharedPtr_Void(MR.CS.Misc.ByValue<MR.CS.CSharp.SB, MR.CS.CSharp.ConstSB> _other) {return new(_other);}

                /// Overwrites an existing `std::shared_ptr<void>` to point to the same object as this instance.
                public unsafe void Assign(MR.CS.Misc.ByValue<MR.CS.CSharp.SB, MR.CS.CSharp.ConstSB> _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_MR_CSharp_SB", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_MR_CSharp_SB(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.SB._UnderlyingShared *_other);
                    __MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_MR_CSharp_SB(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingSharedPtr : null);
                }

                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                public unsafe SharedPtr_Void(MR.CS.Misc.ByValue<MR.CS.CSharp.SC, MR.CS.CSharp.ConstSC> _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SC", ExactSpelling = true)]
                    extern static MR.CS.Std.ConstSharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SC(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.SC._UnderlyingShared *_other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SC(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingSharedPtr : null);
                }

                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                public static unsafe implicit operator SharedPtr_Void(MR.CS.Misc.ByValue<MR.CS.CSharp.SC, MR.CS.CSharp.ConstSC> _other) {return new(_other);}

                /// Overwrites an existing `std::shared_ptr<void>` to point to the same object as this instance.
                public unsafe void Assign(MR.CS.Misc.ByValue<MR.CS.CSharp.SC, MR.CS.CSharp.ConstSC> _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_MR_CSharp_SC", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_MR_CSharp_SC(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.SC._UnderlyingShared *_other);
                    __MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_MR_CSharp_SC(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingSharedPtr : null);
                }

                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                public unsafe SharedPtr_Void(MR.CS.Misc.ByValue<MR.CS.CSharp.SA, MR.CS.CSharp.ConstSA> _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SA", ExactSpelling = true)]
                    extern static MR.CS.Std.ConstSharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SA(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.SA._UnderlyingShared *_other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_ConstructFrom_MR_C_std_shared_ptr_MR_CSharp_SA(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingSharedPtr : null);
                }

                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                public static unsafe implicit operator SharedPtr_Void(MR.CS.Misc.ByValue<MR.CS.CSharp.SA, MR.CS.CSharp.ConstSA> _other) {return new(_other);}

                /// Overwrites an existing `std::shared_ptr<void>` to point to the same object as this instance.
                public unsafe void Assign(MR.CS.Misc.ByValue<MR.CS.CSharp.SA, MR.CS.CSharp.ConstSA> _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_MR_CSharp_SA", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_MR_CSharp_SA(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.SA._UnderlyingShared *_other);
                    __MR_C_std_shared_ptr_void_AssignFrom_MR_C_std_shared_ptr_MR_CSharp_SA(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingSharedPtr : null);
                }
            }
        }
    }
}
