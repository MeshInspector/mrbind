public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// A heap-allocated null-terminated string.
            /// This is the const half of the class.
            /// </summary>
            public class Const_String : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_String(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_string_Destroy(_Underlying *_this);
                    __MR_C_std_string_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_String() {Dispose(false);}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_String() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.String._Underlying *__MR_C_std_string_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_string_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Const_String(MR.CS.Std._ByValue_String other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.String._Underlying *__MR_C_std_string_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.String._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_string_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Constructs a new instance.
                /// </summary>
                public unsafe Const_String(ReadOnlySpan<char> other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Std.String._Underlying *__MR_C_std_string_ConstructFrom(byte *other, byte *other_end);
                    byte[] __bytes_other = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(other.Length)];
                    int __len_other = System.Text.Encoding.UTF8.GetBytes(other, __bytes_other);
                    fixed (byte *__ptr_other = __bytes_other)
                    {
                        _UnderlyingPtr = __MR_C_std_string_ConstructFrom(__ptr_other, __ptr_other + __len_other);
                    }
                }

                /// <summary>
                /// Constructs a new instance.
                /// </summary>
                public static unsafe implicit operator Const_String(ReadOnlySpan<char> other) {return new(other);}
                public static unsafe implicit operator Const_String(string other) {return new(other);}

                /// <summary>
                /// The number of characters in the string, excluding the null-terminator.
                /// </summary>
                public unsafe ulong size()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_Size", ExactSpelling = true)]
                    extern static ulong __MR_C_std_string_Size(_Underlying *_this);
                    return __MR_C_std_string_Size(_UnderlyingPtr);
                }

                /// <summary>
                /// Returns the string contents, which are always null-terminated.
                /// Returns a read-only pointer.
                /// </summary>
                public unsafe byte *data()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_Data", ExactSpelling = true)]
                    extern static byte *__MR_C_std_string_Data(_Underlying *_this);
                    return __MR_C_std_string_Data(_UnderlyingPtr);
                }

                /// <summary>
                /// Returns a pointer to the end of string, to its null-terminator.
                /// Returns a read-only pointer.
                /// </summary>
                public unsafe byte *dataEnd()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_DataEnd", ExactSpelling = true)]
                    extern static byte *__MR_C_std_string_DataEnd(_Underlying *_this);
                    return __MR_C_std_string_DataEnd(_UnderlyingPtr);
                }

                // Custom extras:

                public static unsafe implicit operator ReadOnlySpan<byte>(MR.CS.Std.Const_String self)
                {
                    return new(self.data(), checked((int)self.size()));
                }

                public static unsafe implicit operator string(MR.CS.Std.Const_String self)
                {
                    return System.Text.Encoding.UTF8.GetString(self.data(), checked((int)self.size()));
                }
                public override string ToString() {return (string)this;}
            }

            /// <summary>
            /// A heap-allocated null-terminated string.
            /// This is the non-const half of the class.
            /// </summary>
            public class String : Const_String
            {
                internal unsafe String(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe String() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.String._Underlying *__MR_C_std_string_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_string_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe String(MR.CS.Std._ByValue_String other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.String._Underlying *__MR_C_std_string_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.String._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_string_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Constructs a new instance.
                /// </summary>
                public unsafe String(ReadOnlySpan<char> other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Std.String._Underlying *__MR_C_std_string_ConstructFrom(byte *other, byte *other_end);
                    byte[] __bytes_other = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(other.Length)];
                    int __len_other = System.Text.Encoding.UTF8.GetBytes(other, __bytes_other);
                    fixed (byte *__ptr_other = __bytes_other)
                    {
                        _UnderlyingPtr = __MR_C_std_string_ConstructFrom(__ptr_other, __ptr_other + __len_other);
                    }
                }

                /// <summary>
                /// Constructs a new instance.
                /// </summary>
                public static unsafe implicit operator String(ReadOnlySpan<char> other) {return new(other);}
                public static unsafe implicit operator String(string other) {return new(other);}

                /// <summary>
                /// Assigns the contents from another instance. Both objects remain alive after the call.
                /// </summary>
                public unsafe void assign(MR.CS.Std._ByValue_String other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_string_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.String._Underlying *other);
                    __MR_C_std_string_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Assigns the contents.
                /// </summary>
                public unsafe void assign(ReadOnlySpan<char> other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_AssignFrom", ExactSpelling = true)]
                    extern static void __MR_C_std_string_AssignFrom(_Underlying *_this, byte *other, byte *other_end);
                    byte[] __bytes_other = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(other.Length)];
                    int __len_other = System.Text.Encoding.UTF8.GetBytes(other, __bytes_other);
                    fixed (byte *__ptr_other = __bytes_other)
                    {
                        __MR_C_std_string_AssignFrom(_UnderlyingPtr, __ptr_other, __ptr_other + __len_other);
                    }
                }

                /// <summary>
                /// Returns the string contents, which are always null-terminated. This version returns a non-const pointer.
                /// Returns a read-only pointer.
                /// </summary>
                public unsafe new byte *data()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_MutableData", ExactSpelling = true)]
                    extern static byte *__MR_C_std_string_MutableData(_Underlying *_this);
                    return __MR_C_std_string_MutableData(_UnderlyingPtr);
                }

                /// <summary>
                /// Returns a pointer to the end of string, to its null-terminator. This version returns a non-const pointer.
                /// Returns a mutable pointer.
                /// </summary>
                public unsafe new byte *dataEnd()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_MutableDataEnd", ExactSpelling = true)]
                    extern static byte *__MR_C_std_string_MutableDataEnd(_Underlying *_this);
                    return __MR_C_std_string_MutableDataEnd(_UnderlyingPtr);
                }

                // Custom extras:

                public static unsafe implicit operator Span<byte>(MR.CS.Std.String s)
                {
                    return new(s.data(), checked((int)s.size()));
                }
            }

            /// <summary>
            /// This is used as a function parameter when the underlying function receives `String` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `String`/`Const_String` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            /// </summary>
            public class _ByValue_String
            {
                internal readonly Const_String? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_String() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_String(Const_String new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_String(Const_String arg) {return new(arg);}
                public _ByValue_String(MR.CS.Misc._Moved<String> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_String(MR.CS.Misc._Moved<String> arg) {return new(arg);}

                /// <summary>
                /// Constructs a new instance.
                /// </summary>
                public static unsafe implicit operator _ByValue_String(ReadOnlySpan<char> other) {return new MR.CS.Misc._Moved<MR.CS.Std.String>(other);}
                public static unsafe implicit operator _ByValue_String(string other) {return new(other);}
            }

            /// <summary>
            /// This is used as a function parameter when the underlying function receives an optional `String` by value,
            ///   and also has a default argument, meaning it has two different null states.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `String`/`Const_String` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument.
            /// * Pass `MR.CS.Misc.NullOptType` to pass no object.
            /// </summary>
            public class _ByValueOptOpt_String
            {
                internal readonly Const_String? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValueOptOpt_String() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValueOptOpt_String(Const_String new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValueOptOpt_String(Const_String arg) {return new(arg);}
                public _ByValueOptOpt_String(MR.CS.Misc._Moved<String> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValueOptOpt_String(MR.CS.Misc._Moved<String> arg) {return new(arg);}
                public _ByValueOptOpt_String(MR.CS.Misc.NullOptType nullopt) {PassByMode = MR.CS.Misc._PassBy.no_object;}
                public static implicit operator _ByValueOptOpt_String(MR.CS.Misc.NullOptType nullopt) {return new(nullopt);}

                /// <summary>
                /// Constructs a new instance.
                /// </summary>
                public static unsafe implicit operator _ByValueOptOpt_String(ReadOnlySpan<char> other) {return new MR.CS.Misc._Moved<MR.CS.Std.String>(other);}
                public static unsafe implicit operator _ByValueOptOpt_String(string other) {return new(other);}
            }

            /// <summary>
            /// This is used for optional parameters of class `String` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_String`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `String`/`Const_String` directly.
            /// </summary>
            public class _InOptMut_String
            {
                public String? Opt;

                public _InOptMut_String() {}
                public _InOptMut_String(String value) {Opt = value;}
                public static implicit operator _InOptMut_String(String value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `String` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_String`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `String`/`Const_String` to pass it to the function.
            /// </summary>
            public class _InOptConst_String
            {
                public Const_String? Opt;

                public _InOptConst_String() {}
                public _InOptConst_String(Const_String value) {Opt = value;}
                public static implicit operator _InOptConst_String(Const_String value) {return new(value);}

                /// <summary>
                /// Constructs a new instance.
                /// </summary>
                public static unsafe implicit operator _InOptConst_String(ReadOnlySpan<char> other) {return new Const_String(other);}
                public static unsafe implicit operator _InOptConst_String(string other) {return new(other);}
            }
        }
    }
}
