public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// Stores a functor of type: `void(MR::StdFunction::A)`. Possibly stateful.
            /// This is the const half of the class.
            public class Const_Function_VoidFuncFromMRStdFunctionA : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_Function_VoidFuncFromMRStdFunctionA(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

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
                ~Const_Function_VoidFuncFromMRStdFunctionA() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_Function_VoidFuncFromMRStdFunctionA() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_void_from_MR_StdFunction_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Function_VoidFuncFromMRStdFunctionA._Underlying *__MR_C_std_function_void_from_MR_StdFunction_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_function_void_from_MR_StdFunction_A_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Const_Function_VoidFuncFromMRStdFunctionA(MR.CS.Std._ByValue_Function_VoidFuncFromMRStdFunctionA other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_void_from_MR_StdFunction_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Function_VoidFuncFromMRStdFunctionA._Underlying *__MR_C_std_function_void_from_MR_StdFunction_A_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Function_VoidFuncFromMRStdFunctionA._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_function_void_from_MR_StdFunction_A_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }
            }

            /// Stores a functor of type: `void(MR::StdFunction::A)`. Possibly stateful.
            /// This is the non-const half of the class.
            public class Function_VoidFuncFromMRStdFunctionA : Const_Function_VoidFuncFromMRStdFunctionA
            {
                internal unsafe Function_VoidFuncFromMRStdFunctionA(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Function_VoidFuncFromMRStdFunctionA() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_void_from_MR_StdFunction_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Function_VoidFuncFromMRStdFunctionA._Underlying *__MR_C_std_function_void_from_MR_StdFunction_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_function_void_from_MR_StdFunction_A_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Function_VoidFuncFromMRStdFunctionA(MR.CS.Std._ByValue_Function_VoidFuncFromMRStdFunctionA other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_void_from_MR_StdFunction_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Function_VoidFuncFromMRStdFunctionA._Underlying *__MR_C_std_function_void_from_MR_StdFunction_A_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Function_VoidFuncFromMRStdFunctionA._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_function_void_from_MR_StdFunction_A_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// Assigns the contents from another instance. Both objects remain alive after the call.
                public unsafe void Assign(MR.CS.Std._ByValue_Function_VoidFuncFromMRStdFunctionA other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_void_from_MR_StdFunction_A_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_function_void_from_MR_StdFunction_A_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Function_VoidFuncFromMRStdFunctionA._Underlying *other);
                    __MR_C_std_function_void_from_MR_StdFunction_A_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }
            }

            /// This is used as a function parameter when the underlying function receives `Function_VoidFuncFromMRStdFunctionA` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `Function_VoidFuncFromMRStdFunctionA`/`Const_Function_VoidFuncFromMRStdFunctionA` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            public class _ByValue_Function_VoidFuncFromMRStdFunctionA
            {
                internal readonly Const_Function_VoidFuncFromMRStdFunctionA? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_Function_VoidFuncFromMRStdFunctionA() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_Function_VoidFuncFromMRStdFunctionA(Const_Function_VoidFuncFromMRStdFunctionA new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_Function_VoidFuncFromMRStdFunctionA(Const_Function_VoidFuncFromMRStdFunctionA arg) {return new(arg);}
                public _ByValue_Function_VoidFuncFromMRStdFunctionA(MR.CS.Misc._Moved<Function_VoidFuncFromMRStdFunctionA> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_Function_VoidFuncFromMRStdFunctionA(MR.CS.Misc._Moved<Function_VoidFuncFromMRStdFunctionA> arg) {return new(arg);}
            }

            /// This is used for optional parameters of class `Function_VoidFuncFromMRStdFunctionA` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Function_VoidFuncFromMRStdFunctionA`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Function_VoidFuncFromMRStdFunctionA`/`Const_Function_VoidFuncFromMRStdFunctionA` directly.
            public class _InOptMut_Function_VoidFuncFromMRStdFunctionA
            {
                public Function_VoidFuncFromMRStdFunctionA? Opt;

                public _InOptMut_Function_VoidFuncFromMRStdFunctionA() {}
                public _InOptMut_Function_VoidFuncFromMRStdFunctionA(Function_VoidFuncFromMRStdFunctionA value) {Opt = value;}
                public static implicit operator _InOptMut_Function_VoidFuncFromMRStdFunctionA(Function_VoidFuncFromMRStdFunctionA value) {return new(value);}
            }

            /// This is used for optional parameters of class `Function_VoidFuncFromMRStdFunctionA` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Function_VoidFuncFromMRStdFunctionA`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Function_VoidFuncFromMRStdFunctionA`/`Const_Function_VoidFuncFromMRStdFunctionA` to pass it to the function.
            public class _InOptConst_Function_VoidFuncFromMRStdFunctionA
            {
                public Const_Function_VoidFuncFromMRStdFunctionA? Opt;

                public _InOptConst_Function_VoidFuncFromMRStdFunctionA() {}
                public _InOptConst_Function_VoidFuncFromMRStdFunctionA(Const_Function_VoidFuncFromMRStdFunctionA value) {Opt = value;}
                public static implicit operator _InOptConst_Function_VoidFuncFromMRStdFunctionA(Const_Function_VoidFuncFromMRStdFunctionA value) {return new(value);}
            }
        }
    }
}
