public static partial class MR
{
    public static partial class CS
    {
        public static partial class CopyInheritedMembers
        {
            /// Generated from class `MR::CopyInheritedMembers::A`.
            /// Derived classes:
            ///   Virtual:
            ///     `MR::CopyInheritedMembers::G`
            ///     `MR::CopyInheritedMembers::H`
            ///     `MR::CopyInheritedMembers::I`
            ///   Non-virtual along a virtual path:
            ///     `MR::CopyInheritedMembers::M`
            ///     `MR::CopyInheritedMembers::N`
            ///     `MR::CopyInheritedMembers::O`
            ///   Direct: (non-virtual)
            ///     `MR::CopyInheritedMembers::C`
            ///     `MR::CopyInheritedMembers::E`
            ///     `MR::CopyInheritedMembers::F`
            ///     `MR::CopyInheritedMembers::J`
            ///   Ambiguous:
            ///     `MR::CopyInheritedMembers::K`
            ///     `MR::CopyInheritedMembers::L`
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
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_A_Destroy", ExactSpelling = true)]
                    extern static void __MR_CopyInheritedMembers_A_Destroy(_Underlying *_this);
                    __MR_CopyInheritedMembers_A_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_A() {Dispose(false);}

                public static unsafe ref int StaticField
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_A_GetMutable_StaticField", ExactSpelling = true)]
                        extern static int *__MR_CopyInheritedMembers_A_GetMutable_StaticField();
                        return ref *__MR_CopyInheritedMembers_A_GetMutable_StaticField();
                    }
                }

