public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// Stores either a single `MR::StdOptional::B` or nothing.
            /// This is the const half of the class.
            public class Const_Optional_MRStdOptionalB : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_Optional_MRStdOptionalB(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_StdOptional_B_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_optional_MR_StdOptional_B_Destroy(_Underlying *_this);
                    __MR_C_std_optional_MR_StdOptional_B_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Optional_MRStdOptionalB() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_Optional_MRStdOptionalB() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_StdOptional_B_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_MRStdOptionalB._Underlying *__MR_C_std_optional_MR_StdOptional_B_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_optional_MR_StdOptional_B_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Const_Optional_MRStdOptionalB(MR.CS.Std._ByValue_Optional_MRStdOptionalB other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_StdOptional_B_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_MRStdOptionalB._Underlying *__MR_C_std_optional_MR_StdOptional_B_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Optional_MRStdOptionalB._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_optional_MR_StdOptional_B_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// Constructs a new instance.
                public unsafe Const_Optional_MRStdOptionalB(MR.CS.StdOptional._ByValue_B? other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_StdOptional_B_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_MRStdOptionalB._Underlying *__MR_C_std_optional_MR_StdOptional_B_ConstructFrom(MR.CS.Misc._PassBy other_pass_by, MR.CS.StdOptional.B._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_optional_MR_StdOptional_B_ConstructFrom(other is not null ? other.PassByMode : MR.CS.Misc._PassBy.no_object, other is not null && other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// Constructs a new instance.
                public static unsafe implicit operator Const_Optional_MRStdOptionalB(MR.CS.StdOptional._ByValue_B? other) {return new(other);}

                /// The stored element or null if none, read-only.
                public unsafe MR.CS.StdOptional.Const_B? value()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_StdOptional_B_Value", ExactSpelling = true)]
                    extern static MR.CS.StdOptional.Const_B._Underlying *__MR_C_std_optional_MR_StdOptional_B_Value(_Underlying *_this);
                    var __ret = __MR_C_std_optional_MR_StdOptional_B_Value(_UnderlyingPtr);
                    return __ret is not null ? new MR.CS.StdOptional.Const_B(__ret, is_owning: false) : null;
                }
            }

            /// Stores either a single `MR::StdOptional::B` or nothing.
            /// This is the non-const half of the class.
            public class Optional_MRStdOptionalB : Const_Optional_MRStdOptionalB
            {
                internal unsafe Optional_MRStdOptionalB(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Optional_MRStdOptionalB() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_StdOptional_B_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_MRStdOptionalB._Underlying *__MR_C_std_optional_MR_StdOptional_B_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_optional_MR_StdOptional_B_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Optional_MRStdOptionalB(MR.CS.Std._ByValue_Optional_MRStdOptionalB other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_StdOptional_B_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_MRStdOptionalB._Underlying *__MR_C_std_optional_MR_StdOptional_B_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Optional_MRStdOptionalB._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_optional_MR_StdOptional_B_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// Constructs a new instance.
                public unsafe Optional_MRStdOptionalB(MR.CS.StdOptional._ByValue_B? other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_StdOptional_B_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_MRStdOptionalB._Underlying *__MR_C_std_optional_MR_StdOptional_B_ConstructFrom(MR.CS.Misc._PassBy other_pass_by, MR.CS.StdOptional.B._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_optional_MR_StdOptional_B_ConstructFrom(other is not null ? other.PassByMode : MR.CS.Misc._PassBy.no_object, other is not null && other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// Constructs a new instance.
                public static unsafe implicit operator Optional_MRStdOptionalB(MR.CS.StdOptional._ByValue_B? other) {return new(other);}

                /// Assigns the contents from another instance. Both objects remain alive after the call.
                public unsafe void assign(MR.CS.Std._ByValue_Optional_MRStdOptionalB other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_StdOptional_B_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_optional_MR_StdOptional_B_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Optional_MRStdOptionalB._Underlying *other);
                    __MR_C_std_optional_MR_StdOptional_B_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// Assigns the contents.
                public unsafe void assign(MR.CS.StdOptional._ByValue_B? other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_StdOptional_B_AssignFrom", ExactSpelling = true)]
                    extern static void __MR_C_std_optional_MR_StdOptional_B_AssignFrom(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.StdOptional.B._Underlying *other);
                    __MR_C_std_optional_MR_StdOptional_B_AssignFrom(_UnderlyingPtr, other is not null ? other.PassByMode : MR.CS.Misc._PassBy.no_object, other is not null && other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// The stored element or null if none, mutable.
                public unsafe new MR.CS.StdOptional.B? value()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_StdOptional_B_MutableValue", ExactSpelling = true)]
                    extern static MR.CS.StdOptional.B._Underlying *__MR_C_std_optional_MR_StdOptional_B_MutableValue(_Underlying *_this);
                    var __ret = __MR_C_std_optional_MR_StdOptional_B_MutableValue(_UnderlyingPtr);
                    return __ret is not null ? new MR.CS.StdOptional.B(__ret, is_owning: false) : null;
                }
            }

            /// This is used as a function parameter when the underlying function receives `Optional_MRStdOptionalB` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `Optional_MRStdOptionalB`/`Const_Optional_MRStdOptionalB` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            public class _ByValue_Optional_MRStdOptionalB
            {
                internal readonly Const_Optional_MRStdOptionalB? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_Optional_MRStdOptionalB() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_Optional_MRStdOptionalB(Const_Optional_MRStdOptionalB new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_Optional_MRStdOptionalB(Const_Optional_MRStdOptionalB arg) {return new(arg);}
                public _ByValue_Optional_MRStdOptionalB(MR.CS.Misc._Moved<Optional_MRStdOptionalB> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_Optional_MRStdOptionalB(MR.CS.Misc._Moved<Optional_MRStdOptionalB> arg) {return new(arg);}

                /// Constructs a new instance.
                public static unsafe implicit operator _ByValue_Optional_MRStdOptionalB(MR.CS.StdOptional._ByValue_B? other) {return new MR.CS.Misc._Moved<MR.CS.Std.Optional_MRStdOptionalB>(other);}
            }

            /// This is used for optional parameters of class `Optional_MRStdOptionalB` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Optional_MRStdOptionalB`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Optional_MRStdOptionalB`/`Const_Optional_MRStdOptionalB` directly.
            public class _InOptMut_Optional_MRStdOptionalB
            {
                public Optional_MRStdOptionalB? Opt;

                public _InOptMut_Optional_MRStdOptionalB() {}
                public _InOptMut_Optional_MRStdOptionalB(Optional_MRStdOptionalB value) {Opt = value;}
                public static implicit operator _InOptMut_Optional_MRStdOptionalB(Optional_MRStdOptionalB value) {return new(value);}
            }

            /// This is used for optional parameters of class `Optional_MRStdOptionalB` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Optional_MRStdOptionalB`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Optional_MRStdOptionalB`/`Const_Optional_MRStdOptionalB` to pass it to the function.
            public class _InOptConst_Optional_MRStdOptionalB
            {
                public Const_Optional_MRStdOptionalB? Opt;

                public _InOptConst_Optional_MRStdOptionalB() {}
                public _InOptConst_Optional_MRStdOptionalB(Const_Optional_MRStdOptionalB value) {Opt = value;}
                public static implicit operator _InOptConst_Optional_MRStdOptionalB(Const_Optional_MRStdOptionalB value) {return new(value);}

                /// Constructs a new instance.
                public static unsafe implicit operator _InOptConst_Optional_MRStdOptionalB(MR.CS.StdOptional._ByValue_B? other) {return new Const_Optional_MRStdOptionalB(other);}
            }
        }
    }
}
