public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// Stores one of 2 objects: `int`, `float`.
            /// This is the const half of the class.
            public class Const_Variant_Int_Float : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_Variant_Int_Float(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int_float_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_variant_int_float_Destroy(_Underlying *_this);
                    __MR_C_std_variant_int_float_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Variant_Int_Float() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_Variant_Int_Float() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int_float_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Variant_Int_Float._Underlying *__MR_C_std_variant_int_float_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_variant_int_float_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Const_Variant_Int_Float(MR.CS.Std.Const_Variant_Int_Float other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int_float_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Variant_Int_Float._Underlying *__MR_C_std_variant_int_float_ConstructFromAnother(MR.CS.Std.Variant_Int_Float._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_variant_int_float_ConstructFromAnother(other._UnderlyingPtr);
                }

                /// Returns the index of the stored element type. In rare cases may return -1 if this variant is "valueless by exception".
                public unsafe ulong Index()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int_float_Index", ExactSpelling = true)]
                    extern static ulong __MR_C_std_variant_int_float_Index(_Underlying *_this);
                    return __MR_C_std_variant_int_float_Index(_UnderlyingPtr);
                }

                /// Constructs the variant storing the element 0, of type `int`.
                public unsafe Const_Variant_Int_Float(int value, MR.CS.Std.VariantIndex_0 tag = default) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int_float_ConstructAs_int", ExactSpelling = true)]
                    extern static MR.CS.Std.Variant_Int_Float._Underlying *__MR_C_std_variant_int_float_ConstructAs_int(int value);
                    _UnderlyingPtr = __MR_C_std_variant_int_float_ConstructAs_int(value);
                }

                /// Constructs the variant storing the element 1, of type `float`.
                public unsafe Const_Variant_Int_Float(float value, MR.CS.Std.VariantIndex_1 tag = default) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int_float_ConstructAs_float", ExactSpelling = true)]
                    extern static MR.CS.Std.Variant_Int_Float._Underlying *__MR_C_std_variant_int_float_ConstructAs_float(float value);
                    _UnderlyingPtr = __MR_C_std_variant_int_float_ConstructAs_float(value);
                }

                /// Returns the element 0, of type `int`, read-only. If it's not the active element, returns null.
                public unsafe int? GetInt()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int_float_Get_int", ExactSpelling = true)]
                    extern static int *__MR_C_std_variant_int_float_Get_int(_Underlying *_this);
                    var __ret = __MR_C_std_variant_int_float_Get_int(_UnderlyingPtr);
                    return __ret is not null ? *__ret : null;
                }

                /// Returns the element 1, of type `float`, read-only. If it's not the active element, returns null.
                public unsafe float? GetFloat()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int_float_Get_float", ExactSpelling = true)]
                    extern static float *__MR_C_std_variant_int_float_Get_float(_Underlying *_this);
                    var __ret = __MR_C_std_variant_int_float_Get_float(_UnderlyingPtr);
                    return __ret is not null ? *__ret : null;
                }
            }

            /// Stores one of 2 objects: `int`, `float`.
            /// This is the non-const half of the class.
            public class Variant_Int_Float : Const_Variant_Int_Float
            {
                internal unsafe Variant_Int_Float(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Variant_Int_Float() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int_float_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Variant_Int_Float._Underlying *__MR_C_std_variant_int_float_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_variant_int_float_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Variant_Int_Float(MR.CS.Std.Const_Variant_Int_Float other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int_float_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Variant_Int_Float._Underlying *__MR_C_std_variant_int_float_ConstructFromAnother(MR.CS.Std.Variant_Int_Float._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_variant_int_float_ConstructFromAnother(other._UnderlyingPtr);
                }

                /// Assigns the contents from another instance. Both objects remain alive after the call.
                public unsafe void Assign(MR.CS.Std.Const_Variant_Int_Float other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int_float_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_variant_int_float_AssignFromAnother(_Underlying *_this, MR.CS.Std.Variant_Int_Float._Underlying *other);
                    __MR_C_std_variant_int_float_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                }

                /// Constructs the variant storing the element 0, of type `int`.
                public unsafe Variant_Int_Float(int value, MR.CS.Std.VariantIndex_0 tag = default) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int_float_ConstructAs_int", ExactSpelling = true)]
                    extern static MR.CS.Std.Variant_Int_Float._Underlying *__MR_C_std_variant_int_float_ConstructAs_int(int value);
                    _UnderlyingPtr = __MR_C_std_variant_int_float_ConstructAs_int(value);
                }

                /// Constructs the variant storing the element 1, of type `float`.
                public unsafe Variant_Int_Float(float value, MR.CS.Std.VariantIndex_1 tag = default) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int_float_ConstructAs_float", ExactSpelling = true)]
                    extern static MR.CS.Std.Variant_Int_Float._Underlying *__MR_C_std_variant_int_float_ConstructAs_float(float value);
                    _UnderlyingPtr = __MR_C_std_variant_int_float_ConstructAs_float(value);
                }

                /// Assigns to the variant, making it store the element 0, of type `int`.
                public unsafe void AssignAsInt(int value)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int_float_AssignAs_int", ExactSpelling = true)]
                    extern static void __MR_C_std_variant_int_float_AssignAs_int(_Underlying *_this, int value);
                    __MR_C_std_variant_int_float_AssignAs_int(_UnderlyingPtr, value);
                }

                /// Assigns to the variant, making it store the element 1, of type `float`.
                public unsafe void AssignAsFloat(float value)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int_float_AssignAs_float", ExactSpelling = true)]
                    extern static void __MR_C_std_variant_int_float_AssignAs_float(_Underlying *_this, float value);
                    __MR_C_std_variant_int_float_AssignAs_float(_UnderlyingPtr, value);
                }

                /// Returns the element 0, of type `int`, mutable. If it's not the active element, returns null.
                public unsafe new MR.CS.Misc.Ref<int>? GetInt()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int_float_GetMutable_int", ExactSpelling = true)]
                    extern static int *__MR_C_std_variant_int_float_GetMutable_int(_Underlying *_this);
                    var __ret = __MR_C_std_variant_int_float_GetMutable_int(_UnderlyingPtr);
                    return __ret is not null ? new MR.CS.Misc.Ref<int>(__ret) : null;
                }

                /// Returns the element 1, of type `float`, mutable. If it's not the active element, returns null.
                public unsafe new MR.CS.Misc.Ref<float>? GetFloat()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int_float_GetMutable_float", ExactSpelling = true)]
                    extern static float *__MR_C_std_variant_int_float_GetMutable_float(_Underlying *_this);
                    var __ret = __MR_C_std_variant_int_float_GetMutable_float(_UnderlyingPtr);
                    return __ret is not null ? new MR.CS.Misc.Ref<float>(__ret) : null;
                }
            }

            /// This is used for optional parameters of class `Variant_Int_Float` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Variant_Int_Float`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Variant_Int_Float`/`Const_Variant_Int_Float` directly.
            public class _InOptMut_Variant_Int_Float
            {
                public Variant_Int_Float? Opt;

                public _InOptMut_Variant_Int_Float() {}
                public _InOptMut_Variant_Int_Float(Variant_Int_Float value) {Opt = value;}
                public static implicit operator _InOptMut_Variant_Int_Float(Variant_Int_Float value) {return new(value);}
            }

            /// This is used for optional parameters of class `Variant_Int_Float` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Variant_Int_Float`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Variant_Int_Float`/`Const_Variant_Int_Float` to pass it to the function.
            public class _InOptConst_Variant_Int_Float
            {
                public Const_Variant_Int_Float? Opt;

                public _InOptConst_Variant_Int_Float() {}
                public _InOptConst_Variant_Int_Float(Const_Variant_Int_Float value) {Opt = value;}
                public static implicit operator _InOptConst_Variant_Int_Float(Const_Variant_Int_Float value) {return new(value);}
            }
        }
    }
}
