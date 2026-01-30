public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// Stores either a `MR::CSharp::SA` that represents success or a `float` that represents an error.
            /// This is the const half of the class.
            /// </summary>
            public class Const_Expected_MRCSharpSA_Float : MR.CS.Misc.Object<Const_Expected_MRCSharpSA_Float>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_expected_MR_CSharp_SA_float_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_expected_MR_CSharp_SA_float_Destroy(_Underlying *_this);
                    __MR_C_std_expected_MR_CSharp_SA_float_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Expected_MRCSharpSA_Float() {Dispose(false);}

                internal unsafe Const_Expected_MRCSharpSA_Float(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_Expected_MRCSharpSA_Float() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_expected_MR_CSharp_SA_float_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Expected_MRCSharpSA_Float._Underlying *__MR_C_std_expected_MR_CSharp_SA_float_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_expected_MR_CSharp_SA_float_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Const_Expected_MRCSharpSA_Float(MR.CS.Std.Const_Expected_MRCSharpSA_Float other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_expected_MR_CSharp_SA_float_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Expected_MRCSharpSA_Float._Underlying *__MR_C_std_expected_MR_CSharp_SA_float_ConstructFromAnother(MR.CS.Std.Expected_MRCSharpSA_Float._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_expected_MR_CSharp_SA_float_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Const_Expected_MRCSharpSA_Float(Expected_MRCSharpSA_Float other) : this((Const_Expected_MRCSharpSA_Float)other) {}

                /// <summary>
                /// Returns true if this instance represents success, or false if it represents an error.
                /// </summary>
                public static unsafe implicit operator bool(MR.CS.Std.Const_Expected_MRCSharpSA_Float _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_expected_MR_CSharp_SA_float_Success", ExactSpelling = true)]
                    extern static byte __MR_C_std_expected_MR_CSharp_SA_float_Success(MR.CS.Std.Const_Expected_MRCSharpSA_Float._Underlying *_this);
                    return __MR_C_std_expected_MR_CSharp_SA_float_Success(_this._UnderlyingPtr) != 0;
                }

                /// <summary>
                /// If this instance represents success, returns the stored `MR::CSharp::SA`. Otherwise null.
                /// </summary>
                public unsafe MR.CS.CSharp.Const_SA? getValue()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_expected_MR_CSharp_SA_float_GetValue", ExactSpelling = true)]
                    extern static MR.CS.CSharp.Const_SA._Underlying *__MR_C_std_expected_MR_CSharp_SA_float_GetValue(_Underlying *_this);
                    var __c_ret = __MR_C_std_expected_MR_CSharp_SA_float_GetValue(_UnderlyingPtr);
                    MR.CS.CSharp.Const_SA? __ret;
                    __ret = __c_ret is not null ? new MR.CS.CSharp.Const_SA(__c_ret, is_owning: false) : null;
                    if (__ret is not null) __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// If this instance represents an error, returns the stored `float`. Otherwise null.
                /// </summary>
                public unsafe float? getError()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_expected_MR_CSharp_SA_float_GetError", ExactSpelling = true)]
                    extern static float *__MR_C_std_expected_MR_CSharp_SA_float_GetError(_Underlying *_this);
                    var __c_ret = __MR_C_std_expected_MR_CSharp_SA_float_GetError(_UnderlyingPtr);
                    return __c_ret is not null ? *__c_ret : null;
                }
            }

            /// <summary>
            /// Stores either a `MR::CSharp::SA` that represents success or a `float` that represents an error.
            /// This is the non-const half of the class.
            /// </summary>
            public class Expected_MRCSharpSA_Float : Const_Expected_MRCSharpSA_Float
            {
                internal unsafe Expected_MRCSharpSA_Float(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Expected_MRCSharpSA_Float() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_expected_MR_CSharp_SA_float_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Expected_MRCSharpSA_Float._Underlying *__MR_C_std_expected_MR_CSharp_SA_float_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_expected_MR_CSharp_SA_float_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Expected_MRCSharpSA_Float(MR.CS.Std.Const_Expected_MRCSharpSA_Float other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_expected_MR_CSharp_SA_float_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Expected_MRCSharpSA_Float._Underlying *__MR_C_std_expected_MR_CSharp_SA_float_ConstructFromAnother(MR.CS.Std.Expected_MRCSharpSA_Float._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_expected_MR_CSharp_SA_float_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Expected_MRCSharpSA_Float(Expected_MRCSharpSA_Float other) : this((Const_Expected_MRCSharpSA_Float)other) {}

                /// <summary>
                /// Assigns the contents from another instance. Both objects remain alive after the call.
                /// </summary>
                public unsafe void assign(MR.CS.Std.Const_Expected_MRCSharpSA_Float other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_expected_MR_CSharp_SA_float_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_expected_MR_CSharp_SA_float_AssignFromAnother(_Underlying *_this, MR.CS.Std.Expected_MRCSharpSA_Float._Underlying *other);
                    _DiscardKeepAlive();
                    _KeepAlive(other);
                    __MR_C_std_expected_MR_CSharp_SA_float_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                }

                /// <summary>
                /// If this instance represents success, returns the stored `MR::CSharp::SA`. Otherwise null. This version returns a mutable pointer.
                /// </summary>
                public unsafe new MR.CS.CSharp.SA? getValue()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_expected_MR_CSharp_SA_float_GetMutableValue", ExactSpelling = true)]
                    extern static MR.CS.CSharp.SA._Underlying *__MR_C_std_expected_MR_CSharp_SA_float_GetMutableValue(_Underlying *_this);
                    var __c_ret = __MR_C_std_expected_MR_CSharp_SA_float_GetMutableValue(_UnderlyingPtr);
                    MR.CS.CSharp.SA? __ret;
                    __ret = __c_ret is not null ? new MR.CS.CSharp.SA(__c_ret, is_owning: false) : null;
                    if (__ret is not null) __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// If this instance represents an error, returns the stored `float`. Otherwise null. This version returns a mutable pointer.
                /// </summary>
                public unsafe new MR.CS.Misc.Ref<float>? getError()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_expected_MR_CSharp_SA_float_GetMutableError", ExactSpelling = true)]
                    extern static float *__MR_C_std_expected_MR_CSharp_SA_float_GetMutableError(_Underlying *_this);
                    var __c_ret = __MR_C_std_expected_MR_CSharp_SA_float_GetMutableError(_UnderlyingPtr);
                    return __c_ret is not null ? new MR.CS.Misc.Ref<float>(__c_ret) : null;
                }
            }

            /// <summary>
            /// This is used for optional parameters of class `Expected_MRCSharpSA_Float` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Expected_MRCSharpSA_Float`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Expected_MRCSharpSA_Float`/`Const_Expected_MRCSharpSA_Float` directly.
            /// </summary>
            public class _InOptMut_Expected_MRCSharpSA_Float
            {
                public Expected_MRCSharpSA_Float? Opt;

                public _InOptMut_Expected_MRCSharpSA_Float() {}
                public _InOptMut_Expected_MRCSharpSA_Float(Expected_MRCSharpSA_Float value) {Opt = value;}
                public static implicit operator _InOptMut_Expected_MRCSharpSA_Float(Expected_MRCSharpSA_Float value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Expected_MRCSharpSA_Float` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Expected_MRCSharpSA_Float`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Expected_MRCSharpSA_Float`/`Const_Expected_MRCSharpSA_Float` to pass it to the function.
            /// </summary>
            public class _InOptConst_Expected_MRCSharpSA_Float
            {
                public Const_Expected_MRCSharpSA_Float? Opt;

                public _InOptConst_Expected_MRCSharpSA_Float() {}
                public _InOptConst_Expected_MRCSharpSA_Float(Const_Expected_MRCSharpSA_Float value) {Opt = value;}
                public static implicit operator _InOptConst_Expected_MRCSharpSA_Float(Const_Expected_MRCSharpSA_Float value) {return new(value);}
            }
        }
    }
}
