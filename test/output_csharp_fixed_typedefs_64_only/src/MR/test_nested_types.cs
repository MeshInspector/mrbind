public static partial class MR
{
    public static partial class CS
    {
        public static partial class NestedTypes
        {
            /// <summary>
            /// Generated from class `MR::NestedTypes::A`.
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
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_NestedTypes_A_Destroy", ExactSpelling = true)]
                    extern static void __MR_NestedTypes_A_Destroy(_Underlying *_this);
                    __MR_NestedTypes_A_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_A() {Dispose(false);}

                public unsafe MR.CS.NestedTypes.A.Const_B b {get; private protected set;}

                public unsafe MR.CS.NestedTypes.A.E e => *__ref_storage_e;
                private protected unsafe MR.CS.NestedTypes.A.E *__ref_storage_e;

                /// <summary>
                /// Constructors call this at the end to initialize class fields.
                /// </summary>
                protected unsafe void _FinalizeFields()
                {
                    { // b
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_NestedTypes_A_Get_b", ExactSpelling = true)]
                        extern static MR.CS.NestedTypes.A.Const_B._Underlying *__MR_NestedTypes_A_Get_b(MR.CS.NestedTypes.Const_A._Underlying *_this);
                        this.b = new(__MR_NestedTypes_A_Get_b(_UnderlyingPtr), is_owning: false);
                        this.b._KeepAliveEnclosingObject = this;
                    }

                    { // e (ref)
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_NestedTypes_A_Get_e", ExactSpelling = true)]
                        extern static MR.CS.NestedTypes.A.E *__MR_NestedTypes_A_Get_e(MR.CS.NestedTypes.Const_A._Underlying *_this);
                        this.__ref_storage_e = __MR_NestedTypes_A_Get_e(_UnderlyingPtr);
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
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_NestedTypes_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.NestedTypes.A._Underlying *__MR_NestedTypes_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_NestedTypes_A_DefaultConstruct();
                    _FinalizeFields();
                }

                /// <summary>
                /// Constructs `MR::NestedTypes::A` elementwise.
                /// </summary>
                public unsafe Const_A(MR.CS.NestedTypes.A.Const_B b, MR.CS.NestedTypes.A.E e) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_NestedTypes_A_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.NestedTypes.A._Underlying *__MR_NestedTypes_A_ConstructFrom(MR.CS.NestedTypes.A.B._Underlying *b, MR.CS.NestedTypes.A.E e);
                    _UnderlyingPtr = __MR_NestedTypes_A_ConstructFrom(b._UnderlyingPtr, e);
                    _KeepAlive(b);
                    _FinalizeFields();
                }

                /// <summary>
                /// Generated from constructor `MR::NestedTypes::A::A`.
                /// </summary>
                public unsafe Const_A(MR.CS.NestedTypes.Const_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_NestedTypes_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.NestedTypes.A._Underlying *__MR_NestedTypes_A_ConstructFromAnother(MR.CS.NestedTypes.A._Underlying *_other);
                    _UnderlyingPtr = __MR_NestedTypes_A_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                    _FinalizeFields();
                }

                /// <summary>
                /// Generated from class `MR::NestedTypes::A::B`.
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
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_NestedTypes_A_B_Destroy", ExactSpelling = true)]
                        extern static void __MR_NestedTypes_A_B_Destroy(_Underlying *_this);
                        __MR_NestedTypes_A_B_Destroy(_UnderlyingPtr);
                        _UnderlyingPtr = null;
                    }
                    public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                    ~Const_B() {Dispose(false);}

                    internal unsafe Const_B(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                    /// <summary>
                    /// Constructs an empty (default-constructed) instance.
                    /// </summary>
                    public unsafe Const_B() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_NestedTypes_A_B_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.NestedTypes.A.B._Underlying *__MR_NestedTypes_A_B_DefaultConstruct();
                        _UnderlyingPtr = __MR_NestedTypes_A_B_DefaultConstruct();
                    }

                    /// <summary>
                    /// Generated from constructor `MR::NestedTypes::A::B::B`.
                    /// </summary>
                    public unsafe Const_B(MR.CS.NestedTypes.A.Const_B _other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_NestedTypes_A_B_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.NestedTypes.A.B._Underlying *__MR_NestedTypes_A_B_ConstructFromAnother(MR.CS.NestedTypes.A.B._Underlying *_other);
                        _UnderlyingPtr = __MR_NestedTypes_A_B_ConstructFromAnother(_other._UnderlyingPtr);
                        _KeepAlive(_other);
                    }
                }

                /// <summary>
                /// Generated from class `MR::NestedTypes::A::B`.
                /// This is the non-const half of the class.
                /// </summary>
                public class B : Const_B
                {
                    internal unsafe B(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                    /// <summary>
                    /// Constructs an empty (default-constructed) instance.
                    /// </summary>
                    public unsafe B() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_NestedTypes_A_B_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.NestedTypes.A.B._Underlying *__MR_NestedTypes_A_B_DefaultConstruct();
                        _UnderlyingPtr = __MR_NestedTypes_A_B_DefaultConstruct();
                    }

                    /// <summary>
                    /// Generated from constructor `MR::NestedTypes::A::B::B`.
                    /// </summary>
                    public unsafe B(MR.CS.NestedTypes.A.Const_B _other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_NestedTypes_A_B_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.NestedTypes.A.B._Underlying *__MR_NestedTypes_A_B_ConstructFromAnother(MR.CS.NestedTypes.A.B._Underlying *_other);
                        _UnderlyingPtr = __MR_NestedTypes_A_B_ConstructFromAnother(_other._UnderlyingPtr);
                        _KeepAlive(_other);
                    }

                    /// <summary>
                    /// Generated from method `MR::NestedTypes::A::B::operator=`.
                    /// </summary>
                    public unsafe MR.CS.NestedTypes.A.B assign(MR.CS.NestedTypes.A.Const_B _other)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_NestedTypes_A_B_AssignFromAnother", ExactSpelling = true)]
                        extern static MR.CS.NestedTypes.A.B._Underlying *__MR_NestedTypes_A_B_AssignFromAnother(_Underlying *_this, MR.CS.NestedTypes.A.B._Underlying *_other);
                        _DiscardKeepAlive();
                        _KeepAlive(_other);
                        return new(__MR_NestedTypes_A_B_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
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

                public enum E : int
                {
                }
            }

            /// <summary>
            /// Generated from class `MR::NestedTypes::A`.
            /// This is the non-const half of the class.
            /// </summary>
            public class A : Const_A
            {
                public new unsafe MR.CS.NestedTypes.A.B b {get; private protected set;}

                public new unsafe ref MR.CS.NestedTypes.A.E e => ref *__ref_storage_e;

                /// <summary>
                /// Constructors call this at the end to initialize class fields.
                /// </summary>
                protected new unsafe void _FinalizeFields()
                {
                    base._FinalizeFields();

                    { // b
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_NestedTypes_A_GetMutable_b", ExactSpelling = true)]
                        extern static MR.CS.NestedTypes.A.B._Underlying *__MR_NestedTypes_A_GetMutable_b(MR.CS.NestedTypes.A._Underlying *_this);
                        this.b = new(__MR_NestedTypes_A_GetMutable_b(_UnderlyingPtr), is_owning: false);
                        this.b._KeepAliveEnclosingObject = this;
                    }
                }

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
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_NestedTypes_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.NestedTypes.A._Underlying *__MR_NestedTypes_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_NestedTypes_A_DefaultConstruct();
                    _FinalizeFields();
                }

                /// <summary>
                /// Constructs `MR::NestedTypes::A` elementwise.
                /// </summary>
                public unsafe A(MR.CS.NestedTypes.A.Const_B b, MR.CS.NestedTypes.A.E e) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_NestedTypes_A_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.NestedTypes.A._Underlying *__MR_NestedTypes_A_ConstructFrom(MR.CS.NestedTypes.A.B._Underlying *b, MR.CS.NestedTypes.A.E e);
                    _UnderlyingPtr = __MR_NestedTypes_A_ConstructFrom(b._UnderlyingPtr, e);
                    _KeepAlive(b);
                    _FinalizeFields();
                }

                /// <summary>
                /// Generated from constructor `MR::NestedTypes::A::A`.
                /// </summary>
                public unsafe A(MR.CS.NestedTypes.Const_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_NestedTypes_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.NestedTypes.A._Underlying *__MR_NestedTypes_A_ConstructFromAnother(MR.CS.NestedTypes.A._Underlying *_other);
                    _UnderlyingPtr = __MR_NestedTypes_A_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                    _FinalizeFields();
                }

                /// <summary>
                /// Generated from method `MR::NestedTypes::A::operator=`.
                /// </summary>
                public unsafe MR.CS.NestedTypes.A assign(MR.CS.NestedTypes.Const_A _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_NestedTypes_A_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.NestedTypes.A._Underlying *__MR_NestedTypes_A_AssignFromAnother(_Underlying *_this, MR.CS.NestedTypes.A._Underlying *_other);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_NestedTypes_A_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
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
        }
    }
}
