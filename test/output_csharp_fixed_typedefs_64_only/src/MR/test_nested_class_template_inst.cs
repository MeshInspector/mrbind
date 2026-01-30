public static partial class MR
{
    public static partial class CS
    {
        public static partial class NestedTemplateInst
        {
            /// <summary>
            /// Generated from class `MR::NestedTemplateInst::A<int>`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_A_Int : MR.CS.Misc.Object<Const_A_Int>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_NestedTemplateInst_A_int_Destroy", ExactSpelling = true)]
                    extern static void __MR_NestedTemplateInst_A_int_Destroy(_Underlying *_this);
                    __MR_NestedTemplateInst_A_int_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_A_Int() {Dispose(false);}

                internal unsafe Const_A_Int(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_A_Int() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_NestedTemplateInst_A_int_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.NestedTemplateInst.A_Int._Underlying *__MR_NestedTemplateInst_A_int_DefaultConstruct();
                    _UnderlyingPtr = __MR_NestedTemplateInst_A_int_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::NestedTemplateInst::A<int>::A`.
                /// </summary>
                public unsafe Const_A_Int(MR.CS.NestedTemplateInst.Const_A_Int _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_NestedTemplateInst_A_int_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.NestedTemplateInst.A_Int._Underlying *__MR_NestedTemplateInst_A_int_ConstructFromAnother(MR.CS.NestedTemplateInst.A_Int._Underlying *_other);
                    _UnderlyingPtr = __MR_NestedTemplateInst_A_int_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// <summary>
                /// Generated from constructor `MR::NestedTemplateInst::A<int>::A`.
                /// </summary>
                public Const_A_Int(A_Int _other) : this((Const_A_Int)_other) {}

                // This struct needs special care to be instantiated, even with the typedef below. Hmm.
                /// <summary>
                /// Generated from class `MR::NestedTemplateInst::A<int>::AA<float>`.
                /// This is the const half of the class.
                /// </summary>
                public class Const_AA_Float : MR.CS.Misc.Object<Const_AA_Float>, System.IDisposable
                {
                    internal struct _Underlying {} // Represents the underlying C++ type.

                    internal unsafe _Underlying *_UnderlyingPtr;

                    protected virtual unsafe void Dispose(bool disposing)
                    {
                        if (_UnderlyingPtr is null || !_IsOwningVal)
                            return;
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_NestedTemplateInst_A_int_AA_float_Destroy", ExactSpelling = true)]
                        extern static void __MR_NestedTemplateInst_A_int_AA_float_Destroy(_Underlying *_this);
                        __MR_NestedTemplateInst_A_int_AA_float_Destroy(_UnderlyingPtr);
                        _UnderlyingPtr = null;
                    }
                    public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                    ~Const_AA_Float() {Dispose(false);}

                    internal unsafe Const_AA_Float(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                    /// <summary>
                    /// Constructs an empty (default-constructed) instance.
                    /// </summary>
                    public unsafe Const_AA_Float() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_NestedTemplateInst_A_int_AA_float_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.NestedTemplateInst.A_Int.AA_Float._Underlying *__MR_NestedTemplateInst_A_int_AA_float_DefaultConstruct();
                        _UnderlyingPtr = __MR_NestedTemplateInst_A_int_AA_float_DefaultConstruct();
                    }

                    /// <summary>
                    /// Generated from constructor `MR::NestedTemplateInst::A<int>::AA<float>::AA`.
                    /// </summary>
                    public unsafe Const_AA_Float(MR.CS.NestedTemplateInst.A_Int.Const_AA_Float _other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_NestedTemplateInst_A_int_AA_float_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.NestedTemplateInst.A_Int.AA_Float._Underlying *__MR_NestedTemplateInst_A_int_AA_float_ConstructFromAnother(MR.CS.NestedTemplateInst.A_Int.AA_Float._Underlying *_other);
                        _UnderlyingPtr = __MR_NestedTemplateInst_A_int_AA_float_ConstructFromAnother(_other._UnderlyingPtr);
                        _KeepAlive(_other);
                    }

                    /// <summary>
                    /// Generated from constructor `MR::NestedTemplateInst::A<int>::AA<float>::AA`.
                    /// </summary>
                    public Const_AA_Float(AA_Float _other) : this((Const_AA_Float)_other) {}
                }

                // This struct needs special care to be instantiated, even with the typedef below. Hmm.
                /// <summary>
                /// Generated from class `MR::NestedTemplateInst::A<int>::AA<float>`.
                /// This is the non-const half of the class.
                /// </summary>
                public class AA_Float : Const_AA_Float
                {
                    internal unsafe AA_Float(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                    /// <summary>
                    /// Constructs an empty (default-constructed) instance.
                    /// </summary>
                    public unsafe AA_Float() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_NestedTemplateInst_A_int_AA_float_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.NestedTemplateInst.A_Int.AA_Float._Underlying *__MR_NestedTemplateInst_A_int_AA_float_DefaultConstruct();
                        _UnderlyingPtr = __MR_NestedTemplateInst_A_int_AA_float_DefaultConstruct();
                    }

                    /// <summary>
                    /// Generated from constructor `MR::NestedTemplateInst::A<int>::AA<float>::AA`.
                    /// </summary>
                    public unsafe AA_Float(MR.CS.NestedTemplateInst.A_Int.Const_AA_Float _other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_NestedTemplateInst_A_int_AA_float_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.NestedTemplateInst.A_Int.AA_Float._Underlying *__MR_NestedTemplateInst_A_int_AA_float_ConstructFromAnother(MR.CS.NestedTemplateInst.A_Int.AA_Float._Underlying *_other);
                        _UnderlyingPtr = __MR_NestedTemplateInst_A_int_AA_float_ConstructFromAnother(_other._UnderlyingPtr);
                        _KeepAlive(_other);
                    }

                    /// <summary>
                    /// Generated from constructor `MR::NestedTemplateInst::A<int>::AA<float>::AA`.
                    /// </summary>
                    public AA_Float(AA_Float _other) : this((Const_AA_Float)_other) {}

                    /// <summary>
                    /// Generated from method `MR::NestedTemplateInst::A<int>::AA<float>::operator=`.
                    /// </summary>
                    public unsafe MR.CS.NestedTemplateInst.A_Int.AA_Float assign(MR.CS.NestedTemplateInst.A_Int.Const_AA_Float _other)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_NestedTemplateInst_A_int_AA_float_AssignFromAnother", ExactSpelling = true)]
                        extern static MR.CS.NestedTemplateInst.A_Int.AA_Float._Underlying *__MR_NestedTemplateInst_A_int_AA_float_AssignFromAnother(_Underlying *_this, MR.CS.NestedTemplateInst.A_Int.AA_Float._Underlying *_other);
                        _DiscardKeepAlive();
                        _KeepAlive(_other);
                        return new(__MR_NestedTemplateInst_A_int_AA_float_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                    }
                }

                /// <summary>
                /// This is used for optional parameters of class `AA_Float` with default arguments.
                /// This is only used mutable parameters. For const ones we have `_InOptConst_AA_Float`.
                /// Usage:
                /// * Pass `null` to use the default argument.
                /// * Pass `new()` to pass no object.
                /// * Pass an instance of `AA_Float`/`Const_AA_Float` directly.
                /// </summary>
                public class _InOptMut_AA_Float
                {
                    public AA_Float? Opt;

                    public _InOptMut_AA_Float() {}
                    public _InOptMut_AA_Float(AA_Float value) {Opt = value;}
                    public static implicit operator _InOptMut_AA_Float(AA_Float value) {return new(value);}
                }

                /// <summary>
                /// This is used for optional parameters of class `AA_Float` with default arguments.
                /// This is only used const parameters. For non-const ones we have `_InOptMut_AA_Float`.
                /// Usage:
                /// * Pass `null` to use the default argument.
                /// * Pass `new()` to pass no object.
                /// * Pass an instance of `AA_Float`/`Const_AA_Float` to pass it to the function.
                /// </summary>
                public class _InOptConst_AA_Float
                {
                    public Const_AA_Float? Opt;

                    public _InOptConst_AA_Float() {}
                    public _InOptConst_AA_Float(Const_AA_Float value) {Opt = value;}
                    public static implicit operator _InOptConst_AA_Float(Const_AA_Float value) {return new(value);}
                }
            }

            /// <summary>
            /// Generated from class `MR::NestedTemplateInst::A<int>`.
            /// This is the non-const half of the class.
            /// </summary>
            public class A_Int : Const_A_Int
            {
                internal unsafe A_Int(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe A_Int() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_NestedTemplateInst_A_int_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.NestedTemplateInst.A_Int._Underlying *__MR_NestedTemplateInst_A_int_DefaultConstruct();
                    _UnderlyingPtr = __MR_NestedTemplateInst_A_int_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::NestedTemplateInst::A<int>::A`.
                /// </summary>
                public unsafe A_Int(MR.CS.NestedTemplateInst.Const_A_Int _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_NestedTemplateInst_A_int_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.NestedTemplateInst.A_Int._Underlying *__MR_NestedTemplateInst_A_int_ConstructFromAnother(MR.CS.NestedTemplateInst.A_Int._Underlying *_other);
                    _UnderlyingPtr = __MR_NestedTemplateInst_A_int_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// <summary>
                /// Generated from constructor `MR::NestedTemplateInst::A<int>::A`.
                /// </summary>
                public A_Int(A_Int _other) : this((Const_A_Int)_other) {}

                /// <summary>
                /// Generated from method `MR::NestedTemplateInst::A<int>::operator=`.
                /// </summary>
                public unsafe MR.CS.NestedTemplateInst.A_Int assign(MR.CS.NestedTemplateInst.Const_A_Int _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_NestedTemplateInst_A_int_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.NestedTemplateInst.A_Int._Underlying *__MR_NestedTemplateInst_A_int_AssignFromAnother(_Underlying *_this, MR.CS.NestedTemplateInst.A_Int._Underlying *_other);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_NestedTemplateInst_A_int_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }
            }

            /// <summary>
            /// This is used for optional parameters of class `A_Int` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_A_Int`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `A_Int`/`Const_A_Int` directly.
            /// </summary>
            public class _InOptMut_A_Int
            {
                public A_Int? Opt;

                public _InOptMut_A_Int() {}
                public _InOptMut_A_Int(A_Int value) {Opt = value;}
                public static implicit operator _InOptMut_A_Int(A_Int value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `A_Int` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_A_Int`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `A_Int`/`Const_A_Int` to pass it to the function.
            /// </summary>
            public class _InOptConst_A_Int
            {
                public Const_A_Int? Opt;

                public _InOptConst_A_Int() {}
                public _InOptConst_A_Int(Const_A_Int value) {Opt = value;}
                public static implicit operator _InOptConst_A_Int(Const_A_Int value) {return new(value);}
            }
        }
    }
}
