public static partial class MR
{
    public static partial class CS
    {
        /// <summary>
        /// Stores either a `int32_t` that represents success or a `std::string` that represents an error.
        /// This is the const half of the class.
        /// </summary>
        public class Const_Expected_Int32T_StdString : MR.CS.Misc.Object<Const_Expected_Int32T_StdString>, System.IDisposable
        {
            internal struct _Underlying {} // Represents the underlying C++ type.

            internal unsafe _Underlying *_UnderlyingPtr;

            protected virtual unsafe void Dispose(bool disposing)
            {
                if (_UnderlyingPtr is null || !_IsOwningVal)
                    return;
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_expected_int32_t_std_string_Destroy", ExactSpelling = true)]
                extern static void __MR_C_expected_int32_t_std_string_Destroy(_Underlying *_this);
                __MR_C_expected_int32_t_std_string_Destroy(_UnderlyingPtr);
                _UnderlyingPtr = null;
            }
            public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
            ~Const_Expected_Int32T_StdString() {Dispose(false);}

            internal unsafe Const_Expected_Int32T_StdString(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

            /// <summary>
            /// Constructs an empty (default-constructed) instance.
            /// </summary>
            public unsafe Const_Expected_Int32T_StdString() : this(null, is_owning: true)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_expected_int32_t_std_string_DefaultConstruct", ExactSpelling = true)]
                extern static MR.CS.Expected_Int32T_StdString._Underlying *__MR_C_expected_int32_t_std_string_DefaultConstruct();
                _UnderlyingPtr = __MR_C_expected_int32_t_std_string_DefaultConstruct();
            }

            /// <summary>
            /// Constructs a copy of another instance. The source remains alive.
            /// </summary>
            public unsafe Const_Expected_Int32T_StdString(MR.CS._ByValue_Expected_Int32T_StdString other) : this(null, is_owning: true)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_expected_int32_t_std_string_ConstructFromAnother", ExactSpelling = true)]
                extern static MR.CS.Expected_Int32T_StdString._Underlying *__MR_C_expected_int32_t_std_string_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Expected_Int32T_StdString._Underlying *other);
                _UnderlyingPtr = __MR_C_expected_int32_t_std_string_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                if (other.Value is not null) _KeepAlive(other.Value);
            }

            /// <summary>
            /// Constructs a copy of another instance. The source remains alive.
            /// </summary>
            public Const_Expected_Int32T_StdString(Const_Expected_Int32T_StdString other) : this(new _ByValue_Expected_Int32T_StdString(other)) {}

            /// <summary>
            /// Constructs a copy of another instance. The source remains alive.
            /// </summary>
            public Const_Expected_Int32T_StdString(Expected_Int32T_StdString other) : this((Const_Expected_Int32T_StdString)other) {}

