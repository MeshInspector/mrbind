public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// Stores 2 objects: `const int32_t`, `std::string`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_Tuple_ConstInt32T_StdString : MR.CS.Misc.Object<Const_Tuple_ConstInt32T_StdString>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_const_int32_t_std_string_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_tuple_const_int32_t_std_string_Destroy(_Underlying *_this);
                    __MR_C_std_tuple_const_int32_t_std_string_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Tuple_ConstInt32T_StdString() {Dispose(false);}

                internal unsafe Const_Tuple_ConstInt32T_StdString(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_Tuple_ConstInt32T_StdString() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_const_int32_t_std_string_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_ConstInt32T_StdString._Underlying *__MR_C_std_tuple_const_int32_t_std_string_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_tuple_const_int32_t_std_string_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Const_Tuple_ConstInt32T_StdString(MR.CS.Std._ByValue_Tuple_ConstInt32T_StdString other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_const_int32_t_std_string_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_ConstInt32T_StdString._Underlying *__MR_C_std_tuple_const_int32_t_std_string_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Tuple_ConstInt32T_StdString._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_tuple_const_int32_t_std_string_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Const_Tuple_ConstInt32T_StdString(Const_Tuple_ConstInt32T_StdString other) : this(new _ByValue_Tuple_ConstInt32T_StdString(other)) {}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Const_Tuple_ConstInt32T_StdString(Tuple_ConstInt32T_StdString other) : this((Const_Tuple_ConstInt32T_StdString)other) {}

                /// <summary>
                /// Constructs the tuple elementwise.
                /// </summary>
                public unsafe Const_Tuple_ConstInt32T_StdString(int _0, ReadOnlySpan<char> _1) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_const_int32_t_std_string_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_ConstInt32T_StdString._Underlying *__MR_C_std_tuple_const_int32_t_std_string_Construct(int _0, byte *_1, byte *_1_end);
                    byte[] __bytes__1 = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(_1.Length)];
                    int __len__1 = System.Text.Encoding.UTF8.GetBytes(_1, __bytes__1);
                    fixed (byte *__ptr__1 = __bytes__1)
                    {
                        _UnderlyingPtr = __MR_C_std_tuple_const_int32_t_std_string_Construct(_0, __ptr__1, __ptr__1 + __len__1);
                    }
                }

                /// <summary>
                /// The element 0, of type `const int32_t`, read-only.
                /// </summary>
                public unsafe int getConstInt32T()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_const_int32_t_std_string_get_const_int32_t", ExactSpelling = true)]
                    extern static int *__MR_C_std_tuple_const_int32_t_std_string_get_const_int32_t(_Underlying *_this);
                    return *__MR_C_std_tuple_const_int32_t_std_string_get_const_int32_t(_UnderlyingPtr);
                }

                /// <summary>
                /// The element 1, of type `std::string`, read-only.
                /// </summary>
                public unsafe MR.CS.Std.Const_String getStdString()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_const_int32_t_std_string_get_std_string", ExactSpelling = true)]
                    extern static MR.CS.Std.Const_String._Underlying *__MR_C_std_tuple_const_int32_t_std_string_get_std_string(_Underlying *_this);
                    MR.CS.Std.Const_String __ret;
                    __ret = new(__MR_C_std_tuple_const_int32_t_std_string_get_std_string(_UnderlyingPtr), is_owning: false);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                // Custom extras:

                public void Deconstruct(out int _1, out MR.CS.Std.Const_String _2)
                {
                    _1 = getConstInt32T();
                    _2 = getStdString();
                }
            }

            /// <summary>
            /// Stores 2 objects: `const int32_t`, `std::string`.
            /// This is the non-const half of the class.
            /// </summary>
            public class Tuple_ConstInt32T_StdString : Const_Tuple_ConstInt32T_StdString
            {
                internal unsafe Tuple_ConstInt32T_StdString(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Tuple_ConstInt32T_StdString() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_const_int32_t_std_string_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_ConstInt32T_StdString._Underlying *__MR_C_std_tuple_const_int32_t_std_string_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_tuple_const_int32_t_std_string_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Tuple_ConstInt32T_StdString(MR.CS.Std._ByValue_Tuple_ConstInt32T_StdString other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_const_int32_t_std_string_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_ConstInt32T_StdString._Underlying *__MR_C_std_tuple_const_int32_t_std_string_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Tuple_ConstInt32T_StdString._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_tuple_const_int32_t_std_string_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Tuple_ConstInt32T_StdString(Const_Tuple_ConstInt32T_StdString other) : this(new _ByValue_Tuple_ConstInt32T_StdString(other)) {}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Tuple_ConstInt32T_StdString(Tuple_ConstInt32T_StdString other) : this((Const_Tuple_ConstInt32T_StdString)other) {}

                /// <summary>
                /// Constructs the tuple elementwise.
                /// </summary>
                public unsafe Tuple_ConstInt32T_StdString(int _0, ReadOnlySpan<char> _1) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_const_int32_t_std_string_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_ConstInt32T_StdString._Underlying *__MR_C_std_tuple_const_int32_t_std_string_Construct(int _0, byte *_1, byte *_1_end);
                    byte[] __bytes__1 = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(_1.Length)];
                    int __len__1 = System.Text.Encoding.UTF8.GetBytes(_1, __bytes__1);
                    fixed (byte *__ptr__1 = __bytes__1)
                    {
                        _UnderlyingPtr = __MR_C_std_tuple_const_int32_t_std_string_Construct(_0, __ptr__1, __ptr__1 + __len__1);
                    }
                }

                /// <summary>
                /// The element 1, of type `std::string`, mutable.
                /// </summary>
                public unsafe new MR.CS.Std.String getStdString()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_const_int32_t_std_string_get_std_string_mut", ExactSpelling = true)]
                    extern static MR.CS.Std.String._Underlying *__MR_C_std_tuple_const_int32_t_std_string_get_std_string_mut(_Underlying *_this);
                    MR.CS.Std.String __ret;
                    __ret = new(__MR_C_std_tuple_const_int32_t_std_string_get_std_string_mut(_UnderlyingPtr), is_owning: false);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                // Custom extras:

                public void Deconstruct(out int _1, out MR.CS.Std.String _2)
                {
                    _1 = getConstInt32T();
                    _2 = getStdString();
                }
            }

            /// <summary>
            /// This is used as a function parameter when the underlying function receives `Tuple_ConstInt32T_StdString` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `Tuple_ConstInt32T_StdString`/`Const_Tuple_ConstInt32T_StdString` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            /// </summary>
            public class _ByValue_Tuple_ConstInt32T_StdString
            {
                internal readonly Const_Tuple_ConstInt32T_StdString? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_Tuple_ConstInt32T_StdString() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_Tuple_ConstInt32T_StdString(Const_Tuple_ConstInt32T_StdString new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_Tuple_ConstInt32T_StdString(Const_Tuple_ConstInt32T_StdString arg) {return new(arg);}
                public _ByValue_Tuple_ConstInt32T_StdString(MR.CS.Misc._Moved<Tuple_ConstInt32T_StdString> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_Tuple_ConstInt32T_StdString(MR.CS.Misc._Moved<Tuple_ConstInt32T_StdString> arg) {return new(arg);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Tuple_ConstInt32T_StdString` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Tuple_ConstInt32T_StdString`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Tuple_ConstInt32T_StdString`/`Const_Tuple_ConstInt32T_StdString` directly.
            /// </summary>
            public class _InOptMut_Tuple_ConstInt32T_StdString
            {
                public Tuple_ConstInt32T_StdString? Opt;

                public _InOptMut_Tuple_ConstInt32T_StdString() {}
                public _InOptMut_Tuple_ConstInt32T_StdString(Tuple_ConstInt32T_StdString value) {Opt = value;}
                public static implicit operator _InOptMut_Tuple_ConstInt32T_StdString(Tuple_ConstInt32T_StdString value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Tuple_ConstInt32T_StdString` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Tuple_ConstInt32T_StdString`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Tuple_ConstInt32T_StdString`/`Const_Tuple_ConstInt32T_StdString` to pass it to the function.
            /// </summary>
            public class _InOptConst_Tuple_ConstInt32T_StdString
            {
                public Const_Tuple_ConstInt32T_StdString? Opt;

                public _InOptConst_Tuple_ConstInt32T_StdString() {}
                public _InOptConst_Tuple_ConstInt32T_StdString(Const_Tuple_ConstInt32T_StdString value) {Opt = value;}
                public static implicit operator _InOptConst_Tuple_ConstInt32T_StdString(Const_Tuple_ConstInt32T_StdString value) {return new(value);}
            }
        }
    }
}
