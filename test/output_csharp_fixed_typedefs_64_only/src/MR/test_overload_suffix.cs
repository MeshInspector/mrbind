public static partial class MR
{
    public static partial class CS
    {
        public static partial class OverloadSuffix
        {
            /// <summary>
            /// Generated from class `MR::OverloadSuffix::A`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_A : MR.CS.Misc.Object<Const_A>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_A_Destroy", ExactSpelling = true)]
                    extern static unsafe void __MR_OverloadSuffix_A_Destroy(_Underlying *_this);
                    __MR_OverloadSuffix_A_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_A() {Dispose(false);}

                internal unsafe Const_A(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Generated from constructor `MR::OverloadSuffix::A::A`.
                /// </summary>
                public unsafe Const_A(MR.CS.OverloadSuffix.Const_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static unsafe MR.CS.OverloadSuffix.A._Underlying *__MR_OverloadSuffix_A_ConstructFromAnother(MR.CS.OverloadSuffix.A._Underlying *_other);
                    _UnderlyingPtr = __MR_OverloadSuffix_A_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// <summary>
                /// Generated from constructor `MR::OverloadSuffix::A::A`.
                /// </summary>
                public Const_A(A _other) : this((Const_A)_other) {}

                /// <summary>
                /// Generated from constructor `MR::OverloadSuffix::A::A`.
                /// </summary>
                public unsafe Const_A(int _1) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_A_Construct_1_int", ExactSpelling = true)]
                    extern static unsafe MR.CS.OverloadSuffix.A._Underlying *__MR_OverloadSuffix_A_Construct_1_int(int _1);
                    _UnderlyingPtr = __MR_OverloadSuffix_A_Construct_1_int(_1);
                }

                /// <summary>
                /// Generated from constructor `MR::OverloadSuffix::A::A`.
                /// </summary>
                public static unsafe implicit operator Const_A(int _1) {return new(_1);}

                /// <summary>
                /// Generated from constructor `MR::OverloadSuffix::A::A`.
                /// </summary>
                public unsafe Const_A(float _1) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_A_Construct_1_float", ExactSpelling = true)]
                    extern static unsafe MR.CS.OverloadSuffix.A._Underlying *__MR_OverloadSuffix_A_Construct_1_float(float _1);
                    _UnderlyingPtr = __MR_OverloadSuffix_A_Construct_1_float(_1);
                }

                /// <summary>
                /// Generated from constructor `MR::OverloadSuffix::A::A`.
                /// </summary>
                public static unsafe implicit operator Const_A(float _1) {return new(_1);}

                /// <summary>
                /// Generated from constructor `MR::OverloadSuffix::A::A`.
                /// </summary>
                public unsafe Const_A(int _1, int _2) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_A_Construct_2", ExactSpelling = true)]
                    extern static unsafe MR.CS.OverloadSuffix.A._Underlying *__MR_OverloadSuffix_A_Construct_2(int _1, int _2);
                    _UnderlyingPtr = __MR_OverloadSuffix_A_Construct_2(_1, _2);
                }

                /// <summary>
                /// Generated from function `MR::OverloadSuffix::operator+`.
                /// </summary>
                public unsafe void add()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_pos_const_MR_OverloadSuffix_A_ref", ExactSpelling = true)]
                    extern static unsafe void __MR_C_pos_const_MR_OverloadSuffix_A_ref(_Underlying *_1);
                    __MR_C_pos_const_MR_OverloadSuffix_A_ref(_UnderlyingPtr);
                }
            }

            /// <summary>
            /// Generated from class `MR::OverloadSuffix::A`.
            /// This is the non-const half of the class.
            /// </summary>
            public class A : Const_A
            {
                internal unsafe A(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Generated from constructor `MR::OverloadSuffix::A::A`.
                /// </summary>
                public unsafe A(MR.CS.OverloadSuffix.Const_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static unsafe MR.CS.OverloadSuffix.A._Underlying *__MR_OverloadSuffix_A_ConstructFromAnother(MR.CS.OverloadSuffix.A._Underlying *_other);
                    _UnderlyingPtr = __MR_OverloadSuffix_A_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// <summary>
                /// Generated from constructor `MR::OverloadSuffix::A::A`.
                /// </summary>
                public A(A _other) : this((Const_A)_other) {}

                /// <summary>
                /// Generated from constructor `MR::OverloadSuffix::A::A`.
                /// </summary>
                public unsafe A(int _1) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_A_Construct_1_int", ExactSpelling = true)]
                    extern static unsafe MR.CS.OverloadSuffix.A._Underlying *__MR_OverloadSuffix_A_Construct_1_int(int _1);
                    _UnderlyingPtr = __MR_OverloadSuffix_A_Construct_1_int(_1);
                }

                /// <summary>
                /// Generated from constructor `MR::OverloadSuffix::A::A`.
                /// </summary>
                public static unsafe implicit operator A(int _1) {return new(_1);}

                /// <summary>
                /// Generated from constructor `MR::OverloadSuffix::A::A`.
                /// </summary>
                public unsafe A(float _1) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_A_Construct_1_float", ExactSpelling = true)]
                    extern static unsafe MR.CS.OverloadSuffix.A._Underlying *__MR_OverloadSuffix_A_Construct_1_float(float _1);
                    _UnderlyingPtr = __MR_OverloadSuffix_A_Construct_1_float(_1);
                }

                /// <summary>
                /// Generated from constructor `MR::OverloadSuffix::A::A`.
                /// </summary>
                public static unsafe implicit operator A(float _1) {return new(_1);}

                /// <summary>
                /// Generated from constructor `MR::OverloadSuffix::A::A`.
                /// </summary>
                public unsafe A(int _1, int _2) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_A_Construct_2", ExactSpelling = true)]
                    extern static unsafe MR.CS.OverloadSuffix.A._Underlying *__MR_OverloadSuffix_A_Construct_2(int _1, int _2);
                    _UnderlyingPtr = __MR_OverloadSuffix_A_Construct_2(_1, _2);
                }

                /// <summary>
                /// Generated from method `MR::OverloadSuffix::A::operator=`.
                /// </summary>
                public unsafe MR.CS.OverloadSuffix.A assign(MR.CS.OverloadSuffix.Const_A _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_A_AssignFromAnother", ExactSpelling = true)]
                    extern static unsafe MR.CS.OverloadSuffix.A._Underlying *__MR_OverloadSuffix_A_AssignFromAnother(_Underlying *_this, MR.CS.OverloadSuffix.A._Underlying *_other);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_OverloadSuffix_A_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }

                /// <summary>
                /// Generated from method `MR::OverloadSuffix::A::foo`.
                /// </summary>
                public unsafe void foo(int _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_A_foo_1_int", ExactSpelling = true)]
                    extern static unsafe void __MR_OverloadSuffix_A_foo_1_int(_Underlying *_this, int _1);
                    __MR_OverloadSuffix_A_foo_1_int(_UnderlyingPtr, _1);
                }

                /// <summary>
                /// Generated from method `MR::OverloadSuffix::A::foo`.
                /// </summary>
                public unsafe void foo(float _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_A_foo_1_float", ExactSpelling = true)]
                    extern static unsafe void __MR_OverloadSuffix_A_foo_1_float(_Underlying *_this, float _1);
                    __MR_OverloadSuffix_A_foo_1_float(_UnderlyingPtr, _1);
                }

                /// <summary>
                /// Generated from method `MR::OverloadSuffix::A::foo`.
                /// </summary>
                public unsafe void foo(int _1, int _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_A_foo_2", ExactSpelling = true)]
                    extern static unsafe void __MR_OverloadSuffix_A_foo_2(_Underlying *_this, int _1, int _2);
                    __MR_OverloadSuffix_A_foo_2(_UnderlyingPtr, _1, _2);
                }

                /// <summary>
                /// Generated from method `MR::OverloadSuffix::A::operator-`.
                /// </summary>
                public unsafe void sub(int _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_sub_MR_OverloadSuffix_A_int", ExactSpelling = true)]
                    extern static unsafe void __MR_C_sub_MR_OverloadSuffix_A_int(_Underlying *_this, int _1);
                    __MR_C_sub_MR_OverloadSuffix_A_int(_UnderlyingPtr, _1);
                }

                /// <summary>
                /// Generated from method `MR::OverloadSuffix::A::operator-`.
                /// </summary>
                public unsafe void sub(float _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_sub_MR_OverloadSuffix_A_float", ExactSpelling = true)]
                    extern static unsafe void __MR_C_sub_MR_OverloadSuffix_A_float(_Underlying *_this, float _1);
                    __MR_C_sub_MR_OverloadSuffix_A_float(_UnderlyingPtr, _1);
                }

                /// <summary>
                /// Generated from method `MR::OverloadSuffix::A::operator[]`.
                /// </summary>
                public unsafe void index(int _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_A_index_int", ExactSpelling = true)]
                    extern static unsafe void __MR_OverloadSuffix_A_index_int(_Underlying *_this, int _1);
                    __MR_OverloadSuffix_A_index_int(_UnderlyingPtr, _1);
                }

                /// <summary>
                /// Generated from method `MR::OverloadSuffix::A::operator[]`.
                /// </summary>
                public unsafe void index(float _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_A_index_float", ExactSpelling = true)]
                    extern static unsafe void __MR_OverloadSuffix_A_index_float(_Underlying *_this, float _1);
                    __MR_OverloadSuffix_A_index_float(_UnderlyingPtr, _1);
                }

                /// <summary>
                /// Generated from function `MR::OverloadSuffix::operator+`.
                /// </summary>
                public unsafe new void add()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_pos_MR_OverloadSuffix_A_ref", ExactSpelling = true)]
                    extern static unsafe void __MR_C_pos_MR_OverloadSuffix_A_ref(_Underlying *_1);
                    __MR_C_pos_MR_OverloadSuffix_A_ref(_UnderlyingPtr);
                }
            }

            /// <summary>
            /// This is used for optional parameters of class `A` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_A`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `A`/`Const_A` directly.
            /// </summary>
            public class _InOptMut_A
            {
                public A? Opt;

                public _InOptMut_A() {}
                public _InOptMut_A(A value) {Opt = value;}
                public static implicit operator _InOptMut_A(A value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `A` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_A`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `A`/`Const_A` to pass it to the function.
            /// </summary>
            public class _InOptConst_A
            {
                public Const_A? Opt;

                public _InOptConst_A() {}
                public _InOptConst_A(Const_A value) {Opt = value;}
                public static implicit operator _InOptConst_A(Const_A value) {return new(value);}

                /// <summary>
                /// Generated from constructor `MR::OverloadSuffix::A::A`.
                /// </summary>
                public static unsafe implicit operator _InOptConst_A(int _1) {return new Const_A(_1);}

                /// <summary>
                /// Generated from constructor `MR::OverloadSuffix::A::A`.
                /// </summary>
                public static unsafe implicit operator _InOptConst_A(float _1) {return new Const_A(_1);}
            }

            /// <summary>
            /// Generated from class `MR::OverloadSuffix::B`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_B : MR.CS.Misc.Object<Const_B>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_B_Destroy", ExactSpelling = true)]
                    extern static unsafe void __MR_OverloadSuffix_B_Destroy(_Underlying *_this);
                    __MR_OverloadSuffix_B_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_B() {Dispose(false);}

                internal unsafe Const_B(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Generated from constructor `MR::OverloadSuffix::B::B`.
                /// </summary>
                public unsafe Const_B(MR.CS.OverloadSuffix.Const_B _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_B_ConstructFromAnother", ExactSpelling = true)]
                    extern static unsafe MR.CS.OverloadSuffix.B._Underlying *__MR_OverloadSuffix_B_ConstructFromAnother(MR.CS.OverloadSuffix.B._Underlying *_other);
                    _UnderlyingPtr = __MR_OverloadSuffix_B_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// <summary>
                /// Generated from constructor `MR::OverloadSuffix::B::B`.
                /// </summary>
                public Const_B(B _other) : this((Const_B)_other) {}

                /// <summary>
                /// Generated from constructor `MR::OverloadSuffix::B::B`.
                /// </summary>
                public unsafe Const_B(int _1) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_B_Construct", ExactSpelling = true)]
                    extern static unsafe MR.CS.OverloadSuffix.B._Underlying *__MR_OverloadSuffix_B_Construct(int _1);
                    _UnderlyingPtr = __MR_OverloadSuffix_B_Construct(_1);
                }

                /// <summary>
                /// Generated from constructor `MR::OverloadSuffix::B::B`.
                /// </summary>
                public static unsafe implicit operator Const_B(int _1) {return new(_1);}

                /// <summary>
                /// Generated from constructor `MR::OverloadSuffix::B::B`.
                /// </summary>
                public unsafe Const_B(float _1) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_B_Construct_1", ExactSpelling = true)]
                    extern static unsafe MR.CS.OverloadSuffix.B._Underlying *__MR_OverloadSuffix_B_Construct_1(float _1);
                    _UnderlyingPtr = __MR_OverloadSuffix_B_Construct_1(_1);
                }

                /// <summary>
                /// Generated from constructor `MR::OverloadSuffix::B::B`.
                /// </summary>
                public static unsafe implicit operator Const_B(float _1) {return new(_1);}

                /// <summary>
                /// Generated from constructor `MR::OverloadSuffix::B::B`.
                /// </summary>
                public unsafe Const_B(int _1, int _2) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_B_Construct_2", ExactSpelling = true)]
                    extern static unsafe MR.CS.OverloadSuffix.B._Underlying *__MR_OverloadSuffix_B_Construct_2(int _1, int _2);
                    _UnderlyingPtr = __MR_OverloadSuffix_B_Construct_2(_1, _2);
                }

                /// <summary>
                /// Generated from function `MR::OverloadSuffix::operator+`.
                /// </summary>
                public unsafe void add()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_pos_const_MR_OverloadSuffix_B_ref", ExactSpelling = true)]
                    extern static unsafe void __MR_C_pos_const_MR_OverloadSuffix_B_ref(_Underlying *_1);
                    __MR_C_pos_const_MR_OverloadSuffix_B_ref(_UnderlyingPtr);
                }
            }

            /// <summary>
            /// Generated from class `MR::OverloadSuffix::B`.
            /// This is the non-const half of the class.
            /// </summary>
            public class B : Const_B
            {
                internal unsafe B(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Generated from constructor `MR::OverloadSuffix::B::B`.
                /// </summary>
                public unsafe B(MR.CS.OverloadSuffix.Const_B _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_B_ConstructFromAnother", ExactSpelling = true)]
                    extern static unsafe MR.CS.OverloadSuffix.B._Underlying *__MR_OverloadSuffix_B_ConstructFromAnother(MR.CS.OverloadSuffix.B._Underlying *_other);
                    _UnderlyingPtr = __MR_OverloadSuffix_B_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// <summary>
                /// Generated from constructor `MR::OverloadSuffix::B::B`.
                /// </summary>
                public B(B _other) : this((Const_B)_other) {}

                /// <summary>
                /// Generated from constructor `MR::OverloadSuffix::B::B`.
                /// </summary>
                public unsafe B(int _1) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_B_Construct", ExactSpelling = true)]
                    extern static unsafe MR.CS.OverloadSuffix.B._Underlying *__MR_OverloadSuffix_B_Construct(int _1);
                    _UnderlyingPtr = __MR_OverloadSuffix_B_Construct(_1);
                }

                /// <summary>
                /// Generated from constructor `MR::OverloadSuffix::B::B`.
                /// </summary>
                public static unsafe implicit operator B(int _1) {return new(_1);}

                /// <summary>
                /// Generated from constructor `MR::OverloadSuffix::B::B`.
                /// </summary>
                public unsafe B(float _1) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_B_Construct_1", ExactSpelling = true)]
                    extern static unsafe MR.CS.OverloadSuffix.B._Underlying *__MR_OverloadSuffix_B_Construct_1(float _1);
                    _UnderlyingPtr = __MR_OverloadSuffix_B_Construct_1(_1);
                }

                /// <summary>
                /// Generated from constructor `MR::OverloadSuffix::B::B`.
                /// </summary>
                public static unsafe implicit operator B(float _1) {return new(_1);}

                /// <summary>
                /// Generated from constructor `MR::OverloadSuffix::B::B`.
                /// </summary>
                public unsafe B(int _1, int _2) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_B_Construct_2", ExactSpelling = true)]
                    extern static unsafe MR.CS.OverloadSuffix.B._Underlying *__MR_OverloadSuffix_B_Construct_2(int _1, int _2);
                    _UnderlyingPtr = __MR_OverloadSuffix_B_Construct_2(_1, _2);
                }

                /// <summary>
                /// Generated from method `MR::OverloadSuffix::B::operator=`.
                /// </summary>
                public unsafe MR.CS.OverloadSuffix.B assign(MR.CS.OverloadSuffix.Const_B _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_B_AssignFromAnother", ExactSpelling = true)]
                    extern static unsafe MR.CS.OverloadSuffix.B._Underlying *__MR_OverloadSuffix_B_AssignFromAnother(_Underlying *_this, MR.CS.OverloadSuffix.B._Underlying *_other);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_OverloadSuffix_B_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }

                /// <summary>
                /// Generated from method `MR::OverloadSuffix::B::foo`.
                /// </summary>
                public unsafe void foo(int _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_B_foo", ExactSpelling = true)]
                    extern static unsafe void __MR_OverloadSuffix_B_foo(_Underlying *_this, int _1);
                    __MR_OverloadSuffix_B_foo(_UnderlyingPtr, _1);
                }

                /// <summary>
                /// Generated from method `MR::OverloadSuffix::B::foo`.
                /// </summary>
                public unsafe void foo(float _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_B_foo_1", ExactSpelling = true)]
                    extern static unsafe void __MR_OverloadSuffix_B_foo_1(_Underlying *_this, float _1);
                    __MR_OverloadSuffix_B_foo_1(_UnderlyingPtr, _1);
                }

                /// <summary>
                /// Generated from method `MR::OverloadSuffix::B::foo`.
                /// </summary>
                public unsafe void foo(int _1, int _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_B_foo_2", ExactSpelling = true)]
                    extern static unsafe void __MR_OverloadSuffix_B_foo_2(_Underlying *_this, int _1, int _2);
                    __MR_OverloadSuffix_B_foo_2(_UnderlyingPtr, _1, _2);
                }

                // Currently has no effect on those.
                /// <summary>
                /// Generated from method `MR::OverloadSuffix::B::operator-`.
                /// </summary>
                public unsafe void sub(int _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_sub_MR_OverloadSuffix_B_int", ExactSpelling = true)]
                    extern static unsafe void __MR_C_sub_MR_OverloadSuffix_B_int(_Underlying *_this, int _1);
                    __MR_C_sub_MR_OverloadSuffix_B_int(_UnderlyingPtr, _1);
                }

                /// <summary>
                /// Generated from method `MR::OverloadSuffix::B::operator-`.
                /// </summary>
                public unsafe void sub(float _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_sub_MR_OverloadSuffix_B_float", ExactSpelling = true)]
                    extern static unsafe void __MR_C_sub_MR_OverloadSuffix_B_float(_Underlying *_this, float _1);
                    __MR_C_sub_MR_OverloadSuffix_B_float(_UnderlyingPtr, _1);
                }

                // Works on those, though.
                /// <summary>
                /// Generated from method `MR::OverloadSuffix::B::operator[]`.
                /// </summary>
                public unsafe void index(int _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_B_index", ExactSpelling = true)]
                    extern static unsafe void __MR_OverloadSuffix_B_index(_Underlying *_this, int _1);
                    __MR_OverloadSuffix_B_index(_UnderlyingPtr, _1);
                }

                /// <summary>
                /// Generated from method `MR::OverloadSuffix::B::operator[]`.
                /// </summary>
                public unsafe void index(float _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_B_index_float", ExactSpelling = true)]
                    extern static unsafe void __MR_OverloadSuffix_B_index_float(_Underlying *_this, float _1);
                    __MR_OverloadSuffix_B_index_float(_UnderlyingPtr, _1);
                }

                // Currently has no effect on those.
                /// <summary>
                /// Generated from function `MR::OverloadSuffix::operator+`.
                /// </summary>
                public unsafe new void add()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_pos_MR_OverloadSuffix_B_ref", ExactSpelling = true)]
                    extern static unsafe void __MR_C_pos_MR_OverloadSuffix_B_ref(_Underlying *_1);
                    __MR_C_pos_MR_OverloadSuffix_B_ref(_UnderlyingPtr);
                }
            }

            /// <summary>
            /// This is used for optional parameters of class `B` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_B`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `B`/`Const_B` directly.
            /// </summary>
            public class _InOptMut_B
            {
                public B? Opt;

                public _InOptMut_B() {}
                public _InOptMut_B(B value) {Opt = value;}
                public static implicit operator _InOptMut_B(B value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `B` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_B`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `B`/`Const_B` to pass it to the function.
            /// </summary>
            public class _InOptConst_B
            {
                public Const_B? Opt;

                public _InOptConst_B() {}
                public _InOptConst_B(Const_B value) {Opt = value;}
                public static implicit operator _InOptConst_B(Const_B value) {return new(value);}

                /// <summary>
                /// Generated from constructor `MR::OverloadSuffix::B::B`.
                /// </summary>
                public static unsafe implicit operator _InOptConst_B(int _1) {return new Const_B(_1);}

                /// <summary>
                /// Generated from constructor `MR::OverloadSuffix::B::B`.
                /// </summary>
                public static unsafe implicit operator _InOptConst_B(float _1) {return new Const_B(_1);}
            }

            /// <summary>
            /// Generated from class `MR::OverloadSuffix::C`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_C : MR.CS.Misc.Object<Const_C>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_C_Destroy", ExactSpelling = true)]
                    extern static unsafe void __MR_OverloadSuffix_C_Destroy(_Underlying *_this);
                    __MR_OverloadSuffix_C_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_C() {Dispose(false);}

                internal unsafe Const_C(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Generated from constructor `MR::OverloadSuffix::C::C`.
                /// </summary>
                public unsafe Const_C(MR.CS.OverloadSuffix.Const_C _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_C_ConstructFromAnother", ExactSpelling = true)]
                    extern static unsafe MR.CS.OverloadSuffix.C._Underlying *__MR_OverloadSuffix_C_ConstructFromAnother(MR.CS.OverloadSuffix.C._Underlying *_other);
                    _UnderlyingPtr = __MR_OverloadSuffix_C_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// <summary>
                /// Generated from constructor `MR::OverloadSuffix::C::C`.
                /// </summary>
                public Const_C(C _other) : this((Const_C)_other) {}

                /// <summary>
                /// Generated from constructor `MR::OverloadSuffix::C::C`.
                /// </summary>
                public unsafe Const_C(int _1) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_C_Construct_blah", ExactSpelling = true)]
                    extern static unsafe MR.CS.OverloadSuffix.C._Underlying *__MR_OverloadSuffix_C_Construct_blah(int _1);
                    _UnderlyingPtr = __MR_OverloadSuffix_C_Construct_blah(_1);
                }

                /// <summary>
                /// Generated from constructor `MR::OverloadSuffix::C::C`.
                /// </summary>
                public static unsafe implicit operator Const_C(int _1) {return new(_1);}

                /// <summary>
                /// Generated from constructor `MR::OverloadSuffix::C::C`.
                /// </summary>
                public unsafe Const_C(float _1) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_C_Construct_1", ExactSpelling = true)]
                    extern static unsafe MR.CS.OverloadSuffix.C._Underlying *__MR_OverloadSuffix_C_Construct_1(float _1);
                    _UnderlyingPtr = __MR_OverloadSuffix_C_Construct_1(_1);
                }

                /// <summary>
                /// Generated from constructor `MR::OverloadSuffix::C::C`.
                /// </summary>
                public static unsafe implicit operator Const_C(float _1) {return new(_1);}

                /// <summary>
                /// Generated from constructor `MR::OverloadSuffix::C::C`.
                /// </summary>
                public unsafe Const_C(int _1, int _2) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_C_Construct_2", ExactSpelling = true)]
                    extern static unsafe MR.CS.OverloadSuffix.C._Underlying *__MR_OverloadSuffix_C_Construct_2(int _1, int _2);
                    _UnderlyingPtr = __MR_OverloadSuffix_C_Construct_2(_1, _2);
                }

                /// <summary>
                /// Generated from function `MR::OverloadSuffix::operator+`.
                /// </summary>
                public unsafe void add()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_pos_const_MR_OverloadSuffix_C_ref", ExactSpelling = true)]
                    extern static unsafe void __MR_C_pos_const_MR_OverloadSuffix_C_ref(_Underlying *_1);
                    __MR_C_pos_const_MR_OverloadSuffix_C_ref(_UnderlyingPtr);
                }
            }

            /// <summary>
            /// Generated from class `MR::OverloadSuffix::C`.
            /// This is the non-const half of the class.
            /// </summary>
            public class C : Const_C
            {
                internal unsafe C(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Generated from constructor `MR::OverloadSuffix::C::C`.
                /// </summary>
                public unsafe C(MR.CS.OverloadSuffix.Const_C _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_C_ConstructFromAnother", ExactSpelling = true)]
                    extern static unsafe MR.CS.OverloadSuffix.C._Underlying *__MR_OverloadSuffix_C_ConstructFromAnother(MR.CS.OverloadSuffix.C._Underlying *_other);
                    _UnderlyingPtr = __MR_OverloadSuffix_C_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// <summary>
                /// Generated from constructor `MR::OverloadSuffix::C::C`.
                /// </summary>
                public C(C _other) : this((Const_C)_other) {}

                /// <summary>
                /// Generated from constructor `MR::OverloadSuffix::C::C`.
                /// </summary>
                public unsafe C(int _1) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_C_Construct_blah", ExactSpelling = true)]
                    extern static unsafe MR.CS.OverloadSuffix.C._Underlying *__MR_OverloadSuffix_C_Construct_blah(int _1);
                    _UnderlyingPtr = __MR_OverloadSuffix_C_Construct_blah(_1);
                }

                /// <summary>
                /// Generated from constructor `MR::OverloadSuffix::C::C`.
                /// </summary>
                public static unsafe implicit operator C(int _1) {return new(_1);}

                /// <summary>
                /// Generated from constructor `MR::OverloadSuffix::C::C`.
                /// </summary>
                public unsafe C(float _1) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_C_Construct_1", ExactSpelling = true)]
                    extern static unsafe MR.CS.OverloadSuffix.C._Underlying *__MR_OverloadSuffix_C_Construct_1(float _1);
                    _UnderlyingPtr = __MR_OverloadSuffix_C_Construct_1(_1);
                }

                /// <summary>
                /// Generated from constructor `MR::OverloadSuffix::C::C`.
                /// </summary>
                public static unsafe implicit operator C(float _1) {return new(_1);}

                /// <summary>
                /// Generated from constructor `MR::OverloadSuffix::C::C`.
                /// </summary>
                public unsafe C(int _1, int _2) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_C_Construct_2", ExactSpelling = true)]
                    extern static unsafe MR.CS.OverloadSuffix.C._Underlying *__MR_OverloadSuffix_C_Construct_2(int _1, int _2);
                    _UnderlyingPtr = __MR_OverloadSuffix_C_Construct_2(_1, _2);
                }

                /// <summary>
                /// Generated from method `MR::OverloadSuffix::C::operator=`.
                /// </summary>
                public unsafe MR.CS.OverloadSuffix.C assign(MR.CS.OverloadSuffix.Const_C _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_C_AssignFromAnother", ExactSpelling = true)]
                    extern static unsafe MR.CS.OverloadSuffix.C._Underlying *__MR_OverloadSuffix_C_AssignFromAnother(_Underlying *_this, MR.CS.OverloadSuffix.C._Underlying *_other);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_OverloadSuffix_C_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }

                /// <summary>
                /// Generated from method `MR::OverloadSuffix::C::foo`.
                /// </summary>
                public unsafe void foo(int _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_C_foo_blah", ExactSpelling = true)]
                    extern static unsafe void __MR_OverloadSuffix_C_foo_blah(_Underlying *_this, int _1);
                    __MR_OverloadSuffix_C_foo_blah(_UnderlyingPtr, _1);
                }

                /// <summary>
                /// Generated from method `MR::OverloadSuffix::C::foo`.
                /// </summary>
                public unsafe void foo(float _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_C_foo_1", ExactSpelling = true)]
                    extern static unsafe void __MR_OverloadSuffix_C_foo_1(_Underlying *_this, float _1);
                    __MR_OverloadSuffix_C_foo_1(_UnderlyingPtr, _1);
                }

                /// <summary>
                /// Generated from method `MR::OverloadSuffix::C::foo`.
                /// </summary>
                public unsafe void foo(int _1, int _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_C_foo_2", ExactSpelling = true)]
                    extern static unsafe void __MR_OverloadSuffix_C_foo_2(_Underlying *_this, int _1, int _2);
                    __MR_OverloadSuffix_C_foo_2(_UnderlyingPtr, _1, _2);
                }

                // Currently has no effect on those.
                /// <summary>
                /// Generated from method `MR::OverloadSuffix::C::operator-`.
                /// </summary>
                public unsafe void sub(int _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_sub_MR_OverloadSuffix_C_int", ExactSpelling = true)]
                    extern static unsafe void __MR_C_sub_MR_OverloadSuffix_C_int(_Underlying *_this, int _1);
                    __MR_C_sub_MR_OverloadSuffix_C_int(_UnderlyingPtr, _1);
                }

                /// <summary>
                /// Generated from method `MR::OverloadSuffix::C::operator-`.
                /// </summary>
                public unsafe void sub(float _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_sub_MR_OverloadSuffix_C_float", ExactSpelling = true)]
                    extern static unsafe void __MR_C_sub_MR_OverloadSuffix_C_float(_Underlying *_this, float _1);
                    __MR_C_sub_MR_OverloadSuffix_C_float(_UnderlyingPtr, _1);
                }

                // Works on those, though.
                /// <summary>
                /// Generated from method `MR::OverloadSuffix::C::operator[]`.
                /// </summary>
                public unsafe void index(int _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_C_index_blah", ExactSpelling = true)]
                    extern static unsafe void __MR_OverloadSuffix_C_index_blah(_Underlying *_this, int _1);
                    __MR_OverloadSuffix_C_index_blah(_UnderlyingPtr, _1);
                }

                /// <summary>
                /// Generated from method `MR::OverloadSuffix::C::operator[]`.
                /// </summary>
                public unsafe void index(float _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_C_index", ExactSpelling = true)]
                    extern static unsafe void __MR_OverloadSuffix_C_index(_Underlying *_this, float _1);
                    __MR_OverloadSuffix_C_index(_UnderlyingPtr, _1);
                }

                // Currently has no effect on those.
                /// <summary>
                /// Generated from function `MR::OverloadSuffix::operator+`.
                /// </summary>
                public unsafe new void add()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_pos_MR_OverloadSuffix_C_ref", ExactSpelling = true)]
                    extern static unsafe void __MR_C_pos_MR_OverloadSuffix_C_ref(_Underlying *_1);
                    __MR_C_pos_MR_OverloadSuffix_C_ref(_UnderlyingPtr);
                }
            }

            /// <summary>
            /// This is used for optional parameters of class `C` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_C`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `C`/`Const_C` directly.
            /// </summary>
            public class _InOptMut_C
            {
                public C? Opt;

                public _InOptMut_C() {}
                public _InOptMut_C(C value) {Opt = value;}
                public static implicit operator _InOptMut_C(C value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `C` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_C`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `C`/`Const_C` to pass it to the function.
            /// </summary>
            public class _InOptConst_C
            {
                public Const_C? Opt;

                public _InOptConst_C() {}
                public _InOptConst_C(Const_C value) {Opt = value;}
                public static implicit operator _InOptConst_C(Const_C value) {return new(value);}

                /// <summary>
                /// Generated from constructor `MR::OverloadSuffix::C::C`.
                /// </summary>
                public static unsafe implicit operator _InOptConst_C(int _1) {return new Const_C(_1);}

                /// <summary>
                /// Generated from constructor `MR::OverloadSuffix::C::C`.
                /// </summary>
                public static unsafe implicit operator _InOptConst_C(float _1) {return new Const_C(_1);}
            }

            // Just normal stuff with no annotations:
            /// <summary>
            /// Generated from function `MR::OverloadSuffix::foo_a`.
            /// </summary>
            public static void fooA(int _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_foo_a_1_int", ExactSpelling = true)]
                extern static void __MR_OverloadSuffix_foo_a_1_int(int _1);
                __MR_OverloadSuffix_foo_a_1_int(_1);
            }

            /// <summary>
            /// Generated from function `MR::OverloadSuffix::foo_a`.
            /// </summary>
            public static void fooA(float _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_foo_a_1_float", ExactSpelling = true)]
                extern static void __MR_OverloadSuffix_foo_a_1_float(float _1);
                __MR_OverloadSuffix_foo_a_1_float(_1);
            }

            /// <summary>
            /// Generated from function `MR::OverloadSuffix::foo_a`.
            /// </summary>
            public static void fooA(int _1, int _2)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_foo_a_2", ExactSpelling = true)]
                extern static void __MR_OverloadSuffix_foo_a_2(int _1, int _2);
                __MR_OverloadSuffix_foo_a_2(_1, _2);
            }

            /// <summary>
            /// Generated from function `MR::OverloadSuffix::bar_a`.
            /// </summary>
            public static void barA(int _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_bar_a_int", ExactSpelling = true)]
                extern static void __MR_OverloadSuffix_bar_a_int(int _1);
                __MR_OverloadSuffix_bar_a_int(_1);
            }

            /// <summary>
            /// Generated from function `MR::OverloadSuffix::bar_a`.
            /// </summary>
            public static void barA(float _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_bar_a_float", ExactSpelling = true)]
                extern static void __MR_OverloadSuffix_bar_a_float(float _1);
                __MR_OverloadSuffix_bar_a_float(_1);
            }

            /// <summary>
            /// Generated from function `MR::OverloadSuffix::baz_a`.
            /// </summary>
            public static void bazA(int _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_baz_a_1", ExactSpelling = true)]
                extern static void __MR_OverloadSuffix_baz_a_1(int _1);
                __MR_OverloadSuffix_baz_a_1(_1);
            }

            /// <summary>
            /// Generated from function `MR::OverloadSuffix::baz_a`.
            /// </summary>
            public static void bazA(int _1, int _2)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_baz_a_2", ExactSpelling = true)]
                extern static void __MR_OverloadSuffix_baz_a_2(int _1, int _2);
                __MR_OverloadSuffix_baz_a_2(_1, _2);
            }

            // With empty suffix:
            /// <summary>
            /// Generated from function `MR::OverloadSuffix::foo_b`.
            /// </summary>
            public static void fooB(int _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_foo_b", ExactSpelling = true)]
                extern static void __MR_OverloadSuffix_foo_b(int _1);
                __MR_OverloadSuffix_foo_b(_1);
            }

            /// <summary>
            /// Generated from function `MR::OverloadSuffix::foo_b`.
            /// </summary>
            public static void fooB(float _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_foo_b_1", ExactSpelling = true)]
                extern static void __MR_OverloadSuffix_foo_b_1(float _1);
                __MR_OverloadSuffix_foo_b_1(_1);
            }

            /// <summary>
            /// Generated from function `MR::OverloadSuffix::foo_b`.
            /// </summary>
            public static void fooB(int _1, int _2)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_foo_b_2", ExactSpelling = true)]
                extern static void __MR_OverloadSuffix_foo_b_2(int _1, int _2);
                __MR_OverloadSuffix_foo_b_2(_1, _2);
            }

            /// <summary>
            /// Generated from function `MR::OverloadSuffix::bar_b`.
            /// </summary>
            public static void barB(int _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_bar_b", ExactSpelling = true)]
                extern static void __MR_OverloadSuffix_bar_b(int _1);
                __MR_OverloadSuffix_bar_b(_1);
            }

            /// <summary>
            /// Generated from function `MR::OverloadSuffix::bar_b`.
            /// </summary>
            public static void barB(float _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_bar_b_float", ExactSpelling = true)]
                extern static void __MR_OverloadSuffix_bar_b_float(float _1);
                __MR_OverloadSuffix_bar_b_float(_1);
            }

            /// <summary>
            /// Generated from function `MR::OverloadSuffix::baz_b`.
            /// </summary>
            public static void bazB(int _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_baz_b", ExactSpelling = true)]
                extern static void __MR_OverloadSuffix_baz_b(int _1);
                __MR_OverloadSuffix_baz_b(_1);
            }

            /// <summary>
            /// Generated from function `MR::OverloadSuffix::baz_b`.
            /// </summary>
            public static void bazB(int _1, int _2)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_baz_b_int", ExactSpelling = true)]
                extern static void __MR_OverloadSuffix_baz_b_int(int _1, int _2);
                __MR_OverloadSuffix_baz_b_int(_1, _2);
            }

            // With custom suffix:
            /// <summary>
            /// Generated from function `MR::OverloadSuffix::foo_c`.
            /// </summary>
            public static void fooC(int _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_foo_c_blah", ExactSpelling = true)]
                extern static void __MR_OverloadSuffix_foo_c_blah(int _1);
                __MR_OverloadSuffix_foo_c_blah(_1);
            }

            /// <summary>
            /// Generated from function `MR::OverloadSuffix::foo_c`.
            /// </summary>
            public static void fooC(float _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_foo_c_1", ExactSpelling = true)]
                extern static void __MR_OverloadSuffix_foo_c_1(float _1);
                __MR_OverloadSuffix_foo_c_1(_1);
            }

            /// <summary>
            /// Generated from function `MR::OverloadSuffix::foo_c`.
            /// </summary>
            public static void fooC(int _1, int _2)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_foo_c_2", ExactSpelling = true)]
                extern static void __MR_OverloadSuffix_foo_c_2(int _1, int _2);
                __MR_OverloadSuffix_foo_c_2(_1, _2);
            }

            /// <summary>
            /// Generated from function `MR::OverloadSuffix::bar_c`.
            /// </summary>
            public static void barC(int _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_bar_c_blah", ExactSpelling = true)]
                extern static void __MR_OverloadSuffix_bar_c_blah(int _1);
                __MR_OverloadSuffix_bar_c_blah(_1);
            }

            /// <summary>
            /// Generated from function `MR::OverloadSuffix::bar_c`.
            /// </summary>
            public static void barC(float _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_bar_c", ExactSpelling = true)]
                extern static void __MR_OverloadSuffix_bar_c(float _1);
                __MR_OverloadSuffix_bar_c(_1);
            }

            /// <summary>
            /// Generated from function `MR::OverloadSuffix::baz_c`.
            /// </summary>
            public static void bazC(int _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_baz_c_blah", ExactSpelling = true)]
                extern static void __MR_OverloadSuffix_baz_c_blah(int _1);
                __MR_OverloadSuffix_baz_c_blah(_1);
            }

            /// <summary>
            /// Generated from function `MR::OverloadSuffix::baz_c`.
            /// </summary>
            public static void bazC(int _1, int _2)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadSuffix_baz_c", ExactSpelling = true)]
                extern static void __MR_OverloadSuffix_baz_c(int _1, int _2);
                __MR_OverloadSuffix_baz_c(_1, _2);
            }
        }
    }
}
