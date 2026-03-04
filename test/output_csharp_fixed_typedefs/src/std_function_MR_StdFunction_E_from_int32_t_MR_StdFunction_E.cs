public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// Stores a functor of type: `MR::StdFunction::E(int32_t, MR::StdFunction::E)`. Possibly stateful.
            /// This is the const half of the class.
            /// </summary>
            public class Const_Function_MRStdFunctionE_From_Int32T_MRStdFunctionE : MR.CS.Misc.Object<Const_Function_MRStdFunctionE_From_Int32T_MRStdFunctionE>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_Destroy(_Underlying *_this);
                    __MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Function_MRStdFunctionE_From_Int32T_MRStdFunctionE() {Dispose(false);}

                internal unsafe Const_Function_MRStdFunctionE_From_Int32T_MRStdFunctionE(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_Function_MRStdFunctionE_From_Int32T_MRStdFunctionE() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Function_MRStdFunctionE_From_Int32T_MRStdFunctionE._Underlying *__MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Const_Function_MRStdFunctionE_From_Int32T_MRStdFunctionE(MR.CS.Std._ByValue_Function_MRStdFunctionEFuncFromInt32TMRStdFunctionE other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Function_MRStdFunctionE_From_Int32T_MRStdFunctionE._Underlying *__MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Function_MRStdFunctionE_From_Int32T_MRStdFunctionE._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Const_Function_MRStdFunctionE_From_Int32T_MRStdFunctionE(Const_Function_MRStdFunctionE_From_Int32T_MRStdFunctionE other) : this(new _ByValue_Function_MRStdFunctionEFuncFromInt32TMRStdFunctionE(other)) {}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Const_Function_MRStdFunctionE_From_Int32T_MRStdFunctionE(Function_MRStdFunctionE_From_Int32T_MRStdFunctionE other) : this((Const_Function_MRStdFunctionE_From_Int32T_MRStdFunctionE)other) {}

                /// <summary>
                /// Returns true if this instance stores a callable, as opposed to being null.
                /// </summary>
                public static unsafe implicit operator bool(MR.CS.Std.Const_Function_MRStdFunctionE_From_Int32T_MRStdFunctionE _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_has_value", ExactSpelling = true)]
                    extern static byte __MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_has_value(MR.CS.Std.Const_Function_MRStdFunctionE_From_Int32T_MRStdFunctionE._Underlying *_this);
                    return __MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_has_value(_this._UnderlyingPtr) != 0;
                }

                /// <summary>
                /// Calls the stored callable.
                /// </summary>
                public unsafe MR.CS.StdFunction.E call(int _1, MR.CS.StdFunction.E _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_call", ExactSpelling = true)]
                    extern static MR.CS.StdFunction.E __MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_call(_Underlying *_this, int _1, MR.CS.StdFunction.E _2);
                    return __MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_call(_UnderlyingPtr, _1, _2);
                }

                // Custom extras:

                public delegate MR.CS.StdFunction.E Delegate(int _1, MR.CS.StdFunction.E _2);

                private protected unsafe delegate MR.CS.StdFunction.E _CDelegate(int _1, MR.CS.StdFunction.E _2, void *_userdata, void **_cleanup_value);

                private protected unsafe MR.CS.StdFunction.E _CCallWrapper(int _1, MR.CS.StdFunction.E _2, void *_userdata, void **_cleanup_value)
                {
                    int _arg_1;
                    _arg_1 = _1;
                    MR.CS.StdFunction.E _arg_2;
                    _arg_2 = _2;
                    MR.CS.StdFunction.E _ret = ((Delegate)System.Runtime.InteropServices.GCHandle.FromIntPtr((nint)_userdata).Target!)(_arg_1, _arg_2);
                    return _ret;
                }

                /// <summary>
                /// Construct from a delegate.
                /// </summary>
                public unsafe Const_Function_MRStdFunctionE_From_Int32T_MRStdFunctionE(Delegate func) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_ConstructEx", ExactSpelling = true)]
                    extern static Const_Function_MRStdFunctionE_From_Int32T_MRStdFunctionE._Underlying *__MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_ConstructEx(_CDelegate func, void *userdata, MR.CS.Misc.StdFunctionPostCallCallbackDelegate postcall_callback, MR.CS.Misc.StdFunctionUserdataCallbackDelegate userdata_callback);
                    _UnderlyingPtr = __MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_ConstructEx(_CCallWrapper, (void *)System.Runtime.InteropServices.GCHandle.ToIntPtr(System.Runtime.InteropServices.GCHandle.Alloc(func)), MR.CS.Misc.StdFunctionPostCallCallback, MR.CS.Misc.StdFunctionUserdataCallback);
                }
            }

            /// <summary>
            /// Stores a functor of type: `MR::StdFunction::E(int32_t, MR::StdFunction::E)`. Possibly stateful.
            /// This is the non-const half of the class.
            /// </summary>
            public class Function_MRStdFunctionE_From_Int32T_MRStdFunctionE : Const_Function_MRStdFunctionE_From_Int32T_MRStdFunctionE
            {
                internal unsafe Function_MRStdFunctionE_From_Int32T_MRStdFunctionE(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Function_MRStdFunctionE_From_Int32T_MRStdFunctionE() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Function_MRStdFunctionE_From_Int32T_MRStdFunctionE._Underlying *__MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Function_MRStdFunctionE_From_Int32T_MRStdFunctionE(MR.CS.Std._ByValue_Function_MRStdFunctionEFuncFromInt32TMRStdFunctionE other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Function_MRStdFunctionE_From_Int32T_MRStdFunctionE._Underlying *__MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Function_MRStdFunctionE_From_Int32T_MRStdFunctionE._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Function_MRStdFunctionE_From_Int32T_MRStdFunctionE(Const_Function_MRStdFunctionE_From_Int32T_MRStdFunctionE other) : this(new _ByValue_Function_MRStdFunctionEFuncFromInt32TMRStdFunctionE(other)) {}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Function_MRStdFunctionE_From_Int32T_MRStdFunctionE(Function_MRStdFunctionE_From_Int32T_MRStdFunctionE other) : this((Const_Function_MRStdFunctionE_From_Int32T_MRStdFunctionE)other) {}

                /// <summary>
                /// Assigns the contents from another instance. Both objects remain alive after the call.
                /// </summary>
                public unsafe void assign(MR.CS.Std._ByValue_Function_MRStdFunctionEFuncFromInt32TMRStdFunctionE other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Function_MRStdFunctionE_From_Int32T_MRStdFunctionE._Underlying *other);
                    _DiscardKeepAlive();
                    if (other.Value is not null) _KeepAlive(other.Value);
                    __MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Destroys the stored callable, making this instance null.
                /// </summary>
                public unsafe void reset()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_reset", ExactSpelling = true)]
                    extern static void __MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_reset(_Underlying *_this);
                    __MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_reset(_UnderlyingPtr);
                }

                // Custom extras:

                /// <summary>
                /// Construct from a delegate.
                /// </summary>
                public unsafe Function_MRStdFunctionE_From_Int32T_MRStdFunctionE(Delegate func) : base(func) {}

                /// <summary>
                /// Assign from a delegate.
                /// </summary>
                public unsafe void assign(Delegate func)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_AssignEx", ExactSpelling = true)]
                    extern static void __MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_AssignEx(Function_MRStdFunctionE_From_Int32T_MRStdFunctionE._Underlying *_this, _CDelegate func, void *userdata, MR.CS.Misc.StdFunctionPostCallCallbackDelegate postcall_callback, MR.CS.Misc.StdFunctionUserdataCallbackDelegate userdata_callback);
                    __MR_C_std_function_MR_StdFunction_E_from_int32_t_MR_StdFunction_E_AssignEx(_UnderlyingPtr, _CCallWrapper, (void *)System.Runtime.InteropServices.GCHandle.ToIntPtr(System.Runtime.InteropServices.GCHandle.Alloc(func)), MR.CS.Misc.StdFunctionPostCallCallback, MR.CS.Misc.StdFunctionUserdataCallback);
                }
            }

            /// <summary>
            /// This is used as a function parameter when the underlying function receives `Function_MRStdFunctionE_From_Int32T_MRStdFunctionE` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `Function_MRStdFunctionE_From_Int32T_MRStdFunctionE`/`Const_Function_MRStdFunctionE_From_Int32T_MRStdFunctionE` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn&apos;t a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            /// </summary>
            public class _ByValue_Function_MRStdFunctionEFuncFromInt32TMRStdFunctionE
            {
                #pragma warning disable CS0649
                internal readonly Const_Function_MRStdFunctionE_From_Int32T_MRStdFunctionE? Value;
                #pragma warning restore CS0649
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_Function_MRStdFunctionEFuncFromInt32TMRStdFunctionE() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_Function_MRStdFunctionEFuncFromInt32TMRStdFunctionE(Const_Function_MRStdFunctionE_From_Int32T_MRStdFunctionE new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_Function_MRStdFunctionEFuncFromInt32TMRStdFunctionE(Const_Function_MRStdFunctionE_From_Int32T_MRStdFunctionE arg) {return new(arg);}
                public _ByValue_Function_MRStdFunctionEFuncFromInt32TMRStdFunctionE(MR.CS.Misc._Moved<Function_MRStdFunctionE_From_Int32T_MRStdFunctionE> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_Function_MRStdFunctionEFuncFromInt32TMRStdFunctionE(MR.CS.Misc._Moved<Function_MRStdFunctionE_From_Int32T_MRStdFunctionE> arg) {return new(arg);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Function_MRStdFunctionE_From_Int32T_MRStdFunctionE` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Function_MRStdFunctionEFuncFromInt32TMRStdFunctionE`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Function_MRStdFunctionE_From_Int32T_MRStdFunctionE`/`Const_Function_MRStdFunctionE_From_Int32T_MRStdFunctionE` directly.
            /// </summary>
            public class _InOptMut_Function_MRStdFunctionEFuncFromInt32TMRStdFunctionE
            {
                public Function_MRStdFunctionE_From_Int32T_MRStdFunctionE? Opt;

                public _InOptMut_Function_MRStdFunctionEFuncFromInt32TMRStdFunctionE() {}
                public _InOptMut_Function_MRStdFunctionEFuncFromInt32TMRStdFunctionE(Function_MRStdFunctionE_From_Int32T_MRStdFunctionE value) {Opt = value;}
                public static implicit operator _InOptMut_Function_MRStdFunctionEFuncFromInt32TMRStdFunctionE(Function_MRStdFunctionE_From_Int32T_MRStdFunctionE value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Function_MRStdFunctionE_From_Int32T_MRStdFunctionE` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Function_MRStdFunctionEFuncFromInt32TMRStdFunctionE`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Function_MRStdFunctionE_From_Int32T_MRStdFunctionE`/`Const_Function_MRStdFunctionE_From_Int32T_MRStdFunctionE` to pass it to the function.
            /// </summary>
            public class _InOptConst_Function_MRStdFunctionEFuncFromInt32TMRStdFunctionE
            {
                public Const_Function_MRStdFunctionE_From_Int32T_MRStdFunctionE? Opt;

                public _InOptConst_Function_MRStdFunctionEFuncFromInt32TMRStdFunctionE() {}
                public _InOptConst_Function_MRStdFunctionEFuncFromInt32TMRStdFunctionE(Const_Function_MRStdFunctionE_From_Int32T_MRStdFunctionE value) {Opt = value;}
                public static implicit operator _InOptConst_Function_MRStdFunctionEFuncFromInt32TMRStdFunctionE(Const_Function_MRStdFunctionE_From_Int32T_MRStdFunctionE value) {return new(value);}
            }
        }
    }
}
