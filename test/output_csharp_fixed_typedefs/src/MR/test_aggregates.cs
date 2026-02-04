public static partial class MR
{
    public static partial class CS
    {
        public static partial class Aggregates
        {
            // Aggregates get elementwise constructors. This is necessary if their elements are not default-constructible,
            //   because otherwise there would be no way to construct them.
            /// <summary>
            /// Generated from class `MR::Aggregates::A`.
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
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_A_Destroy", ExactSpelling = true)]
                    extern static void __MR_Aggregates_A_Destroy(_Underlying *_this);
                    __MR_Aggregates_A_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_A() {Dispose(false);}

                public unsafe int x => *__ref_storage_x;
                private protected unsafe int *__ref_storage_x;

                public unsafe MR.CS.Std.Const_String y {get; private protected set;}

                /// <summary>
                /// Constructors call this at the end to initialize class fields.
                /// </summary>
                protected unsafe void _FinalizeFields()
                {
                    { // x (ref)
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_A_Get_x", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_A_Get_x(MR.CS.Aggregates.Const_A._Underlying *_this);
                        this.__ref_storage_x = __MR_Aggregates_A_Get_x(_UnderlyingPtr);
                    }

                    { // y
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_A_Get_y", ExactSpelling = true)]
                        extern static MR.CS.Std.Const_String._Underlying *__MR_Aggregates_A_Get_y(MR.CS.Aggregates.Const_A._Underlying *_this);
                        this.y = new(__MR_Aggregates_A_Get_y(_UnderlyingPtr), is_owning: false);
                        this.y._KeepAliveEnclosingObject = this;
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
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.A._Underlying *__MR_Aggregates_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_Aggregates_A_DefaultConstruct();
                    _FinalizeFields();
                }

                /// <summary>
                /// Constructs `MR::Aggregates::A` elementwise.
                /// </summary>
                public unsafe Const_A(int x, ReadOnlySpan<char> y) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_A_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.A._Underlying *__MR_Aggregates_A_ConstructFrom(int x, byte *y, byte *y_end);
                    byte[] __bytes_y = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(y.Length)];
                    int __len_y = System.Text.Encoding.UTF8.GetBytes(y, __bytes_y);
                    fixed (byte *__ptr_y = __bytes_y)
                    {
                        _UnderlyingPtr = __MR_Aggregates_A_ConstructFrom(x, __ptr_y, __ptr_y + __len_y);
                        _FinalizeFields();
                    }
                }

                /// <summary>
                /// Generated from constructor `MR::Aggregates::A::A`.
                /// </summary>
                public unsafe Const_A(MR.CS.Aggregates._ByValue_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.A._Underlying *__MR_Aggregates_A_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.Aggregates.A._Underlying *_other);
                    _UnderlyingPtr = __MR_Aggregates_A_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                    if (_other.Value is not null) _KeepAlive(_other.Value);
                    _FinalizeFields();
                }

                /// <summary>
                /// Generated from constructor `MR::Aggregates::A::A`.
                /// </summary>
                public Const_A(Const_A _other) : this(new _ByValue_A(_other)) {}

                /// <summary>
                /// Generated from constructor `MR::Aggregates::A::A`.
                /// </summary>
                public Const_A(A _other) : this((Const_A)_other) {}
            }

            // Aggregates get elementwise constructors. This is necessary if their elements are not default-constructible,
            //   because otherwise there would be no way to construct them.
            /// <summary>
            /// Generated from class `MR::Aggregates::A`.
            /// This is the non-const half of the class.
            /// </summary>
            public class A : Const_A
            {
                public new unsafe ref int x => ref *__ref_storage_x;

                public new unsafe MR.CS.Std.String y {get; private protected set;}

                /// <summary>
                /// Constructors call this at the end to initialize class fields.
                /// </summary>
                protected new unsafe void _FinalizeFields()
                {
                    base._FinalizeFields();

                    { // y
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_A_GetMutable_y", ExactSpelling = true)]
                        extern static MR.CS.Std.String._Underlying *__MR_Aggregates_A_GetMutable_y(MR.CS.Aggregates.A._Underlying *_this);
                        this.y = new(__MR_Aggregates_A_GetMutable_y(_UnderlyingPtr), is_owning: false);
                        this.y._KeepAliveEnclosingObject = this;
                    }
                }

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
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.A._Underlying *__MR_Aggregates_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_Aggregates_A_DefaultConstruct();
                    _FinalizeFields();
                }

                /// <summary>
                /// Constructs `MR::Aggregates::A` elementwise.
                /// </summary>
                public unsafe A(int x, ReadOnlySpan<char> y) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_A_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.A._Underlying *__MR_Aggregates_A_ConstructFrom(int x, byte *y, byte *y_end);
                    byte[] __bytes_y = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(y.Length)];
                    int __len_y = System.Text.Encoding.UTF8.GetBytes(y, __bytes_y);
                    fixed (byte *__ptr_y = __bytes_y)
                    {
                        _UnderlyingPtr = __MR_Aggregates_A_ConstructFrom(x, __ptr_y, __ptr_y + __len_y);
                        _FinalizeFields();
                    }
                }

                /// <summary>
                /// Generated from constructor `MR::Aggregates::A::A`.
                /// </summary>
                public unsafe A(MR.CS.Aggregates._ByValue_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.A._Underlying *__MR_Aggregates_A_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.Aggregates.A._Underlying *_other);
                    _UnderlyingPtr = __MR_Aggregates_A_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                    if (_other.Value is not null) _KeepAlive(_other.Value);
                    _FinalizeFields();
                }

                /// <summary>
                /// Generated from constructor `MR::Aggregates::A::A`.
                /// </summary>
                public A(Const_A _other) : this(new _ByValue_A(_other)) {}

                /// <summary>
                /// Generated from constructor `MR::Aggregates::A::A`.
                /// </summary>
                public A(A _other) : this((Const_A)_other) {}

                /// <summary>
                /// Generated from method `MR::Aggregates::A::operator=`.
                /// </summary>
                public unsafe MR.CS.Aggregates.A assign(MR.CS.Aggregates._ByValue_A _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_A_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.A._Underlying *__MR_Aggregates_A_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.Aggregates.A._Underlying *_other);
                    _DiscardKeepAlive();
                    if (_other.Value is not null) _KeepAlive(_other.Value);
                    return new(__MR_Aggregates_A_AssignFromAnother(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null), is_owning: false);
                }
            }

            /// <summary>
            /// This is used as a function parameter when the underlying function receives `A` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `A`/`Const_A` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            /// </summary>
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

            // This is an empty aggregate, it doesn't need an elementwise constructor.
            /// <summary>
            /// Generated from class `MR::Aggregates::B`.
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
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_B_Destroy", ExactSpelling = true)]
                    extern static void __MR_Aggregates_B_Destroy(_Underlying *_this);
                    __MR_Aggregates_B_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_B() {Dispose(false);}

                internal unsafe Const_B(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_B() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_B_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.B._Underlying *__MR_Aggregates_B_DefaultConstruct();
                    _UnderlyingPtr = __MR_Aggregates_B_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::Aggregates::B::B`.
                /// </summary>
                public unsafe Const_B(MR.CS.Aggregates.Const_B _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_B_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.B._Underlying *__MR_Aggregates_B_ConstructFromAnother(MR.CS.Aggregates.B._Underlying *_other);
                    _UnderlyingPtr = __MR_Aggregates_B_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// <summary>
                /// Generated from constructor `MR::Aggregates::B::B`.
                /// </summary>
                public Const_B(B _other) : this((Const_B)_other) {}
            }

            // This is an empty aggregate, it doesn't need an elementwise constructor.
            /// <summary>
            /// Generated from class `MR::Aggregates::B`.
            /// This is the non-const half of the class.
            /// </summary>
            public class B : Const_B
            {
                internal unsafe B(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe B() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_B_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.B._Underlying *__MR_Aggregates_B_DefaultConstruct();
                    _UnderlyingPtr = __MR_Aggregates_B_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::Aggregates::B::B`.
                /// </summary>
                public unsafe B(MR.CS.Aggregates.Const_B _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_B_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.B._Underlying *__MR_Aggregates_B_ConstructFromAnother(MR.CS.Aggregates.B._Underlying *_other);
                    _UnderlyingPtr = __MR_Aggregates_B_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// <summary>
                /// Generated from constructor `MR::Aggregates::B::B`.
                /// </summary>
                public B(B _other) : this((Const_B)_other) {}

                /// <summary>
                /// Generated from method `MR::Aggregates::B::operator=`.
                /// </summary>
                public unsafe MR.CS.Aggregates.B assign(MR.CS.Aggregates.Const_B _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_B_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.B._Underlying *__MR_Aggregates_B_AssignFromAnother(_Underlying *_this, MR.CS.Aggregates.B._Underlying *_other);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_Aggregates_B_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }
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
            /// Generated from class `MR::Aggregates::NonDefaultConstructible`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_NonDefaultConstructible : MR.CS.Misc.Object<Const_NonDefaultConstructible>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_NonDefaultConstructible_Destroy", ExactSpelling = true)]
                    extern static void __MR_Aggregates_NonDefaultConstructible_Destroy(_Underlying *_this);
                    __MR_Aggregates_NonDefaultConstructible_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_NonDefaultConstructible() {Dispose(false);}

                internal unsafe Const_NonDefaultConstructible(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Generated from constructor `MR::Aggregates::NonDefaultConstructible::NonDefaultConstructible`.
                /// </summary>
                public unsafe Const_NonDefaultConstructible(MR.CS.Aggregates.Const_NonDefaultConstructible _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_NonDefaultConstructible_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.NonDefaultConstructible._Underlying *__MR_Aggregates_NonDefaultConstructible_ConstructFromAnother(MR.CS.Aggregates.NonDefaultConstructible._Underlying *_other);
                    _UnderlyingPtr = __MR_Aggregates_NonDefaultConstructible_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// <summary>
                /// Generated from constructor `MR::Aggregates::NonDefaultConstructible::NonDefaultConstructible`.
                /// </summary>
                public Const_NonDefaultConstructible(NonDefaultConstructible _other) : this((Const_NonDefaultConstructible)_other) {}
            }

            /// <summary>
            /// Generated from class `MR::Aggregates::NonDefaultConstructible`.
            /// This is the non-const half of the class.
            /// </summary>
            public class NonDefaultConstructible : Const_NonDefaultConstructible
            {
                internal unsafe NonDefaultConstructible(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Generated from constructor `MR::Aggregates::NonDefaultConstructible::NonDefaultConstructible`.
                /// </summary>
                public unsafe NonDefaultConstructible(MR.CS.Aggregates.Const_NonDefaultConstructible _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_NonDefaultConstructible_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.NonDefaultConstructible._Underlying *__MR_Aggregates_NonDefaultConstructible_ConstructFromAnother(MR.CS.Aggregates.NonDefaultConstructible._Underlying *_other);
                    _UnderlyingPtr = __MR_Aggregates_NonDefaultConstructible_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// <summary>
                /// Generated from constructor `MR::Aggregates::NonDefaultConstructible::NonDefaultConstructible`.
                /// </summary>
                public NonDefaultConstructible(NonDefaultConstructible _other) : this((Const_NonDefaultConstructible)_other) {}

                /// <summary>
                /// Generated from method `MR::Aggregates::NonDefaultConstructible::operator=`.
                /// </summary>
                public unsafe MR.CS.Aggregates.NonDefaultConstructible assign(MR.CS.Aggregates.Const_NonDefaultConstructible _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_NonDefaultConstructible_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.NonDefaultConstructible._Underlying *__MR_Aggregates_NonDefaultConstructible_AssignFromAnother(_Underlying *_this, MR.CS.Aggregates.NonDefaultConstructible._Underlying *_other);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_Aggregates_NonDefaultConstructible_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }
            }

            /// <summary>
            /// This is used for optional parameters of class `NonDefaultConstructible` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_NonDefaultConstructible`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `NonDefaultConstructible`/`Const_NonDefaultConstructible` directly.
            /// </summary>
            public class _InOptMut_NonDefaultConstructible
            {
                public NonDefaultConstructible? Opt;

                public _InOptMut_NonDefaultConstructible() {}
                public _InOptMut_NonDefaultConstructible(NonDefaultConstructible value) {Opt = value;}
                public static implicit operator _InOptMut_NonDefaultConstructible(NonDefaultConstructible value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `NonDefaultConstructible` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_NonDefaultConstructible`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `NonDefaultConstructible`/`Const_NonDefaultConstructible` to pass it to the function.
            /// </summary>
            public class _InOptConst_NonDefaultConstructible
            {
                public Const_NonDefaultConstructible? Opt;

                public _InOptConst_NonDefaultConstructible() {}
                public _InOptConst_NonDefaultConstructible(Const_NonDefaultConstructible value) {Opt = value;}
                public static implicit operator _InOptConst_NonDefaultConstructible(Const_NonDefaultConstructible value) {return new(value);}
            }

            // Test the optional limit on the number of fields that we aggregate-initialize.
            /// <summary>
            /// Generated from class `MR::Aggregates::C`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_C : MR.CS.Misc.Object<Const_C>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_C_Destroy", ExactSpelling = true)]
                    extern static void __MR_Aggregates_C_Destroy(_Underlying *_this);
                    __MR_Aggregates_C_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_C() {Dispose(false);}

                public unsafe int a => *__ref_storage_a;
                private protected unsafe int *__ref_storage_a;

                public unsafe int b => *__ref_storage_b;
                private protected unsafe int *__ref_storage_b;

                public unsafe int c => *__ref_storage_c;
                private protected unsafe int *__ref_storage_c;

                public unsafe int d => *__ref_storage_d;
                private protected unsafe int *__ref_storage_d;

                public unsafe int e => *__ref_storage_e;
                private protected unsafe int *__ref_storage_e;

                public unsafe int f => *__ref_storage_f;
                private protected unsafe int *__ref_storage_f;

                public unsafe int g => *__ref_storage_g;
                private protected unsafe int *__ref_storage_g;

                public unsafe int h => *__ref_storage_h;
                private protected unsafe int *__ref_storage_h;

                /// <summary>
                /// Constructors call this at the end to initialize class fields.
                /// </summary>
                protected unsafe void _FinalizeFields()
                {
                    { // a (ref)
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_C_Get_a", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_C_Get_a(MR.CS.Aggregates.Const_C._Underlying *_this);
                        this.__ref_storage_a = __MR_Aggregates_C_Get_a(_UnderlyingPtr);
                    }

                    { // b (ref)
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_C_Get_b", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_C_Get_b(MR.CS.Aggregates.Const_C._Underlying *_this);
                        this.__ref_storage_b = __MR_Aggregates_C_Get_b(_UnderlyingPtr);
                    }

                    { // c (ref)
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_C_Get_c", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_C_Get_c(MR.CS.Aggregates.Const_C._Underlying *_this);
                        this.__ref_storage_c = __MR_Aggregates_C_Get_c(_UnderlyingPtr);
                    }

                    { // d (ref)
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_C_Get_d", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_C_Get_d(MR.CS.Aggregates.Const_C._Underlying *_this);
                        this.__ref_storage_d = __MR_Aggregates_C_Get_d(_UnderlyingPtr);
                    }

                    { // e (ref)
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_C_Get_e", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_C_Get_e(MR.CS.Aggregates.Const_C._Underlying *_this);
                        this.__ref_storage_e = __MR_Aggregates_C_Get_e(_UnderlyingPtr);
                    }

                    { // f (ref)
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_C_Get_f", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_C_Get_f(MR.CS.Aggregates.Const_C._Underlying *_this);
                        this.__ref_storage_f = __MR_Aggregates_C_Get_f(_UnderlyingPtr);
                    }

                    { // g (ref)
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_C_Get_g", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_C_Get_g(MR.CS.Aggregates.Const_C._Underlying *_this);
                        this.__ref_storage_g = __MR_Aggregates_C_Get_g(_UnderlyingPtr);
                    }

                    { // h (ref)
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_C_Get_h", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_C_Get_h(MR.CS.Aggregates.Const_C._Underlying *_this);
                        this.__ref_storage_h = __MR_Aggregates_C_Get_h(_UnderlyingPtr);
                    }
                }

                // Don't warn about some fields remaining conditionally uninitialized. We initialize them later.
                #pragma warning disable CS8618
                internal unsafe Const_C(_Underlying *ptr, bool is_owning) : base(is_owning)
                {
                    _UnderlyingPtr = ptr;
                    if (ptr is not null)
                        _FinalizeFields();
                }
                #pragma warning restore CS8618

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_C() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_C_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.C._Underlying *__MR_Aggregates_C_DefaultConstruct();
                    _UnderlyingPtr = __MR_Aggregates_C_DefaultConstruct();
                    _FinalizeFields();
                }

                /// <summary>
                /// Constructs `MR::Aggregates::C` elementwise.
                /// </summary>
                public unsafe Const_C(int a, int b, int c, int d, int e, int f, int g, int h) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_C_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.C._Underlying *__MR_Aggregates_C_ConstructFrom(int a, int b, int c, int d, int e, int f, int g, int h);
                    _UnderlyingPtr = __MR_Aggregates_C_ConstructFrom(a, b, c, d, e, f, g, h);
                    _FinalizeFields();
                }

                /// <summary>
                /// Generated from constructor `MR::Aggregates::C::C`.
                /// </summary>
                public unsafe Const_C(MR.CS.Aggregates.Const_C _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_C_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.C._Underlying *__MR_Aggregates_C_ConstructFromAnother(MR.CS.Aggregates.C._Underlying *_other);
                    _UnderlyingPtr = __MR_Aggregates_C_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                    _FinalizeFields();
                }

                /// <summary>
                /// Generated from constructor `MR::Aggregates::C::C`.
                /// </summary>
                public Const_C(C _other) : this((Const_C)_other) {}
            }

            // Test the optional limit on the number of fields that we aggregate-initialize.
            /// <summary>
            /// Generated from class `MR::Aggregates::C`.
            /// This is the non-const half of the class.
            /// </summary>
            public class C : Const_C
            {
                public new unsafe ref int a => ref *__ref_storage_a;

                public new unsafe ref int b => ref *__ref_storage_b;

                public new unsafe ref int c => ref *__ref_storage_c;

                public new unsafe ref int d => ref *__ref_storage_d;

                public new unsafe ref int e => ref *__ref_storage_e;

                public new unsafe ref int f => ref *__ref_storage_f;

                public new unsafe ref int g => ref *__ref_storage_g;

                public new unsafe ref int h => ref *__ref_storage_h;

                // Don't warn about some fields remaining conditionally uninitialized. We initialize them later.
                #pragma warning disable CS8618
                internal unsafe C(_Underlying *ptr, bool is_owning) : base(ptr, is_owning)
                {
                    if (ptr is not null)
                        _FinalizeFields();
                }
                #pragma warning restore CS8618

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe C() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_C_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.C._Underlying *__MR_Aggregates_C_DefaultConstruct();
                    _UnderlyingPtr = __MR_Aggregates_C_DefaultConstruct();
                    _FinalizeFields();
                }

                /// <summary>
                /// Constructs `MR::Aggregates::C` elementwise.
                /// </summary>
                public unsafe C(int a, int b, int c, int d, int e, int f, int g, int h) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_C_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.C._Underlying *__MR_Aggregates_C_ConstructFrom(int a, int b, int c, int d, int e, int f, int g, int h);
                    _UnderlyingPtr = __MR_Aggregates_C_ConstructFrom(a, b, c, d, e, f, g, h);
                    _FinalizeFields();
                }

                /// <summary>
                /// Generated from constructor `MR::Aggregates::C::C`.
                /// </summary>
                public unsafe C(MR.CS.Aggregates.Const_C _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_C_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.C._Underlying *__MR_Aggregates_C_ConstructFromAnother(MR.CS.Aggregates.C._Underlying *_other);
                    _UnderlyingPtr = __MR_Aggregates_C_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                    _FinalizeFields();
                }

                /// <summary>
                /// Generated from constructor `MR::Aggregates::C::C`.
                /// </summary>
                public C(C _other) : this((Const_C)_other) {}

                /// <summary>
                /// Generated from method `MR::Aggregates::C::operator=`.
                /// </summary>
                public unsafe MR.CS.Aggregates.C assign(MR.CS.Aggregates.Const_C _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_C_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.C._Underlying *__MR_Aggregates_C_AssignFromAnother(_Underlying *_this, MR.CS.Aggregates.C._Underlying *_other);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_Aggregates_C_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }
            }

            /// <summary>
            /// This is used for optional parameters of class `C` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_C`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `C`/`Const_C` directly.
            /// </summary>
            public class _InOptMut_C
            {
                public C? Opt;

                public _InOptMut_C() {}
                public _InOptMut_C(C value) {Opt = value;}
                public static implicit operator _InOptMut_C(C value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `C` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_C`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `C`/`Const_C` to pass it to the function.
            /// </summary>
            public class _InOptConst_C
            {
                public Const_C? Opt;

                public _InOptConst_C() {}
                public _InOptConst_C(Const_C value) {Opt = value;}
                public static implicit operator _InOptConst_C(Const_C value) {return new(value);}
            }

            /// <summary>
            /// Generated from class `MR::Aggregates::D`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_D : MR.CS.Misc.Object<Const_D>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_D_Destroy", ExactSpelling = true)]
                    extern static void __MR_Aggregates_D_Destroy(_Underlying *_this);
                    __MR_Aggregates_D_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_D() {Dispose(false);}

                public unsafe int a => *__ref_storage_a;
                private protected unsafe int *__ref_storage_a;

                public unsafe int b => *__ref_storage_b;
                private protected unsafe int *__ref_storage_b;

                public unsafe int c => *__ref_storage_c;
                private protected unsafe int *__ref_storage_c;

                public unsafe int d => *__ref_storage_d;
                private protected unsafe int *__ref_storage_d;

                public unsafe int e => *__ref_storage_e;
                private protected unsafe int *__ref_storage_e;

                public unsafe int f => *__ref_storage_f;
                private protected unsafe int *__ref_storage_f;

                public unsafe int g => *__ref_storage_g;
                private protected unsafe int *__ref_storage_g;

                public unsafe int h => *__ref_storage_h;
                private protected unsafe int *__ref_storage_h;

                public unsafe int i => *__ref_storage_i;
                private protected unsafe int *__ref_storage_i;

                /// <summary>
                /// Constructors call this at the end to initialize class fields.
                /// </summary>
                protected unsafe void _FinalizeFields()
                {
                    { // a (ref)
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_D_Get_a", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_D_Get_a(MR.CS.Aggregates.Const_D._Underlying *_this);
                        this.__ref_storage_a = __MR_Aggregates_D_Get_a(_UnderlyingPtr);
                    }

                    { // b (ref)
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_D_Get_b", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_D_Get_b(MR.CS.Aggregates.Const_D._Underlying *_this);
                        this.__ref_storage_b = __MR_Aggregates_D_Get_b(_UnderlyingPtr);
                    }

                    { // c (ref)
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_D_Get_c", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_D_Get_c(MR.CS.Aggregates.Const_D._Underlying *_this);
                        this.__ref_storage_c = __MR_Aggregates_D_Get_c(_UnderlyingPtr);
                    }

                    { // d (ref)
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_D_Get_d", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_D_Get_d(MR.CS.Aggregates.Const_D._Underlying *_this);
                        this.__ref_storage_d = __MR_Aggregates_D_Get_d(_UnderlyingPtr);
                    }

                    { // e (ref)
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_D_Get_e", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_D_Get_e(MR.CS.Aggregates.Const_D._Underlying *_this);
                        this.__ref_storage_e = __MR_Aggregates_D_Get_e(_UnderlyingPtr);
                    }

                    { // f (ref)
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_D_Get_f", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_D_Get_f(MR.CS.Aggregates.Const_D._Underlying *_this);
                        this.__ref_storage_f = __MR_Aggregates_D_Get_f(_UnderlyingPtr);
                    }

                    { // g (ref)
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_D_Get_g", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_D_Get_g(MR.CS.Aggregates.Const_D._Underlying *_this);
                        this.__ref_storage_g = __MR_Aggregates_D_Get_g(_UnderlyingPtr);
                    }

                    { // h (ref)
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_D_Get_h", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_D_Get_h(MR.CS.Aggregates.Const_D._Underlying *_this);
                        this.__ref_storage_h = __MR_Aggregates_D_Get_h(_UnderlyingPtr);
                    }

                    { // i (ref)
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_D_Get_i", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_D_Get_i(MR.CS.Aggregates.Const_D._Underlying *_this);
                        this.__ref_storage_i = __MR_Aggregates_D_Get_i(_UnderlyingPtr);
                    }
                }

                // Don't warn about some fields remaining conditionally uninitialized. We initialize them later.
                #pragma warning disable CS8618
                internal unsafe Const_D(_Underlying *ptr, bool is_owning) : base(is_owning)
                {
                    _UnderlyingPtr = ptr;
                    if (ptr is not null)
                        _FinalizeFields();
                }
                #pragma warning restore CS8618

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_D() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_D_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.D._Underlying *__MR_Aggregates_D_DefaultConstruct();
                    _UnderlyingPtr = __MR_Aggregates_D_DefaultConstruct();
                    _FinalizeFields();
                }

                /// <summary>
                /// Generated from constructor `MR::Aggregates::D::D`.
                /// </summary>
                public unsafe Const_D(MR.CS.Aggregates.Const_D _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_D_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.D._Underlying *__MR_Aggregates_D_ConstructFromAnother(MR.CS.Aggregates.D._Underlying *_other);
                    _UnderlyingPtr = __MR_Aggregates_D_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                    _FinalizeFields();
                }

                /// <summary>
                /// Generated from constructor `MR::Aggregates::D::D`.
                /// </summary>
                public Const_D(D _other) : this((Const_D)_other) {}
            }

            /// <summary>
            /// Generated from class `MR::Aggregates::D`.
            /// This is the non-const half of the class.
            /// </summary>
            public class D : Const_D
            {
                public new unsafe ref int a => ref *__ref_storage_a;

                public new unsafe ref int b => ref *__ref_storage_b;

                public new unsafe ref int c => ref *__ref_storage_c;

                public new unsafe ref int d => ref *__ref_storage_d;

                public new unsafe ref int e => ref *__ref_storage_e;

                public new unsafe ref int f => ref *__ref_storage_f;

                public new unsafe ref int g => ref *__ref_storage_g;

                public new unsafe ref int h => ref *__ref_storage_h;

                public new unsafe ref int i => ref *__ref_storage_i;

                // Don't warn about some fields remaining conditionally uninitialized. We initialize them later.
                #pragma warning disable CS8618
                internal unsafe D(_Underlying *ptr, bool is_owning) : base(ptr, is_owning)
                {
                    if (ptr is not null)
                        _FinalizeFields();
                }
                #pragma warning restore CS8618

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe D() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_D_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.D._Underlying *__MR_Aggregates_D_DefaultConstruct();
                    _UnderlyingPtr = __MR_Aggregates_D_DefaultConstruct();
                    _FinalizeFields();
                }

                /// <summary>
                /// Generated from constructor `MR::Aggregates::D::D`.
                /// </summary>
                public unsafe D(MR.CS.Aggregates.Const_D _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_D_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.D._Underlying *__MR_Aggregates_D_ConstructFromAnother(MR.CS.Aggregates.D._Underlying *_other);
                    _UnderlyingPtr = __MR_Aggregates_D_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                    _FinalizeFields();
                }

                /// <summary>
                /// Generated from constructor `MR::Aggregates::D::D`.
                /// </summary>
                public D(D _other) : this((Const_D)_other) {}

                /// <summary>
                /// Generated from method `MR::Aggregates::D::operator=`.
                /// </summary>
                public unsafe MR.CS.Aggregates.D assign(MR.CS.Aggregates.Const_D _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_D_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.D._Underlying *__MR_Aggregates_D_AssignFromAnother(_Underlying *_this, MR.CS.Aggregates.D._Underlying *_other);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_Aggregates_D_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }
            }

            /// <summary>
            /// This is used for optional parameters of class `D` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_D`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `D`/`Const_D` directly.
            /// </summary>
            public class _InOptMut_D
            {
                public D? Opt;

                public _InOptMut_D() {}
                public _InOptMut_D(D value) {Opt = value;}
                public static implicit operator _InOptMut_D(D value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `D` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_D`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `D`/`Const_D` to pass it to the function.
            /// </summary>
            public class _InOptConst_D
            {
                public Const_D? Opt;

                public _InOptConst_D() {}
                public _InOptConst_D(Const_D value) {Opt = value;}
                public static implicit operator _InOptConst_D(Const_D value) {return new(value);}
            }

            /// <summary>
            /// Generated from class `MR::Aggregates::E`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_E : MR.CS.Misc.Object<Const_E>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_E_Destroy", ExactSpelling = true)]
                    extern static void __MR_Aggregates_E_Destroy(_Underlying *_this);
                    __MR_Aggregates_E_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_E() {Dispose(false);}

                // This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
                public unsafe int a => *__ref_storage_a;
                private protected unsafe int *__ref_storage_a;

                // This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
                public unsafe int b => *__ref_storage_b;
                private protected unsafe int *__ref_storage_b;

                // This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
                public unsafe int c => *__ref_storage_c;
                private protected unsafe int *__ref_storage_c;

                // This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
                public unsafe int d => *__ref_storage_d;
                private protected unsafe int *__ref_storage_d;

                // This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
                public unsafe int e => *__ref_storage_e;
                private protected unsafe int *__ref_storage_e;

                // This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
                public unsafe int f => *__ref_storage_f;
                private protected unsafe int *__ref_storage_f;

                // This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
                public unsafe int g => *__ref_storage_g;
                private protected unsafe int *__ref_storage_g;

                // This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
                public unsafe int h => *__ref_storage_h;
                private protected unsafe int *__ref_storage_h;

                // This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
                public unsafe int i => *__ref_storage_i;
                private protected unsafe int *__ref_storage_i;

                // This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
                public unsafe MR.CS.Aggregates.Const_NonDefaultConstructible j {get; private protected set;}

                /// <summary>
                /// Constructors call this at the end to initialize class fields.
                /// </summary>
                protected unsafe void _FinalizeFields()
                {
                    { // a (ref)
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_E_Get_a", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_E_Get_a(MR.CS.Aggregates.Const_E._Underlying *_this);
                        this.__ref_storage_a = __MR_Aggregates_E_Get_a(_UnderlyingPtr);
                    }

                    { // b (ref)
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_E_Get_b", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_E_Get_b(MR.CS.Aggregates.Const_E._Underlying *_this);
                        this.__ref_storage_b = __MR_Aggregates_E_Get_b(_UnderlyingPtr);
                    }

                    { // c (ref)
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_E_Get_c", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_E_Get_c(MR.CS.Aggregates.Const_E._Underlying *_this);
                        this.__ref_storage_c = __MR_Aggregates_E_Get_c(_UnderlyingPtr);
                    }

                    { // d (ref)
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_E_Get_d", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_E_Get_d(MR.CS.Aggregates.Const_E._Underlying *_this);
                        this.__ref_storage_d = __MR_Aggregates_E_Get_d(_UnderlyingPtr);
                    }

                    { // e (ref)
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_E_Get_e", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_E_Get_e(MR.CS.Aggregates.Const_E._Underlying *_this);
                        this.__ref_storage_e = __MR_Aggregates_E_Get_e(_UnderlyingPtr);
                    }

                    { // f (ref)
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_E_Get_f", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_E_Get_f(MR.CS.Aggregates.Const_E._Underlying *_this);
                        this.__ref_storage_f = __MR_Aggregates_E_Get_f(_UnderlyingPtr);
                    }

                    { // g (ref)
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_E_Get_g", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_E_Get_g(MR.CS.Aggregates.Const_E._Underlying *_this);
                        this.__ref_storage_g = __MR_Aggregates_E_Get_g(_UnderlyingPtr);
                    }

                    { // h (ref)
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_E_Get_h", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_E_Get_h(MR.CS.Aggregates.Const_E._Underlying *_this);
                        this.__ref_storage_h = __MR_Aggregates_E_Get_h(_UnderlyingPtr);
                    }

                    { // i (ref)
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_E_Get_i", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_E_Get_i(MR.CS.Aggregates.Const_E._Underlying *_this);
                        this.__ref_storage_i = __MR_Aggregates_E_Get_i(_UnderlyingPtr);
                    }

                    { // j
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_E_Get_j", ExactSpelling = true)]
                        extern static MR.CS.Aggregates.Const_NonDefaultConstructible._Underlying *__MR_Aggregates_E_Get_j(MR.CS.Aggregates.Const_E._Underlying *_this);
                        this.j = new(__MR_Aggregates_E_Get_j(_UnderlyingPtr), is_owning: false);
                        this.j._KeepAliveEnclosingObject = this;
                    }
                }

                // Don't warn about some fields remaining conditionally uninitialized. We initialize them later.
                #pragma warning disable CS8618
                internal unsafe Const_E(_Underlying *ptr, bool is_owning) : base(is_owning)
                {
                    _UnderlyingPtr = ptr;
                    if (ptr is not null)
                        _FinalizeFields();
                }
                #pragma warning restore CS8618

                /// <summary>
                /// Generated from constructor `MR::Aggregates::E::E`.
                /// </summary>
                public unsafe Const_E(MR.CS.Aggregates.Const_E _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_E_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.E._Underlying *__MR_Aggregates_E_ConstructFromAnother(MR.CS.Aggregates.E._Underlying *_other);
                    _UnderlyingPtr = __MR_Aggregates_E_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                    _FinalizeFields();
                }

                /// <summary>
                /// Generated from constructor `MR::Aggregates::E::E`.
                /// </summary>
                public Const_E(E _other) : this((Const_E)_other) {}

                /// <summary>
                /// Constructs `MR::Aggregates::E` elementwise.
                /// </summary>
                public unsafe Const_E(int a, int b, int c, int d, int e, int f, int g, int h, int i, MR.CS.Aggregates.Const_NonDefaultConstructible j) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_E_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.E._Underlying *__MR_Aggregates_E_ConstructFrom(int a, int b, int c, int d, int e, int f, int g, int h, int i, MR.CS.Aggregates.NonDefaultConstructible._Underlying *j);
                    _UnderlyingPtr = __MR_Aggregates_E_ConstructFrom(a, b, c, d, e, f, g, h, i, j._UnderlyingPtr);
                    _KeepAlive(j);
                    _FinalizeFields();
                }
            }

            /// <summary>
            /// Generated from class `MR::Aggregates::E`.
            /// This is the non-const half of the class.
            /// </summary>
            public class E : Const_E
            {
                // This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
                public new unsafe ref int a => ref *__ref_storage_a;

                // This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
                public new unsafe ref int b => ref *__ref_storage_b;

                // This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
                public new unsafe ref int c => ref *__ref_storage_c;

                // This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
                public new unsafe ref int d => ref *__ref_storage_d;

                // This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
                public new unsafe ref int e => ref *__ref_storage_e;

                // This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
                public new unsafe ref int f => ref *__ref_storage_f;

                // This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
                public new unsafe ref int g => ref *__ref_storage_g;

                // This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
                public new unsafe ref int h => ref *__ref_storage_h;

                // This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
                public new unsafe ref int i => ref *__ref_storage_i;

                // This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
                public new unsafe MR.CS.Aggregates.NonDefaultConstructible j {get; private protected set;}

                /// <summary>
                /// Constructors call this at the end to initialize class fields.
                /// </summary>
                protected new unsafe void _FinalizeFields()
                {
                    base._FinalizeFields();

                    { // j
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_E_GetMutable_j", ExactSpelling = true)]
                        extern static MR.CS.Aggregates.NonDefaultConstructible._Underlying *__MR_Aggregates_E_GetMutable_j(MR.CS.Aggregates.E._Underlying *_this);
                        this.j = new(__MR_Aggregates_E_GetMutable_j(_UnderlyingPtr), is_owning: false);
                        this.j._KeepAliveEnclosingObject = this;
                    }
                }

                // Don't warn about some fields remaining conditionally uninitialized. We initialize them later.
                #pragma warning disable CS8618
                internal unsafe E(_Underlying *ptr, bool is_owning) : base(ptr, is_owning)
                {
                    if (ptr is not null)
                        _FinalizeFields();
                }
                #pragma warning restore CS8618

                /// <summary>
                /// Generated from constructor `MR::Aggregates::E::E`.
                /// </summary>
                public unsafe E(MR.CS.Aggregates.Const_E _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_E_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.E._Underlying *__MR_Aggregates_E_ConstructFromAnother(MR.CS.Aggregates.E._Underlying *_other);
                    _UnderlyingPtr = __MR_Aggregates_E_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                    _FinalizeFields();
                }

                /// <summary>
                /// Generated from constructor `MR::Aggregates::E::E`.
                /// </summary>
                public E(E _other) : this((Const_E)_other) {}

                /// <summary>
                /// Constructs `MR::Aggregates::E` elementwise.
                /// </summary>
                public unsafe E(int a, int b, int c, int d, int e, int f, int g, int h, int i, MR.CS.Aggregates.Const_NonDefaultConstructible j) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_E_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.E._Underlying *__MR_Aggregates_E_ConstructFrom(int a, int b, int c, int d, int e, int f, int g, int h, int i, MR.CS.Aggregates.NonDefaultConstructible._Underlying *j);
                    _UnderlyingPtr = __MR_Aggregates_E_ConstructFrom(a, b, c, d, e, f, g, h, i, j._UnderlyingPtr);
                    _KeepAlive(j);
                    _FinalizeFields();
                }

                /// <summary>
                /// Generated from method `MR::Aggregates::E::operator=`.
                /// </summary>
                public unsafe MR.CS.Aggregates.E assign(MR.CS.Aggregates.Const_E _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_E_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.E._Underlying *__MR_Aggregates_E_AssignFromAnother(_Underlying *_this, MR.CS.Aggregates.E._Underlying *_other);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_Aggregates_E_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }
            }

            /// <summary>
            /// This is used for optional parameters of class `E` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_E`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `E`/`Const_E` directly.
            /// </summary>
            public class _InOptMut_E
            {
                public E? Opt;

                public _InOptMut_E() {}
                public _InOptMut_E(E value) {Opt = value;}
                public static implicit operator _InOptMut_E(E value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `E` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_E`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `E`/`Const_E` to pass it to the function.
            /// </summary>
            public class _InOptConst_E
            {
                public Const_E? Opt;

                public _InOptConst_E() {}
                public _InOptConst_E(Const_E value) {Opt = value;}
                public static implicit operator _InOptConst_E(Const_E value) {return new(value);}
            }
        }
    }
}
