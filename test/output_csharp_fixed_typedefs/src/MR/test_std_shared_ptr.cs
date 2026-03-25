public static partial class MR
{
    public static partial class CS
    {
        public static partial class StdSharedPtr
        {
            // Now with a class:
            /// <summary>
            /// Generated from class `MR::StdSharedPtr::A`.
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
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_A_Destroy", ExactSpelling = true)]
                    extern static void __MR_StdSharedPtr_A_Destroy(_Underlying *_this);
                    __MR_StdSharedPtr_A_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_A() {Dispose(false);}

                internal unsafe Const_A(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_A() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.StdSharedPtr.A._Underlying *__MR_StdSharedPtr_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_StdSharedPtr_A_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::StdSharedPtr::A::A`.
                /// </summary>
                public unsafe Const_A(MR.CS.StdSharedPtr.Const_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.StdSharedPtr.A._Underlying *__MR_StdSharedPtr_A_ConstructFromAnother(MR.CS.StdSharedPtr.A._Underlying *_other);
                    _UnderlyingPtr = __MR_StdSharedPtr_A_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// <summary>
                /// Generated from constructor `MR::StdSharedPtr::A::A`.
                /// </summary>
                public Const_A(A _other) : this((Const_A)_other) {}
            }

            // Now with a class:
            /// <summary>
            /// Generated from class `MR::StdSharedPtr::A`.
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
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.StdSharedPtr.A._Underlying *__MR_StdSharedPtr_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_StdSharedPtr_A_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::StdSharedPtr::A::A`.
                /// </summary>
                public unsafe A(MR.CS.StdSharedPtr.Const_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.StdSharedPtr.A._Underlying *__MR_StdSharedPtr_A_ConstructFromAnother(MR.CS.StdSharedPtr.A._Underlying *_other);
                    _UnderlyingPtr = __MR_StdSharedPtr_A_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// <summary>
                /// Generated from constructor `MR::StdSharedPtr::A::A`.
                /// </summary>
                public A(A _other) : this((Const_A)_other) {}

                /// <summary>
                /// Generated from method `MR::StdSharedPtr::A::operator=`.
                /// </summary>
                public unsafe MR.CS.StdSharedPtr.A assign(MR.CS.StdSharedPtr.Const_A _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_A_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.StdSharedPtr.A._Underlying *__MR_StdSharedPtr_A_AssignFromAnother(_Underlying *_this, MR.CS.StdSharedPtr.A._Underlying *_other);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_StdSharedPtr_A_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
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
            /// Generated from function `MR::StdSharedPtr::GetInt`.
            /// </summary>
            public static unsafe MR.CS.Misc._Moved<MR.CS.Std.SharedPtr_Int32T> getInt()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_GetInt", ExactSpelling = true)]
                extern static MR.CS.Std.SharedPtr_Int32T._Underlying *__MR_StdSharedPtr_GetInt();
                return MR.CS.Misc.Move(new MR.CS.Std.SharedPtr_Int32T(__MR_StdSharedPtr_GetInt(), is_owning: true));
            }

            /// <summary>
            /// Generated from function `MR::StdSharedPtr::SetInt`.
            /// </summary>
            public static unsafe void setInt(MR.CS.Std._ByValue_SharedPtr_Int32T _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetInt", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetInt(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.SharedPtr_Int32T._Underlying *_1);
                __MR_StdSharedPtr_SetInt(_1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// <summary>
            /// Generated from function `MR::StdSharedPtr::SetIntConstRef`.
            /// </summary>
            public static unsafe void setIntConstRef(MR.CS.Std.Const_SharedPtr_Int32T _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetIntConstRef", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetIntConstRef(MR.CS.Std.Const_SharedPtr_Int32T._Underlying *_1);
                __MR_StdSharedPtr_SetIntConstRef(_1._UnderlyingPtr);
            }

            /// <summary>
            /// Generated from function `MR::StdSharedPtr::SetIntDefTrivial`.
            /// Parameter `_1` defaults to `{}`.
            /// </summary>
            public static unsafe void setIntDefTrivial(MR.CS.Std._ByValue_SharedPtr_Int32T? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetIntDefTrivial", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetIntDefTrivial(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.SharedPtr_Int32T._Underlying *_1);
                __MR_StdSharedPtr_SetIntDefTrivial(_1 is not null ? _1.PassByMode : MR.CS.Misc._PassBy.default_arg, _1 is not null && _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// <summary>
            /// Generated from function `MR::StdSharedPtr::SetIntDef`.
            /// Parameter `_1` defaults to `std::make_unique&lt;int&gt;(42)`.
            /// </summary>
            public static unsafe void setIntDef(MR.CS.Std._ByValue_SharedPtr_Int32T? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetIntDef", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetIntDef(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.SharedPtr_Int32T._Underlying *_1);
                __MR_StdSharedPtr_SetIntDef(_1 is not null ? _1.PassByMode : MR.CS.Misc._PassBy.default_arg, _1 is not null && _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// <summary>
            /// Generated from function `MR::StdSharedPtr::SetIntLvalueRef`.
            /// </summary>
            public static unsafe void setIntLvalueRef(MR.CS.Std.SharedPtr_Int32T _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetIntLvalueRef", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetIntLvalueRef(MR.CS.Std.SharedPtr_Int32T._Underlying *_1);
                __MR_StdSharedPtr_SetIntLvalueRef(_1._UnderlyingPtr);
            }

            /// <summary>
            /// Generated from function `MR::StdSharedPtr::SetIntLvalueConstRef`.
            /// </summary>
            public static unsafe void setIntLvalueConstRef(MR.CS.Std.Const_SharedPtr_Int32T _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetIntLvalueConstRef", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetIntLvalueConstRef(MR.CS.Std.Const_SharedPtr_Int32T._Underlying *_1);
                __MR_StdSharedPtr_SetIntLvalueConstRef(_1._UnderlyingPtr);
            }

            /// <summary>
            /// Generated from function `MR::StdSharedPtr::SetIntRvalueRef`.
            /// </summary>
            public static unsafe void setIntRvalueRef(MR.CS.Misc._Moved<MR.CS.Std.SharedPtr_Int32T> _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetIntRvalueRef", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetIntRvalueRef(MR.CS.Std.SharedPtr_Int32T._Underlying *_1);
                __MR_StdSharedPtr_SetIntRvalueRef(_1.Value._UnderlyingPtr);
            }

            /// <summary>
            /// Generated from function `MR::StdSharedPtr::SetIntRvalueConstRef`.
            /// </summary>
            public static unsafe void setIntRvalueConstRef(MR.CS.Misc._Moved<MR.CS.Std.Const_SharedPtr_Int32T> _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetIntRvalueConstRef", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetIntRvalueConstRef(MR.CS.Std.Const_SharedPtr_Int32T._Underlying *_1);
                __MR_StdSharedPtr_SetIntRvalueConstRef(_1.Value._UnderlyingPtr);
            }

            /// <summary>
            /// Generated from function `MR::StdSharedPtr::GetIntArr`.
            /// </summary>
            public static unsafe MR.CS.Misc._Moved<MR.CS.Std.SharedPtr_Int32TArray> getIntArr()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_GetIntArr", ExactSpelling = true)]
                extern static MR.CS.Std.SharedPtr_Int32TArray._Underlying *__MR_StdSharedPtr_GetIntArr();
                return MR.CS.Misc.Move(new MR.CS.Std.SharedPtr_Int32TArray(__MR_StdSharedPtr_GetIntArr(), is_owning: true));
            }

            /// <summary>
            /// Generated from function `MR::StdSharedPtr::SetIntArr`.
            /// </summary>
            public static unsafe void setIntArr(MR.CS.Std._ByValue_SharedPtr_Int32TArray _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetIntArr", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetIntArr(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.SharedPtr_Int32TArray._Underlying *_1);
                __MR_StdSharedPtr_SetIntArr(_1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// <summary>
            /// Generated from function `MR::StdSharedPtr::SetIntArrDefTrivial`.
            /// Parameter `_1` defaults to `{}`.
            /// </summary>
            public static unsafe void setIntArrDefTrivial(MR.CS.Std._ByValue_SharedPtr_Int32TArray? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetIntArrDefTrivial", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetIntArrDefTrivial(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.SharedPtr_Int32TArray._Underlying *_1);
                __MR_StdSharedPtr_SetIntArrDefTrivial(_1 is not null ? _1.PassByMode : MR.CS.Misc._PassBy.default_arg, _1 is not null && _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// <summary>
            /// Generated from function `MR::StdSharedPtr::SetIntArrDef`.
            /// Parameter `_1` defaults to `std::make_unique&lt;int[]&gt;(42)`.
            /// </summary>
            public static unsafe void setIntArrDef(MR.CS.Std._ByValue_SharedPtr_Int32TArray? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetIntArrDef", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetIntArrDef(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.SharedPtr_Int32TArray._Underlying *_1);
                __MR_StdSharedPtr_SetIntArrDef(_1 is not null ? _1.PassByMode : MR.CS.Misc._PassBy.default_arg, _1 is not null && _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// <summary>
            /// Generated from function `MR::StdSharedPtr::GetIntArr42`.
            /// </summary>
            public static unsafe MR.CS.Misc._Moved<MR.CS.Std.SharedPtr_Int32TArray42> getIntArr42()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_GetIntArr42", ExactSpelling = true)]
                extern static MR.CS.Std.SharedPtr_Int32TArray42._Underlying *__MR_StdSharedPtr_GetIntArr42();
                return MR.CS.Misc.Move(new MR.CS.Std.SharedPtr_Int32TArray42(__MR_StdSharedPtr_GetIntArr42(), is_owning: true));
            }

            /// <summary>
            /// Generated from function `MR::StdSharedPtr::SetIntArr42`.
            /// </summary>
            public static unsafe void setIntArr42(MR.CS.Std._ByValue_SharedPtr_Int32TArray42 _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetIntArr42", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetIntArr42(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.SharedPtr_Int32TArray42._Underlying *_1);
                __MR_StdSharedPtr_SetIntArr42(_1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// <summary>
            /// Generated from function `MR::StdSharedPtr::SetIntArr42DefTrivial`.
            /// Parameter `_1` defaults to `{}`.
            /// </summary>
            public static unsafe void setIntArr42DefTrivial(MR.CS.Std._ByValue_SharedPtr_Int32TArray42? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetIntArr42DefTrivial", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetIntArr42DefTrivial(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.SharedPtr_Int32TArray42._Underlying *_1);
                __MR_StdSharedPtr_SetIntArr42DefTrivial(_1 is not null ? _1.PassByMode : MR.CS.Misc._PassBy.default_arg, _1 is not null && _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// <summary>
            /// Generated from function `MR::StdSharedPtr::SetIntArr42Def`.
            /// Parameter `_1` defaults to `std::make_shared&lt;int[42]&gt;()`.
            /// </summary>
            public static unsafe void setIntArr42Def(MR.CS.Std._ByValue_SharedPtr_Int32TArray42? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetIntArr42Def", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetIntArr42Def(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.SharedPtr_Int32TArray42._Underlying *_1);
                __MR_StdSharedPtr_SetIntArr42Def(_1 is not null ? _1.PassByMode : MR.CS.Misc._PassBy.default_arg, _1 is not null && _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// <summary>
            /// Generated from function `MR::StdSharedPtr::GetClass`.
            /// </summary>
            public static unsafe MR.CS.Misc._Moved<MR.CS.Std.SharedPtr_MRStdSharedPtrA> getClass()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_GetClass", ExactSpelling = true)]
                extern static MR.CS.Std.SharedPtr_MRStdSharedPtrA._Underlying *__MR_StdSharedPtr_GetClass();
                return MR.CS.Misc.Move(new MR.CS.Std.SharedPtr_MRStdSharedPtrA(__MR_StdSharedPtr_GetClass(), is_owning: true));
            }

            /// <summary>
            /// Generated from function `MR::StdSharedPtr::SetClass`.
            /// </summary>
            public static unsafe void setClass(MR.CS.Std._ByValue_SharedPtr_MRStdSharedPtrA _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetClass", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetClass(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.SharedPtr_MRStdSharedPtrA._Underlying *_1);
                __MR_StdSharedPtr_SetClass(_1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// <summary>
            /// Generated from function `MR::StdSharedPtr::SetClassConstRef`.
            /// </summary>
            public static unsafe void setClassConstRef(MR.CS.Std.Const_SharedPtr_MRStdSharedPtrA _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetClassConstRef", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetClassConstRef(MR.CS.Std.Const_SharedPtr_MRStdSharedPtrA._Underlying *_1);
                __MR_StdSharedPtr_SetClassConstRef(_1._UnderlyingPtr);
            }

            /// <summary>
            /// Generated from function `MR::StdSharedPtr::SetClassDefTrivial`.
            /// Parameter `_1` defaults to `{}`.
            /// </summary>
            public static unsafe void setClassDefTrivial(MR.CS.Std._ByValue_SharedPtr_MRStdSharedPtrA? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetClassDefTrivial", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetClassDefTrivial(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.SharedPtr_MRStdSharedPtrA._Underlying *_1);
                __MR_StdSharedPtr_SetClassDefTrivial(_1 is not null ? _1.PassByMode : MR.CS.Misc._PassBy.default_arg, _1 is not null && _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// <summary>
            /// Generated from function `MR::StdSharedPtr::SetClassDef`.
            /// Parameter `_1` defaults to `std::make_unique&lt;MR::StdSharedPtr::A&gt;(MR::StdSharedPtr::A{})`.
            /// </summary>
            public static unsafe void setClassDef(MR.CS.Std._ByValue_SharedPtr_MRStdSharedPtrA? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetClassDef", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetClassDef(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.SharedPtr_MRStdSharedPtrA._Underlying *_1);
                __MR_StdSharedPtr_SetClassDef(_1 is not null ? _1.PassByMode : MR.CS.Misc._PassBy.default_arg, _1 is not null && _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// <summary>
            /// Generated from function `MR::StdSharedPtr::SetClassLvalueRef`.
            /// </summary>
            public static unsafe void setClassLvalueRef(MR.CS.Std.SharedPtr_MRStdSharedPtrA _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetClassLvalueRef", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetClassLvalueRef(MR.CS.Std.SharedPtr_MRStdSharedPtrA._Underlying *_1);
                __MR_StdSharedPtr_SetClassLvalueRef(_1._UnderlyingPtr);
            }

            /// <summary>
            /// Generated from function `MR::StdSharedPtr::SetClassLvalueConstRef`.
            /// </summary>
            public static unsafe void setClassLvalueConstRef(MR.CS.Std.Const_SharedPtr_MRStdSharedPtrA _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetClassLvalueConstRef", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetClassLvalueConstRef(MR.CS.Std.Const_SharedPtr_MRStdSharedPtrA._Underlying *_1);
                __MR_StdSharedPtr_SetClassLvalueConstRef(_1._UnderlyingPtr);
            }

            /// <summary>
            /// Generated from function `MR::StdSharedPtr::SetClassRvalueRef`.
            /// </summary>
            public static unsafe void setClassRvalueRef(MR.CS.Misc._Moved<MR.CS.Std.SharedPtr_MRStdSharedPtrA> _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetClassRvalueRef", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetClassRvalueRef(MR.CS.Std.SharedPtr_MRStdSharedPtrA._Underlying *_1);
                __MR_StdSharedPtr_SetClassRvalueRef(_1.Value._UnderlyingPtr);
            }

            /// <summary>
            /// Generated from function `MR::StdSharedPtr::SetClassRvalueConstRef`.
            /// </summary>
            public static unsafe void setClassRvalueConstRef(MR.CS.Misc._Moved<MR.CS.Std.Const_SharedPtr_MRStdSharedPtrA> _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetClassRvalueConstRef", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetClassRvalueConstRef(MR.CS.Std.Const_SharedPtr_MRStdSharedPtrA._Underlying *_1);
                __MR_StdSharedPtr_SetClassRvalueConstRef(_1.Value._UnderlyingPtr);
            }

            /// <summary>
            /// Generated from function `MR::StdSharedPtr::GetClassArr`.
            /// </summary>
            public static unsafe MR.CS.Misc._Moved<MR.CS.Std.SharedPtr_MRStdSharedPtrAArray> getClassArr()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_GetClassArr", ExactSpelling = true)]
                extern static MR.CS.Std.SharedPtr_MRStdSharedPtrAArray._Underlying *__MR_StdSharedPtr_GetClassArr();
                return MR.CS.Misc.Move(new MR.CS.Std.SharedPtr_MRStdSharedPtrAArray(__MR_StdSharedPtr_GetClassArr(), is_owning: true));
            }

            /// <summary>
            /// Generated from function `MR::StdSharedPtr::SetClassArr`.
            /// </summary>
            public static unsafe void setClassArr(MR.CS.Std._ByValue_SharedPtr_MRStdSharedPtrAArray _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetClassArr", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetClassArr(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.SharedPtr_MRStdSharedPtrAArray._Underlying *_1);
                __MR_StdSharedPtr_SetClassArr(_1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// <summary>
            /// Generated from function `MR::StdSharedPtr::SetClassArrDefTrivial`.
            /// Parameter `_1` defaults to `{}`.
            /// </summary>
            public static unsafe void setClassArrDefTrivial(MR.CS.Std._ByValue_SharedPtr_MRStdSharedPtrAArray? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetClassArrDefTrivial", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetClassArrDefTrivial(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.SharedPtr_MRStdSharedPtrAArray._Underlying *_1);
                __MR_StdSharedPtr_SetClassArrDefTrivial(_1 is not null ? _1.PassByMode : MR.CS.Misc._PassBy.default_arg, _1 is not null && _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// <summary>
            /// Generated from function `MR::StdSharedPtr::SetClassArrDef`.
            /// Parameter `_1` defaults to `std::make_unique&lt;MR::StdSharedPtr::A[]&gt;(42)`.
            /// </summary>
            public static unsafe void setClassArrDef(MR.CS.Std._ByValue_SharedPtr_MRStdSharedPtrAArray? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetClassArrDef", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetClassArrDef(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.SharedPtr_MRStdSharedPtrAArray._Underlying *_1);
                __MR_StdSharedPtr_SetClassArrDef(_1 is not null ? _1.PassByMode : MR.CS.Misc._PassBy.default_arg, _1 is not null && _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// <summary>
            /// Generated from function `MR::StdSharedPtr::GetClassArr42`.
            /// </summary>
            public static unsafe MR.CS.Misc._Moved<MR.CS.Std.SharedPtr_MRStdSharedPtrAArray42> getClassArr42()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_GetClassArr42", ExactSpelling = true)]
                extern static MR.CS.Std.SharedPtr_MRStdSharedPtrAArray42._Underlying *__MR_StdSharedPtr_GetClassArr42();
                return MR.CS.Misc.Move(new MR.CS.Std.SharedPtr_MRStdSharedPtrAArray42(__MR_StdSharedPtr_GetClassArr42(), is_owning: true));
            }

            /// <summary>
            /// Generated from function `MR::StdSharedPtr::SetClassArr42`.
            /// </summary>
            public static unsafe void setClassArr42(MR.CS.Std._ByValue_SharedPtr_MRStdSharedPtrAArray42 _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetClassArr42", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetClassArr42(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.SharedPtr_MRStdSharedPtrAArray42._Underlying *_1);
                __MR_StdSharedPtr_SetClassArr42(_1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// <summary>
            /// Generated from function `MR::StdSharedPtr::SetClassArr42DefTrivial`.
            /// Parameter `_1` defaults to `{}`.
            /// </summary>
            public static unsafe void setClassArr42DefTrivial(MR.CS.Std._ByValue_SharedPtr_MRStdSharedPtrAArray42? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetClassArr42DefTrivial", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetClassArr42DefTrivial(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.SharedPtr_MRStdSharedPtrAArray42._Underlying *_1);
                __MR_StdSharedPtr_SetClassArr42DefTrivial(_1 is not null ? _1.PassByMode : MR.CS.Misc._PassBy.default_arg, _1 is not null && _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// <summary>
            /// Generated from function `MR::StdSharedPtr::SetClassArr42Def`.
            /// Parameter `_1` defaults to `std::make_shared&lt;MR::StdSharedPtr::A[42]&gt;()`.
            /// </summary>
            public static unsafe void setClassArr42Def(MR.CS.Std._ByValue_SharedPtr_MRStdSharedPtrAArray42? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetClassArr42Def", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetClassArr42Def(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.SharedPtr_MRStdSharedPtrAArray42._Underlying *_1);
                __MR_StdSharedPtr_SetClassArr42Def(_1 is not null ? _1.PassByMode : MR.CS.Misc._PassBy.default_arg, _1 is not null && _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            // With constness:
            // Try const element types:
            /// <summary>
            /// Generated from function `MR::StdSharedPtr::GetConstInt`.
            /// </summary>
            public static unsafe MR.CS.Misc._Moved<MR.CS.Std.SharedPtr_ConstInt32T> getConstInt()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_GetConstInt", ExactSpelling = true)]
                extern static MR.CS.Std.SharedPtr_ConstInt32T._Underlying *__MR_StdSharedPtr_GetConstInt();
                return MR.CS.Misc.Move(new MR.CS.Std.SharedPtr_ConstInt32T(__MR_StdSharedPtr_GetConstInt(), is_owning: true));
            }

            /// <summary>
            /// Generated from function `MR::StdSharedPtr::GetConstIntArr`.
            /// </summary>
            public static unsafe MR.CS.Misc._Moved<MR.CS.Std.SharedPtr_ConstInt32TArray> getConstIntArr()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_GetConstIntArr", ExactSpelling = true)]
                extern static MR.CS.Std.SharedPtr_ConstInt32TArray._Underlying *__MR_StdSharedPtr_GetConstIntArr();
                return MR.CS.Misc.Move(new MR.CS.Std.SharedPtr_ConstInt32TArray(__MR_StdSharedPtr_GetConstIntArr(), is_owning: true));
            }

            /// <summary>
            /// Generated from function `MR::StdSharedPtr::GetConstIntArr42`.
            /// </summary>
            public static unsafe MR.CS.Misc._Moved<MR.CS.Std.SharedPtr_ConstInt32TArray42> getConstIntArr42()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_GetConstIntArr42", ExactSpelling = true)]
                extern static MR.CS.Std.SharedPtr_ConstInt32TArray42._Underlying *__MR_StdSharedPtr_GetConstIntArr42();
                return MR.CS.Misc.Move(new MR.CS.Std.SharedPtr_ConstInt32TArray42(__MR_StdSharedPtr_GetConstIntArr42(), is_owning: true));
            }

            /// <summary>
            /// Generated from function `MR::StdSharedPtr::GetConstClass`.
            /// </summary>
            public static unsafe MR.CS.Misc._Moved<MR.CS.Std.SharedPtr_ConstMRStdSharedPtrA> getConstClass()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_GetConstClass", ExactSpelling = true)]
                extern static MR.CS.Std.SharedPtr_ConstMRStdSharedPtrA._Underlying *__MR_StdSharedPtr_GetConstClass();
                return MR.CS.Misc.Move(new MR.CS.Std.SharedPtr_ConstMRStdSharedPtrA(__MR_StdSharedPtr_GetConstClass(), is_owning: true));
            }

            /// <summary>
            /// Generated from function `MR::StdSharedPtr::GetConstClassArr`.
            /// </summary>
            public static unsafe MR.CS.Misc._Moved<MR.CS.Std.SharedPtr_ConstMRStdSharedPtrAArray> getConstClassArr()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_GetConstClassArr", ExactSpelling = true)]
                extern static MR.CS.Std.SharedPtr_ConstMRStdSharedPtrAArray._Underlying *__MR_StdSharedPtr_GetConstClassArr();
                return MR.CS.Misc.Move(new MR.CS.Std.SharedPtr_ConstMRStdSharedPtrAArray(__MR_StdSharedPtr_GetConstClassArr(), is_owning: true));
            }

            /// <summary>
            /// Generated from function `MR::StdSharedPtr::GetConstClassArr42`.
            /// </summary>
            public static unsafe MR.CS.Misc._Moved<MR.CS.Std.SharedPtr_ConstMRStdSharedPtrAArray42> getConstClassArr42()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_GetConstClassArr42", ExactSpelling = true)]
                extern static MR.CS.Std.SharedPtr_ConstMRStdSharedPtrAArray42._Underlying *__MR_StdSharedPtr_GetConstClassArr42();
                return MR.CS.Misc.Move(new MR.CS.Std.SharedPtr_ConstMRStdSharedPtrAArray42(__MR_StdSharedPtr_GetConstClassArr42(), is_owning: true));
            }
        }
    }
}
