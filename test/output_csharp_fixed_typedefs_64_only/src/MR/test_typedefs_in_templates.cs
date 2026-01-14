public static partial class MR
{
    public static partial class CS
    {
        public static partial class TypedefsInTemplates
        {
            // This tests a specific Clang bug/quirk.
            // Certain typedefs in templates get their names printed without the template arguments of the enclosing class template, breaking our code generation.
            /// Generated from class `MR::TypedefsInTemplates::A<int>`.
            /// This is the const half of the class.
            public class Const_A_Int : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_A_Int(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TypedefsInTemplates_A_int_Destroy", ExactSpelling = true)]
                    extern static void __MR_TypedefsInTemplates_A_int_Destroy(_Underlying *_this);
                    __MR_TypedefsInTemplates_A_int_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_A_Int() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_A_Int() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TypedefsInTemplates_A_int_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.TypedefsInTemplates.A_Int._Underlying *__MR_TypedefsInTemplates_A_int_DefaultConstruct();
                    _UnderlyingPtr = __MR_TypedefsInTemplates_A_int_DefaultConstruct();
                }

                /// Generated from constructor `MR::TypedefsInTemplates::A<int>::A`.
                public unsafe Const_A_Int(MR.CS.TypedefsInTemplates.Const_A_Int _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TypedefsInTemplates_A_int_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.TypedefsInTemplates.A_Int._Underlying *__MR_TypedefsInTemplates_A_int_ConstructFromAnother(MR.CS.TypedefsInTemplates.A_Int._Underlying *_other);
                    _UnderlyingPtr = __MR_TypedefsInTemplates_A_int_ConstructFromAnother(_other._UnderlyingPtr);
                }
            }

            // This tests a specific Clang bug/quirk.
            // Certain typedefs in templates get their names printed without the template arguments of the enclosing class template, breaking our code generation.
            /// Generated from class `MR::TypedefsInTemplates::A<int>`.
            /// This is the non-const half of the class.
            public class A_Int : Const_A_Int
            {
                internal unsafe A_Int(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe A_Int() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TypedefsInTemplates_A_int_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.TypedefsInTemplates.A_Int._Underlying *__MR_TypedefsInTemplates_A_int_DefaultConstruct();
                    _UnderlyingPtr = __MR_TypedefsInTemplates_A_int_DefaultConstruct();
                }

                /// Generated from constructor `MR::TypedefsInTemplates::A<int>::A`.
                public unsafe A_Int(MR.CS.TypedefsInTemplates.Const_A_Int _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TypedefsInTemplates_A_int_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.TypedefsInTemplates.A_Int._Underlying *__MR_TypedefsInTemplates_A_int_ConstructFromAnother(MR.CS.TypedefsInTemplates.A_Int._Underlying *_other);
                    _UnderlyingPtr = __MR_TypedefsInTemplates_A_int_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::TypedefsInTemplates::A<int>::operator=`.
                public unsafe MR.CS.TypedefsInTemplates.A_Int assign(MR.CS.TypedefsInTemplates.Const_A_Int _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TypedefsInTemplates_A_int_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.TypedefsInTemplates.A_Int._Underlying *__MR_TypedefsInTemplates_A_int_AssignFromAnother(_Underlying *_this, MR.CS.TypedefsInTemplates.A_Int._Underlying *_other);
                    return new(__MR_TypedefsInTemplates_A_int_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }

                /// Generated from method `MR::TypedefsInTemplates::A<int>::foo`.
                public unsafe int foo()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TypedefsInTemplates_A_int_foo", ExactSpelling = true)]
                    extern static int __MR_TypedefsInTemplates_A_int_foo(_Underlying *_this);
                    return __MR_TypedefsInTemplates_A_int_foo(_UnderlyingPtr);
                }
            }

            /// This is used for optional parameters of class `A_Int` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_A_Int`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `A_Int`/`Const_A_Int` directly.
            public class _InOptMut_A_Int
            {
                public A_Int? Opt;

                public _InOptMut_A_Int() {}
                public _InOptMut_A_Int(A_Int value) {Opt = value;}
                public static implicit operator _InOptMut_A_Int(A_Int value) {return new(value);}
            }

            /// This is used for optional parameters of class `A_Int` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_A_Int`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `A_Int`/`Const_A_Int` to pass it to the function.
            public class _InOptConst_A_Int
            {
                public Const_A_Int? Opt;

                public _InOptConst_A_Int() {}
                public _InOptConst_A_Int(Const_A_Int value) {Opt = value;}
                public static implicit operator _InOptConst_A_Int(Const_A_Int value) {return new(value);}
            }

            /// Generated from class `MR::TypedefsInTemplates::B<int>`.
            /// This is the const half of the class.
            public class Const_B_Int : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_B_Int(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TypedefsInTemplates_B_int_Destroy", ExactSpelling = true)]
                    extern static void __MR_TypedefsInTemplates_B_int_Destroy(_Underlying *_this);
                    __MR_TypedefsInTemplates_B_int_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_B_Int() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_B_Int() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TypedefsInTemplates_B_int_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.TypedefsInTemplates.B_Int._Underlying *__MR_TypedefsInTemplates_B_int_DefaultConstruct();
                    _UnderlyingPtr = __MR_TypedefsInTemplates_B_int_DefaultConstruct();
                }

                /// Generated from constructor `MR::TypedefsInTemplates::B<int>::B`.
                public unsafe Const_B_Int(MR.CS.TypedefsInTemplates.Const_B_Int _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TypedefsInTemplates_B_int_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.TypedefsInTemplates.B_Int._Underlying *__MR_TypedefsInTemplates_B_int_ConstructFromAnother(MR.CS.TypedefsInTemplates.B_Int._Underlying *_other);
                    _UnderlyingPtr = __MR_TypedefsInTemplates_B_int_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from class `MR::TypedefsInTemplates::B<int>::BB<float>`.
                /// This is the const half of the class.
                public class Const_BB_Float : MR.CS.Misc.Object, System.IDisposable
                {
                    internal struct _Underlying {} // Represents the underlying C++ type.

                    internal unsafe _Underlying *_UnderlyingPtr;

                    internal unsafe Const_BB_Float(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                    protected virtual unsafe void Dispose(bool disposing)
                    {
                        if (_UnderlyingPtr is null || !_IsOwningVal)
                            return;
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TypedefsInTemplates_B_int_BB_float_Destroy", ExactSpelling = true)]
                        extern static void __MR_TypedefsInTemplates_B_int_BB_float_Destroy(_Underlying *_this);
                        __MR_TypedefsInTemplates_B_int_BB_float_Destroy(_UnderlyingPtr);
                        _UnderlyingPtr = null;
                    }
                    public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                    ~Const_BB_Float() {Dispose(false);}

                    /// Constructs an empty (default-constructed) instance.
                    public unsafe Const_BB_Float() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TypedefsInTemplates_B_int_BB_float_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.TypedefsInTemplates.B_Int.BB_Float._Underlying *__MR_TypedefsInTemplates_B_int_BB_float_DefaultConstruct();
                        _UnderlyingPtr = __MR_TypedefsInTemplates_B_int_BB_float_DefaultConstruct();
                    }

                    /// Generated from constructor `MR::TypedefsInTemplates::B<int>::BB<float>::BB`.
                    public unsafe Const_BB_Float(MR.CS.TypedefsInTemplates.B_Int.Const_BB_Float _other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TypedefsInTemplates_B_int_BB_float_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.TypedefsInTemplates.B_Int.BB_Float._Underlying *__MR_TypedefsInTemplates_B_int_BB_float_ConstructFromAnother(MR.CS.TypedefsInTemplates.B_Int.BB_Float._Underlying *_other);
                        _UnderlyingPtr = __MR_TypedefsInTemplates_B_int_BB_float_ConstructFromAnother(_other._UnderlyingPtr);
                    }
                }

                /// Generated from class `MR::TypedefsInTemplates::B<int>::BB<float>`.
                /// This is the non-const half of the class.
                public class BB_Float : Const_BB_Float
                {
                    internal unsafe BB_Float(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                    /// Constructs an empty (default-constructed) instance.
                    public unsafe BB_Float() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TypedefsInTemplates_B_int_BB_float_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.TypedefsInTemplates.B_Int.BB_Float._Underlying *__MR_TypedefsInTemplates_B_int_BB_float_DefaultConstruct();
                        _UnderlyingPtr = __MR_TypedefsInTemplates_B_int_BB_float_DefaultConstruct();
                    }

                    /// Generated from constructor `MR::TypedefsInTemplates::B<int>::BB<float>::BB`.
                    public unsafe BB_Float(MR.CS.TypedefsInTemplates.B_Int.Const_BB_Float _other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TypedefsInTemplates_B_int_BB_float_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.TypedefsInTemplates.B_Int.BB_Float._Underlying *__MR_TypedefsInTemplates_B_int_BB_float_ConstructFromAnother(MR.CS.TypedefsInTemplates.B_Int.BB_Float._Underlying *_other);
                        _UnderlyingPtr = __MR_TypedefsInTemplates_B_int_BB_float_ConstructFromAnother(_other._UnderlyingPtr);
                    }

                    /// Generated from method `MR::TypedefsInTemplates::B<int>::BB<float>::operator=`.
                    public unsafe MR.CS.TypedefsInTemplates.B_Int.BB_Float assign(MR.CS.TypedefsInTemplates.B_Int.Const_BB_Float _other)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TypedefsInTemplates_B_int_BB_float_AssignFromAnother", ExactSpelling = true)]
                        extern static MR.CS.TypedefsInTemplates.B_Int.BB_Float._Underlying *__MR_TypedefsInTemplates_B_int_BB_float_AssignFromAnother(_Underlying *_this, MR.CS.TypedefsInTemplates.B_Int.BB_Float._Underlying *_other);
                        return new(__MR_TypedefsInTemplates_B_int_BB_float_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                    }

                    /// Generated from method `MR::TypedefsInTemplates::B<int>::BB<float>::foo`.
                    public unsafe int foo()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TypedefsInTemplates_B_int_BB_float_foo", ExactSpelling = true)]
                        extern static int __MR_TypedefsInTemplates_B_int_BB_float_foo(_Underlying *_this);
                        return __MR_TypedefsInTemplates_B_int_BB_float_foo(_UnderlyingPtr);
                    }

                    /// Generated from method `MR::TypedefsInTemplates::B<int>::BB<float>::foo2`.
                    public unsafe int foo2()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TypedefsInTemplates_B_int_BB_float_foo2", ExactSpelling = true)]
                        extern static int __MR_TypedefsInTemplates_B_int_BB_float_foo2(_Underlying *_this);
                        return __MR_TypedefsInTemplates_B_int_BB_float_foo2(_UnderlyingPtr);
                    }
                }

                /// This is used for optional parameters of class `BB_Float` with default arguments.
                /// This is only used mutable parameters. For const ones we have `_InOptConst_BB_Float`.
                /// Usage:
                /// * Pass `null` to use the default argument.
                /// * Pass `new()` to pass no object.
                /// * Pass an instance of `BB_Float`/`Const_BB_Float` directly.
                public class _InOptMut_BB_Float
                {
                    public BB_Float? Opt;

                    public _InOptMut_BB_Float() {}
                    public _InOptMut_BB_Float(BB_Float value) {Opt = value;}
                    public static implicit operator _InOptMut_BB_Float(BB_Float value) {return new(value);}
                }

                /// This is used for optional parameters of class `BB_Float` with default arguments.
                /// This is only used const parameters. For non-const ones we have `_InOptMut_BB_Float`.
                /// Usage:
                /// * Pass `null` to use the default argument.
                /// * Pass `new()` to pass no object.
                /// * Pass an instance of `BB_Float`/`Const_BB_Float` to pass it to the function.
                public class _InOptConst_BB_Float
                {
                    public Const_BB_Float? Opt;

                    public _InOptConst_BB_Float() {}
                    public _InOptConst_BB_Float(Const_BB_Float value) {Opt = value;}
                    public static implicit operator _InOptConst_BB_Float(Const_BB_Float value) {return new(value);}
                }
            }

            /// Generated from class `MR::TypedefsInTemplates::B<int>`.
            /// This is the non-const half of the class.
            public class B_Int : Const_B_Int
            {
                internal unsafe B_Int(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe B_Int() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TypedefsInTemplates_B_int_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.TypedefsInTemplates.B_Int._Underlying *__MR_TypedefsInTemplates_B_int_DefaultConstruct();
                    _UnderlyingPtr = __MR_TypedefsInTemplates_B_int_DefaultConstruct();
                }

                /// Generated from constructor `MR::TypedefsInTemplates::B<int>::B`.
                public unsafe B_Int(MR.CS.TypedefsInTemplates.Const_B_Int _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TypedefsInTemplates_B_int_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.TypedefsInTemplates.B_Int._Underlying *__MR_TypedefsInTemplates_B_int_ConstructFromAnother(MR.CS.TypedefsInTemplates.B_Int._Underlying *_other);
                    _UnderlyingPtr = __MR_TypedefsInTemplates_B_int_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::TypedefsInTemplates::B<int>::operator=`.
                public unsafe MR.CS.TypedefsInTemplates.B_Int assign(MR.CS.TypedefsInTemplates.Const_B_Int _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TypedefsInTemplates_B_int_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.TypedefsInTemplates.B_Int._Underlying *__MR_TypedefsInTemplates_B_int_AssignFromAnother(_Underlying *_this, MR.CS.TypedefsInTemplates.B_Int._Underlying *_other);
                    return new(__MR_TypedefsInTemplates_B_int_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }
            }

            /// This is used for optional parameters of class `B_Int` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_B_Int`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `B_Int`/`Const_B_Int` directly.
            public class _InOptMut_B_Int
            {
                public B_Int? Opt;

                public _InOptMut_B_Int() {}
                public _InOptMut_B_Int(B_Int value) {Opt = value;}
                public static implicit operator _InOptMut_B_Int(B_Int value) {return new(value);}
            }

            /// This is used for optional parameters of class `B_Int` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_B_Int`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `B_Int`/`Const_B_Int` to pass it to the function.
            public class _InOptConst_B_Int
            {
                public Const_B_Int? Opt;

                public _InOptConst_B_Int() {}
                public _InOptConst_B_Int(Const_B_Int value) {Opt = value;}
                public static implicit operator _InOptConst_B_Int(Const_B_Int value) {return new(value);}
            }

            /// Generated from function `MR::TypedefsInTemplates::bar`.
            public static void bar(int _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TypedefsInTemplates_bar", ExactSpelling = true)]
                extern static void __MR_TypedefsInTemplates_bar(int _1);
                __MR_TypedefsInTemplates_bar(_1);
            }
        }
    }
}
