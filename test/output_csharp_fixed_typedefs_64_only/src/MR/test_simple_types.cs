public static partial class MR
{
    public static partial class CS
    {
        public static partial class TestSimpleTypes
        {
            public enum E : int
            {
                E1 = 0,
            }

            // This enum has a custom underlying type.
            public enum E2 : short
            {
                E1 = 0,
            }

            // This enum has no constants.
            public enum E3 : int
            {
            }

            // This has multiple words in the underlying type. This has caused a bug at one point...
            public enum E4 : uint
            {
            }

            // This will use a custom typedef for the underlying type, if that's enabled!
            public enum E5 : long
            {
            }

            // Class templates.
            /// Generated from class `MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t>`.
            /// This is the const half of the class.
            public class Const_ClassTemplate_MRCUint64T : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_ClassTemplate_MRCUint64T(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_ClassTemplate_uint64_t_Destroy", ExactSpelling = true)]
                    extern static void __MR_TestSimpleTypes_ClassTemplate_uint64_t_Destroy(_Underlying *_this);
                    __MR_TestSimpleTypes_ClassTemplate_uint64_t_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_ClassTemplate_MRCUint64T() {Dispose(false);}

                public static unsafe ref ulong Var_MRCUint64T
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_ClassTemplate_uint64_t_GetMutable_var_uint64_t", ExactSpelling = true)]
                        extern static ulong *__MR_TestSimpleTypes_ClassTemplate_uint64_t_GetMutable_var_uint64_t();
                        return ref *__MR_TestSimpleTypes_ClassTemplate_uint64_t_GetMutable_var_uint64_t();
                    }
                }

                /// Generated from constructor `MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t>::ClassTemplate`.
                public unsafe Const_ClassTemplate_MRCUint64T(MR.CS.TestSimpleTypes.Const_ClassTemplate_MRCUint64T _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_ClassTemplate_uint64_t_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.TestSimpleTypes.ClassTemplate_MRCUint64T._Underlying *__MR_TestSimpleTypes_ClassTemplate_uint64_t_ConstructFromAnother(MR.CS.TestSimpleTypes.ClassTemplate_MRCUint64T._Underlying *_other);
                    _UnderlyingPtr = __MR_TestSimpleTypes_ClassTemplate_uint64_t_ConstructFromAnother(_other._UnderlyingPtr);
                }

                // Constructors.
                /// Generated from constructor `MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t>::ClassTemplate`.
                public unsafe Const_ClassTemplate_MRCUint64T(ulong _1) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_ClassTemplate_uint64_t_Construct_uint64_t", ExactSpelling = true)]
                    extern static MR.CS.TestSimpleTypes.ClassTemplate_MRCUint64T._Underlying *__MR_TestSimpleTypes_ClassTemplate_uint64_t_Construct_uint64_t(ulong _1);
                    _UnderlyingPtr = __MR_TestSimpleTypes_ClassTemplate_uint64_t_Construct_uint64_t(_1);
                }

                // Constructors.
                /// Generated from constructor `MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t>::ClassTemplate`.
                public static unsafe implicit operator Const_ClassTemplate_MRCUint64T(ulong _1) {return new(_1);}

                // Constructors.
                /// Generated from constructor `MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t>::ClassTemplate`.
                public unsafe Const_ClassTemplate_MRCUint64T(int _1) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_ClassTemplate_uint64_t_Construct_int", ExactSpelling = true)]
                    extern static MR.CS.TestSimpleTypes.ClassTemplate_MRCUint64T._Underlying *__MR_TestSimpleTypes_ClassTemplate_uint64_t_Construct_int(int _1);
                    _UnderlyingPtr = __MR_TestSimpleTypes_ClassTemplate_uint64_t_Construct_int(_1);
                }

                // Constructors.
                /// Generated from constructor `MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t>::ClassTemplate`.
                public static unsafe implicit operator Const_ClassTemplate_MRCUint64T(int _1) {return new(_1);}

                // Enums.
                public enum Enum : int
                {
                }
            }

            // Class templates.
            /// Generated from class `MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t>`.
            /// This is the non-const half of the class.
            public class ClassTemplate_MRCUint64T : Const_ClassTemplate_MRCUint64T
            {
                internal unsafe ClassTemplate_MRCUint64T(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Generated from constructor `MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t>::ClassTemplate`.
                public unsafe ClassTemplate_MRCUint64T(MR.CS.TestSimpleTypes.Const_ClassTemplate_MRCUint64T _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_ClassTemplate_uint64_t_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.TestSimpleTypes.ClassTemplate_MRCUint64T._Underlying *__MR_TestSimpleTypes_ClassTemplate_uint64_t_ConstructFromAnother(MR.CS.TestSimpleTypes.ClassTemplate_MRCUint64T._Underlying *_other);
                    _UnderlyingPtr = __MR_TestSimpleTypes_ClassTemplate_uint64_t_ConstructFromAnother(_other._UnderlyingPtr);
                }

                // Constructors.
                /// Generated from constructor `MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t>::ClassTemplate`.
                public unsafe ClassTemplate_MRCUint64T(ulong _1) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_ClassTemplate_uint64_t_Construct_uint64_t", ExactSpelling = true)]
                    extern static MR.CS.TestSimpleTypes.ClassTemplate_MRCUint64T._Underlying *__MR_TestSimpleTypes_ClassTemplate_uint64_t_Construct_uint64_t(ulong _1);
                    _UnderlyingPtr = __MR_TestSimpleTypes_ClassTemplate_uint64_t_Construct_uint64_t(_1);
                }

                // Constructors.
                /// Generated from constructor `MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t>::ClassTemplate`.
                public static unsafe implicit operator ClassTemplate_MRCUint64T(ulong _1) {return new(_1);}

                // Constructors.
                /// Generated from constructor `MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t>::ClassTemplate`.
                public unsafe ClassTemplate_MRCUint64T(int _1) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_ClassTemplate_uint64_t_Construct_int", ExactSpelling = true)]
                    extern static MR.CS.TestSimpleTypes.ClassTemplate_MRCUint64T._Underlying *__MR_TestSimpleTypes_ClassTemplate_uint64_t_Construct_int(int _1);
                    _UnderlyingPtr = __MR_TestSimpleTypes_ClassTemplate_uint64_t_Construct_int(_1);
                }

                // Constructors.
                /// Generated from constructor `MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t>::ClassTemplate`.
                public static unsafe implicit operator ClassTemplate_MRCUint64T(int _1) {return new(_1);}

                /// Generated from method `MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t>::operator=`.
                public unsafe MR.CS.TestSimpleTypes.ClassTemplate_MRCUint64T assign(MR.CS.TestSimpleTypes.Const_ClassTemplate_MRCUint64T _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_ClassTemplate_uint64_t_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.TestSimpleTypes.ClassTemplate_MRCUint64T._Underlying *__MR_TestSimpleTypes_ClassTemplate_uint64_t_AssignFromAnother(_Underlying *_this, MR.CS.TestSimpleTypes.ClassTemplate_MRCUint64T._Underlying *_other);
                    return new(__MR_TestSimpleTypes_ClassTemplate_uint64_t_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }

                // Methods.
                /// Generated from method `MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t>::foo<MR_C_uint64_t>`.
                public unsafe void foo_MRCUint64T()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_ClassTemplate_uint64_t_foo_uint64_t", ExactSpelling = true)]
                    extern static void __MR_TestSimpleTypes_ClassTemplate_uint64_t_foo_uint64_t(_Underlying *_this);
                    __MR_TestSimpleTypes_ClassTemplate_uint64_t_foo_uint64_t(_UnderlyingPtr);
                }

                // Methods.
                /// Generated from method `MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t>::foo<int>`.
                public unsafe void foo_Int()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_ClassTemplate_uint64_t_foo_int", ExactSpelling = true)]
                    extern static void __MR_TestSimpleTypes_ClassTemplate_uint64_t_foo_int(_Underlying *_this);
                    __MR_TestSimpleTypes_ClassTemplate_uint64_t_foo_int(_UnderlyingPtr);
                }
            }

            /// This is used for optional parameters of class `ClassTemplate_MRCUint64T` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_ClassTemplate_MRCUint64T`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `ClassTemplate_MRCUint64T`/`Const_ClassTemplate_MRCUint64T` directly.
            public class _InOptMut_ClassTemplate_MRCUint64T
            {
                public ClassTemplate_MRCUint64T? Opt;

                public _InOptMut_ClassTemplate_MRCUint64T() {}
                public _InOptMut_ClassTemplate_MRCUint64T(ClassTemplate_MRCUint64T value) {Opt = value;}
                public static implicit operator _InOptMut_ClassTemplate_MRCUint64T(ClassTemplate_MRCUint64T value) {return new(value);}
            }

            /// This is used for optional parameters of class `ClassTemplate_MRCUint64T` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_ClassTemplate_MRCUint64T`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `ClassTemplate_MRCUint64T`/`Const_ClassTemplate_MRCUint64T` to pass it to the function.
            public class _InOptConst_ClassTemplate_MRCUint64T
            {
                public Const_ClassTemplate_MRCUint64T? Opt;

                public _InOptConst_ClassTemplate_MRCUint64T() {}
                public _InOptConst_ClassTemplate_MRCUint64T(Const_ClassTemplate_MRCUint64T value) {Opt = value;}
                public static implicit operator _InOptConst_ClassTemplate_MRCUint64T(Const_ClassTemplate_MRCUint64T value) {return new(value);}

                // Constructors.
                /// Generated from constructor `MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t>::ClassTemplate`.
                public static unsafe implicit operator _InOptConst_ClassTemplate_MRCUint64T(ulong _1) {return new Const_ClassTemplate_MRCUint64T(_1);}

                // Constructors.
                /// Generated from constructor `MR::TestSimpleTypes::ClassTemplate<MR_C_uint64_t>::ClassTemplate`.
                public static unsafe implicit operator _InOptConst_ClassTemplate_MRCUint64T(int _1) {return new Const_ClassTemplate_MRCUint64T(_1);}
            }

            /// Generated from function `MR::TestSimpleTypes::GetInt`.
            public static int getInt()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_GetInt", ExactSpelling = true)]
                extern static int __MR_TestSimpleTypes_GetInt();
                return __MR_TestSimpleTypes_GetInt();
            }

            /// Generated from function `MR::TestSimpleTypes::SetInt`.
            public static void setInt(int _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_SetInt", ExactSpelling = true)]
                extern static void __MR_TestSimpleTypes_SetInt(int _1);
                __MR_TestSimpleTypes_SetInt(_1);
            }

            /// Generated from function `MR::TestSimpleTypes::SetIntDef`.
            /// Parameter `_1` defaults to `42`.
            public static unsafe void setIntDef(int? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_SetIntDef", ExactSpelling = true)]
                extern static void __MR_TestSimpleTypes_SetIntDef(int *_1);
                int __deref__1 = _1.GetValueOrDefault();
                __MR_TestSimpleTypes_SetIntDef(_1.HasValue ? &__deref__1 : null);
            }

            /// Generated from function `MR::TestSimpleTypes::GetIntPtr`.
            public static unsafe MR.CS.Misc.Ref<int>? getIntPtr()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_GetIntPtr", ExactSpelling = true)]
                extern static int *__MR_TestSimpleTypes_GetIntPtr();
                var __ret = __MR_TestSimpleTypes_GetIntPtr();
                return __ret is not null ? new MR.CS.Misc.Ref<int>(__ret) : null;
            }

            /// Generated from function `MR::TestSimpleTypes::SetIntPtr`.
            public static unsafe void setIntPtr(MR.CS.Misc.InOut<int>? _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_SetIntPtr", ExactSpelling = true)]
                extern static void __MR_TestSimpleTypes_SetIntPtr(int *_1);
                int __value__1 = _1 is not null ? _1.Value : default(int);
                __MR_TestSimpleTypes_SetIntPtr(_1 is not null ? &__value__1 : null);
                if (_1 is not null) _1.Value = __value__1;
            }

            /// Generated from function `MR::TestSimpleTypes::SetIntPtrDef`.
            /// Parameter `_1` defaults to `&global_int`.
            public static unsafe void setIntPtrDef(MR.CS.Misc._InOutOpt<int>? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_SetIntPtrDef", ExactSpelling = true)]
                extern static void __MR_TestSimpleTypes_SetIntPtrDef(int **_1);
                int __value__1 = _1 is not null && _1.Opt is not null ? _1.Opt.Value : default(int);
                int *__valueptr__1 = _1 is not null && _1.Opt is not null ? &__value__1 : null;
                __MR_TestSimpleTypes_SetIntPtrDef(_1 is not null ? &__valueptr__1 : null);
                if (_1 is not null && _1.Opt is not null) _1.Opt.Value = __value__1;
            }

            /// Generated from function `MR::TestSimpleTypes::SetIntPtrDefNull`.
            public static unsafe void setIntPtrDefNull(MR.CS.Misc.InOut<int>? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_SetIntPtrDefNull", ExactSpelling = true)]
                extern static void __MR_TestSimpleTypes_SetIntPtrDefNull(int *_1);
                int __value__1 = _1 is not null ? _1.Value : default(int);
                __MR_TestSimpleTypes_SetIntPtrDefNull(_1 is not null ? &__value__1 : null);
                if (_1 is not null) _1.Value = __value__1;
            }

            /// Generated from function `MR::TestSimpleTypes::GetIntRef`.
            public static unsafe ref int getIntRef()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_GetIntRef", ExactSpelling = true)]
                extern static int *__MR_TestSimpleTypes_GetIntRef();
                return ref *__MR_TestSimpleTypes_GetIntRef();
            }

            /// Generated from function `MR::TestSimpleTypes::SetIntRef`.
            public static unsafe void setIntRef(ref int _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_SetIntRef", ExactSpelling = true)]
                extern static void __MR_TestSimpleTypes_SetIntRef(int *_1);
                fixed (int *__ptr__1 = &_1)
                {
                    __MR_TestSimpleTypes_SetIntRef(__ptr__1);
                }
            }

            /// Generated from function `MR::TestSimpleTypes::SetIntRefDef`.
            /// Parameter `_1` defaults to `global_int`.
            public static unsafe void setIntRefDef(MR.CS.Misc.InOut<int>? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_SetIntRefDef", ExactSpelling = true)]
                extern static void __MR_TestSimpleTypes_SetIntRefDef(int *_1);
                int __value__1 = _1 is not null ? _1.Value : default(int);
                __MR_TestSimpleTypes_SetIntRefDef(_1 is not null ? &__value__1 : null);
                if (_1 is not null) _1.Value = __value__1;
            }

            /// Generated from function `MR::TestSimpleTypes::GetVoidPtr`.
            /// Returns a mutable pointer.
            public static unsafe void *getVoidPtr()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_GetVoidPtr", ExactSpelling = true)]
                extern static void *__MR_TestSimpleTypes_GetVoidPtr();
                return __MR_TestSimpleTypes_GetVoidPtr();
            }

            /// Generated from function `MR::TestSimpleTypes::SetVoidPtr`.
            /// Parameter `_1` is a mutable pointer.
            public static unsafe void setVoidPtr(void *_1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_SetVoidPtr", ExactSpelling = true)]
                extern static void __MR_TestSimpleTypes_SetVoidPtr(void *_1);
                __MR_TestSimpleTypes_SetVoidPtr(_1);
            }

            /// Generated from function `MR::TestSimpleTypes::SetVoidPtrDef`.
            /// Parameter `_1` defaults to `&global_int`.
            /// Parameter `_1` is a mutable pointer.
            public static unsafe void setVoidPtrDef(void **_1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_SetVoidPtrDef", ExactSpelling = true)]
                extern static void __MR_TestSimpleTypes_SetVoidPtrDef(void **_1);
                __MR_TestSimpleTypes_SetVoidPtrDef(_1);
            }

            /// Generated from function `MR::TestSimpleTypes::SetVoidPtrDefNull`.
            /// Parameter `_1` is a mutable pointer.
            public static unsafe void setVoidPtrDefNull(void *_1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_SetVoidPtrDefNull", ExactSpelling = true)]
                extern static void __MR_TestSimpleTypes_SetVoidPtrDefNull(void *_1);
                __MR_TestSimpleTypes_SetVoidPtrDefNull(_1);
            }

            /// Generated from function `MR::TestSimpleTypes::GetConstVoidPtr`.
            /// Returns a read-only pointer.
            public static unsafe void *getConstVoidPtr()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_GetConstVoidPtr", ExactSpelling = true)]
                extern static void *__MR_TestSimpleTypes_GetConstVoidPtr();
                return __MR_TestSimpleTypes_GetConstVoidPtr();
            }

            /// Generated from function `MR::TestSimpleTypes::SetConstVoidPtr`.
            /// Parameter `_1` is a read-only pointer.
            public static unsafe void setConstVoidPtr(void *_1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_SetConstVoidPtr", ExactSpelling = true)]
                extern static void __MR_TestSimpleTypes_SetConstVoidPtr(void *_1);
                __MR_TestSimpleTypes_SetConstVoidPtr(_1);
            }

            /// Generated from function `MR::TestSimpleTypes::SetConstVoidPtrDef`.
            /// Parameter `_1` defaults to `&global_int`.
            /// Parameter `_1` is a read-only pointer.
            public static unsafe void setConstVoidPtrDef(void **_1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_SetConstVoidPtrDef", ExactSpelling = true)]
                extern static void __MR_TestSimpleTypes_SetConstVoidPtrDef(void **_1);
                __MR_TestSimpleTypes_SetConstVoidPtrDef(_1);
            }

            /// Generated from function `MR::TestSimpleTypes::SetConstVoidPtrDefNull`.
            /// Parameter `_1` is a read-only pointer.
            public static unsafe void setConstVoidPtrDefNull(void *_1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_SetConstVoidPtrDefNull", ExactSpelling = true)]
                extern static void __MR_TestSimpleTypes_SetConstVoidPtrDefNull(void *_1);
                __MR_TestSimpleTypes_SetConstVoidPtrDefNull(_1);
            }

            /// Generated from function `MR::TestSimpleTypes::GetVoidPtrPtr`.
            public static unsafe void **getVoidPtrPtr()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_GetVoidPtrPtr", ExactSpelling = true)]
                extern static void **__MR_TestSimpleTypes_GetVoidPtrPtr();
                return __MR_TestSimpleTypes_GetVoidPtrPtr();
            }

            /// Generated from function `MR::TestSimpleTypes::SetVoidPtrPtr`.
            public static unsafe void setVoidPtrPtr(void **_1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_SetVoidPtrPtr", ExactSpelling = true)]
                extern static void __MR_TestSimpleTypes_SetVoidPtrPtr(void **_1);
                __MR_TestSimpleTypes_SetVoidPtrPtr(_1);
            }

            /// Generated from function `MR::TestSimpleTypes::SetVoidPtrPtrDef`.
            /// Parameter `_1` defaults to `&global_void_ptr`.
            public static unsafe void setVoidPtrPtrDef(void ***_1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_SetVoidPtrPtrDef", ExactSpelling = true)]
                extern static void __MR_TestSimpleTypes_SetVoidPtrPtrDef(void ***_1);
                __MR_TestSimpleTypes_SetVoidPtrPtrDef(_1);
            }

            /// Generated from function `MR::TestSimpleTypes::SetVoidPtrPtrDefNull`.
            public static unsafe void setVoidPtrPtrDefNull(void **_1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_SetVoidPtrPtrDefNull", ExactSpelling = true)]
                extern static void __MR_TestSimpleTypes_SetVoidPtrPtrDefNull(void **_1);
                __MR_TestSimpleTypes_SetVoidPtrPtrDefNull(_1);
            }

            /// Generated from function `MR::TestSimpleTypes::GetEnum`.
            public static int getEnum()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_GetEnum", ExactSpelling = true)]
                extern static int __MR_TestSimpleTypes_GetEnum();
                return __MR_TestSimpleTypes_GetEnum();
            }

            /// Generated from function `MR::TestSimpleTypes::SetEnum`.
            public static void setEnum(MR.CS.TestSimpleTypes.E _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_SetEnum", ExactSpelling = true)]
                extern static void __MR_TestSimpleTypes_SetEnum(MR.CS.TestSimpleTypes.E _1);
                __MR_TestSimpleTypes_SetEnum(_1);
            }

            /// Generated from function `MR::TestSimpleTypes::SetEnumDef`.
            /// Parameter `_1` defaults to `E::e1`.
            public static unsafe void setEnumDef(MR.CS.TestSimpleTypes.E? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_SetEnumDef", ExactSpelling = true)]
                extern static void __MR_TestSimpleTypes_SetEnumDef(MR.CS.TestSimpleTypes.E *_1);
                MR.CS.TestSimpleTypes.E __deref__1 = _1.GetValueOrDefault();
                __MR_TestSimpleTypes_SetEnumDef(_1.HasValue ? &__deref__1 : null);
            }

            /// Generated from function `MR::TestSimpleTypes::GetEnumPtr`.
            public static unsafe MR.CS.Misc.Ref<MR.CS.TestSimpleTypes.E>? getEnumPtr()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_GetEnumPtr", ExactSpelling = true)]
                extern static MR.CS.TestSimpleTypes.E *__MR_TestSimpleTypes_GetEnumPtr();
                var __ret = __MR_TestSimpleTypes_GetEnumPtr();
                return __ret is not null ? new MR.CS.Misc.Ref<MR.CS.TestSimpleTypes.E>(__ret) : null;
            }

            /// Generated from function `MR::TestSimpleTypes::SetEnumPtr`.
            public static unsafe void setEnumPtr(MR.CS.Misc.InOut<MR.CS.TestSimpleTypes.E>? _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_SetEnumPtr", ExactSpelling = true)]
                extern static void __MR_TestSimpleTypes_SetEnumPtr(MR.CS.TestSimpleTypes.E *_1);
                MR.CS.TestSimpleTypes.E __value__1 = _1 is not null ? _1.Value : default(MR.CS.TestSimpleTypes.E);
                __MR_TestSimpleTypes_SetEnumPtr(_1 is not null ? &__value__1 : null);
                if (_1 is not null) _1.Value = __value__1;
            }

            /// Generated from function `MR::TestSimpleTypes::SetEnumPtrDef`.
            /// Parameter `_1` defaults to `&global_enum`.
            public static unsafe void setEnumPtrDef(MR.CS.Misc._InOutOpt<MR.CS.TestSimpleTypes.E>? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_SetEnumPtrDef", ExactSpelling = true)]
                extern static void __MR_TestSimpleTypes_SetEnumPtrDef(MR.CS.TestSimpleTypes.E **_1);
                MR.CS.TestSimpleTypes.E __value__1 = _1 is not null && _1.Opt is not null ? _1.Opt.Value : default(MR.CS.TestSimpleTypes.E);
                MR.CS.TestSimpleTypes.E *__valueptr__1 = _1 is not null && _1.Opt is not null ? &__value__1 : null;
                __MR_TestSimpleTypes_SetEnumPtrDef(_1 is not null ? &__valueptr__1 : null);
                if (_1 is not null && _1.Opt is not null) _1.Opt.Value = __value__1;
            }

            /// Generated from function `MR::TestSimpleTypes::SetEnumPtrDefNull`.
            public static unsafe void setEnumPtrDefNull(MR.CS.Misc.InOut<MR.CS.TestSimpleTypes.E>? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_SetEnumPtrDefNull", ExactSpelling = true)]
                extern static void __MR_TestSimpleTypes_SetEnumPtrDefNull(MR.CS.TestSimpleTypes.E *_1);
                MR.CS.TestSimpleTypes.E __value__1 = _1 is not null ? _1.Value : default(MR.CS.TestSimpleTypes.E);
                __MR_TestSimpleTypes_SetEnumPtrDefNull(_1 is not null ? &__value__1 : null);
                if (_1 is not null) _1.Value = __value__1;
            }

            /// Generated from function `MR::TestSimpleTypes::GetEnumRef`.
            public static unsafe ref MR.CS.TestSimpleTypes.E getEnumRef()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_GetEnumRef", ExactSpelling = true)]
                extern static MR.CS.TestSimpleTypes.E *__MR_TestSimpleTypes_GetEnumRef();
                return ref *__MR_TestSimpleTypes_GetEnumRef();
            }

            /// Generated from function `MR::TestSimpleTypes::SetEnumRef`.
            public static unsafe void setEnumRef(ref MR.CS.TestSimpleTypes.E _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_SetEnumRef", ExactSpelling = true)]
                extern static void __MR_TestSimpleTypes_SetEnumRef(MR.CS.TestSimpleTypes.E *_1);
                fixed (MR.CS.TestSimpleTypes.E *__ptr__1 = &_1)
                {
                    __MR_TestSimpleTypes_SetEnumRef(__ptr__1);
                }
            }

            /// Generated from function `MR::TestSimpleTypes::SetEnumRefDef`.
            /// Parameter `_1` defaults to `global_enum`.
            public static unsafe void setEnumRefDef(MR.CS.Misc.InOut<MR.CS.TestSimpleTypes.E>? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_SetEnumRefDef", ExactSpelling = true)]
                extern static void __MR_TestSimpleTypes_SetEnumRefDef(MR.CS.TestSimpleTypes.E *_1);
                MR.CS.TestSimpleTypes.E __value__1 = _1 is not null ? _1.Value : default(MR.CS.TestSimpleTypes.E);
                __MR_TestSimpleTypes_SetEnumRefDef(_1 is not null ? &__value__1 : null);
                if (_1 is not null) _1.Value = __value__1;
            }

            /// Generated from function `MR::TestSimpleTypes::GetEnum2`.
            public static int getEnum2()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_GetEnum2", ExactSpelling = true)]
                extern static int __MR_TestSimpleTypes_GetEnum2();
                return __MR_TestSimpleTypes_GetEnum2();
            }

            /// Generated from function `MR::TestSimpleTypes::SetEnum2`.
            public static void setEnum2(MR.CS.TestSimpleTypes.E2 _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_SetEnum2", ExactSpelling = true)]
                extern static void __MR_TestSimpleTypes_SetEnum2(MR.CS.TestSimpleTypes.E2 _1);
                __MR_TestSimpleTypes_SetEnum2(_1);
            }

            /// Generated from function `MR::TestSimpleTypes::SetEnum2Def`.
            /// Parameter `_1` defaults to `E2::e1`.
            public static unsafe void setEnum2Def(MR.CS.TestSimpleTypes.E2? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_SetEnum2Def", ExactSpelling = true)]
                extern static void __MR_TestSimpleTypes_SetEnum2Def(MR.CS.TestSimpleTypes.E2 *_1);
                MR.CS.TestSimpleTypes.E2 __deref__1 = _1.GetValueOrDefault();
                __MR_TestSimpleTypes_SetEnum2Def(_1.HasValue ? &__deref__1 : null);
            }

            /// Generated from function `MR::TestSimpleTypes::GetEnum2Ptr`.
            public static unsafe MR.CS.Misc.Ref<MR.CS.TestSimpleTypes.E2>? getEnum2Ptr()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_GetEnum2Ptr", ExactSpelling = true)]
                extern static MR.CS.TestSimpleTypes.E2 *__MR_TestSimpleTypes_GetEnum2Ptr();
                var __ret = __MR_TestSimpleTypes_GetEnum2Ptr();
                return __ret is not null ? new MR.CS.Misc.Ref<MR.CS.TestSimpleTypes.E2>(__ret) : null;
            }

            /// Generated from function `MR::TestSimpleTypes::SetEnum2Ptr`.
            public static unsafe void setEnum2Ptr(MR.CS.Misc.InOut<MR.CS.TestSimpleTypes.E2>? _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_SetEnum2Ptr", ExactSpelling = true)]
                extern static void __MR_TestSimpleTypes_SetEnum2Ptr(MR.CS.TestSimpleTypes.E2 *_1);
                MR.CS.TestSimpleTypes.E2 __value__1 = _1 is not null ? _1.Value : default(MR.CS.TestSimpleTypes.E2);
                __MR_TestSimpleTypes_SetEnum2Ptr(_1 is not null ? &__value__1 : null);
                if (_1 is not null) _1.Value = __value__1;
            }

            /// Generated from function `MR::TestSimpleTypes::SetEnum2PtrDef`.
            /// Parameter `_1` defaults to `&global_enum2`.
            public static unsafe void setEnum2PtrDef(MR.CS.Misc._InOutOpt<MR.CS.TestSimpleTypes.E2>? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_SetEnum2PtrDef", ExactSpelling = true)]
                extern static void __MR_TestSimpleTypes_SetEnum2PtrDef(MR.CS.TestSimpleTypes.E2 **_1);
                MR.CS.TestSimpleTypes.E2 __value__1 = _1 is not null && _1.Opt is not null ? _1.Opt.Value : default(MR.CS.TestSimpleTypes.E2);
                MR.CS.TestSimpleTypes.E2 *__valueptr__1 = _1 is not null && _1.Opt is not null ? &__value__1 : null;
                __MR_TestSimpleTypes_SetEnum2PtrDef(_1 is not null ? &__valueptr__1 : null);
                if (_1 is not null && _1.Opt is not null) _1.Opt.Value = __value__1;
            }

            /// Generated from function `MR::TestSimpleTypes::SetEnum2PtrDefNull`.
            public static unsafe void setEnum2PtrDefNull(MR.CS.Misc.InOut<MR.CS.TestSimpleTypes.E2>? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_SetEnum2PtrDefNull", ExactSpelling = true)]
                extern static void __MR_TestSimpleTypes_SetEnum2PtrDefNull(MR.CS.TestSimpleTypes.E2 *_1);
                MR.CS.TestSimpleTypes.E2 __value__1 = _1 is not null ? _1.Value : default(MR.CS.TestSimpleTypes.E2);
                __MR_TestSimpleTypes_SetEnum2PtrDefNull(_1 is not null ? &__value__1 : null);
                if (_1 is not null) _1.Value = __value__1;
            }

            /// Generated from function `MR::TestSimpleTypes::GetEnum2Ref`.
            public static unsafe ref MR.CS.TestSimpleTypes.E2 getEnum2Ref()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_GetEnum2Ref", ExactSpelling = true)]
                extern static MR.CS.TestSimpleTypes.E2 *__MR_TestSimpleTypes_GetEnum2Ref();
                return ref *__MR_TestSimpleTypes_GetEnum2Ref();
            }

            /// Generated from function `MR::TestSimpleTypes::SetEnum2Ref`.
            public static unsafe void setEnum2Ref(ref MR.CS.TestSimpleTypes.E2 _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_SetEnum2Ref", ExactSpelling = true)]
                extern static void __MR_TestSimpleTypes_SetEnum2Ref(MR.CS.TestSimpleTypes.E2 *_1);
                fixed (MR.CS.TestSimpleTypes.E2 *__ptr__1 = &_1)
                {
                    __MR_TestSimpleTypes_SetEnum2Ref(__ptr__1);
                }
            }

            /// Generated from function `MR::TestSimpleTypes::SetEnum2RefDef`.
            /// Parameter `_1` defaults to `global_enum2`.
            public static unsafe void setEnum2RefDef(MR.CS.Misc.InOut<MR.CS.TestSimpleTypes.E2>? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_SetEnum2RefDef", ExactSpelling = true)]
                extern static void __MR_TestSimpleTypes_SetEnum2RefDef(MR.CS.TestSimpleTypes.E2 *_1);
                MR.CS.TestSimpleTypes.E2 __value__1 = _1 is not null ? _1.Value : default(MR.CS.TestSimpleTypes.E2);
                __MR_TestSimpleTypes_SetEnum2RefDef(_1 is not null ? &__value__1 : null);
                if (_1 is not null) _1.Value = __value__1;
            }

            // Test all kinds of `char`.
            /// Generated from function `MR::TestSimpleTypes::CheckCharMaybeUnsigned`.
            public static unsafe void checkCharMaybeUnsigned(MR.CS.Misc.InOut<byte>? _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_CheckCharMaybeUnsigned", ExactSpelling = true)]
                extern static void __MR_TestSimpleTypes_CheckCharMaybeUnsigned(byte *_1);
                byte __value__1 = _1 is not null ? _1.Value : default(byte);
                __MR_TestSimpleTypes_CheckCharMaybeUnsigned(_1 is not null ? &__value__1 : null);
                if (_1 is not null) _1.Value = __value__1;
            }

            /// Generated from function `MR::TestSimpleTypes::CheckChar`.
            public static unsafe void checkChar(MR.CS.Misc.InOut<byte>? _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_CheckChar_unsigned_char_ptr", ExactSpelling = true)]
                extern static void __MR_TestSimpleTypes_CheckChar_unsigned_char_ptr(byte *_1);
                byte __value__1 = _1 is not null ? _1.Value : default(byte);
                __MR_TestSimpleTypes_CheckChar_unsigned_char_ptr(_1 is not null ? &__value__1 : null);
                if (_1 is not null) _1.Value = __value__1;
            }

            /// Generated from function `MR::TestSimpleTypes::CheckChar`.
            public static unsafe void checkChar(MR.CS.Misc.InOut<sbyte>? _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_CheckChar_signed_char_ptr", ExactSpelling = true)]
                extern static void __MR_TestSimpleTypes_CheckChar_signed_char_ptr(sbyte *_1);
                sbyte __value__1 = _1 is not null ? _1.Value : default(sbyte);
                __MR_TestSimpleTypes_CheckChar_signed_char_ptr(_1 is not null ? &__value__1 : null);
                if (_1 is not null) _1.Value = __value__1;
            }

            /// Generated from function `MR::TestSimpleTypes::blah`.
            public static ulong blah(ulong x)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_blah_uint64_t", ExactSpelling = true)]
                extern static ulong __MR_TestSimpleTypes_blah_uint64_t(ulong x);
                return __MR_TestSimpleTypes_blah_uint64_t(x);
            }

            /// Generated from function `MR::TestSimpleTypes::blah`.
            public static long blah(long x)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_blah_int64_t", ExactSpelling = true)]
                extern static long __MR_TestSimpleTypes_blah_int64_t(long x);
                return __MR_TestSimpleTypes_blah_int64_t(x);
            }

            // Function templates.
            /// Generated from function `MR::TestSimpleTypes::FuncTemplate<MR_C_uint64_t>`.
            public static ulong funcTemplate(ulong _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_FuncTemplate_uint64_t", ExactSpelling = true)]
                extern static ulong __MR_TestSimpleTypes_FuncTemplate_uint64_t(ulong _1);
                return __MR_TestSimpleTypes_FuncTemplate_uint64_t(_1);
            }

            // Function templates.
            /// Generated from function `MR::TestSimpleTypes::FuncTemplate<int>`.
            public static int funcTemplate(int _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSimpleTypes_FuncTemplate_int", ExactSpelling = true)]
                extern static int __MR_TestSimpleTypes_FuncTemplate_int(int _1);
                return __MR_TestSimpleTypes_FuncTemplate_int(_1);
            }
        }
    }
}
