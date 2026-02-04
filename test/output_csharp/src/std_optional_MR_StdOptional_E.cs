public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// Stores either a single `MR::StdOptional::E` or nothing.
            /// This is the const half of the class.
            public class Const_Optional_MRStdOptionalE : MR.CS.Misc.Object<Const_Optional_MRStdOptionalE>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_StdOptional_E_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_optional_MR_StdOptional_E_Destroy(_Underlying *_this);
                    __MR_C_std_optional_MR_StdOptional_E_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Optional_MRStdOptionalE() {Dispose(false);}

                internal unsafe Const_Optional_MRStdOptionalE(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_Optional_MRStdOptionalE() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_StdOptional_E_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_MRStdOptionalE._Underlying *__MR_C_std_optional_MR_StdOptional_E_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_optional_MR_StdOptional_E_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Const_Optional_MRStdOptionalE(MR.CS.Std.Const_Optional_MRStdOptionalE other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_StdOptional_E_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_MRStdOptionalE._Underlying *__MR_C_std_optional_MR_StdOptional_E_ConstructFromAnother(MR.CS.Std.Optional_MRStdOptionalE._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_optional_MR_StdOptional_E_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// Constructs a copy of another instance. The source remains alive.
                public Const_Optional_MRStdOptionalE(Optional_MRStdOptionalE other) : this((Const_Optional_MRStdOptionalE)other) {}

                /// Constructs a new instance.
                public unsafe Const_Optional_MRStdOptionalE(MR.CS.StdOptional.E? other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_StdOptional_E_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_MRStdOptionalE._Underlying *__MR_C_std_optional_MR_StdOptional_E_ConstructFrom(MR.CS.StdOptional.E *other);
                    MR.CS.StdOptional.E __deref_other = other.GetValueOrDefault();
                    _UnderlyingPtr = __MR_C_std_optional_MR_StdOptional_E_ConstructFrom(other.HasValue ? &__deref_other : null);
                }

                /// Constructs a new instance.
                public static unsafe implicit operator Const_Optional_MRStdOptionalE(MR.CS.StdOptional.E? other) {return new(other);}

                /// The stored element or null if none, read-only.
                public unsafe MR.CS.StdOptional.E? Value()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_StdOptional_E_value", ExactSpelling = true)]
                    extern static MR.CS.StdOptional.E *__MR_C_std_optional_MR_StdOptional_E_value(_Underlying *_this);
                    var __c_ret = __MR_C_std_optional_MR_StdOptional_E_value(_UnderlyingPtr);
                    return __c_ret is not null ? *__c_ret : null;
                }
            }

            /// Stores either a single `MR::StdOptional::E` or nothing.
            /// This is the non-const half of the class.
            public class Optional_MRStdOptionalE : Const_Optional_MRStdOptionalE
            {
                internal unsafe Optional_MRStdOptionalE(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Optional_MRStdOptionalE() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_StdOptional_E_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_MRStdOptionalE._Underlying *__MR_C_std_optional_MR_StdOptional_E_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_optional_MR_StdOptional_E_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Optional_MRStdOptionalE(MR.CS.Std.Const_Optional_MRStdOptionalE other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_StdOptional_E_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_MRStdOptionalE._Underlying *__MR_C_std_optional_MR_StdOptional_E_ConstructFromAnother(MR.CS.Std.Optional_MRStdOptionalE._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_optional_MR_StdOptional_E_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// Constructs a copy of another instance. The source remains alive.
                public Optional_MRStdOptionalE(Optional_MRStdOptionalE other) : this((Const_Optional_MRStdOptionalE)other) {}

                /// Constructs a new instance.
                public unsafe Optional_MRStdOptionalE(MR.CS.StdOptional.E? other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_StdOptional_E_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_MRStdOptionalE._Underlying *__MR_C_std_optional_MR_StdOptional_E_ConstructFrom(MR.CS.StdOptional.E *other);
                    MR.CS.StdOptional.E __deref_other = other.GetValueOrDefault();
                    _UnderlyingPtr = __MR_C_std_optional_MR_StdOptional_E_ConstructFrom(other.HasValue ? &__deref_other : null);
                }

                /// Constructs a new instance.
                public static unsafe implicit operator Optional_MRStdOptionalE(MR.CS.StdOptional.E? other) {return new(other);}

                /// Assigns the contents from another instance. Both objects remain alive after the call.
                public unsafe void Assign(MR.CS.Std.Const_Optional_MRStdOptionalE other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_StdOptional_E_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_optional_MR_StdOptional_E_AssignFromAnother(_Underlying *_this, MR.CS.Std.Optional_MRStdOptionalE._Underlying *other);
                    _DiscardKeepAlive();
                    _KeepAlive(other);
                    __MR_C_std_optional_MR_StdOptional_E_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                }

                /// Assigns the contents.
                public unsafe void Assign(MR.CS.StdOptional.E? other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_StdOptional_E_AssignFrom", ExactSpelling = true)]
                    extern static void __MR_C_std_optional_MR_StdOptional_E_AssignFrom(_Underlying *_this, MR.CS.StdOptional.E *other);
                    MR.CS.StdOptional.E __deref_other = other.GetValueOrDefault();
                    __MR_C_std_optional_MR_StdOptional_E_AssignFrom(_UnderlyingPtr, other.HasValue ? &__deref_other : null);
                }

                /// The stored element or null if none, mutable.
                public unsafe new MR.CS.Misc.Ref<MR.CS.StdOptional.E>? Value()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_StdOptional_E_value_mut", ExactSpelling = true)]
                    extern static MR.CS.StdOptional.E *__MR_C_std_optional_MR_StdOptional_E_value_mut(_Underlying *_this);
                    var __c_ret = __MR_C_std_optional_MR_StdOptional_E_value_mut(_UnderlyingPtr);
                    return __c_ret is not null ? new MR.CS.Misc.Ref<MR.CS.StdOptional.E>(__c_ret) : null;
                }
            }

            /// This is used for optional parameters of class `Optional_MRStdOptionalE` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Optional_MRStdOptionalE`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Optional_MRStdOptionalE`/`Const_Optional_MRStdOptionalE` directly.
            public class _InOptMut_Optional_MRStdOptionalE
            {
                public Optional_MRStdOptionalE? Opt;

                public _InOptMut_Optional_MRStdOptionalE() {}
                public _InOptMut_Optional_MRStdOptionalE(Optional_MRStdOptionalE value) {Opt = value;}
                public static implicit operator _InOptMut_Optional_MRStdOptionalE(Optional_MRStdOptionalE value) {return new(value);}
            }

            /// This is used for optional parameters of class `Optional_MRStdOptionalE` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Optional_MRStdOptionalE`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Optional_MRStdOptionalE`/`Const_Optional_MRStdOptionalE` to pass it to the function.
            public class _InOptConst_Optional_MRStdOptionalE
            {
                public Const_Optional_MRStdOptionalE? Opt;

                public _InOptConst_Optional_MRStdOptionalE() {}
                public _InOptConst_Optional_MRStdOptionalE(Const_Optional_MRStdOptionalE value) {Opt = value;}
                public static implicit operator _InOptConst_Optional_MRStdOptionalE(Const_Optional_MRStdOptionalE value) {return new(value);}

                /// Constructs a new instance.
                public static unsafe implicit operator _InOptConst_Optional_MRStdOptionalE(MR.CS.StdOptional.E? other) {return new Const_Optional_MRStdOptionalE(other);}
            }
        }
    }
}
