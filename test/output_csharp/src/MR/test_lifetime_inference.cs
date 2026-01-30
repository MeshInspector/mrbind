public static partial class MR
{
    public static partial class CS
    {
        public static partial class LifetimeInference
        {
            /// Generated from class `MR::LifetimeInference::A`.
            /// This is the const half of the class.
            public class Const_A : MR.CS.Misc.Object<Const_A>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_A_Destroy", ExactSpelling = true)]
                    extern static void __MR_LifetimeInference_A_Destroy(_Underlying *_this);
                    __MR_LifetimeInference_A_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_A() {Dispose(false);}

                public unsafe int x
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_A_Get_x", ExactSpelling = true)]
                        extern static int *__MR_LifetimeInference_A_Get_x(_Underlying *_this);
                        return *__MR_LifetimeInference_A_Get_x(_UnderlyingPtr);
                    }
                }

                internal unsafe Const_A(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_A() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.LifetimeInference.A._Underlying *__MR_LifetimeInference_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_LifetimeInference_A_DefaultConstruct();
                }

                /// Constructs `MR::LifetimeInference::A` elementwise.
                public unsafe Const_A(int x) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_A_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.LifetimeInference.A._Underlying *__MR_LifetimeInference_A_ConstructFrom(int x);
                    _UnderlyingPtr = __MR_LifetimeInference_A_ConstructFrom(x);
                }

                /// Generated from constructor `MR::LifetimeInference::A::A`.
                public unsafe Const_A(MR.CS.LifetimeInference.Const_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.LifetimeInference.A._Underlying *__MR_LifetimeInference_A_ConstructFromAnother(MR.CS.LifetimeInference.A._Underlying *_other);
                    _UnderlyingPtr = __MR_LifetimeInference_A_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// Generated from constructor `MR::LifetimeInference::A::A`.
                public Const_A(A _other) : this((Const_A)_other) {}
            }

            /// Generated from class `MR::LifetimeInference::A`.
            /// This is the non-const half of the class.
            public class A : Const_A
            {
                public new unsafe ref int x
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_A_GetMutable_x", ExactSpelling = true)]
                        extern static int *__MR_LifetimeInference_A_GetMutable_x(_Underlying *_this);
                        return ref *__MR_LifetimeInference_A_GetMutable_x(_UnderlyingPtr);
                    }
                }

                internal unsafe A(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe A() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.LifetimeInference.A._Underlying *__MR_LifetimeInference_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_LifetimeInference_A_DefaultConstruct();
                }

                /// Constructs `MR::LifetimeInference::A` elementwise.
                public unsafe A(int x) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_A_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.LifetimeInference.A._Underlying *__MR_LifetimeInference_A_ConstructFrom(int x);
                    _UnderlyingPtr = __MR_LifetimeInference_A_ConstructFrom(x);
                }

                /// Generated from constructor `MR::LifetimeInference::A::A`.
                public unsafe A(MR.CS.LifetimeInference.Const_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.LifetimeInference.A._Underlying *__MR_LifetimeInference_A_ConstructFromAnother(MR.CS.LifetimeInference.A._Underlying *_other);
                    _UnderlyingPtr = __MR_LifetimeInference_A_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// Generated from constructor `MR::LifetimeInference::A::A`.
                public A(A _other) : this((Const_A)_other) {}

                /// Generated from method `MR::LifetimeInference::A::operator=`.
                public unsafe MR.CS.LifetimeInference.A Assign(MR.CS.LifetimeInference.Const_A _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_A_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.LifetimeInference.A._Underlying *__MR_LifetimeInference_A_AssignFromAnother(_Underlying *_this, MR.CS.LifetimeInference.A._Underlying *_other);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_LifetimeInference_A_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }

                /// Generated from method `MR::LifetimeInference::A::begin`.
                public unsafe MR.CS.Misc.Ref<int>? Begin()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_A_begin", ExactSpelling = true)]
                    extern static int *__MR_LifetimeInference_A_begin(_Underlying *_this);
                    var __c_ret = __MR_LifetimeInference_A_begin(_UnderlyingPtr);
                    return __c_ret is not null ? new MR.CS.Misc.Ref<int>(__c_ret) : null;
                }

                /// Generated from method `MR::LifetimeInference::A::end`.
                public unsafe MR.CS.Misc.Ref<int>? End()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_A_end", ExactSpelling = true)]
                    extern static int *__MR_LifetimeInference_A_end(_Underlying *_this);
                    var __c_ret = __MR_LifetimeInference_A_end(_UnderlyingPtr);
                    return __c_ret is not null ? new MR.CS.Misc.Ref<int>(__c_ret) : null;
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

            /// Generated from class `MR::LifetimeInference::B`.
            /// This is the const half of the class.
            public class Const_B : MR.CS.Misc.Object<Const_B>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_B_Destroy", ExactSpelling = true)]
                    extern static void __MR_LifetimeInference_B_Destroy(_Underlying *_this);
                    __MR_LifetimeInference_B_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_B() {Dispose(false);}

                public unsafe int x
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_B_Get_x", ExactSpelling = true)]
                        extern static int *__MR_LifetimeInference_B_Get_x(_Underlying *_this);
                        return *__MR_LifetimeInference_B_Get_x(_UnderlyingPtr);
                    }
                }

                internal unsafe Const_B(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_B() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_B_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.LifetimeInference.B._Underlying *__MR_LifetimeInference_B_DefaultConstruct();
                    _UnderlyingPtr = __MR_LifetimeInference_B_DefaultConstruct();
                }

                /// Constructs `MR::LifetimeInference::B` elementwise.
                public unsafe Const_B(int x) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_B_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.LifetimeInference.B._Underlying *__MR_LifetimeInference_B_ConstructFrom(int x);
                    _UnderlyingPtr = __MR_LifetimeInference_B_ConstructFrom(x);
                }

                /// Generated from constructor `MR::LifetimeInference::B::B`.
                public unsafe Const_B(MR.CS.LifetimeInference.Const_B _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_B_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.LifetimeInference.B._Underlying *__MR_LifetimeInference_B_ConstructFromAnother(MR.CS.LifetimeInference.B._Underlying *_other);
                    _UnderlyingPtr = __MR_LifetimeInference_B_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// Generated from constructor `MR::LifetimeInference::B::B`.
                public Const_B(B _other) : this((Const_B)_other) {}
            }

            /// Generated from class `MR::LifetimeInference::B`.
            /// This is the non-const half of the class.
            public class B : Const_B
            {
                public new unsafe ref int x
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_B_GetMutable_x", ExactSpelling = true)]
                        extern static int *__MR_LifetimeInference_B_GetMutable_x(_Underlying *_this);
                        return ref *__MR_LifetimeInference_B_GetMutable_x(_UnderlyingPtr);
                    }
                }

                internal unsafe B(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe B() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_B_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.LifetimeInference.B._Underlying *__MR_LifetimeInference_B_DefaultConstruct();
                    _UnderlyingPtr = __MR_LifetimeInference_B_DefaultConstruct();
                }

                /// Constructs `MR::LifetimeInference::B` elementwise.
                public unsafe B(int x) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_B_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.LifetimeInference.B._Underlying *__MR_LifetimeInference_B_ConstructFrom(int x);
                    _UnderlyingPtr = __MR_LifetimeInference_B_ConstructFrom(x);
                }

                /// Generated from constructor `MR::LifetimeInference::B::B`.
                public unsafe B(MR.CS.LifetimeInference.Const_B _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_B_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.LifetimeInference.B._Underlying *__MR_LifetimeInference_B_ConstructFromAnother(MR.CS.LifetimeInference.B._Underlying *_other);
                    _UnderlyingPtr = __MR_LifetimeInference_B_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// Generated from constructor `MR::LifetimeInference::B::B`.
                public B(B _other) : this((Const_B)_other) {}

                /// Generated from method `MR::LifetimeInference::B::operator=`.
                public unsafe MR.CS.LifetimeInference.B Assign(MR.CS.LifetimeInference.Const_B _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_B_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.LifetimeInference.B._Underlying *__MR_LifetimeInference_B_AssignFromAnother(_Underlying *_this, MR.CS.LifetimeInference.B._Underlying *_other);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_LifetimeInference_B_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
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

            /// Generated from class `MR::LifetimeInference::C`.
            /// This is the const half of the class.
            public class Const_C : MR.CS.Misc.Object<Const_C>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_C_Destroy", ExactSpelling = true)]
                    extern static void __MR_LifetimeInference_C_Destroy(_Underlying *_this);
                    __MR_LifetimeInference_C_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_C() {Dispose(false);}

                internal unsafe Const_C(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// Generated from constructor `MR::LifetimeInference::C::C`.
                public unsafe Const_C(MR.CS.LifetimeInference.Const_C _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_C_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.LifetimeInference.C._Underlying *__MR_LifetimeInference_C_ConstructFromAnother(MR.CS.LifetimeInference.C._Underlying *_other);
                    _UnderlyingPtr = __MR_LifetimeInference_C_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// Generated from constructor `MR::LifetimeInference::C::C`.
                public Const_C(C _other) : this((Const_C)_other) {}

                /// Generated from constructor `MR::LifetimeInference::C::C`.
                public unsafe Const_C(MR.CS.LifetimeInference.A _1, ref int _2, int _3) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_C_Construct", ExactSpelling = true)]
                    extern static MR.CS.LifetimeInference.C._Underlying *__MR_LifetimeInference_C_Construct(MR.CS.LifetimeInference.A._Underlying *_1, int *_2, int _3);
                    fixed (int *__ptr__2 = &_2)
                    {
                        _UnderlyingPtr = __MR_LifetimeInference_C_Construct(_1._UnderlyingPtr, __ptr__2, _3);
                        _KeepAlive(_1);
                    }
                }
            }

            /// Generated from class `MR::LifetimeInference::C`.
            /// This is the non-const half of the class.
            public class C : Const_C
            {
                internal unsafe C(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Generated from constructor `MR::LifetimeInference::C::C`.
                public unsafe C(MR.CS.LifetimeInference.Const_C _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_C_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.LifetimeInference.C._Underlying *__MR_LifetimeInference_C_ConstructFromAnother(MR.CS.LifetimeInference.C._Underlying *_other);
                    _UnderlyingPtr = __MR_LifetimeInference_C_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// Generated from constructor `MR::LifetimeInference::C::C`.
                public C(C _other) : this((Const_C)_other) {}

                /// Generated from constructor `MR::LifetimeInference::C::C`.
                public unsafe C(MR.CS.LifetimeInference.A _1, ref int _2, int _3) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_C_Construct", ExactSpelling = true)]
                    extern static MR.CS.LifetimeInference.C._Underlying *__MR_LifetimeInference_C_Construct(MR.CS.LifetimeInference.A._Underlying *_1, int *_2, int _3);
                    fixed (int *__ptr__2 = &_2)
                    {
                        _UnderlyingPtr = __MR_LifetimeInference_C_Construct(_1._UnderlyingPtr, __ptr__2, _3);
                        _KeepAlive(_1);
                    }
                }

                /// Generated from method `MR::LifetimeInference::C::operator=`.
                public unsafe MR.CS.LifetimeInference.C Assign(MR.CS.LifetimeInference.Const_C _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_C_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.LifetimeInference.C._Underlying *__MR_LifetimeInference_C_AssignFromAnother(_Underlying *_this, MR.CS.LifetimeInference.C._Underlying *_other);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_LifetimeInference_C_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }
            }

            /// This is used for optional parameters of class `C` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_C`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `C`/`Const_C` directly.
            public class _InOptMut_C
            {
                public C? Opt;

                public _InOptMut_C() {}
                public _InOptMut_C(C value) {Opt = value;}
                public static implicit operator _InOptMut_C(C value) {return new(value);}
            }

            /// This is used for optional parameters of class `C` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_C`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `C`/`Const_C` to pass it to the function.
            public class _InOptConst_C
            {
                public Const_C? Opt;

                public _InOptConst_C() {}
                public _InOptConst_C(Const_C value) {Opt = value;}
                public static implicit operator _InOptConst_C(Const_C value) {return new(value);}
            }

            /// Generated from function `MR::LifetimeInference::begin`.
            public static unsafe MR.CS.Misc.Ref<int>? Begin(MR.CS.LifetimeInference.A a)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_begin_MR_LifetimeInference_A", ExactSpelling = true)]
                extern static int *__MR_LifetimeInference_begin_MR_LifetimeInference_A(MR.CS.LifetimeInference.A._Underlying *a);
                var __c_ret = __MR_LifetimeInference_begin_MR_LifetimeInference_A(a._UnderlyingPtr);
                return __c_ret is not null ? new MR.CS.Misc.Ref<int>(__c_ret) : null;
            }

            /// Generated from function `MR::LifetimeInference::end`.
            public static unsafe MR.CS.Misc.Ref<int>? End(MR.CS.LifetimeInference.A a)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_end_MR_LifetimeInference_A", ExactSpelling = true)]
                extern static int *__MR_LifetimeInference_end_MR_LifetimeInference_A(MR.CS.LifetimeInference.A._Underlying *a);
                var __c_ret = __MR_LifetimeInference_end_MR_LifetimeInference_A(a._UnderlyingPtr);
                return __c_ret is not null ? new MR.CS.Misc.Ref<int>(__c_ret) : null;
            }

            /// Generated from function `MR::LifetimeInference::begin`.
            public static unsafe MR.CS.Misc.Ref<int>? Begin(MR.CS.LifetimeInference.B b)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_begin_MR_LifetimeInference_B", ExactSpelling = true)]
                extern static int *__MR_LifetimeInference_begin_MR_LifetimeInference_B(MR.CS.LifetimeInference.B._Underlying *b);
                var __c_ret = __MR_LifetimeInference_begin_MR_LifetimeInference_B(b._UnderlyingPtr);
                return __c_ret is not null ? new MR.CS.Misc.Ref<int>(__c_ret) : null;
            }

            /// Generated from function `MR::LifetimeInference::end`.
            public static unsafe MR.CS.Misc.Ref<int>? End(MR.CS.LifetimeInference.B b)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_end_MR_LifetimeInference_B", ExactSpelling = true)]
                extern static int *__MR_LifetimeInference_end_MR_LifetimeInference_B(MR.CS.LifetimeInference.B._Underlying *b);
                var __c_ret = __MR_LifetimeInference_end_MR_LifetimeInference_B(b._UnderlyingPtr);
                return __c_ret is not null ? new MR.CS.Misc.Ref<int>(__c_ret) : null;
            }
        }
    }
}
