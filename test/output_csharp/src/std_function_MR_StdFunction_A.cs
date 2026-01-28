public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// Stores a functor of type: `MR::StdFunction::A(void)`. Possibly stateful.
            /// This is the const half of the class.
            public class Const_Function_MRStdFunctionAFunc : MR.CS.Misc.Object<Const_Function_MRStdFunctionAFunc>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_MR_StdFunction_A_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_function_MR_StdFunction_A_Destroy(_Underlying *_this);
                    __MR_C_std_function_MR_StdFunction_A_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Function_MRStdFunctionAFunc() {Dispose(false);}

                internal unsafe Const_Function_MRStdFunctionAFunc(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_Function_MRStdFunctionAFunc() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_MR_StdFunction_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Function_MRStdFunctionAFunc._Underlying *__MR_C_std_function_MR_StdFunction_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_function_MR_StdFunction_A_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Const_Function_MRStdFunctionAFunc(MR.CS.Std._ByValue_Function_MRStdFunctionAFunc other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_MR_StdFunction_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Function_MRStdFunctionAFunc._Underlying *__MR_C_std_function_MR_StdFunction_A_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Function_MRStdFunctionAFunc._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_function_MR_StdFunction_A_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }
            }

            /// Stores a functor of type: `MR::StdFunction::A(void)`. Possibly stateful.
            /// This is the non-const half of the class.
            public class Function_MRStdFunctionAFunc : Const_Function_MRStdFunctionAFunc
            {
                internal unsafe Function_MRStdFunctionAFunc(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Function_MRStdFunctionAFunc() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_MR_StdFunction_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Function_MRStdFunctionAFunc._Underlying *__MR_C_std_function_MR_StdFunction_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_function_MR_StdFunction_A_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Function_MRStdFunctionAFunc(MR.CS.Std._ByValue_Function_MRStdFunctionAFunc other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_MR_StdFunction_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Function_MRStdFunctionAFunc._Underlying *__MR_C_std_function_MR_StdFunction_A_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Function_MRStdFunctionAFunc._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_function_MR_StdFunction_A_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// Assigns the contents from another instance. Both objects remain alive after the call.
                public unsafe void Assign(MR.CS.Std._ByValue_Function_MRStdFunctionAFunc other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_MR_StdFunction_A_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_function_MR_StdFunction_A_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Function_MRStdFunctionAFunc._Underlying *other);
                    _DiscardKeepAlive();
                    if (other.Value is not null) _KeepAlive(other.Value);
                    __MR_C_std_function_MR_StdFunction_A_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }
            }

            /// This is used as a function parameter when the underlying function receives `Function_MRStdFunctionAFunc` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `Function_MRStdFunctionAFunc`/`Const_Function_MRStdFunctionAFunc` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            public class _ByValue_Function_MRStdFunctionAFunc
            {
                internal readonly Const_Function_MRStdFunctionAFunc? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_Function_MRStdFunctionAFunc() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_Function_MRStdFunctionAFunc(Const_Function_MRStdFunctionAFunc new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_Function_MRStdFunctionAFunc(Const_Function_MRStdFunctionAFunc arg) {return new(arg);}
                public _ByValue_Function_MRStdFunctionAFunc(MR.CS.Misc._Moved<Function_MRStdFunctionAFunc> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_Function_MRStdFunctionAFunc(MR.CS.Misc._Moved<Function_MRStdFunctionAFunc> arg) {return new(arg);}
            }

            /// This is used for optional parameters of class `Function_MRStdFunctionAFunc` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Function_MRStdFunctionAFunc`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Function_MRStdFunctionAFunc`/`Const_Function_MRStdFunctionAFunc` directly.
            public class _InOptMut_Function_MRStdFunctionAFunc
            {
                public Function_MRStdFunctionAFunc? Opt;

                public _InOptMut_Function_MRStdFunctionAFunc() {}
                public _InOptMut_Function_MRStdFunctionAFunc(Function_MRStdFunctionAFunc value) {Opt = value;}
                public static implicit operator _InOptMut_Function_MRStdFunctionAFunc(Function_MRStdFunctionAFunc value) {return new(value);}
            }

            /// This is used for optional parameters of class `Function_MRStdFunctionAFunc` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Function_MRStdFunctionAFunc`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Function_MRStdFunctionAFunc`/`Const_Function_MRStdFunctionAFunc` to pass it to the function.
            public class _InOptConst_Function_MRStdFunctionAFunc
            {
                public Const_Function_MRStdFunctionAFunc? Opt;

                public _InOptConst_Function_MRStdFunctionAFunc() {}
                public _InOptConst_Function_MRStdFunctionAFunc(Const_Function_MRStdFunctionAFunc value) {Opt = value;}
                public static implicit operator _InOptConst_Function_MRStdFunctionAFunc(Const_Function_MRStdFunctionAFunc value) {return new(value);}
            }
        }
    }
}
