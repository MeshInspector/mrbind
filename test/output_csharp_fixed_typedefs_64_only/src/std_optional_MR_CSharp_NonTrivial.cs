public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// Stores either a single `MR::CSharp::NonTrivial` or nothing.
            /// This is the const half of the class.
            /// </summary>
            public class Const_Optional_MRCSharpNonTrivial : MR.CS.Misc.Object<Const_Optional_MRCSharpNonTrivial>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_Optional_MRCSharpNonTrivial(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_CSharp_NonTrivial_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_optional_MR_CSharp_NonTrivial_Destroy(_Underlying *_this);
                    __MR_C_std_optional_MR_CSharp_NonTrivial_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Optional_MRCSharpNonTrivial() {Dispose(false);}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_Optional_MRCSharpNonTrivial() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_CSharp_NonTrivial_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_MRCSharpNonTrivial._Underlying *__MR_C_std_optional_MR_CSharp_NonTrivial_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_optional_MR_CSharp_NonTrivial_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Const_Optional_MRCSharpNonTrivial(MR.CS.Std._ByValue_Optional_MRCSharpNonTrivial other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_CSharp_NonTrivial_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_MRCSharpNonTrivial._Underlying *__MR_C_std_optional_MR_CSharp_NonTrivial_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Optional_MRCSharpNonTrivial._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_optional_MR_CSharp_NonTrivial_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// <summary>
                /// Constructs a new instance.
                /// </summary>
                public unsafe Const_Optional_MRCSharpNonTrivial(MR.CS.CSharp._ByValue_NonTrivial? other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_CSharp_NonTrivial_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_MRCSharpNonTrivial._Underlying *__MR_C_std_optional_MR_CSharp_NonTrivial_ConstructFrom(MR.CS.Misc._PassBy other_pass_by, MR.CS.CSharp.NonTrivial._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_optional_MR_CSharp_NonTrivial_ConstructFrom(other is not null ? other.PassByMode : MR.CS.Misc._PassBy.no_object, other is not null && other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Constructs a new instance.
                /// </summary>
                public static unsafe implicit operator Const_Optional_MRCSharpNonTrivial(MR.CS.CSharp._ByValue_NonTrivial? other) {return new(other);}

                /// <summary>
                /// The stored element or null if none, read-only.
                /// </summary>
                public unsafe MR.CS.CSharp.Const_NonTrivial? value()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_CSharp_NonTrivial_Value", ExactSpelling = true)]
                    extern static MR.CS.CSharp.Const_NonTrivial._Underlying *__MR_C_std_optional_MR_CSharp_NonTrivial_Value(_Underlying *_this);
                    var __c_ret = __MR_C_std_optional_MR_CSharp_NonTrivial_Value(_UnderlyingPtr);
                    MR.CS.CSharp.Const_NonTrivial? __ret;
                    __ret = __c_ret is not null ? new MR.CS.CSharp.Const_NonTrivial(__c_ret, is_owning: false) : null;
                    if (__ret is not null) __ret._KeepAlive(this);
                    return __ret;
                }
            }

            /// <summary>
            /// Stores either a single `MR::CSharp::NonTrivial` or nothing.
            /// This is the non-const half of the class.
            /// </summary>
            public class Optional_MRCSharpNonTrivial : Const_Optional_MRCSharpNonTrivial
            {
                internal unsafe Optional_MRCSharpNonTrivial(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Optional_MRCSharpNonTrivial() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_CSharp_NonTrivial_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_MRCSharpNonTrivial._Underlying *__MR_C_std_optional_MR_CSharp_NonTrivial_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_optional_MR_CSharp_NonTrivial_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Optional_MRCSharpNonTrivial(MR.CS.Std._ByValue_Optional_MRCSharpNonTrivial other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_CSharp_NonTrivial_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_MRCSharpNonTrivial._Underlying *__MR_C_std_optional_MR_CSharp_NonTrivial_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Optional_MRCSharpNonTrivial._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_optional_MR_CSharp_NonTrivial_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// <summary>
                /// Constructs a new instance.
                /// </summary>
                public unsafe Optional_MRCSharpNonTrivial(MR.CS.CSharp._ByValue_NonTrivial? other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_CSharp_NonTrivial_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_MRCSharpNonTrivial._Underlying *__MR_C_std_optional_MR_CSharp_NonTrivial_ConstructFrom(MR.CS.Misc._PassBy other_pass_by, MR.CS.CSharp.NonTrivial._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_optional_MR_CSharp_NonTrivial_ConstructFrom(other is not null ? other.PassByMode : MR.CS.Misc._PassBy.no_object, other is not null && other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Constructs a new instance.
                /// </summary>
                public static unsafe implicit operator Optional_MRCSharpNonTrivial(MR.CS.CSharp._ByValue_NonTrivial? other) {return new(other);}

                /// <summary>
                /// Assigns the contents from another instance. Both objects remain alive after the call.
                /// </summary>
                public unsafe void assign(MR.CS.Std._ByValue_Optional_MRCSharpNonTrivial other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_CSharp_NonTrivial_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_optional_MR_CSharp_NonTrivial_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Optional_MRCSharpNonTrivial._Underlying *other);
                    _DiscardKeepAlive();
                    if (other.Value is not null) _KeepAlive(other.Value);
                    __MR_C_std_optional_MR_CSharp_NonTrivial_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Assigns the contents.
                /// </summary>
                public unsafe void assign(MR.CS.CSharp._ByValue_NonTrivial? other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_CSharp_NonTrivial_AssignFrom", ExactSpelling = true)]
                    extern static void __MR_C_std_optional_MR_CSharp_NonTrivial_AssignFrom(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.CSharp.NonTrivial._Underlying *other);
                    __MR_C_std_optional_MR_CSharp_NonTrivial_AssignFrom(_UnderlyingPtr, other is not null ? other.PassByMode : MR.CS.Misc._PassBy.no_object, other is not null && other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// The stored element or null if none, mutable.
                /// </summary>
                public unsafe new MR.CS.CSharp.NonTrivial? value()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_CSharp_NonTrivial_MutableValue", ExactSpelling = true)]
                    extern static MR.CS.CSharp.NonTrivial._Underlying *__MR_C_std_optional_MR_CSharp_NonTrivial_MutableValue(_Underlying *_this);
                    var __c_ret = __MR_C_std_optional_MR_CSharp_NonTrivial_MutableValue(_UnderlyingPtr);
                    MR.CS.CSharp.NonTrivial? __ret;
                    __ret = __c_ret is not null ? new MR.CS.CSharp.NonTrivial(__c_ret, is_owning: false) : null;
                    if (__ret is not null) __ret._KeepAlive(this);
                    return __ret;
                }
            }

            /// <summary>
            /// This is used as a function parameter when the underlying function receives `Optional_MRCSharpNonTrivial` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `Optional_MRCSharpNonTrivial`/`Const_Optional_MRCSharpNonTrivial` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            /// </summary>
            public class _ByValue_Optional_MRCSharpNonTrivial
            {
                internal readonly Const_Optional_MRCSharpNonTrivial? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_Optional_MRCSharpNonTrivial() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_Optional_MRCSharpNonTrivial(Const_Optional_MRCSharpNonTrivial new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_Optional_MRCSharpNonTrivial(Const_Optional_MRCSharpNonTrivial arg) {return new(arg);}
                public _ByValue_Optional_MRCSharpNonTrivial(MR.CS.Misc._Moved<Optional_MRCSharpNonTrivial> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_Optional_MRCSharpNonTrivial(MR.CS.Misc._Moved<Optional_MRCSharpNonTrivial> arg) {return new(arg);}

                /// <summary>
                /// Constructs a new instance.
                /// </summary>
                public static unsafe implicit operator _ByValue_Optional_MRCSharpNonTrivial(MR.CS.CSharp._ByValue_NonTrivial? other) {return new MR.CS.Misc._Moved<MR.CS.Std.Optional_MRCSharpNonTrivial>(other);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Optional_MRCSharpNonTrivial` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Optional_MRCSharpNonTrivial`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Optional_MRCSharpNonTrivial`/`Const_Optional_MRCSharpNonTrivial` directly.
            /// </summary>
            public class _InOptMut_Optional_MRCSharpNonTrivial
            {
                public Optional_MRCSharpNonTrivial? Opt;

                public _InOptMut_Optional_MRCSharpNonTrivial() {}
                public _InOptMut_Optional_MRCSharpNonTrivial(Optional_MRCSharpNonTrivial value) {Opt = value;}
                public static implicit operator _InOptMut_Optional_MRCSharpNonTrivial(Optional_MRCSharpNonTrivial value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Optional_MRCSharpNonTrivial` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Optional_MRCSharpNonTrivial`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Optional_MRCSharpNonTrivial`/`Const_Optional_MRCSharpNonTrivial` to pass it to the function.
            /// </summary>
            public class _InOptConst_Optional_MRCSharpNonTrivial
            {
                public Const_Optional_MRCSharpNonTrivial? Opt;

                public _InOptConst_Optional_MRCSharpNonTrivial() {}
                public _InOptConst_Optional_MRCSharpNonTrivial(Const_Optional_MRCSharpNonTrivial value) {Opt = value;}
                public static implicit operator _InOptConst_Optional_MRCSharpNonTrivial(Const_Optional_MRCSharpNonTrivial value) {return new(value);}

                /// <summary>
                /// Constructs a new instance.
                /// </summary>
                public static unsafe implicit operator _InOptConst_Optional_MRCSharpNonTrivial(MR.CS.CSharp._ByValue_NonTrivial? other) {return new Const_Optional_MRCSharpNonTrivial(other);}
            }
        }
    }
}