            /// <summary>
            /// Returns true if this instance represents success, or false if it represents an error.
            /// </summary>
            public static unsafe implicit operator bool(MR.CS.Const_Expected_Int32T_StdString _this)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_expected_int32_t_std_string_Success", ExactSpelling = true)]
                extern static byte __MR_C_expected_int32_t_std_string_Success(MR.CS.Const_Expected_Int32T_StdString._Underlying *_this);
                return __MR_C_expected_int32_t_std_string_Success(_this._UnderlyingPtr) != 0;
            }

            /// <summary>
            /// If this instance represents success, returns the stored `int32_t`. Otherwise null.
            /// </summary>
            public unsafe int? getValue()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_expected_int32_t_std_string_GetValue", ExactSpelling = true)]
                extern static int *__MR_C_expected_int32_t_std_string_GetValue(_Underlying *_this);
                var __c_ret = __MR_C_expected_int32_t_std_string_GetValue(_UnderlyingPtr);
                return __c_ret is not null ? *__c_ret : null;
            }

            /// <summary>
            /// If this instance represents an error, returns the stored `std::string`. Otherwise null.
            /// </summary>
            public unsafe MR.CS.Std.Const_String? getError()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_expected_int32_t_std_string_GetError", ExactSpelling = true)]
                extern static MR.CS.Std.Const_String._Underlying *__MR_C_expected_int32_t_std_string_GetError(_Underlying *_this);
                var __c_ret = __MR_C_expected_int32_t_std_string_GetError(_UnderlyingPtr);
                MR.CS.Std.Const_String? __ret;
                __ret = __c_ret is not null ? new MR.CS.Std.Const_String(__c_ret, is_owning: false) : null;
                if (__ret is not null) __ret._KeepAliveEnclosingObject = this;
                return __ret;
            }
        }

        /// <summary>
        /// Stores either a `int32_t` that represents success or a `std::string` that represents an error.
        /// This is the non-const half of the class.
        /// </summary>
        public class Expected_Int32T_StdString : Const_Expected_Int32T_StdString
        {
            internal unsafe Expected_Int32T_StdString(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

            /// <summary>
            /// Constructs an empty (default-constructed) instance.
            /// </summary>
            public unsafe Expected_Int32T_StdString() : this(null, is_owning: true)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_expected_int32_t_std_string_DefaultConstruct", ExactSpelling = true)]
                extern static MR.CS.Expected_Int32T_StdString._Underlying *__MR_C_expected_int32_t_std_string_DefaultConstruct();
                _UnderlyingPtr = __MR_C_expected_int32_t_std_string_DefaultConstruct();
            }

            /// <summary>
            /// Constructs a copy of another instance. The source remains alive.
            /// </summary>
            public unsafe Expected_Int32T_StdString(MR.CS._ByValue_Expected_Int32T_StdString other) : this(null, is_owning: true)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_expected_int32_t_std_string_ConstructFromAnother", ExactSpelling = true)]
                extern static MR.CS.Expected_Int32T_StdString._Underlying *__MR_C_expected_int32_t_std_string_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Expected_Int32T_StdString._Underlying *other);
                _UnderlyingPtr = __MR_C_expected_int32_t_std_string_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                if (other.Value is not null) _KeepAlive(other.Value);
            }

            /// <summary>
            /// Constructs a copy of another instance. The source remains alive.
            /// </summary>
            public Expected_Int32T_StdString(Const_Expected_Int32T_StdString other) : this(new _ByValue_Expected_Int32T_StdString(other)) {}

            /// <summary>
            /// Constructs a copy of another instance. The source remains alive.
            /// </summary>
            public Expected_Int32T_StdString(Expected_Int32T_StdString other) : this((Const_Expected_Int32T_StdString)other) {}

            /// <summary>
            /// Assigns the contents from another instance. Both objects remain alive after the call.
            /// </summary>
            public unsafe void assign(MR.CS._ByValue_Expected_Int32T_StdString other)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_expected_int32_t_std_string_AssignFromAnother", ExactSpelling = true)]
                extern static void __MR_C_expected_int32_t_std_string_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Expected_Int32T_StdString._Underlying *other);
                _DiscardKeepAlive();
                if (other.Value is not null) _KeepAlive(other.Value);
                __MR_C_expected_int32_t_std_string_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
            }

            /// <summary>
            /// If this instance represents success, returns the stored `int32_t`. Otherwise null. This version returns a mutable pointer.
            /// </summary>
            public unsafe new MR.CS.Misc.Ref<int>? getValue()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_expected_int32_t_std_string_GetMutableValue", ExactSpelling = true)]
                extern static int *__MR_C_expected_int32_t_std_string_GetMutableValue(_Underlying *_this);
                var __c_ret = __MR_C_expected_int32_t_std_string_GetMutableValue(_UnderlyingPtr);
                return __c_ret is not null ? new MR.CS.Misc.Ref<int>(__c_ret) : null;
            }

            /// <summary>
            /// If this instance represents an error, returns the stored `std::string`. Otherwise null. This version returns a mutable pointer.
            /// </summary>
            public unsafe new MR.CS.Std.String? getError()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_expected_int32_t_std_string_GetMutableError", ExactSpelling = true)]
                extern static MR.CS.Std.String._Underlying *__MR_C_expected_int32_t_std_string_GetMutableError(_Underlying *_this);
                var __c_ret = __MR_C_expected_int32_t_std_string_GetMutableError(_UnderlyingPtr);
                MR.CS.Std.String? __ret;
                __ret = __c_ret is not null ? new MR.CS.Std.String(__c_ret, is_owning: false) : null;
                if (__ret is not null) __ret._KeepAliveEnclosingObject = this;
                return __ret;
            }
        }

        /// <summary>
        /// This is used as a function parameter when the underlying function receives `Expected_Int32T_StdString` by value.
        /// Usage:
        /// * Pass `new()` to default-construct the instance.
        /// * Pass an instance of `Expected_Int32T_StdString`/`Const_Expected_Int32T_StdString` to copy it into the function.
        /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
        ///   Be careful if your input isn't a unique reference to this object.
        /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
        /// </summary>
        public class _ByValue_Expected_Int32T_StdString
        {
            internal readonly Const_Expected_Int32T_StdString? Value;
            internal readonly MR.CS.Misc._PassBy PassByMode;
            public _ByValue_Expected_Int32T_StdString() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
            public _ByValue_Expected_Int32T_StdString(Const_Expected_Int32T_StdString new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
            public static implicit operator _ByValue_Expected_Int32T_StdString(Const_Expected_Int32T_StdString arg) {return new(arg);}
            public _ByValue_Expected_Int32T_StdString(MR.CS.Misc._Moved<Expected_Int32T_StdString> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
            public static implicit operator _ByValue_Expected_Int32T_StdString(MR.CS.Misc._Moved<Expected_Int32T_StdString> arg) {return new(arg);}
        }

        /// <summary>
        /// This is used for optional parameters of class `Expected_Int32T_StdString` with default arguments.
        /// This is only used mutable parameters. For const ones we have `_InOptConst_Expected_Int32T_StdString`.
        /// Usage:
        /// * Pass `null` to use the default argument.
        /// * Pass `new()` to pass no object.
        /// * Pass an instance of `Expected_Int32T_StdString`/`Const_Expected_Int32T_StdString` directly.
        /// </summary>
        public class _InOptMut_Expected_Int32T_StdString
        {
            public Expected_Int32T_StdString? Opt;

            public _InOptMut_Expected_Int32T_StdString() {}
            public _InOptMut_Expected_Int32T_StdString(Expected_Int32T_StdString value) {Opt = value;}
            public static implicit operator _InOptMut_Expected_Int32T_StdString(Expected_Int32T_StdString value) {return new(value);}
        }

        /// <summary>
        /// This is used for optional parameters of class `Expected_Int32T_StdString` with default arguments.
        /// This is only used const parameters. For non-const ones we have `_InOptMut_Expected_Int32T_StdString`.
        /// Usage:
        /// * Pass `null` to use the default argument.
        /// * Pass `new()` to pass no object.
        /// * Pass an instance of `Expected_Int32T_StdString`/`Const_Expected_Int32T_StdString` to pass it to the function.
        /// </summary>
        public class _InOptConst_Expected_Int32T_StdString
        {
            public Const_Expected_Int32T_StdString? Opt;

            public _InOptConst_Expected_Int32T_StdString() {}
            public _InOptConst_Expected_Int32T_StdString(Const_Expected_Int32T_StdString value) {Opt = value;}
            public static implicit operator _InOptConst_Expected_Int32T_StdString(Const_Expected_Int32T_StdString value) {return new(value);}
        }
    }
}
