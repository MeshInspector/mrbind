public static partial class MR
{
    public static partial class CS
    {
        public static partial class IncludesForEnumConstants
        {
            /// <summary>
            /// Generated from class `MR::IncludesForEnumConstants::A<MR::IncludesForEnumConstants::E::e1>`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_A_MRIncludesForEnumConstantsEE1 : MR.CS.Misc.Object<Const_A_MRIncludesForEnumConstantsEE1>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_Destroy", ExactSpelling = true)]
                    extern static void __MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_Destroy(_Underlying *_this);
                    __MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_A_MRIncludesForEnumConstantsEE1() {Dispose(false);}

                internal unsafe Const_A_MRIncludesForEnumConstantsEE1(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_A_MRIncludesForEnumConstantsEE1() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.IncludesForEnumConstants.A_MRIncludesForEnumConstantsEE1._Underlying *__MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_DefaultConstruct();
                    _UnderlyingPtr = __MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::IncludesForEnumConstants::A<MR::IncludesForEnumConstants::E::e1>::A`.
                /// </summary>
                public unsafe Const_A_MRIncludesForEnumConstantsEE1(MR.CS.IncludesForEnumConstants.Const_A_MRIncludesForEnumConstantsEE1 _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.IncludesForEnumConstants.A_MRIncludesForEnumConstantsEE1._Underlying *__MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_ConstructFromAnother(MR.CS.IncludesForEnumConstants.A_MRIncludesForEnumConstantsEE1._Underlying *_other);
                    _UnderlyingPtr = __MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// <summary>
                /// Generated from constructor `MR::IncludesForEnumConstants::A<MR::IncludesForEnumConstants::E::e1>::A`.
                /// </summary>
                public Const_A_MRIncludesForEnumConstantsEE1(A_MRIncludesForEnumConstantsEE1 _other) : this((Const_A_MRIncludesForEnumConstantsEE1)_other) {}
            }

            /// <summary>
            /// Generated from class `MR::IncludesForEnumConstants::A<MR::IncludesForEnumConstants::E::e1>`.
            /// This is the non-const half of the class.
            /// </summary>
            public class A_MRIncludesForEnumConstantsEE1 : Const_A_MRIncludesForEnumConstantsEE1
            {
                internal unsafe A_MRIncludesForEnumConstantsEE1(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe A_MRIncludesForEnumConstantsEE1() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.IncludesForEnumConstants.A_MRIncludesForEnumConstantsEE1._Underlying *__MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_DefaultConstruct();
                    _UnderlyingPtr = __MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::IncludesForEnumConstants::A<MR::IncludesForEnumConstants::E::e1>::A`.
                /// </summary>
                public unsafe A_MRIncludesForEnumConstantsEE1(MR.CS.IncludesForEnumConstants.Const_A_MRIncludesForEnumConstantsEE1 _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.IncludesForEnumConstants.A_MRIncludesForEnumConstantsEE1._Underlying *__MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_ConstructFromAnother(MR.CS.IncludesForEnumConstants.A_MRIncludesForEnumConstantsEE1._Underlying *_other);
                    _UnderlyingPtr = __MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// <summary>
                /// Generated from constructor `MR::IncludesForEnumConstants::A<MR::IncludesForEnumConstants::E::e1>::A`.
                /// </summary>
                public A_MRIncludesForEnumConstantsEE1(A_MRIncludesForEnumConstantsEE1 _other) : this((Const_A_MRIncludesForEnumConstantsEE1)_other) {}

                /// <summary>
                /// Generated from method `MR::IncludesForEnumConstants::A<MR::IncludesForEnumConstants::E::e1>::operator=`.
                /// </summary>
                public unsafe MR.CS.IncludesForEnumConstants.A_MRIncludesForEnumConstantsEE1 assign(MR.CS.IncludesForEnumConstants.Const_A_MRIncludesForEnumConstantsEE1 _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.IncludesForEnumConstants.A_MRIncludesForEnumConstantsEE1._Underlying *__MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_AssignFromAnother(_Underlying *_this, MR.CS.IncludesForEnumConstants.A_MRIncludesForEnumConstantsEE1._Underlying *_other);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }
            }

            /// <summary>
            /// This is used for optional parameters of class `A_MRIncludesForEnumConstantsEE1` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_A_MRIncludesForEnumConstantsEE1`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `A_MRIncludesForEnumConstantsEE1`/`Const_A_MRIncludesForEnumConstantsEE1` directly.
            /// </summary>
            public class _InOptMut_A_MRIncludesForEnumConstantsEE1
            {
                public A_MRIncludesForEnumConstantsEE1? Opt;

                public _InOptMut_A_MRIncludesForEnumConstantsEE1() {}
                public _InOptMut_A_MRIncludesForEnumConstantsEE1(A_MRIncludesForEnumConstantsEE1 value) {Opt = value;}
                public static implicit operator _InOptMut_A_MRIncludesForEnumConstantsEE1(A_MRIncludesForEnumConstantsEE1 value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `A_MRIncludesForEnumConstantsEE1` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_A_MRIncludesForEnumConstantsEE1`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `A_MRIncludesForEnumConstantsEE1`/`Const_A_MRIncludesForEnumConstantsEE1` to pass it to the function.
            /// </summary>
            public class _InOptConst_A_MRIncludesForEnumConstantsEE1
            {
                public Const_A_MRIncludesForEnumConstantsEE1? Opt;

                public _InOptConst_A_MRIncludesForEnumConstantsEE1() {}
                public _InOptConst_A_MRIncludesForEnumConstantsEE1(Const_A_MRIncludesForEnumConstantsEE1 value) {Opt = value;}
                public static implicit operator _InOptConst_A_MRIncludesForEnumConstantsEE1(Const_A_MRIncludesForEnumConstantsEE1 value) {return new(value);}
            }
        }
    }
}
