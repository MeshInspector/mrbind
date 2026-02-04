public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// Wraps a pointer to a single shared reference-counted heap-allocated `int`.
            /// This is the const half of the class.
            public class Const_SharedPtr_Int : MR.CS.Misc.Object<Const_SharedPtr_Int>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_int_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_int_Destroy(_Underlying *_this);
                    __MR_C_std_shared_ptr_int_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_SharedPtr_Int() {Dispose(false);}

                internal unsafe Const_SharedPtr_Int(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_SharedPtr_Int() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_int_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Int._Underlying *__MR_C_std_shared_ptr_int_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_shared_ptr_int_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Const_SharedPtr_Int(MR.CS.Std._ByValue_SharedPtr_Int other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_int_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Int._Underlying *__MR_C_std_shared_ptr_int_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.SharedPtr_Int._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_int_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// Constructs a copy of another instance. The source remains alive.
                public Const_SharedPtr_Int(Const_SharedPtr_Int other) : this(new _ByValue_SharedPtr_Int(other)) {}

                /// Constructs a copy of another instance. The source remains alive.
                public Const_SharedPtr_Int(SharedPtr_Int other) : this((Const_SharedPtr_Int)other) {}

                /// Returns the stored pointer, possibly null.
                public unsafe MR.CS.Misc.Ref<int>? Get()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_int_get", ExactSpelling = true)]
                    extern static int *__MR_C_std_shared_ptr_int_get(_Underlying *_this);
                    var __c_ret = __MR_C_std_shared_ptr_int_get(_UnderlyingPtr);
                    return __c_ret is not null ? new MR.CS.Misc.Ref<int>(__c_ret) : null;
                }

                /// How many shared pointers share the managed object. Zero if no object is being managed.
                /// This being zero usually conincides with `MR_C_std_shared_ptr_int_get()` returning null, but is ultimately orthogonal.
                /// Note that in multithreaded environments, the only safe way to use this number is comparing it with zero. Positive values might change by the time you get to use them.
                public unsafe int UseCount()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_int_use_count", ExactSpelling = true)]
                    extern static int __MR_C_std_shared_ptr_int_use_count(_Underlying *_this);
                    return __MR_C_std_shared_ptr_int_use_count(_UnderlyingPtr);
                }

                /// Create a new instance, taking ownership of an existing pointer.
                public unsafe Const_SharedPtr_Int(void *ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_int_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Int._Underlying *__MR_C_std_shared_ptr_int_Construct(void *ptr);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_int_Construct(ptr);
                }

                /// Create a new instance, storing a non-owning pointer.
                public unsafe Const_SharedPtr_Int(MR.CS.Misc.InOut<int>? ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_int_ConstructNonOwning", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Int._Underlying *__MR_C_std_shared_ptr_int_ConstructNonOwning(int *ptr);
                    int __value_ptr = ptr is not null ? ptr.Value : default(int);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_int_ConstructNonOwning(ptr is not null ? &__value_ptr : null);
                    if (ptr is not null) ptr.Value = __value_ptr;
                }

                /// The aliasing constructor. Create a new instance, copying ownership from an existing shared pointer and storing an arbitrary raw pointer.
                /// The input pointer can be reinterpreted from any other `std::shared_ptr<T>` to avoid constructing a new `std::shared_ptr<void>`.
                public unsafe Const_SharedPtr_Int(MR.CS.Std._ByValue_SharedPtr_ConstVoid ownership, MR.CS.Misc.InOut<int>? ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_int_ConstructAliasing", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Int._Underlying *__MR_C_std_shared_ptr_int_ConstructAliasing(MR.CS.Misc._PassBy ownership_pass_by, MR.CS.Std.SharedPtr_ConstVoid._Underlying *ownership, int *ptr);
                    int __value_ptr = ptr is not null ? ptr.Value : default(int);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_int_ConstructAliasing(ownership.PassByMode, ownership.Value is not null ? ownership.Value._UnderlyingPtr : null, ptr is not null ? &__value_ptr : null);
                    if (ptr is not null) ptr.Value = __value_ptr;
                }
            }

            /// Wraps a pointer to a single shared reference-counted heap-allocated `int`.
            /// This is the non-const half of the class.
            public class SharedPtr_Int : Const_SharedPtr_Int
            {
                internal unsafe SharedPtr_Int(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe SharedPtr_Int() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_int_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Int._Underlying *__MR_C_std_shared_ptr_int_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_shared_ptr_int_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe SharedPtr_Int(MR.CS.Std._ByValue_SharedPtr_Int other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_int_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Int._Underlying *__MR_C_std_shared_ptr_int_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.SharedPtr_Int._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_int_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// Constructs a copy of another instance. The source remains alive.
                public SharedPtr_Int(Const_SharedPtr_Int other) : this(new _ByValue_SharedPtr_Int(other)) {}

                /// Constructs a copy of another instance. The source remains alive.
                public SharedPtr_Int(SharedPtr_Int other) : this((Const_SharedPtr_Int)other) {}

                /// Assigns the contents from another instance. Both objects remain alive after the call.
                public unsafe void Assign(MR.CS.Std._ByValue_SharedPtr_Int other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_int_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_int_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.SharedPtr_Int._Underlying *other);
                    _DiscardKeepAlive();
                    if (other.Value is not null) _KeepAlive(other.Value);
                    __MR_C_std_shared_ptr_int_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// Create a new instance, taking ownership of an existing pointer.
                public unsafe SharedPtr_Int(void *ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_int_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Int._Underlying *__MR_C_std_shared_ptr_int_Construct(void *ptr);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_int_Construct(ptr);
                }

                /// Overwrite the existing instance, taking ownership of an existing pointer. The previously owned object, if any, has its reference count decremented.
                public unsafe void Assign(void *ptr)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_int_Assign", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_int_Assign(_Underlying *_this, void *ptr);
                    __MR_C_std_shared_ptr_int_Assign(_UnderlyingPtr, ptr);
                }

                /// Create a new instance, storing a non-owning pointer.
                public unsafe SharedPtr_Int(MR.CS.Misc.InOut<int>? ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_int_ConstructNonOwning", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Int._Underlying *__MR_C_std_shared_ptr_int_ConstructNonOwning(int *ptr);
                    int __value_ptr = ptr is not null ? ptr.Value : default(int);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_int_ConstructNonOwning(ptr is not null ? &__value_ptr : null);
                    if (ptr is not null) ptr.Value = __value_ptr;
                }

                /// Overwrite the existing instance with a non-owning pointer. The previously owned object, if any, has its reference count decremented.
                public unsafe void Assign(MR.CS.Misc.InOut<int>? ptr)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_int_AssignNonOwning", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_int_AssignNonOwning(_Underlying *_this, int *ptr);
                    int __value_ptr = ptr is not null ? ptr.Value : default(int);
                    _DiscardKeepAlive();
                    if (ptr is not null) ptr.Value = __value_ptr;
                    __MR_C_std_shared_ptr_int_AssignNonOwning(_UnderlyingPtr, ptr is not null ? &__value_ptr : null);
                }

                /// The aliasing constructor. Create a new instance, copying ownership from an existing shared pointer and storing an arbitrary raw pointer.
                /// The input pointer can be reinterpreted from any other `std::shared_ptr<T>` to avoid constructing a new `std::shared_ptr<void>`.
                public unsafe SharedPtr_Int(MR.CS.Std._ByValue_SharedPtr_ConstVoid ownership, MR.CS.Misc.InOut<int>? ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_int_ConstructAliasing", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Int._Underlying *__MR_C_std_shared_ptr_int_ConstructAliasing(MR.CS.Misc._PassBy ownership_pass_by, MR.CS.Std.SharedPtr_ConstVoid._Underlying *ownership, int *ptr);
                    int __value_ptr = ptr is not null ? ptr.Value : default(int);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_int_ConstructAliasing(ownership.PassByMode, ownership.Value is not null ? ownership.Value._UnderlyingPtr : null, ptr is not null ? &__value_ptr : null);
                    if (ptr is not null) ptr.Value = __value_ptr;
                }

                /// The aliasing assignment. Overwrite an existing instance, copying ownership from an existing shared pointer and storing an arbitrary raw pointer.
                /// The input pointer can be reinterpreted from any other `std::shared_ptr<T>` to avoid constructing a new `std::shared_ptr<void>`.
                public unsafe void AssignAliasing(MR.CS.Std._ByValue_SharedPtr_ConstVoid ownership, MR.CS.Misc.InOut<int>? ptr)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_int_AssignAliasing", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_int_AssignAliasing(_Underlying *_this, MR.CS.Misc._PassBy ownership_pass_by, MR.CS.Std.SharedPtr_ConstVoid._Underlying *ownership, int *ptr);
                    int __value_ptr = ptr is not null ? ptr.Value : default(int);
                    _DiscardKeepAlive();
                    if (ptr is not null) ptr.Value = __value_ptr;
                    __MR_C_std_shared_ptr_int_AssignAliasing(_UnderlyingPtr, ownership.PassByMode, ownership.Value is not null ? ownership.Value._UnderlyingPtr : null, ptr is not null ? &__value_ptr : null);
                }
            }

            /// This is used as a function parameter when the underlying function receives `SharedPtr_Int` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `SharedPtr_Int`/`Const_SharedPtr_Int` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            public class _ByValue_SharedPtr_Int
            {
                internal readonly Const_SharedPtr_Int? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_SharedPtr_Int() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_SharedPtr_Int(Const_SharedPtr_Int new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_SharedPtr_Int(Const_SharedPtr_Int arg) {return new(arg);}
                public _ByValue_SharedPtr_Int(MR.CS.Misc._Moved<SharedPtr_Int> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_SharedPtr_Int(MR.CS.Misc._Moved<SharedPtr_Int> arg) {return new(arg);}
            }

            /// This is used for optional parameters of class `SharedPtr_Int` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_SharedPtr_Int`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `SharedPtr_Int`/`Const_SharedPtr_Int` directly.
            public class _InOptMut_SharedPtr_Int
            {
                public SharedPtr_Int? Opt;

                public _InOptMut_SharedPtr_Int() {}
                public _InOptMut_SharedPtr_Int(SharedPtr_Int value) {Opt = value;}
                public static implicit operator _InOptMut_SharedPtr_Int(SharedPtr_Int value) {return new(value);}
            }

            /// This is used for optional parameters of class `SharedPtr_Int` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_SharedPtr_Int`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `SharedPtr_Int`/`Const_SharedPtr_Int` to pass it to the function.
            public class _InOptConst_SharedPtr_Int
            {
                public Const_SharedPtr_Int? Opt;

                public _InOptConst_SharedPtr_Int() {}
                public _InOptConst_SharedPtr_Int(Const_SharedPtr_Int value) {Opt = value;}
                public static implicit operator _InOptConst_SharedPtr_Int(Const_SharedPtr_Int value) {return new(value);}
            }
        }
    }
}
