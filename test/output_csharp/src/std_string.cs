public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// A heap-allocated null-terminated string.
            /// This is the const half of the class.
            public class ConstString : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstString(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

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
                ~ConstString() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstString() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.ConstString._Underlying *__MR_C_std_string_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_string_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe ConstString(MR.CS.Misc.ByValue<MR.CS.Std.String, MR.CS.Std.ConstString> other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.ConstString._Underlying *__MR_C_std_string_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.String._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_string_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// Constructs a new instance.
                public unsafe ConstString(ReadOnlySpan<char> other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Std.ConstString._Underlying *__MR_C_std_string_ConstructFrom(byte *other, byte *other_end);
                    byte[] __bytes_other = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(other.Length)];
                    int __len_other = System.Text.Encoding.UTF8.GetBytes(other, __bytes_other);
                    fixed (byte *__ptr_other = __bytes_other)
                    {
                        _UnderlyingPtr = __MR_C_std_string_ConstructFrom(__ptr_other, __ptr_other + __len_other);
                    }
                }

                /// The number of characters in the string, excluding the null-terminator.
                public unsafe ulong Size()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_Size", ExactSpelling = true)]
                    extern static ulong __MR_C_std_string_Size(_Underlying *_this);
                    return __MR_C_std_string_Size(_UnderlyingPtr);
                }

                /// Returns the string contents, which are always null-terminated.
                /// Returns a read-only pointer.
                public unsafe byte *Data()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_Data", ExactSpelling = true)]
                    extern static byte *__MR_C_std_string_Data(_Underlying *_this);
                    return __MR_C_std_string_Data(_UnderlyingPtr);
                }

                /// Returns a pointer to the end of string, to its null-terminator.
                /// Returns a read-only pointer.
                public unsafe byte *DataEnd()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_DataEnd", ExactSpelling = true)]
                    extern static byte *__MR_C_std_string_DataEnd(_Underlying *_this);
                    return __MR_C_std_string_DataEnd(_UnderlyingPtr);
                }

                // Custom extras:

                public static unsafe implicit operator ReadOnlySpan<byte>(MR.CS.Std.ConstString self)
                {
                    return new(self.Data(), checked((int)self.Size()));
                }

                public static unsafe implicit operator string(MR.CS.Std.ConstString self)
                {
                    return System.Text.Encoding.UTF8.GetString(self.Data(), checked((int)self.Size()));
                }
            }

            /// A heap-allocated null-terminated string.
            /// This is the non-const half of the class.
            public class String : ConstString
            {
                internal unsafe String(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe String() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.ConstString._Underlying *__MR_C_std_string_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_string_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe String(MR.CS.Misc.ByValue<MR.CS.Std.String, MR.CS.Std.ConstString> other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.ConstString._Underlying *__MR_C_std_string_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.String._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_string_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// Constructs a new instance.
                public unsafe String(ReadOnlySpan<char> other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Std.ConstString._Underlying *__MR_C_std_string_ConstructFrom(byte *other, byte *other_end);
                    byte[] __bytes_other = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(other.Length)];
                    int __len_other = System.Text.Encoding.UTF8.GetBytes(other, __bytes_other);
                    fixed (byte *__ptr_other = __bytes_other)
                    {
                        _UnderlyingPtr = __MR_C_std_string_ConstructFrom(__ptr_other, __ptr_other + __len_other);
                    }
                }

                /// Assigns the contents from another instance. Both objects remain alive after the call.
                public unsafe void Assign(MR.CS.Misc.ByValue<MR.CS.Std.String, MR.CS.Std.ConstString> other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_string_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.String._Underlying *other);
                    __MR_C_std_string_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// Assigns the contents.
                public unsafe void Assign(ReadOnlySpan<char> other)
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

                /// Returns the string contents, which are always null-terminated. This version returns a non-const pointer.
                /// Returns a read-only pointer.
                public unsafe byte *MutableData()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_MutableData", ExactSpelling = true)]
                    extern static byte *__MR_C_std_string_MutableData(_Underlying *_this);
                    return __MR_C_std_string_MutableData(_UnderlyingPtr);
                }

                /// Returns a pointer to the end of string, to its null-terminator. This version returns a non-const pointer.
                /// Returns a mutable pointer.
                public unsafe byte *MutableDataEnd()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_MutableDataEnd", ExactSpelling = true)]
                    extern static byte *__MR_C_std_string_MutableDataEnd(_Underlying *_this);
                    return __MR_C_std_string_MutableDataEnd(_UnderlyingPtr);
                }

                // Custom extras:

                public static unsafe implicit operator Span<byte>(MR.CS.Std.String s)
                {
                    return new(s.MutableData(), checked((int)s.Size()));
                }
            }
        }
    }
}
