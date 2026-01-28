public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// Stores either a single `int` or nothing.
            /// This is the const half of the class.
            /// </summary>
            public class Const_Optional_Int : MR.CS.Misc.Object<Const_Optional_Int>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

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

                internal unsafe Const_Optional_Int(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_Optional_Int() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_int_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_Int._Underlying *__MR_C_std_optional_int_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_optional_int_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Const_Optional_Int(MR.CS.Std.Const_Optional_Int other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_int_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_Int._Underlying *__MR_C_std_optional_int_ConstructFromAnother(MR.CS.Std.Optional_Int._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_optional_int_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// <summary>
                /// Constructs a new instance.
                /// </summary>
                public unsafe Const_Optional_Int(int? other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_int_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_Int._Underlying *__MR_C_std_optional_int_ConstructFrom(int *other);
                    int __deref_other = other.GetValueOrDefault();
                    _UnderlyingPtr = __MR_C_std_optional_int_ConstructFrom(other.HasValue ? &__deref_other : null);
                }

                /// <summary>
                /// Constructs a new instance.
                /// </summary>
                public static unsafe implicit operator Const_Optional_Int(int? other) {return new(other);}

                /// <summary>
                /// The stored element or null if none, read-only.
                /// </summary>
                public unsafe int? value()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_int_Value", ExactSpelling = true)]
                    extern static int *__MR_C_std_optional_int_Value(_Underlying *_this);
                    var __c_ret = __MR_C_std_optional_int_Value(_UnderlyingPtr);
                    return __c_ret is not null ? *__c_ret : null;
                }
            }

            /// <summary>
            /// Stores either a single `int` or nothing.
            /// This is the non-const half of the class.
            /// </summary>
            public class Optional_Int : Const_Optional_Int
            {
                internal unsafe Optional_Int(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Optional_Int() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_int_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_Int._Underlying *__MR_C_std_optional_int_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_optional_int_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Optional_Int(MR.CS.Std.Const_Optional_Int other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_int_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_Int._Underlying *__MR_C_std_optional_int_ConstructFromAnother(MR.CS.Std.Optional_Int._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_optional_int_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// <summary>
                /// Constructs a new instance.
                /// </summary>
                public unsafe Optional_Int(int? other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_int_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_Int._Underlying *__MR_C_std_optional_int_ConstructFrom(int *other);
                    int __deref_other = other.GetValueOrDefault();
                    _UnderlyingPtr = __MR_C_std_optional_int_ConstructFrom(other.HasValue ? &__deref_other : null);
                }

                /// <summary>
                /// Constructs a new instance.
                /// </summary>
                public static unsafe implicit operator Optional_Int(int? other) {return new(other);}

                /// <summary>
                /// Assigns the contents from another instance. Both objects remain alive after the call.
                /// </summary>
                public unsafe void assign(MR.CS.Std.Const_Optional_Int other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_int_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_optional_int_AssignFromAnother(_Underlying *_this, MR.CS.Std.Optional_Int._Underlying *other);
                    _DiscardKeepAlive();
                    _KeepAlive(other);
                    __MR_C_std_optional_int_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                }

                /// <summary>
                /// Assigns the contents.
                /// </summary>
                public unsafe void assign(int? other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_int_AssignFrom", ExactSpelling = true)]
                    extern static void __MR_C_std_optional_int_AssignFrom(_Underlying *_this, int *other);
                    int __deref_other = other.GetValueOrDefault();
                    __MR_C_std_optional_int_AssignFrom(_UnderlyingPtr, other.HasValue ? &__deref_other : null);
                }

                /// <summary>
                /// The stored element or null if none, mutable.
                /// </summary>
                public unsafe new MR.CS.Misc.Ref<int>? value()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_int_MutableValue", ExactSpelling = true)]
                    extern static int *__MR_C_std_optional_int_MutableValue(_Underlying *_this);
                    var __c_ret = __MR_C_std_optional_int_MutableValue(_UnderlyingPtr);
                    return __c_ret is not null ? new MR.CS.Misc.Ref<int>(__c_ret) : null;
                }
            }

            /// <summary>
            /// This is used for optional parameters of class `Optional_Int` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Optional_Int`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Optional_Int`/`Const_Optional_Int` directly.
            /// </summary>
            public class _InOptMut_Optional_Int
            {
                public Optional_Int? Opt;

                public _InOptMut_Optional_Int() {}
                public _InOptMut_Optional_Int(Optional_Int value) {Opt = value;}
                public static implicit operator _InOptMut_Optional_Int(Optional_Int value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Optional_Int` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Optional_Int`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Optional_Int`/`Const_Optional_Int` to pass it to the function.
            /// </summary>
            public class _InOptConst_Optional_Int
            {
                public Const_Optional_Int? Opt;

                public _InOptConst_Optional_Int() {}
                public _InOptConst_Optional_Int(Const_Optional_Int value) {Opt = value;}
                public static implicit operator _InOptConst_Optional_Int(Const_Optional_Int value) {return new(value);}

                /// <summary>
                /// Constructs a new instance.
                /// </summary>
                public static unsafe implicit operator _InOptConst_Optional_Int(int? other) {return new Const_Optional_Int(other);}
            }
        }
    }
}
