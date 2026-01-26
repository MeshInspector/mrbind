public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// Stores either a single `MR::CSharp::SA` or nothing.
            /// This is the const half of the class.
            public class Const_Optional_MRCSharpSA : MR.CS.Misc.Object<Const_Optional_MRCSharpSA>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_Optional_MRCSharpSA(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_CSharp_SA_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_optional_MR_CSharp_SA_Destroy(_Underlying *_this);
                    __MR_C_std_optional_MR_CSharp_SA_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Optional_MRCSharpSA() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_Optional_MRCSharpSA() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_CSharp_SA_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_MRCSharpSA._Underlying *__MR_C_std_optional_MR_CSharp_SA_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_optional_MR_CSharp_SA_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Const_Optional_MRCSharpSA(MR.CS.Std.Const_Optional_MRCSharpSA other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_CSharp_SA_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_MRCSharpSA._Underlying *__MR_C_std_optional_MR_CSharp_SA_ConstructFromAnother(MR.CS.Std.Optional_MRCSharpSA._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_optional_MR_CSharp_SA_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// Constructs a new instance.
                public unsafe Const_Optional_MRCSharpSA(MR.CS.CSharp.Const_SA? other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_CSharp_SA_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_MRCSharpSA._Underlying *__MR_C_std_optional_MR_CSharp_SA_ConstructFrom(MR.CS.CSharp.SA._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_optional_MR_CSharp_SA_ConstructFrom(other is not null ? other._UnderlyingPtr : null);
                }

                /// Constructs a new instance.
                public static unsafe implicit operator Const_Optional_MRCSharpSA(MR.CS.CSharp.Const_SA? other) {return new(other);}

                /// The stored element or null if none, read-only.
                public unsafe MR.CS.CSharp.Const_SA? Value()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_CSharp_SA_Value", ExactSpelling = true)]
                    extern static MR.CS.CSharp.Const_SA._Underlying *__MR_C_std_optional_MR_CSharp_SA_Value(_Underlying *_this);
                    var __c_ret = __MR_C_std_optional_MR_CSharp_SA_Value(_UnderlyingPtr);
                    MR.CS.CSharp.Const_SA? __ret;
                    __ret = __c_ret is not null ? new MR.CS.CSharp.Const_SA(__c_ret, is_owning: false) : null;
                    if (__ret is not null) __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }
            }

            /// Stores either a single `MR::CSharp::SA` or nothing.
            /// This is the non-const half of the class.
            public class Optional_MRCSharpSA : Const_Optional_MRCSharpSA
            {
                internal unsafe Optional_MRCSharpSA(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Optional_MRCSharpSA() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_CSharp_SA_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_MRCSharpSA._Underlying *__MR_C_std_optional_MR_CSharp_SA_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_optional_MR_CSharp_SA_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Optional_MRCSharpSA(MR.CS.Std.Const_Optional_MRCSharpSA other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_CSharp_SA_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_MRCSharpSA._Underlying *__MR_C_std_optional_MR_CSharp_SA_ConstructFromAnother(MR.CS.Std.Optional_MRCSharpSA._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_optional_MR_CSharp_SA_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// Constructs a new instance.
                public unsafe Optional_MRCSharpSA(MR.CS.CSharp.Const_SA? other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_CSharp_SA_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_MRCSharpSA._Underlying *__MR_C_std_optional_MR_CSharp_SA_ConstructFrom(MR.CS.CSharp.SA._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_optional_MR_CSharp_SA_ConstructFrom(other is not null ? other._UnderlyingPtr : null);
                }

                /// Constructs a new instance.
                public static unsafe implicit operator Optional_MRCSharpSA(MR.CS.CSharp.Const_SA? other) {return new(other);}

                /// Assigns the contents from another instance. Both objects remain alive after the call.
                public unsafe void Assign(MR.CS.Std.Const_Optional_MRCSharpSA other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_CSharp_SA_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_optional_MR_CSharp_SA_AssignFromAnother(_Underlying *_this, MR.CS.Std.Optional_MRCSharpSA._Underlying *other);
                    _DiscardKeepAlive();
                    _KeepAlive(other);
                    __MR_C_std_optional_MR_CSharp_SA_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                }

                /// Assigns the contents.
                public unsafe void Assign(MR.CS.CSharp.Const_SA? other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_CSharp_SA_AssignFrom", ExactSpelling = true)]
                    extern static void __MR_C_std_optional_MR_CSharp_SA_AssignFrom(_Underlying *_this, MR.CS.CSharp.SA._Underlying *other);
                    __MR_C_std_optional_MR_CSharp_SA_AssignFrom(_UnderlyingPtr, other is not null ? other._UnderlyingPtr : null);
                }

                /// The stored element or null if none, mutable.
                public unsafe new MR.CS.CSharp.SA? Value()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_CSharp_SA_MutableValue", ExactSpelling = true)]
                    extern static MR.CS.CSharp.SA._Underlying *__MR_C_std_optional_MR_CSharp_SA_MutableValue(_Underlying *_this);
                    var __c_ret = __MR_C_std_optional_MR_CSharp_SA_MutableValue(_UnderlyingPtr);
                    MR.CS.CSharp.SA? __ret;
                    __ret = __c_ret is not null ? new MR.CS.CSharp.SA(__c_ret, is_owning: false) : null;
                    if (__ret is not null) __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }
            }

            /// This is used for optional parameters of class `Optional_MRCSharpSA` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Optional_MRCSharpSA`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Optional_MRCSharpSA`/`Const_Optional_MRCSharpSA` directly.
            public class _InOptMut_Optional_MRCSharpSA
            {
                public Optional_MRCSharpSA? Opt;

                public _InOptMut_Optional_MRCSharpSA() {}
                public _InOptMut_Optional_MRCSharpSA(Optional_MRCSharpSA value) {Opt = value;}
                public static implicit operator _InOptMut_Optional_MRCSharpSA(Optional_MRCSharpSA value) {return new(value);}
            }

            /// This is used for optional parameters of class `Optional_MRCSharpSA` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Optional_MRCSharpSA`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Optional_MRCSharpSA`/`Const_Optional_MRCSharpSA` to pass it to the function.
            public class _InOptConst_Optional_MRCSharpSA
            {
                public Const_Optional_MRCSharpSA? Opt;

                public _InOptConst_Optional_MRCSharpSA() {}
                public _InOptConst_Optional_MRCSharpSA(Const_Optional_MRCSharpSA value) {Opt = value;}
                public static implicit operator _InOptConst_Optional_MRCSharpSA(Const_Optional_MRCSharpSA value) {return new(value);}

                /// Constructs a new instance.
                public static unsafe implicit operator _InOptConst_Optional_MRCSharpSA(MR.CS.CSharp.Const_SA? other) {return new Const_Optional_MRCSharpSA(other);}
            }
        }
    }
}
