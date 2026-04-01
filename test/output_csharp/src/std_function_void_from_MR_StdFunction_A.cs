public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// Stores a functor of type: `void(MR::StdFunction::A)`. Possibly stateful.
            /// This is the const half of the class.
            public class Const_Function_Void_From_MRStdFunctionA : MR.CS.Misc.Object<Const_Function_Void_From_MRStdFunctionA>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_void_from_MR_StdFunction_A_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_function_void_from_MR_StdFunction_A_Destroy(_Underlying *_this);
                    __MR_C_std_function_void_from_MR_StdFunction_A_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Function_Void_From_MRStdFunctionA() {Dispose(false);}

                internal unsafe Const_Function_Void_From_MRStdFunctionA(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_Function_Void_From_MRStdFunctionA() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_void_from_MR_StdFunction_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Function_Void_From_MRStdFunctionA._Underlying *__MR_C_std_function_void_from_MR_StdFunction_A_DefaultConstruct();
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_C_std_function_void_from_MR_StdFunction_A_DefaultConstruct();
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Const_Function_Void_From_MRStdFunctionA(MR.CS.Std._ByValue_Function_Void_From_MRStdFunctionA other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_void_from_MR_StdFunction_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Function_Void_From_MRStdFunctionA._Underlying *__MR_C_std_function_void_from_MR_StdFunction_A_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Function_Void_From_MRStdFunctionA._Underlying *other);
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_C_std_function_void_from_MR_StdFunction_A_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public Const_Function_Void_From_MRStdFunctionA(Const_Function_Void_From_MRStdFunctionA other) : this(new _ByValue_Function_Void_From_MRStdFunctionA(other)) {}

                /// Constructs a copy of another instance. The source remains alive.
                public Const_Function_Void_From_MRStdFunctionA(Function_Void_From_MRStdFunctionA other) : this((Const_Function_Void_From_MRStdFunctionA)other) {}

                /// Returns true if this instance stores a callable, as opposed to being null.
                public static unsafe implicit operator bool(MR.CS.Std.Const_Function_Void_From_MRStdFunctionA _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_void_from_MR_StdFunction_A_has_value", ExactSpelling = true)]
                    extern static byte __MR_C_std_function_void_from_MR_StdFunction_A_has_value(MR.CS.Std.Const_Function_Void_From_MRStdFunctionA._Underlying *_this);
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_std_function_void_from_MR_StdFunction_A_has_value(_this._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret != 0;
                }

                /// Calls the stored callable.
                public unsafe void Call(MR.CS.StdFunction._ByValue_A _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_void_from_MR_StdFunction_A_call", ExactSpelling = true)]
                    extern static void __MR_C_std_function_void_from_MR_StdFunction_A_call(_Underlying *_this, MR.CS.Misc._PassBy _1_pass_by, MR.CS.StdFunction.A._Underlying *_1);
                    MR.CS.Misc._Exceptions.Prepare();
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    __MR_C_std_function_void_from_MR_StdFunction_A_call(_UnderlyingPtr, _1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
                }

                // Custom extras:

                public delegate void Delegate(MR.CS.StdFunction.A _1);

                private protected unsafe delegate void _CDelegate(MR.CS.StdFunction.A._Underlying *_1, void *_userdata, void **_cleanup_value);

                private protected unsafe void _CCallWrapper(MR.CS.StdFunction.A._Underlying *_1, void *_userdata, void **_cleanup_value)
                {
                    try
                    {
                        MR.CS.StdFunction.A _arg_1;
                        _arg_1 = new(_1, is_owning: false);
                        ((Delegate)System.Runtime.InteropServices.GCHandle.FromIntPtr((nint)_userdata).Target!)(_arg_1);
                    }
                    catch (Exception __e)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_ThrowExceptionOnCallbackExit", ExactSpelling = true)]
                        extern static void __MR_C_ThrowExceptionOnCallbackExit(byte *message);
                        byte[] __ex_bytes = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(__e.Message.Length) + 1]; // Plus one byte for a null terminator.
                        int __ex_len = System.Text.Encoding.UTF8.GetBytes(__e.Message, 0, __e.Message.Length, __ex_bytes, 0);
                        __ex_bytes[__ex_len] = 0; // A null terminator.
                        fixed (byte *__ex_bytes_ptr = &__ex_bytes[0])
                        {
                            __MR_C_ThrowExceptionOnCallbackExit(__ex_bytes_ptr);
                        }
                    }
                }

                /// Construct from a delegate.
                public unsafe Const_Function_Void_From_MRStdFunctionA(Delegate func) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_void_from_MR_StdFunction_A_ConstructEx", ExactSpelling = true)]
                    extern static Const_Function_Void_From_MRStdFunctionA._Underlying *__MR_C_std_function_void_from_MR_StdFunction_A_ConstructEx(_CDelegate func, void *userdata, MR.CS.Misc.StdFunctionPostCallCallbackDelegate postcall_callback, MR.CS.Misc.StdFunctionUserdataCallbackDelegate userdata_callback);
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_C_std_function_void_from_MR_StdFunction_A_ConstructEx(_CCallWrapper, (void *)System.Runtime.InteropServices.GCHandle.ToIntPtr(System.Runtime.InteropServices.GCHandle.Alloc(func)), MR.CS.Misc.StdFunctionPostCallCallback, MR.CS.Misc.StdFunctionUserdataCallback);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                public static unsafe implicit operator Const_Function_Void_From_MRStdFunctionA(MR.CS.Std.Function_Void_From_MRStdFunctionA.Delegate func) {return new(func);}
            }

            /// Stores a functor of type: `void(MR::StdFunction::A)`. Possibly stateful.
            /// This is the non-const half of the class.
            public class Function_Void_From_MRStdFunctionA : Const_Function_Void_From_MRStdFunctionA
            {
                internal unsafe Function_Void_From_MRStdFunctionA(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Function_Void_From_MRStdFunctionA() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_void_from_MR_StdFunction_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Function_Void_From_MRStdFunctionA._Underlying *__MR_C_std_function_void_from_MR_StdFunction_A_DefaultConstruct();
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_C_std_function_void_from_MR_StdFunction_A_DefaultConstruct();
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Function_Void_From_MRStdFunctionA(MR.CS.Std._ByValue_Function_Void_From_MRStdFunctionA other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_void_from_MR_StdFunction_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Function_Void_From_MRStdFunctionA._Underlying *__MR_C_std_function_void_from_MR_StdFunction_A_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Function_Void_From_MRStdFunctionA._Underlying *other);
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_C_std_function_void_from_MR_StdFunction_A_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public Function_Void_From_MRStdFunctionA(Const_Function_Void_From_MRStdFunctionA other) : this(new _ByValue_Function_Void_From_MRStdFunctionA(other)) {}

                /// Constructs a copy of another instance. The source remains alive.
                public Function_Void_From_MRStdFunctionA(Function_Void_From_MRStdFunctionA other) : this((Const_Function_Void_From_MRStdFunctionA)other) {}

                /// Assigns the contents from another instance. Both objects remain alive after the call.
                public unsafe void Assign(MR.CS.Std._ByValue_Function_Void_From_MRStdFunctionA other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_void_from_MR_StdFunction_A_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_function_void_from_MR_StdFunction_A_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Function_Void_From_MRStdFunctionA._Underlying *other);
                    MR.CS.Misc._Exceptions.Prepare();
                    _DiscardKeepAlive();
                    if (other.Value is not null) _KeepAlive(other.Value);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    __MR_C_std_function_void_from_MR_StdFunction_A_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// Destroys the stored callable, making this instance null.
                public unsafe void Reset()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_void_from_MR_StdFunction_A_reset", ExactSpelling = true)]
                    extern static void __MR_C_std_function_void_from_MR_StdFunction_A_reset(_Underlying *_this);
                    MR.CS.Misc._Exceptions.Prepare();
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    __MR_C_std_function_void_from_MR_StdFunction_A_reset(_UnderlyingPtr);
                }

                // Custom extras:

                /// Construct from a delegate.
                public unsafe Function_Void_From_MRStdFunctionA(Delegate func) : base(func) {}

                /// Assign from a delegate.
                public unsafe void Assign(Delegate func)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_void_from_MR_StdFunction_A_AssignEx", ExactSpelling = true)]
                    extern static void __MR_C_std_function_void_from_MR_StdFunction_A_AssignEx(Function_Void_From_MRStdFunctionA._Underlying *_this, _CDelegate func, void *userdata, MR.CS.Misc.StdFunctionPostCallCallbackDelegate postcall_callback, MR.CS.Misc.StdFunctionUserdataCallbackDelegate userdata_callback);
                    MR.CS.Misc._Exceptions.Prepare();
                    __MR_C_std_function_void_from_MR_StdFunction_A_AssignEx(_UnderlyingPtr, _CCallWrapper, (void *)System.Runtime.InteropServices.GCHandle.ToIntPtr(System.Runtime.InteropServices.GCHandle.Alloc(func)), MR.CS.Misc.StdFunctionPostCallCallback, MR.CS.Misc.StdFunctionUserdataCallback);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }
            }

            /// This is used as a function parameter when the underlying function receives `Function_Void_From_MRStdFunctionA` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `Function_Void_From_MRStdFunctionA`/`Const_Function_Void_From_MRStdFunctionA` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            public class _ByValue_Function_Void_From_MRStdFunctionA
            {
                #pragma warning disable CS0649
                internal readonly Const_Function_Void_From_MRStdFunctionA? Value;
                #pragma warning restore CS0649
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_Function_Void_From_MRStdFunctionA() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_Function_Void_From_MRStdFunctionA(Const_Function_Void_From_MRStdFunctionA new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_Function_Void_From_MRStdFunctionA(Const_Function_Void_From_MRStdFunctionA arg) {return new(arg);}
                public _ByValue_Function_Void_From_MRStdFunctionA(MR.CS.Misc._Moved<Function_Void_From_MRStdFunctionA> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_Function_Void_From_MRStdFunctionA(MR.CS.Misc._Moved<Function_Void_From_MRStdFunctionA> arg) {return new(arg);}

                public static unsafe implicit operator _ByValue_Function_Void_From_MRStdFunctionA(MR.CS.Std.Function_Void_From_MRStdFunctionA.Delegate func) {return new Function_Void_From_MRStdFunctionA(func);}}

            /// This is used for optional parameters of class `Function_Void_From_MRStdFunctionA` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Function_Void_From_MRStdFunctionA`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Function_Void_From_MRStdFunctionA`/`Const_Function_Void_From_MRStdFunctionA` directly.
            public class _InOptMut_Function_Void_From_MRStdFunctionA
            {
                public Function_Void_From_MRStdFunctionA? Opt;

                public _InOptMut_Function_Void_From_MRStdFunctionA() {}
                public _InOptMut_Function_Void_From_MRStdFunctionA(Function_Void_From_MRStdFunctionA value) {Opt = value;}
                public static implicit operator _InOptMut_Function_Void_From_MRStdFunctionA(Function_Void_From_MRStdFunctionA value) {return new(value);}
            }

            /// This is used for optional parameters of class `Function_Void_From_MRStdFunctionA` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Function_Void_From_MRStdFunctionA`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Function_Void_From_MRStdFunctionA`/`Const_Function_Void_From_MRStdFunctionA` to pass it to the function.
            public class _InOptConst_Function_Void_From_MRStdFunctionA
            {
                public Const_Function_Void_From_MRStdFunctionA? Opt;

                public _InOptConst_Function_Void_From_MRStdFunctionA() {}
                public _InOptConst_Function_Void_From_MRStdFunctionA(Const_Function_Void_From_MRStdFunctionA value) {Opt = value;}
                public static implicit operator _InOptConst_Function_Void_From_MRStdFunctionA(Const_Function_Void_From_MRStdFunctionA value) {return new(value);}

                public static unsafe implicit operator _InOptConst_Function_Void_From_MRStdFunctionA(MR.CS.Std.Function_Void_From_MRStdFunctionA.Delegate func) {return new Function_Void_From_MRStdFunctionA(func);}}
        }
    }
}
