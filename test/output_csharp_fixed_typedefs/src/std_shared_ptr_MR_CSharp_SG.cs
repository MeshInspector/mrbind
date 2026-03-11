public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// Wraps a pointer to a single shared reference-counted heap-allocated `MR::CSharp::SG`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_SharedPtr_MRCSharpSG : MR.CS.Misc.Object<Const_SharedPtr_MRCSharpSG>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SG_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_MR_CSharp_SG_Destroy(_Underlying *_this);
                    __MR_C_std_shared_ptr_MR_CSharp_SG_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_SharedPtr_MRCSharpSG() {Dispose(false);}

                internal unsafe Const_SharedPtr_MRCSharpSG(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_SharedPtr_MRCSharpSG() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SG_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_MRCSharpSG._Underlying *__MR_C_std_shared_ptr_MR_CSharp_SG_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_shared_ptr_MR_CSharp_SG_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Const_SharedPtr_MRCSharpSG(MR.CS.Std._ByValue_SharedPtr_MRCSharpSG other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SG_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_MRCSharpSG._Underlying *__MR_C_std_shared_ptr_MR_CSharp_SG_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.SharedPtr_MRCSharpSG._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_MR_CSharp_SG_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Const_SharedPtr_MRCSharpSG(Const_SharedPtr_MRCSharpSG other) : this(new _ByValue_SharedPtr_MRCSharpSG(other)) {}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Const_SharedPtr_MRCSharpSG(SharedPtr_MRCSharpSG other) : this((Const_SharedPtr_MRCSharpSG)other) {}

                /// <summary>
                /// Returns the stored pointer, possibly null.
                /// </summary>
                public unsafe MR.CS.CSharp.SG? get()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SG_get", ExactSpelling = true)]
                    extern static MR.CS.CSharp.SG._Underlying *__MR_C_std_shared_ptr_MR_CSharp_SG_get(_Underlying *_this);
                    var __c_ret = __MR_C_std_shared_ptr_MR_CSharp_SG_get(_UnderlyingPtr);
                    MR.CS.CSharp.SG? __ret;
                    __ret = __c_ret is not null ? new MR.CS.CSharp.SG(__c_ret, is_owning: false) : null;
                    if (__ret is not null) __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// Returns true if non-null.
                /// </summary>
                public static unsafe implicit operator bool(MR.CS.Std.Const_SharedPtr_MRCSharpSG _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SG_has_value", ExactSpelling = true)]
                    extern static byte __MR_C_std_shared_ptr_MR_CSharp_SG_has_value(MR.CS.Std.Const_SharedPtr_MRCSharpSG._Underlying *_this);
                    return __MR_C_std_shared_ptr_MR_CSharp_SG_has_value(_this._UnderlyingPtr) != 0;
                }

                /// <summary>
                /// How many shared pointers share the managed object. Zero if no object is being managed.
                /// This being zero usually conincides with `MR_C_std_shared_ptr_MR_CSharp_SG_get()` returning null, but is ultimately orthogonal.
                /// Note that in multithreaded environments, the only safe way to use this number is comparing it with zero. Positive values might change by the time you get to use them.
                /// </summary>
                public unsafe int useCount()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SG_use_count", ExactSpelling = true)]
                    extern static int __MR_C_std_shared_ptr_MR_CSharp_SG_use_count(_Underlying *_this);
                    return __MR_C_std_shared_ptr_MR_CSharp_SG_use_count(_UnderlyingPtr);
                }

                /// <summary>
                /// Create a new instance, taking ownership of an existing pointer.
                /// </summary>
                public unsafe Const_SharedPtr_MRCSharpSG(MR.CS.Std.Owning tag, void *ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SG_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_MRCSharpSG._Underlying *__MR_C_std_shared_ptr_MR_CSharp_SG_Construct(void *ptr);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_MR_CSharp_SG_Construct(ptr);
                }

                /// <summary>
                /// Create a new instance, storing a non-owning pointer.
                /// </summary>
                public unsafe Const_SharedPtr_MRCSharpSG(MR.CS.Std.NonOwning tag, MR.CS.CSharp.SG? ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SG_ConstructNonOwning", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_MRCSharpSG._Underlying *__MR_C_std_shared_ptr_MR_CSharp_SG_ConstructNonOwning(MR.CS.CSharp.SG._Underlying *ptr);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_MR_CSharp_SG_ConstructNonOwning(ptr is not null ? ptr._UnderlyingPtr : null);
                    if (ptr is not null) _KeepAlive(ptr);
                }

                /// <summary>
                /// The aliasing constructor. Create a new instance, copying ownership from an existing shared pointer and storing an arbitrary raw pointer.
                /// The input pointer can be reinterpreted from any other `std::shared_ptr&amp;lt;T&amp;gt;` to avoid constructing a new `std::shared_ptr&amp;lt;void&amp;gt;`.
                /// </summary>
                public unsafe Const_SharedPtr_MRCSharpSG(MR.CS.Std.Aliasing tag, MR.CS.Std._ByValue_SharedPtr_ConstVoid ownership, MR.CS.CSharp.SG? ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SG_ConstructAliasing", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_MRCSharpSG._Underlying *__MR_C_std_shared_ptr_MR_CSharp_SG_ConstructAliasing(MR.CS.Misc._PassBy ownership_pass_by, MR.CS.Std.SharedPtr_ConstVoid._Underlying *ownership, MR.CS.CSharp.SG._Underlying *ptr);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_MR_CSharp_SG_ConstructAliasing(ownership.PassByMode, ownership.Value is not null ? ownership.Value._UnderlyingPtr : null, ptr is not null ? ptr._UnderlyingPtr : null);
                    if (ptr is not null) _KeepAlive(ptr);
                }

                /// <summary>
                /// Creates an untyped `std::shared_ptr&amp;lt;void&amp;gt;` pointing to the same object as the source typed pointer.
                /// </summary>
                public static unsafe implicit operator MR.CS.Std.SharedPtr_Void(MR.CS.Std.Const_SharedPtr_MRCSharpSG _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SG_ConvertTo_MR_C_std_shared_ptr_void", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_Void._Underlying *__MR_C_std_shared_ptr_MR_CSharp_SG_ConvertTo_MR_C_std_shared_ptr_void(MR.CS.Std.Const_SharedPtr_MRCSharpSG._Underlying *_this);
                    return new(__MR_C_std_shared_ptr_MR_CSharp_SG_ConvertTo_MR_C_std_shared_ptr_void(_this._UnderlyingPtr), is_owning: true);
                }

                /// <summary>
                /// Overwrites an existing `std::shared_ptr&amp;lt;void&amp;gt;` to point to the same object as this instance.
                /// </summary>
                public unsafe void assignToMRCStdSharedPtrVoid(MR.CS.Std.SharedPtr_Void _target)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SG_AssignTo_MR_C_std_shared_ptr_void", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_MR_CSharp_SG_AssignTo_MR_C_std_shared_ptr_void(_Underlying *_this, MR.CS.Std.SharedPtr_Void._Underlying *_target);
                    __MR_C_std_shared_ptr_MR_CSharp_SG_AssignTo_MR_C_std_shared_ptr_void(_UnderlyingPtr, _target._UnderlyingPtr);
                }
            }

            /// <summary>
            /// Wraps a pointer to a single shared reference-counted heap-allocated `MR::CSharp::SG`.
            /// This is the non-const half of the class.
            /// </summary>
            public class SharedPtr_MRCSharpSG : Const_SharedPtr_MRCSharpSG
            {
                internal unsafe SharedPtr_MRCSharpSG(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe SharedPtr_MRCSharpSG() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SG_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_MRCSharpSG._Underlying *__MR_C_std_shared_ptr_MR_CSharp_SG_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_shared_ptr_MR_CSharp_SG_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe SharedPtr_MRCSharpSG(MR.CS.Std._ByValue_SharedPtr_MRCSharpSG other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SG_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_MRCSharpSG._Underlying *__MR_C_std_shared_ptr_MR_CSharp_SG_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.SharedPtr_MRCSharpSG._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_MR_CSharp_SG_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public SharedPtr_MRCSharpSG(Const_SharedPtr_MRCSharpSG other) : this(new _ByValue_SharedPtr_MRCSharpSG(other)) {}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public SharedPtr_MRCSharpSG(SharedPtr_MRCSharpSG other) : this((Const_SharedPtr_MRCSharpSG)other) {}

                /// <summary>
                /// Assigns the contents from another instance. Both objects remain alive after the call.
                /// </summary>
                public unsafe void assign(MR.CS.Std._ByValue_SharedPtr_MRCSharpSG other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SG_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_MR_CSharp_SG_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.SharedPtr_MRCSharpSG._Underlying *other);
                    _DiscardKeepAlive();
                    if (other.Value is not null) _KeepAlive(other.Value);
                    __MR_C_std_shared_ptr_MR_CSharp_SG_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Resets the pointer to null.
                /// </summary>
                public unsafe void reset()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SG_reset", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_MR_CSharp_SG_reset(_Underlying *_this);
                    __MR_C_std_shared_ptr_MR_CSharp_SG_reset(_UnderlyingPtr);
                }

                /// <summary>
                /// Create a new instance, taking ownership of an existing pointer.
                /// </summary>
                public unsafe SharedPtr_MRCSharpSG(MR.CS.Std.Owning tag, void *ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SG_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_MRCSharpSG._Underlying *__MR_C_std_shared_ptr_MR_CSharp_SG_Construct(void *ptr);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_MR_CSharp_SG_Construct(ptr);
                }

                /// <summary>
                /// Overwrite the existing instance, taking ownership of an existing pointer. The previously owned object, if any, has its reference count decremented.
                /// </summary>
                public unsafe void assign(MR.CS.Std.Owning tag, void *ptr)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SG_Assign", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_MR_CSharp_SG_Assign(_Underlying *_this, void *ptr);
                    __MR_C_std_shared_ptr_MR_CSharp_SG_Assign(_UnderlyingPtr, ptr);
                }

                /// <summary>
                /// Create a new instance, storing a non-owning pointer.
                /// </summary>
                public unsafe SharedPtr_MRCSharpSG(MR.CS.Std.NonOwning tag, MR.CS.CSharp.SG? ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SG_ConstructNonOwning", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_MRCSharpSG._Underlying *__MR_C_std_shared_ptr_MR_CSharp_SG_ConstructNonOwning(MR.CS.CSharp.SG._Underlying *ptr);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_MR_CSharp_SG_ConstructNonOwning(ptr is not null ? ptr._UnderlyingPtr : null);
                    if (ptr is not null) _KeepAlive(ptr);
                }

                /// <summary>
                /// Overwrite the existing instance with a non-owning pointer. The previously owned object, if any, has its reference count decremented.
                /// </summary>
                public unsafe void assign(MR.CS.Std.NonOwning tag, MR.CS.CSharp.SG? ptr)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SG_AssignNonOwning", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_MR_CSharp_SG_AssignNonOwning(_Underlying *_this, MR.CS.CSharp.SG._Underlying *ptr);
                    _DiscardKeepAlive();
                    if (ptr is not null) _KeepAlive(ptr);
                    __MR_C_std_shared_ptr_MR_CSharp_SG_AssignNonOwning(_UnderlyingPtr, ptr is not null ? ptr._UnderlyingPtr : null);
                }

                /// <summary>
                /// The aliasing constructor. Create a new instance, copying ownership from an existing shared pointer and storing an arbitrary raw pointer.
                /// The input pointer can be reinterpreted from any other `std::shared_ptr&amp;lt;T&amp;gt;` to avoid constructing a new `std::shared_ptr&amp;lt;void&amp;gt;`.
                /// </summary>
                public unsafe SharedPtr_MRCSharpSG(MR.CS.Std.Aliasing tag, MR.CS.Std._ByValue_SharedPtr_ConstVoid ownership, MR.CS.CSharp.SG? ptr) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SG_ConstructAliasing", ExactSpelling = true)]
                    extern static MR.CS.Std.SharedPtr_MRCSharpSG._Underlying *__MR_C_std_shared_ptr_MR_CSharp_SG_ConstructAliasing(MR.CS.Misc._PassBy ownership_pass_by, MR.CS.Std.SharedPtr_ConstVoid._Underlying *ownership, MR.CS.CSharp.SG._Underlying *ptr);
                    _UnderlyingPtr = __MR_C_std_shared_ptr_MR_CSharp_SG_ConstructAliasing(ownership.PassByMode, ownership.Value is not null ? ownership.Value._UnderlyingPtr : null, ptr is not null ? ptr._UnderlyingPtr : null);
                    if (ptr is not null) _KeepAlive(ptr);
                }

                /// <summary>
                /// The aliasing assignment. Overwrite an existing instance, copying ownership from an existing shared pointer and storing an arbitrary raw pointer.
                /// The input pointer can be reinterpreted from any other `std::shared_ptr&amp;lt;T&amp;gt;` to avoid constructing a new `std::shared_ptr&amp;lt;void&amp;gt;`.
                /// </summary>
                public unsafe void assignAliasing(MR.CS.Std.Aliasing tag, MR.CS.Std._ByValue_SharedPtr_ConstVoid ownership, MR.CS.CSharp.SG? ptr)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SG_AssignAliasing", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_MR_CSharp_SG_AssignAliasing(_Underlying *_this, MR.CS.Misc._PassBy ownership_pass_by, MR.CS.Std.SharedPtr_ConstVoid._Underlying *ownership, MR.CS.CSharp.SG._Underlying *ptr);
                    _DiscardKeepAlive();
                    if (ptr is not null) _KeepAlive(ptr);
                    __MR_C_std_shared_ptr_MR_CSharp_SG_AssignAliasing(_UnderlyingPtr, ownership.PassByMode, ownership.Value is not null ? ownership.Value._UnderlyingPtr : null, ptr is not null ? ptr._UnderlyingPtr : null);
                }
            }

            /// <summary>
            /// This is used as a function parameter when the underlying function receives `SharedPtr_MRCSharpSG` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `SharedPtr_MRCSharpSG`/`Const_SharedPtr_MRCSharpSG` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn&apos;t a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            /// </summary>
            public class _ByValue_SharedPtr_MRCSharpSG
            {
                #pragma warning disable CS0649
                internal readonly Const_SharedPtr_MRCSharpSG? Value;
                #pragma warning restore CS0649
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_SharedPtr_MRCSharpSG() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_SharedPtr_MRCSharpSG(Const_SharedPtr_MRCSharpSG new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_SharedPtr_MRCSharpSG(Const_SharedPtr_MRCSharpSG arg) {return new(arg);}
                public _ByValue_SharedPtr_MRCSharpSG(MR.CS.Misc._Moved<SharedPtr_MRCSharpSG> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_SharedPtr_MRCSharpSG(MR.CS.Misc._Moved<SharedPtr_MRCSharpSG> arg) {return new(arg);}
            }

            /// <summary>
            /// This is used for optional parameters of class `SharedPtr_MRCSharpSG` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_SharedPtr_MRCSharpSG`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `SharedPtr_MRCSharpSG`/`Const_SharedPtr_MRCSharpSG` directly.
            /// </summary>
            public class _InOptMut_SharedPtr_MRCSharpSG
            {
                public SharedPtr_MRCSharpSG? Opt;

                public _InOptMut_SharedPtr_MRCSharpSG() {}
                public _InOptMut_SharedPtr_MRCSharpSG(SharedPtr_MRCSharpSG value) {Opt = value;}
                public static implicit operator _InOptMut_SharedPtr_MRCSharpSG(SharedPtr_MRCSharpSG value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `SharedPtr_MRCSharpSG` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_SharedPtr_MRCSharpSG`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `SharedPtr_MRCSharpSG`/`Const_SharedPtr_MRCSharpSG` to pass it to the function.
            /// </summary>
            public class _InOptConst_SharedPtr_MRCSharpSG
            {
                public Const_SharedPtr_MRCSharpSG? Opt;

                public _InOptConst_SharedPtr_MRCSharpSG() {}
                public _InOptConst_SharedPtr_MRCSharpSG(Const_SharedPtr_MRCSharpSG value) {Opt = value;}
                public static implicit operator _InOptConst_SharedPtr_MRCSharpSG(Const_SharedPtr_MRCSharpSG value) {return new(value);}
            }
        }
    }
}
