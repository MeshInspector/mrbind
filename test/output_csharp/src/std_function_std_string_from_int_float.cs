public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// Stores a functor of type: `std::string(int, float)`. Possibly stateful.
            /// This is the const half of the class.
            public class Const_Function_StdString_From_Int_Float : MR.CS.Misc.Object<Const_Function_StdString_From_Int_Float>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_std_string_from_int_float_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_function_std_string_from_int_float_Destroy(_Underlying *_this);
                    __MR_C_std_function_std_string_from_int_float_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Function_StdString_From_Int_Float() {Dispose(false);}

                internal unsafe Const_Function_StdString_From_Int_Float(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_Function_StdString_From_Int_Float() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_std_string_from_int_float_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Function_StdString_From_Int_Float._Underlying *__MR_C_std_function_std_string_from_int_float_DefaultConstruct();
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_C_std_function_std_string_from_int_float_DefaultConstruct();
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Const_Function_StdString_From_Int_Float(MR.CS.Std._ByValue_Function_StdString_From_Int_Float other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_std_string_from_int_float_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Function_StdString_From_Int_Float._Underlying *__MR_C_std_function_std_string_from_int_float_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Function_StdString_From_Int_Float._Underlying *other);
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_C_std_function_std_string_from_int_float_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public Const_Function_StdString_From_Int_Float(Const_Function_StdString_From_Int_Float other) : this(new _ByValue_Function_StdString_From_Int_Float(other)) {}

                /// Constructs a copy of another instance. The source remains alive.
                public Const_Function_StdString_From_Int_Float(Function_StdString_From_Int_Float other) : this((Const_Function_StdString_From_Int_Float)other) {}

                /// Returns true if this instance stores a callable, as opposed to being null.
                public static unsafe implicit operator bool(MR.CS.Std.Const_Function_StdString_From_Int_Float _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_std_string_from_int_float_has_value", ExactSpelling = true)]
                    extern static byte __MR_C_std_function_std_string_from_int_float_has_value(MR.CS.Std.Const_Function_StdString_From_Int_Float._Underlying *_this);
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_std_function_std_string_from_int_float_has_value(_this._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret != 0;
                }

                /// Calls the stored callable.
                public unsafe MR.CS.Std.String Call(int _1, float _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_std_string_from_int_float_call", ExactSpelling = true)]
                    extern static MR.CS.Std.String._Underlying *__MR_C_std_function_std_string_from_int_float_call(_Underlying *_this, int _1, float _2);
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_std_function_std_string_from_int_float_call(_UnderlyingPtr, _1, _2);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return new(__c_ret, is_owning: true);
                }

                // Custom extras:

                public delegate MR.CS.Std._ByValue_String Delegate(int _1, float _2);

                private protected unsafe delegate MR.CS.Std.String._Underlying *_CDelegate(MR.CS.Misc._PassBy *_ret_pass_by, int _1, float _2, void *_userdata, void **_cleanup_value);

                private protected unsafe MR.CS.Std.String._Underlying *_CCallWrapper(MR.CS.Misc._PassBy *_ret_pass_by, int _1, float _2, void *_userdata, void **_cleanup_value)
                {
                    try
                    {
                        int _arg_1;
                        _arg_1 = _1;
                        float _arg_2;
                        _arg_2 = _2;
                        MR.CS.Std._ByValue_String _ret = ((Delegate)System.Runtime.InteropServices.GCHandle.FromIntPtr((nint)_userdata).Target!)(_arg_1, _arg_2);
                        *_cleanup_value = (void *)System.Runtime.InteropServices.GCHandle.ToIntPtr(System.Runtime.InteropServices.GCHandle.Alloc(_ret));
                        *_ret_pass_by = _ret.PassByMode;
                        return _ret.Value is not null ? _ret.Value._UnderlyingPtr : null;
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
                        return default;
                    }
                }

                /// Construct from a delegate.
                public unsafe Const_Function_StdString_From_Int_Float(Delegate func) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_std_string_from_int_float_ConstructEx", ExactSpelling = true)]
                    extern static Const_Function_StdString_From_Int_Float._Underlying *__MR_C_std_function_std_string_from_int_float_ConstructEx(_CDelegate func, void *userdata, MR.CS.Misc.StdFunctionPostCallCallbackDelegate postcall_callback, MR.CS.Misc.StdFunctionUserdataCallbackDelegate userdata_callback);
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_C_std_function_std_string_from_int_float_ConstructEx(_CCallWrapper, (void *)System.Runtime.InteropServices.GCHandle.ToIntPtr(System.Runtime.InteropServices.GCHandle.Alloc(func)), MR.CS.Misc.StdFunctionPostCallCallback, MR.CS.Misc.StdFunctionUserdataCallback);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                public static unsafe implicit operator Const_Function_StdString_From_Int_Float(MR.CS.Std.Function_StdString_From_Int_Float.Delegate func) {return new(func);}
            }

            /// Stores a functor of type: `std::string(int, float)`. Possibly stateful.
            /// This is the non-const half of the class.
            public class Function_StdString_From_Int_Float : Const_Function_StdString_From_Int_Float
            {
                internal unsafe Function_StdString_From_Int_Float(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Function_StdString_From_Int_Float() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_std_string_from_int_float_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Function_StdString_From_Int_Float._Underlying *__MR_C_std_function_std_string_from_int_float_DefaultConstruct();
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_C_std_function_std_string_from_int_float_DefaultConstruct();
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Function_StdString_From_Int_Float(MR.CS.Std._ByValue_Function_StdString_From_Int_Float other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_std_string_from_int_float_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Function_StdString_From_Int_Float._Underlying *__MR_C_std_function_std_string_from_int_float_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Function_StdString_From_Int_Float._Underlying *other);
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_C_std_function_std_string_from_int_float_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public Function_StdString_From_Int_Float(Const_Function_StdString_From_Int_Float other) : this(new _ByValue_Function_StdString_From_Int_Float(other)) {}

                /// Constructs a copy of another instance. The source remains alive.
                public Function_StdString_From_Int_Float(Function_StdString_From_Int_Float other) : this((Const_Function_StdString_From_Int_Float)other) {}

                /// Assigns the contents from another instance. Both objects remain alive after the call.
                public unsafe void Assign(MR.CS.Std._ByValue_Function_StdString_From_Int_Float other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_std_string_from_int_float_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_function_std_string_from_int_float_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Function_StdString_From_Int_Float._Underlying *other);
                    MR.CS.Misc._Exceptions.Prepare();
                    _DiscardKeepAlive();
                    if (other.Value is not null) _KeepAlive(other.Value);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    __MR_C_std_function_std_string_from_int_float_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// Destroys the stored callable, making this instance null.
                public unsafe void Reset()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_std_string_from_int_float_reset", ExactSpelling = true)]
                    extern static void __MR_C_std_function_std_string_from_int_float_reset(_Underlying *_this);
                    MR.CS.Misc._Exceptions.Prepare();
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    __MR_C_std_function_std_string_from_int_float_reset(_UnderlyingPtr);
                }

                // Custom extras:

                /// Construct from a delegate.
                public unsafe Function_StdString_From_Int_Float(Delegate func) : base(func) {}

                /// Assign from a delegate.
                public unsafe void Assign(Delegate func)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_std_string_from_int_float_AssignEx", ExactSpelling = true)]
                    extern static void __MR_C_std_function_std_string_from_int_float_AssignEx(Function_StdString_From_Int_Float._Underlying *_this, _CDelegate func, void *userdata, MR.CS.Misc.StdFunctionPostCallCallbackDelegate postcall_callback, MR.CS.Misc.StdFunctionUserdataCallbackDelegate userdata_callback);
                    MR.CS.Misc._Exceptions.Prepare();
                    __MR_C_std_function_std_string_from_int_float_AssignEx(_UnderlyingPtr, _CCallWrapper, (void *)System.Runtime.InteropServices.GCHandle.ToIntPtr(System.Runtime.InteropServices.GCHandle.Alloc(func)), MR.CS.Misc.StdFunctionPostCallCallback, MR.CS.Misc.StdFunctionUserdataCallback);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }
            }

            /// This is used as a function parameter when the underlying function receives `Function_StdString_From_Int_Float` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `Function_StdString_From_Int_Float`/`Const_Function_StdString_From_Int_Float` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            public class _ByValue_Function_StdString_From_Int_Float
            {
                #pragma warning disable CS0649
                internal readonly Const_Function_StdString_From_Int_Float? Value;
                #pragma warning restore CS0649
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_Function_StdString_From_Int_Float() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_Function_StdString_From_Int_Float(Const_Function_StdString_From_Int_Float new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_Function_StdString_From_Int_Float(Const_Function_StdString_From_Int_Float arg) {return new(arg);}
                public _ByValue_Function_StdString_From_Int_Float(MR.CS.Misc._Moved<Function_StdString_From_Int_Float> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_Function_StdString_From_Int_Float(MR.CS.Misc._Moved<Function_StdString_From_Int_Float> arg) {return new(arg);}

                public static unsafe implicit operator _ByValue_Function_StdString_From_Int_Float(MR.CS.Std.Function_StdString_From_Int_Float.Delegate func) {return new Function_StdString_From_Int_Float(func);}}

            /// This is used for optional parameters of class `Function_StdString_From_Int_Float` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Function_StdString_From_Int_Float`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Function_StdString_From_Int_Float`/`Const_Function_StdString_From_Int_Float` directly.
            public class _InOptMut_Function_StdString_From_Int_Float
            {
                public Function_StdString_From_Int_Float? Opt;

                public _InOptMut_Function_StdString_From_Int_Float() {}
                public _InOptMut_Function_StdString_From_Int_Float(Function_StdString_From_Int_Float value) {Opt = value;}
                public static implicit operator _InOptMut_Function_StdString_From_Int_Float(Function_StdString_From_Int_Float value) {return new(value);}
            }

            /// This is used for optional parameters of class `Function_StdString_From_Int_Float` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Function_StdString_From_Int_Float`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Function_StdString_From_Int_Float`/`Const_Function_StdString_From_Int_Float` to pass it to the function.
            public class _InOptConst_Function_StdString_From_Int_Float
            {
                public Const_Function_StdString_From_Int_Float? Opt;

                public _InOptConst_Function_StdString_From_Int_Float() {}
                public _InOptConst_Function_StdString_From_Int_Float(Const_Function_StdString_From_Int_Float value) {Opt = value;}
                public static implicit operator _InOptConst_Function_StdString_From_Int_Float(Const_Function_StdString_From_Int_Float value) {return new(value);}

                public static unsafe implicit operator _InOptConst_Function_StdString_From_Int_Float(MR.CS.Std.Function_StdString_From_Int_Float.Delegate func) {return new Function_StdString_From_Int_Float(func);}}
        }
    }
}
