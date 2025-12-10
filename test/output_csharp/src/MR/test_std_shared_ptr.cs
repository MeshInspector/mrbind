public static partial class MR
{
    public static partial class CS
    {
        public static partial class StdSharedPtr
        {
            // Now with a class:
            /// Generated from class `MR::StdSharedPtr::A`.
            /// This is the const half of the class.
            public class Const_A : MR.CS.Misc.SharedObject, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.
                internal struct _UnderlyingShared; // Represents the underlying shared pointer C++ type.

                internal unsafe _UnderlyingShared *_UnderlyingSharedPtr;
                internal unsafe _Underlying *_UnderlyingPtr
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_StdSharedPtr_A_Get", ExactSpelling = true)]
                        extern static _Underlying *__MR_C_std_shared_ptr_MR_StdSharedPtr_A_Get(_UnderlyingShared *_this);
                        return __MR_C_std_shared_ptr_MR_StdSharedPtr_A_Get(_UnderlyingSharedPtr);
                    }
                }

                /// Check if the underlying shared pointer is owning or not.
                public override bool _IsOwning
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_StdSharedPtr_A_UseCount", ExactSpelling = true)]
                        extern static int __MR_C_std_shared_ptr_MR_StdSharedPtr_A_UseCount();
                        return __MR_C_std_shared_ptr_MR_StdSharedPtr_A_UseCount() > 0;
                    }
                }

                /// Clones the underlying shared pointer. Returns an owning pointer to shared pointer (which itself isn't necessarily owning).
                internal unsafe _UnderlyingShared *_CloneUnderlyingSharedPtr()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_StdSharedPtr_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static _UnderlyingShared *__MR_C_std_shared_ptr_MR_StdSharedPtr_A_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, _UnderlyingShared *other);
                    return __MR_C_std_shared_ptr_MR_StdSharedPtr_A_ConstructFromAnother(MR.CS.Misc._PassBy.copy, _UnderlyingSharedPtr);
                }

                internal unsafe Const_A(_Underlying *ptr, bool is_owning) : base(true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_StdSharedPtr_A_Construct", ExactSpelling = true)]
                    extern static _UnderlyingShared *__MR_C_std_shared_ptr_MR_StdSharedPtr_A_Construct(_Underlying *other);
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_StdSharedPtr_A_ConstructNonOwning", ExactSpelling = true)]
                    extern static _UnderlyingShared *__MR_C_std_shared_ptr_MR_StdSharedPtr_A_ConstructNonOwning(_Underlying *other);
                    if (is_owning)
                        _UnderlyingSharedPtr = __MR_C_std_shared_ptr_MR_StdSharedPtr_A_Construct(ptr);
                    else
                        _UnderlyingSharedPtr = __MR_C_std_shared_ptr_MR_StdSharedPtr_A_ConstructNonOwning(ptr);
                }

                internal unsafe Const_A(_UnderlyingShared *shared_ptr, bool is_owning) : base(is_owning) {_UnderlyingSharedPtr = shared_ptr;}

                internal static unsafe A _MakeAliasing(MR.CS.Std.Const_SharedPtr_ConstVoid._Underlying *ownership, _Underlying *ptr)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_StdSharedPtr_A_ConstructAliasing", ExactSpelling = true)]
                    extern static _UnderlyingShared *__MR_C_std_shared_ptr_MR_StdSharedPtr_A_ConstructAliasing(MR.CS.Misc._PassBy ownership_pass_by, MR.CS.Std.Const_SharedPtr_ConstVoid._Underlying *ownership, _Underlying *ptr);
                    return new(__MR_C_std_shared_ptr_MR_StdSharedPtr_A_ConstructAliasing(MR.CS.Misc._PassBy.copy, ownership, ptr), is_owning: true);
                }

                private protected unsafe void _LateMakeShared(_Underlying *ptr)
                {
                    System.Diagnostics.Trace.Assert(_IsOwningVal == true);
                    System.Diagnostics.Trace.Assert(_UnderlyingSharedPtr is null);
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_StdSharedPtr_A_Construct", ExactSpelling = true)]
                    extern static _UnderlyingShared *__MR_C_std_shared_ptr_MR_StdSharedPtr_A_Construct(_Underlying *other);
                    _UnderlyingSharedPtr = __MR_C_std_shared_ptr_MR_StdSharedPtr_A_Construct(ptr);
                }

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingSharedPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_StdSharedPtr_A_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_MR_StdSharedPtr_A_Destroy(_UnderlyingShared *_this);
                    __MR_C_std_shared_ptr_MR_StdSharedPtr_A_Destroy(_UnderlyingSharedPtr);
                    _UnderlyingSharedPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_A() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_A() : this(shared_ptr: null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.StdSharedPtr.A._Underlying *__MR_StdSharedPtr_A_DefaultConstruct();
                    _LateMakeShared(__MR_StdSharedPtr_A_DefaultConstruct());
                }

                /// Generated from constructor `MR::StdSharedPtr::A::A`.
                public unsafe Const_A(MR.CS.StdSharedPtr.Const_A _other) : this(shared_ptr: null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.StdSharedPtr.A._Underlying *__MR_StdSharedPtr_A_ConstructFromAnother(MR.CS.StdSharedPtr.A._Underlying *_other);
                    _LateMakeShared(__MR_StdSharedPtr_A_ConstructFromAnother(_other._UnderlyingPtr));
                }
            }

            // Now with a class:
            /// Generated from class `MR::StdSharedPtr::A`.
            /// This is the non-const half of the class.
            public class A : Const_A
            {
                internal unsafe A(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                internal unsafe A(_UnderlyingShared *shared_ptr, bool is_owning) : base(shared_ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe A() : this(shared_ptr: null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.StdSharedPtr.A._Underlying *__MR_StdSharedPtr_A_DefaultConstruct();
                    _LateMakeShared(__MR_StdSharedPtr_A_DefaultConstruct());
                }

                /// Generated from constructor `MR::StdSharedPtr::A::A`.
                public unsafe A(MR.CS.StdSharedPtr.Const_A _other) : this(shared_ptr: null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.StdSharedPtr.A._Underlying *__MR_StdSharedPtr_A_ConstructFromAnother(MR.CS.StdSharedPtr.A._Underlying *_other);
                    _LateMakeShared(__MR_StdSharedPtr_A_ConstructFromAnother(_other._UnderlyingPtr));
                }

                /// Generated from method `MR::StdSharedPtr::A::operator=`.
                public unsafe MR.CS.StdSharedPtr.A Assign(MR.CS.StdSharedPtr.Const_A _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_A_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.StdSharedPtr.A._Underlying *__MR_StdSharedPtr_A_AssignFromAnother(_Underlying *_this, MR.CS.StdSharedPtr.A._Underlying *_other);
                    return new(__MR_StdSharedPtr_A_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }
            }

            /// This is used as a function parameter when the underlying function receives `A` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `A`/`Const_A` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            public class _ByValue_A
            {
                internal readonly Const_A? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_A() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_A(Const_A new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_A(Const_A arg) {return new(arg);}
                public _ByValue_A(MR.CS.Misc._Moved<A> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_A(MR.CS.Misc._Moved<A> arg) {return new(arg);}
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

            /// Generated from function `MR::StdSharedPtr::GetInt`.
            public static unsafe MR.CS.Std.SharedPtr_Int GetInt()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_GetInt", ExactSpelling = true)]
                extern static MR.CS.Std.SharedPtr_Int._Underlying *__MR_StdSharedPtr_GetInt();
                return new(__MR_StdSharedPtr_GetInt(), is_owning: true);
            }

            /// Generated from function `MR::StdSharedPtr::SetInt`.
            public static unsafe void SetInt(MR.CS.Std._ByValue_SharedPtr_Int _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetInt", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetInt(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.SharedPtr_Int._Underlying *_1);
                __MR_StdSharedPtr_SetInt(_1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// Generated from function `MR::StdSharedPtr::SetIntConstRef`.
            public static unsafe void SetIntConstRef(MR.CS.Std.Const_SharedPtr_Int _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetIntConstRef", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetIntConstRef(MR.CS.Std.Const_SharedPtr_Int._Underlying *_1);
                __MR_StdSharedPtr_SetIntConstRef(_1._UnderlyingPtr);
            }

            /// Generated from function `MR::StdSharedPtr::SetIntDefTrivial`.
            /// Parameter `_1` defaults to `{}`.
            public static unsafe void SetIntDefTrivial(MR.CS.Std._ByValue_SharedPtr_Int? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetIntDefTrivial", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetIntDefTrivial(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.SharedPtr_Int._Underlying *_1);
                __MR_StdSharedPtr_SetIntDefTrivial(_1 is not null ? _1.PassByMode : MR.CS.Misc._PassBy.default_arg, _1 is not null && _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// Generated from function `MR::StdSharedPtr::SetIntDef`.
            /// Parameter `_1` defaults to `std::make_unique<int>(42)`.
            public static unsafe void SetIntDef(MR.CS.Std._ByValue_SharedPtr_Int? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetIntDef", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetIntDef(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.SharedPtr_Int._Underlying *_1);
                __MR_StdSharedPtr_SetIntDef(_1 is not null ? _1.PassByMode : MR.CS.Misc._PassBy.default_arg, _1 is not null && _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// Generated from function `MR::StdSharedPtr::SetIntLvalueRef`.
            public static unsafe void SetIntLvalueRef(MR.CS.Std.SharedPtr_Int _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetIntLvalueRef", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetIntLvalueRef(MR.CS.Std.SharedPtr_Int._Underlying *_1);
                __MR_StdSharedPtr_SetIntLvalueRef(_1._UnderlyingPtr);
            }

            /// Generated from function `MR::StdSharedPtr::SetIntLvalueConstRef`.
            public static unsafe void SetIntLvalueConstRef(MR.CS.Std.Const_SharedPtr_Int _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetIntLvalueConstRef", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetIntLvalueConstRef(MR.CS.Std.Const_SharedPtr_Int._Underlying *_1);
                __MR_StdSharedPtr_SetIntLvalueConstRef(_1._UnderlyingPtr);
            }

            /// Generated from function `MR::StdSharedPtr::SetIntRvalueRef`.
            public static unsafe void SetIntRvalueRef(MR.CS.Std.SharedPtr_Int _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetIntRvalueRef", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetIntRvalueRef(MR.CS.Std.SharedPtr_Int._Underlying *_1);
                __MR_StdSharedPtr_SetIntRvalueRef(_1._UnderlyingPtr);
            }

            /// Generated from function `MR::StdSharedPtr::SetIntRvalueConstRef`.
            public static unsafe void SetIntRvalueConstRef(MR.CS.Std.Const_SharedPtr_Int _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetIntRvalueConstRef", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetIntRvalueConstRef(MR.CS.Std.Const_SharedPtr_Int._Underlying *_1);
                __MR_StdSharedPtr_SetIntRvalueConstRef(_1._UnderlyingPtr);
            }

            /// Generated from function `MR::StdSharedPtr::GetIntArr`.
            public static unsafe MR.CS.Std.SharedPtr_IntArray GetIntArr()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_GetIntArr", ExactSpelling = true)]
                extern static MR.CS.Std.SharedPtr_IntArray._Underlying *__MR_StdSharedPtr_GetIntArr();
                return new(__MR_StdSharedPtr_GetIntArr(), is_owning: true);
            }

            /// Generated from function `MR::StdSharedPtr::SetIntArr`.
            public static unsafe void SetIntArr(MR.CS.Std._ByValue_SharedPtr_IntArray _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetIntArr", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetIntArr(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.SharedPtr_IntArray._Underlying *_1);
                __MR_StdSharedPtr_SetIntArr(_1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// Generated from function `MR::StdSharedPtr::SetIntArrDefTrivial`.
            /// Parameter `_1` defaults to `{}`.
            public static unsafe void SetIntArrDefTrivial(MR.CS.Std._ByValue_SharedPtr_IntArray? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetIntArrDefTrivial", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetIntArrDefTrivial(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.SharedPtr_IntArray._Underlying *_1);
                __MR_StdSharedPtr_SetIntArrDefTrivial(_1 is not null ? _1.PassByMode : MR.CS.Misc._PassBy.default_arg, _1 is not null && _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// Generated from function `MR::StdSharedPtr::SetIntArrDef`.
            /// Parameter `_1` defaults to `std::make_unique<int[]>(42)`.
            public static unsafe void SetIntArrDef(MR.CS.Std._ByValue_SharedPtr_IntArray? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetIntArrDef", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetIntArrDef(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.SharedPtr_IntArray._Underlying *_1);
                __MR_StdSharedPtr_SetIntArrDef(_1 is not null ? _1.PassByMode : MR.CS.Misc._PassBy.default_arg, _1 is not null && _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// Generated from function `MR::StdSharedPtr::GetIntArr42`.
            public static unsafe MR.CS.Std.SharedPtr_IntArray42 GetIntArr42()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_GetIntArr42", ExactSpelling = true)]
                extern static MR.CS.Std.SharedPtr_IntArray42._Underlying *__MR_StdSharedPtr_GetIntArr42();
                return new(__MR_StdSharedPtr_GetIntArr42(), is_owning: true);
            }

            /// Generated from function `MR::StdSharedPtr::SetIntArr42`.
            public static unsafe void SetIntArr42(MR.CS.Std._ByValue_SharedPtr_IntArray42 _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetIntArr42", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetIntArr42(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.SharedPtr_IntArray42._Underlying *_1);
                __MR_StdSharedPtr_SetIntArr42(_1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// Generated from function `MR::StdSharedPtr::SetIntArr42DefTrivial`.
            /// Parameter `_1` defaults to `{}`.
            public static unsafe void SetIntArr42DefTrivial(MR.CS.Std._ByValue_SharedPtr_IntArray42? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetIntArr42DefTrivial", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetIntArr42DefTrivial(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.SharedPtr_IntArray42._Underlying *_1);
                __MR_StdSharedPtr_SetIntArr42DefTrivial(_1 is not null ? _1.PassByMode : MR.CS.Misc._PassBy.default_arg, _1 is not null && _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// Generated from function `MR::StdSharedPtr::SetIntArr42Def`.
            /// Parameter `_1` defaults to `std::make_shared<int[42]>()`.
            public static unsafe void SetIntArr42Def(MR.CS.Std._ByValue_SharedPtr_IntArray42? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetIntArr42Def", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetIntArr42Def(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.SharedPtr_IntArray42._Underlying *_1);
                __MR_StdSharedPtr_SetIntArr42Def(_1 is not null ? _1.PassByMode : MR.CS.Misc._PassBy.default_arg, _1 is not null && _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// Generated from function `MR::StdSharedPtr::GetClass`.
            public static unsafe MR.CS.StdSharedPtr.A GetClass()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_GetClass", ExactSpelling = true)]
                extern static MR.CS.StdSharedPtr.A._UnderlyingShared *__MR_StdSharedPtr_GetClass();
                return new(__MR_StdSharedPtr_GetClass(), is_owning: true);
            }

            /// Generated from function `MR::StdSharedPtr::SetClass`.
            public static unsafe void SetClass(MR.CS.StdSharedPtr._ByValue_A _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetClass", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetClass(MR.CS.Misc._PassBy _1_pass_by, MR.CS.StdSharedPtr.A._UnderlyingShared *_1);
                __MR_StdSharedPtr_SetClass(_1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingSharedPtr : null);
            }

            /// Generated from function `MR::StdSharedPtr::SetClassConstRef`.
            public static unsafe void SetClassConstRef(MR.CS.StdSharedPtr.Const_A _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetClassConstRef", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetClassConstRef(MR.CS.StdSharedPtr.Const_A._UnderlyingShared *_1);
                __MR_StdSharedPtr_SetClassConstRef(_1._UnderlyingSharedPtr);
            }

            /// Generated from function `MR::StdSharedPtr::SetClassDefTrivial`.
            /// Parameter `_1` defaults to `{}`.
            public static unsafe void SetClassDefTrivial(MR.CS.StdSharedPtr._ByValue_A? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetClassDefTrivial", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetClassDefTrivial(MR.CS.Misc._PassBy _1_pass_by, MR.CS.StdSharedPtr.A._UnderlyingShared *_1);
                __MR_StdSharedPtr_SetClassDefTrivial(_1 is not null ? _1.PassByMode : MR.CS.Misc._PassBy.default_arg, _1 is not null && _1.Value is not null ? _1.Value._UnderlyingSharedPtr : null);
            }

            /// Generated from function `MR::StdSharedPtr::SetClassDef`.
            /// Parameter `_1` defaults to `std::make_unique<MR::StdSharedPtr::A>(MR::StdSharedPtr::A{})`.
            public static unsafe void SetClassDef(MR.CS.StdSharedPtr._ByValue_A? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetClassDef", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetClassDef(MR.CS.Misc._PassBy _1_pass_by, MR.CS.StdSharedPtr.A._UnderlyingShared *_1);
                __MR_StdSharedPtr_SetClassDef(_1 is not null ? _1.PassByMode : MR.CS.Misc._PassBy.default_arg, _1 is not null && _1.Value is not null ? _1.Value._UnderlyingSharedPtr : null);
            }

            /// Generated from function `MR::StdSharedPtr::SetClassLvalueRef`.
            public static unsafe void SetClassLvalueRef(MR.CS.StdSharedPtr.A _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetClassLvalueRef", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetClassLvalueRef(MR.CS.StdSharedPtr.A._UnderlyingShared *_1);
                __MR_StdSharedPtr_SetClassLvalueRef(_1._UnderlyingSharedPtr);
            }

            /// Generated from function `MR::StdSharedPtr::SetClassLvalueConstRef`.
            public static unsafe void SetClassLvalueConstRef(MR.CS.StdSharedPtr.Const_A _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetClassLvalueConstRef", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetClassLvalueConstRef(MR.CS.StdSharedPtr.Const_A._UnderlyingShared *_1);
                __MR_StdSharedPtr_SetClassLvalueConstRef(_1._UnderlyingSharedPtr);
            }

            /// Generated from function `MR::StdSharedPtr::SetClassRvalueRef`.
            public static unsafe void SetClassRvalueRef(MR.CS.StdSharedPtr.A _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetClassRvalueRef", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetClassRvalueRef(MR.CS.StdSharedPtr.A._UnderlyingShared *_1);
                __MR_StdSharedPtr_SetClassRvalueRef(_1._UnderlyingSharedPtr);
            }

            /// Generated from function `MR::StdSharedPtr::SetClassRvalueConstRef`.
            public static unsafe void SetClassRvalueConstRef(MR.CS.StdSharedPtr.Const_A _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetClassRvalueConstRef", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetClassRvalueConstRef(MR.CS.StdSharedPtr.Const_A._UnderlyingShared *_1);
                __MR_StdSharedPtr_SetClassRvalueConstRef(_1._UnderlyingSharedPtr);
            }

            /// Generated from function `MR::StdSharedPtr::GetClassArr`.
            public static unsafe MR.CS.Std.SharedPtr_MRStdSharedPtrAArray GetClassArr()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_GetClassArr", ExactSpelling = true)]
                extern static MR.CS.Std.SharedPtr_MRStdSharedPtrAArray._Underlying *__MR_StdSharedPtr_GetClassArr();
                return new(__MR_StdSharedPtr_GetClassArr(), is_owning: true);
            }

            /// Generated from function `MR::StdSharedPtr::SetClassArr`.
            public static unsafe void SetClassArr(MR.CS.Std._ByValue_SharedPtr_MRStdSharedPtrAArray _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetClassArr", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetClassArr(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.SharedPtr_MRStdSharedPtrAArray._Underlying *_1);
                __MR_StdSharedPtr_SetClassArr(_1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// Generated from function `MR::StdSharedPtr::SetClassArrDefTrivial`.
            /// Parameter `_1` defaults to `{}`.
            public static unsafe void SetClassArrDefTrivial(MR.CS.Std._ByValue_SharedPtr_MRStdSharedPtrAArray? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetClassArrDefTrivial", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetClassArrDefTrivial(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.SharedPtr_MRStdSharedPtrAArray._Underlying *_1);
                __MR_StdSharedPtr_SetClassArrDefTrivial(_1 is not null ? _1.PassByMode : MR.CS.Misc._PassBy.default_arg, _1 is not null && _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// Generated from function `MR::StdSharedPtr::SetClassArrDef`.
            /// Parameter `_1` defaults to `std::make_unique<MR::StdSharedPtr::A[]>(42)`.
            public static unsafe void SetClassArrDef(MR.CS.Std._ByValue_SharedPtr_MRStdSharedPtrAArray? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetClassArrDef", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetClassArrDef(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.SharedPtr_MRStdSharedPtrAArray._Underlying *_1);
                __MR_StdSharedPtr_SetClassArrDef(_1 is not null ? _1.PassByMode : MR.CS.Misc._PassBy.default_arg, _1 is not null && _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// Generated from function `MR::StdSharedPtr::GetClassArr42`.
            public static unsafe MR.CS.Std.SharedPtr_MRStdSharedPtrAArray42 GetClassArr42()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_GetClassArr42", ExactSpelling = true)]
                extern static MR.CS.Std.SharedPtr_MRStdSharedPtrAArray42._Underlying *__MR_StdSharedPtr_GetClassArr42();
                return new(__MR_StdSharedPtr_GetClassArr42(), is_owning: true);
            }

            /// Generated from function `MR::StdSharedPtr::SetClassArr42`.
            public static unsafe void SetClassArr42(MR.CS.Std._ByValue_SharedPtr_MRStdSharedPtrAArray42 _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetClassArr42", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetClassArr42(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.SharedPtr_MRStdSharedPtrAArray42._Underlying *_1);
                __MR_StdSharedPtr_SetClassArr42(_1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// Generated from function `MR::StdSharedPtr::SetClassArr42DefTrivial`.
            /// Parameter `_1` defaults to `{}`.
            public static unsafe void SetClassArr42DefTrivial(MR.CS.Std._ByValue_SharedPtr_MRStdSharedPtrAArray42? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetClassArr42DefTrivial", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetClassArr42DefTrivial(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.SharedPtr_MRStdSharedPtrAArray42._Underlying *_1);
                __MR_StdSharedPtr_SetClassArr42DefTrivial(_1 is not null ? _1.PassByMode : MR.CS.Misc._PassBy.default_arg, _1 is not null && _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// Generated from function `MR::StdSharedPtr::SetClassArr42Def`.
            /// Parameter `_1` defaults to `std::make_shared<MR::StdSharedPtr::A[42]>()`.
            public static unsafe void SetClassArr42Def(MR.CS.Std._ByValue_SharedPtr_MRStdSharedPtrAArray42? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_SetClassArr42Def", ExactSpelling = true)]
                extern static void __MR_StdSharedPtr_SetClassArr42Def(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.SharedPtr_MRStdSharedPtrAArray42._Underlying *_1);
                __MR_StdSharedPtr_SetClassArr42Def(_1 is not null ? _1.PassByMode : MR.CS.Misc._PassBy.default_arg, _1 is not null && _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            // With constness:
            // Try const element types:
            /// Generated from function `MR::StdSharedPtr::GetConstInt`.
            public static unsafe MR.CS.Std.SharedPtr_ConstInt GetConstInt()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_GetConstInt", ExactSpelling = true)]
                extern static MR.CS.Std.SharedPtr_ConstInt._Underlying *__MR_StdSharedPtr_GetConstInt();
                return new(__MR_StdSharedPtr_GetConstInt(), is_owning: true);
            }

            /// Generated from function `MR::StdSharedPtr::GetConstIntArr`.
            public static unsafe MR.CS.Std.SharedPtr_ConstIntArray GetConstIntArr()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_GetConstIntArr", ExactSpelling = true)]
                extern static MR.CS.Std.SharedPtr_ConstIntArray._Underlying *__MR_StdSharedPtr_GetConstIntArr();
                return new(__MR_StdSharedPtr_GetConstIntArr(), is_owning: true);
            }

            /// Generated from function `MR::StdSharedPtr::GetConstIntArr42`.
            public static unsafe MR.CS.Std.SharedPtr_ConstIntArray42 GetConstIntArr42()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_GetConstIntArr42", ExactSpelling = true)]
                extern static MR.CS.Std.SharedPtr_ConstIntArray42._Underlying *__MR_StdSharedPtr_GetConstIntArr42();
                return new(__MR_StdSharedPtr_GetConstIntArr42(), is_owning: true);
            }

            /// Generated from function `MR::StdSharedPtr::GetConstClass`.
            public static unsafe MR.CS.StdSharedPtr.A GetConstClass()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_GetConstClass", ExactSpelling = true)]
                extern static MR.CS.StdSharedPtr.A._UnderlyingShared *__MR_StdSharedPtr_GetConstClass();
                return new(__MR_StdSharedPtr_GetConstClass(), is_owning: true);
            }

            /// Generated from function `MR::StdSharedPtr::GetConstClassArr`.
            public static unsafe MR.CS.Std.SharedPtr_ConstMRStdSharedPtrAArray GetConstClassArr()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_GetConstClassArr", ExactSpelling = true)]
                extern static MR.CS.Std.SharedPtr_ConstMRStdSharedPtrAArray._Underlying *__MR_StdSharedPtr_GetConstClassArr();
                return new(__MR_StdSharedPtr_GetConstClassArr(), is_owning: true);
            }

            /// Generated from function `MR::StdSharedPtr::GetConstClassArr42`.
            public static unsafe MR.CS.Std.SharedPtr_ConstMRStdSharedPtrAArray42 GetConstClassArr42()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdSharedPtr_GetConstClassArr42", ExactSpelling = true)]
                extern static MR.CS.Std.SharedPtr_ConstMRStdSharedPtrAArray42._Underlying *__MR_StdSharedPtr_GetConstClassArr42();
                return new(__MR_StdSharedPtr_GetConstClassArr42(), is_owning: true);
            }
        }
    }
}
