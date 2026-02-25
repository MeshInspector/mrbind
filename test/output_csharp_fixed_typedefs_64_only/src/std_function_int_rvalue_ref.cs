public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// Stores a functor of type: `int &&(void)`. Possibly stateful.
            /// This is the const half of the class.
            /// </summary>
            public class Const_Function_IntRvalueRef : MR.CS.Misc.Object<Const_Function_IntRvalueRef>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_int_rvalue_ref_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_function_int_rvalue_ref_Destroy(_Underlying *_this);
                    __MR_C_std_function_int_rvalue_ref_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Function_IntRvalueRef() {Dispose(false);}

                internal unsafe Const_Function_IntRvalueRef(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_Function_IntRvalueRef() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_int_rvalue_ref_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Function_IntRvalueRef._Underlying *__MR_C_std_function_int_rvalue_ref_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_function_int_rvalue_ref_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Const_Function_IntRvalueRef(MR.CS.Std._ByValue_Function_IntRvalueRefFunc other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_int_rvalue_ref_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Function_IntRvalueRef._Underlying *__MR_C_std_function_int_rvalue_ref_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Function_IntRvalueRef._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_function_int_rvalue_ref_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Const_Function_IntRvalueRef(Const_Function_IntRvalueRef other) : this(new _ByValue_Function_IntRvalueRefFunc(other)) {}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Const_Function_IntRvalueRef(Function_IntRvalueRef other) : this((Const_Function_IntRvalueRef)other) {}

                /// <summary>
                /// Returns true if this instance stores a callable, as opposed to being null.
                /// </summary>
                public static unsafe implicit operator bool(MR.CS.Std.Const_Function_IntRvalueRef _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_int_rvalue_ref_has_value", ExactSpelling = true)]
                    extern static byte __MR_C_std_function_int_rvalue_ref_has_value(MR.CS.Std.Const_Function_IntRvalueRef._Underlying *_this);
                    return __MR_C_std_function_int_rvalue_ref_has_value(_this._UnderlyingPtr) != 0;
                }

                // Custom extras:

                public delegate int Delegate();

                private protected unsafe delegate int *_CDelegate(void *_userdata, void **_cleanup_value);

                private protected unsafe int *_CCallWrapper(void *_userdata, void **_cleanup_value)
                {
                    int _ret = ((Delegate)System.Runtime.InteropServices.GCHandle.FromIntPtr((nint)_userdata).Target!)();
                    return &_ret;
                }

                /// <summary>
                /// Construct from a delegate.
                /// </summary>
                public unsafe Const_Function_IntRvalueRef(Delegate func) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_int_rvalue_ref_ConstructEx", ExactSpelling = true)]
                    extern static Const_Function_IntRvalueRef._Underlying *__MR_C_std_function_int_rvalue_ref_ConstructEx(_CDelegate func, void *userdata, MR.CS.Misc.StdFunctionPostCallCallbackDelegate postcall_callback, MR.CS.Misc.StdFunctionUserdataCallbackDelegate userdata_callback);
                    _UnderlyingPtr = __MR_C_std_function_int_rvalue_ref_ConstructEx(_CCallWrapper, (void *)System.Runtime.InteropServices.GCHandle.ToIntPtr(System.Runtime.InteropServices.GCHandle.Alloc(func)), MR.CS.Misc.StdFunctionPostCallCallback, MR.CS.Misc.StdFunctionUserdataCallback);
                }
            }

            /// <summary>
            /// Stores a functor of type: `int &&(void)`. Possibly stateful.
            /// This is the non-const half of the class.
            /// </summary>
            public class Function_IntRvalueRef : Const_Function_IntRvalueRef
            {
                internal unsafe Function_IntRvalueRef(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Function_IntRvalueRef() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_int_rvalue_ref_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Function_IntRvalueRef._Underlying *__MR_C_std_function_int_rvalue_ref_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_function_int_rvalue_ref_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Function_IntRvalueRef(MR.CS.Std._ByValue_Function_IntRvalueRefFunc other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_int_rvalue_ref_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Function_IntRvalueRef._Underlying *__MR_C_std_function_int_rvalue_ref_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Function_IntRvalueRef._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_function_int_rvalue_ref_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Function_IntRvalueRef(Const_Function_IntRvalueRef other) : this(new _ByValue_Function_IntRvalueRefFunc(other)) {}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Function_IntRvalueRef(Function_IntRvalueRef other) : this((Const_Function_IntRvalueRef)other) {}

                /// <summary>
                /// Assigns the contents from another instance. Both objects remain alive after the call.
                /// </summary>
                public unsafe void assign(MR.CS.Std._ByValue_Function_IntRvalueRefFunc other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_int_rvalue_ref_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_function_int_rvalue_ref_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Function_IntRvalueRef._Underlying *other);
                    _DiscardKeepAlive();
                    if (other.Value is not null) _KeepAlive(other.Value);
                    __MR_C_std_function_int_rvalue_ref_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Destroys the stored callable, making this instance null.
                /// </summary>
                public unsafe void reset()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_int_rvalue_ref_reset", ExactSpelling = true)]
                    extern static void __MR_C_std_function_int_rvalue_ref_reset(_Underlying *_this);
                    __MR_C_std_function_int_rvalue_ref_reset(_UnderlyingPtr);
                }

                // Custom extras:

                /// <summary>
                /// Construct from a delegate.
                /// </summary>
                public unsafe Function_IntRvalueRef(Delegate func) : base(func) {}

                /// <summary>
                /// Assign from a delegate.
                /// </summary>
                public unsafe void assign(Delegate func)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_int_rvalue_ref_AssignEx", ExactSpelling = true)]
                    extern static void __MR_C_std_function_int_rvalue_ref_AssignEx(Function_IntRvalueRef._Underlying *_this, _CDelegate func, void *userdata, MR.CS.Misc.StdFunctionPostCallCallbackDelegate postcall_callback, MR.CS.Misc.StdFunctionUserdataCallbackDelegate userdata_callback);
                    __MR_C_std_function_int_rvalue_ref_AssignEx(_UnderlyingPtr, _CCallWrapper, (void *)System.Runtime.InteropServices.GCHandle.ToIntPtr(System.Runtime.InteropServices.GCHandle.Alloc(func)), MR.CS.Misc.StdFunctionPostCallCallback, MR.CS.Misc.StdFunctionUserdataCallback);
                }
            }

            /// <summary>
            /// This is used as a function parameter when the underlying function receives `Function_IntRvalueRef` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `Function_IntRvalueRef`/`Const_Function_IntRvalueRef` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            /// </summary>
            public class _ByValue_Function_IntRvalueRefFunc
            {
                #pragma warning disable CS0649
                internal readonly Const_Function_IntRvalueRef? Value;
                #pragma warning restore CS0649
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_Function_IntRvalueRefFunc() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_Function_IntRvalueRefFunc(Const_Function_IntRvalueRef new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_Function_IntRvalueRefFunc(Const_Function_IntRvalueRef arg) {return new(arg);}
                public _ByValue_Function_IntRvalueRefFunc(MR.CS.Misc._Moved<Function_IntRvalueRef> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_Function_IntRvalueRefFunc(MR.CS.Misc._Moved<Function_IntRvalueRef> arg) {return new(arg);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Function_IntRvalueRef` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Function_IntRvalueRefFunc`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Function_IntRvalueRef`/`Const_Function_IntRvalueRef` directly.
            /// </summary>
            public class _InOptMut_Function_IntRvalueRefFunc
            {
                public Function_IntRvalueRef? Opt;

                public _InOptMut_Function_IntRvalueRefFunc() {}
                public _InOptMut_Function_IntRvalueRefFunc(Function_IntRvalueRef value) {Opt = value;}
                public static implicit operator _InOptMut_Function_IntRvalueRefFunc(Function_IntRvalueRef value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Function_IntRvalueRef` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Function_IntRvalueRefFunc`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Function_IntRvalueRef`/`Const_Function_IntRvalueRef` to pass it to the function.
            /// </summary>
            public class _InOptConst_Function_IntRvalueRefFunc
            {
                public Const_Function_IntRvalueRef? Opt;

                public _InOptConst_Function_IntRvalueRefFunc() {}
                public _InOptConst_Function_IntRvalueRefFunc(Const_Function_IntRvalueRef value) {Opt = value;}
                public static implicit operator _InOptConst_Function_IntRvalueRefFunc(Const_Function_IntRvalueRef value) {return new(value);}
            }
        }
    }
}
