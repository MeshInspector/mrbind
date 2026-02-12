public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// Stores 2 objects: `int`, `std::string`.
            /// This is the const half of the class.
            public class Const_Tuple_Int_StdString : MR.CS.Misc.Object<Const_Tuple_Int_StdString>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_int_std_string_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_tuple_int_std_string_Destroy(_Underlying *_this);
                    __MR_C_std_tuple_int_std_string_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Tuple_Int_StdString() {Dispose(false);}

                internal unsafe Const_Tuple_Int_StdString(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_Tuple_Int_StdString() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_int_std_string_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_Int_StdString._Underlying *__MR_C_std_tuple_int_std_string_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_tuple_int_std_string_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Const_Tuple_Int_StdString(MR.CS.Std._ByValue_Tuple_Int_StdString other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_int_std_string_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_Int_StdString._Underlying *__MR_C_std_tuple_int_std_string_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Tuple_Int_StdString._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_tuple_int_std_string_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// Constructs a copy of another instance. The source remains alive.
                public Const_Tuple_Int_StdString(Const_Tuple_Int_StdString other) : this(new _ByValue_Tuple_Int_StdString(other)) {}

                /// Constructs a copy of another instance. The source remains alive.
                public Const_Tuple_Int_StdString(Tuple_Int_StdString other) : this((Const_Tuple_Int_StdString)other) {}

                /// Constructs the tuple elementwise.
                public unsafe Const_Tuple_Int_StdString(int _0, string _1) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_int_std_string_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_Int_StdString._Underlying *__MR_C_std_tuple_int_std_string_Construct(int _0, byte *_1, byte *_1_end);
                    byte[] __bytes__1 = System.Text.Encoding.UTF8.GetBytes(_1);
                    fixed (byte *__ptr__1 = __bytes__1)
                    {
                        _UnderlyingPtr = __MR_C_std_tuple_int_std_string_Construct(_0, __ptr__1, __ptr__1 + __bytes__1.Length);
                    }
                }

                /// The element 0, of type `int`, read-only.
                public unsafe int GetInt()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_int_std_string_get_int", ExactSpelling = true)]
                    extern static int *__MR_C_std_tuple_int_std_string_get_int(_Underlying *_this);
                    return *__MR_C_std_tuple_int_std_string_get_int(_UnderlyingPtr);
                }

                /// The element 1, of type `std::string`, read-only.
                public unsafe MR.CS.Std.Const_String GetStdString()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_int_std_string_get_std_string", ExactSpelling = true)]
                    extern static MR.CS.Std.Const_String._Underlying *__MR_C_std_tuple_int_std_string_get_std_string(_Underlying *_this);
                    MR.CS.Std.Const_String __ret;
                    __ret = new(__MR_C_std_tuple_int_std_string_get_std_string(_UnderlyingPtr), is_owning: false);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                // Custom extras:

                public void Deconstruct(out int _1, out MR.CS.Std.Const_String _2)
                {
                    _1 = GetInt();
                    _2 = GetStdString();
                }
            }

            /// Stores 2 objects: `int`, `std::string`.
            /// This is the non-const half of the class.
            public class Tuple_Int_StdString : Const_Tuple_Int_StdString
            {
                internal unsafe Tuple_Int_StdString(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Tuple_Int_StdString() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_int_std_string_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_Int_StdString._Underlying *__MR_C_std_tuple_int_std_string_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_tuple_int_std_string_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Tuple_Int_StdString(MR.CS.Std._ByValue_Tuple_Int_StdString other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_int_std_string_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_Int_StdString._Underlying *__MR_C_std_tuple_int_std_string_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Tuple_Int_StdString._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_tuple_int_std_string_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                }

                /// Constructs a copy of another instance. The source remains alive.
                public Tuple_Int_StdString(Const_Tuple_Int_StdString other) : this(new _ByValue_Tuple_Int_StdString(other)) {}

                /// Constructs a copy of another instance. The source remains alive.
                public Tuple_Int_StdString(Tuple_Int_StdString other) : this((Const_Tuple_Int_StdString)other) {}

                /// Assigns the contents from another instance. Both objects remain alive after the call.
                public unsafe void Assign(MR.CS.Std._ByValue_Tuple_Int_StdString other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_int_std_string_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_tuple_int_std_string_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Tuple_Int_StdString._Underlying *other);
                    _DiscardKeepAlive();
                    if (other.Value is not null) _KeepAlive(other.Value);
                    __MR_C_std_tuple_int_std_string_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// Constructs the tuple elementwise.
                public unsafe Tuple_Int_StdString(int _0, string _1) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_int_std_string_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_Int_StdString._Underlying *__MR_C_std_tuple_int_std_string_Construct(int _0, byte *_1, byte *_1_end);
                    byte[] __bytes__1 = System.Text.Encoding.UTF8.GetBytes(_1);
                    fixed (byte *__ptr__1 = __bytes__1)
                    {
                        _UnderlyingPtr = __MR_C_std_tuple_int_std_string_Construct(_0, __ptr__1, __ptr__1 + __bytes__1.Length);
                    }
                }

                /// The element 0, of type `int`, mutable.
                public unsafe new ref int GetInt()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_int_std_string_get_int_mut", ExactSpelling = true)]
                    extern static int *__MR_C_std_tuple_int_std_string_get_int_mut(_Underlying *_this);
                    return ref *__MR_C_std_tuple_int_std_string_get_int_mut(_UnderlyingPtr);
                }

                /// The element 1, of type `std::string`, mutable.
                public unsafe new MR.CS.Std.String GetStdString()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_int_std_string_get_std_string_mut", ExactSpelling = true)]
                    extern static MR.CS.Std.String._Underlying *__MR_C_std_tuple_int_std_string_get_std_string_mut(_Underlying *_this);
                    MR.CS.Std.String __ret;
                    __ret = new(__MR_C_std_tuple_int_std_string_get_std_string_mut(_UnderlyingPtr), is_owning: false);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                // Custom extras:

                public void Deconstruct(out MR.CS.Misc.Ref<int> _1, out MR.CS.Std.String _2)
                {
                    _1 = new(ref GetInt());
                    _2 = GetStdString();
                }
            }

            /// This is used as a function parameter when the underlying function receives `Tuple_Int_StdString` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `Tuple_Int_StdString`/`Const_Tuple_Int_StdString` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            public class _ByValue_Tuple_Int_StdString
            {
                internal readonly Const_Tuple_Int_StdString? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_Tuple_Int_StdString() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_Tuple_Int_StdString(Const_Tuple_Int_StdString new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_Tuple_Int_StdString(Const_Tuple_Int_StdString arg) {return new(arg);}
                public _ByValue_Tuple_Int_StdString(MR.CS.Misc._Moved<Tuple_Int_StdString> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_Tuple_Int_StdString(MR.CS.Misc._Moved<Tuple_Int_StdString> arg) {return new(arg);}
            }

            /// This is used for optional parameters of class `Tuple_Int_StdString` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Tuple_Int_StdString`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Tuple_Int_StdString`/`Const_Tuple_Int_StdString` directly.
            public class _InOptMut_Tuple_Int_StdString
            {
                public Tuple_Int_StdString? Opt;

                public _InOptMut_Tuple_Int_StdString() {}
                public _InOptMut_Tuple_Int_StdString(Tuple_Int_StdString value) {Opt = value;}
                public static implicit operator _InOptMut_Tuple_Int_StdString(Tuple_Int_StdString value) {return new(value);}
            }

            /// This is used for optional parameters of class `Tuple_Int_StdString` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Tuple_Int_StdString`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Tuple_Int_StdString`/`Const_Tuple_Int_StdString` to pass it to the function.
            public class _InOptConst_Tuple_Int_StdString
            {
                public Const_Tuple_Int_StdString? Opt;

                public _InOptConst_Tuple_Int_StdString() {}
                public _InOptConst_Tuple_Int_StdString(Const_Tuple_Int_StdString value) {Opt = value;}
                public static implicit operator _InOptConst_Tuple_Int_StdString(Const_Tuple_Int_StdString value) {return new(value);}
            }
        }
    }
}
