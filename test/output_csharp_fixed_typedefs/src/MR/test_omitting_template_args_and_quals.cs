public static partial class MR
{
    public static partial class CS
    {
        public static partial class OmittingTargsAndQuals
        {
            // Here the generated code will omit the template arguments for operators (to avoid unwanted instantiations),
            //   and omit qualifiers for friend functions (since they are normally only accessible via ADL).
            /// <summary>
            /// Generated from class `MR::OmittingTargsAndQuals::A<int32_t>`.
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
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OmittingTargsAndQuals_A_int32_t_Destroy", ExactSpelling = true)]
                    extern static void __MR_OmittingTargsAndQuals_A_int32_t_Destroy(_Underlying *_this);
                    __MR_OmittingTargsAndQuals_A_int32_t_Destroy(_UnderlyingPtr);
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
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OmittingTargsAndQuals_A_int32_t_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.OmittingTargsAndQuals.A_Int32T._Underlying *__MR_OmittingTargsAndQuals_A_int32_t_DefaultConstruct();
                    _UnderlyingPtr = __MR_OmittingTargsAndQuals_A_int32_t_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::OmittingTargsAndQuals::A<int32_t>::A`.
                /// </summary>
                public unsafe Const_A_Int32T(MR.CS.OmittingTargsAndQuals.Const_A_Int32T _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OmittingTargsAndQuals_A_int32_t_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.OmittingTargsAndQuals.A_Int32T._Underlying *__MR_OmittingTargsAndQuals_A_int32_t_ConstructFromAnother(MR.CS.OmittingTargsAndQuals.A_Int32T._Underlying *_other);
                    _UnderlyingPtr = __MR_OmittingTargsAndQuals_A_int32_t_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// <summary>
                /// Generated from constructor `MR::OmittingTargsAndQuals::A<int32_t>::A`.
                /// </summary>
                public Const_A_Int32T(A_Int32T _other) : this((Const_A_Int32T)_other) {}

                /// <summary>
                /// Generated from function `MR::OmittingTargsAndQuals::operator*`.
                /// </summary>
                public unsafe void deref()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_deref_MR_OmittingTargsAndQuals_A_int32_t", ExactSpelling = true)]
                    extern static void __MR_C_deref_MR_OmittingTargsAndQuals_A_int32_t(_Underlying *_1);
                    __MR_C_deref_MR_OmittingTargsAndQuals_A_int32_t(_UnderlyingPtr);
                }

                /// <summary>
                /// Generated from function `MR::OmittingTargsAndQuals::operator~<int32_t>`.
                /// </summary>
                public unsafe void compl()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_compl_MR_OmittingTargsAndQuals_A_int32_t", ExactSpelling = true)]
                    extern static void __MR_C_compl_MR_OmittingTargsAndQuals_A_int32_t(_Underlying *_1);
                    __MR_C_compl_MR_OmittingTargsAndQuals_A_int32_t(_UnderlyingPtr);
                }
            }

            // Here the generated code will omit the template arguments for operators (to avoid unwanted instantiations),
            //   and omit qualifiers for friend functions (since they are normally only accessible via ADL).
            /// <summary>
            /// Generated from class `MR::OmittingTargsAndQuals::A<int32_t>`.
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
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OmittingTargsAndQuals_A_int32_t_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.OmittingTargsAndQuals.A_Int32T._Underlying *__MR_OmittingTargsAndQuals_A_int32_t_DefaultConstruct();
                    _UnderlyingPtr = __MR_OmittingTargsAndQuals_A_int32_t_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::OmittingTargsAndQuals::A<int32_t>::A`.
                /// </summary>
                public unsafe A_Int32T(MR.CS.OmittingTargsAndQuals.Const_A_Int32T _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OmittingTargsAndQuals_A_int32_t_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.OmittingTargsAndQuals.A_Int32T._Underlying *__MR_OmittingTargsAndQuals_A_int32_t_ConstructFromAnother(MR.CS.OmittingTargsAndQuals.A_Int32T._Underlying *_other);
                    _UnderlyingPtr = __MR_OmittingTargsAndQuals_A_int32_t_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// <summary>
                /// Generated from constructor `MR::OmittingTargsAndQuals::A<int32_t>::A`.
                /// </summary>
                public A_Int32T(A_Int32T _other) : this((Const_A_Int32T)_other) {}

                /// <summary>
                /// Generated from method `MR::OmittingTargsAndQuals::A<int32_t>::operator=`.
                /// </summary>
                public unsafe MR.CS.OmittingTargsAndQuals.A_Int32T assign(MR.CS.OmittingTargsAndQuals.Const_A_Int32T _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OmittingTargsAndQuals_A_int32_t_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.OmittingTargsAndQuals.A_Int32T._Underlying *__MR_OmittingTargsAndQuals_A_int32_t_AssignFromAnother(_Underlying *_this, MR.CS.OmittingTargsAndQuals.A_Int32T._Underlying *_other);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_OmittingTargsAndQuals_A_int32_t_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }

                /// <summary>
                /// Generated from method `MR::OmittingTargsAndQuals::A<int32_t>::operator+`.
                /// </summary>
                public unsafe void add()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_pos_MR_OmittingTargsAndQuals_A_int32_t", ExactSpelling = true)]
                    extern static void __MR_C_pos_MR_OmittingTargsAndQuals_A_int32_t(_Underlying *_this);
                    __MR_C_pos_MR_OmittingTargsAndQuals_A_int32_t(_UnderlyingPtr);
                }

                /// <summary>
                /// Generated from method `MR::OmittingTargsAndQuals::A<int32_t>::operator-<float>`.
                /// </summary>
                public unsafe void sub(MR.CS.OmittingTargsAndQuals.Const_A_Float _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_sub_MR_OmittingTargsAndQuals_A_int32_t_MR_OmittingTargsAndQuals_A_float", ExactSpelling = true)]
                    extern static void __MR_C_sub_MR_OmittingTargsAndQuals_A_int32_t_MR_OmittingTargsAndQuals_A_float(_Underlying *_this, MR.CS.OmittingTargsAndQuals.A_Float._Underlying *_1);
                    __MR_C_sub_MR_OmittingTargsAndQuals_A_int32_t_MR_OmittingTargsAndQuals_A_float(_UnderlyingPtr, _1._UnderlyingPtr);
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

            // Here the generated code will omit the template arguments for operators (to avoid unwanted instantiations),
            //   and omit qualifiers for friend functions (since they are normally only accessible via ADL).
            /// <summary>
            /// Generated from class `MR::OmittingTargsAndQuals::A<float>`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_A_Float : MR.CS.Misc.Object<Const_A_Float>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OmittingTargsAndQuals_A_float_Destroy", ExactSpelling = true)]
                    extern static void __MR_OmittingTargsAndQuals_A_float_Destroy(_Underlying *_this);
                    __MR_OmittingTargsAndQuals_A_float_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_A_Float() {Dispose(false);}

                internal unsafe Const_A_Float(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_A_Float() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OmittingTargsAndQuals_A_float_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.OmittingTargsAndQuals.A_Float._Underlying *__MR_OmittingTargsAndQuals_A_float_DefaultConstruct();
                    _UnderlyingPtr = __MR_OmittingTargsAndQuals_A_float_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::OmittingTargsAndQuals::A<float>::A`.
                /// </summary>
                public unsafe Const_A_Float(MR.CS.OmittingTargsAndQuals.Const_A_Float _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OmittingTargsAndQuals_A_float_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.OmittingTargsAndQuals.A_Float._Underlying *__MR_OmittingTargsAndQuals_A_float_ConstructFromAnother(MR.CS.OmittingTargsAndQuals.A_Float._Underlying *_other);
                    _UnderlyingPtr = __MR_OmittingTargsAndQuals_A_float_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// <summary>
                /// Generated from constructor `MR::OmittingTargsAndQuals::A<float>::A`.
                /// </summary>
                public Const_A_Float(A_Float _other) : this((Const_A_Float)_other) {}
            }

            // Here the generated code will omit the template arguments for operators (to avoid unwanted instantiations),
            //   and omit qualifiers for friend functions (since they are normally only accessible via ADL).
            /// <summary>
            /// Generated from class `MR::OmittingTargsAndQuals::A<float>`.
            /// This is the non-const half of the class.
            /// </summary>
            public class A_Float : Const_A_Float
            {
                internal unsafe A_Float(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe A_Float() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OmittingTargsAndQuals_A_float_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.OmittingTargsAndQuals.A_Float._Underlying *__MR_OmittingTargsAndQuals_A_float_DefaultConstruct();
                    _UnderlyingPtr = __MR_OmittingTargsAndQuals_A_float_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::OmittingTargsAndQuals::A<float>::A`.
                /// </summary>
                public unsafe A_Float(MR.CS.OmittingTargsAndQuals.Const_A_Float _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OmittingTargsAndQuals_A_float_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.OmittingTargsAndQuals.A_Float._Underlying *__MR_OmittingTargsAndQuals_A_float_ConstructFromAnother(MR.CS.OmittingTargsAndQuals.A_Float._Underlying *_other);
                    _UnderlyingPtr = __MR_OmittingTargsAndQuals_A_float_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// <summary>
                /// Generated from constructor `MR::OmittingTargsAndQuals::A<float>::A`.
                /// </summary>
                public A_Float(A_Float _other) : this((Const_A_Float)_other) {}

                /// <summary>
                /// Generated from method `MR::OmittingTargsAndQuals::A<float>::operator=`.
                /// </summary>
                public unsafe MR.CS.OmittingTargsAndQuals.A_Float assign(MR.CS.OmittingTargsAndQuals.Const_A_Float _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OmittingTargsAndQuals_A_float_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.OmittingTargsAndQuals.A_Float._Underlying *__MR_OmittingTargsAndQuals_A_float_AssignFromAnother(_Underlying *_this, MR.CS.OmittingTargsAndQuals.A_Float._Underlying *_other);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_OmittingTargsAndQuals_A_float_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }

                /// <summary>
                /// Generated from method `MR::OmittingTargsAndQuals::A<float>::operator+`.
                /// </summary>
                public unsafe void add()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_pos_MR_OmittingTargsAndQuals_A_float", ExactSpelling = true)]
                    extern static void __MR_C_pos_MR_OmittingTargsAndQuals_A_float(_Underlying *_this);
                    __MR_C_pos_MR_OmittingTargsAndQuals_A_float(_UnderlyingPtr);
                }
            }

            /// <summary>
            /// This is used for optional parameters of class `A_Float` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_A_Float`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `A_Float`/`Const_A_Float` directly.
            /// </summary>
            public class _InOptMut_A_Float
            {
                public A_Float? Opt;

                public _InOptMut_A_Float() {}
                public _InOptMut_A_Float(A_Float value) {Opt = value;}
                public static implicit operator _InOptMut_A_Float(A_Float value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `A_Float` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_A_Float`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `A_Float`/`Const_A_Float` to pass it to the function.
            /// </summary>
            public class _InOptConst_A_Float
            {
                public Const_A_Float? Opt;

                public _InOptConst_A_Float() {}
                public _InOptConst_A_Float(Const_A_Float value) {Opt = value;}
                public static implicit operator _InOptConst_A_Float(Const_A_Float value) {return new(value);}
            }

            /// <summary>
            /// Generated from function `MR::OmittingTargsAndQuals::a`.
            /// </summary>
            public static unsafe void a(MR.CS.OmittingTargsAndQuals.Const_A_Int32T _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OmittingTargsAndQuals_a_MR_OmittingTargsAndQuals_A_int32_t", ExactSpelling = true)]
                extern static void __MR_OmittingTargsAndQuals_a_MR_OmittingTargsAndQuals_A_int32_t(MR.CS.OmittingTargsAndQuals.A_Int32T._Underlying *_1);
                __MR_OmittingTargsAndQuals_a_MR_OmittingTargsAndQuals_A_int32_t(_1._UnderlyingPtr);
            }

            /// <summary>
            /// Generated from function `MR::OmittingTargsAndQuals::b<float>`.
            /// </summary>
            public static unsafe void b(MR.CS.OmittingTargsAndQuals.Const_A_Int32T _1, MR.CS.OmittingTargsAndQuals.Const_A_Float _2)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OmittingTargsAndQuals_b", ExactSpelling = true)]
                extern static void __MR_OmittingTargsAndQuals_b(MR.CS.OmittingTargsAndQuals.A_Int32T._Underlying *_1, MR.CS.OmittingTargsAndQuals.A_Float._Underlying *_2);
                __MR_OmittingTargsAndQuals_b(_1._UnderlyingPtr, _2._UnderlyingPtr);
            }

            /// <summary>
            /// Generated from function `MR::OmittingTargsAndQuals::a`.
            /// </summary>
            public static unsafe void a(MR.CS.OmittingTargsAndQuals.Const_A_Float _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OmittingTargsAndQuals_a_MR_OmittingTargsAndQuals_A_float", ExactSpelling = true)]
                extern static void __MR_OmittingTargsAndQuals_a_MR_OmittingTargsAndQuals_A_float(MR.CS.OmittingTargsAndQuals.A_Float._Underlying *_1);
                __MR_OmittingTargsAndQuals_a_MR_OmittingTargsAndQuals_A_float(_1._UnderlyingPtr);
            }

            /// <summary>
            /// Generated from function `MR::OmittingTargsAndQuals::c`.
            /// </summary>
            public static unsafe void c(MR.CS.OmittingTargsAndQuals.Const_A_Int32T _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OmittingTargsAndQuals_c", ExactSpelling = true)]
                extern static void __MR_OmittingTargsAndQuals_c(MR.CS.OmittingTargsAndQuals.A_Int32T._Underlying *_1);
                __MR_OmittingTargsAndQuals_c(_1._UnderlyingPtr);
            }

            /// <summary>
            /// Generated from function `MR::OmittingTargsAndQuals::d<int32_t>`.
            /// </summary>
            public static unsafe void d(MR.CS.OmittingTargsAndQuals.Const_A_Int32T _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OmittingTargsAndQuals_d", ExactSpelling = true)]
                extern static void __MR_OmittingTargsAndQuals_d(MR.CS.OmittingTargsAndQuals.A_Int32T._Underlying *_1);
                __MR_OmittingTargsAndQuals_d(_1._UnderlyingPtr);
            }

            /// <summary>
            /// Generated from function `MR::OmittingTargsAndQuals::inst`.
            /// </summary>
            public static void inst()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OmittingTargsAndQuals_inst", ExactSpelling = true)]
                extern static void __MR_OmittingTargsAndQuals_inst();
                __MR_OmittingTargsAndQuals_inst();
            }
        }
    }
}
