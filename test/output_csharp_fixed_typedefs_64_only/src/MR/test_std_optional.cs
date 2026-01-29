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

            /// <summary>
            /// Generated from class `MR::StdOptional::A`.
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
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_A_Destroy", ExactSpelling = true)]
                    extern static void __MR_StdOptional_A_Destroy(_Underlying *_this);
                    __MR_StdOptional_A_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_A() {Dispose(false);}

                public unsafe int x => *__ref_storage_x;
                private protected unsafe int *__ref_storage_x;

                /// <summary>
                /// Constructors call this at the end to initialize class fields.
                /// </summary>
                protected unsafe void _FinalizeFields()
                {
                    { // x (ref)
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_A_Get_x", ExactSpelling = true)]
                        extern static int *__MR_StdOptional_A_Get_x(MR.CS.StdOptional.Const_A._Underlying *_this);
                        this.__ref_storage_x = __MR_StdOptional_A_Get_x(_UnderlyingPtr);
                    }
                }

                // Don't warn about some fields remaining conditionally uninitialized. We initialize them later.
                #pragma warning disable CS8618
                internal unsafe Const_A(_Underlying *ptr, bool is_owning) : base(is_owning)
                {
                    _UnderlyingPtr = ptr;
                    if (ptr is not null)
                        _FinalizeFields();
                }
                #pragma warning restore CS8618

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_A() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.StdOptional.A._Underlying *__MR_StdOptional_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_StdOptional_A_DefaultConstruct();
                    _FinalizeFields();
                }

                /// <summary>
                /// Constructs `MR::StdOptional::A` elementwise.
                /// </summary>
                public unsafe Const_A(int x) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_A_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.StdOptional.A._Underlying *__MR_StdOptional_A_ConstructFrom(int x);
                    _UnderlyingPtr = __MR_StdOptional_A_ConstructFrom(x);
                    _FinalizeFields();
                }

                /// <summary>
                /// Generated from constructor `MR::StdOptional::A::A`.
                /// </summary>
                public unsafe Const_A(MR.CS.StdOptional.Const_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.StdOptional.A._Underlying *__MR_StdOptional_A_ConstructFromAnother(MR.CS.StdOptional.A._Underlying *_other);
                    _UnderlyingPtr = __MR_StdOptional_A_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                    _FinalizeFields();
                }
            }

            /// <summary>
            /// Generated from class `MR::StdOptional::A`.
            /// This is the non-const half of the class.
            /// </summary>
            public class A : Const_A
            {
                public new unsafe ref int x => ref *__ref_storage_x;

                // Don't warn about some fields remaining conditionally uninitialized. We initialize them later.
                #pragma warning disable CS8618
                internal unsafe A(_Underlying *ptr, bool is_owning) : base(ptr, is_owning)
                {
                    if (ptr is not null)
                        _FinalizeFields();
                }
                #pragma warning restore CS8618

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe A() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.StdOptional.A._Underlying *__MR_StdOptional_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_StdOptional_A_DefaultConstruct();
                    _FinalizeFields();
                }

                /// <summary>
                /// Constructs `MR::StdOptional::A` elementwise.
                /// </summary>
                public unsafe A(int x) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_A_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.StdOptional.A._Underlying *__MR_StdOptional_A_ConstructFrom(int x);
                    _UnderlyingPtr = __MR_StdOptional_A_ConstructFrom(x);
                    _FinalizeFields();
                }

                /// <summary>
                /// Generated from constructor `MR::StdOptional::A::A`.
                /// </summary>
                public unsafe A(MR.CS.StdOptional.Const_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.StdOptional.A._Underlying *__MR_StdOptional_A_ConstructFromAnother(MR.CS.StdOptional.A._Underlying *_other);
                    _UnderlyingPtr = __MR_StdOptional_A_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                    _FinalizeFields();
                }

                /// <summary>
                /// Generated from method `MR::StdOptional::A::operator=`.
                /// </summary>
                public unsafe MR.CS.StdOptional.A assign(MR.CS.StdOptional.Const_A _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_A_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.StdOptional.A._Underlying *__MR_StdOptional_A_AssignFromAnother(_Underlying *_this, MR.CS.StdOptional.A._Underlying *_other);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_StdOptional_A_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
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
            /// Generated from class `MR::StdOptional::B`.
            /// This is the const half of the class.
            /// </summary>
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

                public unsafe MR.CS.Std.Const_String s {get; private protected set;}

                /// <summary>
                /// Constructors call this at the end to initialize class fields.
                /// </summary>
                protected unsafe void _FinalizeFields()
                {
                    { // s
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_B_Get_s", ExactSpelling = true)]
                        extern static MR.CS.Std.Const_String._Underlying *__MR_StdOptional_B_Get_s(MR.CS.StdOptional.Const_B._Underlying *_this);
                        this.s = new(__MR_StdOptional_B_Get_s(_UnderlyingPtr), is_owning: false);
                        this.s._KeepAliveEnclosingObject = this;
                    }
                }

                // Don't warn about some fields remaining conditionally uninitialized. We initialize them later.
                #pragma warning disable CS8618
                internal unsafe Const_B(_Underlying *ptr, bool is_owning) : base(is_owning)
                {
                    _UnderlyingPtr = ptr;
                    if (ptr is not null)
                        _FinalizeFields();
                }
                #pragma warning restore CS8618

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_B() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_B_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.StdOptional.B._Underlying *__MR_StdOptional_B_DefaultConstruct();
                    _UnderlyingPtr = __MR_StdOptional_B_DefaultConstruct();
                    _FinalizeFields();
                }

                /// <summary>
                /// Constructs `MR::StdOptional::B` elementwise.
                /// </summary>
                public unsafe Const_B(ReadOnlySpan<char> s) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_B_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.StdOptional.B._Underlying *__MR_StdOptional_B_ConstructFrom(byte *s, byte *s_end);
                    byte[] __bytes_s = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(s.Length)];
                    int __len_s = System.Text.Encoding.UTF8.GetBytes(s, __bytes_s);
                    fixed (byte *__ptr_s = __bytes_s)
                    {
                        _UnderlyingPtr = __MR_StdOptional_B_ConstructFrom(__ptr_s, __ptr_s + __len_s);
                        _FinalizeFields();
                    }
                }

                /// <summary>
                /// Generated from constructor `MR::StdOptional::B::B`.
                /// </summary>
                public unsafe Const_B(MR.CS.StdOptional._ByValue_B _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_B_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.StdOptional.B._Underlying *__MR_StdOptional_B_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.StdOptional.B._Underlying *_other);
                    _UnderlyingPtr = __MR_StdOptional_B_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                    if (_other.Value is not null) _KeepAlive(_other.Value);
                    _FinalizeFields();
                }
            }

            /// <summary>
            /// Generated from class `MR::StdOptional::B`.
            /// This is the non-const half of the class.
            /// </summary>
            public class B : Const_B
            {
                public new unsafe MR.CS.Std.String s {get; private protected set;}

                /// <summary>
                /// Constructors call this at the end to initialize class fields.
                /// </summary>
                protected new unsafe void _FinalizeFields()
                {
                    base._FinalizeFields();

                    { // s
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_B_GetMutable_s", ExactSpelling = true)]
                        extern static MR.CS.Std.String._Underlying *__MR_StdOptional_B_GetMutable_s(MR.CS.StdOptional.B._Underlying *_this);
                        this.s = new(__MR_StdOptional_B_GetMutable_s(_UnderlyingPtr), is_owning: false);
                        this.s._KeepAliveEnclosingObject = this;
                    }
                }

                // Don't warn about some fields remaining conditionally uninitialized. We initialize them later.
                #pragma warning disable CS8618
                internal unsafe B(_Underlying *ptr, bool is_owning) : base(ptr, is_owning)
                {
                    if (ptr is not null)
                        _FinalizeFields();
                }
                #pragma warning restore CS8618

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe B() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_B_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.StdOptional.B._Underlying *__MR_StdOptional_B_DefaultConstruct();
                    _UnderlyingPtr = __MR_StdOptional_B_DefaultConstruct();
                    _FinalizeFields();
                }

                /// <summary>
                /// Constructs `MR::StdOptional::B` elementwise.
                /// </summary>
                public unsafe B(ReadOnlySpan<char> s) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_B_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.StdOptional.B._Underlying *__MR_StdOptional_B_ConstructFrom(byte *s, byte *s_end);
                    byte[] __bytes_s = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(s.Length)];
                    int __len_s = System.Text.Encoding.UTF8.GetBytes(s, __bytes_s);
                    fixed (byte *__ptr_s = __bytes_s)
                    {
                        _UnderlyingPtr = __MR_StdOptional_B_ConstructFrom(__ptr_s, __ptr_s + __len_s);
                        _FinalizeFields();
                    }
                }

                /// <summary>
                /// Generated from constructor `MR::StdOptional::B::B`.
                /// </summary>
                public unsafe B(MR.CS.StdOptional._ByValue_B _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_B_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.StdOptional.B._Underlying *__MR_StdOptional_B_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.StdOptional.B._Underlying *_other);
                    _UnderlyingPtr = __MR_StdOptional_B_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                    if (_other.Value is not null) _KeepAlive(_other.Value);
                    _FinalizeFields();
                }

                /// <summary>
                /// Generated from method `MR::StdOptional::B::operator=`.
                /// </summary>
                public unsafe MR.CS.StdOptional.B assign(MR.CS.StdOptional._ByValue_B _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_B_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.StdOptional.B._Underlying *__MR_StdOptional_B_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.StdOptional.B._Underlying *_other);
                    _DiscardKeepAlive();
                    if (_other.Value is not null) _KeepAlive(_other.Value);
                    return new(__MR_StdOptional_B_AssignFromAnother(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null), is_owning: false);
                }
            }

            /// <summary>
            /// This is used as a function parameter when the underlying function receives `B` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `B`/`Const_B` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            /// </summary>
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

            /// <summary>
            /// This is used as a function parameter when the underlying function receives an optional `B` by value,
            ///   and also has a default argument, meaning it has two different null states.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `B`/`Const_B` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument.
            /// * Pass `MR.CS.Misc.NullOptType` to pass no object.
            /// </summary>
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

            /// <summary>
            /// This is used for optional parameters of class `B` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_B`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `B`/`Const_B` directly.
            /// </summary>
            public class _InOptMut_B
            {
                public B? Opt;

                public _InOptMut_B() {}
                public _InOptMut_B(B value) {Opt = value;}
                public static implicit operator _InOptMut_B(B value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `B` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_B`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `B`/`Const_B` to pass it to the function.
            /// </summary>
            public class _InOptConst_B
            {
                public Const_B? Opt;

                public _InOptConst_B() {}
                public _InOptConst_B(Const_B value) {Opt = value;}
                public static implicit operator _InOptConst_B(Const_B value) {return new(value);}
            }

            /// <summary>
            /// Generated from function `MR::StdOptional::GetInt`.
            /// </summary>
            public static unsafe MR.CS.Std.Optional_Int getInt()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_GetInt", ExactSpelling = true)]
                extern static MR.CS.Std.Optional_Int._Underlying *__MR_StdOptional_GetInt();
                return new(__MR_StdOptional_GetInt(), is_owning: true);
            }

            /// <summary>
            /// Generated from function `MR::StdOptional::SetInt`.
            /// </summary>
            public static unsafe void setInt(int? _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_SetInt", ExactSpelling = true)]
                extern static void __MR_StdOptional_SetInt(int *_1);
                int __deref__1 = _1.GetValueOrDefault();
                __MR_StdOptional_SetInt(_1.HasValue ? &__deref__1 : null);
            }

            /// <summary>
            /// Generated from function `MR::StdOptional::SetIntConstRef`.
            /// </summary>
            public static unsafe void setIntConstRef(int? _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_SetIntConstRef", ExactSpelling = true)]
                extern static void __MR_StdOptional_SetIntConstRef(int *_1);
                int __deref__1 = _1.GetValueOrDefault();
                __MR_StdOptional_SetIntConstRef(_1.HasValue ? &__deref__1 : null);
            }

            /// <summary>
            /// Generated from function `MR::StdOptional::SetIntDefTrivial`.
            /// </summary>
            public static unsafe void setIntDefTrivial(int? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_SetIntDefTrivial", ExactSpelling = true)]
                extern static void __MR_StdOptional_SetIntDefTrivial(int *_1);
                int __deref__1 = _1.GetValueOrDefault();
                __MR_StdOptional_SetIntDefTrivial(_1.HasValue ? &__deref__1 : null);
            }

            /// <summary>
            /// Generated from function `MR::StdOptional::SetIntDef`.
            /// Parameter `_1` defaults to `42`.
            /// </summary>
            public static unsafe void setIntDef(MR.CS.Std.Const_Optional_Int? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_SetIntDef", ExactSpelling = true)]
                extern static void __MR_StdOptional_SetIntDef(MR.CS.Std.Optional_Int._Underlying *_1);
                __MR_StdOptional_SetIntDef(_1 is not null ? _1._UnderlyingPtr : null);
            }

            /// <summary>
            /// Generated from function `MR::StdOptional::GetEnum`.
            /// </summary>
            public static unsafe MR.CS.Std.Optional_MRStdOptionalE getEnum()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_GetEnum", ExactSpelling = true)]
                extern static MR.CS.Std.Optional_MRStdOptionalE._Underlying *__MR_StdOptional_GetEnum();
                return new(__MR_StdOptional_GetEnum(), is_owning: true);
            }

            /// <summary>
            /// Generated from function `MR::StdOptional::SetEnum`.
            /// </summary>
            public static unsafe void setEnum(MR.CS.StdOptional.E? _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_SetEnum", ExactSpelling = true)]
                extern static void __MR_StdOptional_SetEnum(MR.CS.StdOptional.E *_1);
                MR.CS.StdOptional.E __deref__1 = _1.GetValueOrDefault();
                __MR_StdOptional_SetEnum(_1.HasValue ? &__deref__1 : null);
            }

            /// <summary>
            /// Generated from function `MR::StdOptional::SetEnumConstRef`.
            /// </summary>
            public static unsafe void setEnumConstRef(MR.CS.StdOptional.E? _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_SetEnumConstRef", ExactSpelling = true)]
                extern static void __MR_StdOptional_SetEnumConstRef(MR.CS.StdOptional.E *_1);
                MR.CS.StdOptional.E __deref__1 = _1.GetValueOrDefault();
                __MR_StdOptional_SetEnumConstRef(_1.HasValue ? &__deref__1 : null);
            }

            /// <summary>
            /// Generated from function `MR::StdOptional::SetEnumDefTrivial`.
            /// </summary>
            public static unsafe void setEnumDefTrivial(MR.CS.StdOptional.E? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_SetEnumDefTrivial", ExactSpelling = true)]
                extern static void __MR_StdOptional_SetEnumDefTrivial(MR.CS.StdOptional.E *_1);
                MR.CS.StdOptional.E __deref__1 = _1.GetValueOrDefault();
                __MR_StdOptional_SetEnumDefTrivial(_1.HasValue ? &__deref__1 : null);
            }

            /// <summary>
            /// Generated from function `MR::StdOptional::SetEnumDef`.
            /// Parameter `_1` defaults to `E::e1`.
            /// </summary>
            public static unsafe void setEnumDef(MR.CS.Std.Const_Optional_MRStdOptionalE? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_SetEnumDef", ExactSpelling = true)]
                extern static void __MR_StdOptional_SetEnumDef(MR.CS.Std.Optional_MRStdOptionalE._Underlying *_1);
                __MR_StdOptional_SetEnumDef(_1 is not null ? _1._UnderlyingPtr : null);
            }

            /// <summary>
            /// Generated from function `MR::StdOptional::GetClass`.
            /// </summary>
            public static unsafe MR.CS.Std.Optional_MRStdOptionalA getClass()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_GetClass", ExactSpelling = true)]
                extern static MR.CS.Std.Optional_MRStdOptionalA._Underlying *__MR_StdOptional_GetClass();
                return new(__MR_StdOptional_GetClass(), is_owning: true);
            }

            /// <summary>
            /// Generated from function `MR::StdOptional::SetClass`.
            /// </summary>
            public static unsafe void setClass(MR.CS.StdOptional.Const_A? _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_SetClass", ExactSpelling = true)]
                extern static void __MR_StdOptional_SetClass(MR.CS.StdOptional.A._Underlying *_1);
                __MR_StdOptional_SetClass(_1 is not null ? _1._UnderlyingPtr : null);
            }

            /// <summary>
            /// Generated from function `MR::StdOptional::SetClassConstRef`.
            /// </summary>
            public static unsafe void setClassConstRef(MR.CS.StdOptional.Const_A? _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_SetClassConstRef", ExactSpelling = true)]
                extern static void __MR_StdOptional_SetClassConstRef(MR.CS.StdOptional.A._Underlying *_1);
                __MR_StdOptional_SetClassConstRef(_1 is not null ? _1._UnderlyingPtr : null);
            }

            /// <summary>
            /// Generated from function `MR::StdOptional::SetClassDefTrivial`.
            /// </summary>
            public static unsafe void setClassDefTrivial(MR.CS.StdOptional.Const_A? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_SetClassDefTrivial", ExactSpelling = true)]
                extern static void __MR_StdOptional_SetClassDefTrivial(MR.CS.StdOptional.A._Underlying *_1);
                __MR_StdOptional_SetClassDefTrivial(_1 is not null ? _1._UnderlyingPtr : null);
            }

            /// <summary>
            /// Generated from function `MR::StdOptional::SetClassDef`.
            /// Parameter `_1` defaults to `MR::StdOptional::A{42}`.
            /// </summary>
            public static unsafe void setClassDef(MR.CS.Std.Const_Optional_MRStdOptionalA? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_SetClassDef", ExactSpelling = true)]
                extern static void __MR_StdOptional_SetClassDef(MR.CS.Std.Optional_MRStdOptionalA._Underlying *_1);
                __MR_StdOptional_SetClassDef(_1 is not null ? _1._UnderlyingPtr : null);
            }

            /// <summary>
            /// Generated from function `MR::StdOptional::GetClass2`.
            /// </summary>
            public static unsafe MR.CS.Misc._Moved<MR.CS.Std.Optional_MRStdOptionalB> getClass2()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_GetClass2", ExactSpelling = true)]
                extern static MR.CS.Std.Optional_MRStdOptionalB._Underlying *__MR_StdOptional_GetClass2();
                return MR.CS.Misc.Move(new MR.CS.Std.Optional_MRStdOptionalB(__MR_StdOptional_GetClass2(), is_owning: true));
            }

            /// <summary>
            /// Generated from function `MR::StdOptional::SetClass2`.
            /// </summary>
            public static unsafe void setClass2(MR.CS.StdOptional._ByValue_B? _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_SetClass2", ExactSpelling = true)]
                extern static void __MR_StdOptional_SetClass2(MR.CS.Misc._PassBy _1_pass_by, MR.CS.StdOptional.B._Underlying *_1);
                __MR_StdOptional_SetClass2(_1 is not null ? _1.PassByMode : MR.CS.Misc._PassBy.no_object, _1 is not null && _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// <summary>
            /// Generated from function `MR::StdOptional::SetClass2ConstRef`.
            /// </summary>
            public static unsafe void setClass2ConstRef(MR.CS.StdOptional._ByValue_B? _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_SetClass2ConstRef", ExactSpelling = true)]
                extern static void __MR_StdOptional_SetClass2ConstRef(MR.CS.Misc._PassBy _1_pass_by, MR.CS.StdOptional.B._Underlying *_1);
                __MR_StdOptional_SetClass2ConstRef(_1 is not null ? _1.PassByMode : MR.CS.Misc._PassBy.no_object, _1 is not null && _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// <summary>
            /// Generated from function `MR::StdOptional::SetClass2DefTrivial`.
            /// </summary>
            public static unsafe void setClass2DefTrivial(MR.CS.StdOptional._ByValue_B? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_SetClass2DefTrivial", ExactSpelling = true)]
                extern static void __MR_StdOptional_SetClass2DefTrivial(MR.CS.Misc._PassBy _1_pass_by, MR.CS.StdOptional.B._Underlying *_1);
                __MR_StdOptional_SetClass2DefTrivial(_1 is not null ? _1.PassByMode : MR.CS.Misc._PassBy.no_object, _1 is not null && _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// <summary>
            /// Generated from function `MR::StdOptional::SetClass2Def`.
            /// Parameter `_1` defaults to `MR::StdOptional::B{"blah"}`.
            /// </summary>
            public static unsafe void setClass2Def(MR.CS.StdOptional._ByValueOptOpt_B? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdOptional_SetClass2Def", ExactSpelling = true)]
                extern static void __MR_StdOptional_SetClass2Def(MR.CS.Misc._PassBy _1_pass_by, MR.CS.StdOptional.B._Underlying *_1);
                __MR_StdOptional_SetClass2Def(_1 is not null ? _1.PassByMode : MR.CS.Misc._PassBy.default_arg, _1 is not null && _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }
        }
    }
}
