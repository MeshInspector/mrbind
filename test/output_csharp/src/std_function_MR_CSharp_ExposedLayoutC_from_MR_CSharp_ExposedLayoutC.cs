public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// Stores a functor of type: `MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)`. Possibly stateful.
            /// This is the const half of the class.
            public class Const_Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC : MR.CS.Misc.Object<Const_Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_Destroy(_Underlying *_this);
                    __MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC() {Dispose(false);}

                internal unsafe Const_Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC._Underlying *__MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Const_Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC(MR.CS.Std._ByValue_Function_MRCSharpExposedLayoutCFuncFromMRCSharpExposedLayoutC other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC._Underlying *__MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// Constructs a copy of another instance. The source remains alive.
                public Const_Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC(Const_Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC other) : this(new _ByValue_Function_MRCSharpExposedLayoutCFuncFromMRCSharpExposedLayoutC(other)) {}

                /// Constructs a copy of another instance. The source remains alive.
                public Const_Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC(Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC other) : this((Const_Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC)other) {}

                /// Returns true if this instance stores a callable, as opposed to being null.
                public static unsafe implicit operator bool(MR.CS.Std.Const_Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_has_value", ExactSpelling = true)]
                    extern static byte __MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_has_value(MR.CS.Std.Const_Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC._Underlying *_this);
                    return __MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_has_value(_this._UnderlyingPtr) != 0;
                }

                /// Calls the stored callable.
                public unsafe MR.CS.CSharp.ExposedLayoutC Call(MR.CS.CSharp.ExposedLayoutC _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_call", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ExposedLayoutC __MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_call(_Underlying *_this, MR.CS.CSharp.ExposedLayoutC _1);
                    return __MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_call(_UnderlyingPtr, _1);
                }

                // Custom extras:

                public delegate MR.CS.CSharp.ExposedLayoutC Delegate(ref readonly MR.CS.CSharp.ExposedLayoutC _1);

                private protected unsafe delegate MR.CS.CSharp.ExposedLayoutC _CDelegate(MR.CS.CSharp.ExposedLayoutC *_1, void *_userdata, void **_cleanup_value);

                private protected unsafe MR.CS.CSharp.ExposedLayoutC _CCallWrapper(MR.CS.CSharp.ExposedLayoutC *_1, void *_userdata, void **_cleanup_value)
                {
                    ref readonly MR.CS.CSharp.ExposedLayoutC _arg_1 = ref *(MR.CS.CSharp.ExposedLayoutC *)sizeof(MR.CS.CSharp.ExposedLayoutC); // Uninitialized ref.
                    _arg_1 = ref *_1;
                    MR.CS.CSharp.ExposedLayoutC _ret = ((Delegate)System.Runtime.InteropServices.GCHandle.FromIntPtr((nint)_userdata).Target!)(in _arg_1);
                    return _ret;
                }

                /// Construct from a delegate.
                public unsafe Const_Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC(Delegate func) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_ConstructEx", ExactSpelling = true)]
                    extern static Const_Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC._Underlying *__MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_ConstructEx(_CDelegate func, void *userdata, MR.CS.Misc.StdFunctionPostCallCallbackDelegate postcall_callback, MR.CS.Misc.StdFunctionUserdataCallbackDelegate userdata_callback);
                    _UnderlyingPtr = __MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_ConstructEx(_CCallWrapper, (void *)System.Runtime.InteropServices.GCHandle.ToIntPtr(System.Runtime.InteropServices.GCHandle.Alloc(func)), MR.CS.Misc.StdFunctionPostCallCallback, MR.CS.Misc.StdFunctionUserdataCallback);
                }

                public static unsafe implicit operator Const_Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC(MR.CS.Std.Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC.Delegate func) {return new(func);}}

            /// Stores a functor of type: `MR::CSharp::ExposedLayoutC(MR::CSharp::ExposedLayoutC)`. Possibly stateful.
            /// This is the non-const half of the class.
            public class Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC : Const_Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC
            {
                internal unsafe Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC._Underlying *__MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC(MR.CS.Std._ByValue_Function_MRCSharpExposedLayoutCFuncFromMRCSharpExposedLayoutC other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC._Underlying *__MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// Constructs a copy of another instance. The source remains alive.
                public Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC(Const_Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC other) : this(new _ByValue_Function_MRCSharpExposedLayoutCFuncFromMRCSharpExposedLayoutC(other)) {}

                /// Constructs a copy of another instance. The source remains alive.
                public Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC(Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC other) : this((Const_Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC)other) {}

                /// Assigns the contents from another instance. Both objects remain alive after the call.
                public unsafe void Assign(MR.CS.Std._ByValue_Function_MRCSharpExposedLayoutCFuncFromMRCSharpExposedLayoutC other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC._Underlying *other);
                    _DiscardKeepAlive();
                    if (other.Value is not null) _KeepAlive(other.Value);
                    __MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// Destroys the stored callable, making this instance null.
                public unsafe void Reset()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_reset", ExactSpelling = true)]
                    extern static void __MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_reset(_Underlying *_this);
                    __MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_reset(_UnderlyingPtr);
                }

                // Custom extras:

                /// Construct from a delegate.
                public unsafe Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC(Delegate func) : base(func) {}

                /// Assign from a delegate.
                public unsafe void Assign(Delegate func)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_AssignEx", ExactSpelling = true)]
                    extern static void __MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_AssignEx(Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC._Underlying *_this, _CDelegate func, void *userdata, MR.CS.Misc.StdFunctionPostCallCallbackDelegate postcall_callback, MR.CS.Misc.StdFunctionUserdataCallbackDelegate userdata_callback);
                    __MR_C_std_function_MR_CSharp_ExposedLayoutC_from_MR_CSharp_ExposedLayoutC_AssignEx(_UnderlyingPtr, _CCallWrapper, (void *)System.Runtime.InteropServices.GCHandle.ToIntPtr(System.Runtime.InteropServices.GCHandle.Alloc(func)), MR.CS.Misc.StdFunctionPostCallCallback, MR.CS.Misc.StdFunctionUserdataCallback);
                }
            }

            /// This is used as a function parameter when the underlying function receives `Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC`/`Const_Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            public class _ByValue_Function_MRCSharpExposedLayoutCFuncFromMRCSharpExposedLayoutC
            {
                #pragma warning disable CS0649
                internal readonly Const_Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC? Value;
                #pragma warning restore CS0649
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_Function_MRCSharpExposedLayoutCFuncFromMRCSharpExposedLayoutC() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_Function_MRCSharpExposedLayoutCFuncFromMRCSharpExposedLayoutC(Const_Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_Function_MRCSharpExposedLayoutCFuncFromMRCSharpExposedLayoutC(Const_Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC arg) {return new(arg);}
                public _ByValue_Function_MRCSharpExposedLayoutCFuncFromMRCSharpExposedLayoutC(MR.CS.Misc._Moved<Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_Function_MRCSharpExposedLayoutCFuncFromMRCSharpExposedLayoutC(MR.CS.Misc._Moved<Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC> arg) {return new(arg);}

                public static unsafe implicit operator _ByValue_Function_MRCSharpExposedLayoutCFuncFromMRCSharpExposedLayoutC(MR.CS.Std.Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC.Delegate func) {return new Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC(func);}}

            /// This is used for optional parameters of class `Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Function_MRCSharpExposedLayoutCFuncFromMRCSharpExposedLayoutC`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC`/`Const_Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC` directly.
            public class _InOptMut_Function_MRCSharpExposedLayoutCFuncFromMRCSharpExposedLayoutC
            {
                public Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC? Opt;

                public _InOptMut_Function_MRCSharpExposedLayoutCFuncFromMRCSharpExposedLayoutC() {}
                public _InOptMut_Function_MRCSharpExposedLayoutCFuncFromMRCSharpExposedLayoutC(Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC value) {Opt = value;}
                public static implicit operator _InOptMut_Function_MRCSharpExposedLayoutCFuncFromMRCSharpExposedLayoutC(Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC value) {return new(value);}
            }

            /// This is used for optional parameters of class `Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Function_MRCSharpExposedLayoutCFuncFromMRCSharpExposedLayoutC`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC`/`Const_Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC` to pass it to the function.
            public class _InOptConst_Function_MRCSharpExposedLayoutCFuncFromMRCSharpExposedLayoutC
            {
                public Const_Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC? Opt;

                public _InOptConst_Function_MRCSharpExposedLayoutCFuncFromMRCSharpExposedLayoutC() {}
                public _InOptConst_Function_MRCSharpExposedLayoutCFuncFromMRCSharpExposedLayoutC(Const_Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC value) {Opt = value;}
                public static implicit operator _InOptConst_Function_MRCSharpExposedLayoutCFuncFromMRCSharpExposedLayoutC(Const_Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC value) {return new(value);}

                public static unsafe implicit operator _InOptConst_Function_MRCSharpExposedLayoutCFuncFromMRCSharpExposedLayoutC(MR.CS.Std.Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC.Delegate func) {return new Function_MRCSharpExposedLayoutC_From_MRCSharpExposedLayoutC(func);}}
        }
    }
}
