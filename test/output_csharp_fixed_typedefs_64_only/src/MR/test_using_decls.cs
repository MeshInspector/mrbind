public static partial class MR
{
    public static partial class CS
    {
        public static partial class UsingDecls
        {
            // Test how `using` declarations import things.
            /// Generated from class `MR::UsingDecls::A`.
            /// Derived classes:
            ///   Direct: (non-virtual)
            ///     `MR::UsingDecls::B`
            /// This is the const half of the class.
            public class Const_A : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_A(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_UsingDecls_A_Destroy", ExactSpelling = true)]
                    extern static void __MR_UsingDecls_A_Destroy(_Underlying *_this);
                    __MR_UsingDecls_A_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_A() {Dispose(false);}

                public static unsafe ref int StaticVar
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_UsingDecls_A_GetMutable_StaticVar", ExactSpelling = true)]
                        extern static int *__MR_UsingDecls_A_GetMutable_StaticVar();
                        return ref *__MR_UsingDecls_A_GetMutable_StaticVar();
                    }
                }

                public unsafe int Field
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_UsingDecls_A_Get_Field", ExactSpelling = true)]
                        extern static int *__MR_UsingDecls_A_Get_Field(_Underlying *_this);
                        return *__MR_UsingDecls_A_Get_Field(_UnderlyingPtr);
                    }
                }

                /// Generated from constructor `MR::UsingDecls::A::A`.
                public unsafe Const_A(MR.CS.UsingDecls.Const_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_UsingDecls_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.UsingDecls.A._Underlying *__MR_UsingDecls_A_ConstructFromAnother(MR.CS.UsingDecls.A._Underlying *_other);
                    _UnderlyingPtr = __MR_UsingDecls_A_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from constructor `MR::UsingDecls::A::A`.
                public unsafe Const_A(int _1) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_UsingDecls_A_Construct", ExactSpelling = true)]
                    extern static MR.CS.UsingDecls.A._Underlying *__MR_UsingDecls_A_Construct(int _1);
                    _UnderlyingPtr = __MR_UsingDecls_A_Construct(_1);
                }

                /// Generated from constructor `MR::UsingDecls::A::A`.
                public static unsafe implicit operator Const_A(int _1) {return new(_1);}

                /// Generated from method `MR::UsingDecls::A::StaticFunc`.
                public static void StaticFunc()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_UsingDecls_A_StaticFunc", ExactSpelling = true)]
                    extern static void __MR_UsingDecls_A_StaticFunc();
                    __MR_UsingDecls_A_StaticFunc();
                }

                public enum E : int
                {
                }
            }

            // Test how `using` declarations import things.
            /// Generated from class `MR::UsingDecls::A`.
            /// Derived classes:
            ///   Direct: (non-virtual)
            ///     `MR::UsingDecls::B`
            /// This is the non-const half of the class.
            public class A : Const_A
            {
                internal unsafe A(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                public new unsafe ref int Field
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_UsingDecls_A_GetMutable_Field", ExactSpelling = true)]
                        extern static int *__MR_UsingDecls_A_GetMutable_Field(_Underlying *_this);
                        return ref *__MR_UsingDecls_A_GetMutable_Field(_UnderlyingPtr);
                    }
                }

                /// Generated from constructor `MR::UsingDecls::A::A`.
                public unsafe A(MR.CS.UsingDecls.Const_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_UsingDecls_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.UsingDecls.A._Underlying *__MR_UsingDecls_A_ConstructFromAnother(MR.CS.UsingDecls.A._Underlying *_other);
                    _UnderlyingPtr = __MR_UsingDecls_A_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from constructor `MR::UsingDecls::A::A`.
                public unsafe A(int _1) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_UsingDecls_A_Construct", ExactSpelling = true)]
                    extern static MR.CS.UsingDecls.A._Underlying *__MR_UsingDecls_A_Construct(int _1);
                    _UnderlyingPtr = __MR_UsingDecls_A_Construct(_1);
                }

                /// Generated from constructor `MR::UsingDecls::A::A`.
                public static unsafe implicit operator A(int _1) {return new(_1);}

                /// Generated from conversion operator `MR::UsingDecls::A::operator int`.
                public static unsafe implicit operator int(MR.CS.UsingDecls.A _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_UsingDecls_A_ConvertTo_int", ExactSpelling = true)]
                    extern static int __MR_UsingDecls_A_ConvertTo_int(MR.CS.UsingDecls.A._Underlying *_this);
                    return __MR_UsingDecls_A_ConvertTo_int(_this._UnderlyingPtr);
                }

                /// Generated from method `MR::UsingDecls::A::operator=`.
                public unsafe MR.CS.UsingDecls.A Assign(MR.CS.UsingDecls.Const_A _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_UsingDecls_A_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.UsingDecls.A._Underlying *__MR_UsingDecls_A_AssignFromAnother(_Underlying *_this, MR.CS.UsingDecls.A._Underlying *_other);
                    return new(__MR_UsingDecls_A_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }

                /// Generated from method `MR::UsingDecls::A::operator=`.
                public unsafe void Assign(int _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_UsingDecls_A_assign", ExactSpelling = true)]
                    extern static void __MR_UsingDecls_A_assign(_Underlying *_this, int _1);
                    __MR_UsingDecls_A_assign(_UnderlyingPtr, _1);
                }

                /// Generated from method `MR::UsingDecls::A::Method`.
                public unsafe void Method()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_UsingDecls_A_Method", ExactSpelling = true)]
                    extern static void __MR_UsingDecls_A_Method(_Underlying *_this);
                    __MR_UsingDecls_A_Method(_UnderlyingPtr);
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

                /// Generated from constructor `MR::UsingDecls::A::A`.
                public static unsafe implicit operator _InOptConst_A(int _1) {return new MR.CS.UsingDecls.A(_1);}
            }

            /// Generated from class `MR::UsingDecls::B`.
            /// Base classes:
            ///   Direct: (non-virtual)
            ///     `MR::UsingDecls::A`
            /// This is the const half of the class.
            public class Const_B : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_B(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_UsingDecls_B_Destroy", ExactSpelling = true)]
                    extern static void __MR_UsingDecls_B_Destroy(_Underlying *_this);
                    __MR_UsingDecls_B_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_B() {Dispose(false);}

                // Upcasts:
                public static unsafe implicit operator MR.CS.UsingDecls.Const_A(Const_B self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_UsingDecls_B_UpcastTo_MR_UsingDecls_A", ExactSpelling = true)]
                    extern static MR.CS.UsingDecls.Const_A._Underlying *__MR_UsingDecls_B_UpcastTo_MR_UsingDecls_A(_Underlying *_this);
                    MR.CS.UsingDecls.Const_A ret = new(__MR_UsingDecls_B_UpcastTo_MR_UsingDecls_A(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }

                public unsafe int Field
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_UsingDecls_B_Get_Field", ExactSpelling = true)]
                        extern static int *__MR_UsingDecls_B_Get_Field(_Underlying *_this);
                        return *__MR_UsingDecls_B_Get_Field(_UnderlyingPtr);
                    }
                }

                public static unsafe ref int StaticVar
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_UsingDecls_B_GetMutable_StaticVar", ExactSpelling = true)]
                        extern static int *__MR_UsingDecls_B_GetMutable_StaticVar();
                        return ref *__MR_UsingDecls_B_GetMutable_StaticVar();
                    }
                }

                /// Generated from constructor `MR::UsingDecls::B::B`.
                public unsafe Const_B(MR.CS.UsingDecls.Const_B _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_UsingDecls_B_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.UsingDecls.B._Underlying *__MR_UsingDecls_B_ConstructFromAnother(MR.CS.UsingDecls.B._Underlying *_other);
                    _UnderlyingPtr = __MR_UsingDecls_B_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::UsingDecls::B::StaticFunc`.
                public static void StaticFunc()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_UsingDecls_B_StaticFunc", ExactSpelling = true)]
                    extern static void __MR_UsingDecls_B_StaticFunc();
                    __MR_UsingDecls_B_StaticFunc();
                }
            }

            /// Generated from class `MR::UsingDecls::B`.
            /// Base classes:
            ///   Direct: (non-virtual)
            ///     `MR::UsingDecls::A`
            /// This is the non-const half of the class.
            public class B : Const_B
            {
                internal unsafe B(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                // Upcasts:
                public static unsafe implicit operator MR.CS.UsingDecls.A(B self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_UsingDecls_B_UpcastTo_MR_UsingDecls_A", ExactSpelling = true)]
                    extern static MR.CS.UsingDecls.A._Underlying *__MR_UsingDecls_B_UpcastTo_MR_UsingDecls_A(_Underlying *_this);
                    MR.CS.UsingDecls.A ret = new(__MR_UsingDecls_B_UpcastTo_MR_UsingDecls_A(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }

                public new unsafe ref int Field
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_UsingDecls_B_GetMutable_Field", ExactSpelling = true)]
                        extern static int *__MR_UsingDecls_B_GetMutable_Field(_Underlying *_this);
                        return ref *__MR_UsingDecls_B_GetMutable_Field(_UnderlyingPtr);
                    }
                }

                /// Generated from constructor `MR::UsingDecls::B::B`.
                public unsafe B(MR.CS.UsingDecls.Const_B _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_UsingDecls_B_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.UsingDecls.B._Underlying *__MR_UsingDecls_B_ConstructFromAnother(MR.CS.UsingDecls.B._Underlying *_other);
                    _UnderlyingPtr = __MR_UsingDecls_B_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from conversion operator `MR::UsingDecls::B::operator int`.
                public static unsafe implicit operator int(MR.CS.UsingDecls.B _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_UsingDecls_B_ConvertTo_int", ExactSpelling = true)]
                    extern static int __MR_UsingDecls_B_ConvertTo_int(MR.CS.UsingDecls.B._Underlying *_this);
                    return __MR_UsingDecls_B_ConvertTo_int(_this._UnderlyingPtr);
                }

                /// Generated from method `MR::UsingDecls::B::operator=`.
                public unsafe MR.CS.UsingDecls.B Assign(MR.CS.UsingDecls.Const_B _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_UsingDecls_B_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.UsingDecls.B._Underlying *__MR_UsingDecls_B_AssignFromAnother(_Underlying *_this, MR.CS.UsingDecls.B._Underlying *_other);
                    return new(__MR_UsingDecls_B_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }

                /// Generated from method `MR::UsingDecls::B::operator=`.
                public unsafe void Assign(int _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_UsingDecls_B_assign", ExactSpelling = true)]
                    extern static void __MR_UsingDecls_B_assign(_Underlying *_this, int _1);
                    __MR_UsingDecls_B_assign(_UnderlyingPtr, _1);
                }

                /// Generated from method `MR::UsingDecls::B::Method`.
                public unsafe void Method()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_UsingDecls_B_Method", ExactSpelling = true)]
                    extern static void __MR_UsingDecls_B_Method(_Underlying *_this);
                    __MR_UsingDecls_B_Method(_UnderlyingPtr);
                }
            }

            /// This is used for optional parameters of class `B` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_B`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `B`/`Const_B` directly.
            public class _InOptMut_B
            {
                public B? Opt;

                public _InOptMut_B() {}
                public _InOptMut_B(B value) {Opt = value;}
                public static implicit operator _InOptMut_B(B value) {return new(value);}
            }

            /// This is used for optional parameters of class `B` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_B`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `B`/`Const_B` to pass it to the function.
            public class _InOptConst_B
            {
                public Const_B? Opt;

                public _InOptConst_B() {}
                public _InOptConst_B(Const_B value) {Opt = value;}
                public static implicit operator _InOptConst_B(Const_B value) {return new(value);}
            }
        }
    }
}
