public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// Stores either a single `int` or nothing.
            /// This is the const half of the class.
            public class Const_Optional_Int : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_Optional_Int(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_int_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_optional_int_Destroy(_Underlying *_this);
                    __MR_C_std_optional_int_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Optional_Int() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_Optional_Int() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_int_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_Int._Underlying *__MR_C_std_optional_int_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_optional_int_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Const_Optional_Int(MR.CS.Std.Const_Optional_Int other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_int_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_Int._Underlying *__MR_C_std_optional_int_ConstructFromAnother(MR.CS.Std.Optional_Int._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_optional_int_ConstructFromAnother(other._UnderlyingPtr);
                }

                /// Constructs a new instance.
                public unsafe Const_Optional_Int(int? other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_int_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_Int._Underlying *__MR_C_std_optional_int_ConstructFrom(int *other);
                    int __deref_other = other.GetValueOrDefault();
                    _UnderlyingPtr = __MR_C_std_optional_int_ConstructFrom(other.HasValue ? &__deref_other : null);
                }

                /// Constructs a new instance.
                public static unsafe implicit operator Const_Optional_Int(int? other) {return new(other);}

                /// The stored element or null if none, read-only.
                public unsafe int? Value()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_int_Value", ExactSpelling = true)]
                    extern static int *__MR_C_std_optional_int_Value(_Underlying *_this);
                    var __ret = __MR_C_std_optional_int_Value(_UnderlyingPtr);
                    return __ret is not null ? *__ret : null;
                }
            }

            /// Stores either a single `int` or nothing.
            /// This is the non-const half of the class.
            public class Optional_Int : Const_Optional_Int
            {
                internal unsafe Optional_Int(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Optional_Int() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_int_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_Int._Underlying *__MR_C_std_optional_int_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_optional_int_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Optional_Int(MR.CS.Std.Const_Optional_Int other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_int_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_Int._Underlying *__MR_C_std_optional_int_ConstructFromAnother(MR.CS.Std.Optional_Int._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_optional_int_ConstructFromAnother(other._UnderlyingPtr);
                }

                /// Constructs a new instance.
                public unsafe Optional_Int(int? other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_int_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_Int._Underlying *__MR_C_std_optional_int_ConstructFrom(int *other);
                    int __deref_other = other.GetValueOrDefault();
                    _UnderlyingPtr = __MR_C_std_optional_int_ConstructFrom(other.HasValue ? &__deref_other : null);
                }

                /// Constructs a new instance.
                public static unsafe implicit operator Optional_Int(int? other) {return new(other);}

                /// Assigns the contents from another instance. Both objects remain alive after the call.
                public unsafe void Assign(MR.CS.Std.Const_Optional_Int other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_int_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_optional_int_AssignFromAnother(_Underlying *_this, MR.CS.Std.Optional_Int._Underlying *other);
                    __MR_C_std_optional_int_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                }

                /// Assigns the contents.
                public unsafe void Assign(int? other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_int_AssignFrom", ExactSpelling = true)]
                    extern static void __MR_C_std_optional_int_AssignFrom(_Underlying *_this, int *other);
                    int __deref_other = other.GetValueOrDefault();
                    __MR_C_std_optional_int_AssignFrom(_UnderlyingPtr, other.HasValue ? &__deref_other : null);
                }

                /// The stored element or null if none, mutable.
                public unsafe MR.CS.Misc.Ref<int>? MutableValue()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_int_MutableValue", ExactSpelling = true)]
                    extern static int *__MR_C_std_optional_int_MutableValue(_Underlying *_this);
                    var __ret = __MR_C_std_optional_int_MutableValue(_UnderlyingPtr);
                    return __ret is not null ? new MR.CS.Misc.Ref<int>(__ret) : null;
                }
            }

            /// This is used for optional parameters of class `Optional_Int` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Optional_Int`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Optional_Int`/`Const_Optional_Int` directly.
            public class _InOptMut_Optional_Int
            {
                public Optional_Int? Opt;

                public _InOptMut_Optional_Int() {}
                public _InOptMut_Optional_Int(Optional_Int value) {Opt = value;}
                public static implicit operator _InOptMut_Optional_Int(Optional_Int value) {return new(value);}
            }

            /// This is used for optional parameters of class `Optional_Int` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Optional_Int`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Optional_Int`/`Const_Optional_Int` to pass it to the function.
            public class _InOptConst_Optional_Int
            {
                public Const_Optional_Int? Opt;

                public _InOptConst_Optional_Int() {}
                public _InOptConst_Optional_Int(Const_Optional_Int value) {Opt = value;}
                public static implicit operator _InOptConst_Optional_Int(Const_Optional_Int value) {return new(value);}

                /// Constructs a new instance.
                public static unsafe implicit operator _InOptConst_Optional_Int(int? other) {return new MR.CS.Std.Optional_Int(other);}
            }
        }
    }
}
