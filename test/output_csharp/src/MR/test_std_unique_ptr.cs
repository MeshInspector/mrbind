public static partial class MR
{
    public static partial class CS
    {
        public static partial class StdUniquePtr
        {
            // Now with a class:
            /// Generated from class `MR::StdUniquePtr::A`.
            /// This is the const half of the class.
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

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_A() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.StdUniquePtr.A._Underlying *__MR_StdUniquePtr_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_StdUniquePtr_A_DefaultConstruct();
                }

                /// Generated from constructor `MR::StdUniquePtr::A::A`.
                public unsafe Const_A(MR.CS.StdUniquePtr.Const_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.StdUniquePtr.A._Underlying *__MR_StdUniquePtr_A_ConstructFromAnother(MR.CS.StdUniquePtr.A._Underlying *_other);
                    _UnderlyingPtr = __MR_StdUniquePtr_A_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }
            }

            // Now with a class:
            /// Generated from class `MR::StdUniquePtr::A`.
            /// This is the non-const half of the class.
            public class A : Const_A
            {
                internal unsafe A(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe A() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.StdUniquePtr.A._Underlying *__MR_StdUniquePtr_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_StdUniquePtr_A_DefaultConstruct();
                }

                /// Generated from constructor `MR::StdUniquePtr::A::A`.
                public unsafe A(MR.CS.StdUniquePtr.Const_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.StdUniquePtr.A._Underlying *__MR_StdUniquePtr_A_ConstructFromAnother(MR.CS.StdUniquePtr.A._Underlying *_other);
                    _UnderlyingPtr = __MR_StdUniquePtr_A_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// Generated from method `MR::StdUniquePtr::A::operator=`.
                public unsafe MR.CS.StdUniquePtr.A Assign(MR.CS.StdUniquePtr.Const_A _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_A_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.StdUniquePtr.A._Underlying *__MR_StdUniquePtr_A_AssignFromAnother(_Underlying *_this, MR.CS.StdUniquePtr.A._Underlying *_other);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_StdUniquePtr_A_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
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

            /// Generated from function `MR::StdUniquePtr::GetInt`.
            public static unsafe void *GetInt()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_GetInt", ExactSpelling = true)]
                extern static void *__MR_StdUniquePtr_GetInt();
                return __MR_StdUniquePtr_GetInt();
            }

            /// Generated from function `MR::StdUniquePtr::SetInt`.
            public static unsafe void SetInt(void *_1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_SetInt", ExactSpelling = true)]
                extern static void __MR_StdUniquePtr_SetInt(void *_1);
                __MR_StdUniquePtr_SetInt(_1);
            }

            /// Generated from function `MR::StdUniquePtr::SetIntConstRef`.
            public static unsafe void SetIntConstRef(MR.CS.Std.Const_UniquePtr_Int _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_SetIntConstRef", ExactSpelling = true)]
                extern static void __MR_StdUniquePtr_SetIntConstRef(MR.CS.Std.Const_UniquePtr_Int._Underlying *_1);
                __MR_StdUniquePtr_SetIntConstRef(_1._UnderlyingPtr);
            }

            /// Generated from function `MR::StdUniquePtr::SetIntDefTrivial`.
            public static unsafe void SetIntDefTrivial(void *_1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_SetIntDefTrivial", ExactSpelling = true)]
                extern static void __MR_StdUniquePtr_SetIntDefTrivial(void *_1);
                __MR_StdUniquePtr_SetIntDefTrivial(_1);
            }

            /// Generated from function `MR::StdUniquePtr::SetIntDef`.
            /// Parameter `_1` defaults to `std::make_unique<int>(42)`.
            public static unsafe void SetIntDef(void **_1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_SetIntDef", ExactSpelling = true)]
                extern static void __MR_StdUniquePtr_SetIntDef(void *_1);
                __MR_StdUniquePtr_SetIntDef(_1);
            }

            /// Generated from function `MR::StdUniquePtr::SetIntLvalueRef`.
            public static unsafe void SetIntLvalueRef(MR.CS.Std.UniquePtr_Int _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_SetIntLvalueRef", ExactSpelling = true)]
                extern static void __MR_StdUniquePtr_SetIntLvalueRef(MR.CS.Std.UniquePtr_Int._Underlying *_1);
                __MR_StdUniquePtr_SetIntLvalueRef(_1._UnderlyingPtr);
            }

            /// Generated from function `MR::StdUniquePtr::SetIntLvalueConstRef`.
            public static unsafe void SetIntLvalueConstRef(MR.CS.Std.Const_UniquePtr_Int _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_SetIntLvalueConstRef", ExactSpelling = true)]
                extern static void __MR_StdUniquePtr_SetIntLvalueConstRef(MR.CS.Std.Const_UniquePtr_Int._Underlying *_1);
                __MR_StdUniquePtr_SetIntLvalueConstRef(_1._UnderlyingPtr);
            }

            /// Generated from function `MR::StdUniquePtr::SetIntRvalueRef`.
            public static unsafe void SetIntRvalueRef(void *_1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_SetIntRvalueRef", ExactSpelling = true)]
                extern static void __MR_StdUniquePtr_SetIntRvalueRef(void *_1);
                __MR_StdUniquePtr_SetIntRvalueRef(_1);
            }

            /// Generated from function `MR::StdUniquePtr::SetIntRvalueConstRef`.
            public static unsafe void SetIntRvalueConstRef(void *_1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_SetIntRvalueConstRef", ExactSpelling = true)]
                extern static void __MR_StdUniquePtr_SetIntRvalueConstRef(void *_1);
                __MR_StdUniquePtr_SetIntRvalueConstRef(_1);
            }

            /// Generated from function `MR::StdUniquePtr::GetIntArr`.
            public static unsafe void *GetIntArr()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_GetIntArr", ExactSpelling = true)]
                extern static void *__MR_StdUniquePtr_GetIntArr();
                return __MR_StdUniquePtr_GetIntArr();
            }

            /// Generated from function `MR::StdUniquePtr::SetIntArr`.
            public static unsafe void SetIntArr(void *_1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_SetIntArr", ExactSpelling = true)]
                extern static void __MR_StdUniquePtr_SetIntArr(void *_1);
                __MR_StdUniquePtr_SetIntArr(_1);
            }

            /// Generated from function `MR::StdUniquePtr::SetIntArrDefTrivial`.
            public static unsafe void SetIntArrDefTrivial(void *_1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_SetIntArrDefTrivial", ExactSpelling = true)]
                extern static void __MR_StdUniquePtr_SetIntArrDefTrivial(void *_1);
                __MR_StdUniquePtr_SetIntArrDefTrivial(_1);
            }

            /// Generated from function `MR::StdUniquePtr::SetIntArrDef`.
            /// Parameter `_1` defaults to `std::make_unique<int[]>(42)`.
            public static unsafe void SetIntArrDef(void **_1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_SetIntArrDef", ExactSpelling = true)]
                extern static void __MR_StdUniquePtr_SetIntArrDef(void *_1);
                __MR_StdUniquePtr_SetIntArrDef(_1);
            }

            /// Generated from function `MR::StdUniquePtr::GetClass`.
            public static unsafe void *GetClass()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_GetClass", ExactSpelling = true)]
                extern static void *__MR_StdUniquePtr_GetClass();
                return __MR_StdUniquePtr_GetClass();
            }

            /// Generated from function `MR::StdUniquePtr::SetClass`.
            public static unsafe void SetClass(void *_1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_SetClass", ExactSpelling = true)]
                extern static void __MR_StdUniquePtr_SetClass(void *_1);
                __MR_StdUniquePtr_SetClass(_1);
            }

            /// Generated from function `MR::StdUniquePtr::SetClassConstRef`.
            public static unsafe void SetClassConstRef(MR.CS.Std.Const_UniquePtr_MRStdUniquePtrA _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_SetClassConstRef", ExactSpelling = true)]
                extern static void __MR_StdUniquePtr_SetClassConstRef(MR.CS.Std.Const_UniquePtr_MRStdUniquePtrA._Underlying *_1);
                __MR_StdUniquePtr_SetClassConstRef(_1._UnderlyingPtr);
            }

            /// Generated from function `MR::StdUniquePtr::SetClassDefTrivial`.
            public static unsafe void SetClassDefTrivial(void *_1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_SetClassDefTrivial", ExactSpelling = true)]
                extern static void __MR_StdUniquePtr_SetClassDefTrivial(void *_1);
                __MR_StdUniquePtr_SetClassDefTrivial(_1);
            }

            /// Generated from function `MR::StdUniquePtr::SetClassDef`.
            /// Parameter `_1` defaults to `std::make_unique<MR::StdUniquePtr::A>(MR::StdUniquePtr::A{})`.
            public static unsafe void SetClassDef(void **_1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_SetClassDef", ExactSpelling = true)]
                extern static void __MR_StdUniquePtr_SetClassDef(void *_1);
                __MR_StdUniquePtr_SetClassDef(_1);
            }

            /// Generated from function `MR::StdUniquePtr::SetClassLvalueRef`.
            public static unsafe void SetClassLvalueRef(MR.CS.Std.UniquePtr_MRStdUniquePtrA _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_SetClassLvalueRef", ExactSpelling = true)]
                extern static void __MR_StdUniquePtr_SetClassLvalueRef(MR.CS.Std.UniquePtr_MRStdUniquePtrA._Underlying *_1);
                __MR_StdUniquePtr_SetClassLvalueRef(_1._UnderlyingPtr);
            }

            /// Generated from function `MR::StdUniquePtr::SetClassLvalueConstRef`.
            public static unsafe void SetClassLvalueConstRef(MR.CS.Std.Const_UniquePtr_MRStdUniquePtrA _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_SetClassLvalueConstRef", ExactSpelling = true)]
                extern static void __MR_StdUniquePtr_SetClassLvalueConstRef(MR.CS.Std.Const_UniquePtr_MRStdUniquePtrA._Underlying *_1);
                __MR_StdUniquePtr_SetClassLvalueConstRef(_1._UnderlyingPtr);
            }

            /// Generated from function `MR::StdUniquePtr::SetClassRvalueRef`.
            public static unsafe void SetClassRvalueRef(void *_1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_SetClassRvalueRef", ExactSpelling = true)]
                extern static void __MR_StdUniquePtr_SetClassRvalueRef(void *_1);
                __MR_StdUniquePtr_SetClassRvalueRef(_1);
            }

            /// Generated from function `MR::StdUniquePtr::SetClassRvalueConstRef`.
            public static unsafe void SetClassRvalueConstRef(void *_1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_SetClassRvalueConstRef", ExactSpelling = true)]
                extern static void __MR_StdUniquePtr_SetClassRvalueConstRef(void *_1);
                __MR_StdUniquePtr_SetClassRvalueConstRef(_1);
            }

            /// Generated from function `MR::StdUniquePtr::GetClassArr`.
            public static unsafe void *GetClassArr()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_GetClassArr", ExactSpelling = true)]
                extern static void *__MR_StdUniquePtr_GetClassArr();
                return __MR_StdUniquePtr_GetClassArr();
            }

            /// Generated from function `MR::StdUniquePtr::SetClassArr`.
            public static unsafe void SetClassArr(void *_1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_SetClassArr", ExactSpelling = true)]
                extern static void __MR_StdUniquePtr_SetClassArr(void *_1);
                __MR_StdUniquePtr_SetClassArr(_1);
            }

            /// Generated from function `MR::StdUniquePtr::SetClassArrDefTrivial`.
            public static unsafe void SetClassArrDefTrivial(void *_1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_SetClassArrDefTrivial", ExactSpelling = true)]
                extern static void __MR_StdUniquePtr_SetClassArrDefTrivial(void *_1);
                __MR_StdUniquePtr_SetClassArrDefTrivial(_1);
            }

            /// Generated from function `MR::StdUniquePtr::SetClassArrDef`.
            /// Parameter `_1` defaults to `std::make_unique<MR::StdUniquePtr::A[]>(42)`.
            public static unsafe void SetClassArrDef(void **_1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_SetClassArrDef", ExactSpelling = true)]
                extern static void __MR_StdUniquePtr_SetClassArrDef(void *_1);
                __MR_StdUniquePtr_SetClassArrDef(_1);
            }

            // Try const element types:
            /// Generated from function `MR::StdUniquePtr::GetConstInt`.
            public static unsafe void *GetConstInt()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_GetConstInt", ExactSpelling = true)]
                extern static void *__MR_StdUniquePtr_GetConstInt();
                return __MR_StdUniquePtr_GetConstInt();
            }

            /// Generated from function `MR::StdUniquePtr::GetConstIntArr`.
            public static unsafe void *GetConstIntArr()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_GetConstIntArr", ExactSpelling = true)]
                extern static void *__MR_StdUniquePtr_GetConstIntArr();
                return __MR_StdUniquePtr_GetConstIntArr();
            }

            /// Generated from function `MR::StdUniquePtr::GetConstClass`.
            public static unsafe void *GetConstClass()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_GetConstClass", ExactSpelling = true)]
                extern static void *__MR_StdUniquePtr_GetConstClass();
                return __MR_StdUniquePtr_GetConstClass();
            }

            /// Generated from function `MR::StdUniquePtr::GetConstClassArr`.
            public static unsafe void *GetConstClassArr()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_GetConstClassArr", ExactSpelling = true)]
                extern static void *__MR_StdUniquePtr_GetConstClassArr();
                return __MR_StdUniquePtr_GetConstClassArr();
            }

            // Here `std::unique_ptr<float>` never gets emitted as an actual type (since we don't have non-null default arguments), so its header should not be emitted.
            /// Generated from function `MR::StdUniquePtr::GetFloat`.
            public static unsafe void *GetFloat()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_GetFloat", ExactSpelling = true)]
                extern static void *__MR_StdUniquePtr_GetFloat();
                return __MR_StdUniquePtr_GetFloat();
            }

            /// Generated from function `MR::StdUniquePtr::SetFloat`.
            public static unsafe void SetFloat(void *_1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_SetFloat", ExactSpelling = true)]
                extern static void __MR_StdUniquePtr_SetFloat(void *_1);
                __MR_StdUniquePtr_SetFloat(_1);
            }

            /// Generated from function `MR::StdUniquePtr::SetFloatDefTrivial`.
            public static unsafe void SetFloatDefTrivial(void *_1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdUniquePtr_SetFloatDefTrivial", ExactSpelling = true)]
                extern static void __MR_StdUniquePtr_SetFloatDefTrivial(void *_1);
                __MR_StdUniquePtr_SetFloatDefTrivial(_1);
            }
        }
    }
}
