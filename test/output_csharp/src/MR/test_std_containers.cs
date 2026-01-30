public static partial class MR
{
    public static partial class CS
    {
        public static partial class StdContainers
        {
            // `std::array` behaves differently with simple types.
            /// Generated from class `MR::StdContainers::A`.
            /// This is the const half of the class.
            public class Const_A : MR.CS.Misc.Object<Const_A>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_A_Destroy", ExactSpelling = true)]
                    extern static void __MR_StdContainers_A_Destroy(_Underlying *_this);
                    __MR_StdContainers_A_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_A() {Dispose(false);}

                internal unsafe Const_A(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_A() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.A._Underlying *__MR_StdContainers_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_StdContainers_A_DefaultConstruct();
                }

                /// Generated from constructor `MR::StdContainers::A::A`.
                public unsafe Const_A(MR.CS.StdContainers.Const_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.A._Underlying *__MR_StdContainers_A_ConstructFromAnother(MR.CS.StdContainers.A._Underlying *_other);
                    _UnderlyingPtr = __MR_StdContainers_A_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// Generated from constructor `MR::StdContainers::A::A`.
                public Const_A(A _other) : this((Const_A)_other) {}
            }

            // `std::array` behaves differently with simple types.
            /// Generated from class `MR::StdContainers::A`.
            /// This is the non-const half of the class.
            public class A : Const_A
            {
                internal unsafe A(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe A() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.A._Underlying *__MR_StdContainers_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_StdContainers_A_DefaultConstruct();
                }

                /// Generated from constructor `MR::StdContainers::A::A`.
                public unsafe A(MR.CS.StdContainers.Const_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.A._Underlying *__MR_StdContainers_A_ConstructFromAnother(MR.CS.StdContainers.A._Underlying *_other);
                    _UnderlyingPtr = __MR_StdContainers_A_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// Generated from constructor `MR::StdContainers::A::A`.
                public A(A _other) : this((Const_A)_other) {}

                /// Generated from method `MR::StdContainers::A::operator=`.
                public unsafe MR.CS.StdContainers.A Assign(MR.CS.StdContainers.Const_A _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_A_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.A._Underlying *__MR_StdContainers_A_AssignFromAnother(_Underlying *_this, MR.CS.StdContainers.A._Underlying *_other);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_StdContainers_A_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
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

            // Test vectors of a non-default-constructible type.
            /// Generated from class `MR::StdContainers::NonDefaultConstructible`.
            /// This is the const half of the class.
            public class Const_NonDefaultConstructible : MR.CS.Misc.Object<Const_NonDefaultConstructible>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_NonDefaultConstructible_Destroy", ExactSpelling = true)]
                    extern static void __MR_StdContainers_NonDefaultConstructible_Destroy(_Underlying *_this);
                    __MR_StdContainers_NonDefaultConstructible_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_NonDefaultConstructible() {Dispose(false);}

                internal unsafe Const_NonDefaultConstructible(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// Generated from constructor `MR::StdContainers::NonDefaultConstructible::NonDefaultConstructible`.
                public unsafe Const_NonDefaultConstructible(MR.CS.StdContainers.Const_NonDefaultConstructible _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_NonDefaultConstructible_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.NonDefaultConstructible._Underlying *__MR_StdContainers_NonDefaultConstructible_ConstructFromAnother(MR.CS.StdContainers.NonDefaultConstructible._Underlying *_other);
                    _UnderlyingPtr = __MR_StdContainers_NonDefaultConstructible_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// Generated from constructor `MR::StdContainers::NonDefaultConstructible::NonDefaultConstructible`.
                public Const_NonDefaultConstructible(NonDefaultConstructible _other) : this((Const_NonDefaultConstructible)_other) {}

                /// Generated from constructor `MR::StdContainers::NonDefaultConstructible::NonDefaultConstructible`.
                public unsafe Const_NonDefaultConstructible(int _1) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_NonDefaultConstructible_Construct", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.NonDefaultConstructible._Underlying *__MR_StdContainers_NonDefaultConstructible_Construct(int _1);
                    _UnderlyingPtr = __MR_StdContainers_NonDefaultConstructible_Construct(_1);
                }

                /// Generated from constructor `MR::StdContainers::NonDefaultConstructible::NonDefaultConstructible`.
                public static unsafe implicit operator Const_NonDefaultConstructible(int _1) {return new(_1);}
            }

            // Test vectors of a non-default-constructible type.
            /// Generated from class `MR::StdContainers::NonDefaultConstructible`.
            /// This is the non-const half of the class.
            public class NonDefaultConstructible : Const_NonDefaultConstructible
            {
                internal unsafe NonDefaultConstructible(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Generated from constructor `MR::StdContainers::NonDefaultConstructible::NonDefaultConstructible`.
                public unsafe NonDefaultConstructible(MR.CS.StdContainers.Const_NonDefaultConstructible _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_NonDefaultConstructible_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.NonDefaultConstructible._Underlying *__MR_StdContainers_NonDefaultConstructible_ConstructFromAnother(MR.CS.StdContainers.NonDefaultConstructible._Underlying *_other);
                    _UnderlyingPtr = __MR_StdContainers_NonDefaultConstructible_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// Generated from constructor `MR::StdContainers::NonDefaultConstructible::NonDefaultConstructible`.
                public NonDefaultConstructible(NonDefaultConstructible _other) : this((Const_NonDefaultConstructible)_other) {}

                /// Generated from constructor `MR::StdContainers::NonDefaultConstructible::NonDefaultConstructible`.
                public unsafe NonDefaultConstructible(int _1) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_NonDefaultConstructible_Construct", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.NonDefaultConstructible._Underlying *__MR_StdContainers_NonDefaultConstructible_Construct(int _1);
                    _UnderlyingPtr = __MR_StdContainers_NonDefaultConstructible_Construct(_1);
                }

                /// Generated from constructor `MR::StdContainers::NonDefaultConstructible::NonDefaultConstructible`.
                public static unsafe implicit operator NonDefaultConstructible(int _1) {return new(_1);}

                /// Generated from method `MR::StdContainers::NonDefaultConstructible::operator=`.
                public unsafe MR.CS.StdContainers.NonDefaultConstructible Assign(MR.CS.StdContainers.Const_NonDefaultConstructible _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_NonDefaultConstructible_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.NonDefaultConstructible._Underlying *__MR_StdContainers_NonDefaultConstructible_AssignFromAnother(_Underlying *_this, MR.CS.StdContainers.NonDefaultConstructible._Underlying *_other);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_StdContainers_NonDefaultConstructible_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
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

                /// Generated from constructor `MR::StdContainers::NonDefaultConstructible::NonDefaultConstructible`.
                public static unsafe implicit operator _InOptConst_NonDefaultConstructible(int _1) {return new Const_NonDefaultConstructible(_1);}
            }

            // A non-assignable type?
            /// Generated from class `MR::StdContainers::NonAssignable`.
            /// This is the const half of the class.
            public class Const_NonAssignable : MR.CS.Misc.Object<Const_NonAssignable>, System.IDisposable, System.IEquatable<MR.CS.StdContainers._ByValue_NonAssignable>
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_NonAssignable_Destroy", ExactSpelling = true)]
                    extern static void __MR_StdContainers_NonAssignable_Destroy(_Underlying *_this);
                    __MR_StdContainers_NonAssignable_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_NonAssignable() {Dispose(false);}

                internal unsafe Const_NonAssignable(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_NonAssignable() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_NonAssignable_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.NonAssignable._Underlying *__MR_StdContainers_NonAssignable_DefaultConstruct();
                    _UnderlyingPtr = __MR_StdContainers_NonAssignable_DefaultConstruct();
                }

                /// Generated from constructor `MR::StdContainers::NonAssignable::NonAssignable`.
                public unsafe Const_NonAssignable(MR.CS.StdContainers._ByValue_NonAssignable _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_NonAssignable_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.NonAssignable._Underlying *__MR_StdContainers_NonAssignable_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.StdContainers.NonAssignable._Underlying *_other);
                    _UnderlyingPtr = __MR_StdContainers_NonAssignable_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                    if (_other.Value is not null) _KeepAlive(_other.Value);
                }

                /// Generated from constructor `MR::StdContainers::NonAssignable::NonAssignable`.
                public Const_NonAssignable(Const_NonAssignable _other) : this(new _ByValue_NonAssignable(_other)) {}

                /// Generated from constructor `MR::StdContainers::NonAssignable::NonAssignable`.
                public Const_NonAssignable(NonAssignable _other) : this((Const_NonAssignable)_other) {}

                /// Generated from method `MR::StdContainers::NonAssignable::operator<`.
                public unsafe bool Less(MR.CS.StdContainers._ByValue_NonAssignable _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_less_MR_StdContainers_NonAssignable", ExactSpelling = true)]
                    extern static byte __MR_C_less_MR_StdContainers_NonAssignable(_Underlying *_this, MR.CS.Misc._PassBy _1_pass_by, MR.CS.StdContainers.NonAssignable._Underlying *_1);
                    return __MR_C_less_MR_StdContainers_NonAssignable(_UnderlyingPtr, _1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null) != 0;
                }

                /// Generated from method `MR::StdContainers::NonAssignable::operator==`.
                public static unsafe bool operator==(MR.CS.StdContainers.Const_NonAssignable _this, MR.CS.StdContainers._ByValue_NonAssignable _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_equal_MR_StdContainers_NonAssignable", ExactSpelling = true)]
                    extern static byte __MR_C_equal_MR_StdContainers_NonAssignable(MR.CS.StdContainers.Const_NonAssignable._Underlying *_this, MR.CS.Misc._PassBy _1_pass_by, MR.CS.StdContainers.NonAssignable._Underlying *_1);
                    return __MR_C_equal_MR_StdContainers_NonAssignable(_this._UnderlyingPtr, _1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null) != 0;
                }

                public static unsafe bool operator!=(MR.CS.StdContainers.Const_NonAssignable _this, MR.CS.StdContainers._ByValue_NonAssignable _1)
                {
                    return !(_this == _1);
                }

                // IEquatable:

                public bool Equals(MR.CS.StdContainers._ByValue_NonAssignable? _1)
                {
                    if (_1 is null)
                        return false;
                    return this == _1;
                }

                public override bool Equals(object? other)
                {
                    if (other is null)
                        return false;
                    if (other is MR.CS.StdContainers._ByValue_NonAssignable)
                        return this == (MR.CS.StdContainers._ByValue_NonAssignable)other;
                    return false;
                }
            }

            // A non-assignable type?
            /// Generated from class `MR::StdContainers::NonAssignable`.
            /// This is the non-const half of the class.
            public class NonAssignable : Const_NonAssignable
            {
                internal unsafe NonAssignable(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe NonAssignable() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_NonAssignable_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.NonAssignable._Underlying *__MR_StdContainers_NonAssignable_DefaultConstruct();
                    _UnderlyingPtr = __MR_StdContainers_NonAssignable_DefaultConstruct();
                }

                /// Generated from constructor `MR::StdContainers::NonAssignable::NonAssignable`.
                public unsafe NonAssignable(MR.CS.StdContainers._ByValue_NonAssignable _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_NonAssignable_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.NonAssignable._Underlying *__MR_StdContainers_NonAssignable_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.StdContainers.NonAssignable._Underlying *_other);
                    _UnderlyingPtr = __MR_StdContainers_NonAssignable_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                    if (_other.Value is not null) _KeepAlive(_other.Value);
                }

                /// Generated from constructor `MR::StdContainers::NonAssignable::NonAssignable`.
                public NonAssignable(Const_NonAssignable _other) : this(new _ByValue_NonAssignable(_other)) {}

                /// Generated from constructor `MR::StdContainers::NonAssignable::NonAssignable`.
                public NonAssignable(NonAssignable _other) : this((Const_NonAssignable)_other) {}
            }

            /// This is used as a function parameter when the underlying function receives `NonAssignable` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `NonAssignable`/`Const_NonAssignable` to copy it into the function.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            public class _ByValue_NonAssignable
            {
                internal readonly Const_NonAssignable? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_NonAssignable() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_NonAssignable(Const_NonAssignable new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_NonAssignable(Const_NonAssignable arg) {return new(arg);}
            }

            /// This is used for optional parameters of class `NonAssignable` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_NonAssignable`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `NonAssignable`/`Const_NonAssignable` directly.
            public class _InOptMut_NonAssignable
            {
                public NonAssignable? Opt;

                public _InOptMut_NonAssignable() {}
                public _InOptMut_NonAssignable(NonAssignable value) {Opt = value;}
                public static implicit operator _InOptMut_NonAssignable(NonAssignable value) {return new(value);}
            }

            /// This is used for optional parameters of class `NonAssignable` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_NonAssignable`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `NonAssignable`/`Const_NonAssignable` to pass it to the function.
            public class _InOptConst_NonAssignable
            {
                public Const_NonAssignable? Opt;

                public _InOptConst_NonAssignable() {}
                public _InOptConst_NonAssignable(Const_NonAssignable value) {Opt = value;}
                public static implicit operator _InOptConst_NonAssignable(Const_NonAssignable value) {return new(value);}
            }

            /// Generated from function `MR::StdContainers::Set`.
            public static unsafe void Set(MR.CS.Std._ByValue_Vector_Int _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_Set", ExactSpelling = true)]
                extern static void __MR_StdContainers_Set(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.Vector_Int._Underlying *_1);
                __MR_StdContainers_Set(_1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// Generated from function `MR::StdContainers::SetWithDefault`.
            /// Parameter `_1` defaults to `{1, 2, 3}`.
            public static unsafe void SetWithDefault(MR.CS.Std._ByValue_Vector_Int? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_SetWithDefault", ExactSpelling = true)]
                extern static void __MR_StdContainers_SetWithDefault(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.Vector_Int._Underlying *_1);
                __MR_StdContainers_SetWithDefault(_1 is not null ? _1.PassByMode : MR.CS.Misc._PassBy.default_arg, _1 is not null && _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// Generated from function `MR::StdContainers::Get`.
            public static unsafe MR.CS.Std.Vector_Int Get()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_Get", ExactSpelling = true)]
                extern static MR.CS.Std.Vector_Int._Underlying *__MR_StdContainers_Get();
                return new(__MR_StdContainers_Get(), is_owning: true);
            }

            /// Generated from function `MR::StdContainers::WriteToRef`.
            public static unsafe void WriteToRef(MR.CS.Std.Vector_Int _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_WriteToRef", ExactSpelling = true)]
                extern static void __MR_StdContainers_WriteToRef(MR.CS.Std.Vector_Int._Underlying *_1);
                __MR_StdContainers_WriteToRef(_1._UnderlyingPtr);
            }

            /// Generated from function `MR::StdContainers::WriteToPtr`.
            public static unsafe void WriteToPtr(MR.CS.Std.Vector_Int? _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_WriteToPtr", ExactSpelling = true)]
                extern static void __MR_StdContainers_WriteToPtr(MR.CS.Std.Vector_Int._Underlying *_1);
                __MR_StdContainers_WriteToPtr(_1 is not null ? _1._UnderlyingPtr : null);
            }

            /// Generated from function `MR::StdContainers::ConstRef`.
            public static unsafe void ConstRef(MR.CS.Std.Const_Vector_Int _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_ConstRef", ExactSpelling = true)]
                extern static void __MR_StdContainers_ConstRef(MR.CS.Std.Const_Vector_Int._Underlying *_1);
                __MR_StdContainers_ConstRef(_1._UnderlyingPtr);
            }

            /// Generated from function `MR::StdContainers::RvalueRef`.
            public static unsafe void RvalueRef(MR.CS.Misc._Moved<MR.CS.Std.Vector_Int> _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_RvalueRef", ExactSpelling = true)]
                extern static void __MR_StdContainers_RvalueRef(MR.CS.Std.Vector_Int._Underlying *_1);
                __MR_StdContainers_RvalueRef(_1.Value._UnderlyingPtr);
            }

            /// Generated from function `MR::StdContainers::ConstRvalueRef`.
            public static unsafe void ConstRvalueRef(MR.CS.Misc._Moved<MR.CS.Std.Const_Vector_Int> _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_ConstRvalueRef", ExactSpelling = true)]
                extern static void __MR_StdContainers_ConstRvalueRef(MR.CS.Std.Const_Vector_Int._Underlying *_1);
                __MR_StdContainers_ConstRvalueRef(_1.Value._UnderlyingPtr);
            }

            // Just the list of other containers.
            /// Generated from function `MR::StdContainers::GetDeque`.
            public static unsafe MR.CS.Std.Deque_Int GetDeque()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetDeque", ExactSpelling = true)]
                extern static MR.CS.Std.Deque_Int._Underlying *__MR_StdContainers_GetDeque();
                return new(__MR_StdContainers_GetDeque(), is_owning: true);
            }

            /// Generated from function `MR::StdContainers::GetList`.
            public static unsafe MR.CS.Std.List_Int GetList()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetList", ExactSpelling = true)]
                extern static MR.CS.Std.List_Int._Underlying *__MR_StdContainers_GetList();
                return new(__MR_StdContainers_GetList(), is_owning: true);
            }

            /// Generated from function `MR::StdContainers::GetSet`.
            public static unsafe MR.CS.Std.Set_Int GetSet()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetSet", ExactSpelling = true)]
                extern static MR.CS.Std.Set_Int._Underlying *__MR_StdContainers_GetSet();
                return new(__MR_StdContainers_GetSet(), is_owning: true);
            }

            /// Generated from function `MR::StdContainers::GetMultiSet`.
            public static unsafe MR.CS.Std.Multiset_Int GetMultiSet()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetMultiSet", ExactSpelling = true)]
                extern static MR.CS.Std.Multiset_Int._Underlying *__MR_StdContainers_GetMultiSet();
                return new(__MR_StdContainers_GetMultiSet(), is_owning: true);
            }

            /// Generated from function `MR::StdContainers::GetUnorderedSet`.
            public static unsafe MR.CS.Std.UnorderedSet_Int GetUnorderedSet()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetUnorderedSet", ExactSpelling = true)]
                extern static MR.CS.Std.UnorderedSet_Int._Underlying *__MR_StdContainers_GetUnorderedSet();
                return new(__MR_StdContainers_GetUnorderedSet(), is_owning: true);
            }

            /// Generated from function `MR::StdContainers::GetUnorderedMultiSet`.
            public static unsafe MR.CS.Std.UnorderedMultiset_Int GetUnorderedMultiSet()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetUnorderedMultiSet", ExactSpelling = true)]
                extern static MR.CS.Std.UnorderedMultiset_Int._Underlying *__MR_StdContainers_GetUnorderedMultiSet();
                return new(__MR_StdContainers_GetUnorderedMultiSet(), is_owning: true);
            }

            /// Generated from function `MR::StdContainers::GetMap`.
            public static unsafe MR.CS.Std.Map_Int_Float GetMap()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetMap", ExactSpelling = true)]
                extern static MR.CS.Std.Map_Int_Float._Underlying *__MR_StdContainers_GetMap();
                return new(__MR_StdContainers_GetMap(), is_owning: true);
            }

            /// Generated from function `MR::StdContainers::GetMultiMap`.
            public static unsafe MR.CS.Std.Multimap_Int_Float GetMultiMap()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetMultiMap", ExactSpelling = true)]
                extern static MR.CS.Std.Multimap_Int_Float._Underlying *__MR_StdContainers_GetMultiMap();
                return new(__MR_StdContainers_GetMultiMap(), is_owning: true);
            }

            /// Generated from function `MR::StdContainers::GetUnorderedMap`.
            public static unsafe MR.CS.Std.UnorderedMap_Int_Float GetUnorderedMap()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetUnorderedMap", ExactSpelling = true)]
                extern static MR.CS.Std.UnorderedMap_Int_Float._Underlying *__MR_StdContainers_GetUnorderedMap();
                return new(__MR_StdContainers_GetUnorderedMap(), is_owning: true);
            }

            /// Generated from function `MR::StdContainers::GetUnorderedMultiMap`.
            public static unsafe MR.CS.Std.UnorderedMultimap_Int_Float GetUnorderedMultiMap()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetUnorderedMultiMap", ExactSpelling = true)]
                extern static MR.CS.Std.UnorderedMultimap_Int_Float._Underlying *__MR_StdContainers_GetUnorderedMultiMap();
                return new(__MR_StdContainers_GetUnorderedMultiMap(), is_owning: true);
            }

            /// Generated from function `MR::StdContainers::GetStdArray`.
            public static unsafe MR.CS.Std.Array_MRStdContainersA_42 GetStdArray()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetStdArray", ExactSpelling = true)]
                extern static MR.CS.Std.Array_MRStdContainersA_42._Underlying *__MR_StdContainers_GetStdArray();
                return new(__MR_StdContainers_GetStdArray(), is_owning: true);
            }

            /// Generated from function `MR::StdContainers::GetStdArraySimple`.
            public static MR.CS.Std.Array_Int_43 GetStdArraySimple()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetStdArraySimple", ExactSpelling = true)]
                extern static MR.CS.Std.Array_Int_43 __MR_StdContainers_GetStdArraySimple();
                return __MR_StdContainers_GetStdArraySimple();
            }

            // The custom simple array needs a bit more testing:
            /// Generated from function `MR::StdContainers::StdArraySimpleParam`.
            public static void StdArraySimpleParam(MR.CS.Std.Array_Int_43 _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_StdArraySimpleParam", ExactSpelling = true)]
                extern static void __MR_StdContainers_StdArraySimpleParam(MR.CS.Std.Array_Int_43 _1);
                __MR_StdContainers_StdArraySimpleParam(_1);
            }

            /// Generated from function `MR::StdContainers::StdArraySimplePtr`.
            public static unsafe MR.CS.Misc.Ref<MR.CS.Std.Array_Int_43>? StdArraySimplePtr(MR.CS.Misc.InOut<MR.CS.Std.Array_Int_43>? param)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_StdArraySimplePtr", ExactSpelling = true)]
                extern static MR.CS.Std.Array_Int_43 *__MR_StdContainers_StdArraySimplePtr(MR.CS.Std.Array_Int_43 *param);
                MR.CS.Std.Array_Int_43 __value_param = param is not null ? param.Value : default(MR.CS.Std.Array_Int_43);
                var __c_ret = __MR_StdContainers_StdArraySimplePtr(param is not null ? &__value_param : null);
                if (param is not null) param.Value = __value_param;
                return __c_ret is not null ? new MR.CS.Misc.Ref<MR.CS.Std.Array_Int_43>(__c_ret) : null;
            }

            // For this `std::multiset` specialization, mention all iterators so that they get merged.
            /// Generated from function `MR::StdContainers::GetMultiSetWithMergedIters`.
            public static unsafe MR.CS.Std.Multiset_Float GetMultiSetWithMergedIters()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetMultiSetWithMergedIters", ExactSpelling = true)]
                extern static MR.CS.Std.Multiset_Float._Underlying *__MR_StdContainers_GetMultiSetWithMergedIters();
                return new(__MR_StdContainers_GetMultiSetWithMergedIters(), is_owning: true);
            }

            /// Generated from function `MR::StdContainers::GetMergedIter`.
            public static unsafe MR.CS.Std.Set_Float.ConstIterator GetMergedIter()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetMergedIter", ExactSpelling = true)]
                extern static MR.CS.Std.Set_Float.ConstIterator._Underlying *__MR_StdContainers_GetMergedIter();
                return new(__MR_StdContainers_GetMergedIter(), is_owning: true);
            }

            /// Generated from function `MR::StdContainers::GetMergedIterConst`.
            public static unsafe MR.CS.Std.Set_Float.ConstIterator GetMergedIterConst()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetMergedIterConst", ExactSpelling = true)]
                extern static MR.CS.Std.Set_Float.ConstIterator._Underlying *__MR_StdContainers_GetMergedIterConst();
                return new(__MR_StdContainers_GetMergedIterConst(), is_owning: true);
            }

            /// Generated from function `MR::StdContainers::NonDefCon`.
            public static unsafe MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible NonDefCon()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_NonDefCon", ExactSpelling = true)]
                extern static MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible._Underlying *__MR_StdContainers_NonDefCon();
                return new(__MR_StdContainers_NonDefCon(), is_owning: true);
            }

            /// Generated from function `MR::StdContainers::GetVectorNA`.
            public static unsafe MR.CS.Std.Vector_MRStdContainersNonAssignable GetVectorNA()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetVectorNA", ExactSpelling = true)]
                extern static MR.CS.Std.Vector_MRStdContainersNonAssignable._Underlying *__MR_StdContainers_GetVectorNA();
                return new(__MR_StdContainers_GetVectorNA(), is_owning: true);
            }

            /// Generated from function `MR::StdContainers::GetDequeNA`.
            public static unsafe MR.CS.Std.Deque_MRStdContainersNonAssignable GetDequeNA()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetDequeNA", ExactSpelling = true)]
                extern static MR.CS.Std.Deque_MRStdContainersNonAssignable._Underlying *__MR_StdContainers_GetDequeNA();
                return new(__MR_StdContainers_GetDequeNA(), is_owning: true);
            }

            /// Generated from function `MR::StdContainers::GetListNA`.
            public static unsafe MR.CS.Std.List_MRStdContainersNonAssignable GetListNA()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetListNA", ExactSpelling = true)]
                extern static MR.CS.Std.List_MRStdContainersNonAssignable._Underlying *__MR_StdContainers_GetListNA();
                return new(__MR_StdContainers_GetListNA(), is_owning: true);
            }

            /// Generated from function `MR::StdContainers::GetSetNA`.
            public static unsafe MR.CS.Std.Set_MRStdContainersNonAssignable GetSetNA()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetSetNA", ExactSpelling = true)]
                extern static MR.CS.Std.Set_MRStdContainersNonAssignable._Underlying *__MR_StdContainers_GetSetNA();
                return new(__MR_StdContainers_GetSetNA(), is_owning: true);
            }

            /// Generated from function `MR::StdContainers::GetMultiSetNA`.
            public static unsafe MR.CS.Std.Multiset_MRStdContainersNonAssignable GetMultiSetNA()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetMultiSetNA", ExactSpelling = true)]
                extern static MR.CS.Std.Multiset_MRStdContainersNonAssignable._Underlying *__MR_StdContainers_GetMultiSetNA();
                return new(__MR_StdContainers_GetMultiSetNA(), is_owning: true);
            }

            /// Generated from function `MR::StdContainers::GetUnorderedSetNA`.
            public static unsafe MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable GetUnorderedSetNA()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetUnorderedSetNA", ExactSpelling = true)]
                extern static MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable._Underlying *__MR_StdContainers_GetUnorderedSetNA();
                return new(__MR_StdContainers_GetUnorderedSetNA(), is_owning: true);
            }

            /// Generated from function `MR::StdContainers::GetUnorderedMultiSetNA`.
            public static unsafe MR.CS.Std.UnorderedMultiset_MRStdContainersNonAssignable GetUnorderedMultiSetNA()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetUnorderedMultiSetNA", ExactSpelling = true)]
                extern static MR.CS.Std.UnorderedMultiset_MRStdContainersNonAssignable._Underlying *__MR_StdContainers_GetUnorderedMultiSetNA();
                return new(__MR_StdContainers_GetUnorderedMultiSetNA(), is_owning: true);
            }

            /// Generated from function `MR::StdContainers::GetMapNA`.
            public static unsafe MR.CS.Std.Map_MRStdContainersNonAssignable_Float GetMapNA()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetMapNA", ExactSpelling = true)]
                extern static MR.CS.Std.Map_MRStdContainersNonAssignable_Float._Underlying *__MR_StdContainers_GetMapNA();
                return new(__MR_StdContainers_GetMapNA(), is_owning: true);
            }

            /// Generated from function `MR::StdContainers::GetMultiMapNA`.
            public static unsafe MR.CS.Std.Multimap_MRStdContainersNonAssignable_Float GetMultiMapNA()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetMultiMapNA", ExactSpelling = true)]
                extern static MR.CS.Std.Multimap_MRStdContainersNonAssignable_Float._Underlying *__MR_StdContainers_GetMultiMapNA();
                return new(__MR_StdContainers_GetMultiMapNA(), is_owning: true);
            }

            /// Generated from function `MR::StdContainers::GetUnorderedMapNA`.
            public static unsafe MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float GetUnorderedMapNA()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetUnorderedMapNA", ExactSpelling = true)]
                extern static MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float._Underlying *__MR_StdContainers_GetUnorderedMapNA();
                return new(__MR_StdContainers_GetUnorderedMapNA(), is_owning: true);
            }

            /// Generated from function `MR::StdContainers::GetUnorderedMultiMapNA`.
            public static unsafe MR.CS.Std.UnorderedMultimap_MRStdContainersNonAssignable_Float GetUnorderedMultiMapNA()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetUnorderedMultiMapNA", ExactSpelling = true)]
                extern static MR.CS.Std.UnorderedMultimap_MRStdContainersNonAssignable_Float._Underlying *__MR_StdContainers_GetUnorderedMultiMapNA();
                return new(__MR_StdContainers_GetUnorderedMultiMapNA(), is_owning: true);
            }

            /// Generated from function `MR::StdContainers::GetStdArrayNA`.
            public static unsafe MR.CS.Std.Array_MRStdContainersNonAssignable_42 GetStdArrayNA()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetStdArrayNA", ExactSpelling = true)]
                extern static MR.CS.Std.Array_MRStdContainersNonAssignable_42._Underlying *__MR_StdContainers_GetStdArrayNA();
                return new(__MR_StdContainers_GetStdArrayNA(), is_owning: true);
            }

            // Fun stuff!
            // The type name is a bit weird for this, but at least it works.
            /// Generated from function `MR::StdContainers::GetStdArrayOfPlainArray`.
            public static MR.CS.Std.Array_IntArray4Array3_5 GetStdArrayOfPlainArray()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetStdArrayOfPlainArray", ExactSpelling = true)]
                extern static MR.CS.Std.Array_IntArray4Array3_5 __MR_StdContainers_GetStdArrayOfPlainArray();
                return __MR_StdContainers_GetStdArrayOfPlainArray();
            }
        }
    }
}
