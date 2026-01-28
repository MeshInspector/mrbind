public static partial class MR
{
    public static partial class CS
    {
        public static partial class StdUniquePtr
        {
            // Now with a class:
            /// <summary>
            /// Generated from class `MR::StdUniquePtr::A`.
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
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_A_Destroy", ExactSpelling = true)]
                    extern static void __MR_StdUniquePtr_A_Destroy(_Underlying *_this);
                    __MR_StdUniquePtr_A_Destroy(_UnderlyingPtr);
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
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.StdUniquePtr.A._Underlying *__MR_StdUniquePtr_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_StdUniquePtr_A_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::StdUniquePtr::A::A`.
                /// </summary>
                public unsafe Const_A(MR.CS.StdUniquePtr.Const_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.StdUniquePtr.A._Underlying *__MR_StdUniquePtr_A_ConstructFromAnother(MR.CS.StdUniquePtr.A._Underlying *_other);
                    _UnderlyingPtr = __MR_StdUniquePtr_A_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }
            }

            // Now with a class:
            /// <summary>
            /// Generated from class `MR::StdUniquePtr::A`.
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
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.StdUniquePtr.A._Underlying *__MR_StdUniquePtr_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_StdUniquePtr_A_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::StdUniquePtr::A::A`.
                /// </summary>
                public unsafe A(MR.CS.StdUniquePtr.Const_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.StdUniquePtr.A._Underlying *__MR_StdUniquePtr_A_ConstructFromAnother(MR.CS.StdUniquePtr.A._Underlying *_other);
                    _UnderlyingPtr = __MR_StdUniquePtr_A_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// <summary>
                /// Generated from method `MR::StdUniquePtr::A::operator=`.
                /// </summary>
                public unsafe MR.CS.StdUniquePtr.A assign(MR.CS.StdUniquePtr.Const_A _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_A_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.StdUniquePtr.A._Underlying *__MR_StdUniquePtr_A_AssignFromAnother(_Underlying *_this, MR.CS.StdUniquePtr.A._Underlying *_other);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_StdUniquePtr_A_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
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
            /// Generated from function `MR::StdUniquePtr::GetInt`.
            /// </summary>
            public static unsafe void *getInt()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_GetInt", ExactSpelling = true)]
                extern static void *__MR_StdUniquePtr_GetInt();
                return __MR_StdUniquePtr_GetInt();
            }

            /// <summary>
            /// Generated from function `MR::StdUniquePtr::SetInt`.
            /// </summary>
            public static unsafe void setInt(void *_1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_SetInt", ExactSpelling = true)]
                extern static void __MR_StdUniquePtr_SetInt(void *_1);
                __MR_StdUniquePtr_SetInt(_1);
            }

            /// <summary>
            /// Generated from function `MR::StdUniquePtr::SetIntConstRef`.
            /// </summary>
            public static unsafe void setIntConstRef(MR.CS.Std.Const_UniquePtr_Int _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_SetIntConstRef", ExactSpelling = true)]
                extern static void __MR_StdUniquePtr_SetIntConstRef(MR.CS.Std.Const_UniquePtr_Int._Underlying *_1);
                __MR_StdUniquePtr_SetIntConstRef(_1._UnderlyingPtr);
            }

            /// <summary>
            /// Generated from function `MR::StdUniquePtr::SetIntDefTrivial`.
            /// </summary>
            public static unsafe void setIntDefTrivial(void *_1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_SetIntDefTrivial", ExactSpelling = true)]
                extern static void __MR_StdUniquePtr_SetIntDefTrivial(void *_1);
                __MR_StdUniquePtr_SetIntDefTrivial(_1);
            }

            /// <summary>
            /// Generated from function `MR::StdUniquePtr::SetIntDef`.
            /// Parameter `_1` defaults to `std::make_unique<int>(42)`.
            /// </summary>
            public static unsafe void setIntDef(void **_1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_SetIntDef", ExactSpelling = true)]
                extern static void __MR_StdUniquePtr_SetIntDef(void *_1);
                __MR_StdUniquePtr_SetIntDef(_1);
            }

            /// <summary>
            /// Generated from function `MR::StdUniquePtr::SetIntLvalueRef`.
            /// </summary>
            public static unsafe void setIntLvalueRef(MR.CS.Std.UniquePtr_Int _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_SetIntLvalueRef", ExactSpelling = true)]
                extern static void __MR_StdUniquePtr_SetIntLvalueRef(MR.CS.Std.UniquePtr_Int._Underlying *_1);
                __MR_StdUniquePtr_SetIntLvalueRef(_1._UnderlyingPtr);
            }

            /// <summary>
            /// Generated from function `MR::StdUniquePtr::SetIntLvalueConstRef`.
            /// </summary>
            public static unsafe void setIntLvalueConstRef(MR.CS.Std.Const_UniquePtr_Int _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_SetIntLvalueConstRef", ExactSpelling = true)]
                extern static void __MR_StdUniquePtr_SetIntLvalueConstRef(MR.CS.Std.Const_UniquePtr_Int._Underlying *_1);
                __MR_StdUniquePtr_SetIntLvalueConstRef(_1._UnderlyingPtr);
            }

            /// <summary>
            /// Generated from function `MR::StdUniquePtr::SetIntRvalueRef`.
            /// </summary>
            public static unsafe void setIntRvalueRef(void *_1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_SetIntRvalueRef", ExactSpelling = true)]
                extern static void __MR_StdUniquePtr_SetIntRvalueRef(void *_1);
                __MR_StdUniquePtr_SetIntRvalueRef(_1);
            }

            /// <summary>
            /// Generated from function `MR::StdUniquePtr::SetIntRvalueConstRef`.
            /// </summary>
            public static unsafe void setIntRvalueConstRef(void *_1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_SetIntRvalueConstRef", ExactSpelling = true)]
                extern static void __MR_StdUniquePtr_SetIntRvalueConstRef(void *_1);
                __MR_StdUniquePtr_SetIntRvalueConstRef(_1);
            }

            /// <summary>
            /// Generated from function `MR::StdUniquePtr::GetIntArr`.
            /// </summary>
            public static unsafe void *getIntArr()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_GetIntArr", ExactSpelling = true)]
                extern static void *__MR_StdUniquePtr_GetIntArr();
                return __MR_StdUniquePtr_GetIntArr();
            }

            /// <summary>
            /// Generated from function `MR::StdUniquePtr::SetIntArr`.
            /// </summary>
            public static unsafe void setIntArr(void *_1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_SetIntArr", ExactSpelling = true)]
                extern static void __MR_StdUniquePtr_SetIntArr(void *_1);
                __MR_StdUniquePtr_SetIntArr(_1);
            }

            /// <summary>
            /// Generated from function `MR::StdUniquePtr::SetIntArrDefTrivial`.
            /// </summary>
            public static unsafe void setIntArrDefTrivial(void *_1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_SetIntArrDefTrivial", ExactSpelling = true)]
                extern static void __MR_StdUniquePtr_SetIntArrDefTrivial(void *_1);
                __MR_StdUniquePtr_SetIntArrDefTrivial(_1);
            }

            /// <summary>
            /// Generated from function `MR::StdUniquePtr::SetIntArrDef`.
            /// Parameter `_1` defaults to `std::make_unique<int[]>(42)`.
            /// </summary>
            public static unsafe void setIntArrDef(void **_1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_SetIntArrDef", ExactSpelling = true)]
                extern static void __MR_StdUniquePtr_SetIntArrDef(void *_1);
                __MR_StdUniquePtr_SetIntArrDef(_1);
            }

            /// <summary>
            /// Generated from function `MR::StdUniquePtr::GetClass`.
            /// </summary>
            public static unsafe void *getClass()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_GetClass", ExactSpelling = true)]
                extern static void *__MR_StdUniquePtr_GetClass();
                return __MR_StdUniquePtr_GetClass();
            }

            /// <summary>
            /// Generated from function `MR::StdUniquePtr::SetClass`.
            /// </summary>
            public static unsafe void setClass(void *_1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_SetClass", ExactSpelling = true)]
                extern static void __MR_StdUniquePtr_SetClass(void *_1);
                __MR_StdUniquePtr_SetClass(_1);
            }

            /// <summary>
            /// Generated from function `MR::StdUniquePtr::SetClassConstRef`.
            /// </summary>
            public static unsafe void setClassConstRef(MR.CS.Std.Const_UniquePtr_MRStdUniquePtrA _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_SetClassConstRef", ExactSpelling = true)]
                extern static void __MR_StdUniquePtr_SetClassConstRef(MR.CS.Std.Const_UniquePtr_MRStdUniquePtrA._Underlying *_1);
                __MR_StdUniquePtr_SetClassConstRef(_1._UnderlyingPtr);
            }

            /// <summary>
            /// Generated from function `MR::StdUniquePtr::SetClassDefTrivial`.
            /// </summary>
            public static unsafe void setClassDefTrivial(void *_1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_SetClassDefTrivial", ExactSpelling = true)]
                extern static void __MR_StdUniquePtr_SetClassDefTrivial(void *_1);
                __MR_StdUniquePtr_SetClassDefTrivial(_1);
            }

            /// <summary>
            /// Generated from function `MR::StdUniquePtr::SetClassDef`.
            /// Parameter `_1` defaults to `std::make_unique<MR::StdUniquePtr::A>(MR::StdUniquePtr::A{})`.
            /// </summary>
            public static unsafe void setClassDef(void **_1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_SetClassDef", ExactSpelling = true)]
                extern static void __MR_StdUniquePtr_SetClassDef(void *_1);
                __MR_StdUniquePtr_SetClassDef(_1);
            }

            /// <summary>
            /// Generated from function `MR::StdUniquePtr::SetClassLvalueRef`.
            /// </summary>
            public static unsafe void setClassLvalueRef(MR.CS.Std.UniquePtr_MRStdUniquePtrA _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_SetClassLvalueRef", ExactSpelling = true)]
                extern static void __MR_StdUniquePtr_SetClassLvalueRef(MR.CS.Std.UniquePtr_MRStdUniquePtrA._Underlying *_1);
                __MR_StdUniquePtr_SetClassLvalueRef(_1._UnderlyingPtr);
            }

            /// <summary>
            /// Generated from function `MR::StdUniquePtr::SetClassLvalueConstRef`.
            /// </summary>
            public static unsafe void setClassLvalueConstRef(MR.CS.Std.Const_UniquePtr_MRStdUniquePtrA _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_SetClassLvalueConstRef", ExactSpelling = true)]
                extern static void __MR_StdUniquePtr_SetClassLvalueConstRef(MR.CS.Std.Const_UniquePtr_MRStdUniquePtrA._Underlying *_1);
                __MR_StdUniquePtr_SetClassLvalueConstRef(_1._UnderlyingPtr);
            }

            /// <summary>
            /// Generated from function `MR::StdUniquePtr::SetClassRvalueRef`.
            /// </summary>
            public static unsafe void setClassRvalueRef(void *_1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_SetClassRvalueRef", ExactSpelling = true)]
                extern static void __MR_StdUniquePtr_SetClassRvalueRef(void *_1);
                __MR_StdUniquePtr_SetClassRvalueRef(_1);
            }

            /// <summary>
            /// Generated from function `MR::StdUniquePtr::SetClassRvalueConstRef`.
            /// </summary>
            public static unsafe void setClassRvalueConstRef(void *_1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_SetClassRvalueConstRef", ExactSpelling = true)]
                extern static void __MR_StdUniquePtr_SetClassRvalueConstRef(void *_1);
                __MR_StdUniquePtr_SetClassRvalueConstRef(_1);
            }

            /// <summary>
            /// Generated from function `MR::StdUniquePtr::GetClassArr`.
            /// </summary>
            public static unsafe void *getClassArr()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_GetClassArr", ExactSpelling = true)]
                extern static void *__MR_StdUniquePtr_GetClassArr();
                return __MR_StdUniquePtr_GetClassArr();
            }

            /// <summary>
            /// Generated from function `MR::StdUniquePtr::SetClassArr`.
            /// </summary>
            public static unsafe void setClassArr(void *_1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_SetClassArr", ExactSpelling = true)]
                extern static void __MR_StdUniquePtr_SetClassArr(void *_1);
                __MR_StdUniquePtr_SetClassArr(_1);
            }

            /// <summary>
            /// Generated from function `MR::StdUniquePtr::SetClassArrDefTrivial`.
            /// </summary>
            public static unsafe void setClassArrDefTrivial(void *_1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_SetClassArrDefTrivial", ExactSpelling = true)]
                extern static void __MR_StdUniquePtr_SetClassArrDefTrivial(void *_1);
                __MR_StdUniquePtr_SetClassArrDefTrivial(_1);
            }

            /// <summary>
            /// Generated from function `MR::StdUniquePtr::SetClassArrDef`.
            /// Parameter `_1` defaults to `std::make_unique<MR::StdUniquePtr::A[]>(42)`.
            /// </summary>
            public static unsafe void setClassArrDef(void **_1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_SetClassArrDef", ExactSpelling = true)]
                extern static void __MR_StdUniquePtr_SetClassArrDef(void *_1);
                __MR_StdUniquePtr_SetClassArrDef(_1);
            }

            // Try const element types:
            /// <summary>
            /// Generated from function `MR::StdUniquePtr::GetConstInt`.
            /// </summary>
            public static unsafe void *getConstInt()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_GetConstInt", ExactSpelling = true)]
                extern static void *__MR_StdUniquePtr_GetConstInt();
                return __MR_StdUniquePtr_GetConstInt();
            }

            /// <summary>
            /// Generated from function `MR::StdUniquePtr::GetConstIntArr`.
            /// </summary>
            public static unsafe void *getConstIntArr()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_GetConstIntArr", ExactSpelling = true)]
                extern static void *__MR_StdUniquePtr_GetConstIntArr();
                return __MR_StdUniquePtr_GetConstIntArr();
            }

            /// <summary>
            /// Generated from function `MR::StdUniquePtr::GetConstClass`.
            /// </summary>
            public static unsafe void *getConstClass()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_GetConstClass", ExactSpelling = true)]
                extern static void *__MR_StdUniquePtr_GetConstClass();
                return __MR_StdUniquePtr_GetConstClass();
            }

            /// <summary>
            /// Generated from function `MR::StdUniquePtr::GetConstClassArr`.
            /// </summary>
            public static unsafe void *getConstClassArr()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_GetConstClassArr", ExactSpelling = true)]
                extern static void *__MR_StdUniquePtr_GetConstClassArr();
                return __MR_StdUniquePtr_GetConstClassArr();
            }

            // Here `std::unique_ptr<float>` never gets emitted as an actual type (since we don't have non-null default arguments), so its header should not be emitted.
            /// <summary>
            /// Generated from function `MR::StdUniquePtr::GetFloat`.
            /// </summary>
            public static unsafe void *getFloat()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_GetFloat", ExactSpelling = true)]
                extern static void *__MR_StdUniquePtr_GetFloat();
                return __MR_StdUniquePtr_GetFloat();
            }

            /// <summary>
            /// Generated from function `MR::StdUniquePtr::SetFloat`.
            /// </summary>
            public static unsafe void setFloat(void *_1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_SetFloat", ExactSpelling = true)]
                extern static void __MR_StdUniquePtr_SetFloat(void *_1);
                __MR_StdUniquePtr_SetFloat(_1);
            }

            /// <summary>
            /// Generated from function `MR::StdUniquePtr::SetFloatDefTrivial`.
            /// </summary>
            public static unsafe void setFloatDefTrivial(void *_1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_SetFloatDefTrivial", ExactSpelling = true)]
                extern static void __MR_StdUniquePtr_SetFloatDefTrivial(void *_1);
                __MR_StdUniquePtr_SetFloatDefTrivial(_1);
            }
        }
    }
}
