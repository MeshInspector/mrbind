public static partial class MR
{
    public static partial class CS
    {
        public static partial class NestedTemplateInst
        {
            /// Generated from class `MR::NestedTemplateInst::A<int>`.
            /// This is the const half of the class.
            public class Const_A_Int : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_A_Int(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

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

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_A_Int() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_NestedTemplateInst_A_int_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.NestedTemplateInst.A_Int._Underlying *__MR_NestedTemplateInst_A_int_DefaultConstruct();
                    _UnderlyingPtr = __MR_NestedTemplateInst_A_int_DefaultConstruct();
                }

                /// Generated from constructor `MR::NestedTemplateInst::A<int>::A`.
                public unsafe Const_A_Int(MR.CS.NestedTemplateInst.Const_A_Int _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_NestedTemplateInst_A_int_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.NestedTemplateInst.A_Int._Underlying *__MR_NestedTemplateInst_A_int_ConstructFromAnother(MR.CS.NestedTemplateInst.A_Int._Underlying *_other);
                    _UnderlyingPtr = __MR_NestedTemplateInst_A_int_ConstructFromAnother(_other._UnderlyingPtr);
                }

                // This struct needs special care to be instantiated, even with the typedef below. Hmm.
                /// Generated from class `MR::NestedTemplateInst::A<int>::AA<float>`.
                /// This is the const half of the class.
                public class Const_AA_Float : MR.CS.Misc.Object, System.IDisposable
                {
                    internal struct _Underlying; // Represents the underlying C++ type.

                    internal unsafe _Underlying *_UnderlyingPtr;

                    internal unsafe Const_AA_Float(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

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

                    /// Constructs an empty (default-constructed) instance.
                    public unsafe Const_AA_Float() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_NestedTemplateInst_A_int_AA_float_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.NestedTemplateInst.A_Int.AA_Float._Underlying *__MR_NestedTemplateInst_A_int_AA_float_DefaultConstruct();
                        _UnderlyingPtr = __MR_NestedTemplateInst_A_int_AA_float_DefaultConstruct();
                    }

                    /// Generated from constructor `MR::NestedTemplateInst::A<int>::AA<float>::AA`.
                    public unsafe Const_AA_Float(MR.CS.NestedTemplateInst.A_Int.Const_AA_Float _other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_NestedTemplateInst_A_int_AA_float_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.NestedTemplateInst.A_Int.AA_Float._Underlying *__MR_NestedTemplateInst_A_int_AA_float_ConstructFromAnother(MR.CS.NestedTemplateInst.A_Int.AA_Float._Underlying *_other);
                        _UnderlyingPtr = __MR_NestedTemplateInst_A_int_AA_float_ConstructFromAnother(_other._UnderlyingPtr);
                    }
                }

                // This struct needs special care to be instantiated, even with the typedef below. Hmm.
                /// Generated from class `MR::NestedTemplateInst::A<int>::AA<float>`.
                /// This is the non-const half of the class.
                public class AA_Float : Const_AA_Float
                {
                    internal unsafe AA_Float(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                    /// Constructs an empty (default-constructed) instance.
                    public unsafe AA_Float() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_NestedTemplateInst_A_int_AA_float_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.NestedTemplateInst.A_Int.AA_Float._Underlying *__MR_NestedTemplateInst_A_int_AA_float_DefaultConstruct();
                        _UnderlyingPtr = __MR_NestedTemplateInst_A_int_AA_float_DefaultConstruct();
                    }

                    /// Generated from constructor `MR::NestedTemplateInst::A<int>::AA<float>::AA`.
                    public unsafe AA_Float(MR.CS.NestedTemplateInst.A_Int.Const_AA_Float _other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_NestedTemplateInst_A_int_AA_float_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.NestedTemplateInst.A_Int.AA_Float._Underlying *__MR_NestedTemplateInst_A_int_AA_float_ConstructFromAnother(MR.CS.NestedTemplateInst.A_Int.AA_Float._Underlying *_other);
                        _UnderlyingPtr = __MR_NestedTemplateInst_A_int_AA_float_ConstructFromAnother(_other._UnderlyingPtr);
                    }

                    /// Generated from method `MR::NestedTemplateInst::A<int>::AA<float>::operator=`.
                    public unsafe MR.CS.NestedTemplateInst.A_Int.AA_Float Assign(MR.CS.NestedTemplateInst.A_Int.Const_AA_Float _other)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_NestedTemplateInst_A_int_AA_float_AssignFromAnother", ExactSpelling = true)]
                        extern static MR.CS.NestedTemplateInst.A_Int.AA_Float._Underlying *__MR_NestedTemplateInst_A_int_AA_float_AssignFromAnother(_Underlying *_this, MR.CS.NestedTemplateInst.A_Int.AA_Float._Underlying *_other);
                        return new(__MR_NestedTemplateInst_A_int_AA_float_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                    }
                }

                /// This is used for optional parameters of class `AA_Float` with default arguments.
                /// This is only used mutable parameters. For const ones we have `_InOptConst_AA_Float`.
                /// Usage:
                /// * Pass `null` to use the default argument.
                /// * Pass `new()` to pass no object.
                /// * Pass an instance of `AA_Float`/`Const_AA_Float` directly.
                public class _InOptMut_AA_Float
                {
                    public AA_Float? Opt;

                    public _InOptMut_AA_Float() {}
                    public _InOptMut_AA_Float(AA_Float value) {Opt = value;}
                    public static implicit operator _InOptMut_AA_Float(AA_Float value) {return new(value);}
                }

                /// This is used for optional parameters of class `AA_Float` with default arguments.
                /// This is only used const parameters. For non-const ones we have `_InOptMut_AA_Float`.
                /// Usage:
                /// * Pass `null` to use the default argument.
                /// * Pass `new()` to pass no object.
                /// * Pass an instance of `AA_Float`/`Const_AA_Float` to pass it to the function.
                public class _InOptConst_AA_Float
                {
                    public Const_AA_Float? Opt;

                    public _InOptConst_AA_Float() {}
                    public _InOptConst_AA_Float(Const_AA_Float value) {Opt = value;}
                    public static implicit operator _InOptConst_AA_Float(Const_AA_Float value) {return new(value);}
                }
            }

            /// Generated from class `MR::NestedTemplateInst::A<int>`.
            /// This is the non-const half of the class.
            public class A_Int : Const_A_Int
            {
                internal unsafe A_Int(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe A_Int() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_NestedTemplateInst_A_int_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.NestedTemplateInst.A_Int._Underlying *__MR_NestedTemplateInst_A_int_DefaultConstruct();
                    _UnderlyingPtr = __MR_NestedTemplateInst_A_int_DefaultConstruct();
                }

                /// Generated from constructor `MR::NestedTemplateInst::A<int>::A`.
                public unsafe A_Int(MR.CS.NestedTemplateInst.Const_A_Int _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_NestedTemplateInst_A_int_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.NestedTemplateInst.A_Int._Underlying *__MR_NestedTemplateInst_A_int_ConstructFromAnother(MR.CS.NestedTemplateInst.A_Int._Underlying *_other);
                    _UnderlyingPtr = __MR_NestedTemplateInst_A_int_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::NestedTemplateInst::A<int>::operator=`.
                public unsafe MR.CS.NestedTemplateInst.A_Int Assign(MR.CS.NestedTemplateInst.Const_A_Int _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_NestedTemplateInst_A_int_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.NestedTemplateInst.A_Int._Underlying *__MR_NestedTemplateInst_A_int_AssignFromAnother(_Underlying *_this, MR.CS.NestedTemplateInst.A_Int._Underlying *_other);
                    return new(__MR_NestedTemplateInst_A_int_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
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
        }
    }
}
