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
                public class Const_Path : MR.CS.Misc.Object<Const_Path>, System.IDisposable
                {
                    internal struct _Underlying {} // Represents the underlying C++ type.

                    internal unsafe _Underlying *_UnderlyingPtr;

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
                    ~Const_Path() {Dispose(false);}

                    internal unsafe Const_Path(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                    /// Constructs an empty (default-constructed) instance.
                    public unsafe Const_Path() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_filesystem_path_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.Filesystem.Path._Underlying *__MR_C_std_filesystem_path_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_filesystem_path_DefaultConstruct();
                    }

                    /// Constructs a copy of another instance. The source remains alive.
                    public unsafe Const_Path(MR.CS.Std.Filesystem._ByValue_Path other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_filesystem_path_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.Filesystem.Path._Underlying *__MR_C_std_filesystem_path_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Filesystem.Path._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_filesystem_path_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                        if (other.Value is not null) _KeepAlive(other.Value);
                    }

                    /// Constructs a copy of another instance. The source remains alive.
                    public Const_Path(Const_Path other) : this(new _ByValue_Path(other)) {}

                    /// Constructs a copy of another instance. The source remains alive.
                    public Const_Path(Path other) : this((Const_Path)other) {}

                    /// Constructs a new instance.
                    public unsafe Const_Path(string other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_filesystem_path_ConstructFrom", ExactSpelling = true)]
                        extern static MR.CS.Std.Filesystem.Path._Underlying *__MR_C_std_filesystem_path_ConstructFrom(byte *other, byte *other_end);
                        byte[] __bytes_other = System.Text.Encoding.UTF8.GetBytes(other);
                        fixed (byte *__ptr_other = __bytes_other)
                        {
                            _UnderlyingPtr = __MR_C_std_filesystem_path_ConstructFrom(__ptr_other, __ptr_other + __bytes_other.Length);
                        }
                    }

                    /// Constructs a new instance.
                    public static unsafe implicit operator Const_Path(string other) {return new(other);}

                    /// Get the contents as a UTF8-encoded string.
                    public unsafe MR.CS.Std.String GetString()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_filesystem_path_GetString", ExactSpelling = true)]
                        extern static MR.CS.Std.String._Underlying *__MR_C_std_filesystem_path_GetString(_Underlying *_this);
                        return new(__MR_C_std_filesystem_path_GetString(_UnderlyingPtr), is_owning: true);
                    }

                    // Custom extras:

                    public static unsafe implicit operator string(MR.CS.Std.Filesystem.Const_Path self)
                    {
                        return self.GetString();
                    }
                    public override string ToString() {return (string)this;}
                }

                /// Stores a filesystem path.
                /// This is the non-const half of the class.
                public class Path : Const_Path
                {
                    internal unsafe Path(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                    /// Constructs an empty (default-constructed) instance.
                    public unsafe Path() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_filesystem_path_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.Std.Filesystem.Path._Underlying *__MR_C_std_filesystem_path_DefaultConstruct();
                        _UnderlyingPtr = __MR_C_std_filesystem_path_DefaultConstruct();
                    }

                    /// Constructs a copy of another instance. The source remains alive.
                    public unsafe Path(MR.CS.Std.Filesystem._ByValue_Path other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_filesystem_path_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.Std.Filesystem.Path._Underlying *__MR_C_std_filesystem_path_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Filesystem.Path._Underlying *other);
                        _UnderlyingPtr = __MR_C_std_filesystem_path_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                        if (other.Value is not null) _KeepAlive(other.Value);
                    }

                    /// Constructs a copy of another instance. The source remains alive.
                    public Path(Const_Path other) : this(new _ByValue_Path(other)) {}

                    /// Constructs a copy of another instance. The source remains alive.
                    public Path(Path other) : this((Const_Path)other) {}

                    /// Constructs a new instance.
                    public unsafe Path(string other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_filesystem_path_ConstructFrom", ExactSpelling = true)]
                        extern static MR.CS.Std.Filesystem.Path._Underlying *__MR_C_std_filesystem_path_ConstructFrom(byte *other, byte *other_end);
                        byte[] __bytes_other = System.Text.Encoding.UTF8.GetBytes(other);
                        fixed (byte *__ptr_other = __bytes_other)
                        {
                            _UnderlyingPtr = __MR_C_std_filesystem_path_ConstructFrom(__ptr_other, __ptr_other + __bytes_other.Length);
                        }
                    }

                    /// Constructs a new instance.
                    public static unsafe implicit operator Path(string other) {return new(other);}

                    /// Assigns the contents from another instance. Both objects remain alive after the call.
                    public unsafe void Assign(MR.CS.Std.Filesystem._ByValue_Path other)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_filesystem_path_AssignFromAnother", ExactSpelling = true)]
                        extern static void __MR_C_std_filesystem_path_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Filesystem.Path._Underlying *other);
                        _DiscardKeepAlive();
                        if (other.Value is not null) _KeepAlive(other.Value);
                        __MR_C_std_filesystem_path_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    }

                    /// Assigns the contents.
                    public unsafe void Assign(string other)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_filesystem_path_AssignFrom", ExactSpelling = true)]
                        extern static void __MR_C_std_filesystem_path_AssignFrom(_Underlying *_this, byte *other, byte *other_end);
                        byte[] __bytes_other = System.Text.Encoding.UTF8.GetBytes(other);
                        fixed (byte *__ptr_other = __bytes_other)
                        {
                            __MR_C_std_filesystem_path_AssignFrom(_UnderlyingPtr, __ptr_other, __ptr_other + __bytes_other.Length);
                        }
                    }

                    // Custom extras:

                    public static unsafe implicit operator string(MR.CS.Std.Filesystem.Path self)
                    {
                        return self.GetString();
                    }
                    public override string ToString() {return (string)this;}
                }

                /// This is used as a function parameter when the underlying function receives `Path` by value.
                /// Usage:
                /// * Pass `new()` to default-construct the instance.
                /// * Pass an instance of `Path`/`Const_Path` to copy it into the function.
                /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
                ///   Be careful if your input isn't a unique reference to this object.
                /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
                public class _ByValue_Path
                {
                    internal readonly Const_Path? Value;
                    internal readonly MR.CS.Misc._PassBy PassByMode;
                    public _ByValue_Path() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                    public _ByValue_Path(Const_Path new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                    public static implicit operator _ByValue_Path(Const_Path arg) {return new(arg);}
                    public _ByValue_Path(MR.CS.Misc._Moved<Path> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                    public static implicit operator _ByValue_Path(MR.CS.Misc._Moved<Path> arg) {return new(arg);}

                    /// Constructs a new instance.
                    public static unsafe implicit operator _ByValue_Path(string other) {return new MR.CS.Misc._Moved<MR.CS.Std.Filesystem.Path>(other);}
                }

                /// This is used for optional parameters of class `Path` with default arguments.
                /// This is only used mutable parameters. For const ones we have `_InOptConst_Path`.
                /// Usage:
                /// * Pass `null` to use the default argument.
                /// * Pass `new()` to pass no object.
                /// * Pass an instance of `Path`/`Const_Path` directly.
                public class _InOptMut_Path
                {
                    public Path? Opt;

                    public _InOptMut_Path() {}
                    public _InOptMut_Path(Path value) {Opt = value;}
                    public static implicit operator _InOptMut_Path(Path value) {return new(value);}
                }

                /// This is used for optional parameters of class `Path` with default arguments.
                /// This is only used const parameters. For non-const ones we have `_InOptMut_Path`.
                /// Usage:
                /// * Pass `null` to use the default argument.
                /// * Pass `new()` to pass no object.
                /// * Pass an instance of `Path`/`Const_Path` to pass it to the function.
                public class _InOptConst_Path
                {
                    public Const_Path? Opt;

                    public _InOptConst_Path() {}
                    public _InOptConst_Path(Const_Path value) {Opt = value;}
                    public static implicit operator _InOptConst_Path(Const_Path value) {return new(value);}

                    /// Constructs a new instance.
                    public static unsafe implicit operator _InOptConst_Path(string other) {return new Const_Path(other);}
                }
            }
        }
    }
}
