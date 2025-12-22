public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// Stores either a `int` that represents success or a `std::string` that represents an error.
            /// This is the const half of the class.
            public class Const_Expected_Int_StdString : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_Expected_Int_StdString(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_expected_int_std_string_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_expected_int_std_string_Destroy(_Underlying *_this);
                    __MR_C_std_expected_int_std_string_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Expected_Int_StdString() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_Expected_Int_StdString() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_expected_int_std_string_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Expected_Int_StdString._Underlying *__MR_C_std_expected_int_std_string_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_expected_int_std_string_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Const_Expected_Int_StdString(MR.CS.Std._ByValue_Expected_Int_StdString other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_expected_int_std_string_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Expected_Int_StdString._Underlying *__MR_C_std_expected_int_std_string_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Expected_Int_StdString._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_expected_int_std_string_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// Returns true if this instance represents success, or false if it represents an error.
                public static unsafe implicit operator bool(MR.CS.Std.Const_Expected_Int_StdString _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_expected_int_std_string_Success", ExactSpelling = true)]
                    extern static byte __MR_C_std_expected_int_std_string_Success(MR.CS.Std.Const_Expected_Int_StdString._Underlying *_this);
                    return __MR_C_std_expected_int_std_string_Success(_this._UnderlyingPtr) != 0;
                }

                /// If this instance represents success, returns the stored `int`. Otherwise null.
                public unsafe int? GetValue()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_expected_int_std_string_GetValue", ExactSpelling = true)]
                    extern static int *__MR_C_std_expected_int_std_string_GetValue(_Underlying *_this);
                    var __ret = __MR_C_std_expected_int_std_string_GetValue(_UnderlyingPtr);
                    return __ret is not null ? *__ret : null;
                }

                /// If this instance represents an error, returns the stored `std::string`. Otherwise null.
                public unsafe MR.CS.Std.Const_String? GetError()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_expected_int_std_string_GetError", ExactSpelling = true)]
                    extern static MR.CS.Std.Const_String._Underlying *__MR_C_std_expected_int_std_string_GetError(_Underlying *_this);
                    var __ret = __MR_C_std_expected_int_std_string_GetError(_UnderlyingPtr);
                    return __ret is not null ? new MR.CS.Std.Const_String(__ret, is_owning: false) : null;
                }
            }

            /// Stores either a `int` that represents success or a `std::string` that represents an error.
            /// This is the non-const half of the class.
            public class Expected_Int_StdString : Const_Expected_Int_StdString
            {
                internal unsafe Expected_Int_StdString(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Expected_Int_StdString() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_expected_int_std_string_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Expected_Int_StdString._Underlying *__MR_C_std_expected_int_std_string_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_expected_int_std_string_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Expected_Int_StdString(MR.CS.Std._ByValue_Expected_Int_StdString other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_expected_int_std_string_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Expected_Int_StdString._Underlying *__MR_C_std_expected_int_std_string_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Expected_Int_StdString._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_expected_int_std_string_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// Assigns the contents from another instance. Both objects remain alive after the call.
                public unsafe void Assign(MR.CS.Std._ByValue_Expected_Int_StdString other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_expected_int_std_string_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_expected_int_std_string_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Expected_Int_StdString._Underlying *other);
                    __MR_C_std_expected_int_std_string_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// If this instance represents success, returns the stored `int`. Otherwise null. This version returns a mutable pointer.
                public unsafe new MR.CS.Misc.Ref<int>? GetValue()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_expected_int_std_string_GetMutableValue", ExactSpelling = true)]
                    extern static int *__MR_C_std_expected_int_std_string_GetMutableValue(_Underlying *_this);
                    var __ret = __MR_C_std_expected_int_std_string_GetMutableValue(_UnderlyingPtr);
                    return __ret is not null ? new MR.CS.Misc.Ref<int>(__ret) : null;
                }

                /// If this instance represents an error, returns the stored `std::string`. Otherwise null. This version returns a mutable pointer.
                public unsafe new MR.CS.Std.String? GetError()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_expected_int_std_string_GetMutableError", ExactSpelling = true)]
                    extern static MR.CS.Std.String._Underlying *__MR_C_std_expected_int_std_string_GetMutableError(_Underlying *_this);
                    var __ret = __MR_C_std_expected_int_std_string_GetMutableError(_UnderlyingPtr);
                    return __ret is not null ? new MR.CS.Std.String(__ret, is_owning: false) : null;
                }
            }

            /// This is used as a function parameter when the underlying function receives `Expected_Int_StdString` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `Expected_Int_StdString`/`Const_Expected_Int_StdString` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            public class _ByValue_Expected_Int_StdString
            {
                internal readonly Const_Expected_Int_StdString? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_Expected_Int_StdString() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_Expected_Int_StdString(Const_Expected_Int_StdString new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_Expected_Int_StdString(Const_Expected_Int_StdString arg) {return new(arg);}
                public _ByValue_Expected_Int_StdString(MR.CS.Misc._Moved<Expected_Int_StdString> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_Expected_Int_StdString(MR.CS.Misc._Moved<Expected_Int_StdString> arg) {return new(arg);}
            }

            /// This is used for optional parameters of class `Expected_Int_StdString` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Expected_Int_StdString`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Expected_Int_StdString`/`Const_Expected_Int_StdString` directly.
            public class _InOptMut_Expected_Int_StdString
            {
                public Expected_Int_StdString? Opt;

                public _InOptMut_Expected_Int_StdString() {}
                public _InOptMut_Expected_Int_StdString(Expected_Int_StdString value) {Opt = value;}
                public static implicit operator _InOptMut_Expected_Int_StdString(Expected_Int_StdString value) {return new(value);}
            }

            /// This is used for optional parameters of class `Expected_Int_StdString` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Expected_Int_StdString`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Expected_Int_StdString`/`Const_Expected_Int_StdString` to pass it to the function.
            public class _InOptConst_Expected_Int_StdString
            {
                public Const_Expected_Int_StdString? Opt;

                public _InOptConst_Expected_Int_StdString() {}
                public _InOptConst_Expected_Int_StdString(Const_Expected_Int_StdString value) {Opt = value;}
                public static implicit operator _InOptConst_Expected_Int_StdString(Const_Expected_Int_StdString value) {return new(value);}
            }
        }
    }
}
