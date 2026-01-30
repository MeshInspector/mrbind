public static partial class MR
{
    public static partial class CS
    {
        public static partial class StdOptional
        {
            public enum E : int
            {
                E1 = 0,
            }

            /// Generated from class `MR::StdOptional::A`.
            /// This is the const half of the class.
            public class Const_A : MR.CS.Misc.Object<Const_A>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_A_Destroy", ExactSpelling = true)]
                    extern static void __MR_StdOptional_A_Destroy(_Underlying *_this);
                    __MR_StdOptional_A_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_A() {Dispose(false);}

                public unsafe int x
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_A_Get_x", ExactSpelling = true)]
                        extern static int *__MR_StdOptional_A_Get_x(_Underlying *_this);
                        return *__MR_StdOptional_A_Get_x(_UnderlyingPtr);
                    }
                }

                internal unsafe Const_A(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_A() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.StdOptional.A._Underlying *__MR_StdOptional_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_StdOptional_A_DefaultConstruct();
                }

                /// Constructs `MR::StdOptional::A` elementwise.
                public unsafe Const_A(int x) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_A_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.StdOptional.A._Underlying *__MR_StdOptional_A_ConstructFrom(int x);
                    _UnderlyingPtr = __MR_StdOptional_A_ConstructFrom(x);
                }

                /// Generated from constructor `MR::StdOptional::A::A`.
                public unsafe Const_A(MR.CS.StdOptional.Const_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.StdOptional.A._Underlying *__MR_StdOptional_A_ConstructFromAnother(MR.CS.StdOptional.A._Underlying *_other);
                    _UnderlyingPtr = __MR_StdOptional_A_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// Generated from constructor `MR::StdOptional::A::A`.
                public Const_A(A _other) : this((Const_A)_other) {}
            }

            /// Generated from class `MR::StdOptional::A`.
            /// This is the non-const half of the class.
            public class A : Const_A
            {
                public new unsafe ref int x
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_A_GetMutable_x", ExactSpelling = true)]
                        extern static int *__MR_StdOptional_A_GetMutable_x(_Underlying *_this);
                        return ref *__MR_StdOptional_A_GetMutable_x(_UnderlyingPtr);
                    }
                }

                internal unsafe A(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe A() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.StdOptional.A._Underlying *__MR_StdOptional_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_StdOptional_A_DefaultConstruct();
                }

                /// Constructs `MR::StdOptional::A` elementwise.
                public unsafe A(int x) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_A_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.StdOptional.A._Underlying *__MR_StdOptional_A_ConstructFrom(int x);
                    _UnderlyingPtr = __MR_StdOptional_A_ConstructFrom(x);
                }

                /// Generated from constructor `MR::StdOptional::A::A`.
                public unsafe A(MR.CS.StdOptional.Const_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.StdOptional.A._Underlying *__MR_StdOptional_A_ConstructFromAnother(MR.CS.StdOptional.A._Underlying *_other);
                    _UnderlyingPtr = __MR_StdOptional_A_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// Generated from constructor `MR::StdOptional::A::A`.
                public A(A _other) : this((Const_A)_other) {}

                /// Generated from method `MR::StdOptional::A::operator=`.
                public unsafe MR.CS.StdOptional.A Assign(MR.CS.StdOptional.Const_A _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_A_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.StdOptional.A._Underlying *__MR_StdOptional_A_AssignFromAnother(_Underlying *_this, MR.CS.StdOptional.A._Underlying *_other);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_StdOptional_A_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
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

            /// Generated from class `MR::StdOptional::B`.
            /// This is the const half of the class.
            public class Const_B : MR.CS.Misc.Object<Const_B>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_B_Destroy", ExactSpelling = true)]
                    extern static void __MR_StdOptional_B_Destroy(_Underlying *_this);
                    __MR_StdOptional_B_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_B() {Dispose(false);}

                public unsafe MR.CS.Std.Const_String s
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_B_Get_s", ExactSpelling = true)]
                        extern static MR.CS.Std.Const_String._Underlying *__MR_StdOptional_B_Get_s(_Underlying *_this);
                        MR.CS.Std.Const_String __ret;
                        __ret = new(__MR_StdOptional_B_Get_s(_UnderlyingPtr), is_owning: false);
                        __ret._KeepAliveEnclosingObject = this;
                        return __ret;
                    }
                }

                internal unsafe Const_B(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_B() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_B_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.StdOptional.B._Underlying *__MR_StdOptional_B_DefaultConstruct();
                    _UnderlyingPtr = __MR_StdOptional_B_DefaultConstruct();
                }

                /// Constructs `MR::StdOptional::B` elementwise.
                public unsafe Const_B(string s) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_B_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.StdOptional.B._Underlying *__MR_StdOptional_B_ConstructFrom(byte *s, byte *s_end);
                    byte[] __bytes_s = System.Text.Encoding.UTF8.GetBytes(s);
                    fixed (byte *__ptr_s = __bytes_s)
                    {
                        _UnderlyingPtr = __MR_StdOptional_B_ConstructFrom(__ptr_s, __ptr_s + __bytes_s.Length);
                    }
                }

                /// Generated from constructor `MR::StdOptional::B::B`.
                public unsafe Const_B(MR.CS.StdOptional._ByValue_B _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_B_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.StdOptional.B._Underlying *__MR_StdOptional_B_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.StdOptional.B._Underlying *_other);
                    _UnderlyingPtr = __MR_StdOptional_B_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                    if (_other.Value is not null) _KeepAlive(_other.Value);
                }

                /// Generated from constructor `MR::StdOptional::B::B`.
                public Const_B(Const_B _other) : this(new _ByValue_B(_other)) {}

                /// Generated from constructor `MR::StdOptional::B::B`.
                public Const_B(B _other) : this((Const_B)_other) {}
            }

            /// Generated from class `MR::StdOptional::B`.
            /// This is the non-const half of the class.
            public class B : Const_B
            {
                public new unsafe MR.CS.Std.String s
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_B_GetMutable_s", ExactSpelling = true)]
                        extern static MR.CS.Std.String._Underlying *__MR_StdOptional_B_GetMutable_s(_Underlying *_this);
                        MR.CS.Std.String __ret;
                        __ret = new(__MR_StdOptional_B_GetMutable_s(_UnderlyingPtr), is_owning: false);
                        __ret._KeepAliveEnclosingObject = this;
                        return __ret;
                    }
                }

                internal unsafe B(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe B() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_B_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.StdOptional.B._Underlying *__MR_StdOptional_B_DefaultConstruct();
                    _UnderlyingPtr = __MR_StdOptional_B_DefaultConstruct();
                }

                /// Constructs `MR::StdOptional::B` elementwise.
                public unsafe B(string s) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_B_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.StdOptional.B._Underlying *__MR_StdOptional_B_ConstructFrom(byte *s, byte *s_end);
                    byte[] __bytes_s = System.Text.Encoding.UTF8.GetBytes(s);
                    fixed (byte *__ptr_s = __bytes_s)
                    {
                        _UnderlyingPtr = __MR_StdOptional_B_ConstructFrom(__ptr_s, __ptr_s + __bytes_s.Length);
                    }
                }

                /// Generated from constructor `MR::StdOptional::B::B`.
                public unsafe B(MR.CS.StdOptional._ByValue_B _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_B_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.StdOptional.B._Underlying *__MR_StdOptional_B_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.StdOptional.B._Underlying *_other);
                    _UnderlyingPtr = __MR_StdOptional_B_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                    if (_other.Value is not null) _KeepAlive(_other.Value);
                }

                /// Generated from constructor `MR::StdOptional::B::B`.
                public B(Const_B _other) : this(new _ByValue_B(_other)) {}

                /// Generated from constructor `MR::StdOptional::B::B`.
                public B(B _other) : this((Const_B)_other) {}

                /// Generated from method `MR::StdOptional::B::operator=`.
                public unsafe MR.CS.StdOptional.B Assign(MR.CS.StdOptional._ByValue_B _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_B_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.StdOptional.B._Underlying *__MR_StdOptional_B_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.StdOptional.B._Underlying *_other);
                    _DiscardKeepAlive();
                    if (_other.Value is not null) _KeepAlive(_other.Value);
                    return new(__MR_StdOptional_B_AssignFromAnother(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null), is_owning: false);
                }
            }

            /// This is used as a function parameter when the underlying function receives `B` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `B`/`Const_B` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            public class _ByValue_B
            {
                internal readonly Const_B? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_B() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_B(Const_B new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_B(Const_B arg) {return new(arg);}
                public _ByValue_B(MR.CS.Misc._Moved<B> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_B(MR.CS.Misc._Moved<B> arg) {return new(arg);}
            }

            /// This is used as a function parameter when the underlying function receives an optional `B` by value,
            ///   and also has a default argument, meaning it has two different null states.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `B`/`Const_B` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument.
            /// * Pass `MR.CS.Misc.NullOptType` to pass no object.
            public class _ByValueOptOpt_B
            {
                internal readonly Const_B? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValueOptOpt_B() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValueOptOpt_B(Const_B new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValueOptOpt_B(Const_B arg) {return new(arg);}
                public _ByValueOptOpt_B(MR.CS.Misc._Moved<B> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValueOptOpt_B(MR.CS.Misc._Moved<B> arg) {return new(arg);}
                public _ByValueOptOpt_B(MR.CS.Misc.NullOptType nullopt) {PassByMode = MR.CS.Misc._PassBy.no_object;}
                public static implicit operator _ByValueOptOpt_B(MR.CS.Misc.NullOptType nullopt) {return new(nullopt);}
            }

            /// This is used for optional parameters of class `B` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_B`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `B`/`Const_B` directly.
            public class _InOptMut_B
            {
                public B? Opt;

                public _InOptMut_B() {}
                public _InOptMut_B(B value) {Opt = value;}
                public static implicit operator _InOptMut_B(B value) {return new(value);}
            }

            /// This is used for optional parameters of class `B` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_B`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `B`/`Const_B` to pass it to the function.
            public class _InOptConst_B
            {
                public Const_B? Opt;

                public _InOptConst_B() {}
                public _InOptConst_B(Const_B value) {Opt = value;}
                public static implicit operator _InOptConst_B(Const_B value) {return new(value);}
            }

            /// Generated from function `MR::StdOptional::GetInt`.
            public static unsafe MR.CS.Std.Optional_Int GetInt()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_GetInt", ExactSpelling = true)]
                extern static MR.CS.Std.Optional_Int._Underlying *__MR_StdOptional_GetInt();
                return new(__MR_StdOptional_GetInt(), is_owning: true);
            }

            /// Generated from function `MR::StdOptional::SetInt`.
            public static unsafe void SetInt(int? _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_SetInt", ExactSpelling = true)]
                extern static void __MR_StdOptional_SetInt(int *_1);
                int __deref__1 = _1.GetValueOrDefault();
                __MR_StdOptional_SetInt(_1.HasValue ? &__deref__1 : null);
            }

            /// Generated from function `MR::StdOptional::SetIntConstRef`.
            public static unsafe void SetIntConstRef(int? _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_SetIntConstRef", ExactSpelling = true)]
                extern static void __MR_StdOptional_SetIntConstRef(int *_1);
                int __deref__1 = _1.GetValueOrDefault();
                __MR_StdOptional_SetIntConstRef(_1.HasValue ? &__deref__1 : null);
            }

            /// Generated from function `MR::StdOptional::SetIntDefTrivial`.
            public static unsafe void SetIntDefTrivial(int? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_SetIntDefTrivial", ExactSpelling = true)]
                extern static void __MR_StdOptional_SetIntDefTrivial(int *_1);
                int __deref__1 = _1.GetValueOrDefault();
                __MR_StdOptional_SetIntDefTrivial(_1.HasValue ? &__deref__1 : null);
            }

            /// Generated from function `MR::StdOptional::SetIntDef`.
            /// Parameter `_1` defaults to `42`.
            public static unsafe void SetIntDef(MR.CS.Std.Const_Optional_Int? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_SetIntDef", ExactSpelling = true)]
                extern static void __MR_StdOptional_SetIntDef(MR.CS.Std.Optional_Int._Underlying *_1);
                __MR_StdOptional_SetIntDef(_1 is not null ? _1._UnderlyingPtr : null);
            }

            /// Generated from function `MR::StdOptional::GetEnum`.
            public static unsafe MR.CS.Std.Optional_MRStdOptionalE GetEnum()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_GetEnum", ExactSpelling = true)]
                extern static MR.CS.Std.Optional_MRStdOptionalE._Underlying *__MR_StdOptional_GetEnum();
                return new(__MR_StdOptional_GetEnum(), is_owning: true);
            }

            /// Generated from function `MR::StdOptional::SetEnum`.
            public static unsafe void SetEnum(MR.CS.StdOptional.E? _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_SetEnum", ExactSpelling = true)]
                extern static void __MR_StdOptional_SetEnum(MR.CS.StdOptional.E *_1);
                MR.CS.StdOptional.E __deref__1 = _1.GetValueOrDefault();
                __MR_StdOptional_SetEnum(_1.HasValue ? &__deref__1 : null);
            }

            /// Generated from function `MR::StdOptional::SetEnumConstRef`.
            public static unsafe void SetEnumConstRef(MR.CS.StdOptional.E? _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_SetEnumConstRef", ExactSpelling = true)]
                extern static void __MR_StdOptional_SetEnumConstRef(MR.CS.StdOptional.E *_1);
                MR.CS.StdOptional.E __deref__1 = _1.GetValueOrDefault();
                __MR_StdOptional_SetEnumConstRef(_1.HasValue ? &__deref__1 : null);
            }

            /// Generated from function `MR::StdOptional::SetEnumDefTrivial`.
            public static unsafe void SetEnumDefTrivial(MR.CS.StdOptional.E? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_SetEnumDefTrivial", ExactSpelling = true)]
                extern static void __MR_StdOptional_SetEnumDefTrivial(MR.CS.StdOptional.E *_1);
                MR.CS.StdOptional.E __deref__1 = _1.GetValueOrDefault();
                __MR_StdOptional_SetEnumDefTrivial(_1.HasValue ? &__deref__1 : null);
            }

            /// Generated from function `MR::StdOptional::SetEnumDef`.
            /// Parameter `_1` defaults to `E::e1`.
            public static unsafe void SetEnumDef(MR.CS.Std.Const_Optional_MRStdOptionalE? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_SetEnumDef", ExactSpelling = true)]
                extern static void __MR_StdOptional_SetEnumDef(MR.CS.Std.Optional_MRStdOptionalE._Underlying *_1);
                __MR_StdOptional_SetEnumDef(_1 is not null ? _1._UnderlyingPtr : null);
            }

            /// Generated from function `MR::StdOptional::GetClass`.
            public static unsafe MR.CS.Std.Optional_MRStdOptionalA GetClass()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_GetClass", ExactSpelling = true)]
                extern static MR.CS.Std.Optional_MRStdOptionalA._Underlying *__MR_StdOptional_GetClass();
                return new(__MR_StdOptional_GetClass(), is_owning: true);
            }

            /// Generated from function `MR::StdOptional::SetClass`.
            public static unsafe void SetClass(MR.CS.StdOptional.Const_A? _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_SetClass", ExactSpelling = true)]
                extern static void __MR_StdOptional_SetClass(MR.CS.StdOptional.A._Underlying *_1);
                __MR_StdOptional_SetClass(_1 is not null ? _1._UnderlyingPtr : null);
            }

            /// Generated from function `MR::StdOptional::SetClassConstRef`.
            public static unsafe void SetClassConstRef(MR.CS.StdOptional.Const_A? _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_SetClassConstRef", ExactSpelling = true)]
                extern static void __MR_StdOptional_SetClassConstRef(MR.CS.StdOptional.A._Underlying *_1);
                __MR_StdOptional_SetClassConstRef(_1 is not null ? _1._UnderlyingPtr : null);
            }

            /// Generated from function `MR::StdOptional::SetClassDefTrivial`.
            public static unsafe void SetClassDefTrivial(MR.CS.StdOptional.Const_A? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_SetClassDefTrivial", ExactSpelling = true)]
                extern static void __MR_StdOptional_SetClassDefTrivial(MR.CS.StdOptional.A._Underlying *_1);
                __MR_StdOptional_SetClassDefTrivial(_1 is not null ? _1._UnderlyingPtr : null);
            }

            /// Generated from function `MR::StdOptional::SetClassDef`.
            /// Parameter `_1` defaults to `MR::StdOptional::A{42}`.
            public static unsafe void SetClassDef(MR.CS.Std.Const_Optional_MRStdOptionalA? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_SetClassDef", ExactSpelling = true)]
                extern static void __MR_StdOptional_SetClassDef(MR.CS.Std.Optional_MRStdOptionalA._Underlying *_1);
                __MR_StdOptional_SetClassDef(_1 is not null ? _1._UnderlyingPtr : null);
            }

            /// Generated from function `MR::StdOptional::GetClass2`.
            public static unsafe MR.CS.Std.Optional_MRStdOptionalB GetClass2()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_GetClass2", ExactSpelling = true)]
                extern static MR.CS.Std.Optional_MRStdOptionalB._Underlying *__MR_StdOptional_GetClass2();
                return new(__MR_StdOptional_GetClass2(), is_owning: true);
            }

            /// Generated from function `MR::StdOptional::SetClass2`.
            public static unsafe void SetClass2(MR.CS.StdOptional._ByValue_B? _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_SetClass2", ExactSpelling = true)]
                extern static void __MR_StdOptional_SetClass2(MR.CS.Misc._PassBy _1_pass_by, MR.CS.StdOptional.B._Underlying *_1);
                __MR_StdOptional_SetClass2(_1 is not null ? _1.PassByMode : MR.CS.Misc._PassBy.no_object, _1 is not null && _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// Generated from function `MR::StdOptional::SetClass2ConstRef`.
            public static unsafe void SetClass2ConstRef(MR.CS.StdOptional._ByValue_B? _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_SetClass2ConstRef", ExactSpelling = true)]
                extern static void __MR_StdOptional_SetClass2ConstRef(MR.CS.Misc._PassBy _1_pass_by, MR.CS.StdOptional.B._Underlying *_1);
                __MR_StdOptional_SetClass2ConstRef(_1 is not null ? _1.PassByMode : MR.CS.Misc._PassBy.no_object, _1 is not null && _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// Generated from function `MR::StdOptional::SetClass2DefTrivial`.
            public static unsafe void SetClass2DefTrivial(MR.CS.StdOptional._ByValue_B? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_SetClass2DefTrivial", ExactSpelling = true)]
                extern static void __MR_StdOptional_SetClass2DefTrivial(MR.CS.Misc._PassBy _1_pass_by, MR.CS.StdOptional.B._Underlying *_1);
                __MR_StdOptional_SetClass2DefTrivial(_1 is not null ? _1.PassByMode : MR.CS.Misc._PassBy.no_object, _1 is not null && _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// Generated from function `MR::StdOptional::SetClass2Def`.
            /// Parameter `_1` defaults to `MR::StdOptional::B{"blah"}`.
            public static unsafe void SetClass2Def(MR.CS.StdOptional._ByValueOptOpt_B? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_SetClass2Def", ExactSpelling = true)]
                extern static void __MR_StdOptional_SetClass2Def(MR.CS.Misc._PassBy _1_pass_by, MR.CS.StdOptional.B._Underlying *_1);
                __MR_StdOptional_SetClass2Def(_1 is not null ? _1.PassByMode : MR.CS.Misc._PassBy.default_arg, _1 is not null && _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }
        }
    }
}
