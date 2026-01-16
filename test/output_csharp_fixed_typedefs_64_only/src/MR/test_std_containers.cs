public static partial class MR
{
    public static partial class CS
    {
        public static partial class StdContainers
        {
            // `std::array` behaves differently with simple types.
            /// <summary>
            /// Generated from class `MR::StdContainers::A`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_A : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_A(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

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

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_A() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.A._Underlying *__MR_StdContainers_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_StdContainers_A_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::StdContainers::A::A`.
                /// </summary>
                public unsafe Const_A(MR.CS.StdContainers.Const_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.A._Underlying *__MR_StdContainers_A_ConstructFromAnother(MR.CS.StdContainers.A._Underlying *_other);
                    _UnderlyingPtr = __MR_StdContainers_A_ConstructFromAnother(_other._UnderlyingPtr);
                }
            }

            // `std::array` behaves differently with simple types.
            /// <summary>
            /// Generated from class `MR::StdContainers::A`.
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
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.A._Underlying *__MR_StdContainers_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_StdContainers_A_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::StdContainers::A::A`.
                /// </summary>
                public unsafe A(MR.CS.StdContainers.Const_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.A._Underlying *__MR_StdContainers_A_ConstructFromAnother(MR.CS.StdContainers.A._Underlying *_other);
                    _UnderlyingPtr = __MR_StdContainers_A_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// <summary>
                /// Generated from method `MR::StdContainers::A::operator=`.
                /// </summary>
                public unsafe MR.CS.StdContainers.A assign(MR.CS.StdContainers.Const_A _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_A_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.A._Underlying *__MR_StdContainers_A_AssignFromAnother(_Underlying *_this, MR.CS.StdContainers.A._Underlying *_other);
                    return new(__MR_StdContainers_A_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
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

            // Test vectors of a non-default-constructible type.
            /// <summary>
            /// Generated from class `MR::StdContainers::NonDefaultConstructible`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_NonDefaultConstructible : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_NonDefaultConstructible(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

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

                /// <summary>
                /// Generated from constructor `MR::StdContainers::NonDefaultConstructible::NonDefaultConstructible`.
                /// </summary>
                public unsafe Const_NonDefaultConstructible(MR.CS.StdContainers.Const_NonDefaultConstructible _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_NonDefaultConstructible_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.NonDefaultConstructible._Underlying *__MR_StdContainers_NonDefaultConstructible_ConstructFromAnother(MR.CS.StdContainers.NonDefaultConstructible._Underlying *_other);
                    _UnderlyingPtr = __MR_StdContainers_NonDefaultConstructible_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// <summary>
                /// Generated from constructor `MR::StdContainers::NonDefaultConstructible::NonDefaultConstructible`.
                /// </summary>
                public unsafe Const_NonDefaultConstructible(int _1) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_NonDefaultConstructible_Construct", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.NonDefaultConstructible._Underlying *__MR_StdContainers_NonDefaultConstructible_Construct(int _1);
                    _UnderlyingPtr = __MR_StdContainers_NonDefaultConstructible_Construct(_1);
                }

                /// <summary>
                /// Generated from constructor `MR::StdContainers::NonDefaultConstructible::NonDefaultConstructible`.
                /// </summary>
                public static unsafe implicit operator Const_NonDefaultConstructible(int _1) {return new(_1);}
            }

            // Test vectors of a non-default-constructible type.
            /// <summary>
            /// Generated from class `MR::StdContainers::NonDefaultConstructible`.
            /// This is the non-const half of the class.
            /// </summary>
            public class NonDefaultConstructible : Const_NonDefaultConstructible
            {
                internal unsafe NonDefaultConstructible(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Generated from constructor `MR::StdContainers::NonDefaultConstructible::NonDefaultConstructible`.
                /// </summary>
                public unsafe NonDefaultConstructible(MR.CS.StdContainers.Const_NonDefaultConstructible _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_NonDefaultConstructible_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.NonDefaultConstructible._Underlying *__MR_StdContainers_NonDefaultConstructible_ConstructFromAnother(MR.CS.StdContainers.NonDefaultConstructible._Underlying *_other);
                    _UnderlyingPtr = __MR_StdContainers_NonDefaultConstructible_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// <summary>
                /// Generated from constructor `MR::StdContainers::NonDefaultConstructible::NonDefaultConstructible`.
                /// </summary>
                public unsafe NonDefaultConstructible(int _1) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_NonDefaultConstructible_Construct", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.NonDefaultConstructible._Underlying *__MR_StdContainers_NonDefaultConstructible_Construct(int _1);
                    _UnderlyingPtr = __MR_StdContainers_NonDefaultConstructible_Construct(_1);
                }

                /// <summary>
                /// Generated from constructor `MR::StdContainers::NonDefaultConstructible::NonDefaultConstructible`.
                /// </summary>
                public static unsafe implicit operator NonDefaultConstructible(int _1) {return new(_1);}

                /// <summary>
                /// Generated from method `MR::StdContainers::NonDefaultConstructible::operator=`.
                /// </summary>
                public unsafe MR.CS.StdContainers.NonDefaultConstructible assign(MR.CS.StdContainers.Const_NonDefaultConstructible _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_NonDefaultConstructible_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.NonDefaultConstructible._Underlying *__MR_StdContainers_NonDefaultConstructible_AssignFromAnother(_Underlying *_this, MR.CS.StdContainers.NonDefaultConstructible._Underlying *_other);
                    return new(__MR_StdContainers_NonDefaultConstructible_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
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

                /// <summary>
                /// Generated from constructor `MR::StdContainers::NonDefaultConstructible::NonDefaultConstructible`.
                /// </summary>
                public static unsafe implicit operator _InOptConst_NonDefaultConstructible(int _1) {return new Const_NonDefaultConstructible(_1);}
            }

            // A non-assignable type?
            /// <summary>
            /// Generated from class `MR::StdContainers::NonAssignable`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_NonAssignable : MR.CS.Misc.Object, System.IDisposable, System.IEquatable<MR.CS.StdContainers._ByValue_NonAssignable>
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_NonAssignable(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

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

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_NonAssignable() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_NonAssignable_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.NonAssignable._Underlying *__MR_StdContainers_NonAssignable_DefaultConstruct();
                    _UnderlyingPtr = __MR_StdContainers_NonAssignable_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::StdContainers::NonAssignable::NonAssignable`.
                /// </summary>
                public unsafe Const_NonAssignable(MR.CS.StdContainers._ByValue_NonAssignable _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_NonAssignable_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.NonAssignable._Underlying *__MR_StdContainers_NonAssignable_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.StdContainers.NonAssignable._Underlying *_other);
                    _UnderlyingPtr = __MR_StdContainers_NonAssignable_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Generated from method `MR::StdContainers::NonAssignable::operator<`.
                /// </summary>
                public unsafe bool less(MR.CS.StdContainers._ByValue_NonAssignable _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_less_MR_StdContainers_NonAssignable", ExactSpelling = true)]
                    extern static byte __MR_C_less_MR_StdContainers_NonAssignable(_Underlying *_this, MR.CS.Misc._PassBy _1_pass_by, MR.CS.StdContainers.NonAssignable._Underlying *_1);
                    return __MR_C_less_MR_StdContainers_NonAssignable(_UnderlyingPtr, _1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null) != 0;
                }

                /// <summary>
                /// Generated from method `MR::StdContainers::NonAssignable::operator==`.
                /// </summary>
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
            /// <summary>
            /// Generated from class `MR::StdContainers::NonAssignable`.
            /// This is the non-const half of the class.
            /// </summary>
            public class NonAssignable : Const_NonAssignable
            {
                internal unsafe NonAssignable(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe NonAssignable() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_NonAssignable_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.NonAssignable._Underlying *__MR_StdContainers_NonAssignable_DefaultConstruct();
                    _UnderlyingPtr = __MR_StdContainers_NonAssignable_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::StdContainers::NonAssignable::NonAssignable`.
                /// </summary>
                public unsafe NonAssignable(MR.CS.StdContainers._ByValue_NonAssignable _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_NonAssignable_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.NonAssignable._Underlying *__MR_StdContainers_NonAssignable_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.StdContainers.NonAssignable._Underlying *_other);
                    _UnderlyingPtr = __MR_StdContainers_NonAssignable_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }
            }

            /// <summary>
            /// This is used as a function parameter when the underlying function receives `NonAssignable` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `NonAssignable`/`Const_NonAssignable` to copy it into the function.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            /// </summary>
            public class _ByValue_NonAssignable
            {
                internal readonly Const_NonAssignable? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_NonAssignable() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_NonAssignable(Const_NonAssignable new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_NonAssignable(Const_NonAssignable arg) {return new(arg);}
            }

            /// <summary>
            /// This is used for optional parameters of class `NonAssignable` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_NonAssignable`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `NonAssignable`/`Const_NonAssignable` directly.
            /// </summary>
            public class _InOptMut_NonAssignable
            {
                public NonAssignable? Opt;

                public _InOptMut_NonAssignable() {}
                public _InOptMut_NonAssignable(NonAssignable value) {Opt = value;}
                public static implicit operator _InOptMut_NonAssignable(NonAssignable value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `NonAssignable` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_NonAssignable`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `NonAssignable`/`Const_NonAssignable` to pass it to the function.
            /// </summary>
            public class _InOptConst_NonAssignable
            {
                public Const_NonAssignable? Opt;

                public _InOptConst_NonAssignable() {}
                public _InOptConst_NonAssignable(Const_NonAssignable value) {Opt = value;}
                public static implicit operator _InOptConst_NonAssignable(Const_NonAssignable value) {return new(value);}
            }

            /// <summary>
            /// Generated from function `MR::StdContainers::Set`.
            /// </summary>
            public static unsafe void set(MR.CS.Std._ByValue_Vector_Int _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_Set", ExactSpelling = true)]
                extern static void __MR_StdContainers_Set(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.Vector_Int._Underlying *_1);
                __MR_StdContainers_Set(_1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// <summary>
            /// Generated from function `MR::StdContainers::SetWithDefault`.
            /// Parameter `_1` defaults to `{1, 2, 3}`.
            /// </summary>
            public static unsafe void setWithDefault(MR.CS.Std._ByValue_Vector_Int? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_SetWithDefault", ExactSpelling = true)]
                extern static void __MR_StdContainers_SetWithDefault(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.Vector_Int._Underlying *_1);
                __MR_StdContainers_SetWithDefault(_1 is not null ? _1.PassByMode : MR.CS.Misc._PassBy.default_arg, _1 is not null && _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// <summary>
            /// Generated from function `MR::StdContainers::Get`.
            /// </summary>
            public static unsafe MR.CS.Misc._Moved<MR.CS.Std.Vector_Int> get()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_Get", ExactSpelling = true)]
                extern static MR.CS.Std.Vector_Int._Underlying *__MR_StdContainers_Get();
                return MR.CS.Misc.Move(new MR.CS.Std.Vector_Int(__MR_StdContainers_Get(), is_owning: true));
            }

            /// <summary>
            /// Generated from function `MR::StdContainers::WriteToRef`.
            /// </summary>
            public static unsafe void writeToRef(MR.CS.Std.Vector_Int _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_WriteToRef", ExactSpelling = true)]
                extern static void __MR_StdContainers_WriteToRef(MR.CS.Std.Vector_Int._Underlying *_1);
                __MR_StdContainers_WriteToRef(_1._UnderlyingPtr);
            }

            /// <summary>
            /// Generated from function `MR::StdContainers::WriteToPtr`.
            /// </summary>
            public static unsafe void writeToPtr(MR.CS.Std.Vector_Int? _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_WriteToPtr", ExactSpelling = true)]
                extern static void __MR_StdContainers_WriteToPtr(MR.CS.Std.Vector_Int._Underlying *_1);
                __MR_StdContainers_WriteToPtr(_1 is not null ? _1._UnderlyingPtr : null);
            }

            /// <summary>
            /// Generated from function `MR::StdContainers::ConstRef`.
            /// </summary>
            public static unsafe void constRef(MR.CS.Std.Const_Vector_Int _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_ConstRef", ExactSpelling = true)]
                extern static void __MR_StdContainers_ConstRef(MR.CS.Std.Const_Vector_Int._Underlying *_1);
                __MR_StdContainers_ConstRef(_1._UnderlyingPtr);
            }

            /// <summary>
            /// Generated from function `MR::StdContainers::RvalueRef`.
            /// </summary>
            public static unsafe void rvalueRef(MR.CS.Misc._Moved<MR.CS.Std.Vector_Int> _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_RvalueRef", ExactSpelling = true)]
                extern static void __MR_StdContainers_RvalueRef(MR.CS.Std.Vector_Int._Underlying *_1);
                __MR_StdContainers_RvalueRef(_1.Value._UnderlyingPtr);
            }

            /// <summary>
            /// Generated from function `MR::StdContainers::ConstRvalueRef`.
            /// </summary>
            public static unsafe void constRvalueRef(MR.CS.Misc._Moved<MR.CS.Std.Const_Vector_Int> _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_ConstRvalueRef", ExactSpelling = true)]
                extern static void __MR_StdContainers_ConstRvalueRef(MR.CS.Std.Const_Vector_Int._Underlying *_1);
                __MR_StdContainers_ConstRvalueRef(_1.Value._UnderlyingPtr);
            }

            // Just the list of other containers.
            /// <summary>
            /// Generated from function `MR::StdContainers::GetDeque`.
            /// </summary>
            public static unsafe MR.CS.Misc._Moved<MR.CS.Std.Deque_Int> getDeque()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetDeque", ExactSpelling = true)]
                extern static MR.CS.Std.Deque_Int._Underlying *__MR_StdContainers_GetDeque();
                return MR.CS.Misc.Move(new MR.CS.Std.Deque_Int(__MR_StdContainers_GetDeque(), is_owning: true));
            }

            /// <summary>
            /// Generated from function `MR::StdContainers::GetList`.
            /// </summary>
            public static unsafe MR.CS.Misc._Moved<MR.CS.Std.List_Int> getList()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetList", ExactSpelling = true)]
                extern static MR.CS.Std.List_Int._Underlying *__MR_StdContainers_GetList();
                return MR.CS.Misc.Move(new MR.CS.Std.List_Int(__MR_StdContainers_GetList(), is_owning: true));
            }

            /// <summary>
            /// Generated from function `MR::StdContainers::GetSet`.
            /// </summary>
            public static unsafe MR.CS.Misc._Moved<MR.CS.Std.Set_Int> getSet()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetSet", ExactSpelling = true)]
                extern static MR.CS.Std.Set_Int._Underlying *__MR_StdContainers_GetSet();
                return MR.CS.Misc.Move(new MR.CS.Std.Set_Int(__MR_StdContainers_GetSet(), is_owning: true));
            }

            /// <summary>
            /// Generated from function `MR::StdContainers::GetMultiSet`.
            /// </summary>
            public static unsafe MR.CS.Misc._Moved<MR.CS.Std.Multiset_Int> getMultiSet()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetMultiSet", ExactSpelling = true)]
                extern static MR.CS.Std.Multiset_Int._Underlying *__MR_StdContainers_GetMultiSet();
                return MR.CS.Misc.Move(new MR.CS.Std.Multiset_Int(__MR_StdContainers_GetMultiSet(), is_owning: true));
            }

            /// <summary>
            /// Generated from function `MR::StdContainers::GetUnorderedSet`.
            /// </summary>
            public static unsafe MR.CS.Misc._Moved<MR.CS.Std.UnorderedSet_Int> getUnorderedSet()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetUnorderedSet", ExactSpelling = true)]
                extern static MR.CS.Std.UnorderedSet_Int._Underlying *__MR_StdContainers_GetUnorderedSet();
                return MR.CS.Misc.Move(new MR.CS.Std.UnorderedSet_Int(__MR_StdContainers_GetUnorderedSet(), is_owning: true));
            }

            /// <summary>
            /// Generated from function `MR::StdContainers::GetUnorderedMultiSet`.
            /// </summary>
            public static unsafe MR.CS.Misc._Moved<MR.CS.Std.UnorderedMultiset_Int> getUnorderedMultiSet()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetUnorderedMultiSet", ExactSpelling = true)]
                extern static MR.CS.Std.UnorderedMultiset_Int._Underlying *__MR_StdContainers_GetUnorderedMultiSet();
                return MR.CS.Misc.Move(new MR.CS.Std.UnorderedMultiset_Int(__MR_StdContainers_GetUnorderedMultiSet(), is_owning: true));
            }

            /// <summary>
            /// Generated from function `MR::StdContainers::GetMap`.
            /// </summary>
            public static unsafe MR.CS.Misc._Moved<MR.CS.Std.Map_Int_Float> getMap()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetMap", ExactSpelling = true)]
                extern static MR.CS.Std.Map_Int_Float._Underlying *__MR_StdContainers_GetMap();
                return MR.CS.Misc.Move(new MR.CS.Std.Map_Int_Float(__MR_StdContainers_GetMap(), is_owning: true));
            }

            /// <summary>
            /// Generated from function `MR::StdContainers::GetMultiMap`.
            /// </summary>
            public static unsafe MR.CS.Misc._Moved<MR.CS.Std.Multimap_Int_Float> getMultiMap()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetMultiMap", ExactSpelling = true)]
                extern static MR.CS.Std.Multimap_Int_Float._Underlying *__MR_StdContainers_GetMultiMap();
                return MR.CS.Misc.Move(new MR.CS.Std.Multimap_Int_Float(__MR_StdContainers_GetMultiMap(), is_owning: true));
            }

            /// <summary>
            /// Generated from function `MR::StdContainers::GetUnorderedMap`.
            /// </summary>
            public static unsafe MR.CS.Misc._Moved<MR.CS.Std.UnorderedMap_Int_Float> getUnorderedMap()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetUnorderedMap", ExactSpelling = true)]
                extern static MR.CS.Std.UnorderedMap_Int_Float._Underlying *__MR_StdContainers_GetUnorderedMap();
                return MR.CS.Misc.Move(new MR.CS.Std.UnorderedMap_Int_Float(__MR_StdContainers_GetUnorderedMap(), is_owning: true));
            }

            /// <summary>
            /// Generated from function `MR::StdContainers::GetUnorderedMultiMap`.
            /// </summary>
            public static unsafe MR.CS.Misc._Moved<MR.CS.Std.UnorderedMultimap_Int_Float> getUnorderedMultiMap()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetUnorderedMultiMap", ExactSpelling = true)]
                extern static MR.CS.Std.UnorderedMultimap_Int_Float._Underlying *__MR_StdContainers_GetUnorderedMultiMap();
                return MR.CS.Misc.Move(new MR.CS.Std.UnorderedMultimap_Int_Float(__MR_StdContainers_GetUnorderedMultiMap(), is_owning: true));
            }

            /// <summary>
            /// Generated from function `MR::StdContainers::GetStdArray`.
            /// </summary>
            public static unsafe MR.CS.Std.Array_MRStdContainersA_42 getStdArray()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetStdArray", ExactSpelling = true)]
                extern static MR.CS.Std.Array_MRStdContainersA_42._Underlying *__MR_StdContainers_GetStdArray();
                return new(__MR_StdContainers_GetStdArray(), is_owning: true);
            }

            /// <summary>
            /// Generated from function `MR::StdContainers::GetStdArraySimple`.
            /// </summary>
            public static MR.CS.Std.Array_Int_43 getStdArraySimple()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetStdArraySimple", ExactSpelling = true)]
                extern static MR.CS.Std.Array_Int_43 __MR_StdContainers_GetStdArraySimple();
                return __MR_StdContainers_GetStdArraySimple();
            }

            // The custom simple array needs a bit more testing:
            /// <summary>
            /// Generated from function `MR::StdContainers::StdArraySimpleParam`.
            /// </summary>
            public static void stdArraySimpleParam(MR.CS.Std.Array_Int_43 _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_StdArraySimpleParam", ExactSpelling = true)]
                extern static void __MR_StdContainers_StdArraySimpleParam(MR.CS.Std.Array_Int_43 _1);
                __MR_StdContainers_StdArraySimpleParam(_1);
            }

            /// <summary>
            /// Generated from function `MR::StdContainers::StdArraySimplePtr`.
            /// </summary>
            public static unsafe MR.CS.Misc.Ref<MR.CS.Std.Array_Int_43>? stdArraySimplePtr(MR.CS.Misc.InOut<MR.CS.Std.Array_Int_43>? param)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_StdArraySimplePtr", ExactSpelling = true)]
                extern static MR.CS.Std.Array_Int_43 *__MR_StdContainers_StdArraySimplePtr(MR.CS.Std.Array_Int_43 *param);
                MR.CS.Std.Array_Int_43 __value_param = param is not null ? param.Value : default(MR.CS.Std.Array_Int_43);
                var __ret = __MR_StdContainers_StdArraySimplePtr(param is not null ? &__value_param : null);
                if (param is not null) param.Value = __value_param;
                return __ret is not null ? new MR.CS.Misc.Ref<MR.CS.Std.Array_Int_43>(__ret) : null;
            }

            // For this `std::multiset` specialization, mention all iterators so that they get merged.
            /// <summary>
            /// Generated from function `MR::StdContainers::GetMultiSetWithMergedIters`.
            /// </summary>
            public static unsafe MR.CS.Misc._Moved<MR.CS.Std.Multiset_Float> getMultiSetWithMergedIters()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetMultiSetWithMergedIters", ExactSpelling = true)]
                extern static MR.CS.Std.Multiset_Float._Underlying *__MR_StdContainers_GetMultiSetWithMergedIters();
                return MR.CS.Misc.Move(new MR.CS.Std.Multiset_Float(__MR_StdContainers_GetMultiSetWithMergedIters(), is_owning: true));
            }

            /// <summary>
            /// Generated from function `MR::StdContainers::GetMergedIter`.
            /// </summary>
            public static unsafe MR.CS.Std.Set_Float.ConstIterator getMergedIter()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetMergedIter", ExactSpelling = true)]
                extern static MR.CS.Std.Set_Float.ConstIterator._Underlying *__MR_StdContainers_GetMergedIter();
                return new(__MR_StdContainers_GetMergedIter(), is_owning: true);
            }

            /// <summary>
            /// Generated from function `MR::StdContainers::GetMergedIterConst`.
            /// </summary>
            public static unsafe MR.CS.Std.Set_Float.ConstIterator getMergedIterConst()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetMergedIterConst", ExactSpelling = true)]
                extern static MR.CS.Std.Set_Float.ConstIterator._Underlying *__MR_StdContainers_GetMergedIterConst();
                return new(__MR_StdContainers_GetMergedIterConst(), is_owning: true);
            }

            /// <summary>
            /// Generated from function `MR::StdContainers::NonDefCon`.
            /// </summary>
            public static unsafe MR.CS.Misc._Moved<MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible> nonDefCon()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_NonDefCon", ExactSpelling = true)]
                extern static MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible._Underlying *__MR_StdContainers_NonDefCon();
                return MR.CS.Misc.Move(new MR.CS.Std.Vector_MRStdContainersNonDefaultConstructible(__MR_StdContainers_NonDefCon(), is_owning: true));
            }

            /// <summary>
            /// Generated from function `MR::StdContainers::GetVectorNA`.
            /// </summary>
            public static unsafe MR.CS.Misc._Moved<MR.CS.Std.Vector_MRStdContainersNonAssignable> getVectorNA()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetVectorNA", ExactSpelling = true)]
                extern static MR.CS.Std.Vector_MRStdContainersNonAssignable._Underlying *__MR_StdContainers_GetVectorNA();
                return MR.CS.Misc.Move(new MR.CS.Std.Vector_MRStdContainersNonAssignable(__MR_StdContainers_GetVectorNA(), is_owning: true));
            }

            /// <summary>
            /// Generated from function `MR::StdContainers::GetDequeNA`.
            /// </summary>
            public static unsafe MR.CS.Misc._Moved<MR.CS.Std.Deque_MRStdContainersNonAssignable> getDequeNA()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetDequeNA", ExactSpelling = true)]
                extern static MR.CS.Std.Deque_MRStdContainersNonAssignable._Underlying *__MR_StdContainers_GetDequeNA();
                return MR.CS.Misc.Move(new MR.CS.Std.Deque_MRStdContainersNonAssignable(__MR_StdContainers_GetDequeNA(), is_owning: true));
            }

            /// <summary>
            /// Generated from function `MR::StdContainers::GetListNA`.
            /// </summary>
            public static unsafe MR.CS.Misc._Moved<MR.CS.Std.List_MRStdContainersNonAssignable> getListNA()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetListNA", ExactSpelling = true)]
                extern static MR.CS.Std.List_MRStdContainersNonAssignable._Underlying *__MR_StdContainers_GetListNA();
                return MR.CS.Misc.Move(new MR.CS.Std.List_MRStdContainersNonAssignable(__MR_StdContainers_GetListNA(), is_owning: true));
            }

            /// <summary>
            /// Generated from function `MR::StdContainers::GetSetNA`.
            /// </summary>
            public static unsafe MR.CS.Misc._Moved<MR.CS.Std.Set_MRStdContainersNonAssignable> getSetNA()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetSetNA", ExactSpelling = true)]
                extern static MR.CS.Std.Set_MRStdContainersNonAssignable._Underlying *__MR_StdContainers_GetSetNA();
                return MR.CS.Misc.Move(new MR.CS.Std.Set_MRStdContainersNonAssignable(__MR_StdContainers_GetSetNA(), is_owning: true));
            }

            /// <summary>
            /// Generated from function `MR::StdContainers::GetMultiSetNA`.
            /// </summary>
            public static unsafe MR.CS.Misc._Moved<MR.CS.Std.Multiset_MRStdContainersNonAssignable> getMultiSetNA()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetMultiSetNA", ExactSpelling = true)]
                extern static MR.CS.Std.Multiset_MRStdContainersNonAssignable._Underlying *__MR_StdContainers_GetMultiSetNA();
                return MR.CS.Misc.Move(new MR.CS.Std.Multiset_MRStdContainersNonAssignable(__MR_StdContainers_GetMultiSetNA(), is_owning: true));
            }

            /// <summary>
            /// Generated from function `MR::StdContainers::GetUnorderedSetNA`.
            /// </summary>
            public static unsafe MR.CS.Misc._Moved<MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable> getUnorderedSetNA()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetUnorderedSetNA", ExactSpelling = true)]
                extern static MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable._Underlying *__MR_StdContainers_GetUnorderedSetNA();
                return MR.CS.Misc.Move(new MR.CS.Std.UnorderedSet_MRStdContainersNonAssignable(__MR_StdContainers_GetUnorderedSetNA(), is_owning: true));
            }

            /// <summary>
            /// Generated from function `MR::StdContainers::GetUnorderedMultiSetNA`.
            /// </summary>
            public static unsafe MR.CS.Misc._Moved<MR.CS.Std.UnorderedMultiset_MRStdContainersNonAssignable> getUnorderedMultiSetNA()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetUnorderedMultiSetNA", ExactSpelling = true)]
                extern static MR.CS.Std.UnorderedMultiset_MRStdContainersNonAssignable._Underlying *__MR_StdContainers_GetUnorderedMultiSetNA();
                return MR.CS.Misc.Move(new MR.CS.Std.UnorderedMultiset_MRStdContainersNonAssignable(__MR_StdContainers_GetUnorderedMultiSetNA(), is_owning: true));
            }

            /// <summary>
            /// Generated from function `MR::StdContainers::GetMapNA`.
            /// </summary>
            public static unsafe MR.CS.Misc._Moved<MR.CS.Std.Map_MRStdContainersNonAssignable_Float> getMapNA()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetMapNA", ExactSpelling = true)]
                extern static MR.CS.Std.Map_MRStdContainersNonAssignable_Float._Underlying *__MR_StdContainers_GetMapNA();
                return MR.CS.Misc.Move(new MR.CS.Std.Map_MRStdContainersNonAssignable_Float(__MR_StdContainers_GetMapNA(), is_owning: true));
            }

            /// <summary>
            /// Generated from function `MR::StdContainers::GetMultiMapNA`.
            /// </summary>
            public static unsafe MR.CS.Misc._Moved<MR.CS.Std.Multimap_MRStdContainersNonAssignable_Float> getMultiMapNA()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetMultiMapNA", ExactSpelling = true)]
                extern static MR.CS.Std.Multimap_MRStdContainersNonAssignable_Float._Underlying *__MR_StdContainers_GetMultiMapNA();
                return MR.CS.Misc.Move(new MR.CS.Std.Multimap_MRStdContainersNonAssignable_Float(__MR_StdContainers_GetMultiMapNA(), is_owning: true));
            }

            /// <summary>
            /// Generated from function `MR::StdContainers::GetUnorderedMapNA`.
            /// </summary>
            public static unsafe MR.CS.Misc._Moved<MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float> getUnorderedMapNA()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetUnorderedMapNA", ExactSpelling = true)]
                extern static MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float._Underlying *__MR_StdContainers_GetUnorderedMapNA();
                return MR.CS.Misc.Move(new MR.CS.Std.UnorderedMap_MRStdContainersNonAssignable_Float(__MR_StdContainers_GetUnorderedMapNA(), is_owning: true));
            }

            /// <summary>
            /// Generated from function `MR::StdContainers::GetUnorderedMultiMapNA`.
            /// </summary>
            public static unsafe MR.CS.Misc._Moved<MR.CS.Std.UnorderedMultimap_MRStdContainersNonAssignable_Float> getUnorderedMultiMapNA()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetUnorderedMultiMapNA", ExactSpelling = true)]
                extern static MR.CS.Std.UnorderedMultimap_MRStdContainersNonAssignable_Float._Underlying *__MR_StdContainers_GetUnorderedMultiMapNA();
                return MR.CS.Misc.Move(new MR.CS.Std.UnorderedMultimap_MRStdContainersNonAssignable_Float(__MR_StdContainers_GetUnorderedMultiMapNA(), is_owning: true));
            }

            /// <summary>
            /// Generated from function `MR::StdContainers::GetStdArrayNA`.
            /// </summary>
            public static unsafe MR.CS.Misc._Moved<MR.CS.Std.Array_MRStdContainersNonAssignable_42> getStdArrayNA()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetStdArrayNA", ExactSpelling = true)]
                extern static MR.CS.Std.Array_MRStdContainersNonAssignable_42._Underlying *__MR_StdContainers_GetStdArrayNA();
                return MR.CS.Misc.Move(new MR.CS.Std.Array_MRStdContainersNonAssignable_42(__MR_StdContainers_GetStdArrayNA(), is_owning: true));
            }

            // Fun stuff!
            // The type name is a bit weird for this, but at least it works.
            /// <summary>
            /// Generated from function `MR::StdContainers::GetStdArrayOfPlainArray`.
            /// </summary>
            public static MR.CS.Std.Array_IntArray4Array3_5 getStdArrayOfPlainArray()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdContainers_GetStdArrayOfPlainArray", ExactSpelling = true)]
                extern static MR.CS.Std.Array_IntArray4Array3_5 __MR_StdContainers_GetStdArrayOfPlainArray();
                return __MR_StdContainers_GetStdArrayOfPlainArray();
            }
        }
    }
}
