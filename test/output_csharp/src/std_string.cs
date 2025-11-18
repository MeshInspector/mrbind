public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// The interface for class `string`, the const half.
            /// We never use interfaces as function parameters or return types, because they prevent implicit conversions, but can use them freely.
            public interface IConstString
            {
                public struct _Underlying; // Represents the underlying C++ type.
                internal unsafe _Underlying *_GetUnderlying_StdString(); // Returns the pointer to the underlying C++ object.

                /// The number of characters in the string, excluding the null-terminator.
                public unsafe ulong Size()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_Size", ExactSpelling = true)]
                    extern static ulong __MR_C_std_string_Size(_Underlying *_this);
                    return __MR_C_std_string_Size(_GetUnderlying_StdString());
                }

                /// Returns the string contents, which are always null-terminated.
                /// Returns a read-only pointer.
                public unsafe byte *Data()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_Data", ExactSpelling = true)]
                    extern static byte *__MR_C_std_string_Data(_Underlying *_this);
                    return __MR_C_std_string_Data(_GetUnderlying_StdString());
                }

                /// Returns a pointer to the end of string, to its null-terminator.
                /// Returns a read-only pointer.
                public unsafe byte *DataEnd()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_DataEnd", ExactSpelling = true)]
                    extern static byte *__MR_C_std_string_DataEnd(_Underlying *_this);
                    return __MR_C_std_string_DataEnd(_GetUnderlying_StdString());
                }
            }

            /// A heap-allocated null-terminated string.
            /// This is the const half of the class.
            public class ConstString : MR.CS.Misc.Object, System.IDisposable, IConstString
            {
                protected unsafe IConstString._Underlying *_UnderlyingPtr;
                public unsafe IConstString._Underlying *_GetUnderlying_StdString() => _UnderlyingPtr;

                internal unsafe ConstString(IConstString._Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr == null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_string_Destroy(IConstString._Underlying *_this);
                    __MR_C_std_string_Destroy(_GetUnderlying_StdString());
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstString() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstString() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.IConstString._Underlying *__MR_C_std_string_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_string_DefaultConstruct();
                }

                /// Constructs a new instance.
                public unsafe ConstString(ReadOnlySpan<char> other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Std.IConstString._Underlying *__MR_C_std_string_ConstructFrom(byte *other, byte *other_end);
                    byte[] __bytes_other = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(other.Length)];
                    int __len_other = System.Text.Encoding.UTF8.GetBytes(other, __bytes_other);
                    fixed (byte *__ptr_other = __bytes_other)
                    {
                        _UnderlyingPtr = __MR_C_std_string_ConstructFrom(__ptr_other, __ptr_other + __len_other);
                    }
                }

                /// The number of characters in the string, excluding the null-terminator.
                public ulong Size() => ((MR.CS.Std.IConstString)this).Size();

                /// Returns the string contents, which are always null-terminated.
                /// Returns a read-only pointer.
                public unsafe byte *Data() => ((MR.CS.Std.IConstString)this).Data();

                /// Returns a pointer to the end of string, to its null-terminator.
                /// Returns a read-only pointer.
                public unsafe byte *DataEnd() => ((MR.CS.Std.IConstString)this).DataEnd();

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

            /// The interface for class `string`, the non-const half.
            /// We never use interfaces as function parameters or return types, because they prevent implicit conversions, but can use them freely.
            public interface IString : MR.CS.Std.IConstString
            {
                /// Returns the string contents, which are always null-terminated. This version returns a non-const pointer.
                /// Returns a read-only pointer.
                public unsafe byte *MutableData()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_MutableData", ExactSpelling = true)]
                    extern static byte *__MR_C_std_string_MutableData(_Underlying *_this);
                    return __MR_C_std_string_MutableData(_GetUnderlying_StdString());
                }

                /// Returns a pointer to the end of string, to its null-terminator. This version returns a non-const pointer.
                /// Returns a mutable pointer.
                public unsafe byte *MutableDataEnd()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_MutableDataEnd", ExactSpelling = true)]
                    extern static byte *__MR_C_std_string_MutableDataEnd(_Underlying *_this);
                    return __MR_C_std_string_MutableDataEnd(_GetUnderlying_StdString());
                }
            }

            /// A heap-allocated null-terminated string.
            /// This is the non-const half of the class.
            public class String : MR.CS.Std.ConstString, IString
            {
                internal unsafe String(IString._Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe String() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.IConstString._Underlying *__MR_C_std_string_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_string_DefaultConstruct();
                }

                /// Constructs a new instance.
                public unsafe String(ReadOnlySpan<char> other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_string_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Std.IConstString._Underlying *__MR_C_std_string_ConstructFrom(byte *other, byte *other_end);
                    byte[] __bytes_other = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(other.Length)];
                    int __len_other = System.Text.Encoding.UTF8.GetBytes(other, __bytes_other);
                    fixed (byte *__ptr_other = __bytes_other)
                    {
                        _UnderlyingPtr = __MR_C_std_string_ConstructFrom(__ptr_other, __ptr_other + __len_other);
                    }
                }

                /// Returns the string contents, which are always null-terminated. This version returns a non-const pointer.
                /// Returns a read-only pointer.
                public unsafe byte *MutableData() => ((MR.CS.Std.IString)this).MutableData();

                /// Returns a pointer to the end of string, to its null-terminator. This version returns a non-const pointer.
                /// Returns a mutable pointer.
                public unsafe byte *MutableDataEnd() => ((MR.CS.Std.IString)this).MutableDataEnd();

                // Custom extras:

                public static unsafe implicit operator Span<byte>(MR.CS.Std.String s)
                {
                    return new(s.MutableData(), checked((int)s.Size()));
                }
            }
        }
    }
}
