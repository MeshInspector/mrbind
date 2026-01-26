public static partial class MR
{
    public static partial class CS
    {
        public static partial class Bases
        {
            /// <summary>
            /// Generated from class `MR::Bases::A`.
            /// Derived classes:
            ///   Virtual:
            ///     `MR::Bases::I`
            ///   Direct: (non-virtual)
            ///     `MR::Bases::B`
            ///     `MR::Bases::C`
            ///     `MR::Bases::H`
            ///   Indirect: (non-virtual)
            ///     `MR::Bases::B2`
            ///   Ambiguous:
            ///     `MR::Bases::D`
            ///     `MR::Bases::D2`
            ///     `MR::Bases::D3`
            /// This is the const half of the class.
            /// </summary>
            public class Const_A : MR.CS.Misc.Object<Const_A>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_A(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_A_Destroy", ExactSpelling = true)]
                    extern static void __MR_Bases_A_Destroy(_Underlying *_this);
                    __MR_Bases_A_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_A() {Dispose(false);}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_A() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Bases.A._Underlying *__MR_Bases_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_Bases_A_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::Bases::A::A`.
                /// </summary>
                public unsafe Const_A(MR.CS.Bases.Const_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Bases.A._Underlying *__MR_Bases_A_ConstructFromAnother(MR.CS.Bases.A._Underlying *_other);
                    _UnderlyingPtr = __MR_Bases_A_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }
            }

            /// <summary>
            /// Generated from class `MR::Bases::A`.
            /// Derived classes:
            ///   Virtual:
            ///     `MR::Bases::I`
            ///   Direct: (non-virtual)
            ///     `MR::Bases::B`
            ///     `MR::Bases::C`
            ///     `MR::Bases::H`
            ///   Indirect: (non-virtual)
            ///     `MR::Bases::B2`
            ///   Ambiguous:
            ///     `MR::Bases::D`
            ///     `MR::Bases::D2`
            ///     `MR::Bases::D3`
            /// This is the non-const half of the class.
            /// </summary>
            public class A : Const_A
            {
                internal unsafe A(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe A() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Bases.A._Underlying *__MR_Bases_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_Bases_A_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::Bases::A::A`.
                /// </summary>
                public unsafe A(MR.CS.Bases.Const_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Bases.A._Underlying *__MR_Bases_A_ConstructFromAnother(MR.CS.Bases.A._Underlying *_other);
                    _UnderlyingPtr = __MR_Bases_A_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// <summary>
                /// Generated from method `MR::Bases::A::operator=`.
                /// </summary>
                public unsafe MR.CS.Bases.A assign(MR.CS.Bases.Const_A _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_A_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Bases.A._Underlying *__MR_Bases_A_AssignFromAnother(_Underlying *_this, MR.CS.Bases.A._Underlying *_other);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_Bases_A_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
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
            /// Generated from class `MR::Bases::B`.
            /// Base classes:
            ///   Direct: (non-virtual)
            ///     `MR::Bases::A`
            /// Derived classes:
            ///   Direct: (non-virtual)
            ///     `MR::Bases::B2`
            ///     `MR::Bases::D`
            ///     `MR::Bases::D2`
            ///     `MR::Bases::D3`
            /// This is the const half of the class.
            /// </summary>
            public class Const_B : MR.CS.Misc.Object<Const_B>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_B(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_B_Destroy", ExactSpelling = true)]
                    extern static void __MR_Bases_B_Destroy(_Underlying *_this);
                    __MR_Bases_B_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_B() {Dispose(false);}

                // Upcasts:
                public static unsafe implicit operator MR.CS.Bases.Const_A(Const_B self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_B_UpcastTo_MR_Bases_A", ExactSpelling = true)]
                    extern static MR.CS.Bases.Const_A._Underlying *__MR_Bases_B_UpcastTo_MR_Bases_A(_Underlying *_this);
                    MR.CS.Bases.Const_A ret = new(__MR_Bases_B_UpcastTo_MR_Bases_A(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAliveEnclosingObject = self;
                    return ret;
                }

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_B() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_B_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Bases.B._Underlying *__MR_Bases_B_DefaultConstruct();
                    _UnderlyingPtr = __MR_Bases_B_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::Bases::B::B`.
                /// </summary>
                public unsafe Const_B(MR.CS.Bases.Const_B _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_B_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Bases.B._Underlying *__MR_Bases_B_ConstructFromAnother(MR.CS.Bases.B._Underlying *_other);
                    _UnderlyingPtr = __MR_Bases_B_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }
            }

            /// <summary>
            /// Generated from class `MR::Bases::B`.
            /// Base classes:
            ///   Direct: (non-virtual)
            ///     `MR::Bases::A`
            /// Derived classes:
            ///   Direct: (non-virtual)
            ///     `MR::Bases::B2`
            ///     `MR::Bases::D`
            ///     `MR::Bases::D2`
            ///     `MR::Bases::D3`
            /// This is the non-const half of the class.
            /// </summary>
            public class B : Const_B
            {
                internal unsafe B(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                // Upcasts:
                public static unsafe implicit operator MR.CS.Bases.A(B self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_B_UpcastTo_MR_Bases_A", ExactSpelling = true)]
                    extern static MR.CS.Bases.A._Underlying *__MR_Bases_B_UpcastTo_MR_Bases_A(_Underlying *_this);
                    MR.CS.Bases.A ret = new(__MR_Bases_B_UpcastTo_MR_Bases_A(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAliveEnclosingObject = self;
                    return ret;
                }

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe B() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_B_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Bases.B._Underlying *__MR_Bases_B_DefaultConstruct();
                    _UnderlyingPtr = __MR_Bases_B_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::Bases::B::B`.
                /// </summary>
                public unsafe B(MR.CS.Bases.Const_B _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_B_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Bases.B._Underlying *__MR_Bases_B_ConstructFromAnother(MR.CS.Bases.B._Underlying *_other);
                    _UnderlyingPtr = __MR_Bases_B_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// <summary>
                /// Generated from method `MR::Bases::B::operator=`.
                /// </summary>
                public unsafe MR.CS.Bases.B assign(MR.CS.Bases.Const_B _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_B_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Bases.B._Underlying *__MR_Bases_B_AssignFromAnother(_Underlying *_this, MR.CS.Bases.B._Underlying *_other);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_Bases_B_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
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
            /// Generated from class `MR::Bases::B2`.
            /// Base classes:
            ///   Direct: (non-virtual)
            ///     `MR::Bases::B`
            ///   Indirect: (non-virtual)
            ///     `MR::Bases::A`
            /// This is the const half of the class.
            /// </summary>
            public class Const_B2 : MR.CS.Misc.Object<Const_B2>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_B2(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_B2_Destroy", ExactSpelling = true)]
                    extern static void __MR_Bases_B2_Destroy(_Underlying *_this);
                    __MR_Bases_B2_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_B2() {Dispose(false);}

                // Upcasts:
                public static unsafe implicit operator MR.CS.Bases.Const_A(Const_B2 self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_B2_UpcastTo_MR_Bases_A", ExactSpelling = true)]
                    extern static MR.CS.Bases.Const_A._Underlying *__MR_Bases_B2_UpcastTo_MR_Bases_A(_Underlying *_this);
                    MR.CS.Bases.Const_A ret = new(__MR_Bases_B2_UpcastTo_MR_Bases_A(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAliveEnclosingObject = self;
                    return ret;
                }
                public static unsafe implicit operator MR.CS.Bases.Const_B(Const_B2 self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_B2_UpcastTo_MR_Bases_B", ExactSpelling = true)]
                    extern static MR.CS.Bases.Const_B._Underlying *__MR_Bases_B2_UpcastTo_MR_Bases_B(_Underlying *_this);
                    MR.CS.Bases.Const_B ret = new(__MR_Bases_B2_UpcastTo_MR_Bases_B(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAliveEnclosingObject = self;
                    return ret;
                }

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_B2() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_B2_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Bases.B2._Underlying *__MR_Bases_B2_DefaultConstruct();
                    _UnderlyingPtr = __MR_Bases_B2_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::Bases::B2::B2`.
                /// </summary>
                public unsafe Const_B2(MR.CS.Bases.Const_B2 _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_B2_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Bases.B2._Underlying *__MR_Bases_B2_ConstructFromAnother(MR.CS.Bases.B2._Underlying *_other);
                    _UnderlyingPtr = __MR_Bases_B2_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }
            }

            /// <summary>
            /// Generated from class `MR::Bases::B2`.
            /// Base classes:
            ///   Direct: (non-virtual)
            ///     `MR::Bases::B`
            ///   Indirect: (non-virtual)
            ///     `MR::Bases::A`
            /// This is the non-const half of the class.
            /// </summary>
            public class B2 : Const_B2
            {
                internal unsafe B2(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                // Upcasts:
                public static unsafe implicit operator MR.CS.Bases.A(B2 self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_B2_UpcastTo_MR_Bases_A", ExactSpelling = true)]
                    extern static MR.CS.Bases.A._Underlying *__MR_Bases_B2_UpcastTo_MR_Bases_A(_Underlying *_this);
                    MR.CS.Bases.A ret = new(__MR_Bases_B2_UpcastTo_MR_Bases_A(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAliveEnclosingObject = self;
                    return ret;
                }
                public static unsafe implicit operator MR.CS.Bases.B(B2 self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_B2_UpcastTo_MR_Bases_B", ExactSpelling = true)]
                    extern static MR.CS.Bases.B._Underlying *__MR_Bases_B2_UpcastTo_MR_Bases_B(_Underlying *_this);
                    MR.CS.Bases.B ret = new(__MR_Bases_B2_UpcastTo_MR_Bases_B(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAliveEnclosingObject = self;
                    return ret;
                }

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe B2() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_B2_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Bases.B2._Underlying *__MR_Bases_B2_DefaultConstruct();
                    _UnderlyingPtr = __MR_Bases_B2_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::Bases::B2::B2`.
                /// </summary>
                public unsafe B2(MR.CS.Bases.Const_B2 _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_B2_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Bases.B2._Underlying *__MR_Bases_B2_ConstructFromAnother(MR.CS.Bases.B2._Underlying *_other);
                    _UnderlyingPtr = __MR_Bases_B2_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// <summary>
                /// Generated from method `MR::Bases::B2::operator=`.
                /// </summary>
                public unsafe MR.CS.Bases.B2 assign(MR.CS.Bases.Const_B2 _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_B2_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Bases.B2._Underlying *__MR_Bases_B2_AssignFromAnother(_Underlying *_this, MR.CS.Bases.B2._Underlying *_other);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_Bases_B2_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }
            }

            /// <summary>
            /// This is used for optional parameters of class `B2` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_B2`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `B2`/`Const_B2` directly.
            /// </summary>
            public class _InOptMut_B2
            {
                public B2? Opt;

                public _InOptMut_B2() {}
                public _InOptMut_B2(B2 value) {Opt = value;}
                public static implicit operator _InOptMut_B2(B2 value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `B2` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_B2`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `B2`/`Const_B2` to pass it to the function.
            /// </summary>
            public class _InOptConst_B2
            {
                public Const_B2? Opt;

                public _InOptConst_B2() {}
                public _InOptConst_B2(Const_B2 value) {Opt = value;}
                public static implicit operator _InOptConst_B2(Const_B2 value) {return new(value);}
            }

            /// <summary>
            /// Generated from class `MR::Bases::C`.
            /// Base classes:
            ///   Direct: (non-virtual)
            ///     `MR::Bases::A`
            /// Derived classes:
            ///   Direct: (non-virtual)
            ///     `MR::Bases::D`
            /// This is the const half of the class.
            /// </summary>
            public class Const_C : MR.CS.Misc.Object<Const_C>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_C(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_C_Destroy", ExactSpelling = true)]
                    extern static void __MR_Bases_C_Destroy(_Underlying *_this);
                    __MR_Bases_C_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_C() {Dispose(false);}

                // Upcasts:
                public static unsafe implicit operator MR.CS.Bases.Const_A(Const_C self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_C_UpcastTo_MR_Bases_A", ExactSpelling = true)]
                    extern static MR.CS.Bases.Const_A._Underlying *__MR_Bases_C_UpcastTo_MR_Bases_A(_Underlying *_this);
                    MR.CS.Bases.Const_A ret = new(__MR_Bases_C_UpcastTo_MR_Bases_A(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAliveEnclosingObject = self;
                    return ret;
                }

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_C() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_C_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Bases.C._Underlying *__MR_Bases_C_DefaultConstruct();
                    _UnderlyingPtr = __MR_Bases_C_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::Bases::C::C`.
                /// </summary>
                public unsafe Const_C(MR.CS.Bases.Const_C _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_C_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Bases.C._Underlying *__MR_Bases_C_ConstructFromAnother(MR.CS.Bases.C._Underlying *_other);
                    _UnderlyingPtr = __MR_Bases_C_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }
            }

            /// <summary>
            /// Generated from class `MR::Bases::C`.
            /// Base classes:
            ///   Direct: (non-virtual)
            ///     `MR::Bases::A`
            /// Derived classes:
            ///   Direct: (non-virtual)
            ///     `MR::Bases::D`
            /// This is the non-const half of the class.
            /// </summary>
            public class C : Const_C
            {
                internal unsafe C(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                // Upcasts:
                public static unsafe implicit operator MR.CS.Bases.A(C self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_C_UpcastTo_MR_Bases_A", ExactSpelling = true)]
                    extern static MR.CS.Bases.A._Underlying *__MR_Bases_C_UpcastTo_MR_Bases_A(_Underlying *_this);
                    MR.CS.Bases.A ret = new(__MR_Bases_C_UpcastTo_MR_Bases_A(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAliveEnclosingObject = self;
                    return ret;
                }

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe C() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_C_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Bases.C._Underlying *__MR_Bases_C_DefaultConstruct();
                    _UnderlyingPtr = __MR_Bases_C_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::Bases::C::C`.
                /// </summary>
                public unsafe C(MR.CS.Bases.Const_C _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_C_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Bases.C._Underlying *__MR_Bases_C_ConstructFromAnother(MR.CS.Bases.C._Underlying *_other);
                    _UnderlyingPtr = __MR_Bases_C_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// <summary>
                /// Generated from method `MR::Bases::C::operator=`.
                /// </summary>
                public unsafe MR.CS.Bases.C assign(MR.CS.Bases.Const_C _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_C_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Bases.C._Underlying *__MR_Bases_C_AssignFromAnother(_Underlying *_this, MR.CS.Bases.C._Underlying *_other);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_Bases_C_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
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
            /// Generated from class `MR::Bases::D`.
            /// Base classes:
            ///   Direct: (non-virtual)
            ///     `MR::Bases::B`
            ///     `MR::Bases::C`
            ///   Ambiguous:
            ///     `MR::Bases::A`
            /// This is the const half of the class.
            /// </summary>
            public class Const_D : MR.CS.Misc.Object<Const_D>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_D(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_D_Destroy", ExactSpelling = true)]
                    extern static void __MR_Bases_D_Destroy(_Underlying *_this);
                    __MR_Bases_D_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_D() {Dispose(false);}

                // Upcasts:
                public static unsafe implicit operator MR.CS.Bases.Const_B(Const_D self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_D_UpcastTo_MR_Bases_B", ExactSpelling = true)]
                    extern static MR.CS.Bases.Const_B._Underlying *__MR_Bases_D_UpcastTo_MR_Bases_B(_Underlying *_this);
                    MR.CS.Bases.Const_B ret = new(__MR_Bases_D_UpcastTo_MR_Bases_B(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAliveEnclosingObject = self;
                    return ret;
                }
                public static unsafe implicit operator MR.CS.Bases.Const_C(Const_D self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_D_UpcastTo_MR_Bases_C", ExactSpelling = true)]
                    extern static MR.CS.Bases.Const_C._Underlying *__MR_Bases_D_UpcastTo_MR_Bases_C(_Underlying *_this);
                    MR.CS.Bases.Const_C ret = new(__MR_Bases_D_UpcastTo_MR_Bases_C(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAliveEnclosingObject = self;
                    return ret;
                }

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_D() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_D_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Bases.D._Underlying *__MR_Bases_D_DefaultConstruct();
                    _UnderlyingPtr = __MR_Bases_D_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::Bases::D::D`.
                /// </summary>
                public unsafe Const_D(MR.CS.Bases.Const_D _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_D_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Bases.D._Underlying *__MR_Bases_D_ConstructFromAnother(MR.CS.Bases.D._Underlying *_other);
                    _UnderlyingPtr = __MR_Bases_D_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }
            }

            /// <summary>
            /// Generated from class `MR::Bases::D`.
            /// Base classes:
            ///   Direct: (non-virtual)
            ///     `MR::Bases::B`
            ///     `MR::Bases::C`
            ///   Ambiguous:
            ///     `MR::Bases::A`
            /// This is the non-const half of the class.
            /// </summary>
            public class D : Const_D
            {
                internal unsafe D(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                // Upcasts:
                public static unsafe implicit operator MR.CS.Bases.B(D self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_D_UpcastTo_MR_Bases_B", ExactSpelling = true)]
                    extern static MR.CS.Bases.B._Underlying *__MR_Bases_D_UpcastTo_MR_Bases_B(_Underlying *_this);
                    MR.CS.Bases.B ret = new(__MR_Bases_D_UpcastTo_MR_Bases_B(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAliveEnclosingObject = self;
                    return ret;
                }
                public static unsafe implicit operator MR.CS.Bases.C(D self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_D_UpcastTo_MR_Bases_C", ExactSpelling = true)]
                    extern static MR.CS.Bases.C._Underlying *__MR_Bases_D_UpcastTo_MR_Bases_C(_Underlying *_this);
                    MR.CS.Bases.C ret = new(__MR_Bases_D_UpcastTo_MR_Bases_C(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAliveEnclosingObject = self;
                    return ret;
                }

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe D() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_D_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Bases.D._Underlying *__MR_Bases_D_DefaultConstruct();
                    _UnderlyingPtr = __MR_Bases_D_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::Bases::D::D`.
                /// </summary>
                public unsafe D(MR.CS.Bases.Const_D _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_D_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Bases.D._Underlying *__MR_Bases_D_ConstructFromAnother(MR.CS.Bases.D._Underlying *_other);
                    _UnderlyingPtr = __MR_Bases_D_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// <summary>
                /// Generated from method `MR::Bases::D::operator=`.
                /// </summary>
                public unsafe MR.CS.Bases.D assign(MR.CS.Bases.Const_D _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_D_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Bases.D._Underlying *__MR_Bases_D_AssignFromAnother(_Underlying *_this, MR.CS.Bases.D._Underlying *_other);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_Bases_D_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }
            }

            /// <summary>
            /// This is used for optional parameters of class `D` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_D`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `D`/`Const_D` directly.
            /// </summary>
            public class _InOptMut_D
            {
                public D? Opt;

                public _InOptMut_D() {}
                public _InOptMut_D(D value) {Opt = value;}
                public static implicit operator _InOptMut_D(D value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `D` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_D`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `D`/`Const_D` to pass it to the function.
            /// </summary>
            public class _InOptConst_D
            {
                public Const_D? Opt;

                public _InOptConst_D() {}
                public _InOptConst_D(Const_D value) {Opt = value;}
                public static implicit operator _InOptConst_D(Const_D value) {return new(value);}
            }

            /// <summary>
            /// Generated from class `MR::Bases::D2`.
            /// Base classes:
            ///   Direct: (non-virtual)
            ///     `MR::Bases::B`
            ///   Ambiguous:
            ///     `MR::Bases::A`
            /// This is the const half of the class.
            /// </summary>
            public class Const_D2 : MR.CS.Misc.Object<Const_D2>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_D2(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_D2_Destroy", ExactSpelling = true)]
                    extern static void __MR_Bases_D2_Destroy(_Underlying *_this);
                    __MR_Bases_D2_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_D2() {Dispose(false);}

                // Upcasts:
                public static unsafe implicit operator MR.CS.Bases.Const_B(Const_D2 self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_D2_UpcastTo_MR_Bases_B", ExactSpelling = true)]
                    extern static MR.CS.Bases.Const_B._Underlying *__MR_Bases_D2_UpcastTo_MR_Bases_B(_Underlying *_this);
                    MR.CS.Bases.Const_B ret = new(__MR_Bases_D2_UpcastTo_MR_Bases_B(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAliveEnclosingObject = self;
                    return ret;
                }

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_D2() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_D2_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Bases.D2._Underlying *__MR_Bases_D2_DefaultConstruct();
                    _UnderlyingPtr = __MR_Bases_D2_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::Bases::D2::D2`.
                /// </summary>
                public unsafe Const_D2(MR.CS.Bases.Const_D2 _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_D2_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Bases.D2._Underlying *__MR_Bases_D2_ConstructFromAnother(MR.CS.Bases.D2._Underlying *_other);
                    _UnderlyingPtr = __MR_Bases_D2_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }
            }

            /// <summary>
            /// Generated from class `MR::Bases::D2`.
            /// Base classes:
            ///   Direct: (non-virtual)
            ///     `MR::Bases::B`
            ///   Ambiguous:
            ///     `MR::Bases::A`
            /// This is the non-const half of the class.
            /// </summary>
            public class D2 : Const_D2
            {
                internal unsafe D2(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                // Upcasts:
                public static unsafe implicit operator MR.CS.Bases.B(D2 self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_D2_UpcastTo_MR_Bases_B", ExactSpelling = true)]
                    extern static MR.CS.Bases.B._Underlying *__MR_Bases_D2_UpcastTo_MR_Bases_B(_Underlying *_this);
                    MR.CS.Bases.B ret = new(__MR_Bases_D2_UpcastTo_MR_Bases_B(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAliveEnclosingObject = self;
                    return ret;
                }

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe D2() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_D2_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Bases.D2._Underlying *__MR_Bases_D2_DefaultConstruct();
                    _UnderlyingPtr = __MR_Bases_D2_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::Bases::D2::D2`.
                /// </summary>
                public unsafe D2(MR.CS.Bases.Const_D2 _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_D2_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Bases.D2._Underlying *__MR_Bases_D2_ConstructFromAnother(MR.CS.Bases.D2._Underlying *_other);
                    _UnderlyingPtr = __MR_Bases_D2_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// <summary>
                /// Generated from method `MR::Bases::D2::operator=`.
                /// </summary>
                public unsafe MR.CS.Bases.D2 assign(MR.CS.Bases.Const_D2 _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_D2_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Bases.D2._Underlying *__MR_Bases_D2_AssignFromAnother(_Underlying *_this, MR.CS.Bases.D2._Underlying *_other);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_Bases_D2_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }
            }

            /// <summary>
            /// This is used for optional parameters of class `D2` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_D2`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `D2`/`Const_D2` directly.
            /// </summary>
            public class _InOptMut_D2
            {
                public D2? Opt;

                public _InOptMut_D2() {}
                public _InOptMut_D2(D2 value) {Opt = value;}
                public static implicit operator _InOptMut_D2(D2 value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `D2` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_D2`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `D2`/`Const_D2` to pass it to the function.
            /// </summary>
            public class _InOptConst_D2
            {
                public Const_D2? Opt;

                public _InOptConst_D2() {}
                public _InOptConst_D2(Const_D2 value) {Opt = value;}
                public static implicit operator _InOptConst_D2(Const_D2 value) {return new(value);}
            }

            /// <summary>
            /// Generated from class `MR::Bases::D3`.
            /// Base classes:
            ///   Direct: (non-virtual)
            ///     `MR::Bases::B`
            ///   Ambiguous:
            ///     `MR::Bases::A`
            /// This is the const half of the class.
            /// </summary>
            public class Const_D3 : MR.CS.Misc.Object<Const_D3>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_D3(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_D3_Destroy", ExactSpelling = true)]
                    extern static void __MR_Bases_D3_Destroy(_Underlying *_this);
                    __MR_Bases_D3_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_D3() {Dispose(false);}

                // Upcasts:
                public static unsafe implicit operator MR.CS.Bases.Const_B(Const_D3 self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_D3_UpcastTo_MR_Bases_B", ExactSpelling = true)]
                    extern static MR.CS.Bases.Const_B._Underlying *__MR_Bases_D3_UpcastTo_MR_Bases_B(_Underlying *_this);
                    MR.CS.Bases.Const_B ret = new(__MR_Bases_D3_UpcastTo_MR_Bases_B(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAliveEnclosingObject = self;
                    return ret;
                }

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_D3() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_D3_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Bases.D3._Underlying *__MR_Bases_D3_DefaultConstruct();
                    _UnderlyingPtr = __MR_Bases_D3_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::Bases::D3::D3`.
                /// </summary>
                public unsafe Const_D3(MR.CS.Bases.Const_D3 _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_D3_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Bases.D3._Underlying *__MR_Bases_D3_ConstructFromAnother(MR.CS.Bases.D3._Underlying *_other);
                    _UnderlyingPtr = __MR_Bases_D3_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }
            }

            /// <summary>
            /// Generated from class `MR::Bases::D3`.
            /// Base classes:
            ///   Direct: (non-virtual)
            ///     `MR::Bases::B`
            ///   Ambiguous:
            ///     `MR::Bases::A`
            /// This is the non-const half of the class.
            /// </summary>
            public class D3 : Const_D3
            {
                internal unsafe D3(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                // Upcasts:
                public static unsafe implicit operator MR.CS.Bases.B(D3 self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_D3_UpcastTo_MR_Bases_B", ExactSpelling = true)]
                    extern static MR.CS.Bases.B._Underlying *__MR_Bases_D3_UpcastTo_MR_Bases_B(_Underlying *_this);
                    MR.CS.Bases.B ret = new(__MR_Bases_D3_UpcastTo_MR_Bases_B(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAliveEnclosingObject = self;
                    return ret;
                }

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe D3() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_D3_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Bases.D3._Underlying *__MR_Bases_D3_DefaultConstruct();
                    _UnderlyingPtr = __MR_Bases_D3_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::Bases::D3::D3`.
                /// </summary>
                public unsafe D3(MR.CS.Bases.Const_D3 _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_D3_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Bases.D3._Underlying *__MR_Bases_D3_ConstructFromAnother(MR.CS.Bases.D3._Underlying *_other);
                    _UnderlyingPtr = __MR_Bases_D3_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// <summary>
                /// Generated from method `MR::Bases::D3::operator=`.
                /// </summary>
                public unsafe MR.CS.Bases.D3 assign(MR.CS.Bases.Const_D3 _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_D3_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Bases.D3._Underlying *__MR_Bases_D3_AssignFromAnother(_Underlying *_this, MR.CS.Bases.D3._Underlying *_other);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_Bases_D3_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }
            }

            /// <summary>
            /// This is used for optional parameters of class `D3` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_D3`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `D3`/`Const_D3` directly.
            /// </summary>
            public class _InOptMut_D3
            {
                public D3? Opt;

                public _InOptMut_D3() {}
                public _InOptMut_D3(D3 value) {Opt = value;}
                public static implicit operator _InOptMut_D3(D3 value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `D3` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_D3`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `D3`/`Const_D3` to pass it to the function.
            /// </summary>
            public class _InOptConst_D3
            {
                public Const_D3? Opt;

                public _InOptConst_D3() {}
                public _InOptConst_D3(Const_D3 value) {Opt = value;}
                public static implicit operator _InOptConst_D3(Const_D3 value) {return new(value);}
            }

            /// <summary>
            /// Generated from class `MR::Bases::E`.
            /// Derived classes:
            ///   Non-virtual along a virtual path:
            ///     `MR::Bases::G`
            ///     `MR::Bases::H`
            ///     `MR::Bases::I`
            ///   Direct: (non-virtual)
            ///     `MR::Bases::F`
            /// This is the const half of the class.
            /// </summary>
            public class Const_E : MR.CS.Misc.Object<Const_E>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_E(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_E_Destroy", ExactSpelling = true)]
                    extern static void __MR_Bases_E_Destroy(_Underlying *_this);
                    __MR_Bases_E_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_E() {Dispose(false);}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_E() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_E_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Bases.E._Underlying *__MR_Bases_E_DefaultConstruct();
                    _UnderlyingPtr = __MR_Bases_E_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::Bases::E::E`.
                /// </summary>
                public unsafe Const_E(MR.CS.Bases.Const_E _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_E_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Bases.E._Underlying *__MR_Bases_E_ConstructFromAnother(MR.CS.Bases.E._Underlying *_other);
                    _UnderlyingPtr = __MR_Bases_E_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }
            }

            /// <summary>
            /// Generated from class `MR::Bases::E`.
            /// Derived classes:
            ///   Non-virtual along a virtual path:
            ///     `MR::Bases::G`
            ///     `MR::Bases::H`
            ///     `MR::Bases::I`
            ///   Direct: (non-virtual)
            ///     `MR::Bases::F`
            /// This is the non-const half of the class.
            /// </summary>
            public class E : Const_E
            {
                internal unsafe E(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe E() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_E_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Bases.E._Underlying *__MR_Bases_E_DefaultConstruct();
                    _UnderlyingPtr = __MR_Bases_E_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::Bases::E::E`.
                /// </summary>
                public unsafe E(MR.CS.Bases.Const_E _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_E_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Bases.E._Underlying *__MR_Bases_E_ConstructFromAnother(MR.CS.Bases.E._Underlying *_other);
                    _UnderlyingPtr = __MR_Bases_E_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// <summary>
                /// Generated from method `MR::Bases::E::operator=`.
                /// </summary>
                public unsafe MR.CS.Bases.E assign(MR.CS.Bases.Const_E _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_E_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Bases.E._Underlying *__MR_Bases_E_AssignFromAnother(_Underlying *_this, MR.CS.Bases.E._Underlying *_other);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_Bases_E_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }
            }

            /// <summary>
            /// This is used for optional parameters of class `E` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_E`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `E`/`Const_E` directly.
            /// </summary>
            public class _InOptMut_E
            {
                public E? Opt;

                public _InOptMut_E() {}
                public _InOptMut_E(E value) {Opt = value;}
                public static implicit operator _InOptMut_E(E value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `E` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_E`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `E`/`Const_E` to pass it to the function.
            /// </summary>
            public class _InOptConst_E
            {
                public Const_E? Opt;

                public _InOptConst_E() {}
                public _InOptConst_E(Const_E value) {Opt = value;}
                public static implicit operator _InOptConst_E(Const_E value) {return new(value);}
            }

            /// <summary>
            /// Generated from class `MR::Bases::F`.
            /// Base classes:
            ///   Direct: (non-virtual)
            ///     `MR::Bases::E`
            /// Derived classes:
            ///   Virtual:
            ///     `MR::Bases::G`
            ///     `MR::Bases::H`
            ///     `MR::Bases::I`
            /// This is the const half of the class.
            /// </summary>
            public class Const_F : MR.CS.Misc.Object<Const_F>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_F(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_F_Destroy", ExactSpelling = true)]
                    extern static void __MR_Bases_F_Destroy(_Underlying *_this);
                    __MR_Bases_F_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_F() {Dispose(false);}

                // Upcasts:
                public static unsafe implicit operator MR.CS.Bases.Const_E(Const_F self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_F_UpcastTo_MR_Bases_E", ExactSpelling = true)]
                    extern static MR.CS.Bases.Const_E._Underlying *__MR_Bases_F_UpcastTo_MR_Bases_E(_Underlying *_this);
                    MR.CS.Bases.Const_E ret = new(__MR_Bases_F_UpcastTo_MR_Bases_E(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAliveEnclosingObject = self;
                    return ret;
                }

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_F() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_F_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Bases.F._Underlying *__MR_Bases_F_DefaultConstruct();
                    _UnderlyingPtr = __MR_Bases_F_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::Bases::F::F`.
                /// </summary>
                public unsafe Const_F(MR.CS.Bases.Const_F _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_F_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Bases.F._Underlying *__MR_Bases_F_ConstructFromAnother(MR.CS.Bases.F._Underlying *_other);
                    _UnderlyingPtr = __MR_Bases_F_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }
            }

            /// <summary>
            /// Generated from class `MR::Bases::F`.
            /// Base classes:
            ///   Direct: (non-virtual)
            ///     `MR::Bases::E`
            /// Derived classes:
            ///   Virtual:
            ///     `MR::Bases::G`
            ///     `MR::Bases::H`
            ///     `MR::Bases::I`
            /// This is the non-const half of the class.
            /// </summary>
            public class F : Const_F
            {
                internal unsafe F(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                // Upcasts:
                public static unsafe implicit operator MR.CS.Bases.E(F self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_F_UpcastTo_MR_Bases_E", ExactSpelling = true)]
                    extern static MR.CS.Bases.E._Underlying *__MR_Bases_F_UpcastTo_MR_Bases_E(_Underlying *_this);
                    MR.CS.Bases.E ret = new(__MR_Bases_F_UpcastTo_MR_Bases_E(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAliveEnclosingObject = self;
                    return ret;
                }

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe F() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_F_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Bases.F._Underlying *__MR_Bases_F_DefaultConstruct();
                    _UnderlyingPtr = __MR_Bases_F_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::Bases::F::F`.
                /// </summary>
                public unsafe F(MR.CS.Bases.Const_F _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_F_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Bases.F._Underlying *__MR_Bases_F_ConstructFromAnother(MR.CS.Bases.F._Underlying *_other);
                    _UnderlyingPtr = __MR_Bases_F_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// <summary>
                /// Generated from method `MR::Bases::F::operator=`.
                /// </summary>
                public unsafe MR.CS.Bases.F assign(MR.CS.Bases.Const_F _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_F_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Bases.F._Underlying *__MR_Bases_F_AssignFromAnother(_Underlying *_this, MR.CS.Bases.F._Underlying *_other);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_Bases_F_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }
            }

            /// <summary>
            /// This is used for optional parameters of class `F` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_F`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `F`/`Const_F` directly.
            /// </summary>
            public class _InOptMut_F
            {
                public F? Opt;

                public _InOptMut_F() {}
                public _InOptMut_F(F value) {Opt = value;}
                public static implicit operator _InOptMut_F(F value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `F` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_F`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `F`/`Const_F` to pass it to the function.
            /// </summary>
            public class _InOptConst_F
            {
                public Const_F? Opt;

                public _InOptConst_F() {}
                public _InOptConst_F(Const_F value) {Opt = value;}
                public static implicit operator _InOptConst_F(Const_F value) {return new(value);}
            }

            /// <summary>
            /// Generated from class `MR::Bases::G`.
            /// Base classes:
            ///   Virtual:
            ///     `MR::Bases::F`
            ///   Non-virtual along a virtual path:
            ///     `MR::Bases::E`
            /// This is the const half of the class.
            /// </summary>
            public class Const_G : MR.CS.Misc.Object<Const_G>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_G(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_G_Destroy", ExactSpelling = true)]
                    extern static void __MR_Bases_G_Destroy(_Underlying *_this);
                    __MR_Bases_G_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_G() {Dispose(false);}

                // Upcasts:
                public static unsafe implicit operator MR.CS.Bases.Const_E(Const_G self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_G_UpcastTo_MR_Bases_E", ExactSpelling = true)]
                    extern static MR.CS.Bases.Const_E._Underlying *__MR_Bases_G_UpcastTo_MR_Bases_E(_Underlying *_this);
                    MR.CS.Bases.Const_E ret = new(__MR_Bases_G_UpcastTo_MR_Bases_E(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAliveEnclosingObject = self;
                    return ret;
                }
                public static unsafe implicit operator MR.CS.Bases.Const_F(Const_G self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_G_UpcastTo_MR_Bases_F", ExactSpelling = true)]
                    extern static MR.CS.Bases.Const_F._Underlying *__MR_Bases_G_UpcastTo_MR_Bases_F(_Underlying *_this);
                    MR.CS.Bases.Const_F ret = new(__MR_Bases_G_UpcastTo_MR_Bases_F(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAliveEnclosingObject = self;
                    return ret;
                }

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_G() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_G_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Bases.G._Underlying *__MR_Bases_G_DefaultConstruct();
                    _UnderlyingPtr = __MR_Bases_G_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::Bases::G::G`.
                /// </summary>
                public unsafe Const_G(MR.CS.Bases._ByValue_G _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_G_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Bases.G._Underlying *__MR_Bases_G_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.Bases.G._Underlying *_other);
                    _UnderlyingPtr = __MR_Bases_G_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                    if (_other.Value is not null) _KeepAlive(_other.Value);
                }
            }

            /// <summary>
            /// Generated from class `MR::Bases::G`.
            /// Base classes:
            ///   Virtual:
            ///     `MR::Bases::F`
            ///   Non-virtual along a virtual path:
            ///     `MR::Bases::E`
            /// This is the non-const half of the class.
            /// </summary>
            public class G : Const_G
            {
                internal unsafe G(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                // Upcasts:
                public static unsafe implicit operator MR.CS.Bases.E(G self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_G_UpcastTo_MR_Bases_E", ExactSpelling = true)]
                    extern static MR.CS.Bases.E._Underlying *__MR_Bases_G_UpcastTo_MR_Bases_E(_Underlying *_this);
                    MR.CS.Bases.E ret = new(__MR_Bases_G_UpcastTo_MR_Bases_E(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAliveEnclosingObject = self;
                    return ret;
                }
                public static unsafe implicit operator MR.CS.Bases.F(G self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_G_UpcastTo_MR_Bases_F", ExactSpelling = true)]
                    extern static MR.CS.Bases.F._Underlying *__MR_Bases_G_UpcastTo_MR_Bases_F(_Underlying *_this);
                    MR.CS.Bases.F ret = new(__MR_Bases_G_UpcastTo_MR_Bases_F(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAliveEnclosingObject = self;
                    return ret;
                }

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe G() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_G_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Bases.G._Underlying *__MR_Bases_G_DefaultConstruct();
                    _UnderlyingPtr = __MR_Bases_G_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::Bases::G::G`.
                /// </summary>
                public unsafe G(MR.CS.Bases._ByValue_G _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_G_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Bases.G._Underlying *__MR_Bases_G_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.Bases.G._Underlying *_other);
                    _UnderlyingPtr = __MR_Bases_G_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                    if (_other.Value is not null) _KeepAlive(_other.Value);
                }

                /// <summary>
                /// Generated from method `MR::Bases::G::operator=`.
                /// </summary>
                public unsafe MR.CS.Bases.G assign(MR.CS.Bases._ByValue_G _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_G_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Bases.G._Underlying *__MR_Bases_G_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.Bases.G._Underlying *_other);
                    _DiscardKeepAlive();
                    if (_other.Value is not null) _KeepAlive(_other.Value);
                    return new(__MR_Bases_G_AssignFromAnother(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null), is_owning: false);
                }
            }

            /// <summary>
            /// This is used as a function parameter when the underlying function receives `G` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `G`/`Const_G` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            /// </summary>
            public class _ByValue_G
            {
                internal readonly Const_G? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_G() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_G(Const_G new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_G(Const_G arg) {return new(arg);}
                public _ByValue_G(MR.CS.Misc._Moved<G> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_G(MR.CS.Misc._Moved<G> arg) {return new(arg);}
            }

            /// <summary>
            /// This is used for optional parameters of class `G` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_G`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `G`/`Const_G` directly.
            /// </summary>
            public class _InOptMut_G
            {
                public G? Opt;

                public _InOptMut_G() {}
                public _InOptMut_G(G value) {Opt = value;}
                public static implicit operator _InOptMut_G(G value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `G` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_G`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `G`/`Const_G` to pass it to the function.
            /// </summary>
            public class _InOptConst_G
            {
                public Const_G? Opt;

                public _InOptConst_G() {}
                public _InOptConst_G(Const_G value) {Opt = value;}
                public static implicit operator _InOptConst_G(Const_G value) {return new(value);}
            }

            /// <summary>
            /// Generated from class `MR::Bases::H`.
            /// Base classes:
            ///   Virtual:
            ///     `MR::Bases::F`
            ///   Non-virtual along a virtual path:
            ///     `MR::Bases::E`
            ///   Direct: (non-virtual)
            ///     `MR::Bases::A`
            /// This is the const half of the class.
            /// </summary>
            public class Const_H : MR.CS.Misc.Object<Const_H>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_H(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_H_Destroy", ExactSpelling = true)]
                    extern static void __MR_Bases_H_Destroy(_Underlying *_this);
                    __MR_Bases_H_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_H() {Dispose(false);}

                // Upcasts:
                public static unsafe implicit operator MR.CS.Bases.Const_E(Const_H self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_H_UpcastTo_MR_Bases_E", ExactSpelling = true)]
                    extern static MR.CS.Bases.Const_E._Underlying *__MR_Bases_H_UpcastTo_MR_Bases_E(_Underlying *_this);
                    MR.CS.Bases.Const_E ret = new(__MR_Bases_H_UpcastTo_MR_Bases_E(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAliveEnclosingObject = self;
                    return ret;
                }
                public static unsafe implicit operator MR.CS.Bases.Const_F(Const_H self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_H_UpcastTo_MR_Bases_F", ExactSpelling = true)]
                    extern static MR.CS.Bases.Const_F._Underlying *__MR_Bases_H_UpcastTo_MR_Bases_F(_Underlying *_this);
                    MR.CS.Bases.Const_F ret = new(__MR_Bases_H_UpcastTo_MR_Bases_F(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAliveEnclosingObject = self;
                    return ret;
                }
                public static unsafe implicit operator MR.CS.Bases.Const_A(Const_H self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_H_UpcastTo_MR_Bases_A", ExactSpelling = true)]
                    extern static MR.CS.Bases.Const_A._Underlying *__MR_Bases_H_UpcastTo_MR_Bases_A(_Underlying *_this);
                    MR.CS.Bases.Const_A ret = new(__MR_Bases_H_UpcastTo_MR_Bases_A(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAliveEnclosingObject = self;
                    return ret;
                }

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_H() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_H_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Bases.H._Underlying *__MR_Bases_H_DefaultConstruct();
                    _UnderlyingPtr = __MR_Bases_H_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::Bases::H::H`.
                /// </summary>
                public unsafe Const_H(MR.CS.Bases._ByValue_H _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_H_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Bases.H._Underlying *__MR_Bases_H_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.Bases.H._Underlying *_other);
                    _UnderlyingPtr = __MR_Bases_H_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                    if (_other.Value is not null) _KeepAlive(_other.Value);
                }
            }

            /// <summary>
            /// Generated from class `MR::Bases::H`.
            /// Base classes:
            ///   Virtual:
            ///     `MR::Bases::F`
            ///   Non-virtual along a virtual path:
            ///     `MR::Bases::E`
            ///   Direct: (non-virtual)
            ///     `MR::Bases::A`
            /// This is the non-const half of the class.
            /// </summary>
            public class H : Const_H
            {
                internal unsafe H(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                // Upcasts:
                public static unsafe implicit operator MR.CS.Bases.E(H self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_H_UpcastTo_MR_Bases_E", ExactSpelling = true)]
                    extern static MR.CS.Bases.E._Underlying *__MR_Bases_H_UpcastTo_MR_Bases_E(_Underlying *_this);
                    MR.CS.Bases.E ret = new(__MR_Bases_H_UpcastTo_MR_Bases_E(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAliveEnclosingObject = self;
                    return ret;
                }
                public static unsafe implicit operator MR.CS.Bases.F(H self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_H_UpcastTo_MR_Bases_F", ExactSpelling = true)]
                    extern static MR.CS.Bases.F._Underlying *__MR_Bases_H_UpcastTo_MR_Bases_F(_Underlying *_this);
                    MR.CS.Bases.F ret = new(__MR_Bases_H_UpcastTo_MR_Bases_F(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAliveEnclosingObject = self;
                    return ret;
                }
                public static unsafe implicit operator MR.CS.Bases.A(H self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_H_UpcastTo_MR_Bases_A", ExactSpelling = true)]
                    extern static MR.CS.Bases.A._Underlying *__MR_Bases_H_UpcastTo_MR_Bases_A(_Underlying *_this);
                    MR.CS.Bases.A ret = new(__MR_Bases_H_UpcastTo_MR_Bases_A(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAliveEnclosingObject = self;
                    return ret;
                }

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe H() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_H_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Bases.H._Underlying *__MR_Bases_H_DefaultConstruct();
                    _UnderlyingPtr = __MR_Bases_H_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::Bases::H::H`.
                /// </summary>
                public unsafe H(MR.CS.Bases._ByValue_H _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_H_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Bases.H._Underlying *__MR_Bases_H_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.Bases.H._Underlying *_other);
                    _UnderlyingPtr = __MR_Bases_H_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                    if (_other.Value is not null) _KeepAlive(_other.Value);
                }

                /// <summary>
                /// Generated from method `MR::Bases::H::operator=`.
                /// </summary>
                public unsafe MR.CS.Bases.H assign(MR.CS.Bases._ByValue_H _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_H_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Bases.H._Underlying *__MR_Bases_H_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.Bases.H._Underlying *_other);
                    _DiscardKeepAlive();
                    if (_other.Value is not null) _KeepAlive(_other.Value);
                    return new(__MR_Bases_H_AssignFromAnother(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null), is_owning: false);
                }
            }

            /// <summary>
            /// This is used as a function parameter when the underlying function receives `H` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `H`/`Const_H` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            /// </summary>
            public class _ByValue_H
            {
                internal readonly Const_H? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_H() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_H(Const_H new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_H(Const_H arg) {return new(arg);}
                public _ByValue_H(MR.CS.Misc._Moved<H> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_H(MR.CS.Misc._Moved<H> arg) {return new(arg);}
            }

            /// <summary>
            /// This is used for optional parameters of class `H` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_H`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `H`/`Const_H` directly.
            /// </summary>
            public class _InOptMut_H
            {
                public H? Opt;

                public _InOptMut_H() {}
                public _InOptMut_H(H value) {Opt = value;}
                public static implicit operator _InOptMut_H(H value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `H` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_H`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `H`/`Const_H` to pass it to the function.
            /// </summary>
            public class _InOptConst_H
            {
                public Const_H? Opt;

                public _InOptConst_H() {}
                public _InOptConst_H(Const_H value) {Opt = value;}
                public static implicit operator _InOptConst_H(Const_H value) {return new(value);}
            }

            /// <summary>
            /// Generated from class `MR::Bases::I`.
            /// Base classes:
            ///   Virtual:
            ///     `MR::Bases::F`
            ///     `MR::Bases::A`
            ///   Non-virtual along a virtual path:
            ///     `MR::Bases::E`
            /// This is the const half of the class.
            /// </summary>
            public class Const_I : MR.CS.Misc.Object<Const_I>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_I(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_I_Destroy", ExactSpelling = true)]
                    extern static void __MR_Bases_I_Destroy(_Underlying *_this);
                    __MR_Bases_I_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_I() {Dispose(false);}

                // Upcasts:
                public static unsafe implicit operator MR.CS.Bases.Const_E(Const_I self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_I_UpcastTo_MR_Bases_E", ExactSpelling = true)]
                    extern static MR.CS.Bases.Const_E._Underlying *__MR_Bases_I_UpcastTo_MR_Bases_E(_Underlying *_this);
                    MR.CS.Bases.Const_E ret = new(__MR_Bases_I_UpcastTo_MR_Bases_E(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAliveEnclosingObject = self;
                    return ret;
                }
                public static unsafe implicit operator MR.CS.Bases.Const_F(Const_I self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_I_UpcastTo_MR_Bases_F", ExactSpelling = true)]
                    extern static MR.CS.Bases.Const_F._Underlying *__MR_Bases_I_UpcastTo_MR_Bases_F(_Underlying *_this);
                    MR.CS.Bases.Const_F ret = new(__MR_Bases_I_UpcastTo_MR_Bases_F(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAliveEnclosingObject = self;
                    return ret;
                }
                public static unsafe implicit operator MR.CS.Bases.Const_A(Const_I self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_I_UpcastTo_MR_Bases_A", ExactSpelling = true)]
                    extern static MR.CS.Bases.Const_A._Underlying *__MR_Bases_I_UpcastTo_MR_Bases_A(_Underlying *_this);
                    MR.CS.Bases.Const_A ret = new(__MR_Bases_I_UpcastTo_MR_Bases_A(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAliveEnclosingObject = self;
                    return ret;
                }

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_I() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_I_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Bases.I._Underlying *__MR_Bases_I_DefaultConstruct();
                    _UnderlyingPtr = __MR_Bases_I_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::Bases::I::I`.
                /// </summary>
                public unsafe Const_I(MR.CS.Bases._ByValue_I _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_I_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Bases.I._Underlying *__MR_Bases_I_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.Bases.I._Underlying *_other);
                    _UnderlyingPtr = __MR_Bases_I_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                    if (_other.Value is not null) _KeepAlive(_other.Value);
                }
            }

            /// <summary>
            /// Generated from class `MR::Bases::I`.
            /// Base classes:
            ///   Virtual:
            ///     `MR::Bases::F`
            ///     `MR::Bases::A`
            ///   Non-virtual along a virtual path:
            ///     `MR::Bases::E`
            /// This is the non-const half of the class.
            /// </summary>
            public class I : Const_I
            {
                internal unsafe I(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                // Upcasts:
                public static unsafe implicit operator MR.CS.Bases.E(I self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_I_UpcastTo_MR_Bases_E", ExactSpelling = true)]
                    extern static MR.CS.Bases.E._Underlying *__MR_Bases_I_UpcastTo_MR_Bases_E(_Underlying *_this);
                    MR.CS.Bases.E ret = new(__MR_Bases_I_UpcastTo_MR_Bases_E(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAliveEnclosingObject = self;
                    return ret;
                }
                public static unsafe implicit operator MR.CS.Bases.F(I self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_I_UpcastTo_MR_Bases_F", ExactSpelling = true)]
                    extern static MR.CS.Bases.F._Underlying *__MR_Bases_I_UpcastTo_MR_Bases_F(_Underlying *_this);
                    MR.CS.Bases.F ret = new(__MR_Bases_I_UpcastTo_MR_Bases_F(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAliveEnclosingObject = self;
                    return ret;
                }
                public static unsafe implicit operator MR.CS.Bases.A(I self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_I_UpcastTo_MR_Bases_A", ExactSpelling = true)]
                    extern static MR.CS.Bases.A._Underlying *__MR_Bases_I_UpcastTo_MR_Bases_A(_Underlying *_this);
                    MR.CS.Bases.A ret = new(__MR_Bases_I_UpcastTo_MR_Bases_A(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAliveEnclosingObject = self;
                    return ret;
                }

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe I() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_I_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Bases.I._Underlying *__MR_Bases_I_DefaultConstruct();
                    _UnderlyingPtr = __MR_Bases_I_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::Bases::I::I`.
                /// </summary>
                public unsafe I(MR.CS.Bases._ByValue_I _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_I_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Bases.I._Underlying *__MR_Bases_I_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.Bases.I._Underlying *_other);
                    _UnderlyingPtr = __MR_Bases_I_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                    if (_other.Value is not null) _KeepAlive(_other.Value);
                }

                /// <summary>
                /// Generated from method `MR::Bases::I::operator=`.
                /// </summary>
                public unsafe MR.CS.Bases.I assign(MR.CS.Bases._ByValue_I _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Bases_I_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Bases.I._Underlying *__MR_Bases_I_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.Bases.I._Underlying *_other);
                    _DiscardKeepAlive();
                    if (_other.Value is not null) _KeepAlive(_other.Value);
                    return new(__MR_Bases_I_AssignFromAnother(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null), is_owning: false);
                }
            }

            /// <summary>
            /// This is used as a function parameter when the underlying function receives `I` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `I`/`Const_I` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            /// </summary>
            public class _ByValue_I
            {
                internal readonly Const_I? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_I() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_I(Const_I new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_I(Const_I arg) {return new(arg);}
                public _ByValue_I(MR.CS.Misc._Moved<I> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_I(MR.CS.Misc._Moved<I> arg) {return new(arg);}
            }

            /// <summary>
            /// This is used for optional parameters of class `I` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_I`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `I`/`Const_I` directly.
            /// </summary>
            public class _InOptMut_I
            {
                public I? Opt;

                public _InOptMut_I() {}
                public _InOptMut_I(I value) {Opt = value;}
                public static implicit operator _InOptMut_I(I value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `I` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_I`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `I`/`Const_I` to pass it to the function.
            /// </summary>
            public class _InOptConst_I
            {
                public Const_I? Opt;

                public _InOptConst_I() {}
                public _InOptConst_I(Const_I value) {Opt = value;}
                public static implicit operator _InOptConst_I(Const_I value) {return new(value);}
            }
        }
    }
}
