public static partial class MR
{
    public static partial class CS
    {
        public static partial class LifetimeInference
        {
            /// <summary>
            /// Generated from class `MR::LifetimeInference::A`.
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
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_A_Destroy", ExactSpelling = true)]
                    extern static void __MR_LifetimeInference_A_Destroy(_Underlying *_this);
                    __MR_LifetimeInference_A_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_A() {Dispose(false);}

                public unsafe int x => *__ref_storage_x;
                private protected unsafe int *__ref_storage_x;

                /// <summary>
                /// Constructors call this at the end to initialize class fields.
                /// </summary>
                protected unsafe void _FinalizeFields()
                {
                    { // x (ref)
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_A_Get_x", ExactSpelling = true)]
                        extern static int *__MR_LifetimeInference_A_Get_x(MR.CS.LifetimeInference.Const_A._Underlying *_this);
                        this.__ref_storage_x = __MR_LifetimeInference_A_Get_x(_UnderlyingPtr);
                    }
                }

                // Don't warn about some fields remaining conditionally uninitialized. We initialize them later.
                #pragma warning disable CS8618
                internal unsafe Const_A(_Underlying *ptr, bool is_owning) : base(is_owning)
                {
                    _UnderlyingPtr = ptr;
                    if (ptr is not null)
                        _FinalizeFields();
                }
                #pragma warning restore CS8618

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_A() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.LifetimeInference.A._Underlying *__MR_LifetimeInference_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_LifetimeInference_A_DefaultConstruct();
                    _FinalizeFields();
                }

                /// <summary>
                /// Constructs `MR::LifetimeInference::A` elementwise.
                /// </summary>
                public unsafe Const_A(int x) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_A_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.LifetimeInference.A._Underlying *__MR_LifetimeInference_A_ConstructFrom(int x);
                    _UnderlyingPtr = __MR_LifetimeInference_A_ConstructFrom(x);
                    _FinalizeFields();
                }

