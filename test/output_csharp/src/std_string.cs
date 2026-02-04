public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// A heap-allocated null-terminated string.
            /// This is the const half of the class.
            public class Const_String : MR.CS.Misc.Object<Const_String>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

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

                internal unsafe Const_String(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_String() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.String._Underlying *__MR_C_std_string_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_string_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Const_String(MR.CS.Std._ByValue_String other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.String._Underlying *__MR_C_std_string_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.String._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_string_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// Constructs a copy of another instance. The source remains alive.
                public Const_String(Const_String other) : this(new _ByValue_String(other)) {}

                /// Constructs a copy of another instance. The source remains alive.
                public Const_String(String other) : this((Const_String)other) {}

                /// Constructs a new instance.
                public unsafe Const_String(string other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Std.String._Underlying *__MR_C_std_string_ConstructFrom(byte *other, byte *other_end);
                    byte[] __bytes_other = System.Text.Encoding.UTF8.GetBytes(other);
                    fixed (byte *__ptr_other = __bytes_other)
                    {
                        _UnderlyingPtr = __MR_C_std_string_ConstructFrom(__ptr_other, __ptr_other + __bytes_other.Length);
                    }
                }

                /// Constructs a new instance.
                public static unsafe implicit operator Const_String(string other) {return new(other);}

                /// The number of characters in the string, excluding the null-terminator.
                public unsafe ulong Size()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_Size", ExactSpelling = true)]
                    extern static ulong __MR_C_std_string_Size(_Underlying *_this);
                    return __MR_C_std_string_Size(_UnderlyingPtr);
                }

                /// Returns the string contents, which are always null-terminated.
                public unsafe MR.CS.ConstPtrChar Data()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_Data", ExactSpelling = true)]
                    extern static byte *__MR_C_std_string_Data(_Underlying *_this);
                    return new(__MR_C_std_string_Data(_UnderlyingPtr));
                }

                /// Returns a pointer to the end of string, to its null-terminator.
                public unsafe MR.CS.ConstPtrChar DataEnd()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_DataEnd", ExactSpelling = true)]
                    extern static byte *__MR_C_std_string_DataEnd(_Underlying *_this);
                    return new(__MR_C_std_string_DataEnd(_UnderlyingPtr));
                }

                // Custom extras:

                public static unsafe implicit operator string(MR.CS.Std.Const_String self)
                {
                    return System.Text.Encoding.UTF8.GetString(self.Data().GetPointer(), checked((int)self.Size()));
                }
                public override string ToString() {return (string)this;}
            }

            /// A heap-allocated null-terminated string.
            /// This is the non-const half of the class.
            public class String : Const_String
            {
                internal unsafe String(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe String() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.String._Underlying *__MR_C_std_string_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_string_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe String(MR.CS.Std._ByValue_String other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.String._Underlying *__MR_C_std_string_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.String._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_string_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// Constructs a copy of another instance. The source remains alive.
                public String(Const_String other) : this(new _ByValue_String(other)) {}

                /// Constructs a copy of another instance. The source remains alive.
                public String(String other) : this((Const_String)other) {}

                /// Constructs a new instance.
                public unsafe String(string other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Std.String._Underlying *__MR_C_std_string_ConstructFrom(byte *other, byte *other_end);
                    byte[] __bytes_other = System.Text.Encoding.UTF8.GetBytes(other);
                    fixed (byte *__ptr_other = __bytes_other)
                    {
                        _UnderlyingPtr = __MR_C_std_string_ConstructFrom(__ptr_other, __ptr_other + __bytes_other.Length);
                    }
                }

                /// Constructs a new instance.
                public static unsafe implicit operator String(string other) {return new(other);}

                /// Assigns the contents from another instance. Both objects remain alive after the call.
                public unsafe void Assign(MR.CS.Std._ByValue_String other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_string_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.String._Underlying *other);
                    _DiscardKeepAlive();
                    if (other.Value is not null) _KeepAlive(other.Value);
                    __MR_C_std_string_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// Assigns the contents.
                public unsafe void Assign(string other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_AssignFrom", ExactSpelling = true)]
                    extern static void __MR_C_std_string_AssignFrom(_Underlying *_this, byte *other, byte *other_end);
                    byte[] __bytes_other = System.Text.Encoding.UTF8.GetBytes(other);
                    fixed (byte *__ptr_other = __bytes_other)
                    {
                        __MR_C_std_string_AssignFrom(_UnderlyingPtr, __ptr_other, __ptr_other + __bytes_other.Length);
                    }
                }

                /// Returns the string contents, which are always null-terminated. This version returns a non-const pointer.
                public unsafe new MR.CS.ConstPtrChar Data()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_MutableData", ExactSpelling = true)]
                    extern static byte *__MR_C_std_string_MutableData(_Underlying *_this);
                    return new(__MR_C_std_string_MutableData(_UnderlyingPtr));
                }

                /// Returns a pointer to the end of string, to its null-terminator. This version returns a non-const pointer.
                public unsafe new MR.CS.PtrChar DataEnd()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_MutableDataEnd", ExactSpelling = true)]
                    extern static byte *__MR_C_std_string_MutableDataEnd(_Underlying *_this);
                    return new(__MR_C_std_string_MutableDataEnd(_UnderlyingPtr));
                }
            }

            /// This is used as a function parameter when the underlying function receives `String` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `String`/`Const_String` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            public class _ByValue_String
            {
                internal readonly Const_String? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_String() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_String(Const_String new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_String(Const_String arg) {return new(arg);}
                public _ByValue_String(MR.CS.Misc._Moved<String> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_String(MR.CS.Misc._Moved<String> arg) {return new(arg);}

                /// Constructs a new instance.
                public static unsafe implicit operator _ByValue_String(string other) {return new MR.CS.Misc._Moved<MR.CS.Std.String>(other);}
            }

            /// This is used as a function parameter when the underlying function receives an optional `String` by value,
            ///   and also has a default argument, meaning it has two different null states.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `String`/`Const_String` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument.
            /// * Pass `MR.CS.Misc.NullOptType` to pass no object.
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

                /// Constructs a new instance.
                public static unsafe implicit operator _ByValueOptOpt_String(string other) {return new MR.CS.Misc._Moved<MR.CS.Std.String>(other);}
            }

            /// This is used for optional parameters of class `String` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_String`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `String`/`Const_String` directly.
            public class _InOptMut_String
            {
                public String? Opt;

                public _InOptMut_String() {}
                public _InOptMut_String(String value) {Opt = value;}
                public static implicit operator _InOptMut_String(String value) {return new(value);}
            }

            /// This is used for optional parameters of class `String` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_String`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `String`/`Const_String` to pass it to the function.
            public class _InOptConst_String
            {
                public Const_String? Opt;

                public _InOptConst_String() {}
                public _InOptConst_String(Const_String value) {Opt = value;}
                public static implicit operator _InOptConst_String(Const_String value) {return new(value);}

                /// Constructs a new instance.
                public static unsafe implicit operator _InOptConst_String(string other) {return new Const_String(other);}
            }
        }
    }
}
