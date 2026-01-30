public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// Stores either a single `MR::StdOptional::A` or nothing.
            /// This is the const half of the class.
            public class Const_Optional_MRStdOptionalA : MR.CS.Misc.Object<Const_Optional_MRStdOptionalA>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_StdOptional_A_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_optional_MR_StdOptional_A_Destroy(_Underlying *_this);
                    __MR_C_std_optional_MR_StdOptional_A_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Optional_MRStdOptionalA() {Dispose(false);}

                internal unsafe Const_Optional_MRStdOptionalA(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_Optional_MRStdOptionalA() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_StdOptional_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_MRStdOptionalA._Underlying *__MR_C_std_optional_MR_StdOptional_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_optional_MR_StdOptional_A_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Const_Optional_MRStdOptionalA(MR.CS.Std.Const_Optional_MRStdOptionalA other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_StdOptional_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_MRStdOptionalA._Underlying *__MR_C_std_optional_MR_StdOptional_A_ConstructFromAnother(MR.CS.Std.Optional_MRStdOptionalA._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_optional_MR_StdOptional_A_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// Constructs a copy of another instance. The source remains alive.
                public Const_Optional_MRStdOptionalA(Optional_MRStdOptionalA other) : this((Const_Optional_MRStdOptionalA)other) {}

                /// Constructs a new instance.
                public unsafe Const_Optional_MRStdOptionalA(MR.CS.StdOptional.Const_A? other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_StdOptional_A_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_MRStdOptionalA._Underlying *__MR_C_std_optional_MR_StdOptional_A_ConstructFrom(MR.CS.StdOptional.A._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_optional_MR_StdOptional_A_ConstructFrom(other is not null ? other._UnderlyingPtr : null);
                }

                /// Constructs a new instance.
                public static unsafe implicit operator Const_Optional_MRStdOptionalA(MR.CS.StdOptional.Const_A? other) {return new(other);}

                /// The stored element or null if none, read-only.
                public unsafe MR.CS.StdOptional.Const_A? Value()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_StdOptional_A_Value", ExactSpelling = true)]
                    extern static MR.CS.StdOptional.Const_A._Underlying *__MR_C_std_optional_MR_StdOptional_A_Value(_Underlying *_this);
                    var __c_ret = __MR_C_std_optional_MR_StdOptional_A_Value(_UnderlyingPtr);
                    MR.CS.StdOptional.Const_A? __ret;
                    __ret = __c_ret is not null ? new MR.CS.StdOptional.Const_A(__c_ret, is_owning: false) : null;
                    if (__ret is not null) __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }
            }

            /// Stores either a single `MR::StdOptional::A` or nothing.
            /// This is the non-const half of the class.
            public class Optional_MRStdOptionalA : Const_Optional_MRStdOptionalA
            {
                internal unsafe Optional_MRStdOptionalA(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Optional_MRStdOptionalA() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_StdOptional_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_MRStdOptionalA._Underlying *__MR_C_std_optional_MR_StdOptional_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_optional_MR_StdOptional_A_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Optional_MRStdOptionalA(MR.CS.Std.Const_Optional_MRStdOptionalA other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_StdOptional_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_MRStdOptionalA._Underlying *__MR_C_std_optional_MR_StdOptional_A_ConstructFromAnother(MR.CS.Std.Optional_MRStdOptionalA._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_optional_MR_StdOptional_A_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// Constructs a copy of another instance. The source remains alive.
                public Optional_MRStdOptionalA(Optional_MRStdOptionalA other) : this((Const_Optional_MRStdOptionalA)other) {}

                /// Constructs a new instance.
                public unsafe Optional_MRStdOptionalA(MR.CS.StdOptional.Const_A? other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_StdOptional_A_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_MRStdOptionalA._Underlying *__MR_C_std_optional_MR_StdOptional_A_ConstructFrom(MR.CS.StdOptional.A._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_optional_MR_StdOptional_A_ConstructFrom(other is not null ? other._UnderlyingPtr : null);
                }

                /// Constructs a new instance.
                public static unsafe implicit operator Optional_MRStdOptionalA(MR.CS.StdOptional.Const_A? other) {return new(other);}

                /// Assigns the contents from another instance. Both objects remain alive after the call.
                public unsafe void Assign(MR.CS.Std.Const_Optional_MRStdOptionalA other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_StdOptional_A_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_optional_MR_StdOptional_A_AssignFromAnother(_Underlying *_this, MR.CS.Std.Optional_MRStdOptionalA._Underlying *other);
                    _DiscardKeepAlive();
                    _KeepAlive(other);
                    __MR_C_std_optional_MR_StdOptional_A_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                }

                /// Assigns the contents.
                public unsafe void Assign(MR.CS.StdOptional.Const_A? other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_StdOptional_A_AssignFrom", ExactSpelling = true)]
                    extern static void __MR_C_std_optional_MR_StdOptional_A_AssignFrom(_Underlying *_this, MR.CS.StdOptional.A._Underlying *other);
                    __MR_C_std_optional_MR_StdOptional_A_AssignFrom(_UnderlyingPtr, other is not null ? other._UnderlyingPtr : null);
                }

                /// The stored element or null if none, mutable.
                public unsafe new MR.CS.StdOptional.A? Value()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_StdOptional_A_MutableValue", ExactSpelling = true)]
                    extern static MR.CS.StdOptional.A._Underlying *__MR_C_std_optional_MR_StdOptional_A_MutableValue(_Underlying *_this);
                    var __c_ret = __MR_C_std_optional_MR_StdOptional_A_MutableValue(_UnderlyingPtr);
                    MR.CS.StdOptional.A? __ret;
                    __ret = __c_ret is not null ? new MR.CS.StdOptional.A(__c_ret, is_owning: false) : null;
                    if (__ret is not null) __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }
            }

            /// This is used for optional parameters of class `Optional_MRStdOptionalA` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Optional_MRStdOptionalA`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Optional_MRStdOptionalA`/`Const_Optional_MRStdOptionalA` directly.
            public class _InOptMut_Optional_MRStdOptionalA
            {
                public Optional_MRStdOptionalA? Opt;

                public _InOptMut_Optional_MRStdOptionalA() {}
                public _InOptMut_Optional_MRStdOptionalA(Optional_MRStdOptionalA value) {Opt = value;}
                public static implicit operator _InOptMut_Optional_MRStdOptionalA(Optional_MRStdOptionalA value) {return new(value);}
            }

            /// This is used for optional parameters of class `Optional_MRStdOptionalA` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Optional_MRStdOptionalA`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Optional_MRStdOptionalA`/`Const_Optional_MRStdOptionalA` to pass it to the function.
            public class _InOptConst_Optional_MRStdOptionalA
            {
                public Const_Optional_MRStdOptionalA? Opt;

                public _InOptConst_Optional_MRStdOptionalA() {}
                public _InOptConst_Optional_MRStdOptionalA(Const_Optional_MRStdOptionalA value) {Opt = value;}
                public static implicit operator _InOptConst_Optional_MRStdOptionalA(Const_Optional_MRStdOptionalA value) {return new(value);}

                /// Constructs a new instance.
                public static unsafe implicit operator _InOptConst_Optional_MRStdOptionalA(MR.CS.StdOptional.Const_A? other) {return new Const_Optional_MRStdOptionalA(other);}
            }
        }
    }
}
