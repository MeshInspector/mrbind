public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// Stores a functor of type: `void(void)`. Possibly stateful.
            /// This is the const half of the class.
            /// </summary>
            public class Const_Function_Void : MR.CS.Misc.Object<Const_Function_Void>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_void_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_function_void_Destroy(_Underlying *_this);
                    __MR_C_std_function_void_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Function_Void() {Dispose(false);}

                internal unsafe Const_Function_Void(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_Function_Void() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_void_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Function_Void._Underlying *__MR_C_std_function_void_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_function_void_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Const_Function_Void(MR.CS.Std._ByValue_Function_Void other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_void_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Function_Void._Underlying *__MR_C_std_function_void_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Function_Void._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_function_void_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Const_Function_Void(Const_Function_Void other) : this(new _ByValue_Function_Void(other)) {}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Const_Function_Void(Function_Void other) : this((Const_Function_Void)other) {}

                /// <summary>
                /// Returns true if this instance stores a callable, as opposed to being null.
                /// </summary>
                public static unsafe implicit operator bool(MR.CS.Std.Const_Function_Void _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_void_has_value", ExactSpelling = true)]
                    extern static byte __MR_C_std_function_void_has_value(MR.CS.Std.Const_Function_Void._Underlying *_this);
                    return __MR_C_std_function_void_has_value(_this._UnderlyingPtr) != 0;
                }

                /// <summary>
                /// Calls the stored callable.
                /// </summary>
                public unsafe void call()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_void_call", ExactSpelling = true)]
                    extern static void __MR_C_std_function_void_call(_Underlying *_this);
                    __MR_C_std_function_void_call(_UnderlyingPtr);
                }

                // Custom extras:

                public delegate void Delegate();

                private protected unsafe delegate void _CDelegate(void *_userdata, void **_cleanup_value);

                private protected unsafe void _CCallWrapper(void *_userdata, void **_cleanup_value)
                {
                    ((Delegate)System.Runtime.InteropServices.GCHandle.FromIntPtr((nint)_userdata).Target!)();
                }

                /// <summary>
                /// Construct from a delegate.
                /// </summary>
                public unsafe Const_Function_Void(Delegate func) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_void_ConstructEx", ExactSpelling = true)]
                    extern static Const_Function_Void._Underlying *__MR_C_std_function_void_ConstructEx(_CDelegate func, void *userdata, MR.CS.Misc.StdFunctionPostCallCallbackDelegate postcall_callback, MR.CS.Misc.StdFunctionUserdataCallbackDelegate userdata_callback);
                    _UnderlyingPtr = __MR_C_std_function_void_ConstructEx(_CCallWrapper, (void *)System.Runtime.InteropServices.GCHandle.ToIntPtr(System.Runtime.InteropServices.GCHandle.Alloc(func)), MR.CS.Misc.StdFunctionPostCallCallback, MR.CS.Misc.StdFunctionUserdataCallback);
                }

                public static unsafe implicit operator Const_Function_Void(MR.CS.Std.Function_Void.Delegate func) {return new(func);}
            }

            /// <summary>
            /// Stores a functor of type: `void(void)`. Possibly stateful.
            /// This is the non-const half of the class.
            /// </summary>
            public class Function_Void : Const_Function_Void
            {
                internal unsafe Function_Void(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Function_Void() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_void_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Function_Void._Underlying *__MR_C_std_function_void_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_function_void_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Function_Void(MR.CS.Std._ByValue_Function_Void other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_void_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Function_Void._Underlying *__MR_C_std_function_void_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Function_Void._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_function_void_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Function_Void(Const_Function_Void other) : this(new _ByValue_Function_Void(other)) {}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Function_Void(Function_Void other) : this((Const_Function_Void)other) {}

                /// <summary>
                /// Assigns the contents from another instance. Both objects remain alive after the call.
                /// </summary>
                public unsafe void assign(MR.CS.Std._ByValue_Function_Void other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_void_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_function_void_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Function_Void._Underlying *other);
                    _DiscardKeepAlive();
                    if (other.Value is not null) _KeepAlive(other.Value);
                    __MR_C_std_function_void_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Destroys the stored callable, making this instance null.
                /// </summary>
                public unsafe void reset()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_void_reset", ExactSpelling = true)]
                    extern static void __MR_C_std_function_void_reset(_Underlying *_this);
                    __MR_C_std_function_void_reset(_UnderlyingPtr);
                }

                // Custom extras:

                /// <summary>
                /// Construct from a delegate.
                /// </summary>
                public unsafe Function_Void(Delegate func) : base(func) {}

                /// <summary>
                /// Assign from a delegate.
                /// </summary>
                public unsafe void assign(Delegate func)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_void_AssignEx", ExactSpelling = true)]
                    extern static void __MR_C_std_function_void_AssignEx(Function_Void._Underlying *_this, _CDelegate func, void *userdata, MR.CS.Misc.StdFunctionPostCallCallbackDelegate postcall_callback, MR.CS.Misc.StdFunctionUserdataCallbackDelegate userdata_callback);
                    __MR_C_std_function_void_AssignEx(_UnderlyingPtr, _CCallWrapper, (void *)System.Runtime.InteropServices.GCHandle.ToIntPtr(System.Runtime.InteropServices.GCHandle.Alloc(func)), MR.CS.Misc.StdFunctionPostCallCallback, MR.CS.Misc.StdFunctionUserdataCallback);
                }
            }

            /// <summary>
            /// This is used as a function parameter when the underlying function receives `Function_Void` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `Function_Void`/`Const_Function_Void` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn&apos;t a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            /// </summary>
            public class _ByValue_Function_Void
            {
                #pragma warning disable CS0649
                internal readonly Const_Function_Void? Value;
                #pragma warning restore CS0649
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_Function_Void() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_Function_Void(Const_Function_Void new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_Function_Void(Const_Function_Void arg) {return new(arg);}
                public _ByValue_Function_Void(MR.CS.Misc._Moved<Function_Void> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_Function_Void(MR.CS.Misc._Moved<Function_Void> arg) {return new(arg);}

                public static unsafe implicit operator _ByValue_Function_Void(MR.CS.Std.Function_Void.Delegate func) {return new Function_Void(func);}}

            /// <summary>
            /// This is used for optional parameters of class `Function_Void` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Function_Void`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Function_Void`/`Const_Function_Void` directly.
            /// </summary>
            public class _InOptMut_Function_Void
            {
                public Function_Void? Opt;

                public _InOptMut_Function_Void() {}
                public _InOptMut_Function_Void(Function_Void value) {Opt = value;}
                public static implicit operator _InOptMut_Function_Void(Function_Void value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Function_Void` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Function_Void`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Function_Void`/`Const_Function_Void` to pass it to the function.
            /// </summary>
            public class _InOptConst_Function_Void
            {
                public Const_Function_Void? Opt;

                public _InOptConst_Function_Void() {}
                public _InOptConst_Function_Void(Const_Function_Void value) {Opt = value;}
                public static implicit operator _InOptConst_Function_Void(Const_Function_Void value) {return new(value);}

                public static unsafe implicit operator _InOptConst_Function_Void(MR.CS.Std.Function_Void.Delegate func) {return new Function_Void(func);}}
        }
    }
}
