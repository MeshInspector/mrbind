public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// Stores either a `MR::CSharp::Trivial` that represents success or a `float` that represents an error.
            /// This is the const half of the class.
            public class Const_Expected_MRCSharpTrivial_Float : MR.CS.Misc.Object<Const_Expected_MRCSharpTrivial_Float>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_expected_MR_CSharp_Trivial_float_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_expected_MR_CSharp_Trivial_float_Destroy(_Underlying *_this);
                    __MR_C_std_expected_MR_CSharp_Trivial_float_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Expected_MRCSharpTrivial_Float() {Dispose(false);}

                internal unsafe Const_Expected_MRCSharpTrivial_Float(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_Expected_MRCSharpTrivial_Float() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_expected_MR_CSharp_Trivial_float_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Expected_MRCSharpTrivial_Float._Underlying *__MR_C_std_expected_MR_CSharp_Trivial_float_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_expected_MR_CSharp_Trivial_float_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Const_Expected_MRCSharpTrivial_Float(MR.CS.Std.Const_Expected_MRCSharpTrivial_Float other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_expected_MR_CSharp_Trivial_float_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Expected_MRCSharpTrivial_Float._Underlying *__MR_C_std_expected_MR_CSharp_Trivial_float_ConstructFromAnother(MR.CS.Std.Expected_MRCSharpTrivial_Float._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_expected_MR_CSharp_Trivial_float_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// Constructs a copy of another instance. The source remains alive.
                public Const_Expected_MRCSharpTrivial_Float(Expected_MRCSharpTrivial_Float other) : this((Const_Expected_MRCSharpTrivial_Float)other) {}

                /// Returns true if this instance represents success, or false if it represents an error.
                public static unsafe implicit operator bool(MR.CS.Std.Const_Expected_MRCSharpTrivial_Float _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_expected_MR_CSharp_Trivial_float_success", ExactSpelling = true)]
                    extern static byte __MR_C_std_expected_MR_CSharp_Trivial_float_success(MR.CS.Std.Const_Expected_MRCSharpTrivial_Float._Underlying *_this);
                    return __MR_C_std_expected_MR_CSharp_Trivial_float_success(_this._UnderlyingPtr) != 0;
                }

                /// If this instance represents success, returns the stored `MR::CSharp::Trivial`. Otherwise null.
                public unsafe MR.CS.CSharp.Const_Trivial? Value()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_expected_MR_CSharp_Trivial_float_value", ExactSpelling = true)]
                    extern static MR.CS.CSharp.Const_Trivial._Underlying *__MR_C_std_expected_MR_CSharp_Trivial_float_value(_Underlying *_this);
                    var __c_ret = __MR_C_std_expected_MR_CSharp_Trivial_float_value(_UnderlyingPtr);
                    MR.CS.CSharp.Const_Trivial? __ret;
                    __ret = __c_ret is not null ? new MR.CS.CSharp.Const_Trivial(__c_ret, is_owning: false) : null;
                    if (__ret is not null) __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// If this instance represents an error, returns the stored `float`. Otherwise null.
                public unsafe float? Error()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_expected_MR_CSharp_Trivial_float_error", ExactSpelling = true)]
                    extern static float *__MR_C_std_expected_MR_CSharp_Trivial_float_error(_Underlying *_this);
                    var __c_ret = __MR_C_std_expected_MR_CSharp_Trivial_float_error(_UnderlyingPtr);
                    return __c_ret is not null ? *__c_ret : null;
                }
            }

            /// Stores either a `MR::CSharp::Trivial` that represents success or a `float` that represents an error.
            /// This is the non-const half of the class.
            public class Expected_MRCSharpTrivial_Float : Const_Expected_MRCSharpTrivial_Float
            {
                internal unsafe Expected_MRCSharpTrivial_Float(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Expected_MRCSharpTrivial_Float() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_expected_MR_CSharp_Trivial_float_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Expected_MRCSharpTrivial_Float._Underlying *__MR_C_std_expected_MR_CSharp_Trivial_float_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_expected_MR_CSharp_Trivial_float_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Expected_MRCSharpTrivial_Float(MR.CS.Std.Const_Expected_MRCSharpTrivial_Float other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_expected_MR_CSharp_Trivial_float_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Expected_MRCSharpTrivial_Float._Underlying *__MR_C_std_expected_MR_CSharp_Trivial_float_ConstructFromAnother(MR.CS.Std.Expected_MRCSharpTrivial_Float._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_expected_MR_CSharp_Trivial_float_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// Constructs a copy of another instance. The source remains alive.
                public Expected_MRCSharpTrivial_Float(Expected_MRCSharpTrivial_Float other) : this((Const_Expected_MRCSharpTrivial_Float)other) {}

                /// Assigns the contents from another instance. Both objects remain alive after the call.
                public unsafe void Assign(MR.CS.Std.Const_Expected_MRCSharpTrivial_Float other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_expected_MR_CSharp_Trivial_float_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_expected_MR_CSharp_Trivial_float_AssignFromAnother(_Underlying *_this, MR.CS.Std.Expected_MRCSharpTrivial_Float._Underlying *other);
                    _DiscardKeepAlive();
                    _KeepAlive(other);
                    __MR_C_std_expected_MR_CSharp_Trivial_float_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                }

                /// If this instance represents success, returns the stored `MR::CSharp::Trivial`. Otherwise null. This version returns a mutable pointer.
                public unsafe new MR.CS.CSharp.Trivial? Value()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_expected_MR_CSharp_Trivial_float_value_mut", ExactSpelling = true)]
                    extern static MR.CS.CSharp.Trivial._Underlying *__MR_C_std_expected_MR_CSharp_Trivial_float_value_mut(_Underlying *_this);
                    var __c_ret = __MR_C_std_expected_MR_CSharp_Trivial_float_value_mut(_UnderlyingPtr);
                    MR.CS.CSharp.Trivial? __ret;
                    __ret = __c_ret is not null ? new MR.CS.CSharp.Trivial(__c_ret, is_owning: false) : null;
                    if (__ret is not null) __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// If this instance represents an error, returns the stored `float`. Otherwise null. This version returns a mutable pointer.
                public unsafe new MR.CS.Misc.Ref<float>? Error()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_expected_MR_CSharp_Trivial_float_error_mut", ExactSpelling = true)]
                    extern static float *__MR_C_std_expected_MR_CSharp_Trivial_float_error_mut(_Underlying *_this);
                    var __c_ret = __MR_C_std_expected_MR_CSharp_Trivial_float_error_mut(_UnderlyingPtr);
                    return __c_ret is not null ? new MR.CS.Misc.Ref<float>(__c_ret) : null;
                }
            }

            /// This is used for optional parameters of class `Expected_MRCSharpTrivial_Float` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Expected_MRCSharpTrivial_Float`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Expected_MRCSharpTrivial_Float`/`Const_Expected_MRCSharpTrivial_Float` directly.
            public class _InOptMut_Expected_MRCSharpTrivial_Float
            {
                public Expected_MRCSharpTrivial_Float? Opt;

                public _InOptMut_Expected_MRCSharpTrivial_Float() {}
                public _InOptMut_Expected_MRCSharpTrivial_Float(Expected_MRCSharpTrivial_Float value) {Opt = value;}
                public static implicit operator _InOptMut_Expected_MRCSharpTrivial_Float(Expected_MRCSharpTrivial_Float value) {return new(value);}
            }

            /// This is used for optional parameters of class `Expected_MRCSharpTrivial_Float` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Expected_MRCSharpTrivial_Float`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Expected_MRCSharpTrivial_Float`/`Const_Expected_MRCSharpTrivial_Float` to pass it to the function.
            public class _InOptConst_Expected_MRCSharpTrivial_Float
            {
                public Const_Expected_MRCSharpTrivial_Float? Opt;

                public _InOptConst_Expected_MRCSharpTrivial_Float() {}
                public _InOptConst_Expected_MRCSharpTrivial_Float(Const_Expected_MRCSharpTrivial_Float value) {Opt = value;}
                public static implicit operator _InOptConst_Expected_MRCSharpTrivial_Float(Const_Expected_MRCSharpTrivial_Float value) {return new(value);}
            }
        }
    }
}
