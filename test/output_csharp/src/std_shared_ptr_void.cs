public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// Wraps a pointer to a single shared reference-counted heap-allocated `void`.
            /// This is the const half of the class.
            public class Const_SharedPtr_Void : MR.CS.Misc.Object<Const_SharedPtr_Void>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

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

                internal unsafe Const_SharedPtr_Void(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_SharedPtr_Void() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_DefaultConstruct();
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_DefaultConstruct();
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Const_SharedPtr_Void(MR.CS.Std._ByValue_SharedPtr_Void other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.SharedPtr_Void._Underlying *other);
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public Const_SharedPtr_Void(Const_SharedPtr_Void other) : this(new _ByValue_SharedPtr_Void(other)) {}

                /// Constructs a copy of another instance. The source remains alive.
                public Const_SharedPtr_Void(SharedPtr_Void other) : this((Const_SharedPtr_Void)other) {}

                /// Returns the stored pointer, possibly null.
                /// Returns a mutable pointer.
                public unsafe void *Get()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_get", ExactSpelling = true)]
                    extern static void *__MR_C_std_shared_ptr_void_get(_Underlying *_this);
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_std_shared_ptr_void_get(_UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                /// Returns true if non-null.
                public static unsafe implicit operator bool(MR.CS.Std.Const_SharedPtr_Void _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_has_value", ExactSpelling = true)]
                    extern static byte __MR_C_std_shared_ptr_void_has_value(MR.CS.Std.Const_SharedPtr_Void._Underlying *_this);
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_std_shared_ptr_void_has_value(_this._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret != 0;
                }

                /// How many shared pointers share the managed object. Zero if no object is being managed.
                /// This being zero usually conincides with `MR_C_std_shared_ptr_void_get()` returning null, but is ultimately orthogonal.
                /// Note that in multithreaded environments, the only safe way to use this number is comparing it with zero. Positive values might change by the time you get to use them.
                public unsafe int UseCount()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_use_count", ExactSpelling = true)]
                    extern static int __MR_C_std_shared_ptr_void_use_count(_Underlying *_this);
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_std_shared_ptr_void_use_count(_UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                /// Create a new instance, storing a non-owning pointer.
                /// Parameter `ptr` is a mutable pointer.
                public unsafe Const_SharedPtr_Void(MR.CS.Std.NonOwning tag, void *ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_ConstructNonOwning", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_ConstructNonOwning(void *ptr);
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_ConstructNonOwning(ptr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// The aliasing constructor. Create a new instance, copying ownership from an existing shared pointer and storing an arbitrary raw pointer.
                /// The input pointer can be reinterpreted from any other `std::shared_ptr<T>` to avoid constructing a new `std::shared_ptr<void>`.
                /// Parameter `ptr` is a mutable pointer.
                public unsafe Const_SharedPtr_Void(MR.CS.Std.Aliasing tag, MR.CS.Std._ByValue_SharedPtr_ConstVoid ownership, void *ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_ConstructAliasing", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_ConstructAliasing(MR.CS.Misc._PassBy ownership_pass_by, MR.CS.Std.SharedPtr_ConstVoid._Underlying *ownership, void *ptr);
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_ConstructAliasing(ownership.PassByMode, ownership.Value is not null ? ownership.Value._UnderlyingPtr : null, ptr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }
            }

            /// Wraps a pointer to a single shared reference-counted heap-allocated `void`.
            /// This is the non-const half of the class.
            public class SharedPtr_Void : Const_SharedPtr_Void
            {
                internal unsafe SharedPtr_Void(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe SharedPtr_Void() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_DefaultConstruct();
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_DefaultConstruct();
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe SharedPtr_Void(MR.CS.Std._ByValue_SharedPtr_Void other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.SharedPtr_Void._Underlying *other);
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public SharedPtr_Void(Const_SharedPtr_Void other) : this(new _ByValue_SharedPtr_Void(other)) {}

                /// Constructs a copy of another instance. The source remains alive.
                public SharedPtr_Void(SharedPtr_Void other) : this((Const_SharedPtr_Void)other) {}

                /// Assigns the contents from another instance. Both objects remain alive after the call.
                public unsafe void Assign(MR.CS.Std._ByValue_SharedPtr_Void other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_void_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.SharedPtr_Void._Underlying *other);
                    MR.CS.Misc._Exceptions.Prepare();
                    _DiscardKeepAlive();
                    if (other.Value is not null) _KeepAlive(other.Value);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    __MR_C_std_shared_ptr_void_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// Resets the pointer to null.
                public unsafe void Reset()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_reset", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_void_reset(_Underlying *_this);
                    MR.CS.Misc._Exceptions.Prepare();
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    __MR_C_std_shared_ptr_void_reset(_UnderlyingPtr);
                }

                /// Create a new instance, storing a non-owning pointer.
                /// Parameter `ptr` is a mutable pointer.
                public unsafe SharedPtr_Void(MR.CS.Std.NonOwning tag, void *ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_ConstructNonOwning", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_ConstructNonOwning(void *ptr);
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_ConstructNonOwning(ptr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Overwrite the existing instance with a non-owning pointer. The previously owned object, if any, has its reference count decremented.
                /// Parameter `ptr` is a mutable pointer.
                public unsafe void Assign(MR.CS.Std.NonOwning tag, void *ptr)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_AssignNonOwning", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_void_AssignNonOwning(_Underlying *_this, void *ptr);
                    MR.CS.Misc._Exceptions.Prepare();
                    _DiscardKeepAlive();
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    __MR_C_std_shared_ptr_void_AssignNonOwning(_UnderlyingPtr, ptr);
                }

                /// The aliasing constructor. Create a new instance, copying ownership from an existing shared pointer and storing an arbitrary raw pointer.
                /// The input pointer can be reinterpreted from any other `std::shared_ptr<T>` to avoid constructing a new `std::shared_ptr<void>`.
                /// Parameter `ptr` is a mutable pointer.
                public unsafe SharedPtr_Void(MR.CS.Std.Aliasing tag, MR.CS.Std._ByValue_SharedPtr_ConstVoid ownership, void *ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_ConstructAliasing", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Void._Underlying *__MR_C_std_shared_ptr_void_ConstructAliasing(MR.CS.Misc._PassBy ownership_pass_by, MR.CS.Std.SharedPtr_ConstVoid._Underlying *ownership, void *ptr);
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_C_std_shared_ptr_void_ConstructAliasing(ownership.PassByMode, ownership.Value is not null ? ownership.Value._UnderlyingPtr : null, ptr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// The aliasing assignment. Overwrite an existing instance, copying ownership from an existing shared pointer and storing an arbitrary raw pointer.
                /// The input pointer can be reinterpreted from any other `std::shared_ptr<T>` to avoid constructing a new `std::shared_ptr<void>`.
                /// Parameter `ptr` is a mutable pointer.
                public unsafe void AssignAliasing(MR.CS.Std.Aliasing tag, MR.CS.Std._ByValue_SharedPtr_ConstVoid ownership, void *ptr)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_void_AssignAliasing", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_void_AssignAliasing(_Underlying *_this, MR.CS.Misc._PassBy ownership_pass_by, MR.CS.Std.SharedPtr_ConstVoid._Underlying *ownership, void *ptr);
                    MR.CS.Misc._Exceptions.Prepare();
                    _DiscardKeepAlive();
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    __MR_C_std_shared_ptr_void_AssignAliasing(_UnderlyingPtr, ownership.PassByMode, ownership.Value is not null ? ownership.Value._UnderlyingPtr : null, ptr);
                }
            }

            /// This is used as a function parameter when the underlying function receives `SharedPtr_Void` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `SharedPtr_Void`/`Const_SharedPtr_Void` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            public class _ByValue_SharedPtr_Void
            {
                #pragma warning disable CS0649
                internal readonly Const_SharedPtr_Void? Value;
                #pragma warning restore CS0649
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_SharedPtr_Void() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_SharedPtr_Void(Const_SharedPtr_Void new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_SharedPtr_Void(Const_SharedPtr_Void arg) {return new(arg);}
                public _ByValue_SharedPtr_Void(MR.CS.Misc._Moved<SharedPtr_Void> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_SharedPtr_Void(MR.CS.Misc._Moved<SharedPtr_Void> arg) {return new(arg);}
            }

            /// This is used for optional parameters of class `SharedPtr_Void` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_SharedPtr_Void`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `SharedPtr_Void`/`Const_SharedPtr_Void` directly.
            public class _InOptMut_SharedPtr_Void
            {
                public SharedPtr_Void? Opt;

                public _InOptMut_SharedPtr_Void() {}
                public _InOptMut_SharedPtr_Void(SharedPtr_Void value) {Opt = value;}
                public static implicit operator _InOptMut_SharedPtr_Void(SharedPtr_Void value) {return new(value);}
            }

            /// This is used for optional parameters of class `SharedPtr_Void` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_SharedPtr_Void`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `SharedPtr_Void`/`Const_SharedPtr_Void` to pass it to the function.
            public class _InOptConst_SharedPtr_Void
            {
                public Const_SharedPtr_Void? Opt;

                public _InOptConst_SharedPtr_Void() {}
                public _InOptConst_SharedPtr_Void(Const_SharedPtr_Void value) {Opt = value;}
                public static implicit operator _InOptConst_SharedPtr_Void(Const_SharedPtr_Void value) {return new(value);}
            }
        }
    }
}