                public unsafe int field
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_A_Get_Field", ExactSpelling = true)]
                        extern static int *__MR_CopyInheritedMembers_A_Get_Field(_Underlying *_this);
                        return *__MR_CopyInheritedMembers_A_Get_Field(_UnderlyingPtr);
                    }
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_A() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.A._Underlying *__MR_CopyInheritedMembers_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_CopyInheritedMembers_A_DefaultConstruct();
                }

                /// Constructs `MR::CopyInheritedMembers::A` elementwise.
                public unsafe Const_A(int Field) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_A_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.A._Underlying *__MR_CopyInheritedMembers_A_ConstructFrom(int Field);
                    _UnderlyingPtr = __MR_CopyInheritedMembers_A_ConstructFrom(Field);
                }

                /// Generated from constructor `MR::CopyInheritedMembers::A::A`.
                public unsafe Const_A(MR.CS.CopyInheritedMembers.Const_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.A._Underlying *__MR_CopyInheritedMembers_A_ConstructFromAnother(MR.CS.CopyInheritedMembers.A._Underlying *_other);
                    _UnderlyingPtr = __MR_CopyInheritedMembers_A_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CopyInheritedMembers::A::StaticFunc`.
                public static void staticFunc()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_A_StaticFunc", ExactSpelling = true)]
                    extern static void __MR_CopyInheritedMembers_A_StaticFunc();
                    __MR_CopyInheritedMembers_A_StaticFunc();
                }
            }

            /// Generated from class `MR::CopyInheritedMembers::A`.
            /// Derived classes:
            ///   Virtual:
            ///     `MR::CopyInheritedMembers::G`
            ///     `MR::CopyInheritedMembers::H`
            ///     `MR::CopyInheritedMembers::I`
            ///   Non-virtual along a virtual path:
            ///     `MR::CopyInheritedMembers::M`
            ///     `MR::CopyInheritedMembers::N`
            ///     `MR::CopyInheritedMembers::O`
            ///   Direct: (non-virtual)
            ///     `MR::CopyInheritedMembers::C`
            ///     `MR::CopyInheritedMembers::E`
            ///     `MR::CopyInheritedMembers::F`
            ///     `MR::CopyInheritedMembers::J`
            ///   Ambiguous:
            ///     `MR::CopyInheritedMembers::K`
            ///     `MR::CopyInheritedMembers::L`
            /// This is the non-const half of the class.
            public class A : Const_A
            {
                internal unsafe A(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                public new unsafe ref int field
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_A_GetMutable_Field", ExactSpelling = true)]
                        extern static int *__MR_CopyInheritedMembers_A_GetMutable_Field(_Underlying *_this);
                        return ref *__MR_CopyInheritedMembers_A_GetMutable_Field(_UnderlyingPtr);
                    }
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe A() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.A._Underlying *__MR_CopyInheritedMembers_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_CopyInheritedMembers_A_DefaultConstruct();
                }

                /// Constructs `MR::CopyInheritedMembers::A` elementwise.
                public unsafe A(int Field) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_A_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.A._Underlying *__MR_CopyInheritedMembers_A_ConstructFrom(int Field);
                    _UnderlyingPtr = __MR_CopyInheritedMembers_A_ConstructFrom(Field);
                }

                /// Generated from constructor `MR::CopyInheritedMembers::A::A`.
                public unsafe A(MR.CS.CopyInheritedMembers.Const_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.A._Underlying *__MR_CopyInheritedMembers_A_ConstructFromAnother(MR.CS.CopyInheritedMembers.A._Underlying *_other);
                    _UnderlyingPtr = __MR_CopyInheritedMembers_A_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from conversion operator `MR::CopyInheritedMembers::A::operator int`.
                public static unsafe implicit operator int(MR.CS.CopyInheritedMembers.A _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_A_ConvertTo_int", ExactSpelling = true)]
                    extern static int __MR_CopyInheritedMembers_A_ConvertTo_int(MR.CS.CopyInheritedMembers.A._Underlying *_this);
                    return __MR_CopyInheritedMembers_A_ConvertTo_int(_this._UnderlyingPtr);
                }

                /// Generated from method `MR::CopyInheritedMembers::A::operator=`.
                public unsafe MR.CS.CopyInheritedMembers.A assign(MR.CS.CopyInheritedMembers.Const_A _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_A_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.A._Underlying *__MR_CopyInheritedMembers_A_AssignFromAnother(_Underlying *_this, MR.CS.CopyInheritedMembers.A._Underlying *_other);
                    return new(__MR_CopyInheritedMembers_A_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }

                /// Generated from method `MR::CopyInheritedMembers::A::Method`.
                public unsafe void method()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_A_Method", ExactSpelling = true)]
                    extern static void __MR_CopyInheritedMembers_A_Method(_Underlying *_this);
                    __MR_CopyInheritedMembers_A_Method(_UnderlyingPtr);
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

            /// Generated from class `MR::CopyInheritedMembers::B`.
            /// Derived classes:
            ///   Direct: (non-virtual)
            ///     `MR::CopyInheritedMembers::C`
            ///     `MR::CopyInheritedMembers::D`
            ///   Indirect: (non-virtual)
            ///     `MR::CopyInheritedMembers::E`
            ///     `MR::CopyInheritedMembers::F`
            /// This is the const half of the class.
            public class Const_B : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_B(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_B_Destroy", ExactSpelling = true)]
                    extern static void __MR_CopyInheritedMembers_B_Destroy(_Underlying *_this);
                    __MR_CopyInheritedMembers_B_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_B() {Dispose(false);}

                public static unsafe ref int StaticField
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_B_GetMutable_StaticField", ExactSpelling = true)]
                        extern static int *__MR_CopyInheritedMembers_B_GetMutable_StaticField();
                        return ref *__MR_CopyInheritedMembers_B_GetMutable_StaticField();
                    }
                }

                public unsafe int field
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_B_Get_Field", ExactSpelling = true)]
                        extern static int *__MR_CopyInheritedMembers_B_Get_Field(_Underlying *_this);
                        return *__MR_CopyInheritedMembers_B_Get_Field(_UnderlyingPtr);
                    }
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_B() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_B_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.B._Underlying *__MR_CopyInheritedMembers_B_DefaultConstruct();
                    _UnderlyingPtr = __MR_CopyInheritedMembers_B_DefaultConstruct();
                }

                /// Constructs `MR::CopyInheritedMembers::B` elementwise.
                public unsafe Const_B(int Field) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_B_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.B._Underlying *__MR_CopyInheritedMembers_B_ConstructFrom(int Field);
                    _UnderlyingPtr = __MR_CopyInheritedMembers_B_ConstructFrom(Field);
                }

                /// Generated from constructor `MR::CopyInheritedMembers::B::B`.
                public unsafe Const_B(MR.CS.CopyInheritedMembers.Const_B _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_B_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.B._Underlying *__MR_CopyInheritedMembers_B_ConstructFromAnother(MR.CS.CopyInheritedMembers.B._Underlying *_other);
                    _UnderlyingPtr = __MR_CopyInheritedMembers_B_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CopyInheritedMembers::B::StaticFunc`.
                public static void staticFunc()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_B_StaticFunc", ExactSpelling = true)]
                    extern static void __MR_CopyInheritedMembers_B_StaticFunc();
                    __MR_CopyInheritedMembers_B_StaticFunc();
                }
            }

            /// Generated from class `MR::CopyInheritedMembers::B`.
            /// Derived classes:
            ///   Direct: (non-virtual)
            ///     `MR::CopyInheritedMembers::C`
            ///     `MR::CopyInheritedMembers::D`
            ///   Indirect: (non-virtual)
            ///     `MR::CopyInheritedMembers::E`
            ///     `MR::CopyInheritedMembers::F`
            /// This is the non-const half of the class.
            public class B : Const_B
            {
                internal unsafe B(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                public new unsafe ref int field
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_B_GetMutable_Field", ExactSpelling = true)]
                        extern static int *__MR_CopyInheritedMembers_B_GetMutable_Field(_Underlying *_this);
                        return ref *__MR_CopyInheritedMembers_B_GetMutable_Field(_UnderlyingPtr);
                    }
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe B() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_B_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.B._Underlying *__MR_CopyInheritedMembers_B_DefaultConstruct();
                    _UnderlyingPtr = __MR_CopyInheritedMembers_B_DefaultConstruct();
                }

                /// Constructs `MR::CopyInheritedMembers::B` elementwise.
                public unsafe B(int Field) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_B_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.B._Underlying *__MR_CopyInheritedMembers_B_ConstructFrom(int Field);
                    _UnderlyingPtr = __MR_CopyInheritedMembers_B_ConstructFrom(Field);
                }

                /// Generated from constructor `MR::CopyInheritedMembers::B::B`.
                public unsafe B(MR.CS.CopyInheritedMembers.Const_B _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_B_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.B._Underlying *__MR_CopyInheritedMembers_B_ConstructFromAnother(MR.CS.CopyInheritedMembers.B._Underlying *_other);
                    _UnderlyingPtr = __MR_CopyInheritedMembers_B_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from conversion operator `MR::CopyInheritedMembers::B::operator int`.
                public static unsafe implicit operator int(MR.CS.CopyInheritedMembers.B _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_B_ConvertTo_int", ExactSpelling = true)]
                    extern static int __MR_CopyInheritedMembers_B_ConvertTo_int(MR.CS.CopyInheritedMembers.B._Underlying *_this);
                    return __MR_CopyInheritedMembers_B_ConvertTo_int(_this._UnderlyingPtr);
                }

                /// Generated from method `MR::CopyInheritedMembers::B::operator=`.
                public unsafe MR.CS.CopyInheritedMembers.B assign(MR.CS.CopyInheritedMembers.Const_B _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_B_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.B._Underlying *__MR_CopyInheritedMembers_B_AssignFromAnother(_Underlying *_this, MR.CS.CopyInheritedMembers.B._Underlying *_other);
                    return new(__MR_CopyInheritedMembers_B_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }

                /// Generated from method `MR::CopyInheritedMembers::B::Method`.
                public unsafe void method()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_B_Method", ExactSpelling = true)]
                    extern static void __MR_CopyInheritedMembers_B_Method(_Underlying *_this);
                    __MR_CopyInheritedMembers_B_Method(_UnderlyingPtr);
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

            /// Generated from class `MR::CopyInheritedMembers::C`.
            /// Base classes:
            ///   Direct: (non-virtual)
            ///     `MR::CopyInheritedMembers::A`
            ///     `MR::CopyInheritedMembers::B`
            /// This is the const half of the class.
            public class Const_C : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_C(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_C_Destroy", ExactSpelling = true)]
                    extern static void __MR_CopyInheritedMembers_C_Destroy(_Underlying *_this);
                    __MR_CopyInheritedMembers_C_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_C() {Dispose(false);}

                // Upcasts:
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.Const_A(Const_C self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_C_UpcastTo_MR_CopyInheritedMembers_A", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.Const_A._Underlying *__MR_CopyInheritedMembers_C_UpcastTo_MR_CopyInheritedMembers_A(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.Const_A ret = new(__MR_CopyInheritedMembers_C_UpcastTo_MR_CopyInheritedMembers_A(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.Const_B(Const_C self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_C_UpcastTo_MR_CopyInheritedMembers_B", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.Const_B._Underlying *__MR_CopyInheritedMembers_C_UpcastTo_MR_CopyInheritedMembers_B(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.Const_B ret = new(__MR_CopyInheritedMembers_C_UpcastTo_MR_CopyInheritedMembers_B(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_C() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_C_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.C._Underlying *__MR_CopyInheritedMembers_C_DefaultConstruct();
                    _UnderlyingPtr = __MR_CopyInheritedMembers_C_DefaultConstruct();
                }

                /// Generated from constructor `MR::CopyInheritedMembers::C::C`.
                public unsafe Const_C(MR.CS.CopyInheritedMembers.Const_C _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_C_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.C._Underlying *__MR_CopyInheritedMembers_C_ConstructFromAnother(MR.CS.CopyInheritedMembers.C._Underlying *_other);
                    _UnderlyingPtr = __MR_CopyInheritedMembers_C_ConstructFromAnother(_other._UnderlyingPtr);
                }
            }

            /// Generated from class `MR::CopyInheritedMembers::C`.
            /// Base classes:
            ///   Direct: (non-virtual)
            ///     `MR::CopyInheritedMembers::A`
            ///     `MR::CopyInheritedMembers::B`
            /// This is the non-const half of the class.
            public class C : Const_C
            {
                internal unsafe C(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                // Upcasts:
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.A(C self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_C_UpcastTo_MR_CopyInheritedMembers_A", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.A._Underlying *__MR_CopyInheritedMembers_C_UpcastTo_MR_CopyInheritedMembers_A(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.A ret = new(__MR_CopyInheritedMembers_C_UpcastTo_MR_CopyInheritedMembers_A(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.B(C self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_C_UpcastTo_MR_CopyInheritedMembers_B", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.B._Underlying *__MR_CopyInheritedMembers_C_UpcastTo_MR_CopyInheritedMembers_B(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.B ret = new(__MR_CopyInheritedMembers_C_UpcastTo_MR_CopyInheritedMembers_B(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe C() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_C_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.C._Underlying *__MR_CopyInheritedMembers_C_DefaultConstruct();
                    _UnderlyingPtr = __MR_CopyInheritedMembers_C_DefaultConstruct();
                }

                /// Generated from constructor `MR::CopyInheritedMembers::C::C`.
                public unsafe C(MR.CS.CopyInheritedMembers.Const_C _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_C_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.C._Underlying *__MR_CopyInheritedMembers_C_ConstructFromAnother(MR.CS.CopyInheritedMembers.C._Underlying *_other);
                    _UnderlyingPtr = __MR_CopyInheritedMembers_C_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CopyInheritedMembers::C::operator=`.
                public unsafe MR.CS.CopyInheritedMembers.C assign(MR.CS.CopyInheritedMembers.Const_C _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_C_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.C._Underlying *__MR_CopyInheritedMembers_C_AssignFromAnother(_Underlying *_this, MR.CS.CopyInheritedMembers.C._Underlying *_other);
                    return new(__MR_CopyInheritedMembers_C_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
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

            /// Generated from class `MR::CopyInheritedMembers::D`.
            /// Base classes:
            ///   Direct: (non-virtual)
            ///     `MR::CopyInheritedMembers::B`
            /// Derived classes:
            ///   Direct: (non-virtual)
            ///     `MR::CopyInheritedMembers::E`
            ///     `MR::CopyInheritedMembers::F`
            /// This is the const half of the class.
            public class Const_D : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_D(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_D_Destroy", ExactSpelling = true)]
                    extern static void __MR_CopyInheritedMembers_D_Destroy(_Underlying *_this);
                    __MR_CopyInheritedMembers_D_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_D() {Dispose(false);}

                // Upcasts:
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.Const_B(Const_D self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_D_UpcastTo_MR_CopyInheritedMembers_B", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.Const_B._Underlying *__MR_CopyInheritedMembers_D_UpcastTo_MR_CopyInheritedMembers_B(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.Const_B ret = new(__MR_CopyInheritedMembers_D_UpcastTo_MR_CopyInheritedMembers_B(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }

                public static unsafe ref int StaticField
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_D_GetMutable_StaticField", ExactSpelling = true)]
                        extern static int *__MR_CopyInheritedMembers_D_GetMutable_StaticField();
                        return ref *__MR_CopyInheritedMembers_D_GetMutable_StaticField();
                    }
                }

                public unsafe int field
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_D_Get_Field", ExactSpelling = true)]
                        extern static int *__MR_CopyInheritedMembers_D_Get_Field(_Underlying *_this);
                        return *__MR_CopyInheritedMembers_D_Get_Field(_UnderlyingPtr);
                    }
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_D() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_D_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.D._Underlying *__MR_CopyInheritedMembers_D_DefaultConstruct();
                    _UnderlyingPtr = __MR_CopyInheritedMembers_D_DefaultConstruct();
                }

                /// Generated from constructor `MR::CopyInheritedMembers::D::D`.
                public unsafe Const_D(MR.CS.CopyInheritedMembers.Const_D _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_D_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.D._Underlying *__MR_CopyInheritedMembers_D_ConstructFromAnother(MR.CS.CopyInheritedMembers.D._Underlying *_other);
                    _UnderlyingPtr = __MR_CopyInheritedMembers_D_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CopyInheritedMembers::D::StaticFunc`.
                public static void staticFunc()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_D_StaticFunc", ExactSpelling = true)]
                    extern static void __MR_CopyInheritedMembers_D_StaticFunc();
                    __MR_CopyInheritedMembers_D_StaticFunc();
                }
            }

            /// Generated from class `MR::CopyInheritedMembers::D`.
            /// Base classes:
            ///   Direct: (non-virtual)
            ///     `MR::CopyInheritedMembers::B`
            /// Derived classes:
            ///   Direct: (non-virtual)
            ///     `MR::CopyInheritedMembers::E`
            ///     `MR::CopyInheritedMembers::F`
            /// This is the non-const half of the class.
            public class D : Const_D
            {
                internal unsafe D(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                // Upcasts:
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.B(D self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_D_UpcastTo_MR_CopyInheritedMembers_B", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.B._Underlying *__MR_CopyInheritedMembers_D_UpcastTo_MR_CopyInheritedMembers_B(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.B ret = new(__MR_CopyInheritedMembers_D_UpcastTo_MR_CopyInheritedMembers_B(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }

                public new unsafe ref int field
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_D_GetMutable_Field", ExactSpelling = true)]
                        extern static int *__MR_CopyInheritedMembers_D_GetMutable_Field(_Underlying *_this);
                        return ref *__MR_CopyInheritedMembers_D_GetMutable_Field(_UnderlyingPtr);
                    }
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe D() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_D_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.D._Underlying *__MR_CopyInheritedMembers_D_DefaultConstruct();
                    _UnderlyingPtr = __MR_CopyInheritedMembers_D_DefaultConstruct();
                }

                /// Generated from constructor `MR::CopyInheritedMembers::D::D`.
                public unsafe D(MR.CS.CopyInheritedMembers.Const_D _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_D_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.D._Underlying *__MR_CopyInheritedMembers_D_ConstructFromAnother(MR.CS.CopyInheritedMembers.D._Underlying *_other);
                    _UnderlyingPtr = __MR_CopyInheritedMembers_D_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from conversion operator `MR::CopyInheritedMembers::D::operator int`.
                public static unsafe implicit operator int(MR.CS.CopyInheritedMembers.D _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_D_ConvertTo_int", ExactSpelling = true)]
                    extern static int __MR_CopyInheritedMembers_D_ConvertTo_int(MR.CS.CopyInheritedMembers.D._Underlying *_this);
                    return __MR_CopyInheritedMembers_D_ConvertTo_int(_this._UnderlyingPtr);
                }

                /// Generated from method `MR::CopyInheritedMembers::D::operator=`.
                public unsafe MR.CS.CopyInheritedMembers.D assign(MR.CS.CopyInheritedMembers.Const_D _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_D_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.D._Underlying *__MR_CopyInheritedMembers_D_AssignFromAnother(_Underlying *_this, MR.CS.CopyInheritedMembers.D._Underlying *_other);
                    return new(__MR_CopyInheritedMembers_D_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }

                /// Generated from method `MR::CopyInheritedMembers::D::Method`.
                public unsafe void method()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_D_Method", ExactSpelling = true)]
                    extern static void __MR_CopyInheritedMembers_D_Method(_Underlying *_this);
                    __MR_CopyInheritedMembers_D_Method(_UnderlyingPtr);
                }
            }

            /// This is used for optional parameters of class `D` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_D`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `D`/`Const_D` directly.
            public class _InOptMut_D
            {
                public D? Opt;

                public _InOptMut_D() {}
                public _InOptMut_D(D value) {Opt = value;}
                public static implicit operator _InOptMut_D(D value) {return new(value);}
            }

            /// This is used for optional parameters of class `D` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_D`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `D`/`Const_D` to pass it to the function.
            public class _InOptConst_D
            {
                public Const_D? Opt;

                public _InOptConst_D() {}
                public _InOptConst_D(Const_D value) {Opt = value;}
                public static implicit operator _InOptConst_D(Const_D value) {return new(value);}
            }

            /// Generated from class `MR::CopyInheritedMembers::E`.
            /// Base classes:
            ///   Direct: (non-virtual)
            ///     `MR::CopyInheritedMembers::A`
            ///     `MR::CopyInheritedMembers::D`
            ///   Indirect: (non-virtual)
            ///     `MR::CopyInheritedMembers::B`
            /// This is the const half of the class.
            public class Const_E : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_E(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_E_Destroy", ExactSpelling = true)]
                    extern static void __MR_CopyInheritedMembers_E_Destroy(_Underlying *_this);
                    __MR_CopyInheritedMembers_E_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_E() {Dispose(false);}

                // Upcasts:
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.Const_A(Const_E self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_E_UpcastTo_MR_CopyInheritedMembers_A", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.Const_A._Underlying *__MR_CopyInheritedMembers_E_UpcastTo_MR_CopyInheritedMembers_A(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.Const_A ret = new(__MR_CopyInheritedMembers_E_UpcastTo_MR_CopyInheritedMembers_A(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.Const_B(Const_E self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_E_UpcastTo_MR_CopyInheritedMembers_B", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.Const_B._Underlying *__MR_CopyInheritedMembers_E_UpcastTo_MR_CopyInheritedMembers_B(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.Const_B ret = new(__MR_CopyInheritedMembers_E_UpcastTo_MR_CopyInheritedMembers_B(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.Const_D(Const_E self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_E_UpcastTo_MR_CopyInheritedMembers_D", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.Const_D._Underlying *__MR_CopyInheritedMembers_E_UpcastTo_MR_CopyInheritedMembers_D(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.Const_D ret = new(__MR_CopyInheritedMembers_E_UpcastTo_MR_CopyInheritedMembers_D(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_E() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_E_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.E._Underlying *__MR_CopyInheritedMembers_E_DefaultConstruct();
                    _UnderlyingPtr = __MR_CopyInheritedMembers_E_DefaultConstruct();
                }

                /// Generated from constructor `MR::CopyInheritedMembers::E::E`.
                public unsafe Const_E(MR.CS.CopyInheritedMembers.Const_E _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_E_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.E._Underlying *__MR_CopyInheritedMembers_E_ConstructFromAnother(MR.CS.CopyInheritedMembers.E._Underlying *_other);
                    _UnderlyingPtr = __MR_CopyInheritedMembers_E_ConstructFromAnother(_other._UnderlyingPtr);
                }
            }

            /// Generated from class `MR::CopyInheritedMembers::E`.
            /// Base classes:
            ///   Direct: (non-virtual)
            ///     `MR::CopyInheritedMembers::A`
            ///     `MR::CopyInheritedMembers::D`
            ///   Indirect: (non-virtual)
            ///     `MR::CopyInheritedMembers::B`
            /// This is the non-const half of the class.
            public class E : Const_E
            {
                internal unsafe E(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                // Upcasts:
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.A(E self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_E_UpcastTo_MR_CopyInheritedMembers_A", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.A._Underlying *__MR_CopyInheritedMembers_E_UpcastTo_MR_CopyInheritedMembers_A(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.A ret = new(__MR_CopyInheritedMembers_E_UpcastTo_MR_CopyInheritedMembers_A(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.B(E self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_E_UpcastTo_MR_CopyInheritedMembers_B", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.B._Underlying *__MR_CopyInheritedMembers_E_UpcastTo_MR_CopyInheritedMembers_B(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.B ret = new(__MR_CopyInheritedMembers_E_UpcastTo_MR_CopyInheritedMembers_B(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.D(E self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_E_UpcastTo_MR_CopyInheritedMembers_D", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.D._Underlying *__MR_CopyInheritedMembers_E_UpcastTo_MR_CopyInheritedMembers_D(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.D ret = new(__MR_CopyInheritedMembers_E_UpcastTo_MR_CopyInheritedMembers_D(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe E() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_E_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.E._Underlying *__MR_CopyInheritedMembers_E_DefaultConstruct();
                    _UnderlyingPtr = __MR_CopyInheritedMembers_E_DefaultConstruct();
                }

                /// Generated from constructor `MR::CopyInheritedMembers::E::E`.
                public unsafe E(MR.CS.CopyInheritedMembers.Const_E _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_E_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.E._Underlying *__MR_CopyInheritedMembers_E_ConstructFromAnother(MR.CS.CopyInheritedMembers.E._Underlying *_other);
                    _UnderlyingPtr = __MR_CopyInheritedMembers_E_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CopyInheritedMembers::E::operator=`.
                public unsafe MR.CS.CopyInheritedMembers.E assign(MR.CS.CopyInheritedMembers.Const_E _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_E_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.E._Underlying *__MR_CopyInheritedMembers_E_AssignFromAnother(_Underlying *_this, MR.CS.CopyInheritedMembers.E._Underlying *_other);
                    return new(__MR_CopyInheritedMembers_E_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }
            }

            /// This is used for optional parameters of class `E` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_E`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `E`/`Const_E` directly.
            public class _InOptMut_E
            {
                public E? Opt;

                public _InOptMut_E() {}
                public _InOptMut_E(E value) {Opt = value;}
                public static implicit operator _InOptMut_E(E value) {return new(value);}
            }

            /// This is used for optional parameters of class `E` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_E`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `E`/`Const_E` to pass it to the function.
            public class _InOptConst_E
            {
                public Const_E? Opt;

                public _InOptConst_E() {}
                public _InOptConst_E(Const_E value) {Opt = value;}
                public static implicit operator _InOptConst_E(Const_E value) {return new(value);}
            }

            /// Generated from class `MR::CopyInheritedMembers::F`.
            /// Base classes:
            ///   Direct: (non-virtual)
            ///     `MR::CopyInheritedMembers::D`
            ///     `MR::CopyInheritedMembers::A`
            ///   Indirect: (non-virtual)
            ///     `MR::CopyInheritedMembers::B`
            /// This is the const half of the class.
            public class Const_F : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_F(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_F_Destroy", ExactSpelling = true)]
                    extern static void __MR_CopyInheritedMembers_F_Destroy(_Underlying *_this);
                    __MR_CopyInheritedMembers_F_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_F() {Dispose(false);}

                // Upcasts:
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.Const_B(Const_F self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_F_UpcastTo_MR_CopyInheritedMembers_B", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.Const_B._Underlying *__MR_CopyInheritedMembers_F_UpcastTo_MR_CopyInheritedMembers_B(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.Const_B ret = new(__MR_CopyInheritedMembers_F_UpcastTo_MR_CopyInheritedMembers_B(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.Const_D(Const_F self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_F_UpcastTo_MR_CopyInheritedMembers_D", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.Const_D._Underlying *__MR_CopyInheritedMembers_F_UpcastTo_MR_CopyInheritedMembers_D(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.Const_D ret = new(__MR_CopyInheritedMembers_F_UpcastTo_MR_CopyInheritedMembers_D(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.Const_A(Const_F self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_F_UpcastTo_MR_CopyInheritedMembers_A", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.Const_A._Underlying *__MR_CopyInheritedMembers_F_UpcastTo_MR_CopyInheritedMembers_A(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.Const_A ret = new(__MR_CopyInheritedMembers_F_UpcastTo_MR_CopyInheritedMembers_A(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_F() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_F_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.F._Underlying *__MR_CopyInheritedMembers_F_DefaultConstruct();
                    _UnderlyingPtr = __MR_CopyInheritedMembers_F_DefaultConstruct();
                }

                /// Generated from constructor `MR::CopyInheritedMembers::F::F`.
                public unsafe Const_F(MR.CS.CopyInheritedMembers.Const_F _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_F_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.F._Underlying *__MR_CopyInheritedMembers_F_ConstructFromAnother(MR.CS.CopyInheritedMembers.F._Underlying *_other);
                    _UnderlyingPtr = __MR_CopyInheritedMembers_F_ConstructFromAnother(_other._UnderlyingPtr);
                }
            }

            /// Generated from class `MR::CopyInheritedMembers::F`.
            /// Base classes:
            ///   Direct: (non-virtual)
            ///     `MR::CopyInheritedMembers::D`
            ///     `MR::CopyInheritedMembers::A`
            ///   Indirect: (non-virtual)
            ///     `MR::CopyInheritedMembers::B`
            /// This is the non-const half of the class.
            public class F : Const_F
            {
                internal unsafe F(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                // Upcasts:
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.B(F self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_F_UpcastTo_MR_CopyInheritedMembers_B", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.B._Underlying *__MR_CopyInheritedMembers_F_UpcastTo_MR_CopyInheritedMembers_B(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.B ret = new(__MR_CopyInheritedMembers_F_UpcastTo_MR_CopyInheritedMembers_B(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.D(F self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_F_UpcastTo_MR_CopyInheritedMembers_D", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.D._Underlying *__MR_CopyInheritedMembers_F_UpcastTo_MR_CopyInheritedMembers_D(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.D ret = new(__MR_CopyInheritedMembers_F_UpcastTo_MR_CopyInheritedMembers_D(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.A(F self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_F_UpcastTo_MR_CopyInheritedMembers_A", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.A._Underlying *__MR_CopyInheritedMembers_F_UpcastTo_MR_CopyInheritedMembers_A(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.A ret = new(__MR_CopyInheritedMembers_F_UpcastTo_MR_CopyInheritedMembers_A(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe F() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_F_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.F._Underlying *__MR_CopyInheritedMembers_F_DefaultConstruct();
                    _UnderlyingPtr = __MR_CopyInheritedMembers_F_DefaultConstruct();
                }

                /// Generated from constructor `MR::CopyInheritedMembers::F::F`.
                public unsafe F(MR.CS.CopyInheritedMembers.Const_F _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_F_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.F._Underlying *__MR_CopyInheritedMembers_F_ConstructFromAnother(MR.CS.CopyInheritedMembers.F._Underlying *_other);
                    _UnderlyingPtr = __MR_CopyInheritedMembers_F_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CopyInheritedMembers::F::operator=`.
                public unsafe MR.CS.CopyInheritedMembers.F assign(MR.CS.CopyInheritedMembers.Const_F _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_F_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.F._Underlying *__MR_CopyInheritedMembers_F_AssignFromAnother(_Underlying *_this, MR.CS.CopyInheritedMembers.F._Underlying *_other);
                    return new(__MR_CopyInheritedMembers_F_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }
            }

            /// This is used for optional parameters of class `F` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_F`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `F`/`Const_F` directly.
            public class _InOptMut_F
            {
                public F? Opt;

                public _InOptMut_F() {}
                public _InOptMut_F(F value) {Opt = value;}
                public static implicit operator _InOptMut_F(F value) {return new(value);}
            }

            /// This is used for optional parameters of class `F` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_F`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `F`/`Const_F` to pass it to the function.
            public class _InOptConst_F
            {
                public Const_F? Opt;

                public _InOptConst_F() {}
                public _InOptConst_F(Const_F value) {Opt = value;}
                public static implicit operator _InOptConst_F(Const_F value) {return new(value);}
            }

            /// Generated from class `MR::CopyInheritedMembers::G`.
            /// Base classes:
            ///   Virtual:
            ///     `MR::CopyInheritedMembers::A`
            /// Derived classes:
            ///   Direct: (non-virtual)
            ///     `MR::CopyInheritedMembers::H`
            ///     `MR::CopyInheritedMembers::I`
            ///     `MR::CopyInheritedMembers::K`
            ///     `MR::CopyInheritedMembers::L`
            /// This is the const half of the class.
            public class Const_G : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_G(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_G_Destroy", ExactSpelling = true)]
                    extern static void __MR_CopyInheritedMembers_G_Destroy(_Underlying *_this);
                    __MR_CopyInheritedMembers_G_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_G() {Dispose(false);}

                // Upcasts:
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.Const_A(Const_G self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_G_UpcastTo_MR_CopyInheritedMembers_A", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.Const_A._Underlying *__MR_CopyInheritedMembers_G_UpcastTo_MR_CopyInheritedMembers_A(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.Const_A ret = new(__MR_CopyInheritedMembers_G_UpcastTo_MR_CopyInheritedMembers_A(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }

                public static unsafe ref int StaticField
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_G_GetMutable_StaticField", ExactSpelling = true)]
                        extern static int *__MR_CopyInheritedMembers_G_GetMutable_StaticField();
                        return ref *__MR_CopyInheritedMembers_G_GetMutable_StaticField();
                    }
                }

                public unsafe int field
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_G_Get_Field", ExactSpelling = true)]
                        extern static int *__MR_CopyInheritedMembers_G_Get_Field(_Underlying *_this);
                        return *__MR_CopyInheritedMembers_G_Get_Field(_UnderlyingPtr);
                    }
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_G() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_G_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.G._Underlying *__MR_CopyInheritedMembers_G_DefaultConstruct();
                    _UnderlyingPtr = __MR_CopyInheritedMembers_G_DefaultConstruct();
                }

                /// Generated from constructor `MR::CopyInheritedMembers::G::G`.
                public unsafe Const_G(MR.CS.CopyInheritedMembers._ByValue_G _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_G_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.G._Underlying *__MR_CopyInheritedMembers_G_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CopyInheritedMembers.G._Underlying *_other);
                    _UnderlyingPtr = __MR_CopyInheritedMembers_G_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// Generated from method `MR::CopyInheritedMembers::G::StaticFunc`.
                public static void staticFunc()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_G_StaticFunc", ExactSpelling = true)]
                    extern static void __MR_CopyInheritedMembers_G_StaticFunc();
                    __MR_CopyInheritedMembers_G_StaticFunc();
                }
            }

            /// Generated from class `MR::CopyInheritedMembers::G`.
            /// Base classes:
            ///   Virtual:
            ///     `MR::CopyInheritedMembers::A`
            /// Derived classes:
            ///   Direct: (non-virtual)
            ///     `MR::CopyInheritedMembers::H`
            ///     `MR::CopyInheritedMembers::I`
            ///     `MR::CopyInheritedMembers::K`
            ///     `MR::CopyInheritedMembers::L`
            /// This is the non-const half of the class.
            public class G : Const_G
            {
                internal unsafe G(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                // Upcasts:
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.A(G self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_G_UpcastTo_MR_CopyInheritedMembers_A", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.A._Underlying *__MR_CopyInheritedMembers_G_UpcastTo_MR_CopyInheritedMembers_A(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.A ret = new(__MR_CopyInheritedMembers_G_UpcastTo_MR_CopyInheritedMembers_A(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }

                public new unsafe ref int field
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_G_GetMutable_Field", ExactSpelling = true)]
                        extern static int *__MR_CopyInheritedMembers_G_GetMutable_Field(_Underlying *_this);
                        return ref *__MR_CopyInheritedMembers_G_GetMutable_Field(_UnderlyingPtr);
                    }
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe G() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_G_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.G._Underlying *__MR_CopyInheritedMembers_G_DefaultConstruct();
                    _UnderlyingPtr = __MR_CopyInheritedMembers_G_DefaultConstruct();
                }

                /// Generated from constructor `MR::CopyInheritedMembers::G::G`.
                public unsafe G(MR.CS.CopyInheritedMembers._ByValue_G _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_G_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.G._Underlying *__MR_CopyInheritedMembers_G_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CopyInheritedMembers.G._Underlying *_other);
                    _UnderlyingPtr = __MR_CopyInheritedMembers_G_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// Generated from conversion operator `MR::CopyInheritedMembers::G::operator int`.
                public static unsafe implicit operator int(MR.CS.CopyInheritedMembers.G _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_G_ConvertTo_int", ExactSpelling = true)]
                    extern static int __MR_CopyInheritedMembers_G_ConvertTo_int(MR.CS.CopyInheritedMembers.G._Underlying *_this);
                    return __MR_CopyInheritedMembers_G_ConvertTo_int(_this._UnderlyingPtr);
                }

                /// Generated from method `MR::CopyInheritedMembers::G::operator=`.
                public unsafe MR.CS.CopyInheritedMembers.G assign(MR.CS.CopyInheritedMembers._ByValue_G _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_G_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.G._Underlying *__MR_CopyInheritedMembers_G_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.CopyInheritedMembers.G._Underlying *_other);
                    return new(__MR_CopyInheritedMembers_G_AssignFromAnother(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null), is_owning: false);
                }

                /// Generated from method `MR::CopyInheritedMembers::G::Method`.
                public unsafe void method()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_G_Method", ExactSpelling = true)]
                    extern static void __MR_CopyInheritedMembers_G_Method(_Underlying *_this);
                    __MR_CopyInheritedMembers_G_Method(_UnderlyingPtr);
                }
            }

            /// This is used as a function parameter when the underlying function receives `G` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `G`/`Const_G` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
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

            /// This is used for optional parameters of class `G` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_G`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `G`/`Const_G` directly.
            public class _InOptMut_G
            {
                public G? Opt;

                public _InOptMut_G() {}
                public _InOptMut_G(G value) {Opt = value;}
                public static implicit operator _InOptMut_G(G value) {return new(value);}
            }

            /// This is used for optional parameters of class `G` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_G`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `G`/`Const_G` to pass it to the function.
            public class _InOptConst_G
            {
                public Const_G? Opt;

                public _InOptConst_G() {}
                public _InOptConst_G(Const_G value) {Opt = value;}
                public static implicit operator _InOptConst_G(Const_G value) {return new(value);}
            }

            /// Generated from class `MR::CopyInheritedMembers::H`.
            /// Base classes:
            ///   Virtual:
            ///     `MR::CopyInheritedMembers::A`
            ///   Direct: (non-virtual)
            ///     `MR::CopyInheritedMembers::G`
            /// This is the const half of the class.
            public class Const_H : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_H(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_H_Destroy", ExactSpelling = true)]
                    extern static void __MR_CopyInheritedMembers_H_Destroy(_Underlying *_this);
                    __MR_CopyInheritedMembers_H_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_H() {Dispose(false);}

                // Upcasts:
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.Const_A(Const_H self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_H_UpcastTo_MR_CopyInheritedMembers_A", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.Const_A._Underlying *__MR_CopyInheritedMembers_H_UpcastTo_MR_CopyInheritedMembers_A(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.Const_A ret = new(__MR_CopyInheritedMembers_H_UpcastTo_MR_CopyInheritedMembers_A(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.Const_G(Const_H self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_H_UpcastTo_MR_CopyInheritedMembers_G", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.Const_G._Underlying *__MR_CopyInheritedMembers_H_UpcastTo_MR_CopyInheritedMembers_G(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.Const_G ret = new(__MR_CopyInheritedMembers_H_UpcastTo_MR_CopyInheritedMembers_G(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }

                public static unsafe ref int StaticField
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_H_GetMutable_StaticField", ExactSpelling = true)]
                        extern static int *__MR_CopyInheritedMembers_H_GetMutable_StaticField();
                        return ref *__MR_CopyInheritedMembers_H_GetMutable_StaticField();
                    }
                }

                public unsafe int field
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_H_Get_Field", ExactSpelling = true)]
                        extern static int *__MR_CopyInheritedMembers_H_Get_Field(_Underlying *_this);
                        return *__MR_CopyInheritedMembers_H_Get_Field(_UnderlyingPtr);
                    }
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_H() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_H_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.H._Underlying *__MR_CopyInheritedMembers_H_DefaultConstruct();
                    _UnderlyingPtr = __MR_CopyInheritedMembers_H_DefaultConstruct();
                }

                /// Generated from constructor `MR::CopyInheritedMembers::H::H`.
                public unsafe Const_H(MR.CS.CopyInheritedMembers._ByValue_H _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_H_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.H._Underlying *__MR_CopyInheritedMembers_H_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CopyInheritedMembers.H._Underlying *_other);
                    _UnderlyingPtr = __MR_CopyInheritedMembers_H_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// Generated from method `MR::CopyInheritedMembers::H::StaticFunc`.
                public static void staticFunc()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_H_StaticFunc", ExactSpelling = true)]
                    extern static void __MR_CopyInheritedMembers_H_StaticFunc();
                    __MR_CopyInheritedMembers_H_StaticFunc();
                }
            }

            /// Generated from class `MR::CopyInheritedMembers::H`.
            /// Base classes:
            ///   Virtual:
            ///     `MR::CopyInheritedMembers::A`
            ///   Direct: (non-virtual)
            ///     `MR::CopyInheritedMembers::G`
            /// This is the non-const half of the class.
            public class H : Const_H
            {
                internal unsafe H(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                // Upcasts:
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.A(H self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_H_UpcastTo_MR_CopyInheritedMembers_A", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.A._Underlying *__MR_CopyInheritedMembers_H_UpcastTo_MR_CopyInheritedMembers_A(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.A ret = new(__MR_CopyInheritedMembers_H_UpcastTo_MR_CopyInheritedMembers_A(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.G(H self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_H_UpcastTo_MR_CopyInheritedMembers_G", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.G._Underlying *__MR_CopyInheritedMembers_H_UpcastTo_MR_CopyInheritedMembers_G(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.G ret = new(__MR_CopyInheritedMembers_H_UpcastTo_MR_CopyInheritedMembers_G(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }

                public new unsafe ref int field
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_H_GetMutable_Field", ExactSpelling = true)]
                        extern static int *__MR_CopyInheritedMembers_H_GetMutable_Field(_Underlying *_this);
                        return ref *__MR_CopyInheritedMembers_H_GetMutable_Field(_UnderlyingPtr);
                    }
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe H() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_H_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.H._Underlying *__MR_CopyInheritedMembers_H_DefaultConstruct();
                    _UnderlyingPtr = __MR_CopyInheritedMembers_H_DefaultConstruct();
                }

                /// Generated from constructor `MR::CopyInheritedMembers::H::H`.
                public unsafe H(MR.CS.CopyInheritedMembers._ByValue_H _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_H_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.H._Underlying *__MR_CopyInheritedMembers_H_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CopyInheritedMembers.H._Underlying *_other);
                    _UnderlyingPtr = __MR_CopyInheritedMembers_H_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// Generated from conversion operator `MR::CopyInheritedMembers::H::operator int`.
                public static unsafe implicit operator int(MR.CS.CopyInheritedMembers.H _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_H_ConvertTo_int", ExactSpelling = true)]
                    extern static int __MR_CopyInheritedMembers_H_ConvertTo_int(MR.CS.CopyInheritedMembers.H._Underlying *_this);
                    return __MR_CopyInheritedMembers_H_ConvertTo_int(_this._UnderlyingPtr);
                }

                /// Generated from method `MR::CopyInheritedMembers::H::operator=`.
                public unsafe MR.CS.CopyInheritedMembers.H assign(MR.CS.CopyInheritedMembers._ByValue_H _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_H_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.H._Underlying *__MR_CopyInheritedMembers_H_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.CopyInheritedMembers.H._Underlying *_other);
                    return new(__MR_CopyInheritedMembers_H_AssignFromAnother(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null), is_owning: false);
                }

                /// Generated from method `MR::CopyInheritedMembers::H::Method`.
                public unsafe void method()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_H_Method", ExactSpelling = true)]
                    extern static void __MR_CopyInheritedMembers_H_Method(_Underlying *_this);
                    __MR_CopyInheritedMembers_H_Method(_UnderlyingPtr);
                }
            }

            /// This is used as a function parameter when the underlying function receives `H` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `H`/`Const_H` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
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

            /// This is used for optional parameters of class `H` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_H`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `H`/`Const_H` directly.
            public class _InOptMut_H
            {
                public H? Opt;

                public _InOptMut_H() {}
                public _InOptMut_H(H value) {Opt = value;}
                public static implicit operator _InOptMut_H(H value) {return new(value);}
            }

            /// This is used for optional parameters of class `H` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_H`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `H`/`Const_H` to pass it to the function.
            public class _InOptConst_H
            {
                public Const_H? Opt;

                public _InOptConst_H() {}
                public _InOptConst_H(Const_H value) {Opt = value;}
                public static implicit operator _InOptConst_H(Const_H value) {return new(value);}
            }

            /// Generated from class `MR::CopyInheritedMembers::I`.
            /// Base classes:
            ///   Virtual:
            ///     `MR::CopyInheritedMembers::A`
            ///   Direct: (non-virtual)
            ///     `MR::CopyInheritedMembers::G`
            /// This is the const half of the class.
            public class Const_I : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_I(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_I_Destroy", ExactSpelling = true)]
                    extern static void __MR_CopyInheritedMembers_I_Destroy(_Underlying *_this);
                    __MR_CopyInheritedMembers_I_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_I() {Dispose(false);}

                // Upcasts:
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.Const_A(Const_I self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_I_UpcastTo_MR_CopyInheritedMembers_A", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.Const_A._Underlying *__MR_CopyInheritedMembers_I_UpcastTo_MR_CopyInheritedMembers_A(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.Const_A ret = new(__MR_CopyInheritedMembers_I_UpcastTo_MR_CopyInheritedMembers_A(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.Const_G(Const_I self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_I_UpcastTo_MR_CopyInheritedMembers_G", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.Const_G._Underlying *__MR_CopyInheritedMembers_I_UpcastTo_MR_CopyInheritedMembers_G(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.Const_G ret = new(__MR_CopyInheritedMembers_I_UpcastTo_MR_CopyInheritedMembers_G(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }

                public static unsafe ref int StaticField
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_I_GetMutable_StaticField", ExactSpelling = true)]
                        extern static int *__MR_CopyInheritedMembers_I_GetMutable_StaticField();
                        return ref *__MR_CopyInheritedMembers_I_GetMutable_StaticField();
                    }
                }

                public unsafe int field
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_I_Get_Field", ExactSpelling = true)]
                        extern static int *__MR_CopyInheritedMembers_I_Get_Field(_Underlying *_this);
                        return *__MR_CopyInheritedMembers_I_Get_Field(_UnderlyingPtr);
                    }
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_I() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_I_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.I._Underlying *__MR_CopyInheritedMembers_I_DefaultConstruct();
                    _UnderlyingPtr = __MR_CopyInheritedMembers_I_DefaultConstruct();
                }

                /// Generated from constructor `MR::CopyInheritedMembers::I::I`.
                public unsafe Const_I(MR.CS.CopyInheritedMembers._ByValue_I _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_I_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.I._Underlying *__MR_CopyInheritedMembers_I_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CopyInheritedMembers.I._Underlying *_other);
                    _UnderlyingPtr = __MR_CopyInheritedMembers_I_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// Generated from method `MR::CopyInheritedMembers::I::StaticFunc`.
                public static void staticFunc()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_I_StaticFunc", ExactSpelling = true)]
                    extern static void __MR_CopyInheritedMembers_I_StaticFunc();
                    __MR_CopyInheritedMembers_I_StaticFunc();
                }
            }

            /// Generated from class `MR::CopyInheritedMembers::I`.
            /// Base classes:
            ///   Virtual:
            ///     `MR::CopyInheritedMembers::A`
            ///   Direct: (non-virtual)
            ///     `MR::CopyInheritedMembers::G`
            /// This is the non-const half of the class.
            public class I : Const_I
            {
                internal unsafe I(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                // Upcasts:
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.A(I self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_I_UpcastTo_MR_CopyInheritedMembers_A", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.A._Underlying *__MR_CopyInheritedMembers_I_UpcastTo_MR_CopyInheritedMembers_A(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.A ret = new(__MR_CopyInheritedMembers_I_UpcastTo_MR_CopyInheritedMembers_A(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.G(I self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_I_UpcastTo_MR_CopyInheritedMembers_G", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.G._Underlying *__MR_CopyInheritedMembers_I_UpcastTo_MR_CopyInheritedMembers_G(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.G ret = new(__MR_CopyInheritedMembers_I_UpcastTo_MR_CopyInheritedMembers_G(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }

                public new unsafe ref int field
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_I_GetMutable_Field", ExactSpelling = true)]
                        extern static int *__MR_CopyInheritedMembers_I_GetMutable_Field(_Underlying *_this);
                        return ref *__MR_CopyInheritedMembers_I_GetMutable_Field(_UnderlyingPtr);
                    }
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe I() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_I_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.I._Underlying *__MR_CopyInheritedMembers_I_DefaultConstruct();
                    _UnderlyingPtr = __MR_CopyInheritedMembers_I_DefaultConstruct();
                }

                /// Generated from constructor `MR::CopyInheritedMembers::I::I`.
                public unsafe I(MR.CS.CopyInheritedMembers._ByValue_I _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_I_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.I._Underlying *__MR_CopyInheritedMembers_I_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CopyInheritedMembers.I._Underlying *_other);
                    _UnderlyingPtr = __MR_CopyInheritedMembers_I_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// Generated from conversion operator `MR::CopyInheritedMembers::I::operator int`.
                public static unsafe implicit operator int(MR.CS.CopyInheritedMembers.I _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_I_ConvertTo_int", ExactSpelling = true)]
                    extern static int __MR_CopyInheritedMembers_I_ConvertTo_int(MR.CS.CopyInheritedMembers.I._Underlying *_this);
                    return __MR_CopyInheritedMembers_I_ConvertTo_int(_this._UnderlyingPtr);
                }

                /// Generated from method `MR::CopyInheritedMembers::I::operator=`.
                public unsafe MR.CS.CopyInheritedMembers.I assign(MR.CS.CopyInheritedMembers._ByValue_I _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_I_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.I._Underlying *__MR_CopyInheritedMembers_I_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.CopyInheritedMembers.I._Underlying *_other);
                    return new(__MR_CopyInheritedMembers_I_AssignFromAnother(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null), is_owning: false);
                }

                /// Generated from method `MR::CopyInheritedMembers::I::Method`.
                public unsafe void method()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_I_Method", ExactSpelling = true)]
                    extern static void __MR_CopyInheritedMembers_I_Method(_Underlying *_this);
                    __MR_CopyInheritedMembers_I_Method(_UnderlyingPtr);
                }
            }

            /// This is used as a function parameter when the underlying function receives `I` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `I`/`Const_I` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
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

            /// This is used for optional parameters of class `I` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_I`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `I`/`Const_I` directly.
            public class _InOptMut_I
            {
                public I? Opt;

                public _InOptMut_I() {}
                public _InOptMut_I(I value) {Opt = value;}
                public static implicit operator _InOptMut_I(I value) {return new(value);}
            }

            /// This is used for optional parameters of class `I` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_I`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `I`/`Const_I` to pass it to the function.
            public class _InOptConst_I
            {
                public Const_I? Opt;

                public _InOptConst_I() {}
                public _InOptConst_I(Const_I value) {Opt = value;}
                public static implicit operator _InOptConst_I(Const_I value) {return new(value);}
            }

            /// Generated from class `MR::CopyInheritedMembers::J`.
            /// Base classes:
            ///   Direct: (non-virtual)
            ///     `MR::CopyInheritedMembers::A`
            /// Derived classes:
            ///   Virtual:
            ///     `MR::CopyInheritedMembers::M`
            ///     `MR::CopyInheritedMembers::N`
            ///     `MR::CopyInheritedMembers::O`
            ///   Direct: (non-virtual)
            ///     `MR::CopyInheritedMembers::K`
            ///     `MR::CopyInheritedMembers::L`
            /// This is the const half of the class.
            public class Const_J : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_J(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_J_Destroy", ExactSpelling = true)]
                    extern static void __MR_CopyInheritedMembers_J_Destroy(_Underlying *_this);
                    __MR_CopyInheritedMembers_J_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_J() {Dispose(false);}

                // Upcasts:
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.Const_A(Const_J self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_J_UpcastTo_MR_CopyInheritedMembers_A", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.Const_A._Underlying *__MR_CopyInheritedMembers_J_UpcastTo_MR_CopyInheritedMembers_A(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.Const_A ret = new(__MR_CopyInheritedMembers_J_UpcastTo_MR_CopyInheritedMembers_A(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }

                public static unsafe ref int StaticField
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_J_GetMutable_StaticField", ExactSpelling = true)]
                        extern static int *__MR_CopyInheritedMembers_J_GetMutable_StaticField();
                        return ref *__MR_CopyInheritedMembers_J_GetMutable_StaticField();
                    }
                }

                public unsafe int field
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_J_Get_Field", ExactSpelling = true)]
                        extern static int *__MR_CopyInheritedMembers_J_Get_Field(_Underlying *_this);
                        return *__MR_CopyInheritedMembers_J_Get_Field(_UnderlyingPtr);
                    }
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_J() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_J_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.J._Underlying *__MR_CopyInheritedMembers_J_DefaultConstruct();
                    _UnderlyingPtr = __MR_CopyInheritedMembers_J_DefaultConstruct();
                }

                /// Generated from constructor `MR::CopyInheritedMembers::J::J`.
                public unsafe Const_J(MR.CS.CopyInheritedMembers.Const_J _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_J_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.J._Underlying *__MR_CopyInheritedMembers_J_ConstructFromAnother(MR.CS.CopyInheritedMembers.J._Underlying *_other);
                    _UnderlyingPtr = __MR_CopyInheritedMembers_J_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CopyInheritedMembers::J::StaticFunc`.
                public static void staticFunc()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_J_StaticFunc", ExactSpelling = true)]
                    extern static void __MR_CopyInheritedMembers_J_StaticFunc();
                    __MR_CopyInheritedMembers_J_StaticFunc();
                }
            }

            /// Generated from class `MR::CopyInheritedMembers::J`.
            /// Base classes:
            ///   Direct: (non-virtual)
            ///     `MR::CopyInheritedMembers::A`
            /// Derived classes:
            ///   Virtual:
            ///     `MR::CopyInheritedMembers::M`
            ///     `MR::CopyInheritedMembers::N`
            ///     `MR::CopyInheritedMembers::O`
            ///   Direct: (non-virtual)
            ///     `MR::CopyInheritedMembers::K`
            ///     `MR::CopyInheritedMembers::L`
            /// This is the non-const half of the class.
            public class J : Const_J
            {
                internal unsafe J(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                // Upcasts:
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.A(J self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_J_UpcastTo_MR_CopyInheritedMembers_A", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.A._Underlying *__MR_CopyInheritedMembers_J_UpcastTo_MR_CopyInheritedMembers_A(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.A ret = new(__MR_CopyInheritedMembers_J_UpcastTo_MR_CopyInheritedMembers_A(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }

                public new unsafe ref int field
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_J_GetMutable_Field", ExactSpelling = true)]
                        extern static int *__MR_CopyInheritedMembers_J_GetMutable_Field(_Underlying *_this);
                        return ref *__MR_CopyInheritedMembers_J_GetMutable_Field(_UnderlyingPtr);
                    }
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe J() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_J_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.J._Underlying *__MR_CopyInheritedMembers_J_DefaultConstruct();
                    _UnderlyingPtr = __MR_CopyInheritedMembers_J_DefaultConstruct();
                }

                /// Generated from constructor `MR::CopyInheritedMembers::J::J`.
                public unsafe J(MR.CS.CopyInheritedMembers.Const_J _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_J_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.J._Underlying *__MR_CopyInheritedMembers_J_ConstructFromAnother(MR.CS.CopyInheritedMembers.J._Underlying *_other);
                    _UnderlyingPtr = __MR_CopyInheritedMembers_J_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from conversion operator `MR::CopyInheritedMembers::J::operator int`.
                public static unsafe implicit operator int(MR.CS.CopyInheritedMembers.J _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_J_ConvertTo_int", ExactSpelling = true)]
                    extern static int __MR_CopyInheritedMembers_J_ConvertTo_int(MR.CS.CopyInheritedMembers.J._Underlying *_this);
                    return __MR_CopyInheritedMembers_J_ConvertTo_int(_this._UnderlyingPtr);
                }

                /// Generated from method `MR::CopyInheritedMembers::J::operator=`.
                public unsafe MR.CS.CopyInheritedMembers.J assign(MR.CS.CopyInheritedMembers.Const_J _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_J_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.J._Underlying *__MR_CopyInheritedMembers_J_AssignFromAnother(_Underlying *_this, MR.CS.CopyInheritedMembers.J._Underlying *_other);
                    return new(__MR_CopyInheritedMembers_J_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }

                /// Generated from method `MR::CopyInheritedMembers::J::Method`.
                public unsafe void method()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_J_Method", ExactSpelling = true)]
                    extern static void __MR_CopyInheritedMembers_J_Method(_Underlying *_this);
                    __MR_CopyInheritedMembers_J_Method(_UnderlyingPtr);
                }
            }

            /// This is used for optional parameters of class `J` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_J`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `J`/`Const_J` directly.
            public class _InOptMut_J
            {
                public J? Opt;

                public _InOptMut_J() {}
                public _InOptMut_J(J value) {Opt = value;}
                public static implicit operator _InOptMut_J(J value) {return new(value);}
            }

            /// This is used for optional parameters of class `J` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_J`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `J`/`Const_J` to pass it to the function.
            public class _InOptConst_J
            {
                public Const_J? Opt;

                public _InOptConst_J() {}
                public _InOptConst_J(Const_J value) {Opt = value;}
                public static implicit operator _InOptConst_J(Const_J value) {return new(value);}
            }

            /// Generated from class `MR::CopyInheritedMembers::K`.
            /// Base classes:
            ///   Direct: (non-virtual)
            ///     `MR::CopyInheritedMembers::G`
            ///     `MR::CopyInheritedMembers::J`
            ///   Ambiguous:
            ///     `MR::CopyInheritedMembers::A`
            /// This is the const half of the class.
            public class Const_K : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_K(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_K_Destroy", ExactSpelling = true)]
                    extern static void __MR_CopyInheritedMembers_K_Destroy(_Underlying *_this);
                    __MR_CopyInheritedMembers_K_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_K() {Dispose(false);}

                // Upcasts:
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.Const_G(Const_K self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_K_UpcastTo_MR_CopyInheritedMembers_G", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.Const_G._Underlying *__MR_CopyInheritedMembers_K_UpcastTo_MR_CopyInheritedMembers_G(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.Const_G ret = new(__MR_CopyInheritedMembers_K_UpcastTo_MR_CopyInheritedMembers_G(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.Const_J(Const_K self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_K_UpcastTo_MR_CopyInheritedMembers_J", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.Const_J._Underlying *__MR_CopyInheritedMembers_K_UpcastTo_MR_CopyInheritedMembers_J(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.Const_J ret = new(__MR_CopyInheritedMembers_K_UpcastTo_MR_CopyInheritedMembers_J(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_K() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_K_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.K._Underlying *__MR_CopyInheritedMembers_K_DefaultConstruct();
                    _UnderlyingPtr = __MR_CopyInheritedMembers_K_DefaultConstruct();
                }

                /// Generated from constructor `MR::CopyInheritedMembers::K::K`.
                public unsafe Const_K(MR.CS.CopyInheritedMembers._ByValue_K _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_K_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.K._Underlying *__MR_CopyInheritedMembers_K_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CopyInheritedMembers.K._Underlying *_other);
                    _UnderlyingPtr = __MR_CopyInheritedMembers_K_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }
            }

            /// Generated from class `MR::CopyInheritedMembers::K`.
            /// Base classes:
            ///   Direct: (non-virtual)
            ///     `MR::CopyInheritedMembers::G`
            ///     `MR::CopyInheritedMembers::J`
            ///   Ambiguous:
            ///     `MR::CopyInheritedMembers::A`
            /// This is the non-const half of the class.
            public class K : Const_K
            {
                internal unsafe K(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                // Upcasts:
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.G(K self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_K_UpcastTo_MR_CopyInheritedMembers_G", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.G._Underlying *__MR_CopyInheritedMembers_K_UpcastTo_MR_CopyInheritedMembers_G(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.G ret = new(__MR_CopyInheritedMembers_K_UpcastTo_MR_CopyInheritedMembers_G(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.J(K self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_K_UpcastTo_MR_CopyInheritedMembers_J", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.J._Underlying *__MR_CopyInheritedMembers_K_UpcastTo_MR_CopyInheritedMembers_J(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.J ret = new(__MR_CopyInheritedMembers_K_UpcastTo_MR_CopyInheritedMembers_J(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe K() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_K_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.K._Underlying *__MR_CopyInheritedMembers_K_DefaultConstruct();
                    _UnderlyingPtr = __MR_CopyInheritedMembers_K_DefaultConstruct();
                }

                /// Generated from constructor `MR::CopyInheritedMembers::K::K`.
                public unsafe K(MR.CS.CopyInheritedMembers._ByValue_K _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_K_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.K._Underlying *__MR_CopyInheritedMembers_K_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CopyInheritedMembers.K._Underlying *_other);
                    _UnderlyingPtr = __MR_CopyInheritedMembers_K_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// Generated from method `MR::CopyInheritedMembers::K::operator=`.
                public unsafe MR.CS.CopyInheritedMembers.K assign(MR.CS.CopyInheritedMembers._ByValue_K _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_K_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.K._Underlying *__MR_CopyInheritedMembers_K_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.CopyInheritedMembers.K._Underlying *_other);
                    return new(__MR_CopyInheritedMembers_K_AssignFromAnother(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null), is_owning: false);
                }
            }

            /// This is used as a function parameter when the underlying function receives `K` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `K`/`Const_K` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            public class _ByValue_K
            {
                internal readonly Const_K? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_K() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_K(Const_K new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_K(Const_K arg) {return new(arg);}
                public _ByValue_K(MR.CS.Misc._Moved<K> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_K(MR.CS.Misc._Moved<K> arg) {return new(arg);}
            }

            /// This is used for optional parameters of class `K` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_K`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `K`/`Const_K` directly.
            public class _InOptMut_K
            {
                public K? Opt;

                public _InOptMut_K() {}
                public _InOptMut_K(K value) {Opt = value;}
                public static implicit operator _InOptMut_K(K value) {return new(value);}
            }

            /// This is used for optional parameters of class `K` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_K`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `K`/`Const_K` to pass it to the function.
            public class _InOptConst_K
            {
                public Const_K? Opt;

                public _InOptConst_K() {}
                public _InOptConst_K(Const_K value) {Opt = value;}
                public static implicit operator _InOptConst_K(Const_K value) {return new(value);}
            }

            /// Generated from class `MR::CopyInheritedMembers::L`.
            /// Base classes:
            ///   Direct: (non-virtual)
            ///     `MR::CopyInheritedMembers::J`
            ///     `MR::CopyInheritedMembers::G`
            ///   Ambiguous:
            ///     `MR::CopyInheritedMembers::A`
            /// This is the const half of the class.
            public class Const_L : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_L(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_L_Destroy", ExactSpelling = true)]
                    extern static void __MR_CopyInheritedMembers_L_Destroy(_Underlying *_this);
                    __MR_CopyInheritedMembers_L_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_L() {Dispose(false);}

                // Upcasts:
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.Const_J(Const_L self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_L_UpcastTo_MR_CopyInheritedMembers_J", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.Const_J._Underlying *__MR_CopyInheritedMembers_L_UpcastTo_MR_CopyInheritedMembers_J(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.Const_J ret = new(__MR_CopyInheritedMembers_L_UpcastTo_MR_CopyInheritedMembers_J(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.Const_G(Const_L self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_L_UpcastTo_MR_CopyInheritedMembers_G", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.Const_G._Underlying *__MR_CopyInheritedMembers_L_UpcastTo_MR_CopyInheritedMembers_G(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.Const_G ret = new(__MR_CopyInheritedMembers_L_UpcastTo_MR_CopyInheritedMembers_G(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_L() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_L_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.L._Underlying *__MR_CopyInheritedMembers_L_DefaultConstruct();
                    _UnderlyingPtr = __MR_CopyInheritedMembers_L_DefaultConstruct();
                }

                /// Generated from constructor `MR::CopyInheritedMembers::L::L`.
                public unsafe Const_L(MR.CS.CopyInheritedMembers._ByValue_L _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_L_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.L._Underlying *__MR_CopyInheritedMembers_L_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CopyInheritedMembers.L._Underlying *_other);
                    _UnderlyingPtr = __MR_CopyInheritedMembers_L_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }
            }

            /// Generated from class `MR::CopyInheritedMembers::L`.
            /// Base classes:
            ///   Direct: (non-virtual)
            ///     `MR::CopyInheritedMembers::J`
            ///     `MR::CopyInheritedMembers::G`
            ///   Ambiguous:
            ///     `MR::CopyInheritedMembers::A`
            /// This is the non-const half of the class.
            public class L : Const_L
            {
                internal unsafe L(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                // Upcasts:
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.J(L self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_L_UpcastTo_MR_CopyInheritedMembers_J", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.J._Underlying *__MR_CopyInheritedMembers_L_UpcastTo_MR_CopyInheritedMembers_J(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.J ret = new(__MR_CopyInheritedMembers_L_UpcastTo_MR_CopyInheritedMembers_J(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.G(L self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_L_UpcastTo_MR_CopyInheritedMembers_G", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.G._Underlying *__MR_CopyInheritedMembers_L_UpcastTo_MR_CopyInheritedMembers_G(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.G ret = new(__MR_CopyInheritedMembers_L_UpcastTo_MR_CopyInheritedMembers_G(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe L() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_L_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.L._Underlying *__MR_CopyInheritedMembers_L_DefaultConstruct();
                    _UnderlyingPtr = __MR_CopyInheritedMembers_L_DefaultConstruct();
                }

                /// Generated from constructor `MR::CopyInheritedMembers::L::L`.
                public unsafe L(MR.CS.CopyInheritedMembers._ByValue_L _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_L_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.L._Underlying *__MR_CopyInheritedMembers_L_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CopyInheritedMembers.L._Underlying *_other);
                    _UnderlyingPtr = __MR_CopyInheritedMembers_L_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// Generated from method `MR::CopyInheritedMembers::L::operator=`.
                public unsafe MR.CS.CopyInheritedMembers.L assign(MR.CS.CopyInheritedMembers._ByValue_L _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_L_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.L._Underlying *__MR_CopyInheritedMembers_L_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.CopyInheritedMembers.L._Underlying *_other);
                    return new(__MR_CopyInheritedMembers_L_AssignFromAnother(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null), is_owning: false);
                }
            }

            /// This is used as a function parameter when the underlying function receives `L` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `L`/`Const_L` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            public class _ByValue_L
            {
                internal readonly Const_L? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_L() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_L(Const_L new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_L(Const_L arg) {return new(arg);}
                public _ByValue_L(MR.CS.Misc._Moved<L> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_L(MR.CS.Misc._Moved<L> arg) {return new(arg);}
            }

            /// This is used for optional parameters of class `L` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_L`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `L`/`Const_L` directly.
            public class _InOptMut_L
            {
                public L? Opt;

                public _InOptMut_L() {}
                public _InOptMut_L(L value) {Opt = value;}
                public static implicit operator _InOptMut_L(L value) {return new(value);}
            }

            /// This is used for optional parameters of class `L` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_L`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `L`/`Const_L` to pass it to the function.
            public class _InOptConst_L
            {
                public Const_L? Opt;

                public _InOptConst_L() {}
                public _InOptConst_L(Const_L value) {Opt = value;}
                public static implicit operator _InOptConst_L(Const_L value) {return new(value);}
            }

            // Now test that a non-virtual base of a virtual base gets treated as a virtual.
            /// Generated from class `MR::CopyInheritedMembers::M`.
            /// Base classes:
            ///   Virtual:
            ///     `MR::CopyInheritedMembers::J`
            ///   Non-virtual along a virtual path:
            ///     `MR::CopyInheritedMembers::A`
            /// Derived classes:
            ///   Direct: (non-virtual)
            ///     `MR::CopyInheritedMembers::N`
            ///   Indirect: (non-virtual)
            ///     `MR::CopyInheritedMembers::O`
            /// This is the const half of the class.
            public class Const_M : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_M(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_M_Destroy", ExactSpelling = true)]
                    extern static void __MR_CopyInheritedMembers_M_Destroy(_Underlying *_this);
                    __MR_CopyInheritedMembers_M_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_M() {Dispose(false);}

                // Upcasts:
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.Const_A(Const_M self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_M_UpcastTo_MR_CopyInheritedMembers_A", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.Const_A._Underlying *__MR_CopyInheritedMembers_M_UpcastTo_MR_CopyInheritedMembers_A(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.Const_A ret = new(__MR_CopyInheritedMembers_M_UpcastTo_MR_CopyInheritedMembers_A(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.Const_J(Const_M self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_M_UpcastTo_MR_CopyInheritedMembers_J", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.Const_J._Underlying *__MR_CopyInheritedMembers_M_UpcastTo_MR_CopyInheritedMembers_J(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.Const_J ret = new(__MR_CopyInheritedMembers_M_UpcastTo_MR_CopyInheritedMembers_J(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }

                public static unsafe ref int StaticField
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_M_GetMutable_StaticField", ExactSpelling = true)]
                        extern static int *__MR_CopyInheritedMembers_M_GetMutable_StaticField();
                        return ref *__MR_CopyInheritedMembers_M_GetMutable_StaticField();
                    }
                }

                public unsafe int field
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_M_Get_Field", ExactSpelling = true)]
                        extern static int *__MR_CopyInheritedMembers_M_Get_Field(_Underlying *_this);
                        return *__MR_CopyInheritedMembers_M_Get_Field(_UnderlyingPtr);
                    }
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_M() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_M_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.M._Underlying *__MR_CopyInheritedMembers_M_DefaultConstruct();
                    _UnderlyingPtr = __MR_CopyInheritedMembers_M_DefaultConstruct();
                }

                /// Generated from constructor `MR::CopyInheritedMembers::M::M`.
                public unsafe Const_M(MR.CS.CopyInheritedMembers._ByValue_M _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_M_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.M._Underlying *__MR_CopyInheritedMembers_M_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CopyInheritedMembers.M._Underlying *_other);
                    _UnderlyingPtr = __MR_CopyInheritedMembers_M_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// Generated from method `MR::CopyInheritedMembers::M::StaticFunc`.
                public static void staticFunc()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_M_StaticFunc", ExactSpelling = true)]
                    extern static void __MR_CopyInheritedMembers_M_StaticFunc();
                    __MR_CopyInheritedMembers_M_StaticFunc();
                }
            }

            // Now test that a non-virtual base of a virtual base gets treated as a virtual.
            /// Generated from class `MR::CopyInheritedMembers::M`.
            /// Base classes:
            ///   Virtual:
            ///     `MR::CopyInheritedMembers::J`
            ///   Non-virtual along a virtual path:
            ///     `MR::CopyInheritedMembers::A`
            /// Derived classes:
            ///   Direct: (non-virtual)
            ///     `MR::CopyInheritedMembers::N`
            ///   Indirect: (non-virtual)
            ///     `MR::CopyInheritedMembers::O`
            /// This is the non-const half of the class.
            public class M : Const_M
            {
                internal unsafe M(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                // Upcasts:
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.A(M self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_M_UpcastTo_MR_CopyInheritedMembers_A", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.A._Underlying *__MR_CopyInheritedMembers_M_UpcastTo_MR_CopyInheritedMembers_A(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.A ret = new(__MR_CopyInheritedMembers_M_UpcastTo_MR_CopyInheritedMembers_A(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.J(M self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_M_UpcastTo_MR_CopyInheritedMembers_J", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.J._Underlying *__MR_CopyInheritedMembers_M_UpcastTo_MR_CopyInheritedMembers_J(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.J ret = new(__MR_CopyInheritedMembers_M_UpcastTo_MR_CopyInheritedMembers_J(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }

                public new unsafe ref int field
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_M_GetMutable_Field", ExactSpelling = true)]
                        extern static int *__MR_CopyInheritedMembers_M_GetMutable_Field(_Underlying *_this);
                        return ref *__MR_CopyInheritedMembers_M_GetMutable_Field(_UnderlyingPtr);
                    }
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe M() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_M_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.M._Underlying *__MR_CopyInheritedMembers_M_DefaultConstruct();
                    _UnderlyingPtr = __MR_CopyInheritedMembers_M_DefaultConstruct();
                }

                /// Generated from constructor `MR::CopyInheritedMembers::M::M`.
                public unsafe M(MR.CS.CopyInheritedMembers._ByValue_M _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_M_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.M._Underlying *__MR_CopyInheritedMembers_M_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CopyInheritedMembers.M._Underlying *_other);
                    _UnderlyingPtr = __MR_CopyInheritedMembers_M_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// Generated from conversion operator `MR::CopyInheritedMembers::M::operator int`.
                public static unsafe implicit operator int(MR.CS.CopyInheritedMembers.M _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_M_ConvertTo_int", ExactSpelling = true)]
                    extern static int __MR_CopyInheritedMembers_M_ConvertTo_int(MR.CS.CopyInheritedMembers.M._Underlying *_this);
                    return __MR_CopyInheritedMembers_M_ConvertTo_int(_this._UnderlyingPtr);
                }

                /// Generated from method `MR::CopyInheritedMembers::M::operator=`.
                public unsafe MR.CS.CopyInheritedMembers.M assign(MR.CS.CopyInheritedMembers._ByValue_M _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_M_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.M._Underlying *__MR_CopyInheritedMembers_M_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.CopyInheritedMembers.M._Underlying *_other);
                    return new(__MR_CopyInheritedMembers_M_AssignFromAnother(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null), is_owning: false);
                }

                /// Generated from method `MR::CopyInheritedMembers::M::Method`.
                public unsafe void method()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_M_Method", ExactSpelling = true)]
                    extern static void __MR_CopyInheritedMembers_M_Method(_Underlying *_this);
                    __MR_CopyInheritedMembers_M_Method(_UnderlyingPtr);
                }
            }

            /// This is used as a function parameter when the underlying function receives `M` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `M`/`Const_M` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            public class _ByValue_M
            {
                internal readonly Const_M? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_M() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_M(Const_M new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_M(Const_M arg) {return new(arg);}
                public _ByValue_M(MR.CS.Misc._Moved<M> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_M(MR.CS.Misc._Moved<M> arg) {return new(arg);}
            }

            /// This is used for optional parameters of class `M` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_M`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `M`/`Const_M` directly.
            public class _InOptMut_M
            {
                public M? Opt;

                public _InOptMut_M() {}
                public _InOptMut_M(M value) {Opt = value;}
                public static implicit operator _InOptMut_M(M value) {return new(value);}
            }

            /// This is used for optional parameters of class `M` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_M`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `M`/`Const_M` to pass it to the function.
            public class _InOptConst_M
            {
                public Const_M? Opt;

                public _InOptConst_M() {}
                public _InOptConst_M(Const_M value) {Opt = value;}
                public static implicit operator _InOptConst_M(Const_M value) {return new(value);}
            }

            /// Generated from class `MR::CopyInheritedMembers::N`.
            /// Base classes:
            ///   Virtual:
            ///     `MR::CopyInheritedMembers::J`
            ///   Non-virtual along a virtual path:
            ///     `MR::CopyInheritedMembers::A`
            ///   Direct: (non-virtual)
            ///     `MR::CopyInheritedMembers::M`
            /// Derived classes:
            ///   Direct: (non-virtual)
            ///     `MR::CopyInheritedMembers::O`
            /// This is the const half of the class.
            public class Const_N : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_N(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_N_Destroy", ExactSpelling = true)]
                    extern static void __MR_CopyInheritedMembers_N_Destroy(_Underlying *_this);
                    __MR_CopyInheritedMembers_N_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_N() {Dispose(false);}

                // Upcasts:
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.Const_A(Const_N self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_N_UpcastTo_MR_CopyInheritedMembers_A", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.Const_A._Underlying *__MR_CopyInheritedMembers_N_UpcastTo_MR_CopyInheritedMembers_A(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.Const_A ret = new(__MR_CopyInheritedMembers_N_UpcastTo_MR_CopyInheritedMembers_A(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.Const_J(Const_N self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_N_UpcastTo_MR_CopyInheritedMembers_J", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.Const_J._Underlying *__MR_CopyInheritedMembers_N_UpcastTo_MR_CopyInheritedMembers_J(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.Const_J ret = new(__MR_CopyInheritedMembers_N_UpcastTo_MR_CopyInheritedMembers_J(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.Const_M(Const_N self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_N_UpcastTo_MR_CopyInheritedMembers_M", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.Const_M._Underlying *__MR_CopyInheritedMembers_N_UpcastTo_MR_CopyInheritedMembers_M(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.Const_M ret = new(__MR_CopyInheritedMembers_N_UpcastTo_MR_CopyInheritedMembers_M(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }

                public static unsafe ref int StaticField
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_N_GetMutable_StaticField", ExactSpelling = true)]
                        extern static int *__MR_CopyInheritedMembers_N_GetMutable_StaticField();
                        return ref *__MR_CopyInheritedMembers_N_GetMutable_StaticField();
                    }
                }

                public unsafe int field
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_N_Get_Field", ExactSpelling = true)]
                        extern static int *__MR_CopyInheritedMembers_N_Get_Field(_Underlying *_this);
                        return *__MR_CopyInheritedMembers_N_Get_Field(_UnderlyingPtr);
                    }
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_N() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_N_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.N._Underlying *__MR_CopyInheritedMembers_N_DefaultConstruct();
                    _UnderlyingPtr = __MR_CopyInheritedMembers_N_DefaultConstruct();
                }

                /// Generated from constructor `MR::CopyInheritedMembers::N::N`.
                public unsafe Const_N(MR.CS.CopyInheritedMembers._ByValue_N _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_N_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.N._Underlying *__MR_CopyInheritedMembers_N_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CopyInheritedMembers.N._Underlying *_other);
                    _UnderlyingPtr = __MR_CopyInheritedMembers_N_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// Generated from method `MR::CopyInheritedMembers::N::StaticFunc`.
                public static void staticFunc()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_N_StaticFunc", ExactSpelling = true)]
                    extern static void __MR_CopyInheritedMembers_N_StaticFunc();
                    __MR_CopyInheritedMembers_N_StaticFunc();
                }
            }

            /// Generated from class `MR::CopyInheritedMembers::N`.
            /// Base classes:
            ///   Virtual:
            ///     `MR::CopyInheritedMembers::J`
            ///   Non-virtual along a virtual path:
            ///     `MR::CopyInheritedMembers::A`
            ///   Direct: (non-virtual)
            ///     `MR::CopyInheritedMembers::M`
            /// Derived classes:
            ///   Direct: (non-virtual)
            ///     `MR::CopyInheritedMembers::O`
            /// This is the non-const half of the class.
            public class N : Const_N
            {
                internal unsafe N(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                // Upcasts:
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.A(N self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_N_UpcastTo_MR_CopyInheritedMembers_A", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.A._Underlying *__MR_CopyInheritedMembers_N_UpcastTo_MR_CopyInheritedMembers_A(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.A ret = new(__MR_CopyInheritedMembers_N_UpcastTo_MR_CopyInheritedMembers_A(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.J(N self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_N_UpcastTo_MR_CopyInheritedMembers_J", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.J._Underlying *__MR_CopyInheritedMembers_N_UpcastTo_MR_CopyInheritedMembers_J(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.J ret = new(__MR_CopyInheritedMembers_N_UpcastTo_MR_CopyInheritedMembers_J(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.M(N self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_N_UpcastTo_MR_CopyInheritedMembers_M", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.M._Underlying *__MR_CopyInheritedMembers_N_UpcastTo_MR_CopyInheritedMembers_M(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.M ret = new(__MR_CopyInheritedMembers_N_UpcastTo_MR_CopyInheritedMembers_M(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }

                public new unsafe ref int field
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_N_GetMutable_Field", ExactSpelling = true)]
                        extern static int *__MR_CopyInheritedMembers_N_GetMutable_Field(_Underlying *_this);
                        return ref *__MR_CopyInheritedMembers_N_GetMutable_Field(_UnderlyingPtr);
                    }
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe N() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_N_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.N._Underlying *__MR_CopyInheritedMembers_N_DefaultConstruct();
                    _UnderlyingPtr = __MR_CopyInheritedMembers_N_DefaultConstruct();
                }

                /// Generated from constructor `MR::CopyInheritedMembers::N::N`.
                public unsafe N(MR.CS.CopyInheritedMembers._ByValue_N _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_N_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.N._Underlying *__MR_CopyInheritedMembers_N_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CopyInheritedMembers.N._Underlying *_other);
                    _UnderlyingPtr = __MR_CopyInheritedMembers_N_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// Generated from conversion operator `MR::CopyInheritedMembers::N::operator int`.
                public static unsafe implicit operator int(MR.CS.CopyInheritedMembers.N _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_N_ConvertTo_int", ExactSpelling = true)]
                    extern static int __MR_CopyInheritedMembers_N_ConvertTo_int(MR.CS.CopyInheritedMembers.N._Underlying *_this);
                    return __MR_CopyInheritedMembers_N_ConvertTo_int(_this._UnderlyingPtr);
                }

                /// Generated from method `MR::CopyInheritedMembers::N::operator=`.
                public unsafe MR.CS.CopyInheritedMembers.N assign(MR.CS.CopyInheritedMembers._ByValue_N _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_N_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.N._Underlying *__MR_CopyInheritedMembers_N_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.CopyInheritedMembers.N._Underlying *_other);
                    return new(__MR_CopyInheritedMembers_N_AssignFromAnother(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null), is_owning: false);
                }

                /// Generated from method `MR::CopyInheritedMembers::N::Method`.
                public unsafe void method()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_N_Method", ExactSpelling = true)]
                    extern static void __MR_CopyInheritedMembers_N_Method(_Underlying *_this);
                    __MR_CopyInheritedMembers_N_Method(_UnderlyingPtr);
                }
            }

            /// This is used as a function parameter when the underlying function receives `N` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `N`/`Const_N` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            public class _ByValue_N
            {
                internal readonly Const_N? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_N() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_N(Const_N new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_N(Const_N arg) {return new(arg);}
                public _ByValue_N(MR.CS.Misc._Moved<N> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_N(MR.CS.Misc._Moved<N> arg) {return new(arg);}
            }

            /// This is used for optional parameters of class `N` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_N`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `N`/`Const_N` directly.
            public class _InOptMut_N
            {
                public N? Opt;

                public _InOptMut_N() {}
                public _InOptMut_N(N value) {Opt = value;}
                public static implicit operator _InOptMut_N(N value) {return new(value);}
            }

            /// This is used for optional parameters of class `N` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_N`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `N`/`Const_N` to pass it to the function.
            public class _InOptConst_N
            {
                public Const_N? Opt;

                public _InOptConst_N() {}
                public _InOptConst_N(Const_N value) {Opt = value;}
                public static implicit operator _InOptConst_N(Const_N value) {return new(value);}
            }

            /// Generated from class `MR::CopyInheritedMembers::O`.
            /// Base classes:
            ///   Virtual:
            ///     `MR::CopyInheritedMembers::J`
            ///   Non-virtual along a virtual path:
            ///     `MR::CopyInheritedMembers::A`
            ///   Direct: (non-virtual)
            ///     `MR::CopyInheritedMembers::N`
            ///   Indirect: (non-virtual)
            ///     `MR::CopyInheritedMembers::M`
            /// This is the const half of the class.
            public class Const_O : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_O(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_O_Destroy", ExactSpelling = true)]
                    extern static void __MR_CopyInheritedMembers_O_Destroy(_Underlying *_this);
                    __MR_CopyInheritedMembers_O_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_O() {Dispose(false);}

                // Upcasts:
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.Const_A(Const_O self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_O_UpcastTo_MR_CopyInheritedMembers_A", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.Const_A._Underlying *__MR_CopyInheritedMembers_O_UpcastTo_MR_CopyInheritedMembers_A(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.Const_A ret = new(__MR_CopyInheritedMembers_O_UpcastTo_MR_CopyInheritedMembers_A(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.Const_J(Const_O self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_O_UpcastTo_MR_CopyInheritedMembers_J", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.Const_J._Underlying *__MR_CopyInheritedMembers_O_UpcastTo_MR_CopyInheritedMembers_J(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.Const_J ret = new(__MR_CopyInheritedMembers_O_UpcastTo_MR_CopyInheritedMembers_J(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.Const_M(Const_O self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_O_UpcastTo_MR_CopyInheritedMembers_M", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.Const_M._Underlying *__MR_CopyInheritedMembers_O_UpcastTo_MR_CopyInheritedMembers_M(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.Const_M ret = new(__MR_CopyInheritedMembers_O_UpcastTo_MR_CopyInheritedMembers_M(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.Const_N(Const_O self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_O_UpcastTo_MR_CopyInheritedMembers_N", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.Const_N._Underlying *__MR_CopyInheritedMembers_O_UpcastTo_MR_CopyInheritedMembers_N(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.Const_N ret = new(__MR_CopyInheritedMembers_O_UpcastTo_MR_CopyInheritedMembers_N(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }

                public static unsafe ref int StaticField
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_O_GetMutable_StaticField", ExactSpelling = true)]
                        extern static int *__MR_CopyInheritedMembers_O_GetMutable_StaticField();
                        return ref *__MR_CopyInheritedMembers_O_GetMutable_StaticField();
                    }
                }

                public unsafe int field
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_O_Get_Field", ExactSpelling = true)]
                        extern static int *__MR_CopyInheritedMembers_O_Get_Field(_Underlying *_this);
                        return *__MR_CopyInheritedMembers_O_Get_Field(_UnderlyingPtr);
                    }
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_O() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_O_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.O._Underlying *__MR_CopyInheritedMembers_O_DefaultConstruct();
                    _UnderlyingPtr = __MR_CopyInheritedMembers_O_DefaultConstruct();
                }

                /// Generated from constructor `MR::CopyInheritedMembers::O::O`.
                public unsafe Const_O(MR.CS.CopyInheritedMembers._ByValue_O _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_O_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.O._Underlying *__MR_CopyInheritedMembers_O_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CopyInheritedMembers.O._Underlying *_other);
                    _UnderlyingPtr = __MR_CopyInheritedMembers_O_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// Generated from method `MR::CopyInheritedMembers::O::StaticFunc`.
                public static void staticFunc()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_O_StaticFunc", ExactSpelling = true)]
                    extern static void __MR_CopyInheritedMembers_O_StaticFunc();
                    __MR_CopyInheritedMembers_O_StaticFunc();
                }
            }

            /// Generated from class `MR::CopyInheritedMembers::O`.
            /// Base classes:
            ///   Virtual:
            ///     `MR::CopyInheritedMembers::J`
            ///   Non-virtual along a virtual path:
            ///     `MR::CopyInheritedMembers::A`
            ///   Direct: (non-virtual)
            ///     `MR::CopyInheritedMembers::N`
            ///   Indirect: (non-virtual)
            ///     `MR::CopyInheritedMembers::M`
            /// This is the non-const half of the class.
            public class O : Const_O
            {
                internal unsafe O(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                // Upcasts:
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.A(O self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_O_UpcastTo_MR_CopyInheritedMembers_A", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.A._Underlying *__MR_CopyInheritedMembers_O_UpcastTo_MR_CopyInheritedMembers_A(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.A ret = new(__MR_CopyInheritedMembers_O_UpcastTo_MR_CopyInheritedMembers_A(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.J(O self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_O_UpcastTo_MR_CopyInheritedMembers_J", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.J._Underlying *__MR_CopyInheritedMembers_O_UpcastTo_MR_CopyInheritedMembers_J(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.J ret = new(__MR_CopyInheritedMembers_O_UpcastTo_MR_CopyInheritedMembers_J(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.M(O self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_O_UpcastTo_MR_CopyInheritedMembers_M", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.M._Underlying *__MR_CopyInheritedMembers_O_UpcastTo_MR_CopyInheritedMembers_M(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.M ret = new(__MR_CopyInheritedMembers_O_UpcastTo_MR_CopyInheritedMembers_M(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }
                public static unsafe implicit operator MR.CS.CopyInheritedMembers.N(O self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_O_UpcastTo_MR_CopyInheritedMembers_N", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.N._Underlying *__MR_CopyInheritedMembers_O_UpcastTo_MR_CopyInheritedMembers_N(_Underlying *_this);
                    MR.CS.CopyInheritedMembers.N ret = new(__MR_CopyInheritedMembers_O_UpcastTo_MR_CopyInheritedMembers_N(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }

                public new unsafe ref int field
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_O_GetMutable_Field", ExactSpelling = true)]
                        extern static int *__MR_CopyInheritedMembers_O_GetMutable_Field(_Underlying *_this);
                        return ref *__MR_CopyInheritedMembers_O_GetMutable_Field(_UnderlyingPtr);
                    }
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe O() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_O_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.O._Underlying *__MR_CopyInheritedMembers_O_DefaultConstruct();
                    _UnderlyingPtr = __MR_CopyInheritedMembers_O_DefaultConstruct();
                }

                /// Generated from constructor `MR::CopyInheritedMembers::O::O`.
                public unsafe O(MR.CS.CopyInheritedMembers._ByValue_O _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_O_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.O._Underlying *__MR_CopyInheritedMembers_O_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CopyInheritedMembers.O._Underlying *_other);
                    _UnderlyingPtr = __MR_CopyInheritedMembers_O_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// Generated from conversion operator `MR::CopyInheritedMembers::O::operator int`.
                public static unsafe implicit operator int(MR.CS.CopyInheritedMembers.O _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_O_ConvertTo_int", ExactSpelling = true)]
                    extern static int __MR_CopyInheritedMembers_O_ConvertTo_int(MR.CS.CopyInheritedMembers.O._Underlying *_this);
                    return __MR_CopyInheritedMembers_O_ConvertTo_int(_this._UnderlyingPtr);
                }

                /// Generated from method `MR::CopyInheritedMembers::O::operator=`.
                public unsafe MR.CS.CopyInheritedMembers.O assign(MR.CS.CopyInheritedMembers._ByValue_O _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_O_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CopyInheritedMembers.O._Underlying *__MR_CopyInheritedMembers_O_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.CopyInheritedMembers.O._Underlying *_other);
                    return new(__MR_CopyInheritedMembers_O_AssignFromAnother(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null), is_owning: false);
                }

                /// Generated from method `MR::CopyInheritedMembers::O::Method`.
                public unsafe void method()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CopyInheritedMembers_O_Method", ExactSpelling = true)]
                    extern static void __MR_CopyInheritedMembers_O_Method(_Underlying *_this);
                    __MR_CopyInheritedMembers_O_Method(_UnderlyingPtr);
                }
            }

            /// This is used as a function parameter when the underlying function receives `O` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `O`/`Const_O` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            public class _ByValue_O
            {
                internal readonly Const_O? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_O() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_O(Const_O new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_O(Const_O arg) {return new(arg);}
                public _ByValue_O(MR.CS.Misc._Moved<O> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_O(MR.CS.Misc._Moved<O> arg) {return new(arg);}
            }

            /// This is used for optional parameters of class `O` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_O`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `O`/`Const_O` directly.
            public class _InOptMut_O
            {
                public O? Opt;

                public _InOptMut_O() {}
                public _InOptMut_O(O value) {Opt = value;}
                public static implicit operator _InOptMut_O(O value) {return new(value);}
            }

            /// This is used for optional parameters of class `O` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_O`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `O`/`Const_O` to pass it to the function.
            public class _InOptConst_O
            {
                public Const_O? Opt;

                public _InOptConst_O() {}
                public _InOptConst_O(Const_O value) {Opt = value;}
                public static implicit operator _InOptConst_O(Const_O value) {return new(value);}
            }
        }
    }
}
