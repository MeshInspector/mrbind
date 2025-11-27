public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            public static partial class Filesystem
            {
                /// Stores a filesystem path.
                /// This is the const half of the class.
                public class ConstPath : MR.CS.Misc.Object, System.IDisposable
                {
                    internal struct _Underlying; // Represents the underlying C++ type.

                    internal unsafe _Underlying *_UnderlyingPtr;

                    internal unsafe ConstPath(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                    protected virtual unsafe void Dispose(bool disposing)
                    {
                        if (_UnderlyingPtr is null || !_IsOwningVal)
                            return;
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_filesystem_path_Destroy", ExactSpelling = true)]
                        extern static void __MR_C_std_filesystem_path_Destroy(_Underlying *_this);
                        __MR_C_std_filesystem_path_Destroy(_UnderlyingPtr);
                        _UnderlyingPtr = null;
                    }
                    public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                    ~ConstPath() {Dispose(false);}

                    /// Constructs an empty (default-constructed) instance.
                    public unsafe ConstPath() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_filesystem_path_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.Filesystem.ConstPath._Underlying *__MR_C_std_filesystem_path_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_filesystem_path_DefaultConstruct();
                    }

                    /// Constructs a copy of another instance. The source remains alive.
                    public unsafe ConstPath(MR.CS.Misc.ByValue<MR.CS.Std.Filesystem.Path, MR.CS.Std.Filesystem.ConstPath> other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_filesystem_path_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.Filesystem.ConstPath._Underlying *__MR_C_std_filesystem_path_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Filesystem.Path._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_filesystem_path_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    }

                    /// Constructs a new instance.
                    public unsafe ConstPath(ReadOnlySpan<char> other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_filesystem_path_ConstructFrom", ExactSpelling = true)]
                        extern static MR.CS.Std.Filesystem.ConstPath._Underlying *__MR_C_std_filesystem_path_ConstructFrom(byte *other, byte *other_end);
                        byte[] __bytes_other = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(other.Length)];
                        int __len_other = System.Text.Encoding.UTF8.GetBytes(other, __bytes_other);
                        fixed (byte *__ptr_other = __bytes_other)
                        {
                            _UnderlyingPtr = __MR_C_std_filesystem_path_ConstructFrom(__ptr_other, __ptr_other + __len_other);
                        }
                    }

                    /// Constructs a new instance.
                    public static unsafe implicit operator ConstPath(ReadOnlySpan<char> other) {return new(other);}

                    /// Get the contents as a UTF8-encoded string.
                    public unsafe MR.CS.Std.String GetString()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_filesystem_path_GetString", ExactSpelling = true)]
                        extern static MR.CS.Std.String._Underlying *__MR_C_std_filesystem_path_GetString(_Underlying *_this);
                        return new(__MR_C_std_filesystem_path_GetString(_UnderlyingPtr), is_owning: true);
                    }

                    // Custom extras:

                    public static unsafe implicit operator string(MR.CS.Std.Filesystem.ConstPath self)
                    {
                        return self.GetString();
                    }
                }

                /// Stores a filesystem path.
                /// This is the non-const half of the class.
                public class Path : ConstPath
                {
                    internal unsafe Path(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                    /// Constructs an empty (default-constructed) instance.
                    public unsafe Path() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_filesystem_path_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.Filesystem.ConstPath._Underlying *__MR_C_std_filesystem_path_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_filesystem_path_DefaultConstruct();
                    }

                    /// Constructs a copy of another instance. The source remains alive.
                    public unsafe Path(MR.CS.Misc.ByValue<MR.CS.Std.Filesystem.Path, MR.CS.Std.Filesystem.ConstPath> other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_filesystem_path_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.Filesystem.ConstPath._Underlying *__MR_C_std_filesystem_path_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Filesystem.Path._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_filesystem_path_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    }

                    /// Constructs a new instance.
                    public unsafe Path(ReadOnlySpan<char> other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_filesystem_path_ConstructFrom", ExactSpelling = true)]
                        extern static MR.CS.Std.Filesystem.ConstPath._Underlying *__MR_C_std_filesystem_path_ConstructFrom(byte *other, byte *other_end);
                        byte[] __bytes_other = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(other.Length)];
                        int __len_other = System.Text.Encoding.UTF8.GetBytes(other, __bytes_other);
                        fixed (byte *__ptr_other = __bytes_other)
                        {
                            _UnderlyingPtr = __MR_C_std_filesystem_path_ConstructFrom(__ptr_other, __ptr_other + __len_other);
                        }
                    }

                    /// Constructs a new instance.
                    public static unsafe implicit operator Path(ReadOnlySpan<char> other) {return new(other);}

                    /// Assigns the contents from another instance. Both objects remain alive after the call.
                    public unsafe void Assign(MR.CS.Misc.ByValue<MR.CS.Std.Filesystem.Path, MR.CS.Std.Filesystem.ConstPath> other)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_filesystem_path_AssignFromAnother", ExactSpelling = true)]
                        extern static void __MR_C_std_filesystem_path_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Filesystem.Path._Underlying *other);
                        __MR_C_std_filesystem_path_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    }

                    /// Assigns the contents.
                    public unsafe void Assign(ReadOnlySpan<char> other)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_filesystem_path_AssignFrom", ExactSpelling = true)]
                        extern static void __MR_C_std_filesystem_path_AssignFrom(_Underlying *_this, byte *other, byte *other_end);
                        byte[] __bytes_other = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(other.Length)];
                        int __len_other = System.Text.Encoding.UTF8.GetBytes(other, __bytes_other);
                        fixed (byte *__ptr_other = __bytes_other)
                        {
                            __MR_C_std_filesystem_path_AssignFrom(_UnderlyingPtr, __ptr_other, __ptr_other + __len_other);
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
