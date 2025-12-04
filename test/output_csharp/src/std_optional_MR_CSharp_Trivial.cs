public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// Stores either a single `MR::CSharp::Trivial` or nothing.
            /// This is the const half of the class.
            public class ConstOptional_MRCSharpTrivial : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstOptional_MRCSharpTrivial(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_CSharp_Trivial_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_optional_MR_CSharp_Trivial_Destroy(_Underlying *_this);
                    __MR_C_std_optional_MR_CSharp_Trivial_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstOptional_MRCSharpTrivial() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstOptional_MRCSharpTrivial() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_CSharp_Trivial_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_MRCSharpTrivial._Underlying *__MR_C_std_optional_MR_CSharp_Trivial_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_optional_MR_CSharp_Trivial_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe ConstOptional_MRCSharpTrivial(MR.CS.Std.ConstOptional_MRCSharpTrivial other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_CSharp_Trivial_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_MRCSharpTrivial._Underlying *__MR_C_std_optional_MR_CSharp_Trivial_ConstructFromAnother(MR.CS.Std.Optional_MRCSharpTrivial._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_optional_MR_CSharp_Trivial_ConstructFromAnother(other._UnderlyingPtr);
                }

                /// Constructs a new instance.
                public unsafe ConstOptional_MRCSharpTrivial(MR.CS.CSharp.ConstTrivial? other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_CSharp_Trivial_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_MRCSharpTrivial._Underlying *__MR_C_std_optional_MR_CSharp_Trivial_ConstructFrom(MR.CS.CSharp.Trivial._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_optional_MR_CSharp_Trivial_ConstructFrom(other is not null ? other._UnderlyingPtr : null);
                }

                /// Constructs a new instance.
                public static unsafe implicit operator ConstOptional_MRCSharpTrivial(MR.CS.CSharp.ConstTrivial? other) {return new(other);}

                /// The stored element or null if none, read-only.
                public unsafe MR.CS.CSharp.ConstTrivial? Value()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_CSharp_Trivial_Value", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstTrivial._Underlying *__MR_C_std_optional_MR_CSharp_Trivial_Value(_Underlying *_this);
                    var __ret = __MR_C_std_optional_MR_CSharp_Trivial_Value(_UnderlyingPtr);
                    return __ret is not null ? new MR.CS.CSharp.ConstTrivial(__ret, is_owning: false) : null;
                }
            }

            /// Stores either a single `MR::CSharp::Trivial` or nothing.
            /// This is the non-const half of the class.
            public class Optional_MRCSharpTrivial : ConstOptional_MRCSharpTrivial
            {
                internal unsafe Optional_MRCSharpTrivial(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Optional_MRCSharpTrivial() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_CSharp_Trivial_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_MRCSharpTrivial._Underlying *__MR_C_std_optional_MR_CSharp_Trivial_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_optional_MR_CSharp_Trivial_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Optional_MRCSharpTrivial(MR.CS.Std.ConstOptional_MRCSharpTrivial other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_CSharp_Trivial_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_MRCSharpTrivial._Underlying *__MR_C_std_optional_MR_CSharp_Trivial_ConstructFromAnother(MR.CS.Std.Optional_MRCSharpTrivial._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_optional_MR_CSharp_Trivial_ConstructFromAnother(other._UnderlyingPtr);
                }

                /// Constructs a new instance.
                public unsafe Optional_MRCSharpTrivial(MR.CS.CSharp.ConstTrivial? other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_CSharp_Trivial_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_MRCSharpTrivial._Underlying *__MR_C_std_optional_MR_CSharp_Trivial_ConstructFrom(MR.CS.CSharp.Trivial._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_optional_MR_CSharp_Trivial_ConstructFrom(other is not null ? other._UnderlyingPtr : null);
                }

                /// Constructs a new instance.
                public static unsafe implicit operator Optional_MRCSharpTrivial(MR.CS.CSharp.ConstTrivial? other) {return new(other);}

                /// Assigns the contents from another instance. Both objects remain alive after the call.
                public unsafe void Assign(MR.CS.Std.ConstOptional_MRCSharpTrivial other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_CSharp_Trivial_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_optional_MR_CSharp_Trivial_AssignFromAnother(_Underlying *_this, MR.CS.Std.Optional_MRCSharpTrivial._Underlying *other);
                    __MR_C_std_optional_MR_CSharp_Trivial_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                }

                /// Assigns the contents.
                public unsafe void Assign(MR.CS.CSharp.ConstTrivial? other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_CSharp_Trivial_AssignFrom", ExactSpelling = true)]
                    extern static void __MR_C_std_optional_MR_CSharp_Trivial_AssignFrom(_Underlying *_this, MR.CS.CSharp.Trivial._Underlying *other);
                    __MR_C_std_optional_MR_CSharp_Trivial_AssignFrom(_UnderlyingPtr, other is not null ? other._UnderlyingPtr : null);
                }

                /// The stored element or null if none, mutable.
                public unsafe MR.CS.CSharp.Trivial? MutableValue()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_MR_CSharp_Trivial_MutableValue", ExactSpelling = true)]
                    extern static MR.CS.CSharp.Trivial._Underlying *__MR_C_std_optional_MR_CSharp_Trivial_MutableValue(_Underlying *_this);
                    var __ret = __MR_C_std_optional_MR_CSharp_Trivial_MutableValue(_UnderlyingPtr);
                    return __ret is not null ? new MR.CS.CSharp.Trivial(__ret, is_owning: false) : null;
                }
            }

            /// This is used for optional parameters of class `Optional_MRCSharpTrivial` with default arguments.
            /// This is only used mutable parameters. For const ones we have `InOptConst_Optional_MRCSharpTrivial`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Optional_MRCSharpTrivial`/`ConstOptional_MRCSharpTrivial` directly.
            public class InOptMut_Optional_MRCSharpTrivial
            {
                public Optional_MRCSharpTrivial? Opt;

                public InOptMut_Optional_MRCSharpTrivial() {}
                public InOptMut_Optional_MRCSharpTrivial(Optional_MRCSharpTrivial value) {Opt = value;}
                public static implicit operator InOptMut_Optional_MRCSharpTrivial(Optional_MRCSharpTrivial value) {return new(value);}
            }

            /// This is used for optional parameters of class `Optional_MRCSharpTrivial` with default arguments.
            /// This is only used const parameters. For non-const ones we have `InOptMut_Optional_MRCSharpTrivial`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Optional_MRCSharpTrivial`/`ConstOptional_MRCSharpTrivial` to pass it to the function.
            public class InOptConst_Optional_MRCSharpTrivial
            {
                public ConstOptional_MRCSharpTrivial? Opt;

                public InOptConst_Optional_MRCSharpTrivial() {}
                public InOptConst_Optional_MRCSharpTrivial(ConstOptional_MRCSharpTrivial value) {Opt = value;}
                public static implicit operator InOptConst_Optional_MRCSharpTrivial(ConstOptional_MRCSharpTrivial value) {return new(value);}

                /// Constructs a new instance.
                public static unsafe implicit operator InOptConst_Optional_MRCSharpTrivial(MR.CS.CSharp.ConstTrivial? other) {return new MR.CS.Std.Optional_MRCSharpTrivial(other);}
            }
        }
    }
}
