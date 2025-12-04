public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// A non-owning string view. Not necessarily null-terminated.
            /// This is the const half of the class.
            public class ConstStringView : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstStringView(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_view_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_string_view_Destroy(_Underlying *_this);
                    __MR_C_std_string_view_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstStringView() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstStringView() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_view_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.StringView._Underlying *__MR_C_std_string_view_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_string_view_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe ConstStringView(MR.CS.Std.ConstStringView other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_view_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.StringView._Underlying *__MR_C_std_string_view_ConstructFromAnother(MR.CS.Std.StringView._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_string_view_ConstructFromAnother(other._UnderlyingPtr);
                }

                /// Constructs a new instance.
                public unsafe ConstStringView(ReadOnlySpan<char> other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_view_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Std.StringView._Underlying *__MR_C_std_string_view_ConstructFrom(byte *other, byte *other_end);
                    byte[] __bytes_other = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(other.Length)];
                    int __len_other = System.Text.Encoding.UTF8.GetBytes(other, __bytes_other);
                    fixed (byte *__ptr_other = __bytes_other)
                    {
                        _UnderlyingPtr = __MR_C_std_string_view_ConstructFrom(__ptr_other, __ptr_other + __len_other);
                    }
                }

                /// Constructs a new instance.
                public static unsafe implicit operator ConstStringView(ReadOnlySpan<char> other) {return new(other);}

                /// The number of characters in the string.
                public unsafe ulong Size()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_view_Size", ExactSpelling = true)]
                    extern static ulong __MR_C_std_string_view_Size(_Underlying *_this);
                    return __MR_C_std_string_view_Size(_UnderlyingPtr);
                }

                /// Returns the string contents, NOT necessarily null-terminated.
                /// Returns a read-only pointer.
                public unsafe byte *Data()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_view_Data", ExactSpelling = true)]
                    extern static byte *__MR_C_std_string_view_Data(_Underlying *_this);
                    return __MR_C_std_string_view_Data(_UnderlyingPtr);
                }

                /// Returns a pointer to the end of string. Not dereferencable.
                /// Returns a read-only pointer.
                public unsafe byte *DataEnd()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_view_DataEnd", ExactSpelling = true)]
                    extern static byte *__MR_C_std_string_view_DataEnd(_Underlying *_this);
                    return __MR_C_std_string_view_DataEnd(_UnderlyingPtr);
                }

                // Custom extras:

                public static unsafe implicit operator ReadOnlySpan<byte>(MR.CS.Std.ConstStringView self)
                {
                    return new(self.Data(), checked((int)self.Size()));
                }

                public static unsafe implicit operator string(MR.CS.Std.ConstStringView self)
                {
                    return System.Text.Encoding.UTF8.GetString(self.Data(), checked((int)self.Size()));
                }
            }

            /// A non-owning string view. Not necessarily null-terminated.
            /// This is the non-const half of the class.
            public class StringView : ConstStringView
            {
                internal unsafe StringView(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe StringView() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_view_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.StringView._Underlying *__MR_C_std_string_view_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_string_view_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe StringView(MR.CS.Std.ConstStringView other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_view_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.StringView._Underlying *__MR_C_std_string_view_ConstructFromAnother(MR.CS.Std.StringView._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_string_view_ConstructFromAnother(other._UnderlyingPtr);
                }

                /// Constructs a new instance.
                public unsafe StringView(ReadOnlySpan<char> other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_view_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Std.StringView._Underlying *__MR_C_std_string_view_ConstructFrom(byte *other, byte *other_end);
                    byte[] __bytes_other = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(other.Length)];
                    int __len_other = System.Text.Encoding.UTF8.GetBytes(other, __bytes_other);
                    fixed (byte *__ptr_other = __bytes_other)
                    {
                        _UnderlyingPtr = __MR_C_std_string_view_ConstructFrom(__ptr_other, __ptr_other + __len_other);
                    }
                }

                /// Constructs a new instance.
                public static unsafe implicit operator StringView(ReadOnlySpan<char> other) {return new(other);}

                /// Assigns the contents from another instance. Both objects remain alive after the call.
                public unsafe void Assign(MR.CS.Std.ConstStringView other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_view_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_string_view_AssignFromAnother(_Underlying *_this, MR.CS.Std.StringView._Underlying *other);
                    __MR_C_std_string_view_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                }

                /// Assigns the contents.
                public unsafe void Assign(ReadOnlySpan<char> other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_view_AssignFrom", ExactSpelling = true)]
                    extern static void __MR_C_std_string_view_AssignFrom(_Underlying *_this, byte *other, byte *other_end);
                    byte[] __bytes_other = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(other.Length)];
                    int __len_other = System.Text.Encoding.UTF8.GetBytes(other, __bytes_other);
                    fixed (byte *__ptr_other = __bytes_other)
                    {
                        __MR_C_std_string_view_AssignFrom(_UnderlyingPtr, __ptr_other, __ptr_other + __len_other);
                    }
                }
            }

            /// This is used for optional parameters of class `StringView` with default arguments.
            /// This is only used mutable parameters. For const ones we have `InOptConst_StringView`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `StringView`/`ConstStringView` directly.
            public class InOptMut_StringView
            {
                public StringView? Opt;

                public InOptMut_StringView() {}
                public InOptMut_StringView(StringView value) {Opt = value;}
                public static implicit operator InOptMut_StringView(StringView value) {return new(value);}
            }

            /// This is used for optional parameters of class `StringView` with default arguments.
            /// This is only used const parameters. For non-const ones we have `InOptMut_StringView`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `StringView`/`ConstStringView` to pass it to the function.
            public class InOptConst_StringView
            {
                public ConstStringView? Opt;

                public InOptConst_StringView() {}
                public InOptConst_StringView(ConstStringView value) {Opt = value;}
                public static implicit operator InOptConst_StringView(ConstStringView value) {return new(value);}

                /// Constructs a new instance.
                public static unsafe implicit operator InOptConst_StringView(ReadOnlySpan<char> other) {return new MR.CS.Std.StringView(other);}
            }
        }
    }
}
