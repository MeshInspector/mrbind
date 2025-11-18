public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            public static partial class Filesystem
            {
                /// The interface for class `path`, the const half.
                /// We never use interfaces as function parameters or return types, because they prevent implicit conversions, but can use them freely.
                public interface IConstPath
                {
                    public struct _Underlying; // Represents the underlying C++ type.
                    internal unsafe _Underlying *_GetUnderlying_StdFilesystemPath(); // Returns the pointer to the underlying C++ object.

                    /// Get the contents as a UTF8-encoded string.
                    public unsafe MR.CS.Std.String GetString()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_filesystem_path_GetString", ExactSpelling = true)]
                        extern static MR.CS.Std.IString._Underlying *__MR_C_std_filesystem_path_GetString(_Underlying *_this);
                        return new(__MR_C_std_filesystem_path_GetString(_GetUnderlying_StdFilesystemPath()), is_owning: true);
                    }
                }

                /// Stores a filesystem path.
                /// This is the const half of the class.
                public class ConstPath : MR.CS.Misc.Object, System.IDisposable, IConstPath
                {
                    protected unsafe IConstPath._Underlying *_UnderlyingPtr;
                    public unsafe IConstPath._Underlying *_GetUnderlying_StdFilesystemPath() => _UnderlyingPtr;

                    internal unsafe ConstPath(IConstPath._Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                    protected virtual unsafe void Dispose(bool disposing)
                    {
                        if (_UnderlyingPtr == null || !_IsOwningVal)
                            return;
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_filesystem_path_Destroy", ExactSpelling = true)]
                        extern static void __MR_C_std_filesystem_path_Destroy(IConstPath._Underlying *_this);
                        __MR_C_std_filesystem_path_Destroy(_GetUnderlying_StdFilesystemPath());
                        _UnderlyingPtr = null;
                    }
                    public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                    ~ConstPath() {Dispose(false);}

                    /// Constructs an empty (default-constructed) instance.
                    public unsafe ConstPath() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_filesystem_path_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.Filesystem.IConstPath._Underlying *__MR_C_std_filesystem_path_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_filesystem_path_DefaultConstruct();
                    }

                    /// Constructs a new instance.
                    public unsafe ConstPath(ReadOnlySpan<char> other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_filesystem_path_ConstructFrom", ExactSpelling = true)]
                        extern static MR.CS.Std.Filesystem.IConstPath._Underlying *__MR_C_std_filesystem_path_ConstructFrom(byte *other, byte *other_end);
                        byte[] __bytes_other = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(other.Length)];
                        int __len_other = System.Text.Encoding.UTF8.GetBytes(other, __bytes_other);
                        fixed (byte *__ptr_other = __bytes_other)
                        {
                            _UnderlyingPtr = __MR_C_std_filesystem_path_ConstructFrom(__ptr_other, __ptr_other + __len_other);
                        }
                    }

                    /// Get the contents as a UTF8-encoded string.
                    public MR.CS.Std.String GetString() => ((MR.CS.Std.Filesystem.IConstPath)this).GetString();

                    // Custom extras:

                    public static unsafe implicit operator string(MR.CS.Std.Filesystem.ConstPath self)
                    {
                        return self.GetString();
                    }
                }

                /// The interface for class `path`, the non-const half.
                /// We never use interfaces as function parameters or return types, because they prevent implicit conversions, but can use them freely.
                public interface IPath : MR.CS.Std.Filesystem.IConstPath
                {
                }

                /// Stores a filesystem path.
                /// This is the non-const half of the class.
                public class Path : MR.CS.Std.Filesystem.ConstPath, IPath
                {
                    internal unsafe Path(IPath._Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                    /// Constructs an empty (default-constructed) instance.
                    public unsafe Path() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_filesystem_path_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.Filesystem.IConstPath._Underlying *__MR_C_std_filesystem_path_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_filesystem_path_DefaultConstruct();
                    }

                    /// Constructs a new instance.
                    public unsafe Path(ReadOnlySpan<char> other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_filesystem_path_ConstructFrom", ExactSpelling = true)]
                        extern static MR.CS.Std.Filesystem.IConstPath._Underlying *__MR_C_std_filesystem_path_ConstructFrom(byte *other, byte *other_end);
                        byte[] __bytes_other = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(other.Length)];
                        int __len_other = System.Text.Encoding.UTF8.GetBytes(other, __bytes_other);
                        fixed (byte *__ptr_other = __bytes_other)
                        {
                            _UnderlyingPtr = __MR_C_std_filesystem_path_ConstructFrom(__ptr_other, __ptr_other + __len_other);
                        }
                    }

                    // Custom extras:

                    public static unsafe implicit operator string(MR.CS.Std.Filesystem.Path self)
                    {
                        return self.GetString();
                    }
                }
            }
        }
    }
}
