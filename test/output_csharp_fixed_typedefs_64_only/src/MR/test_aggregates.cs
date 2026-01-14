public static partial class MR
{
    public static partial class CS
    {
        public static partial class Aggregates
        {
            // Aggregates get elementwise constructors. This is necessary if their elements are not default-constructible,
            //   because otherwise there would be no way to construct them.
            /// Generated from class `MR::Aggregates::A`.
            /// This is the const half of the class.
            public class Const_A : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_A(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

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

                public unsafe int x
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_A_Get_x", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_A_Get_x(_Underlying *_this);
                        return *__MR_Aggregates_A_Get_x(_UnderlyingPtr);
                    }
                }

                public unsafe MR.CS.Std.Const_String y
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_A_Get_y", ExactSpelling = true)]
                        extern static MR.CS.Std.Const_String._Underlying *__MR_Aggregates_A_Get_y(_Underlying *_this);
                        return new(__MR_Aggregates_A_Get_y(_UnderlyingPtr), is_owning: false);
                    }
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_A() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.A._Underlying *__MR_Aggregates_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_Aggregates_A_DefaultConstruct();
                }

                /// Constructs `MR::Aggregates::A` elementwise.
                public unsafe Const_A(int x, ReadOnlySpan<char> y) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_A_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.A._Underlying *__MR_Aggregates_A_ConstructFrom(int x, byte *y, byte *y_end);
                    byte[] __bytes_y = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(y.Length)];
                    int __len_y = System.Text.Encoding.UTF8.GetBytes(y, __bytes_y);
                    fixed (byte *__ptr_y = __bytes_y)
                    {
                        _UnderlyingPtr = __MR_Aggregates_A_ConstructFrom(x, __ptr_y, __ptr_y + __len_y);
                    }
                }

                /// Generated from constructor `MR::Aggregates::A::A`.
                public unsafe Const_A(MR.CS.Aggregates._ByValue_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.A._Underlying *__MR_Aggregates_A_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.Aggregates.A._Underlying *_other);
                    _UnderlyingPtr = __MR_Aggregates_A_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }
            }

            // Aggregates get elementwise constructors. This is necessary if their elements are not default-constructible,
            //   because otherwise there would be no way to construct them.
            /// Generated from class `MR::Aggregates::A`.
            /// This is the non-const half of the class.
            public class A : Const_A
            {
                internal unsafe A(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                public new unsafe ref int x
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_A_GetMutable_x", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_A_GetMutable_x(_Underlying *_this);
                        return ref *__MR_Aggregates_A_GetMutable_x(_UnderlyingPtr);
                    }
                }

                public new unsafe MR.CS.Std.String y
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_A_GetMutable_y", ExactSpelling = true)]
                        extern static MR.CS.Std.String._Underlying *__MR_Aggregates_A_GetMutable_y(_Underlying *_this);
                        return new(__MR_Aggregates_A_GetMutable_y(_UnderlyingPtr), is_owning: false);
                    }
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe A() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.A._Underlying *__MR_Aggregates_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_Aggregates_A_DefaultConstruct();
                }

                /// Constructs `MR::Aggregates::A` elementwise.
                public unsafe A(int x, ReadOnlySpan<char> y) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_A_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.A._Underlying *__MR_Aggregates_A_ConstructFrom(int x, byte *y, byte *y_end);
                    byte[] __bytes_y = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(y.Length)];
                    int __len_y = System.Text.Encoding.UTF8.GetBytes(y, __bytes_y);
                    fixed (byte *__ptr_y = __bytes_y)
                    {
                        _UnderlyingPtr = __MR_Aggregates_A_ConstructFrom(x, __ptr_y, __ptr_y + __len_y);
                    }
                }

                /// Generated from constructor `MR::Aggregates::A::A`.
                public unsafe A(MR.CS.Aggregates._ByValue_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.A._Underlying *__MR_Aggregates_A_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.Aggregates.A._Underlying *_other);
                    _UnderlyingPtr = __MR_Aggregates_A_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// Generated from method `MR::Aggregates::A::operator=`.
                public unsafe MR.CS.Aggregates.A assign(MR.CS.Aggregates._ByValue_A _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_A_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.A._Underlying *__MR_Aggregates_A_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.Aggregates.A._Underlying *_other);
                    return new(__MR_Aggregates_A_AssignFromAnother(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null), is_owning: false);
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

            // This is an empty aggregate, it doesn't need an elementwise constructor.
            /// Generated from class `MR::Aggregates::B`.
            /// This is the const half of the class.
            public class Const_B : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_B(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

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

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_B() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_B_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.B._Underlying *__MR_Aggregates_B_DefaultConstruct();
                    _UnderlyingPtr = __MR_Aggregates_B_DefaultConstruct();
                }

                /// Generated from constructor `MR::Aggregates::B::B`.
                public unsafe Const_B(MR.CS.Aggregates.Const_B _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_B_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.B._Underlying *__MR_Aggregates_B_ConstructFromAnother(MR.CS.Aggregates.B._Underlying *_other);
                    _UnderlyingPtr = __MR_Aggregates_B_ConstructFromAnother(_other._UnderlyingPtr);
                }
            }

            // This is an empty aggregate, it doesn't need an elementwise constructor.
            /// Generated from class `MR::Aggregates::B`.
            /// This is the non-const half of the class.
            public class B : Const_B
            {
                internal unsafe B(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe B() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_B_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.B._Underlying *__MR_Aggregates_B_DefaultConstruct();
                    _UnderlyingPtr = __MR_Aggregates_B_DefaultConstruct();
                }

                /// Generated from constructor `MR::Aggregates::B::B`.
                public unsafe B(MR.CS.Aggregates.Const_B _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_B_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.B._Underlying *__MR_Aggregates_B_ConstructFromAnother(MR.CS.Aggregates.B._Underlying *_other);
                    _UnderlyingPtr = __MR_Aggregates_B_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::Aggregates::B::operator=`.
                public unsafe MR.CS.Aggregates.B assign(MR.CS.Aggregates.Const_B _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_B_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.B._Underlying *__MR_Aggregates_B_AssignFromAnother(_Underlying *_this, MR.CS.Aggregates.B._Underlying *_other);
                    return new(__MR_Aggregates_B_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }
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

            /// Generated from class `MR::Aggregates::NonDefaultConstructible`.
            /// This is the const half of the class.
            public class Const_NonDefaultConstructible : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_NonDefaultConstructible(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

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

                /// Generated from constructor `MR::Aggregates::NonDefaultConstructible::NonDefaultConstructible`.
                public unsafe Const_NonDefaultConstructible(MR.CS.Aggregates.Const_NonDefaultConstructible _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_NonDefaultConstructible_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.NonDefaultConstructible._Underlying *__MR_Aggregates_NonDefaultConstructible_ConstructFromAnother(MR.CS.Aggregates.NonDefaultConstructible._Underlying *_other);
                    _UnderlyingPtr = __MR_Aggregates_NonDefaultConstructible_ConstructFromAnother(_other._UnderlyingPtr);
                }
            }

            /// Generated from class `MR::Aggregates::NonDefaultConstructible`.
            /// This is the non-const half of the class.
            public class NonDefaultConstructible : Const_NonDefaultConstructible
            {
                internal unsafe NonDefaultConstructible(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Generated from constructor `MR::Aggregates::NonDefaultConstructible::NonDefaultConstructible`.
                public unsafe NonDefaultConstructible(MR.CS.Aggregates.Const_NonDefaultConstructible _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_NonDefaultConstructible_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.NonDefaultConstructible._Underlying *__MR_Aggregates_NonDefaultConstructible_ConstructFromAnother(MR.CS.Aggregates.NonDefaultConstructible._Underlying *_other);
                    _UnderlyingPtr = __MR_Aggregates_NonDefaultConstructible_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::Aggregates::NonDefaultConstructible::operator=`.
                public unsafe MR.CS.Aggregates.NonDefaultConstructible assign(MR.CS.Aggregates.Const_NonDefaultConstructible _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_NonDefaultConstructible_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.NonDefaultConstructible._Underlying *__MR_Aggregates_NonDefaultConstructible_AssignFromAnother(_Underlying *_this, MR.CS.Aggregates.NonDefaultConstructible._Underlying *_other);
                    return new(__MR_Aggregates_NonDefaultConstructible_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }
            }

            /// This is used for optional parameters of class `NonDefaultConstructible` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_NonDefaultConstructible`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `NonDefaultConstructible`/`Const_NonDefaultConstructible` directly.
            public class _InOptMut_NonDefaultConstructible
            {
                public NonDefaultConstructible? Opt;

                public _InOptMut_NonDefaultConstructible() {}
                public _InOptMut_NonDefaultConstructible(NonDefaultConstructible value) {Opt = value;}
                public static implicit operator _InOptMut_NonDefaultConstructible(NonDefaultConstructible value) {return new(value);}
            }

            /// This is used for optional parameters of class `NonDefaultConstructible` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_NonDefaultConstructible`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `NonDefaultConstructible`/`Const_NonDefaultConstructible` to pass it to the function.
            public class _InOptConst_NonDefaultConstructible
            {
                public Const_NonDefaultConstructible? Opt;

                public _InOptConst_NonDefaultConstructible() {}
                public _InOptConst_NonDefaultConstructible(Const_NonDefaultConstructible value) {Opt = value;}
                public static implicit operator _InOptConst_NonDefaultConstructible(Const_NonDefaultConstructible value) {return new(value);}
            }

            // Test the optional limit on the number of fields that we aggregate-initialize.
            /// Generated from class `MR::Aggregates::C`.
            /// This is the const half of the class.
            public class Const_C : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_C(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

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

                public unsafe int a
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_C_Get_a", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_C_Get_a(_Underlying *_this);
                        return *__MR_Aggregates_C_Get_a(_UnderlyingPtr);
                    }
                }

                public unsafe int b
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_C_Get_b", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_C_Get_b(_Underlying *_this);
                        return *__MR_Aggregates_C_Get_b(_UnderlyingPtr);
                    }
                }

                public unsafe int c
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_C_Get_c", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_C_Get_c(_Underlying *_this);
                        return *__MR_Aggregates_C_Get_c(_UnderlyingPtr);
                    }
                }

                public unsafe int d
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_C_Get_d", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_C_Get_d(_Underlying *_this);
                        return *__MR_Aggregates_C_Get_d(_UnderlyingPtr);
                    }
                }

                public unsafe int e
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_C_Get_e", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_C_Get_e(_Underlying *_this);
                        return *__MR_Aggregates_C_Get_e(_UnderlyingPtr);
                    }
                }

                public unsafe int f
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_C_Get_f", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_C_Get_f(_Underlying *_this);
                        return *__MR_Aggregates_C_Get_f(_UnderlyingPtr);
                    }
                }

                public unsafe int g
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_C_Get_g", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_C_Get_g(_Underlying *_this);
                        return *__MR_Aggregates_C_Get_g(_UnderlyingPtr);
                    }
                }

                public unsafe int h
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_C_Get_h", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_C_Get_h(_Underlying *_this);
                        return *__MR_Aggregates_C_Get_h(_UnderlyingPtr);
                    }
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_C() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_C_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.C._Underlying *__MR_Aggregates_C_DefaultConstruct();
                    _UnderlyingPtr = __MR_Aggregates_C_DefaultConstruct();
                }

                /// Constructs `MR::Aggregates::C` elementwise.
                public unsafe Const_C(int a, int b, int c, int d, int e, int f, int g, int h) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_C_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.C._Underlying *__MR_Aggregates_C_ConstructFrom(int a, int b, int c, int d, int e, int f, int g, int h);
                    _UnderlyingPtr = __MR_Aggregates_C_ConstructFrom(a, b, c, d, e, f, g, h);
                }

                /// Generated from constructor `MR::Aggregates::C::C`.
                public unsafe Const_C(MR.CS.Aggregates.Const_C _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_C_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.C._Underlying *__MR_Aggregates_C_ConstructFromAnother(MR.CS.Aggregates.C._Underlying *_other);
                    _UnderlyingPtr = __MR_Aggregates_C_ConstructFromAnother(_other._UnderlyingPtr);
                }
            }

            // Test the optional limit on the number of fields that we aggregate-initialize.
            /// Generated from class `MR::Aggregates::C`.
            /// This is the non-const half of the class.
            public class C : Const_C
            {
                internal unsafe C(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                public new unsafe ref int a
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_C_GetMutable_a", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_C_GetMutable_a(_Underlying *_this);
                        return ref *__MR_Aggregates_C_GetMutable_a(_UnderlyingPtr);
                    }
                }

                public new unsafe ref int b
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_C_GetMutable_b", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_C_GetMutable_b(_Underlying *_this);
                        return ref *__MR_Aggregates_C_GetMutable_b(_UnderlyingPtr);
                    }
                }

                public new unsafe ref int c
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_C_GetMutable_c", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_C_GetMutable_c(_Underlying *_this);
                        return ref *__MR_Aggregates_C_GetMutable_c(_UnderlyingPtr);
                    }
                }

                public new unsafe ref int d
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_C_GetMutable_d", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_C_GetMutable_d(_Underlying *_this);
                        return ref *__MR_Aggregates_C_GetMutable_d(_UnderlyingPtr);
                    }
                }

                public new unsafe ref int e
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_C_GetMutable_e", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_C_GetMutable_e(_Underlying *_this);
                        return ref *__MR_Aggregates_C_GetMutable_e(_UnderlyingPtr);
                    }
                }

                public new unsafe ref int f
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_C_GetMutable_f", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_C_GetMutable_f(_Underlying *_this);
                        return ref *__MR_Aggregates_C_GetMutable_f(_UnderlyingPtr);
                    }
                }

                public new unsafe ref int g
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_C_GetMutable_g", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_C_GetMutable_g(_Underlying *_this);
                        return ref *__MR_Aggregates_C_GetMutable_g(_UnderlyingPtr);
                    }
                }

                public new unsafe ref int h
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_C_GetMutable_h", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_C_GetMutable_h(_Underlying *_this);
                        return ref *__MR_Aggregates_C_GetMutable_h(_UnderlyingPtr);
                    }
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe C() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_C_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.C._Underlying *__MR_Aggregates_C_DefaultConstruct();
                    _UnderlyingPtr = __MR_Aggregates_C_DefaultConstruct();
                }

                /// Constructs `MR::Aggregates::C` elementwise.
                public unsafe C(int a, int b, int c, int d, int e, int f, int g, int h) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_C_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.C._Underlying *__MR_Aggregates_C_ConstructFrom(int a, int b, int c, int d, int e, int f, int g, int h);
                    _UnderlyingPtr = __MR_Aggregates_C_ConstructFrom(a, b, c, d, e, f, g, h);
                }

                /// Generated from constructor `MR::Aggregates::C::C`.
                public unsafe C(MR.CS.Aggregates.Const_C _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_C_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.C._Underlying *__MR_Aggregates_C_ConstructFromAnother(MR.CS.Aggregates.C._Underlying *_other);
                    _UnderlyingPtr = __MR_Aggregates_C_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::Aggregates::C::operator=`.
                public unsafe MR.CS.Aggregates.C assign(MR.CS.Aggregates.Const_C _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_C_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.C._Underlying *__MR_Aggregates_C_AssignFromAnother(_Underlying *_this, MR.CS.Aggregates.C._Underlying *_other);
                    return new(__MR_Aggregates_C_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }
            }

            /// This is used for optional parameters of class `C` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_C`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `C`/`Const_C` directly.
            public class _InOptMut_C
            {
                public C? Opt;

                public _InOptMut_C() {}
                public _InOptMut_C(C value) {Opt = value;}
                public static implicit operator _InOptMut_C(C value) {return new(value);}
            }

            /// This is used for optional parameters of class `C` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_C`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `C`/`Const_C` to pass it to the function.
            public class _InOptConst_C
            {
                public Const_C? Opt;

                public _InOptConst_C() {}
                public _InOptConst_C(Const_C value) {Opt = value;}
                public static implicit operator _InOptConst_C(Const_C value) {return new(value);}
            }

            /// Generated from class `MR::Aggregates::D`.
            /// This is the const half of the class.
            public class Const_D : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_D(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

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

                public unsafe int a
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_D_Get_a", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_D_Get_a(_Underlying *_this);
                        return *__MR_Aggregates_D_Get_a(_UnderlyingPtr);
                    }
                }

                public unsafe int b
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_D_Get_b", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_D_Get_b(_Underlying *_this);
                        return *__MR_Aggregates_D_Get_b(_UnderlyingPtr);
                    }
                }

                public unsafe int c
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_D_Get_c", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_D_Get_c(_Underlying *_this);
                        return *__MR_Aggregates_D_Get_c(_UnderlyingPtr);
                    }
                }

                public unsafe int d
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_D_Get_d", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_D_Get_d(_Underlying *_this);
                        return *__MR_Aggregates_D_Get_d(_UnderlyingPtr);
                    }
                }

                public unsafe int e
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_D_Get_e", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_D_Get_e(_Underlying *_this);
                        return *__MR_Aggregates_D_Get_e(_UnderlyingPtr);
                    }
                }

                public unsafe int f
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_D_Get_f", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_D_Get_f(_Underlying *_this);
                        return *__MR_Aggregates_D_Get_f(_UnderlyingPtr);
                    }
                }

                public unsafe int g
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_D_Get_g", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_D_Get_g(_Underlying *_this);
                        return *__MR_Aggregates_D_Get_g(_UnderlyingPtr);
                    }
                }

                public unsafe int h
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_D_Get_h", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_D_Get_h(_Underlying *_this);
                        return *__MR_Aggregates_D_Get_h(_UnderlyingPtr);
                    }
                }

                public unsafe int i
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_D_Get_i", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_D_Get_i(_Underlying *_this);
                        return *__MR_Aggregates_D_Get_i(_UnderlyingPtr);
                    }
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_D() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_D_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.D._Underlying *__MR_Aggregates_D_DefaultConstruct();
                    _UnderlyingPtr = __MR_Aggregates_D_DefaultConstruct();
                }

                /// Constructs `MR::Aggregates::D` elementwise.
                public unsafe Const_D(int a, int b, int c, int d, int e, int f, int g, int h, int i) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_D_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.D._Underlying *__MR_Aggregates_D_ConstructFrom(int a, int b, int c, int d, int e, int f, int g, int h, int i);
                    _UnderlyingPtr = __MR_Aggregates_D_ConstructFrom(a, b, c, d, e, f, g, h, i);
                }

                /// Generated from constructor `MR::Aggregates::D::D`.
                public unsafe Const_D(MR.CS.Aggregates.Const_D _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_D_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.D._Underlying *__MR_Aggregates_D_ConstructFromAnother(MR.CS.Aggregates.D._Underlying *_other);
                    _UnderlyingPtr = __MR_Aggregates_D_ConstructFromAnother(_other._UnderlyingPtr);
                }
            }

            /// Generated from class `MR::Aggregates::D`.
            /// This is the non-const half of the class.
            public class D : Const_D
            {
                internal unsafe D(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                public new unsafe ref int a
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_D_GetMutable_a", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_D_GetMutable_a(_Underlying *_this);
                        return ref *__MR_Aggregates_D_GetMutable_a(_UnderlyingPtr);
                    }
                }

                public new unsafe ref int b
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_D_GetMutable_b", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_D_GetMutable_b(_Underlying *_this);
                        return ref *__MR_Aggregates_D_GetMutable_b(_UnderlyingPtr);
                    }
                }

                public new unsafe ref int c
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_D_GetMutable_c", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_D_GetMutable_c(_Underlying *_this);
                        return ref *__MR_Aggregates_D_GetMutable_c(_UnderlyingPtr);
                    }
                }

                public new unsafe ref int d
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_D_GetMutable_d", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_D_GetMutable_d(_Underlying *_this);
                        return ref *__MR_Aggregates_D_GetMutable_d(_UnderlyingPtr);
                    }
                }

                public new unsafe ref int e
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_D_GetMutable_e", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_D_GetMutable_e(_Underlying *_this);
                        return ref *__MR_Aggregates_D_GetMutable_e(_UnderlyingPtr);
                    }
                }

                public new unsafe ref int f
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_D_GetMutable_f", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_D_GetMutable_f(_Underlying *_this);
                        return ref *__MR_Aggregates_D_GetMutable_f(_UnderlyingPtr);
                    }
                }

                public new unsafe ref int g
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_D_GetMutable_g", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_D_GetMutable_g(_Underlying *_this);
                        return ref *__MR_Aggregates_D_GetMutable_g(_UnderlyingPtr);
                    }
                }

                public new unsafe ref int h
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_D_GetMutable_h", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_D_GetMutable_h(_Underlying *_this);
                        return ref *__MR_Aggregates_D_GetMutable_h(_UnderlyingPtr);
                    }
                }

                public new unsafe ref int i
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_D_GetMutable_i", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_D_GetMutable_i(_Underlying *_this);
                        return ref *__MR_Aggregates_D_GetMutable_i(_UnderlyingPtr);
                    }
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe D() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_D_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.D._Underlying *__MR_Aggregates_D_DefaultConstruct();
                    _UnderlyingPtr = __MR_Aggregates_D_DefaultConstruct();
                }

                /// Constructs `MR::Aggregates::D` elementwise.
                public unsafe D(int a, int b, int c, int d, int e, int f, int g, int h, int i) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_D_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.D._Underlying *__MR_Aggregates_D_ConstructFrom(int a, int b, int c, int d, int e, int f, int g, int h, int i);
                    _UnderlyingPtr = __MR_Aggregates_D_ConstructFrom(a, b, c, d, e, f, g, h, i);
                }

                /// Generated from constructor `MR::Aggregates::D::D`.
                public unsafe D(MR.CS.Aggregates.Const_D _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_D_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.D._Underlying *__MR_Aggregates_D_ConstructFromAnother(MR.CS.Aggregates.D._Underlying *_other);
                    _UnderlyingPtr = __MR_Aggregates_D_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::Aggregates::D::operator=`.
                public unsafe MR.CS.Aggregates.D assign(MR.CS.Aggregates.Const_D _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_D_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.D._Underlying *__MR_Aggregates_D_AssignFromAnother(_Underlying *_this, MR.CS.Aggregates.D._Underlying *_other);
                    return new(__MR_Aggregates_D_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }
            }

            /// This is used for optional parameters of class `D` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_D`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `D`/`Const_D` directly.
            public class _InOptMut_D
            {
                public D? Opt;

                public _InOptMut_D() {}
                public _InOptMut_D(D value) {Opt = value;}
                public static implicit operator _InOptMut_D(D value) {return new(value);}
            }

            /// This is used for optional parameters of class `D` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_D`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `D`/`Const_D` to pass it to the function.
            public class _InOptConst_D
            {
                public Const_D? Opt;

                public _InOptConst_D() {}
                public _InOptConst_D(Const_D value) {Opt = value;}
                public static implicit operator _InOptConst_D(Const_D value) {return new(value);}
            }

            /// Generated from class `MR::Aggregates::E`.
            /// This is the const half of the class.
            public class Const_E : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_E(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

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
                public unsafe int a
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_E_Get_a", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_E_Get_a(_Underlying *_this);
                        return *__MR_Aggregates_E_Get_a(_UnderlyingPtr);
                    }
                }

                // This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
                public unsafe int b
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_E_Get_b", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_E_Get_b(_Underlying *_this);
                        return *__MR_Aggregates_E_Get_b(_UnderlyingPtr);
                    }
                }

                // This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
                public unsafe int c
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_E_Get_c", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_E_Get_c(_Underlying *_this);
                        return *__MR_Aggregates_E_Get_c(_UnderlyingPtr);
                    }
                }

                // This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
                public unsafe int d
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_E_Get_d", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_E_Get_d(_Underlying *_this);
                        return *__MR_Aggregates_E_Get_d(_UnderlyingPtr);
                    }
                }

                // This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
                public unsafe int e
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_E_Get_e", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_E_Get_e(_Underlying *_this);
                        return *__MR_Aggregates_E_Get_e(_UnderlyingPtr);
                    }
                }

                // This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
                public unsafe int f
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_E_Get_f", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_E_Get_f(_Underlying *_this);
                        return *__MR_Aggregates_E_Get_f(_UnderlyingPtr);
                    }
                }

                // This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
                public unsafe int g
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_E_Get_g", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_E_Get_g(_Underlying *_this);
                        return *__MR_Aggregates_E_Get_g(_UnderlyingPtr);
                    }
                }

                // This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
                public unsafe int h
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_E_Get_h", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_E_Get_h(_Underlying *_this);
                        return *__MR_Aggregates_E_Get_h(_UnderlyingPtr);
                    }
                }

                // This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
                public unsafe int i
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_E_Get_i", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_E_Get_i(_Underlying *_this);
                        return *__MR_Aggregates_E_Get_i(_UnderlyingPtr);
                    }
                }

                // This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
                public unsafe MR.CS.Aggregates.Const_NonDefaultConstructible j
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_E_Get_j", ExactSpelling = true)]
                        extern static MR.CS.Aggregates.Const_NonDefaultConstructible._Underlying *__MR_Aggregates_E_Get_j(_Underlying *_this);
                        return new(__MR_Aggregates_E_Get_j(_UnderlyingPtr), is_owning: false);
                    }
                }

                /// Generated from constructor `MR::Aggregates::E::E`.
                public unsafe Const_E(MR.CS.Aggregates.Const_E _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_E_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.E._Underlying *__MR_Aggregates_E_ConstructFromAnother(MR.CS.Aggregates.E._Underlying *_other);
                    _UnderlyingPtr = __MR_Aggregates_E_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Constructs `MR::Aggregates::E` elementwise.
                public unsafe Const_E(int a, int b, int c, int d, int e, int f, int g, int h, int i, MR.CS.Aggregates.Const_NonDefaultConstructible j) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_E_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.E._Underlying *__MR_Aggregates_E_ConstructFrom(int a, int b, int c, int d, int e, int f, int g, int h, int i, MR.CS.Aggregates.NonDefaultConstructible._Underlying *j);
                    _UnderlyingPtr = __MR_Aggregates_E_ConstructFrom(a, b, c, d, e, f, g, h, i, j._UnderlyingPtr);
                }
            }

            /// Generated from class `MR::Aggregates::E`.
            /// This is the non-const half of the class.
            public class E : Const_E
            {
                internal unsafe E(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                // This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
                public new unsafe ref int a
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_E_GetMutable_a", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_E_GetMutable_a(_Underlying *_this);
                        return ref *__MR_Aggregates_E_GetMutable_a(_UnderlyingPtr);
                    }
                }

                // This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
                public new unsafe ref int b
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_E_GetMutable_b", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_E_GetMutable_b(_Underlying *_this);
                        return ref *__MR_Aggregates_E_GetMutable_b(_UnderlyingPtr);
                    }
                }

                // This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
                public new unsafe ref int c
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_E_GetMutable_c", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_E_GetMutable_c(_Underlying *_this);
                        return ref *__MR_Aggregates_E_GetMutable_c(_UnderlyingPtr);
                    }
                }

                // This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
                public new unsafe ref int d
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_E_GetMutable_d", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_E_GetMutable_d(_Underlying *_this);
                        return ref *__MR_Aggregates_E_GetMutable_d(_UnderlyingPtr);
                    }
                }

                // This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
                public new unsafe ref int e
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_E_GetMutable_e", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_E_GetMutable_e(_Underlying *_this);
                        return ref *__MR_Aggregates_E_GetMutable_e(_UnderlyingPtr);
                    }
                }

                // This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
                public new unsafe ref int f
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_E_GetMutable_f", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_E_GetMutable_f(_Underlying *_this);
                        return ref *__MR_Aggregates_E_GetMutable_f(_UnderlyingPtr);
                    }
                }

                // This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
                public new unsafe ref int g
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_E_GetMutable_g", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_E_GetMutable_g(_Underlying *_this);
                        return ref *__MR_Aggregates_E_GetMutable_g(_UnderlyingPtr);
                    }
                }

                // This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
                public new unsafe ref int h
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_E_GetMutable_h", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_E_GetMutable_h(_Underlying *_this);
                        return ref *__MR_Aggregates_E_GetMutable_h(_UnderlyingPtr);
                    }
                }

                // This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
                public new unsafe ref int i
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_E_GetMutable_i", ExactSpelling = true)]
                        extern static int *__MR_Aggregates_E_GetMutable_i(_Underlying *_this);
                        return ref *__MR_Aggregates_E_GetMutable_i(_UnderlyingPtr);
                    }
                }

                // This gets the ctor anyway, because `j` would otherwise make it non-default-constructible.
                public new unsafe MR.CS.Aggregates.NonDefaultConstructible j
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_E_GetMutable_j", ExactSpelling = true)]
                        extern static MR.CS.Aggregates.NonDefaultConstructible._Underlying *__MR_Aggregates_E_GetMutable_j(_Underlying *_this);
                        return new(__MR_Aggregates_E_GetMutable_j(_UnderlyingPtr), is_owning: false);
                    }
                }

                /// Generated from constructor `MR::Aggregates::E::E`.
                public unsafe E(MR.CS.Aggregates.Const_E _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_E_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.E._Underlying *__MR_Aggregates_E_ConstructFromAnother(MR.CS.Aggregates.E._Underlying *_other);
                    _UnderlyingPtr = __MR_Aggregates_E_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Constructs `MR::Aggregates::E` elementwise.
                public unsafe E(int a, int b, int c, int d, int e, int f, int g, int h, int i, MR.CS.Aggregates.Const_NonDefaultConstructible j) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_E_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.E._Underlying *__MR_Aggregates_E_ConstructFrom(int a, int b, int c, int d, int e, int f, int g, int h, int i, MR.CS.Aggregates.NonDefaultConstructible._Underlying *j);
                    _UnderlyingPtr = __MR_Aggregates_E_ConstructFrom(a, b, c, d, e, f, g, h, i, j._UnderlyingPtr);
                }

                /// Generated from method `MR::Aggregates::E::operator=`.
                public unsafe MR.CS.Aggregates.E assign(MR.CS.Aggregates.Const_E _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Aggregates_E_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Aggregates.E._Underlying *__MR_Aggregates_E_AssignFromAnother(_Underlying *_this, MR.CS.Aggregates.E._Underlying *_other);
                    return new(__MR_Aggregates_E_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }
            }

            /// This is used for optional parameters of class `E` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_E`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `E`/`Const_E` directly.
            public class _InOptMut_E
            {
                public E? Opt;

                public _InOptMut_E() {}
                public _InOptMut_E(E value) {Opt = value;}
                public static implicit operator _InOptMut_E(E value) {return new(value);}
            }

            /// This is used for optional parameters of class `E` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_E`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `E`/`Const_E` to pass it to the function.
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
