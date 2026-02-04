public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// Stores either a single `std::string` or nothing.
            /// This is the const half of the class.
            public class Const_Optional_StdString : MR.CS.Misc.Object<Const_Optional_StdString>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_std_string_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_optional_std_string_Destroy(_Underlying *_this);
                    __MR_C_std_optional_std_string_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Optional_StdString() {Dispose(false);}

                internal unsafe Const_Optional_StdString(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_Optional_StdString() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_std_string_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_StdString._Underlying *__MR_C_std_optional_std_string_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_optional_std_string_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Const_Optional_StdString(MR.CS.Std._ByValue_Optional_StdString other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_std_string_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_StdString._Underlying *__MR_C_std_optional_std_string_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Optional_StdString._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_optional_std_string_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// Constructs a copy of another instance. The source remains alive.
                public Const_Optional_StdString(Const_Optional_StdString other) : this(new _ByValue_Optional_StdString(other)) {}

                /// Constructs a copy of another instance. The source remains alive.
                public Const_Optional_StdString(Optional_StdString other) : this((Const_Optional_StdString)other) {}

                /// Constructs a new instance.
                public unsafe Const_Optional_StdString(string? other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_std_string_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_StdString._Underlying *__MR_C_std_optional_std_string_ConstructFrom(byte *other, byte *other_end);
                    byte[] __bytes_other;
                    int __len_other = 0;
                    if (other is not null)
                    {
                        __bytes_other = System.Text.Encoding.UTF8.GetBytes(other);
                    }
                    fixed (byte *__ptr_other = __bytes_other)
                    {
                        _UnderlyingPtr = __MR_C_std_optional_std_string_ConstructFrom(other is not null ? __ptr_other : null, other is not null ? __ptr_other + __len_other : null);
                    }
                }

                /// Constructs a new instance.
                public static unsafe implicit operator Const_Optional_StdString(string? other) {return new(other);}

                /// The stored element or null if none, read-only.
                public unsafe MR.CS.Std.Const_String? Value()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_std_string_value", ExactSpelling = true)]
                    extern static MR.CS.Std.Const_String._Underlying *__MR_C_std_optional_std_string_value(_Underlying *_this);
                    var __c_ret = __MR_C_std_optional_std_string_value(_UnderlyingPtr);
                    MR.CS.Std.Const_String? __ret;
                    __ret = __c_ret is not null ? new MR.CS.Std.Const_String(__c_ret, is_owning: false) : null;
                    if (__ret is not null) __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }
            }

            /// Stores either a single `std::string` or nothing.
            /// This is the non-const half of the class.
            public class Optional_StdString : Const_Optional_StdString
            {
                internal unsafe Optional_StdString(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Optional_StdString() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_std_string_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_StdString._Underlying *__MR_C_std_optional_std_string_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_optional_std_string_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Optional_StdString(MR.CS.Std._ByValue_Optional_StdString other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_std_string_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_StdString._Underlying *__MR_C_std_optional_std_string_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Optional_StdString._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_optional_std_string_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// Constructs a copy of another instance. The source remains alive.
                public Optional_StdString(Const_Optional_StdString other) : this(new _ByValue_Optional_StdString(other)) {}

                /// Constructs a copy of another instance. The source remains alive.
                public Optional_StdString(Optional_StdString other) : this((Const_Optional_StdString)other) {}

                /// Constructs a new instance.
                public unsafe Optional_StdString(string? other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_std_string_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Std.Optional_StdString._Underlying *__MR_C_std_optional_std_string_ConstructFrom(byte *other, byte *other_end);
                    byte[] __bytes_other;
                    int __len_other = 0;
                    if (other is not null)
                    {
                        __bytes_other = System.Text.Encoding.UTF8.GetBytes(other);
                    }
                    fixed (byte *__ptr_other = __bytes_other)
                    {
                        _UnderlyingPtr = __MR_C_std_optional_std_string_ConstructFrom(other is not null ? __ptr_other : null, other is not null ? __ptr_other + __len_other : null);
                    }
                }

                /// Constructs a new instance.
                public static unsafe implicit operator Optional_StdString(string? other) {return new(other);}

                /// Assigns the contents from another instance. Both objects remain alive after the call.
                public unsafe void Assign(MR.CS.Std._ByValue_Optional_StdString other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_std_string_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_optional_std_string_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Optional_StdString._Underlying *other);
                    _DiscardKeepAlive();
                    if (other.Value is not null) _KeepAlive(other.Value);
                    __MR_C_std_optional_std_string_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// Assigns the contents.
                public unsafe void Assign(string? other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_std_string_AssignFrom", ExactSpelling = true)]
                    extern static void __MR_C_std_optional_std_string_AssignFrom(_Underlying *_this, byte *other, byte *other_end);
                    byte[] __bytes_other;
                    int __len_other = 0;
                    if (other is not null)
                    {
                        __bytes_other = System.Text.Encoding.UTF8.GetBytes(other);
                    }
                    fixed (byte *__ptr_other = __bytes_other)
                    {
                        __MR_C_std_optional_std_string_AssignFrom(_UnderlyingPtr, other is not null ? __ptr_other : null, other is not null ? __ptr_other + __len_other : null);
                    }
                }

                /// The stored element or null if none, mutable.
                public unsafe new MR.CS.Std.String? Value()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_optional_std_string_value_mut", ExactSpelling = true)]
                    extern static MR.CS.Std.String._Underlying *__MR_C_std_optional_std_string_value_mut(_Underlying *_this);
                    var __c_ret = __MR_C_std_optional_std_string_value_mut(_UnderlyingPtr);
                    MR.CS.Std.String? __ret;
                    __ret = __c_ret is not null ? new MR.CS.Std.String(__c_ret, is_owning: false) : null;
                    if (__ret is not null) __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }
            }

            /// This is used as a function parameter when the underlying function receives `Optional_StdString` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `Optional_StdString`/`Const_Optional_StdString` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            public class _ByValue_Optional_StdString
            {
                internal readonly Const_Optional_StdString? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_Optional_StdString() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_Optional_StdString(Const_Optional_StdString new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_Optional_StdString(Const_Optional_StdString arg) {return new(arg);}
                public _ByValue_Optional_StdString(MR.CS.Misc._Moved<Optional_StdString> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_Optional_StdString(MR.CS.Misc._Moved<Optional_StdString> arg) {return new(arg);}

                /// Constructs a new instance.
                public static unsafe implicit operator _ByValue_Optional_StdString(string? other) {return new MR.CS.Misc._Moved<MR.CS.Std.Optional_StdString>(other);}
            }

            /// This is used for optional parameters of class `Optional_StdString` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Optional_StdString`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Optional_StdString`/`Const_Optional_StdString` directly.
            public class _InOptMut_Optional_StdString
            {
                public Optional_StdString? Opt;

                public _InOptMut_Optional_StdString() {}
                public _InOptMut_Optional_StdString(Optional_StdString value) {Opt = value;}
                public static implicit operator _InOptMut_Optional_StdString(Optional_StdString value) {return new(value);}
            }

            /// This is used for optional parameters of class `Optional_StdString` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Optional_StdString`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Optional_StdString`/`Const_Optional_StdString` to pass it to the function.
            public class _InOptConst_Optional_StdString
            {
                public Const_Optional_StdString? Opt;

                public _InOptConst_Optional_StdString() {}
                public _InOptConst_Optional_StdString(Const_Optional_StdString value) {Opt = value;}
                public static implicit operator _InOptConst_Optional_StdString(Const_Optional_StdString value) {return new(value);}

                /// Constructs a new instance.
                public static unsafe implicit operator _InOptConst_Optional_StdString(string? other) {return new Const_Optional_StdString(other);}
            }
        }
    }
}
