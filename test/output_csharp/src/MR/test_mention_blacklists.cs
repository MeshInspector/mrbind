public static partial class MR
{
    public static partial class CS
    {
        public static partial class SignatureFilters
        {
            /// Generated from class `MR::SignatureFilters::A`.
            /// This is the const half of the class.
            public class Const_A : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_A(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_SignatureFilters_A_Destroy", ExactSpelling = true)]
                    extern static void __MR_SignatureFilters_A_Destroy(_Underlying *_this);
                    __MR_SignatureFilters_A_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_A() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_A() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_SignatureFilters_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.SignatureFilters.A._Underlying *__MR_SignatureFilters_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_SignatureFilters_A_DefaultConstruct();
                }

                /// Generated from constructor `MR::SignatureFilters::A::A`.
                public unsafe Const_A(MR.CS.SignatureFilters.Const_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_SignatureFilters_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.SignatureFilters.A._Underlying *__MR_SignatureFilters_A_ConstructFromAnother(MR.CS.SignatureFilters.A._Underlying *_other);
                    _UnderlyingPtr = __MR_SignatureFilters_A_ConstructFromAnother(_other._UnderlyingPtr);
                }
            }

            /// Generated from class `MR::SignatureFilters::A`.
            /// This is the non-const half of the class.
            public class A : Const_A
            {
                internal unsafe A(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe A() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_SignatureFilters_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.SignatureFilters.A._Underlying *__MR_SignatureFilters_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_SignatureFilters_A_DefaultConstruct();
                }

                /// Generated from constructor `MR::SignatureFilters::A::A`.
                public unsafe A(MR.CS.SignatureFilters.Const_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_SignatureFilters_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.SignatureFilters.A._Underlying *__MR_SignatureFilters_A_ConstructFromAnother(MR.CS.SignatureFilters.A._Underlying *_other);
                    _UnderlyingPtr = __MR_SignatureFilters_A_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::SignatureFilters::A::operator=`.
                public unsafe MR.CS.SignatureFilters.A Assign(MR.CS.SignatureFilters.Const_A _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_SignatureFilters_A_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.SignatureFilters.A._Underlying *__MR_SignatureFilters_A_AssignFromAnother(_Underlying *_this, MR.CS.SignatureFilters.A._Underlying *_other);
                    return new(__MR_SignatureFilters_A_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }
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

            /// Generated from class `MR::SignatureFilters::Blah`.
            /// This is the const half of the class.
            public class Const_Blah : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_Blah(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_SignatureFilters_Blah_Destroy", ExactSpelling = true)]
                    extern static void __MR_SignatureFilters_Blah_Destroy(_Underlying *_this);
                    __MR_SignatureFilters_Blah_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Blah() {Dispose(false);}

                public unsafe MR.CS.SignatureFilters.Const_A a
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_SignatureFilters_Blah_Get_a", ExactSpelling = true)]
                        extern static MR.CS.SignatureFilters.Const_A._Underlying *__MR_SignatureFilters_Blah_Get_a(_Underlying *_this);
                        return new(__MR_SignatureFilters_Blah_Get_a(_UnderlyingPtr), is_owning: false);
                    }
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_Blah() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_SignatureFilters_Blah_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.SignatureFilters.Blah._Underlying *__MR_SignatureFilters_Blah_DefaultConstruct();
                    _UnderlyingPtr = __MR_SignatureFilters_Blah_DefaultConstruct();
                }

                /// Generated from constructor `MR::SignatureFilters::Blah::Blah`.
                public unsafe Const_Blah(MR.CS.SignatureFilters.Const_Blah _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_SignatureFilters_Blah_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.SignatureFilters.Blah._Underlying *__MR_SignatureFilters_Blah_ConstructFromAnother(MR.CS.SignatureFilters.Blah._Underlying *_other);
                    _UnderlyingPtr = __MR_SignatureFilters_Blah_ConstructFromAnother(_other._UnderlyingPtr);
                }
            }

            /// Generated from class `MR::SignatureFilters::Blah`.
            /// This is the non-const half of the class.
            public class Blah : Const_Blah
            {
                internal unsafe Blah(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                public new unsafe MR.CS.SignatureFilters.A a
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_SignatureFilters_Blah_GetMutable_a", ExactSpelling = true)]
                        extern static MR.CS.SignatureFilters.A._Underlying *__MR_SignatureFilters_Blah_GetMutable_a(_Underlying *_this);
                        return new(__MR_SignatureFilters_Blah_GetMutable_a(_UnderlyingPtr), is_owning: false);
                    }
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe Blah() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_SignatureFilters_Blah_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.SignatureFilters.Blah._Underlying *__MR_SignatureFilters_Blah_DefaultConstruct();
                    _UnderlyingPtr = __MR_SignatureFilters_Blah_DefaultConstruct();
                }

                /// Generated from constructor `MR::SignatureFilters::Blah::Blah`.
                public unsafe Blah(MR.CS.SignatureFilters.Const_Blah _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_SignatureFilters_Blah_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.SignatureFilters.Blah._Underlying *__MR_SignatureFilters_Blah_ConstructFromAnother(MR.CS.SignatureFilters.Blah._Underlying *_other);
                    _UnderlyingPtr = __MR_SignatureFilters_Blah_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::SignatureFilters::Blah::operator=`.
                public unsafe MR.CS.SignatureFilters.Blah Assign(MR.CS.SignatureFilters.Const_Blah _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_SignatureFilters_Blah_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.SignatureFilters.Blah._Underlying *__MR_SignatureFilters_Blah_AssignFromAnother(_Underlying *_this, MR.CS.SignatureFilters.Blah._Underlying *_other);
                    return new(__MR_SignatureFilters_Blah_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }
            }

            /// This is used for optional parameters of class `Blah` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Blah`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Blah`/`Const_Blah` directly.
            public class _InOptMut_Blah
            {
                public Blah? Opt;

                public _InOptMut_Blah() {}
                public _InOptMut_Blah(Blah value) {Opt = value;}
                public static implicit operator _InOptMut_Blah(Blah value) {return new(value);}
            }

            /// This is used for optional parameters of class `Blah` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Blah`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Blah`/`Const_Blah` to pass it to the function.
            public class _InOptConst_Blah
            {
                public Const_Blah? Opt;

                public _InOptConst_Blah() {}
                public _InOptConst_Blah(Const_Blah value) {Opt = value;}
                public static implicit operator _InOptConst_Blah(Const_Blah value) {return new(value);}
            }

            /// Generated from function `MR::SignatureFilters::foo`.
            public static unsafe void Foo(MR.CS.SignatureFilters.Const_A _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_SignatureFilters_foo_1", ExactSpelling = true)]
                extern static void __MR_SignatureFilters_foo_1(MR.CS.SignatureFilters.A._Underlying *_1);
                __MR_SignatureFilters_foo_1(_1._UnderlyingPtr);
            }

            /// Generated from function `MR::SignatureFilters::foo`.
            public static unsafe MR.CS.SignatureFilters.A Foo()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_SignatureFilters_foo_0", ExactSpelling = true)]
                extern static MR.CS.SignatureFilters.A._Underlying *__MR_SignatureFilters_foo_0();
                return new(__MR_SignatureFilters_foo_0(), is_owning: true);
            }

            /// Generated from function `MR::SignatureFilters::foo2`.
            public static unsafe void Foo2(MR.CS.SignatureFilters.A _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_SignatureFilters_foo2_1", ExactSpelling = true)]
                extern static void __MR_SignatureFilters_foo2_1(MR.CS.SignatureFilters.A._Underlying *_1);
                __MR_SignatureFilters_foo2_1(_1._UnderlyingPtr);
            }

            /// Generated from function `MR::SignatureFilters::foo2`.
            public static unsafe MR.CS.SignatureFilters.A Foo2()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_SignatureFilters_foo2_0", ExactSpelling = true)]
                extern static MR.CS.SignatureFilters.A._Underlying *__MR_SignatureFilters_foo2_0();
                return new(__MR_SignatureFilters_foo2_0(), is_owning: false);
            }

            /// Generated from function `MR::SignatureFilters::foo3`.
            public static unsafe void Foo3(MR.CS.Misc._Moved<MR.CS.SignatureFilters.A> _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_SignatureFilters_foo3_1", ExactSpelling = true)]
                extern static void __MR_SignatureFilters_foo3_1(MR.CS.SignatureFilters.A._Underlying *_1);
                __MR_SignatureFilters_foo3_1(_1.Value._UnderlyingPtr);
            }

            /// Generated from function `MR::SignatureFilters::foo3`.
            public static unsafe MR.CS.Misc._Moved<MR.CS.SignatureFilters.A> Foo3()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_SignatureFilters_foo3_0", ExactSpelling = true)]
                extern static MR.CS.SignatureFilters.A._Underlying *__MR_SignatureFilters_foo3_0();
                return MR.CS.Misc.Move(new MR.CS.SignatureFilters.A(__MR_SignatureFilters_foo3_0(), is_owning: false));
            }

            /// Generated from function `MR::SignatureFilters::foo4`.
            public static unsafe void Foo4(MR.CS.SignatureFilters.Const_A _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_SignatureFilters_foo4_1", ExactSpelling = true)]
                extern static void __MR_SignatureFilters_foo4_1(MR.CS.SignatureFilters.Const_A._Underlying *_1);
                __MR_SignatureFilters_foo4_1(_1._UnderlyingPtr);
            }

            /// Generated from function `MR::SignatureFilters::foo4`.
            public static unsafe MR.CS.SignatureFilters.Const_A Foo4()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_SignatureFilters_foo4_0", ExactSpelling = true)]
                extern static MR.CS.SignatureFilters.Const_A._Underlying *__MR_SignatureFilters_foo4_0();
                return new(__MR_SignatureFilters_foo4_0(), is_owning: false);
            }

            /// Generated from function `MR::SignatureFilters::foo5`.
            public static unsafe void Foo5(MR.CS.Misc._Moved<MR.CS.SignatureFilters.Const_A> _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_SignatureFilters_foo5_1", ExactSpelling = true)]
                extern static void __MR_SignatureFilters_foo5_1(MR.CS.SignatureFilters.Const_A._Underlying *_1);
                __MR_SignatureFilters_foo5_1(_1.Value._UnderlyingPtr);
            }

            /// Generated from function `MR::SignatureFilters::foo5`.
            public static unsafe MR.CS.Misc._Moved<MR.CS.SignatureFilters.Const_A> Foo5()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_SignatureFilters_foo5_0", ExactSpelling = true)]
                extern static MR.CS.SignatureFilters.Const_A._Underlying *__MR_SignatureFilters_foo5_0();
                return MR.CS.Misc.Move(new MR.CS.SignatureFilters.Const_A(__MR_SignatureFilters_foo5_0(), is_owning: false));
            }
        }
    }
}
