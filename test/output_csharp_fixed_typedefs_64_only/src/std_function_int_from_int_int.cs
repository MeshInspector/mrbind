public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// Stores a functor of type: `int(int, int)`. Possibly stateful.
            /// This is the const half of the class.
            public class Const_Function_IntFuncFromIntInt : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_Function_IntFuncFromIntInt(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_int_from_int_int_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_function_int_from_int_int_Destroy(_Underlying *_this);
                    __MR_C_std_function_int_from_int_int_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Function_IntFuncFromIntInt() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_Function_IntFuncFromIntInt() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_int_from_int_int_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Function_IntFuncFromIntInt._Underlying *__MR_C_std_function_int_from_int_int_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_function_int_from_int_int_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Const_Function_IntFuncFromIntInt(MR.CS.Std._ByValue_Function_IntFuncFromIntInt other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_int_from_int_int_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Function_IntFuncFromIntInt._Underlying *__MR_C_std_function_int_from_int_int_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Function_IntFuncFromIntInt._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_function_int_from_int_int_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }
            }

            /// Stores a functor of type: `int(int, int)`. Possibly stateful.
            /// This is the non-const half of the class.
            public class Function_IntFuncFromIntInt : Const_Function_IntFuncFromIntInt
            {
                internal unsafe Function_IntFuncFromIntInt(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Function_IntFuncFromIntInt() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_int_from_int_int_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Function_IntFuncFromIntInt._Underlying *__MR_C_std_function_int_from_int_int_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_function_int_from_int_int_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Function_IntFuncFromIntInt(MR.CS.Std._ByValue_Function_IntFuncFromIntInt other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_int_from_int_int_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Function_IntFuncFromIntInt._Underlying *__MR_C_std_function_int_from_int_int_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Function_IntFuncFromIntInt._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_function_int_from_int_int_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// Assigns the contents from another instance. Both objects remain alive after the call.
                public unsafe void assign(MR.CS.Std._ByValue_Function_IntFuncFromIntInt other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_function_int_from_int_int_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_function_int_from_int_int_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Function_IntFuncFromIntInt._Underlying *other);
                    __MR_C_std_function_int_from_int_int_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }
            }

            /// This is used as a function parameter when the underlying function receives `Function_IntFuncFromIntInt` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `Function_IntFuncFromIntInt`/`Const_Function_IntFuncFromIntInt` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            public class _ByValue_Function_IntFuncFromIntInt
            {
                internal readonly Const_Function_IntFuncFromIntInt? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_Function_IntFuncFromIntInt() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_Function_IntFuncFromIntInt(Const_Function_IntFuncFromIntInt new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_Function_IntFuncFromIntInt(Const_Function_IntFuncFromIntInt arg) {return new(arg);}
                public _ByValue_Function_IntFuncFromIntInt(MR.CS.Misc._Moved<Function_IntFuncFromIntInt> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_Function_IntFuncFromIntInt(MR.CS.Misc._Moved<Function_IntFuncFromIntInt> arg) {return new(arg);}
            }

            /// This is used for optional parameters of class `Function_IntFuncFromIntInt` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Function_IntFuncFromIntInt`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Function_IntFuncFromIntInt`/`Const_Function_IntFuncFromIntInt` directly.
            public class _InOptMut_Function_IntFuncFromIntInt
            {
                public Function_IntFuncFromIntInt? Opt;

                public _InOptMut_Function_IntFuncFromIntInt() {}
                public _InOptMut_Function_IntFuncFromIntInt(Function_IntFuncFromIntInt value) {Opt = value;}
                public static implicit operator _InOptMut_Function_IntFuncFromIntInt(Function_IntFuncFromIntInt value) {return new(value);}
            }

            /// This is used for optional parameters of class `Function_IntFuncFromIntInt` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Function_IntFuncFromIntInt`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Function_IntFuncFromIntInt`/`Const_Function_IntFuncFromIntInt` to pass it to the function.
            public class _InOptConst_Function_IntFuncFromIntInt
            {
                public Const_Function_IntFuncFromIntInt? Opt;

                public _InOptConst_Function_IntFuncFromIntInt() {}
                public _InOptConst_Function_IntFuncFromIntInt(Const_Function_IntFuncFromIntInt value) {Opt = value;}
                public static implicit operator _InOptConst_Function_IntFuncFromIntInt(Const_Function_IntFuncFromIntInt value) {return new(value);}
            }
        }
    }
}