                /// <summary>
                /// Generated from constructor `MR::LifetimeInference::A::A`.
                /// </summary>
                public unsafe Const_A(MR.CS.LifetimeInference.Const_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.LifetimeInference.A._Underlying *__MR_LifetimeInference_A_ConstructFromAnother(MR.CS.LifetimeInference.A._Underlying *_other);
                    _UnderlyingPtr = __MR_LifetimeInference_A_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                    _FinalizeFields();
                }
            }

            /// <summary>
            /// Generated from class `MR::LifetimeInference::A`.
            /// This is the non-const half of the class.
            /// </summary>
            public class A : Const_A
            {
                public new unsafe ref int x => ref *__ref_storage_x;

                // Don't warn about some fields remaining conditionally uninitialized. We initialize them later.
                #pragma warning disable CS8618
                internal unsafe A(_Underlying *ptr, bool is_owning) : base(ptr, is_owning)
                {
                    if (ptr is not null)
                        _FinalizeFields();
                }
                #pragma warning restore CS8618

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe A() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.LifetimeInference.A._Underlying *__MR_LifetimeInference_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_LifetimeInference_A_DefaultConstruct();
                    _FinalizeFields();
                }

                /// <summary>
                /// Constructs `MR::LifetimeInference::A` elementwise.
                /// </summary>
                public unsafe A(int x) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_A_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.LifetimeInference.A._Underlying *__MR_LifetimeInference_A_ConstructFrom(int x);
                    _UnderlyingPtr = __MR_LifetimeInference_A_ConstructFrom(x);
                    _FinalizeFields();
                }

                /// <summary>
                /// Generated from constructor `MR::LifetimeInference::A::A`.
                /// </summary>
                public unsafe A(MR.CS.LifetimeInference.Const_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.LifetimeInference.A._Underlying *__MR_LifetimeInference_A_ConstructFromAnother(MR.CS.LifetimeInference.A._Underlying *_other);
                    _UnderlyingPtr = __MR_LifetimeInference_A_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                    _FinalizeFields();
                }

                /// <summary>
                /// Generated from method `MR::LifetimeInference::A::operator=`.
                /// </summary>
                public unsafe MR.CS.LifetimeInference.A assign(MR.CS.LifetimeInference.Const_A _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_A_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.LifetimeInference.A._Underlying *__MR_LifetimeInference_A_AssignFromAnother(_Underlying *_this, MR.CS.LifetimeInference.A._Underlying *_other);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_LifetimeInference_A_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }

                /// <summary>
                /// Generated from method `MR::LifetimeInference::A::begin`.
                /// </summary>
                public unsafe MR.CS.Misc.Ref<int>? begin()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_A_begin", ExactSpelling = true)]
                    extern static int *__MR_LifetimeInference_A_begin(_Underlying *_this);
                    var __c_ret = __MR_LifetimeInference_A_begin(_UnderlyingPtr);
                    return __c_ret is not null ? new MR.CS.Misc.Ref<int>(__c_ret) : null;
                }

                /// <summary>
                /// Generated from method `MR::LifetimeInference::A::end`.
                /// </summary>
                public unsafe MR.CS.Misc.Ref<int>? end()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_A_end", ExactSpelling = true)]
                    extern static int *__MR_LifetimeInference_A_end(_Underlying *_this);
                    var __c_ret = __MR_LifetimeInference_A_end(_UnderlyingPtr);
                    return __c_ret is not null ? new MR.CS.Misc.Ref<int>(__c_ret) : null;
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
            }

            /// <summary>
            /// Generated from class `MR::LifetimeInference::B`.
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
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_B_Destroy", ExactSpelling = true)]
                    extern static void __MR_LifetimeInference_B_Destroy(_Underlying *_this);
                    __MR_LifetimeInference_B_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_B() {Dispose(false);}

                public unsafe int x => *__ref_storage_x;
                private protected unsafe int *__ref_storage_x;

                /// <summary>
                /// Constructors call this at the end to initialize class fields.
                /// </summary>
                protected unsafe void _FinalizeFields()
                {
                    { // x (ref)
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_B_Get_x", ExactSpelling = true)]
                        extern static int *__MR_LifetimeInference_B_Get_x(MR.CS.LifetimeInference.Const_B._Underlying *_this);
                        this.__ref_storage_x = __MR_LifetimeInference_B_Get_x(_UnderlyingPtr);
                    }
                }

                // Don't warn about some fields remaining conditionally uninitialized. We initialize them later.
                #pragma warning disable CS8618
                internal unsafe Const_B(_Underlying *ptr, bool is_owning) : base(is_owning)
                {
                    _UnderlyingPtr = ptr;
                    if (ptr is not null)
                        _FinalizeFields();
                }
                #pragma warning restore CS8618

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_B() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_B_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.LifetimeInference.B._Underlying *__MR_LifetimeInference_B_DefaultConstruct();
                    _UnderlyingPtr = __MR_LifetimeInference_B_DefaultConstruct();
                    _FinalizeFields();
                }

                /// <summary>
                /// Constructs `MR::LifetimeInference::B` elementwise.
                /// </summary>
                public unsafe Const_B(int x) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_B_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.LifetimeInference.B._Underlying *__MR_LifetimeInference_B_ConstructFrom(int x);
                    _UnderlyingPtr = __MR_LifetimeInference_B_ConstructFrom(x);
                    _FinalizeFields();
                }

                /// <summary>
                /// Generated from constructor `MR::LifetimeInference::B::B`.
                /// </summary>
                public unsafe Const_B(MR.CS.LifetimeInference.Const_B _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_B_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.LifetimeInference.B._Underlying *__MR_LifetimeInference_B_ConstructFromAnother(MR.CS.LifetimeInference.B._Underlying *_other);
                    _UnderlyingPtr = __MR_LifetimeInference_B_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                    _FinalizeFields();
                }
            }

            /// <summary>
            /// Generated from class `MR::LifetimeInference::B`.
            /// This is the non-const half of the class.
            /// </summary>
            public class B : Const_B
            {
                public new unsafe ref int x => ref *__ref_storage_x;

                // Don't warn about some fields remaining conditionally uninitialized. We initialize them later.
                #pragma warning disable CS8618
                internal unsafe B(_Underlying *ptr, bool is_owning) : base(ptr, is_owning)
                {
                    if (ptr is not null)
                        _FinalizeFields();
                }
                #pragma warning restore CS8618

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe B() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_B_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.LifetimeInference.B._Underlying *__MR_LifetimeInference_B_DefaultConstruct();
                    _UnderlyingPtr = __MR_LifetimeInference_B_DefaultConstruct();
                    _FinalizeFields();
                }

                /// <summary>
                /// Constructs `MR::LifetimeInference::B` elementwise.
                /// </summary>
                public unsafe B(int x) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_B_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.LifetimeInference.B._Underlying *__MR_LifetimeInference_B_ConstructFrom(int x);
                    _UnderlyingPtr = __MR_LifetimeInference_B_ConstructFrom(x);
                    _FinalizeFields();
                }

                /// <summary>
                /// Generated from constructor `MR::LifetimeInference::B::B`.
                /// </summary>
                public unsafe B(MR.CS.LifetimeInference.Const_B _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_B_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.LifetimeInference.B._Underlying *__MR_LifetimeInference_B_ConstructFromAnother(MR.CS.LifetimeInference.B._Underlying *_other);
                    _UnderlyingPtr = __MR_LifetimeInference_B_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                    _FinalizeFields();
                }

                /// <summary>
                /// Generated from method `MR::LifetimeInference::B::operator=`.
                /// </summary>
                public unsafe MR.CS.LifetimeInference.B assign(MR.CS.LifetimeInference.Const_B _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_B_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.LifetimeInference.B._Underlying *__MR_LifetimeInference_B_AssignFromAnother(_Underlying *_this, MR.CS.LifetimeInference.B._Underlying *_other);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_LifetimeInference_B_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
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
            }

            /// <summary>
            /// Generated from class `MR::LifetimeInference::C`.
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
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_C_Destroy", ExactSpelling = true)]
                    extern static void __MR_LifetimeInference_C_Destroy(_Underlying *_this);
                    __MR_LifetimeInference_C_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_C() {Dispose(false);}

                internal unsafe Const_C(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Generated from constructor `MR::LifetimeInference::C::C`.
                /// </summary>
                public unsafe Const_C(MR.CS.LifetimeInference.Const_C _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_C_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.LifetimeInference.C._Underlying *__MR_LifetimeInference_C_ConstructFromAnother(MR.CS.LifetimeInference.C._Underlying *_other);
                    _UnderlyingPtr = __MR_LifetimeInference_C_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// <summary>
                /// Generated from constructor `MR::LifetimeInference::C::C`.
                /// </summary>
                public unsafe Const_C(MR.CS.LifetimeInference.A _1, ref int _2, int _3) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_C_Construct", ExactSpelling = true)]
                    extern static MR.CS.LifetimeInference.C._Underlying *__MR_LifetimeInference_C_Construct(MR.CS.LifetimeInference.A._Underlying *_1, int *_2, int _3);
                    fixed (int *__ptr__2 = &_2)
                    {
                        _UnderlyingPtr = __MR_LifetimeInference_C_Construct(_1._UnderlyingPtr, __ptr__2, _3);
                    }
                }
            }

            /// <summary>
            /// Generated from class `MR::LifetimeInference::C`.
            /// This is the non-const half of the class.
            /// </summary>
            public class C : Const_C
            {
                internal unsafe C(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Generated from constructor `MR::LifetimeInference::C::C`.
                /// </summary>
                public unsafe C(MR.CS.LifetimeInference.Const_C _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_C_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.LifetimeInference.C._Underlying *__MR_LifetimeInference_C_ConstructFromAnother(MR.CS.LifetimeInference.C._Underlying *_other);
                    _UnderlyingPtr = __MR_LifetimeInference_C_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// <summary>
                /// Generated from constructor `MR::LifetimeInference::C::C`.
                /// </summary>
                public unsafe C(MR.CS.LifetimeInference.A _1, ref int _2, int _3) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_C_Construct", ExactSpelling = true)]
                    extern static MR.CS.LifetimeInference.C._Underlying *__MR_LifetimeInference_C_Construct(MR.CS.LifetimeInference.A._Underlying *_1, int *_2, int _3);
                    fixed (int *__ptr__2 = &_2)
                    {
                        _UnderlyingPtr = __MR_LifetimeInference_C_Construct(_1._UnderlyingPtr, __ptr__2, _3);
                    }
                }

                /// <summary>
                /// Generated from method `MR::LifetimeInference::C::operator=`.
                /// </summary>
                public unsafe MR.CS.LifetimeInference.C assign(MR.CS.LifetimeInference.Const_C _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_C_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.LifetimeInference.C._Underlying *__MR_LifetimeInference_C_AssignFromAnother(_Underlying *_this, MR.CS.LifetimeInference.C._Underlying *_other);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_LifetimeInference_C_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
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
            }

            /// <summary>
            /// Generated from function `MR::LifetimeInference::begin`.
            /// </summary>
            public static unsafe MR.CS.Misc.Ref<int>? begin(MR.CS.LifetimeInference.A a)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_begin_MR_LifetimeInference_A", ExactSpelling = true)]
                extern static int *__MR_LifetimeInference_begin_MR_LifetimeInference_A(MR.CS.LifetimeInference.A._Underlying *a);
                var __c_ret = __MR_LifetimeInference_begin_MR_LifetimeInference_A(a._UnderlyingPtr);
                return __c_ret is not null ? new MR.CS.Misc.Ref<int>(__c_ret) : null;
            }

            /// <summary>
            /// Generated from function `MR::LifetimeInference::end`.
            /// </summary>
            public static unsafe MR.CS.Misc.Ref<int>? end(MR.CS.LifetimeInference.A a)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_end_MR_LifetimeInference_A", ExactSpelling = true)]
                extern static int *__MR_LifetimeInference_end_MR_LifetimeInference_A(MR.CS.LifetimeInference.A._Underlying *a);
                var __c_ret = __MR_LifetimeInference_end_MR_LifetimeInference_A(a._UnderlyingPtr);
                return __c_ret is not null ? new MR.CS.Misc.Ref<int>(__c_ret) : null;
            }

            /// <summary>
            /// Generated from function `MR::LifetimeInference::begin`.
            /// </summary>
            public static unsafe MR.CS.Misc.Ref<int>? begin(MR.CS.LifetimeInference.B b)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_begin_MR_LifetimeInference_B", ExactSpelling = true)]
                extern static int *__MR_LifetimeInference_begin_MR_LifetimeInference_B(MR.CS.LifetimeInference.B._Underlying *b);
                var __c_ret = __MR_LifetimeInference_begin_MR_LifetimeInference_B(b._UnderlyingPtr);
                return __c_ret is not null ? new MR.CS.Misc.Ref<int>(__c_ret) : null;
            }

            /// <summary>
            /// Generated from function `MR::LifetimeInference::end`.
            /// </summary>
            public static unsafe MR.CS.Misc.Ref<int>? end(MR.CS.LifetimeInference.B b)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_LifetimeInference_end_MR_LifetimeInference_B", ExactSpelling = true)]
                extern static int *__MR_LifetimeInference_end_MR_LifetimeInference_B(MR.CS.LifetimeInference.B._Underlying *b);
                var __c_ret = __MR_LifetimeInference_end_MR_LifetimeInference_B(b._UnderlyingPtr);
                return __c_ret is not null ? new MR.CS.Misc.Ref<int>(__c_ret) : null;
            }
        }
    }
}
