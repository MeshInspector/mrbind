public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// Stores two objects: `int` and `int`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_Pair_Int_StdString : MR.CS.Misc.Object<Const_Pair_Int_StdString>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_int_std_string_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_pair_int_std_string_Destroy(_Underlying *_this);
                    __MR_C_std_pair_int_std_string_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Pair_Int_StdString() {Dispose(false);}

                internal unsafe Const_Pair_Int_StdString(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_Pair_Int_StdString() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_int_std_string_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Pair_Int_StdString._Underlying *__MR_C_std_pair_int_std_string_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_pair_int_std_string_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Const_Pair_Int_StdString(MR.CS.Std._ByValue_Pair_Int_StdString other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_int_std_string_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Pair_Int_StdString._Underlying *__MR_C_std_pair_int_std_string_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Pair_Int_StdString._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_pair_int_std_string_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Const_Pair_Int_StdString(Const_Pair_Int_StdString other) : this(new _ByValue_Pair_Int_StdString(other)) {}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Const_Pair_Int_StdString(Pair_Int_StdString other) : this((Const_Pair_Int_StdString)other) {}

                /// <summary>
                /// Constructs the pair elementwise.
                /// </summary>
                public unsafe Const_Pair_Int_StdString(int first, ReadOnlySpan<char> second) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_int_std_string_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.Pair_Int_StdString._Underlying *__MR_C_std_pair_int_std_string_Construct(int first, byte *second, byte *second_end);
                    byte[] __bytes_second = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(second.Length)];
                    int __len_second = System.Text.Encoding.UTF8.GetBytes(second, __bytes_second);
                    fixed (byte *__ptr_second = __bytes_second)
                    {
                        _UnderlyingPtr = __MR_C_std_pair_int_std_string_Construct(first, __ptr_second, __ptr_second + __len_second);
                    }
                }

                /// <summary>
                /// The first of the two elements, read-only.
                /// </summary>
                public unsafe int first()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_int_std_string_first", ExactSpelling = true)]
                    extern static int *__MR_C_std_pair_int_std_string_first(_Underlying *_this);
                    return *__MR_C_std_pair_int_std_string_first(_UnderlyingPtr);
                }

                /// <summary>
                /// The second of the two elements, read-only.
                /// </summary>
                public unsafe MR.CS.Std.Const_String second()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_int_std_string_second", ExactSpelling = true)]
                    extern static MR.CS.Std.Const_String._Underlying *__MR_C_std_pair_int_std_string_second(_Underlying *_this);
                    MR.CS.Std.Const_String __ret;
                    __ret = new(__MR_C_std_pair_int_std_string_second(_UnderlyingPtr), is_owning: false);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                // Custom extras:

                public void Deconstruct(out int _1, out MR.CS.Std.Const_String _2)
                {
                    _1 = first();
                    _2 = second();
                }
            }

            /// <summary>
            /// Stores two objects: `int` and `int`.
            /// This is the non-const half of the class.
            /// </summary>
            public class Pair_Int_StdString : Const_Pair_Int_StdString
            {
                internal unsafe Pair_Int_StdString(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Pair_Int_StdString() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_int_std_string_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Pair_Int_StdString._Underlying *__MR_C_std_pair_int_std_string_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_pair_int_std_string_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Pair_Int_StdString(MR.CS.Std._ByValue_Pair_Int_StdString other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_int_std_string_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Pair_Int_StdString._Underlying *__MR_C_std_pair_int_std_string_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Pair_Int_StdString._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_pair_int_std_string_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Pair_Int_StdString(Const_Pair_Int_StdString other) : this(new _ByValue_Pair_Int_StdString(other)) {}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Pair_Int_StdString(Pair_Int_StdString other) : this((Const_Pair_Int_StdString)other) {}

                /// <summary>
                /// Assigns the contents from another instance. Both objects remain alive after the call.
                /// </summary>
                public unsafe void assign(MR.CS.Std._ByValue_Pair_Int_StdString other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_int_std_string_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_pair_int_std_string_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Pair_Int_StdString._Underlying *other);
                    _DiscardKeepAlive();
                    if (other.Value is not null) _KeepAlive(other.Value);
                    __MR_C_std_pair_int_std_string_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// <summary>
                /// Constructs the pair elementwise.
                /// </summary>
                public unsafe Pair_Int_StdString(int first, ReadOnlySpan<char> second) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_int_std_string_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.Pair_Int_StdString._Underlying *__MR_C_std_pair_int_std_string_Construct(int first, byte *second, byte *second_end);
                    byte[] __bytes_second = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(second.Length)];
                    int __len_second = System.Text.Encoding.UTF8.GetBytes(second, __bytes_second);
                    fixed (byte *__ptr_second = __bytes_second)
                    {
                        _UnderlyingPtr = __MR_C_std_pair_int_std_string_Construct(first, __ptr_second, __ptr_second + __len_second);
                    }
                }

                /// <summary>
                /// The first of the two elements, mutable.
                /// </summary>
                public unsafe new ref int first()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_int_std_string_first_mut", ExactSpelling = true)]
                    extern static int *__MR_C_std_pair_int_std_string_first_mut(_Underlying *_this);
                    return ref *__MR_C_std_pair_int_std_string_first_mut(_UnderlyingPtr);
                }

                /// <summary>
                /// The second of the two elements, mutable.
                /// </summary>
                public unsafe new MR.CS.Std.String second()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_int_std_string_second_mut", ExactSpelling = true)]
                    extern static MR.CS.Std.String._Underlying *__MR_C_std_pair_int_std_string_second_mut(_Underlying *_this);
                    MR.CS.Std.String __ret;
                    __ret = new(__MR_C_std_pair_int_std_string_second_mut(_UnderlyingPtr), is_owning: false);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                // Custom extras:

                public void Deconstruct(out MR.CS.Misc.Ref<int> _1, out MR.CS.Std.String _2)
                {
                    _1 = new(ref first());
                    _2 = second();
                }
            }

            /// <summary>
            /// This is used as a function parameter when the underlying function receives `Pair_Int_StdString` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `Pair_Int_StdString`/`Const_Pair_Int_StdString` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            /// </summary>
            public class _ByValue_Pair_Int_StdString
            {
                internal readonly Const_Pair_Int_StdString? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_Pair_Int_StdString() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_Pair_Int_StdString(Const_Pair_Int_StdString new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_Pair_Int_StdString(Const_Pair_Int_StdString arg) {return new(arg);}
                public _ByValue_Pair_Int_StdString(MR.CS.Misc._Moved<Pair_Int_StdString> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_Pair_Int_StdString(MR.CS.Misc._Moved<Pair_Int_StdString> arg) {return new(arg);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Pair_Int_StdString` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Pair_Int_StdString`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Pair_Int_StdString`/`Const_Pair_Int_StdString` directly.
            /// </summary>
            public class _InOptMut_Pair_Int_StdString
            {
                public Pair_Int_StdString? Opt;

                public _InOptMut_Pair_Int_StdString() {}
                public _InOptMut_Pair_Int_StdString(Pair_Int_StdString value) {Opt = value;}
                public static implicit operator _InOptMut_Pair_Int_StdString(Pair_Int_StdString value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Pair_Int_StdString` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Pair_Int_StdString`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Pair_Int_StdString`/`Const_Pair_Int_StdString` to pass it to the function.
            /// </summary>
            public class _InOptConst_Pair_Int_StdString
            {
                public Const_Pair_Int_StdString? Opt;

                public _InOptConst_Pair_Int_StdString() {}
                public _InOptConst_Pair_Int_StdString(Const_Pair_Int_StdString value) {Opt = value;}
                public static implicit operator _InOptConst_Pair_Int_StdString(Const_Pair_Int_StdString value) {return new(value);}
            }
        }
    }
}
