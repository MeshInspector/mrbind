public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// Stores either a `MR::CSharp::ExposedLayout` that represents success or a `float` that represents an error.
            /// This is the const half of the class.
            public class Const_Expected_MRCSharpExposedLayout_Float : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_Expected_MRCSharpExposedLayout_Float(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_expected_MR_CSharp_ExposedLayout_float_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_expected_MR_CSharp_ExposedLayout_float_Destroy(_Underlying *_this);
                    __MR_C_std_expected_MR_CSharp_ExposedLayout_float_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Expected_MRCSharpExposedLayout_Float() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_Expected_MRCSharpExposedLayout_Float() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_expected_MR_CSharp_ExposedLayout_float_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Expected_MRCSharpExposedLayout_Float._Underlying *__MR_C_std_expected_MR_CSharp_ExposedLayout_float_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_expected_MR_CSharp_ExposedLayout_float_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Const_Expected_MRCSharpExposedLayout_Float(MR.CS.Std.Const_Expected_MRCSharpExposedLayout_Float other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_expected_MR_CSharp_ExposedLayout_float_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Expected_MRCSharpExposedLayout_Float._Underlying *__MR_C_std_expected_MR_CSharp_ExposedLayout_float_ConstructFromAnother(MR.CS.Std.Expected_MRCSharpExposedLayout_Float._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_expected_MR_CSharp_ExposedLayout_float_ConstructFromAnother(other._UnderlyingPtr);
                }

                /// Returns true if this instance represents success, or false if it represents an error.
                public static unsafe implicit operator bool(MR.CS.Std.Const_Expected_MRCSharpExposedLayout_Float _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_expected_MR_CSharp_ExposedLayout_float_Success", ExactSpelling = true)]
                    extern static byte __MR_C_std_expected_MR_CSharp_ExposedLayout_float_Success(MR.CS.Std.Const_Expected_MRCSharpExposedLayout_Float._Underlying *_this);
                    return __MR_C_std_expected_MR_CSharp_ExposedLayout_float_Success(_this._UnderlyingPtr) != 0;
                }

                /// If this instance represents success, returns the stored `MR::CSharp::ExposedLayout`. Otherwise null.
                public unsafe MR.CS.CSharp.Const_ExposedLayout? getValue()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_expected_MR_CSharp_ExposedLayout_float_GetValue", ExactSpelling = true)]
                    extern static MR.CS.CSharp.Const_ExposedLayout._Underlying *__MR_C_std_expected_MR_CSharp_ExposedLayout_float_GetValue(_Underlying *_this);
                    var __ret = __MR_C_std_expected_MR_CSharp_ExposedLayout_float_GetValue(_UnderlyingPtr);
                    return __ret is not null ? new MR.CS.CSharp.Const_ExposedLayout(__ret, is_owning: false) : null;
                }

                /// If this instance represents an error, returns the stored `float`. Otherwise null.
                public unsafe float? getError()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_expected_MR_CSharp_ExposedLayout_float_GetError", ExactSpelling = true)]
                    extern static float *__MR_C_std_expected_MR_CSharp_ExposedLayout_float_GetError(_Underlying *_this);
                    var __ret = __MR_C_std_expected_MR_CSharp_ExposedLayout_float_GetError(_UnderlyingPtr);
                    return __ret is not null ? *__ret : null;
                }
            }

            /// Stores either a `MR::CSharp::ExposedLayout` that represents success or a `float` that represents an error.
            /// This is the non-const half of the class.
            public class Expected_MRCSharpExposedLayout_Float : Const_Expected_MRCSharpExposedLayout_Float
            {
                internal unsafe Expected_MRCSharpExposedLayout_Float(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Expected_MRCSharpExposedLayout_Float() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_expected_MR_CSharp_ExposedLayout_float_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Expected_MRCSharpExposedLayout_Float._Underlying *__MR_C_std_expected_MR_CSharp_ExposedLayout_float_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_expected_MR_CSharp_ExposedLayout_float_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Expected_MRCSharpExposedLayout_Float(MR.CS.Std.Const_Expected_MRCSharpExposedLayout_Float other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_expected_MR_CSharp_ExposedLayout_float_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Expected_MRCSharpExposedLayout_Float._Underlying *__MR_C_std_expected_MR_CSharp_ExposedLayout_float_ConstructFromAnother(MR.CS.Std.Expected_MRCSharpExposedLayout_Float._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_expected_MR_CSharp_ExposedLayout_float_ConstructFromAnother(other._UnderlyingPtr);
                }

                /// Assigns the contents from another instance. Both objects remain alive after the call.
                public unsafe void assign(MR.CS.Std.Const_Expected_MRCSharpExposedLayout_Float other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_expected_MR_CSharp_ExposedLayout_float_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_expected_MR_CSharp_ExposedLayout_float_AssignFromAnother(_Underlying *_this, MR.CS.Std.Expected_MRCSharpExposedLayout_Float._Underlying *other);
                    __MR_C_std_expected_MR_CSharp_ExposedLayout_float_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                }

                /// If this instance represents success, returns the stored `MR::CSharp::ExposedLayout`. Otherwise null. This version returns a mutable pointer.
                public unsafe new MR.CS.CSharp.Mut_ExposedLayout? getValue()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_expected_MR_CSharp_ExposedLayout_float_GetMutableValue", ExactSpelling = true)]
                    extern static MR.CS.CSharp.Mut_ExposedLayout._Underlying *__MR_C_std_expected_MR_CSharp_ExposedLayout_float_GetMutableValue(_Underlying *_this);
                    var __ret = __MR_C_std_expected_MR_CSharp_ExposedLayout_float_GetMutableValue(_UnderlyingPtr);
                    return __ret is not null ? new MR.CS.CSharp.Mut_ExposedLayout(__ret, is_owning: false) : null;
                }

                /// If this instance represents an error, returns the stored `float`. Otherwise null. This version returns a mutable pointer.
                public unsafe new MR.CS.Misc.Ref<float>? getError()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_expected_MR_CSharp_ExposedLayout_float_GetMutableError", ExactSpelling = true)]
                    extern static float *__MR_C_std_expected_MR_CSharp_ExposedLayout_float_GetMutableError(_Underlying *_this);
                    var __ret = __MR_C_std_expected_MR_CSharp_ExposedLayout_float_GetMutableError(_UnderlyingPtr);
                    return __ret is not null ? new MR.CS.Misc.Ref<float>(__ret) : null;
                }
            }

            /// This is used for optional parameters of class `Expected_MRCSharpExposedLayout_Float` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Expected_MRCSharpExposedLayout_Float`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Expected_MRCSharpExposedLayout_Float`/`Const_Expected_MRCSharpExposedLayout_Float` directly.
            public class _InOptMut_Expected_MRCSharpExposedLayout_Float
            {
                public Expected_MRCSharpExposedLayout_Float? Opt;

                public _InOptMut_Expected_MRCSharpExposedLayout_Float() {}
                public _InOptMut_Expected_MRCSharpExposedLayout_Float(Expected_MRCSharpExposedLayout_Float value) {Opt = value;}
                public static implicit operator _InOptMut_Expected_MRCSharpExposedLayout_Float(Expected_MRCSharpExposedLayout_Float value) {return new(value);}
            }

            /// This is used for optional parameters of class `Expected_MRCSharpExposedLayout_Float` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Expected_MRCSharpExposedLayout_Float`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Expected_MRCSharpExposedLayout_Float`/`Const_Expected_MRCSharpExposedLayout_Float` to pass it to the function.
            public class _InOptConst_Expected_MRCSharpExposedLayout_Float
            {
                public Const_Expected_MRCSharpExposedLayout_Float? Opt;

                public _InOptConst_Expected_MRCSharpExposedLayout_Float() {}
                public _InOptConst_Expected_MRCSharpExposedLayout_Float(Const_Expected_MRCSharpExposedLayout_Float value) {Opt = value;}
                public static implicit operator _InOptConst_Expected_MRCSharpExposedLayout_Float(Const_Expected_MRCSharpExposedLayout_Float value) {return new(value);}
            }
        }
    }
}
