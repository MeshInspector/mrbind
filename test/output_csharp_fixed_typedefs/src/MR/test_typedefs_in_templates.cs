public static partial class MR
{
    public static partial class CS
    {
        public static partial class TypedefsInTemplates
        {
            // This tests a specific Clang bug/quirk.
            // Certain typedefs in templates get their names printed without the template arguments of the enclosing class template, breaking our code generation.
            /// <summary>
            /// Generated from class `MR::TypedefsInTemplates::A<int32_t>`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_A_Int32T : MR.CS.Misc.Object<Const_A_Int32T>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TypedefsInTemplates_A_int32_t_Destroy", ExactSpelling = true)]
                    extern static void __MR_TypedefsInTemplates_A_int32_t_Destroy(_Underlying *_this);
                    __MR_TypedefsInTemplates_A_int32_t_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_A_Int32T() {Dispose(false);}

                internal unsafe Const_A_Int32T(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_A_Int32T() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TypedefsInTemplates_A_int32_t_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.TypedefsInTemplates.A_Int32T._Underlying *__MR_TypedefsInTemplates_A_int32_t_DefaultConstruct();
                    _UnderlyingPtr = __MR_TypedefsInTemplates_A_int32_t_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::TypedefsInTemplates::A<int32_t>::A`.
                /// </summary>
                public unsafe Const_A_Int32T(MR.CS.TypedefsInTemplates.Const_A_Int32T _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TypedefsInTemplates_A_int32_t_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.TypedefsInTemplates.A_Int32T._Underlying *__MR_TypedefsInTemplates_A_int32_t_ConstructFromAnother(MR.CS.TypedefsInTemplates.A_Int32T._Underlying *_other);
                    _UnderlyingPtr = __MR_TypedefsInTemplates_A_int32_t_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// <summary>
                /// Generated from constructor `MR::TypedefsInTemplates::A<int32_t>::A`.
                /// </summary>
                public Const_A_Int32T(A_Int32T _other) : this((Const_A_Int32T)_other) {}
            }

            // This tests a specific Clang bug/quirk.
            // Certain typedefs in templates get their names printed without the template arguments of the enclosing class template, breaking our code generation.
            /// <summary>
            /// Generated from class `MR::TypedefsInTemplates::A<int32_t>`.
            /// This is the non-const half of the class.
            /// </summary>
            public class A_Int32T : Const_A_Int32T
            {
                internal unsafe A_Int32T(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe A_Int32T() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TypedefsInTemplates_A_int32_t_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.TypedefsInTemplates.A_Int32T._Underlying *__MR_TypedefsInTemplates_A_int32_t_DefaultConstruct();
                    _UnderlyingPtr = __MR_TypedefsInTemplates_A_int32_t_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::TypedefsInTemplates::A<int32_t>::A`.
                /// </summary>
                public unsafe A_Int32T(MR.CS.TypedefsInTemplates.Const_A_Int32T _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TypedefsInTemplates_A_int32_t_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.TypedefsInTemplates.A_Int32T._Underlying *__MR_TypedefsInTemplates_A_int32_t_ConstructFromAnother(MR.CS.TypedefsInTemplates.A_Int32T._Underlying *_other);
                    _UnderlyingPtr = __MR_TypedefsInTemplates_A_int32_t_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// <summary>
                /// Generated from constructor `MR::TypedefsInTemplates::A<int32_t>::A`.
                /// </summary>
                public A_Int32T(A_Int32T _other) : this((Const_A_Int32T)_other) {}

                /// <summary>
                /// Generated from method `MR::TypedefsInTemplates::A<int32_t>::operator=`.
                /// </summary>
                public unsafe MR.CS.TypedefsInTemplates.A_Int32T assign(MR.CS.TypedefsInTemplates.Const_A_Int32T _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TypedefsInTemplates_A_int32_t_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.TypedefsInTemplates.A_Int32T._Underlying *__MR_TypedefsInTemplates_A_int32_t_AssignFromAnother(_Underlying *_this, MR.CS.TypedefsInTemplates.A_Int32T._Underlying *_other);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_TypedefsInTemplates_A_int32_t_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }

                /// <summary>
                /// Generated from method `MR::TypedefsInTemplates::A<int32_t>::foo`.
                /// </summary>
                public unsafe int foo()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TypedefsInTemplates_A_int32_t_foo", ExactSpelling = true)]
                    extern static int __MR_TypedefsInTemplates_A_int32_t_foo(_Underlying *_this);
                    return __MR_TypedefsInTemplates_A_int32_t_foo(_UnderlyingPtr);
                }
            }

            /// <summary>
            /// This is used for optional parameters of class `A_Int32T` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_A_Int32T`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `A_Int32T`/`Const_A_Int32T` directly.
            /// </summary>
            public class _InOptMut_A_Int32T
            {
                public A_Int32T? Opt;

                public _InOptMut_A_Int32T() {}
                public _InOptMut_A_Int32T(A_Int32T value) {Opt = value;}
                public static implicit operator _InOptMut_A_Int32T(A_Int32T value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `A_Int32T` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_A_Int32T`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `A_Int32T`/`Const_A_Int32T` to pass it to the function.
            /// </summary>
            public class _InOptConst_A_Int32T
            {
                public Const_A_Int32T? Opt;

                public _InOptConst_A_Int32T() {}
                public _InOptConst_A_Int32T(Const_A_Int32T value) {Opt = value;}
                public static implicit operator _InOptConst_A_Int32T(Const_A_Int32T value) {return new(value);}
            }

            /// <summary>
            /// Generated from class `MR::TypedefsInTemplates::B<int32_t>`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_B_Int32T : MR.CS.Misc.Object<Const_B_Int32T>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TypedefsInTemplates_B_int32_t_Destroy", ExactSpelling = true)]
                    extern static void __MR_TypedefsInTemplates_B_int32_t_Destroy(_Underlying *_this);
                    __MR_TypedefsInTemplates_B_int32_t_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_B_Int32T() {Dispose(false);}

                internal unsafe Const_B_Int32T(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_B_Int32T() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TypedefsInTemplates_B_int32_t_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.TypedefsInTemplates.B_Int32T._Underlying *__MR_TypedefsInTemplates_B_int32_t_DefaultConstruct();
                    _UnderlyingPtr = __MR_TypedefsInTemplates_B_int32_t_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::TypedefsInTemplates::B<int32_t>::B`.
                /// </summary>
                public unsafe Const_B_Int32T(MR.CS.TypedefsInTemplates.Const_B_Int32T _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TypedefsInTemplates_B_int32_t_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.TypedefsInTemplates.B_Int32T._Underlying *__MR_TypedefsInTemplates_B_int32_t_ConstructFromAnother(MR.CS.TypedefsInTemplates.B_Int32T._Underlying *_other);
                    _UnderlyingPtr = __MR_TypedefsInTemplates_B_int32_t_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// <summary>
                /// Generated from constructor `MR::TypedefsInTemplates::B<int32_t>::B`.
                /// </summary>
                public Const_B_Int32T(B_Int32T _other) : this((Const_B_Int32T)_other) {}

                /// <summary>
                /// Generated from class `MR::TypedefsInTemplates::B<int32_t>::BB<float>`.
                /// This is the const half of the class.
                /// </summary>
                public class Const_BB_Float : MR.CS.Misc.Object<Const_BB_Float>, System.IDisposable
                {
                    internal struct _Underlying {} // Represents the underlying C++ type.

                    internal unsafe _Underlying *_UnderlyingPtr;

                    protected virtual unsafe void Dispose(bool disposing)
                    {
                        if (_UnderlyingPtr is null || !_IsOwningVal)
                            return;
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TypedefsInTemplates_B_int32_t_BB_float_Destroy", ExactSpelling = true)]
                        extern static void __MR_TypedefsInTemplates_B_int32_t_BB_float_Destroy(_Underlying *_this);
                        __MR_TypedefsInTemplates_B_int32_t_BB_float_Destroy(_UnderlyingPtr);
                        _UnderlyingPtr = null;
                    }
                    public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                    ~Const_BB_Float() {Dispose(false);}

                    internal unsafe Const_BB_Float(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                    /// <summary>
                    /// Constructs an empty (default-constructed) instance.
                    /// </summary>
                    public unsafe Const_BB_Float() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TypedefsInTemplates_B_int32_t_BB_float_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.TypedefsInTemplates.B_Int32T.BB_Float._Underlying *__MR_TypedefsInTemplates_B_int32_t_BB_float_DefaultConstruct();
                        _UnderlyingPtr = __MR_TypedefsInTemplates_B_int32_t_BB_float_DefaultConstruct();
                    }

                    /// <summary>
                    /// Generated from constructor `MR::TypedefsInTemplates::B<int32_t>::BB<float>::BB`.
                    /// </summary>
                    public unsafe Const_BB_Float(MR.CS.TypedefsInTemplates.B_Int32T.Const_BB_Float _other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TypedefsInTemplates_B_int32_t_BB_float_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.TypedefsInTemplates.B_Int32T.BB_Float._Underlying *__MR_TypedefsInTemplates_B_int32_t_BB_float_ConstructFromAnother(MR.CS.TypedefsInTemplates.B_Int32T.BB_Float._Underlying *_other);
                        _UnderlyingPtr = __MR_TypedefsInTemplates_B_int32_t_BB_float_ConstructFromAnother(_other._UnderlyingPtr);
                        _KeepAlive(_other);
                    }

                    /// <summary>
                    /// Generated from constructor `MR::TypedefsInTemplates::B<int32_t>::BB<float>::BB`.
                    /// </summary>
                    public Const_BB_Float(BB_Float _other) : this((Const_BB_Float)_other) {}
                }

                /// <summary>
                /// Generated from class `MR::TypedefsInTemplates::B<int32_t>::BB<float>`.
                /// This is the non-const half of the class.
                /// </summary>
                public class BB_Float : Const_BB_Float
                {
                    internal unsafe BB_Float(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                    /// <summary>
                    /// Constructs an empty (default-constructed) instance.
                    /// </summary>
                    public unsafe BB_Float() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TypedefsInTemplates_B_int32_t_BB_float_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.TypedefsInTemplates.B_Int32T.BB_Float._Underlying *__MR_TypedefsInTemplates_B_int32_t_BB_float_DefaultConstruct();
                        _UnderlyingPtr = __MR_TypedefsInTemplates_B_int32_t_BB_float_DefaultConstruct();
                    }

                    /// <summary>
                    /// Generated from constructor `MR::TypedefsInTemplates::B<int32_t>::BB<float>::BB`.
                    /// </summary>
                    public unsafe BB_Float(MR.CS.TypedefsInTemplates.B_Int32T.Const_BB_Float _other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TypedefsInTemplates_B_int32_t_BB_float_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.TypedefsInTemplates.B_Int32T.BB_Float._Underlying *__MR_TypedefsInTemplates_B_int32_t_BB_float_ConstructFromAnother(MR.CS.TypedefsInTemplates.B_Int32T.BB_Float._Underlying *_other);
                        _UnderlyingPtr = __MR_TypedefsInTemplates_B_int32_t_BB_float_ConstructFromAnother(_other._UnderlyingPtr);
                        _KeepAlive(_other);
                    }

                    /// <summary>
                    /// Generated from constructor `MR::TypedefsInTemplates::B<int32_t>::BB<float>::BB`.
                    /// </summary>
                    public BB_Float(BB_Float _other) : this((Const_BB_Float)_other) {}

                    /// <summary>
                    /// Generated from method `MR::TypedefsInTemplates::B<int32_t>::BB<float>::operator=`.
                    /// </summary>
                    public unsafe MR.CS.TypedefsInTemplates.B_Int32T.BB_Float assign(MR.CS.TypedefsInTemplates.B_Int32T.Const_BB_Float _other)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TypedefsInTemplates_B_int32_t_BB_float_AssignFromAnother", ExactSpelling = true)]
                        extern static MR.CS.TypedefsInTemplates.B_Int32T.BB_Float._Underlying *__MR_TypedefsInTemplates_B_int32_t_BB_float_AssignFromAnother(_Underlying *_this, MR.CS.TypedefsInTemplates.B_Int32T.BB_Float._Underlying *_other);
                        _DiscardKeepAlive();
                        _KeepAlive(_other);
                        return new(__MR_TypedefsInTemplates_B_int32_t_BB_float_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                    }

                    /// <summary>
                    /// Generated from method `MR::TypedefsInTemplates::B<int32_t>::BB<float>::foo`.
                    /// </summary>
                    public unsafe int foo()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TypedefsInTemplates_B_int32_t_BB_float_foo", ExactSpelling = true)]
                        extern static int __MR_TypedefsInTemplates_B_int32_t_BB_float_foo(_Underlying *_this);
                        return __MR_TypedefsInTemplates_B_int32_t_BB_float_foo(_UnderlyingPtr);
                    }

                    /// <summary>
                    /// Generated from method `MR::TypedefsInTemplates::B<int32_t>::BB<float>::foo2`.
                    /// </summary>
                    public unsafe int foo2()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TypedefsInTemplates_B_int32_t_BB_float_foo2", ExactSpelling = true)]
                        extern static int __MR_TypedefsInTemplates_B_int32_t_BB_float_foo2(_Underlying *_this);
                        return __MR_TypedefsInTemplates_B_int32_t_BB_float_foo2(_UnderlyingPtr);
                    }
                }

                /// <summary>
                /// This is used for optional parameters of class `BB_Float` with default arguments.
                /// This is only used mutable parameters. For const ones we have `_InOptConst_BB_Float`.
                /// Usage:
                /// * Pass `null` to use the default argument.
                /// * Pass `new()` to pass no object.
                /// * Pass an instance of `BB_Float`/`Const_BB_Float` directly.
                /// </summary>
                public class _InOptMut_BB_Float
                {
                    public BB_Float? Opt;

                    public _InOptMut_BB_Float() {}
                    public _InOptMut_BB_Float(BB_Float value) {Opt = value;}
                    public static implicit operator _InOptMut_BB_Float(BB_Float value) {return new(value);}
                }

                /// <summary>
                /// This is used for optional parameters of class `BB_Float` with default arguments.
                /// This is only used const parameters. For non-const ones we have `_InOptMut_BB_Float`.
                /// Usage:
                /// * Pass `null` to use the default argument.
                /// * Pass `new()` to pass no object.
                /// * Pass an instance of `BB_Float`/`Const_BB_Float` to pass it to the function.
                /// </summary>
                public class _InOptConst_BB_Float
                {
                    public Const_BB_Float? Opt;

                    public _InOptConst_BB_Float() {}
                    public _InOptConst_BB_Float(Const_BB_Float value) {Opt = value;}
                    public static implicit operator _InOptConst_BB_Float(Const_BB_Float value) {return new(value);}
                }
            }

            /// <summary>
            /// Generated from class `MR::TypedefsInTemplates::B<int32_t>`.
            /// This is the non-const half of the class.
            /// </summary>
            public class B_Int32T : Const_B_Int32T
            {
                internal unsafe B_Int32T(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe B_Int32T() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TypedefsInTemplates_B_int32_t_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.TypedefsInTemplates.B_Int32T._Underlying *__MR_TypedefsInTemplates_B_int32_t_DefaultConstruct();
                    _UnderlyingPtr = __MR_TypedefsInTemplates_B_int32_t_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::TypedefsInTemplates::B<int32_t>::B`.
                /// </summary>
                public unsafe B_Int32T(MR.CS.TypedefsInTemplates.Const_B_Int32T _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TypedefsInTemplates_B_int32_t_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.TypedefsInTemplates.B_Int32T._Underlying *__MR_TypedefsInTemplates_B_int32_t_ConstructFromAnother(MR.CS.TypedefsInTemplates.B_Int32T._Underlying *_other);
                    _UnderlyingPtr = __MR_TypedefsInTemplates_B_int32_t_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// <summary>
                /// Generated from constructor `MR::TypedefsInTemplates::B<int32_t>::B`.
                /// </summary>
                public B_Int32T(B_Int32T _other) : this((Const_B_Int32T)_other) {}

                /// <summary>
                /// Generated from method `MR::TypedefsInTemplates::B<int32_t>::operator=`.
                /// </summary>
                public unsafe MR.CS.TypedefsInTemplates.B_Int32T assign(MR.CS.TypedefsInTemplates.Const_B_Int32T _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TypedefsInTemplates_B_int32_t_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.TypedefsInTemplates.B_Int32T._Underlying *__MR_TypedefsInTemplates_B_int32_t_AssignFromAnother(_Underlying *_this, MR.CS.TypedefsInTemplates.B_Int32T._Underlying *_other);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_TypedefsInTemplates_B_int32_t_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }
            }

            /// <summary>
            /// This is used for optional parameters of class `B_Int32T` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_B_Int32T`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `B_Int32T`/`Const_B_Int32T` directly.
            /// </summary>
            public class _InOptMut_B_Int32T
            {
                public B_Int32T? Opt;

                public _InOptMut_B_Int32T() {}
                public _InOptMut_B_Int32T(B_Int32T value) {Opt = value;}
                public static implicit operator _InOptMut_B_Int32T(B_Int32T value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `B_Int32T` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_B_Int32T`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `B_Int32T`/`Const_B_Int32T` to pass it to the function.
            /// </summary>
            public class _InOptConst_B_Int32T
            {
                public Const_B_Int32T? Opt;

                public _InOptConst_B_Int32T() {}
                public _InOptConst_B_Int32T(Const_B_Int32T value) {Opt = value;}
                public static implicit operator _InOptConst_B_Int32T(Const_B_Int32T value) {return new(value);}
            }

            /// <summary>
            /// Generated from function `MR::TypedefsInTemplates::bar`.
            /// </summary>
            public static void bar(int _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TypedefsInTemplates_bar", ExactSpelling = true)]
                extern static void __MR_TypedefsInTemplates_bar(int _1);
                __MR_TypedefsInTemplates_bar(_1);
            }
        }
    }
}
