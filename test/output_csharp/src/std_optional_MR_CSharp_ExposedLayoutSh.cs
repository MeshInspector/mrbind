public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// Stores either a single `MR::CSharp::ExposedLayoutSh` or nothing.
            /// This is the const half of the class.
            public class Const_Optional_MRCSharpExposedLayoutSh : MR.CS.Misc.Object<Const_Optional_MRCSharpExposedLayoutSh>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_CSharp_ExposedLayoutSh_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_optional_MR_CSharp_ExposedLayoutSh_Destroy(_Underlying *_this);
                    __MR_C_std_optional_MR_CSharp_ExposedLayoutSh_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Optional_MRCSharpExposedLayoutSh() {Dispose(false);}

                internal unsafe Const_Optional_MRCSharpExposedLayoutSh(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_Optional_MRCSharpExposedLayoutSh() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_CSharp_ExposedLayoutSh_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_MRCSharpExposedLayoutSh._Underlying *__MR_C_std_optional_MR_CSharp_ExposedLayoutSh_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_optional_MR_CSharp_ExposedLayoutSh_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Const_Optional_MRCSharpExposedLayoutSh(MR.CS.Std.Const_Optional_MRCSharpExposedLayoutSh other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_CSharp_ExposedLayoutSh_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_MRCSharpExposedLayoutSh._Underlying *__MR_C_std_optional_MR_CSharp_ExposedLayoutSh_ConstructFromAnother(MR.CS.Std.Optional_MRCSharpExposedLayoutSh._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_optional_MR_CSharp_ExposedLayoutSh_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// Constructs a new instance.
                public unsafe Const_Optional_MRCSharpExposedLayoutSh(MR.CS.CSharp._InOpt_ExposedLayoutSh other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_CSharp_ExposedLayoutSh_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_MRCSharpExposedLayoutSh._Underlying *__MR_C_std_optional_MR_CSharp_ExposedLayoutSh_ConstructFrom(MR.CS.CSharp.ExposedLayoutSh *other);
                    _UnderlyingPtr = __MR_C_std_optional_MR_CSharp_ExposedLayoutSh_ConstructFrom(other.HasValue ? &other.Object : null);
                }

                /// Constructs a new instance.
                public static unsafe implicit operator Const_Optional_MRCSharpExposedLayoutSh(MR.CS.CSharp._InOpt_ExposedLayoutSh other) {return new(other);}

                /// The stored element or null if none, read-only.
                public unsafe MR.CS.CSharp.ExposedLayoutSh? Value()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_CSharp_ExposedLayoutSh_Value", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ExposedLayoutSh *__MR_C_std_optional_MR_CSharp_ExposedLayoutSh_Value(_Underlying *_this);
                    var __c_ret = __MR_C_std_optional_MR_CSharp_ExposedLayoutSh_Value(_UnderlyingPtr);
                    if (__c_ret is not null) return *__c_ret; else return null;
                }
            }

            /// Stores either a single `MR::CSharp::ExposedLayoutSh` or nothing.
            /// This is the non-const half of the class.
            public class Optional_MRCSharpExposedLayoutSh : Const_Optional_MRCSharpExposedLayoutSh
            {
                internal unsafe Optional_MRCSharpExposedLayoutSh(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Optional_MRCSharpExposedLayoutSh() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_CSharp_ExposedLayoutSh_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_MRCSharpExposedLayoutSh._Underlying *__MR_C_std_optional_MR_CSharp_ExposedLayoutSh_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_optional_MR_CSharp_ExposedLayoutSh_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Optional_MRCSharpExposedLayoutSh(MR.CS.Std.Const_Optional_MRCSharpExposedLayoutSh other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_CSharp_ExposedLayoutSh_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_MRCSharpExposedLayoutSh._Underlying *__MR_C_std_optional_MR_CSharp_ExposedLayoutSh_ConstructFromAnother(MR.CS.Std.Optional_MRCSharpExposedLayoutSh._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_optional_MR_CSharp_ExposedLayoutSh_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// Constructs a new instance.
                public unsafe Optional_MRCSharpExposedLayoutSh(MR.CS.CSharp._InOpt_ExposedLayoutSh other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_CSharp_ExposedLayoutSh_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_MRCSharpExposedLayoutSh._Underlying *__MR_C_std_optional_MR_CSharp_ExposedLayoutSh_ConstructFrom(MR.CS.CSharp.ExposedLayoutSh *other);
                    _UnderlyingPtr = __MR_C_std_optional_MR_CSharp_ExposedLayoutSh_ConstructFrom(other.HasValue ? &other.Object : null);
                }

                /// Constructs a new instance.
                public static unsafe implicit operator Optional_MRCSharpExposedLayoutSh(MR.CS.CSharp._InOpt_ExposedLayoutSh other) {return new(other);}

                /// Assigns the contents from another instance. Both objects remain alive after the call.
                public unsafe void Assign(MR.CS.Std.Const_Optional_MRCSharpExposedLayoutSh other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_CSharp_ExposedLayoutSh_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_optional_MR_CSharp_ExposedLayoutSh_AssignFromAnother(_Underlying *_this, MR.CS.Std.Optional_MRCSharpExposedLayoutSh._Underlying *other);
                    _DiscardKeepAlive();
                    _KeepAlive(other);
                    __MR_C_std_optional_MR_CSharp_ExposedLayoutSh_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                }

                /// Assigns the contents.
                public unsafe void Assign(MR.CS.CSharp._InOpt_ExposedLayoutSh other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_CSharp_ExposedLayoutSh_AssignFrom", ExactSpelling = true)]
                    extern static void __MR_C_std_optional_MR_CSharp_ExposedLayoutSh_AssignFrom(_Underlying *_this, MR.CS.CSharp.ExposedLayoutSh *other);
                    __MR_C_std_optional_MR_CSharp_ExposedLayoutSh_AssignFrom(_UnderlyingPtr, other.HasValue ? &other.Object : null);
                }

                /// The stored element or null if none, mutable.
                public unsafe new MR.CS.Misc.Ref<MR.CS.CSharp.ExposedLayoutSh>? Value()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_CSharp_ExposedLayoutSh_MutableValue", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ExposedLayoutSh *__MR_C_std_optional_MR_CSharp_ExposedLayoutSh_MutableValue(_Underlying *_this);
                    var __c_ret = __MR_C_std_optional_MR_CSharp_ExposedLayoutSh_MutableValue(_UnderlyingPtr);
                    return __c_ret is not null ? new MR.CS.Misc.Ref<MR.CS.CSharp.ExposedLayoutSh>(__c_ret) : null;
                }
            }

            /// This is used for optional parameters of class `Optional_MRCSharpExposedLayoutSh` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Optional_MRCSharpExposedLayoutSh`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Optional_MRCSharpExposedLayoutSh`/`Const_Optional_MRCSharpExposedLayoutSh` directly.
            public class _InOptMut_Optional_MRCSharpExposedLayoutSh
            {
                public Optional_MRCSharpExposedLayoutSh? Opt;

                public _InOptMut_Optional_MRCSharpExposedLayoutSh() {}
                public _InOptMut_Optional_MRCSharpExposedLayoutSh(Optional_MRCSharpExposedLayoutSh value) {Opt = value;}
                public static implicit operator _InOptMut_Optional_MRCSharpExposedLayoutSh(Optional_MRCSharpExposedLayoutSh value) {return new(value);}
            }

            /// This is used for optional parameters of class `Optional_MRCSharpExposedLayoutSh` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Optional_MRCSharpExposedLayoutSh`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Optional_MRCSharpExposedLayoutSh`/`Const_Optional_MRCSharpExposedLayoutSh` to pass it to the function.
            public class _InOptConst_Optional_MRCSharpExposedLayoutSh
            {
                public Const_Optional_MRCSharpExposedLayoutSh? Opt;

                public _InOptConst_Optional_MRCSharpExposedLayoutSh() {}
                public _InOptConst_Optional_MRCSharpExposedLayoutSh(Const_Optional_MRCSharpExposedLayoutSh value) {Opt = value;}
                public static implicit operator _InOptConst_Optional_MRCSharpExposedLayoutSh(Const_Optional_MRCSharpExposedLayoutSh value) {return new(value);}

                /// Constructs a new instance.
                public static unsafe implicit operator _InOptConst_Optional_MRCSharpExposedLayoutSh(MR.CS.CSharp._InOpt_ExposedLayoutSh other) {return new Const_Optional_MRCSharpExposedLayoutSh(other);}
            }
        }
    }
}
