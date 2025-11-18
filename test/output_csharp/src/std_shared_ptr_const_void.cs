public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// The interface for class `shared_ptr<const void>`, the const half.
            /// We never use interfaces as function parameters or return types, because they prevent implicit conversions, but can use them freely.
            public interface IConstSharedPtr_ConstVoid
            {
                public struct _Underlying; // Represents the underlying C++ type.
                internal unsafe _Underlying *_GetUnderlying_StdSharedPtr_ConstVoid(); // Returns the pointer to the underlying C++ object.

                /// Returns the stored pointer, possibly null.
                /// Returns a read-only pointer.
                public unsafe void *Get()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_Get", ExactSpelling = true)]
                    extern static void *__MR_C_std_shared_ptr_const_void_Get(_Underlying *_this);
                    return __MR_C_std_shared_ptr_const_void_Get(_GetUnderlying_StdSharedPtr_ConstVoid());
                }

                /// How many shared pointers share the managed object. Zero if no object is being managed.
                /// This being zero usually conincides with `MR_C_std_shared_ptr_const_void_Get()` returning null, but is ultimately orthogonal.
                /// Note that in multithreaded environments, the only safe way to use this number is comparing it with zero. Positive values might change by the time you get to use them.
                public unsafe int UseCount()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_UseCount", ExactSpelling = true)]
                    extern static int __MR_C_std_shared_ptr_const_void_UseCount(_Underlying *_this);
                    return __MR_C_std_shared_ptr_const_void_UseCount(_GetUnderlying_StdSharedPtr_ConstVoid());
                }
            }

            /// Wraps a pointer to a single shared reference-counted heap-allocated `const void`.
            /// This is the const half of the class.
            public class ConstSharedPtr_ConstVoid : MR.CS.Misc.Object, System.IDisposable, IConstSharedPtr_ConstVoid
            {
                protected unsafe IConstSharedPtr_ConstVoid._Underlying *_UnderlyingPtr;
                public unsafe IConstSharedPtr_ConstVoid._Underlying *_GetUnderlying_StdSharedPtr_ConstVoid() => _UnderlyingPtr;

                internal unsafe ConstSharedPtr_ConstVoid(IConstSharedPtr_ConstVoid._Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr == null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_const_void_Destroy(IConstSharedPtr_ConstVoid._Underlying *_this);
                    __MR_C_std_shared_ptr_const_void_Destroy(_GetUnderlying_StdSharedPtr_ConstVoid());
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstSharedPtr_ConstVoid() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstSharedPtr_ConstVoid() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.IConstSharedPtr_ConstVoid._Underlying *__MR_C_std_shared_ptr_const_void_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_void_DefaultConstruct();
                }

                /// Create a new instance, storing a non-owning pointer.
                /// Parameter `ptr` is a read-only pointer.
                public unsafe ConstSharedPtr_ConstVoid(void *ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_ConstructNonOwning", ExactSpelling = true)]
                    extern static MR.CS.Std.IConstSharedPtr_ConstVoid._Underlying *__MR_C_std_shared_ptr_const_void_ConstructNonOwning(void *ptr);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_void_ConstructNonOwning(ptr);
                }

                /// Create a new instance from a non-const pointer to the same type.
                public unsafe ConstSharedPtr_ConstVoid(MR.CS.Misc.ByValue<MR.CS.Std.SharedPtr_Void, MR.CS.Std.ConstSharedPtr_Void> ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_ConstructFromMutable", ExactSpelling = true)]
                    extern static MR.CS.Std.IConstSharedPtr_ConstVoid._Underlying *__MR_C_std_shared_ptr_const_void_ConstructFromMutable(MR.CS.Misc._PassBy ptr_pass_by, MR.CS.Std.ISharedPtr_Void._Underlying *ptr);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_void_ConstructFromMutable(ptr.PassByMode, ptr.Value != null ? ptr.Value._GetUnderlying_StdSharedPtr_Void() : null);
                }

                /// The aliasing constructor. Create a new instance, copying ownership from an existing shared pointer and storing an arbitrary raw pointer.
                /// The input pointer can be reinterpreted from any other `std::shared_ptr<T>` to avoid constructing a new `std::shared_ptr<void>`.
                /// Parameter `ptr` is a read-only pointer.
                public unsafe ConstSharedPtr_ConstVoid(MR.CS.Misc.ByValue<MR.CS.Std.SharedPtr_ConstVoid, MR.CS.Std.ConstSharedPtr_ConstVoid> ownership, void *ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_ConstructAliasing", ExactSpelling = true)]
                    extern static MR.CS.Std.IConstSharedPtr_ConstVoid._Underlying *__MR_C_std_shared_ptr_const_void_ConstructAliasing(MR.CS.Misc._PassBy ownership_pass_by, MR.CS.Std.ISharedPtr_ConstVoid._Underlying *ownership, void *ptr);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_void_ConstructAliasing(ownership.PassByMode, ownership.Value != null ? ownership.Value._GetUnderlying_StdSharedPtr_ConstVoid() : null, ptr);
                }

                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                public unsafe ConstSharedPtr_ConstVoid(MR.CS.Misc.ByValue<MR.CS.CSharp.SA, MR.CS.CSharp.ConstSA> _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_MR_CSharp_SA", ExactSpelling = true)]
                    extern static MR.CS.Std.IConstSharedPtr_ConstVoid._Underlying *__MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_MR_CSharp_SA(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.ISA._UnderlyingShared *_other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_MR_CSharp_SA(_other.PassByMode, _other.Value != null ? _other.Value._UnderlyingSharedPtr : null);
                }

                /// Returns the stored pointer, possibly null.
                /// Returns a read-only pointer.
                public unsafe void *Get() => ((MR.CS.Std.IConstSharedPtr_ConstVoid)this).Get();

                /// How many shared pointers share the managed object. Zero if no object is being managed.
                /// This being zero usually conincides with `MR_C_std_shared_ptr_const_void_Get()` returning null, but is ultimately orthogonal.
                /// Note that in multithreaded environments, the only safe way to use this number is comparing it with zero. Positive values might change by the time you get to use them.
                public int UseCount() => ((MR.CS.Std.IConstSharedPtr_ConstVoid)this).UseCount();
            }

            /// The interface for class `shared_ptr<const void>`, the non-const half.
            /// We never use interfaces as function parameters or return types, because they prevent implicit conversions, but can use them freely.
            public interface ISharedPtr_ConstVoid : MR.CS.Std.IConstSharedPtr_ConstVoid
            {
                /// The aliasing assignment. Overwrite an existing instance, copying ownership from an existing shared pointer and storing an arbitrary raw pointer.
                /// The input pointer can be reinterpreted from any other `std::shared_ptr<T>` to avoid constructing a new `std::shared_ptr<void>`.
                /// Parameter `ptr` is a read-only pointer.
                public unsafe void AssignAliasing(MR.CS.Misc.ByValue<MR.CS.Std.SharedPtr_ConstVoid, MR.CS.Std.ConstSharedPtr_ConstVoid> ownership, void *ptr)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_AssignAliasing", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_const_void_AssignAliasing(_Underlying *_this, MR.CS.Misc._PassBy ownership_pass_by, MR.CS.Std.ISharedPtr_ConstVoid._Underlying *ownership, void *ptr);
                    __MR_C_std_shared_ptr_const_void_AssignAliasing(_GetUnderlying_StdSharedPtr_ConstVoid(), ownership.PassByMode, ownership.Value != null ? ownership.Value._GetUnderlying_StdSharedPtr_ConstVoid() : null, ptr);
                }
            }

            /// Wraps a pointer to a single shared reference-counted heap-allocated `const void`.
            /// This is the non-const half of the class.
            public class SharedPtr_ConstVoid : MR.CS.Std.ConstSharedPtr_ConstVoid, ISharedPtr_ConstVoid
            {
                internal unsafe SharedPtr_ConstVoid(ISharedPtr_ConstVoid._Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe SharedPtr_ConstVoid() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.IConstSharedPtr_ConstVoid._Underlying *__MR_C_std_shared_ptr_const_void_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_void_DefaultConstruct();
                }

                /// Create a new instance, storing a non-owning pointer.
                /// Parameter `ptr` is a read-only pointer.
                public unsafe SharedPtr_ConstVoid(void *ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_ConstructNonOwning", ExactSpelling = true)]
                    extern static MR.CS.Std.IConstSharedPtr_ConstVoid._Underlying *__MR_C_std_shared_ptr_const_void_ConstructNonOwning(void *ptr);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_void_ConstructNonOwning(ptr);
                }

                /// Create a new instance from a non-const pointer to the same type.
                public unsafe SharedPtr_ConstVoid(MR.CS.Misc.ByValue<MR.CS.Std.SharedPtr_Void, MR.CS.Std.ConstSharedPtr_Void> ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_ConstructFromMutable", ExactSpelling = true)]
                    extern static MR.CS.Std.IConstSharedPtr_ConstVoid._Underlying *__MR_C_std_shared_ptr_const_void_ConstructFromMutable(MR.CS.Misc._PassBy ptr_pass_by, MR.CS.Std.ISharedPtr_Void._Underlying *ptr);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_void_ConstructFromMutable(ptr.PassByMode, ptr.Value != null ? ptr.Value._GetUnderlying_StdSharedPtr_Void() : null);
                }

                /// The aliasing constructor. Create a new instance, copying ownership from an existing shared pointer and storing an arbitrary raw pointer.
                /// The input pointer can be reinterpreted from any other `std::shared_ptr<T>` to avoid constructing a new `std::shared_ptr<void>`.
                /// Parameter `ptr` is a read-only pointer.
                public unsafe SharedPtr_ConstVoid(MR.CS.Misc.ByValue<MR.CS.Std.SharedPtr_ConstVoid, MR.CS.Std.ConstSharedPtr_ConstVoid> ownership, void *ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_ConstructAliasing", ExactSpelling = true)]
                    extern static MR.CS.Std.IConstSharedPtr_ConstVoid._Underlying *__MR_C_std_shared_ptr_const_void_ConstructAliasing(MR.CS.Misc._PassBy ownership_pass_by, MR.CS.Std.ISharedPtr_ConstVoid._Underlying *ownership, void *ptr);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_void_ConstructAliasing(ownership.PassByMode, ownership.Value != null ? ownership.Value._GetUnderlying_StdSharedPtr_ConstVoid() : null, ptr);
                }

                /// Creates an untyped `std::shared_ptr<void>` pointing to the same object as the source typed pointer.
                public unsafe SharedPtr_ConstVoid(MR.CS.Misc.ByValue<MR.CS.CSharp.SA, MR.CS.CSharp.ConstSA> _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_MR_CSharp_SA", ExactSpelling = true)]
                    extern static MR.CS.Std.IConstSharedPtr_ConstVoid._Underlying *__MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_MR_CSharp_SA(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.ISA._UnderlyingShared *_other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_void_ConstructFrom_MR_C_std_shared_ptr_const_MR_CSharp_SA(_other.PassByMode, _other.Value != null ? _other.Value._UnderlyingSharedPtr : null);
                }

                /// The aliasing assignment. Overwrite an existing instance, copying ownership from an existing shared pointer and storing an arbitrary raw pointer.
                /// The input pointer can be reinterpreted from any other `std::shared_ptr<T>` to avoid constructing a new `std::shared_ptr<void>`.
                /// Parameter `ptr` is a read-only pointer.
                public unsafe void AssignAliasing(MR.CS.Misc.ByValue<MR.CS.Std.SharedPtr_ConstVoid, MR.CS.Std.ConstSharedPtr_ConstVoid> ownership, void *ptr) => ((MR.CS.Std.ISharedPtr_ConstVoid)this).AssignAliasing(ownership, ptr);
            }
        }
    }
}
