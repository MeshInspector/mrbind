public static partial class MR
{
    public static partial class CS
    {
        public static partial class StdFunction
        {
            public enum E : int
            {
            }

            /// Generated from class `MR::StdFunction::A`.
            /// This is the const half of the class.
            public class Const_A : MR.CS.Misc.Object<Const_A>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdFunction_A_Destroy", ExactSpelling = true)]
                    extern static void __MR_StdFunction_A_Destroy(_Underlying *_this);
                    __MR_StdFunction_A_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_A() {Dispose(false);}

                public unsafe MR.CS.Std.Const_String a
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdFunction_A_Get_a", ExactSpelling = true)]
                        extern static MR.CS.Std.Const_String._Underlying *__MR_StdFunction_A_Get_a(_Underlying *_this);
                        MR.CS.Std.Const_String __ret;
                        __ret = new(__MR_StdFunction_A_Get_a(_UnderlyingPtr), is_owning: false);
                        __ret._KeepAliveEnclosingObject = this;
                        return __ret;
                    }
                }

                internal unsafe Const_A(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_A() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdFunction_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.StdFunction.A._Underlying *__MR_StdFunction_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_StdFunction_A_DefaultConstruct();
                }

                /// Constructs `MR::StdFunction::A` elementwise.
                public unsafe Const_A(string a) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdFunction_A_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.StdFunction.A._Underlying *__MR_StdFunction_A_ConstructFrom(byte *a, byte *a_end);
                    byte[] __bytes_a = System.Text.Encoding.UTF8.GetBytes(a);
                    fixed (byte *__ptr_a = __bytes_a)
                    {
                        _UnderlyingPtr = __MR_StdFunction_A_ConstructFrom(__ptr_a, __ptr_a + __bytes_a.Length);
                    }
                }

                /// Generated from constructor `MR::StdFunction::A::A`.
                public unsafe Const_A(MR.CS.StdFunction._ByValue_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdFunction_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.StdFunction.A._Underlying *__MR_StdFunction_A_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.StdFunction.A._Underlying *_other);
                    _UnderlyingPtr = __MR_StdFunction_A_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                    if (_other.Value is not null) _KeepAlive(_other.Value);
                }

                /// Generated from constructor `MR::StdFunction::A::A`.
                public Const_A(Const_A _other) : this(new _ByValue_A(_other)) {}

                /// Generated from constructor `MR::StdFunction::A::A`.
                public Const_A(A _other) : this((Const_A)_other) {}
            }

            /// Generated from class `MR::StdFunction::A`.
            /// This is the non-const half of the class.
            public class A : Const_A
            {
                public new unsafe MR.CS.Std.String a
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdFunction_A_GetMutable_a", ExactSpelling = true)]
                        extern static MR.CS.Std.String._Underlying *__MR_StdFunction_A_GetMutable_a(_Underlying *_this);
                        MR.CS.Std.String __ret;
                        __ret = new(__MR_StdFunction_A_GetMutable_a(_UnderlyingPtr), is_owning: false);
                        __ret._KeepAliveEnclosingObject = this;
                        return __ret;
                    }
                }

                internal unsafe A(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe A() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdFunction_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.StdFunction.A._Underlying *__MR_StdFunction_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_StdFunction_A_DefaultConstruct();
                }

                /// Constructs `MR::StdFunction::A` elementwise.
                public unsafe A(string a) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdFunction_A_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.StdFunction.A._Underlying *__MR_StdFunction_A_ConstructFrom(byte *a, byte *a_end);
                    byte[] __bytes_a = System.Text.Encoding.UTF8.GetBytes(a);
                    fixed (byte *__ptr_a = __bytes_a)
                    {
                        _UnderlyingPtr = __MR_StdFunction_A_ConstructFrom(__ptr_a, __ptr_a + __bytes_a.Length);
                    }
                }

                /// Generated from constructor `MR::StdFunction::A::A`.
                public unsafe A(MR.CS.StdFunction._ByValue_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdFunction_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.StdFunction.A._Underlying *__MR_StdFunction_A_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.StdFunction.A._Underlying *_other);
                    _UnderlyingPtr = __MR_StdFunction_A_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                    if (_other.Value is not null) _KeepAlive(_other.Value);
                }

                /// Generated from constructor `MR::StdFunction::A::A`.
                public A(Const_A _other) : this(new _ByValue_A(_other)) {}

                /// Generated from constructor `MR::StdFunction::A::A`.
                public A(A _other) : this((Const_A)_other) {}

                /// Generated from method `MR::StdFunction::A::operator=`.
                public unsafe MR.CS.StdFunction.A Assign(MR.CS.StdFunction._ByValue_A _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdFunction_A_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.StdFunction.A._Underlying *__MR_StdFunction_A_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.StdFunction.A._Underlying *_other);
                    _DiscardKeepAlive();
                    if (_other.Value is not null) _KeepAlive(_other.Value);
                    return new(__MR_StdFunction_A_AssignFromAnother(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null), is_owning: false);
                }
            }

            /// This is used as a function parameter when the underlying function receives `A` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `A`/`Const_A` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            public class _ByValue_A
            {
                internal readonly Const_A? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_A() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_A(Const_A new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_A(Const_A arg) {return new(arg);}
                public _ByValue_A(MR.CS.Misc._Moved<A> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_A(MR.CS.Misc._Moved<A> arg) {return new(arg);}
            }

            /// This is used for optional parameters of class `A` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_A`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `A`/`Const_A` directly.
            public class _InOptMut_A
            {
                public A? Opt;

                public _InOptMut_A() {}
                public _InOptMut_A(A value) {Opt = value;}
                public static implicit operator _InOptMut_A(A value) {return new(value);}
            }

            /// This is used for optional parameters of class `A` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_A`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `A`/`Const_A` to pass it to the function.
            public class _InOptConst_A
            {
                public Const_A? Opt;

                public _InOptConst_A() {}
                public _InOptConst_A(Const_A value) {Opt = value;}
                public static implicit operator _InOptConst_A(Const_A value) {return new(value);}
            }

            /// Generated from function `MR::StdFunction::foo`.
            public static unsafe void Foo(MR.CS.Std._ByValue_Function_IntFunc _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdFunction_foo_std_function_int_func", ExactSpelling = true)]
                extern static void __MR_StdFunction_foo_std_function_int_func(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.Function_IntFunc._Underlying *_1);
                __MR_StdFunction_foo_std_function_int_func(_1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// Generated from function `MR::StdFunction::foo`.
            public static unsafe void Foo(MR.CS.Std._ByValue_Function_VoidFuncFromIntInt _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdFunction_foo_std_function_void_func_from_int_int", ExactSpelling = true)]
                extern static void __MR_StdFunction_foo_std_function_void_func_from_int_int(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.Function_VoidFuncFromIntInt._Underlying *_1);
                __MR_StdFunction_foo_std_function_void_func_from_int_int(_1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// Generated from function `MR::StdFunction::foo`.
            public static unsafe void Foo(MR.CS.Std._ByValue_Function_IntFuncFromIntInt _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdFunction_foo_std_function_int_func_from_int_int", ExactSpelling = true)]
                extern static void __MR_StdFunction_foo_std_function_int_func_from_int_int(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.Function_IntFuncFromIntInt._Underlying *_1);
                __MR_StdFunction_foo_std_function_int_func_from_int_int(_1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// Generated from function `MR::StdFunction::foo`.
            public static unsafe void Foo(MR.CS.Std._ByValue_Function_MRStdFunctionEFuncFromIntMRStdFunctionE _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdFunction_foo_std_function_MR_StdFunction_E_func_from_int_MR_StdFunction_E", ExactSpelling = true)]
                extern static void __MR_StdFunction_foo_std_function_MR_StdFunction_E_func_from_int_MR_StdFunction_E(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.Function_MRStdFunctionEFuncFromIntMRStdFunctionE._Underlying *_1);
                __MR_StdFunction_foo_std_function_MR_StdFunction_E_func_from_int_MR_StdFunction_E(_1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// Generated from function `MR::StdFunction::foo`.
            public static unsafe void Foo(MR.CS.Std._ByValue_Function_StdStringFuncFromIntFloat _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdFunction_foo_std_function_std_string_func_from_int_float", ExactSpelling = true)]
                extern static void __MR_StdFunction_foo_std_function_std_string_func_from_int_float(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.Function_StdStringFuncFromIntFloat._Underlying *_1);
                __MR_StdFunction_foo_std_function_std_string_func_from_int_float(_1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// Generated from function `MR::StdFunction::foo`.
            public static unsafe void Foo(MR.CS.Std._ByValue_Function_VoidFuncFromStdString _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdFunction_foo_std_function_void_func_from_std_string", ExactSpelling = true)]
                extern static void __MR_StdFunction_foo_std_function_void_func_from_std_string(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.Function_VoidFuncFromStdString._Underlying *_1);
                __MR_StdFunction_foo_std_function_void_func_from_std_string(_1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// Generated from function `MR::StdFunction::foo`.
            public static unsafe void Foo(MR.CS.Std._ByValue_Function_VoidFuncFromMRStdFunctionA _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdFunction_foo_std_function_void_func_from_MR_StdFunction_A", ExactSpelling = true)]
                extern static void __MR_StdFunction_foo_std_function_void_func_from_MR_StdFunction_A(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.Function_VoidFuncFromMRStdFunctionA._Underlying *_1);
                __MR_StdFunction_foo_std_function_void_func_from_MR_StdFunction_A(_1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// Generated from function `MR::StdFunction::foo`.
            public static unsafe void Foo(MR.CS.Std._ByValue_Function_MRStdFunctionAFunc _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdFunction_foo_std_function_MR_StdFunction_A_func", ExactSpelling = true)]
                extern static void __MR_StdFunction_foo_std_function_MR_StdFunction_A_func(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.Function_MRStdFunctionAFunc._Underlying *_1);
                __MR_StdFunction_foo_std_function_MR_StdFunction_A_func(_1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }
        }
    }
}
