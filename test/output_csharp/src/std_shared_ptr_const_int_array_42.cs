public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// Wraps a pointer to a shared reference-counted heap-allocated array of type `const int`, of size 42.
            /// This is the const half of the class.
            public class Const_SharedPtr_ConstIntArray42 : MR.CS.Misc.Object<Const_SharedPtr_ConstIntArray42>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_int_array_42_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_const_int_array_42_Destroy(_Underlying *_this);
                    __MR_C_std_shared_ptr_const_int_array_42_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_SharedPtr_ConstIntArray42() {Dispose(false);}

                internal unsafe Const_SharedPtr_ConstIntArray42(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_SharedPtr_ConstIntArray42() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_int_array_42_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_ConstIntArray42._Underlying *__MR_C_std_shared_ptr_const_int_array_42_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_int_array_42_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Const_SharedPtr_ConstIntArray42(MR.CS.Std._ByValue_SharedPtr_ConstIntArray42 other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_int_array_42_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_ConstIntArray42._Underlying *__MR_C_std_shared_ptr_const_int_array_42_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.SharedPtr_ConstIntArray42._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_int_array_42_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// Returns the stored pointer, possibly null.
                public unsafe int? Get()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_int_array_42_Get", ExactSpelling = true)]
                    extern static int *__MR_C_std_shared_ptr_const_int_array_42_Get(_Underlying *_this);
                    var __c_ret = __MR_C_std_shared_ptr_const_int_array_42_Get(_UnderlyingPtr);
                    return __c_ret is not null ? *__c_ret : null;
                }

                /// How many shared pointers share the managed object. Zero if no object is being managed.
                /// This being zero usually conincides with `MR_C_std_shared_ptr_const_int_array_42_Get()` returning null, but is ultimately orthogonal.
                /// Note that in multithreaded environments, the only safe way to use this number is comparing it with zero. Positive values might change by the time you get to use them.
                public unsafe int UseCount()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_int_array_42_UseCount", ExactSpelling = true)]
                    extern static int __MR_C_std_shared_ptr_const_int_array_42_UseCount(_Underlying *_this);
                    return __MR_C_std_shared_ptr_const_int_array_42_UseCount(_UnderlyingPtr);
                }

                /// Create a new instance, taking ownership of an existing pointer.
                public unsafe Const_SharedPtr_ConstIntArray42(void *ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_int_array_42_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_ConstIntArray42._Underlying *__MR_C_std_shared_ptr_const_int_array_42_Construct(void *ptr);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_int_array_42_Construct(ptr);
                }

                /// Create a new instance, storing a non-owning pointer.
                public unsafe Const_SharedPtr_ConstIntArray42(int? ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_int_array_42_ConstructNonOwning", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_ConstIntArray42._Underlying *__MR_C_std_shared_ptr_const_int_array_42_ConstructNonOwning(int *ptr);
                    int __deref_ptr = ptr.GetValueOrDefault();
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_int_array_42_ConstructNonOwning(ptr.HasValue ? &__deref_ptr : null);
                }

                /// Create a new instance from a non-const pointer to the same type.
                public unsafe Const_SharedPtr_ConstIntArray42(MR.CS.Std._ByValue_SharedPtr_IntArray42 ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_int_array_42_ConstructFromMutable", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_ConstIntArray42._Underlying *__MR_C_std_shared_ptr_const_int_array_42_ConstructFromMutable(MR.CS.Misc._PassBy ptr_pass_by, MR.CS.Std.SharedPtr_IntArray42._Underlying *ptr);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_int_array_42_ConstructFromMutable(ptr.PassByMode, ptr.Value is not null ? ptr.Value._UnderlyingPtr : null);
                }

                /// Create a new instance from a non-const pointer to the same type.
                public static unsafe implicit operator Const_SharedPtr_ConstIntArray42(MR.CS.Std._ByValue_SharedPtr_IntArray42 ptr) {return new(ptr);}

                /// The aliasing constructor. Create a new instance, copying ownership from an existing shared pointer and storing an arbitrary raw pointer.
                /// The input pointer can be reinterpreted from any other `std::shared_ptr<T>` to avoid constructing a new `std::shared_ptr<void>`.
                public unsafe Const_SharedPtr_ConstIntArray42(MR.CS.Std._ByValue_SharedPtr_ConstVoid ownership, int? ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_int_array_42_ConstructAliasing", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_ConstIntArray42._Underlying *__MR_C_std_shared_ptr_const_int_array_42_ConstructAliasing(MR.CS.Misc._PassBy ownership_pass_by, MR.CS.Std.SharedPtr_ConstVoid._Underlying *ownership, int *ptr);
                    int __deref_ptr = ptr.GetValueOrDefault();
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_int_array_42_ConstructAliasing(ownership.PassByMode, ownership.Value is not null ? ownership.Value._UnderlyingPtr : null, ptr.HasValue ? &__deref_ptr : null);
                }
            }

            /// Wraps a pointer to a shared reference-counted heap-allocated array of type `const int`, of size 42.
            /// This is the non-const half of the class.
            public class SharedPtr_ConstIntArray42 : Const_SharedPtr_ConstIntArray42
            {
                internal unsafe SharedPtr_ConstIntArray42(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe SharedPtr_ConstIntArray42() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_int_array_42_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_ConstIntArray42._Underlying *__MR_C_std_shared_ptr_const_int_array_42_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_int_array_42_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe SharedPtr_ConstIntArray42(MR.CS.Std._ByValue_SharedPtr_ConstIntArray42 other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_int_array_42_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_ConstIntArray42._Underlying *__MR_C_std_shared_ptr_const_int_array_42_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.SharedPtr_ConstIntArray42._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_int_array_42_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// Assigns the contents from another instance. Both objects remain alive after the call.
                public unsafe void Assign(MR.CS.Std._ByValue_SharedPtr_ConstIntArray42 other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_int_array_42_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_const_int_array_42_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.SharedPtr_ConstIntArray42._Underlying *other);
                    _DiscardKeepAlive();
                    if (other.Value is not null) _KeepAlive(other.Value);
                    __MR_C_std_shared_ptr_const_int_array_42_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// Create a new instance, taking ownership of an existing pointer.
                public unsafe SharedPtr_ConstIntArray42(void *ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_int_array_42_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_ConstIntArray42._Underlying *__MR_C_std_shared_ptr_const_int_array_42_Construct(void *ptr);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_int_array_42_Construct(ptr);
                }

                /// Overwrite the existing instance, taking ownership of an existing pointer. The previously owned object, if any, has its reference count decremented.
                public unsafe void Assign(void *ptr)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_int_array_42_Assign", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_const_int_array_42_Assign(_Underlying *_this, void *ptr);
                    __MR_C_std_shared_ptr_const_int_array_42_Assign(_UnderlyingPtr, ptr);
                }

                /// Create a new instance, storing a non-owning pointer.
                public unsafe SharedPtr_ConstIntArray42(int? ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_int_array_42_ConstructNonOwning", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_ConstIntArray42._Underlying *__MR_C_std_shared_ptr_const_int_array_42_ConstructNonOwning(int *ptr);
                    int __deref_ptr = ptr.GetValueOrDefault();
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_int_array_42_ConstructNonOwning(ptr.HasValue ? &__deref_ptr : null);
                }

                /// Overwrite the existing instance with a non-owning pointer. The previously owned object, if any, has its reference count decremented.
                public unsafe void Assign(int? ptr)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_int_array_42_AssignNonOwning", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_const_int_array_42_AssignNonOwning(_Underlying *_this, int *ptr);
                    int __deref_ptr = ptr.GetValueOrDefault();
                    _DiscardKeepAlive();
                    __MR_C_std_shared_ptr_const_int_array_42_AssignNonOwning(_UnderlyingPtr, ptr.HasValue ? &__deref_ptr : null);
                }

                /// Create a new instance from a non-const pointer to the same type.
                public unsafe SharedPtr_ConstIntArray42(MR.CS.Std._ByValue_SharedPtr_IntArray42 ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_int_array_42_ConstructFromMutable", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_ConstIntArray42._Underlying *__MR_C_std_shared_ptr_const_int_array_42_ConstructFromMutable(MR.CS.Misc._PassBy ptr_pass_by, MR.CS.Std.SharedPtr_IntArray42._Underlying *ptr);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_int_array_42_ConstructFromMutable(ptr.PassByMode, ptr.Value is not null ? ptr.Value._UnderlyingPtr : null);
                }

                /// Create a new instance from a non-const pointer to the same type.
                public static unsafe implicit operator SharedPtr_ConstIntArray42(MR.CS.Std._ByValue_SharedPtr_IntArray42 ptr) {return new(ptr);}

                /// Overwrite the existing instance with a non-const pointer to the same type.
                public unsafe void Assign(MR.CS.Std._ByValue_SharedPtr_IntArray42 ptr)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_int_array_42_AssignFromMutable", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_const_int_array_42_AssignFromMutable(_Underlying *_this, MR.CS.Misc._PassBy ptr_pass_by, MR.CS.Std.SharedPtr_IntArray42._Underlying *ptr);
                    __MR_C_std_shared_ptr_const_int_array_42_AssignFromMutable(_UnderlyingPtr, ptr.PassByMode, ptr.Value is not null ? ptr.Value._UnderlyingPtr : null);
                }

                /// The aliasing constructor. Create a new instance, copying ownership from an existing shared pointer and storing an arbitrary raw pointer.
                /// The input pointer can be reinterpreted from any other `std::shared_ptr<T>` to avoid constructing a new `std::shared_ptr<void>`.
                public unsafe SharedPtr_ConstIntArray42(MR.CS.Std._ByValue_SharedPtr_ConstVoid ownership, int? ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_int_array_42_ConstructAliasing", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_ConstIntArray42._Underlying *__MR_C_std_shared_ptr_const_int_array_42_ConstructAliasing(MR.CS.Misc._PassBy ownership_pass_by, MR.CS.Std.SharedPtr_ConstVoid._Underlying *ownership, int *ptr);
                    int __deref_ptr = ptr.GetValueOrDefault();
                    _UnderlyingPtr = __MR_C_std_shared_ptr_const_int_array_42_ConstructAliasing(ownership.PassByMode, ownership.Value is not null ? ownership.Value._UnderlyingPtr : null, ptr.HasValue ? &__deref_ptr : null);
                }

                /// The aliasing assignment. Overwrite an existing instance, copying ownership from an existing shared pointer and storing an arbitrary raw pointer.
                /// The input pointer can be reinterpreted from any other `std::shared_ptr<T>` to avoid constructing a new `std::shared_ptr<void>`.
                public unsafe void AssignAliasing(MR.CS.Std._ByValue_SharedPtr_ConstVoid ownership, int? ptr)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_const_int_array_42_AssignAliasing", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_const_int_array_42_AssignAliasing(_Underlying *_this, MR.CS.Misc._PassBy ownership_pass_by, MR.CS.Std.SharedPtr_ConstVoid._Underlying *ownership, int *ptr);
                    int __deref_ptr = ptr.GetValueOrDefault();
                    _DiscardKeepAlive();
                    __MR_C_std_shared_ptr_const_int_array_42_AssignAliasing(_UnderlyingPtr, ownership.PassByMode, ownership.Value is not null ? ownership.Value._UnderlyingPtr : null, ptr.HasValue ? &__deref_ptr : null);
                }
            }

            /// This is used as a function parameter when the underlying function receives `SharedPtr_ConstIntArray42` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `SharedPtr_ConstIntArray42`/`Const_SharedPtr_ConstIntArray42` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            public class _ByValue_SharedPtr_ConstIntArray42
            {
                internal readonly Const_SharedPtr_ConstIntArray42? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_SharedPtr_ConstIntArray42() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_SharedPtr_ConstIntArray42(Const_SharedPtr_ConstIntArray42 new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_SharedPtr_ConstIntArray42(Const_SharedPtr_ConstIntArray42 arg) {return new(arg);}
                public _ByValue_SharedPtr_ConstIntArray42(MR.CS.Misc._Moved<SharedPtr_ConstIntArray42> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_SharedPtr_ConstIntArray42(MR.CS.Misc._Moved<SharedPtr_ConstIntArray42> arg) {return new(arg);}

                /// Create a new instance from a non-const pointer to the same type.
                public static unsafe implicit operator _ByValue_SharedPtr_ConstIntArray42(MR.CS.Std._ByValue_SharedPtr_IntArray42 ptr) {return new MR.CS.Misc._Moved<MR.CS.Std.SharedPtr_ConstIntArray42>(ptr);}
            }

            /// This is used for optional parameters of class `SharedPtr_ConstIntArray42` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_SharedPtr_ConstIntArray42`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `SharedPtr_ConstIntArray42`/`Const_SharedPtr_ConstIntArray42` directly.
            public class _InOptMut_SharedPtr_ConstIntArray42
            {
                public SharedPtr_ConstIntArray42? Opt;

                public _InOptMut_SharedPtr_ConstIntArray42() {}
                public _InOptMut_SharedPtr_ConstIntArray42(SharedPtr_ConstIntArray42 value) {Opt = value;}
                public static implicit operator _InOptMut_SharedPtr_ConstIntArray42(SharedPtr_ConstIntArray42 value) {return new(value);}
            }

            /// This is used for optional parameters of class `SharedPtr_ConstIntArray42` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_SharedPtr_ConstIntArray42`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `SharedPtr_ConstIntArray42`/`Const_SharedPtr_ConstIntArray42` to pass it to the function.
            public class _InOptConst_SharedPtr_ConstIntArray42
            {
                public Const_SharedPtr_ConstIntArray42? Opt;

                public _InOptConst_SharedPtr_ConstIntArray42() {}
                public _InOptConst_SharedPtr_ConstIntArray42(Const_SharedPtr_ConstIntArray42 value) {Opt = value;}
                public static implicit operator _InOptConst_SharedPtr_ConstIntArray42(Const_SharedPtr_ConstIntArray42 value) {return new(value);}

                /// Create a new instance from a non-const pointer to the same type.
                public static unsafe implicit operator _InOptConst_SharedPtr_ConstIntArray42(MR.CS.Std._ByValue_SharedPtr_IntArray42 ptr) {return new Const_SharedPtr_ConstIntArray42(ptr);}
            }
        }
    }
}
