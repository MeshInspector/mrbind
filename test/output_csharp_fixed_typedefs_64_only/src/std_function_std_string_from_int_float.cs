public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// Stores a functor of type: `std::string(int, float)`. Possibly stateful.
            /// This is the const half of the class.
            /// </summary>
            public class Const_Function_StdStringFuncFromIntFloat : MR.CS.Misc.Object<Const_Function_StdStringFuncFromIntFloat>, System.IDisposable
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
                ~Const_Function_StdStringFuncFromIntFloat() {Dispose(false);}

                internal unsafe Const_Function_StdStringFuncFromIntFloat(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_Function_StdStringFuncFromIntFloat() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_std_string_from_int_float_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Function_StdStringFuncFromIntFloat._Underlying *__MR_C_std_function_std_string_from_int_float_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_function_std_string_from_int_float_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Const_Function_StdStringFuncFromIntFloat(MR.CS.Std._ByValue_Function_StdStringFuncFromIntFloat other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_std_string_from_int_float_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Function_StdStringFuncFromIntFloat._Underlying *__MR_C_std_function_std_string_from_int_float_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Function_StdStringFuncFromIntFloat._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_function_std_string_from_int_float_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }
            }

            /// <summary>
            /// Stores a functor of type: `std::string(int, float)`. Possibly stateful.
            /// This is the non-const half of the class.
            /// </summary>
            public class Function_StdStringFuncFromIntFloat : Const_Function_StdStringFuncFromIntFloat
            {
                internal unsafe Function_StdStringFuncFromIntFloat(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Function_StdStringFuncFromIntFloat() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_std_string_from_int_float_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Function_StdStringFuncFromIntFloat._Underlying *__MR_C_std_function_std_string_from_int_float_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_function_std_string_from_int_float_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Function_StdStringFuncFromIntFloat(MR.CS.Std._ByValue_Function_StdStringFuncFromIntFloat other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_std_string_from_int_float_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Function_StdStringFuncFromIntFloat._Underlying *__MR_C_std_function_std_string_from_int_float_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Function_StdStringFuncFromIntFloat._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_function_std_string_from_int_float_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// <summary>
                /// Assigns the contents from another instance. Both objects remain alive after the call.
                /// </summary>
                public unsafe void assign(MR.CS.Std._ByValue_Function_StdStringFuncFromIntFloat other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_std_string_from_int_float_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_function_std_string_from_int_float_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Function_StdStringFuncFromIntFloat._Underlying *other);
                    _DiscardKeepAlive();
                    if (other.Value is not null) _KeepAlive(other.Value);
                    __MR_C_std_function_std_string_from_int_float_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }
            }

            /// <summary>
            /// This is used as a function parameter when the underlying function receives `Function_StdStringFuncFromIntFloat` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `Function_StdStringFuncFromIntFloat`/`Const_Function_StdStringFuncFromIntFloat` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            /// </summary>
            public class _ByValue_Function_StdStringFuncFromIntFloat
            {
                internal readonly Const_Function_StdStringFuncFromIntFloat? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_Function_StdStringFuncFromIntFloat() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_Function_StdStringFuncFromIntFloat(Const_Function_StdStringFuncFromIntFloat new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_Function_StdStringFuncFromIntFloat(Const_Function_StdStringFuncFromIntFloat arg) {return new(arg);}
                public _ByValue_Function_StdStringFuncFromIntFloat(MR.CS.Misc._Moved<Function_StdStringFuncFromIntFloat> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_Function_StdStringFuncFromIntFloat(MR.CS.Misc._Moved<Function_StdStringFuncFromIntFloat> arg) {return new(arg);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Function_StdStringFuncFromIntFloat` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Function_StdStringFuncFromIntFloat`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Function_StdStringFuncFromIntFloat`/`Const_Function_StdStringFuncFromIntFloat` directly.
            /// </summary>
            public class _InOptMut_Function_StdStringFuncFromIntFloat
            {
                public Function_StdStringFuncFromIntFloat? Opt;

                public _InOptMut_Function_StdStringFuncFromIntFloat() {}
                public _InOptMut_Function_StdStringFuncFromIntFloat(Function_StdStringFuncFromIntFloat value) {Opt = value;}
                public static implicit operator _InOptMut_Function_StdStringFuncFromIntFloat(Function_StdStringFuncFromIntFloat value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Function_StdStringFuncFromIntFloat` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Function_StdStringFuncFromIntFloat`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Function_StdStringFuncFromIntFloat`/`Const_Function_StdStringFuncFromIntFloat` to pass it to the function.
            /// </summary>
            public class _InOptConst_Function_StdStringFuncFromIntFloat
            {
                public Const_Function_StdStringFuncFromIntFloat? Opt;

                public _InOptConst_Function_StdStringFuncFromIntFloat() {}
                public _InOptConst_Function_StdStringFuncFromIntFloat(Const_Function_StdStringFuncFromIntFloat value) {Opt = value;}
                public static implicit operator _InOptConst_Function_StdStringFuncFromIntFloat(Const_Function_StdStringFuncFromIntFloat value) {return new(value);}
            }
        }
    }
}
