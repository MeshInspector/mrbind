public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// Stores one of 3 objects: `int`, `float`, `std::string`.
            /// This is the const half of the class.
            public class Const_Variant_Int_Float_StdString : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_Variant_Int_Float_StdString(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int_float_std_string_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_variant_int_float_std_string_Destroy(_Underlying *_this);
                    __MR_C_std_variant_int_float_std_string_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Variant_Int_Float_StdString() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_Variant_Int_Float_StdString() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int_float_std_string_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Variant_Int_Float_StdString._Underlying *__MR_C_std_variant_int_float_std_string_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_variant_int_float_std_string_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Const_Variant_Int_Float_StdString(MR.CS.Std._ByValue_Variant_Int_Float_StdString other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int_float_std_string_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Variant_Int_Float_StdString._Underlying *__MR_C_std_variant_int_float_std_string_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Variant_Int_Float_StdString._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_variant_int_float_std_string_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// Returns the index of the stored element type. In rare cases may return -1 if this variant is "valueless by exception".
                public unsafe ulong Index()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int_float_std_string_Index", ExactSpelling = true)]
                    extern static ulong __MR_C_std_variant_int_float_std_string_Index(_Underlying *_this);
                    return __MR_C_std_variant_int_float_std_string_Index(_UnderlyingPtr);
                }

                /// Constructs the variant storing the element 0, of type `int`.
                public unsafe Const_Variant_Int_Float_StdString(int value, MR.CS.Std.VariantIndex_0 tag = default) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int_float_std_string_ConstructAs_int", ExactSpelling = true)]
                    extern static MR.CS.Std.Variant_Int_Float_StdString._Underlying *__MR_C_std_variant_int_float_std_string_ConstructAs_int(int value);
                    _UnderlyingPtr = __MR_C_std_variant_int_float_std_string_ConstructAs_int(value);
                }

                /// Constructs the variant storing the element 1, of type `float`.
                public unsafe Const_Variant_Int_Float_StdString(float value, MR.CS.Std.VariantIndex_1 tag = default) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int_float_std_string_ConstructAs_float", ExactSpelling = true)]
                    extern static MR.CS.Std.Variant_Int_Float_StdString._Underlying *__MR_C_std_variant_int_float_std_string_ConstructAs_float(float value);
                    _UnderlyingPtr = __MR_C_std_variant_int_float_std_string_ConstructAs_float(value);
                }

                /// Constructs the variant storing the element 2, of type `std::string`.
                public unsafe Const_Variant_Int_Float_StdString(ReadOnlySpan<char> value, MR.CS.Std.VariantIndex_2 tag = default) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int_float_std_string_ConstructAs_std_string", ExactSpelling = true)]
                    extern static MR.CS.Std.Variant_Int_Float_StdString._Underlying *__MR_C_std_variant_int_float_std_string_ConstructAs_std_string(byte *value, byte *value_end);
                    byte[] __bytes_value = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(value.Length)];
                    int __len_value = System.Text.Encoding.UTF8.GetBytes(value, __bytes_value);
                    fixed (byte *__ptr_value = __bytes_value)
                    {
                        _UnderlyingPtr = __MR_C_std_variant_int_float_std_string_ConstructAs_std_string(__ptr_value, __ptr_value + __len_value);
                    }
                }

                /// Returns the element 0, of type `int`, read-only. If it's not the active element, returns null.
                public unsafe int? GetInt()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int_float_std_string_Get_int", ExactSpelling = true)]
                    extern static int *__MR_C_std_variant_int_float_std_string_Get_int(_Underlying *_this);
                    var __ret = __MR_C_std_variant_int_float_std_string_Get_int(_UnderlyingPtr);
                    return __ret is not null ? *__ret : null;
                }

                /// Returns the element 1, of type `float`, read-only. If it's not the active element, returns null.
                public unsafe float? GetFloat()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int_float_std_string_Get_float", ExactSpelling = true)]
                    extern static float *__MR_C_std_variant_int_float_std_string_Get_float(_Underlying *_this);
                    var __ret = __MR_C_std_variant_int_float_std_string_Get_float(_UnderlyingPtr);
                    return __ret is not null ? *__ret : null;
                }

                /// Returns the element 2, of type `std::string`, read-only. If it's not the active element, returns null.
                public unsafe MR.CS.Std.Const_String? GetStdString()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int_float_std_string_Get_std_string", ExactSpelling = true)]
                    extern static MR.CS.Std.Const_String._Underlying *__MR_C_std_variant_int_float_std_string_Get_std_string(_Underlying *_this);
                    var __ret = __MR_C_std_variant_int_float_std_string_Get_std_string(_UnderlyingPtr);
                    return __ret is not null ? new MR.CS.Std.Const_String(__ret, is_owning: false) : null;
                }
            }

            /// Stores one of 3 objects: `int`, `float`, `std::string`.
            /// This is the non-const half of the class.
            public class Variant_Int_Float_StdString : Const_Variant_Int_Float_StdString
            {
                internal unsafe Variant_Int_Float_StdString(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Variant_Int_Float_StdString() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int_float_std_string_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Variant_Int_Float_StdString._Underlying *__MR_C_std_variant_int_float_std_string_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_variant_int_float_std_string_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Variant_Int_Float_StdString(MR.CS.Std._ByValue_Variant_Int_Float_StdString other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int_float_std_string_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Variant_Int_Float_StdString._Underlying *__MR_C_std_variant_int_float_std_string_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Variant_Int_Float_StdString._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_variant_int_float_std_string_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// Assigns the contents from another instance. Both objects remain alive after the call.
                public unsafe void Assign(MR.CS.Std._ByValue_Variant_Int_Float_StdString other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int_float_std_string_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_variant_int_float_std_string_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Variant_Int_Float_StdString._Underlying *other);
                    __MR_C_std_variant_int_float_std_string_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// Constructs the variant storing the element 0, of type `int`.
                public unsafe Variant_Int_Float_StdString(int value, MR.CS.Std.VariantIndex_0 tag = default) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int_float_std_string_ConstructAs_int", ExactSpelling = true)]
                    extern static MR.CS.Std.Variant_Int_Float_StdString._Underlying *__MR_C_std_variant_int_float_std_string_ConstructAs_int(int value);
                    _UnderlyingPtr = __MR_C_std_variant_int_float_std_string_ConstructAs_int(value);
                }

                /// Constructs the variant storing the element 1, of type `float`.
                public unsafe Variant_Int_Float_StdString(float value, MR.CS.Std.VariantIndex_1 tag = default) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int_float_std_string_ConstructAs_float", ExactSpelling = true)]
                    extern static MR.CS.Std.Variant_Int_Float_StdString._Underlying *__MR_C_std_variant_int_float_std_string_ConstructAs_float(float value);
                    _UnderlyingPtr = __MR_C_std_variant_int_float_std_string_ConstructAs_float(value);
                }

                /// Constructs the variant storing the element 2, of type `std::string`.
                public unsafe Variant_Int_Float_StdString(ReadOnlySpan<char> value, MR.CS.Std.VariantIndex_2 tag = default) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int_float_std_string_ConstructAs_std_string", ExactSpelling = true)]
                    extern static MR.CS.Std.Variant_Int_Float_StdString._Underlying *__MR_C_std_variant_int_float_std_string_ConstructAs_std_string(byte *value, byte *value_end);
                    byte[] __bytes_value = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(value.Length)];
                    int __len_value = System.Text.Encoding.UTF8.GetBytes(value, __bytes_value);
                    fixed (byte *__ptr_value = __bytes_value)
                    {
                        _UnderlyingPtr = __MR_C_std_variant_int_float_std_string_ConstructAs_std_string(__ptr_value, __ptr_value + __len_value);
                    }
                }

                /// Assigns to the variant, making it store the element 0, of type `int`.
                public unsafe void AssignAsInt(int value)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int_float_std_string_AssignAs_int", ExactSpelling = true)]
                    extern static void __MR_C_std_variant_int_float_std_string_AssignAs_int(_Underlying *_this, int value);
                    __MR_C_std_variant_int_float_std_string_AssignAs_int(_UnderlyingPtr, value);
                }

                /// Assigns to the variant, making it store the element 1, of type `float`.
                public unsafe void AssignAsFloat(float value)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int_float_std_string_AssignAs_float", ExactSpelling = true)]
                    extern static void __MR_C_std_variant_int_float_std_string_AssignAs_float(_Underlying *_this, float value);
                    __MR_C_std_variant_int_float_std_string_AssignAs_float(_UnderlyingPtr, value);
                }

                /// Assigns to the variant, making it store the element 2, of type `std::string`.
                public unsafe void AssignAsStdString(ReadOnlySpan<char> value)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int_float_std_string_AssignAs_std_string", ExactSpelling = true)]
                    extern static void __MR_C_std_variant_int_float_std_string_AssignAs_std_string(_Underlying *_this, byte *value, byte *value_end);
                    byte[] __bytes_value = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(value.Length)];
                    int __len_value = System.Text.Encoding.UTF8.GetBytes(value, __bytes_value);
                    fixed (byte *__ptr_value = __bytes_value)
                    {
                        __MR_C_std_variant_int_float_std_string_AssignAs_std_string(_UnderlyingPtr, __ptr_value, __ptr_value + __len_value);
                    }
                }

                /// Returns the element 0, of type `int`, mutable. If it's not the active element, returns null.
                public unsafe MR.CS.Misc.Ref<int>? GetMutableInt()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int_float_std_string_GetMutable_int", ExactSpelling = true)]
                    extern static int *__MR_C_std_variant_int_float_std_string_GetMutable_int(_Underlying *_this);
                    var __ret = __MR_C_std_variant_int_float_std_string_GetMutable_int(_UnderlyingPtr);
                    return __ret is not null ? new MR.CS.Misc.Ref<int>(__ret) : null;
                }

                /// Returns the element 1, of type `float`, mutable. If it's not the active element, returns null.
                public unsafe MR.CS.Misc.Ref<float>? GetMutableFloat()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int_float_std_string_GetMutable_float", ExactSpelling = true)]
                    extern static float *__MR_C_std_variant_int_float_std_string_GetMutable_float(_Underlying *_this);
                    var __ret = __MR_C_std_variant_int_float_std_string_GetMutable_float(_UnderlyingPtr);
                    return __ret is not null ? new MR.CS.Misc.Ref<float>(__ret) : null;
                }

                /// Returns the element 2, of type `std::string`, mutable. If it's not the active element, returns null.
                public unsafe MR.CS.Std.String? GetMutableStdString()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int_float_std_string_GetMutable_std_string", ExactSpelling = true)]
                    extern static MR.CS.Std.String._Underlying *__MR_C_std_variant_int_float_std_string_GetMutable_std_string(_Underlying *_this);
                    var __ret = __MR_C_std_variant_int_float_std_string_GetMutable_std_string(_UnderlyingPtr);
                    return __ret is not null ? new MR.CS.Std.String(__ret, is_owning: false) : null;
                }
            }

            /// This is used as a function parameter when the underlying function receives `Variant_Int_Float_StdString` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `Variant_Int_Float_StdString`/`Const_Variant_Int_Float_StdString` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            public class _ByValue_Variant_Int_Float_StdString
            {
                internal readonly Const_Variant_Int_Float_StdString? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_Variant_Int_Float_StdString() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_Variant_Int_Float_StdString(Const_Variant_Int_Float_StdString new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_Variant_Int_Float_StdString(Const_Variant_Int_Float_StdString arg) {return new(arg);}
                public _ByValue_Variant_Int_Float_StdString(MR.CS.Misc._Moved<Variant_Int_Float_StdString> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_Variant_Int_Float_StdString(MR.CS.Misc._Moved<Variant_Int_Float_StdString> arg) {return new(arg);}
            }

            /// This is used for optional parameters of class `Variant_Int_Float_StdString` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Variant_Int_Float_StdString`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Variant_Int_Float_StdString`/`Const_Variant_Int_Float_StdString` directly.
            public class _InOptMut_Variant_Int_Float_StdString
            {
                public Variant_Int_Float_StdString? Opt;

                public _InOptMut_Variant_Int_Float_StdString() {}
                public _InOptMut_Variant_Int_Float_StdString(Variant_Int_Float_StdString value) {Opt = value;}
                public static implicit operator _InOptMut_Variant_Int_Float_StdString(Variant_Int_Float_StdString value) {return new(value);}
            }

            /// This is used for optional parameters of class `Variant_Int_Float_StdString` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Variant_Int_Float_StdString`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Variant_Int_Float_StdString`/`Const_Variant_Int_Float_StdString` to pass it to the function.
            public class _InOptConst_Variant_Int_Float_StdString
            {
                public Const_Variant_Int_Float_StdString? Opt;

                public _InOptConst_Variant_Int_Float_StdString() {}
                public _InOptConst_Variant_Int_Float_StdString(Const_Variant_Int_Float_StdString value) {Opt = value;}
                public static implicit operator _InOptConst_Variant_Int_Float_StdString(Const_Variant_Int_Float_StdString value) {return new(value);}
            }
        }
    }
}
