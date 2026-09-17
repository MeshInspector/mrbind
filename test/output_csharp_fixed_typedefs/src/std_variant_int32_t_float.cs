public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// Stores one of 2 objects: `int32_t`, `float`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_Variant_Int32T_Float : MR.CS.Misc.Object<Const_Variant_Int32T_Float>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    __MR_C_std_variant_int32_t_float_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Variant_Int32T_Float() {Dispose(false);}

                internal unsafe Const_Variant_Int32T_Float(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_Variant_Int32T_Float() : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_C_std_variant_int32_t_float_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Const_Variant_Int32T_Float(MR.CS.Std.Const_Variant_Int32T_Float other) : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_C_std_variant_int32_t_float_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Const_Variant_Int32T_Float(Variant_Int32T_Float other) : this((Const_Variant_Int32T_Float)other) {}

                /// <summary>
                /// Returns the index of the stored element type. In rare cases may return -1 if this variant is &quot;valueless by exception&quot;.
                /// </summary>
                public unsafe nuint index()
                {
                    return __MR_C_std_variant_int32_t_float_index(_UnderlyingPtr);
                }

                /// <summary>
                /// Constructs the variant storing the element 0, of type `int32_t`.
                /// </summary>
                public unsafe Const_Variant_Int32T_Float(int value, MR.CS.Std.VariantIndex_0 tag = default) : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_C_std_variant_int32_t_float_ConstructAs_int32_t(value);
                }

                /// <summary>
                /// Constructs the variant storing the element 0, of type `int32_t`.
                /// </summary>
                public static unsafe implicit operator Const_Variant_Int32T_Float(int value) {return new(value);}

                /// <summary>
                /// Constructs the variant storing the element 1, of type `float`.
                /// </summary>
                public unsafe Const_Variant_Int32T_Float(float value, MR.CS.Std.VariantIndex_1 tag = default) : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_C_std_variant_int32_t_float_ConstructAs_float(value);
                }

                /// <summary>
                /// Constructs the variant storing the element 1, of type `float`.
                /// </summary>
                public static unsafe implicit operator Const_Variant_Int32T_Float(float value) {return new(value);}

                /// <summary>
                /// Returns the element 0, of type `int32_t`, read-only. If it&apos;s not the active element, returns null.
                /// </summary>
                public unsafe int? getInt32T()
                {
                    var __c_ret = __MR_C_std_variant_int32_t_float_get_int32_t(_UnderlyingPtr);
                    return __c_ret is not null ? *__c_ret : null;
                }

                /// <summary>
                /// Returns the element 1, of type `float`, read-only. If it&apos;s not the active element, returns null.
                /// </summary>
                public unsafe float? getFloat()
                {
                    var __c_ret = __MR_C_std_variant_int32_t_float_get_float(_UnderlyingPtr);
                    return __c_ret is not null ? *__c_ret : null;
                }

                // DllImport:

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int32_t_float_ConstructAs_float", ExactSpelling = true)]
                extern static unsafe MR.CS.Std.Variant_Int32T_Float._Underlying *__MR_C_std_variant_int32_t_float_ConstructAs_float(float value);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int32_t_float_ConstructAs_int32_t", ExactSpelling = true)]
                extern static unsafe MR.CS.Std.Variant_Int32T_Float._Underlying *__MR_C_std_variant_int32_t_float_ConstructAs_int32_t(int value);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int32_t_float_ConstructFromAnother", ExactSpelling = true)]
                extern static unsafe MR.CS.Std.Variant_Int32T_Float._Underlying *__MR_C_std_variant_int32_t_float_ConstructFromAnother(MR.CS.Std.Variant_Int32T_Float._Underlying *other);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int32_t_float_DefaultConstruct", ExactSpelling = true)]
                extern static unsafe MR.CS.Std.Variant_Int32T_Float._Underlying *__MR_C_std_variant_int32_t_float_DefaultConstruct();

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int32_t_float_Destroy", ExactSpelling = true)]
                extern static unsafe void __MR_C_std_variant_int32_t_float_Destroy(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int32_t_float_get_float", ExactSpelling = true)]
                extern static unsafe float *__MR_C_std_variant_int32_t_float_get_float(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int32_t_float_get_int32_t", ExactSpelling = true)]
                extern static unsafe int *__MR_C_std_variant_int32_t_float_get_int32_t(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int32_t_float_index", ExactSpelling = true)]
                extern static unsafe nuint __MR_C_std_variant_int32_t_float_index(_Underlying *_this);
            }

            /// <summary>
            /// Stores one of 2 objects: `int32_t`, `float`.
            /// This is the non-const half of the class.
            /// </summary>
            public class Variant_Int32T_Float : Const_Variant_Int32T_Float
            {
                internal unsafe Variant_Int32T_Float(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Variant_Int32T_Float() : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_C_std_variant_int32_t_float_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Variant_Int32T_Float(MR.CS.Std.Const_Variant_Int32T_Float other) : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_C_std_variant_int32_t_float_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Variant_Int32T_Float(Variant_Int32T_Float other) : this((Const_Variant_Int32T_Float)other) {}

                /// <summary>
                /// Assigns the contents from another instance. Both objects remain alive after the call.
                /// </summary>
                public unsafe void assign(MR.CS.Std.Const_Variant_Int32T_Float other)
                {
                    _DiscardKeepAlive();
                    _KeepAlive(other);
                    __MR_C_std_variant_int32_t_float_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                }

                /// <summary>
                /// Constructs the variant storing the element 0, of type `int32_t`.
                /// </summary>
                public unsafe Variant_Int32T_Float(int value, MR.CS.Std.VariantIndex_0 tag = default) : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_C_std_variant_int32_t_float_ConstructAs_int32_t(value);
                }

                /// <summary>
                /// Constructs the variant storing the element 0, of type `int32_t`.
                /// </summary>
                public static unsafe implicit operator Variant_Int32T_Float(int value) {return new(value);}

                /// <summary>
                /// Constructs the variant storing the element 1, of type `float`.
                /// </summary>
                public unsafe Variant_Int32T_Float(float value, MR.CS.Std.VariantIndex_1 tag = default) : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_C_std_variant_int32_t_float_ConstructAs_float(value);
                }

                /// <summary>
                /// Constructs the variant storing the element 1, of type `float`.
                /// </summary>
                public static unsafe implicit operator Variant_Int32T_Float(float value) {return new(value);}

                /// <summary>
                /// Assigns to the variant, making it store the element 0, of type `int32_t`.
                /// </summary>
                public unsafe void assignAsInt32T(int value)
                {
                    _DiscardKeepAlive();
                    __MR_C_std_variant_int32_t_float_AssignAs_int32_t(_UnderlyingPtr, value);
                }

                /// <summary>
                /// Assigns to the variant, making it store the element 1, of type `float`.
                /// </summary>
                public unsafe void assignAsFloat(float value)
                {
                    _DiscardKeepAlive();
                    __MR_C_std_variant_int32_t_float_AssignAs_float(_UnderlyingPtr, value);
                }

                /// <summary>
                /// Returns the element 0, of type `int32_t`, mutable. If it&apos;s not the active element, returns null.
                /// </summary>
                public unsafe new MR.CS.Misc.Ref<int>? getInt32T()
                {
                    var __c_ret = __MR_C_std_variant_int32_t_float_get_int32_t_mut(_UnderlyingPtr);
                    return __c_ret is not null ? new MR.CS.Misc.Ref<int>(__c_ret) : null;
                }

                /// <summary>
                /// Returns the element 1, of type `float`, mutable. If it&apos;s not the active element, returns null.
                /// </summary>
                public unsafe new MR.CS.Misc.Ref<float>? getFloat()
                {
                    var __c_ret = __MR_C_std_variant_int32_t_float_get_float_mut(_UnderlyingPtr);
                    return __c_ret is not null ? new MR.CS.Misc.Ref<float>(__c_ret) : null;
                }

                // DllImport:

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int32_t_float_AssignAs_float", ExactSpelling = true)]
                extern static unsafe void __MR_C_std_variant_int32_t_float_AssignAs_float(_Underlying *_this, float value);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int32_t_float_AssignAs_int32_t", ExactSpelling = true)]
                extern static unsafe void __MR_C_std_variant_int32_t_float_AssignAs_int32_t(_Underlying *_this, int value);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int32_t_float_AssignFromAnother", ExactSpelling = true)]
                extern static unsafe void __MR_C_std_variant_int32_t_float_AssignFromAnother(_Underlying *_this, MR.CS.Std.Variant_Int32T_Float._Underlying *other);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int32_t_float_ConstructAs_float", ExactSpelling = true)]
                extern static unsafe MR.CS.Std.Variant_Int32T_Float._Underlying *__MR_C_std_variant_int32_t_float_ConstructAs_float(float value);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int32_t_float_ConstructAs_int32_t", ExactSpelling = true)]
                extern static unsafe MR.CS.Std.Variant_Int32T_Float._Underlying *__MR_C_std_variant_int32_t_float_ConstructAs_int32_t(int value);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int32_t_float_ConstructFromAnother", ExactSpelling = true)]
                extern static unsafe MR.CS.Std.Variant_Int32T_Float._Underlying *__MR_C_std_variant_int32_t_float_ConstructFromAnother(MR.CS.Std.Variant_Int32T_Float._Underlying *other);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int32_t_float_DefaultConstruct", ExactSpelling = true)]
                extern static unsafe MR.CS.Std.Variant_Int32T_Float._Underlying *__MR_C_std_variant_int32_t_float_DefaultConstruct();

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int32_t_float_get_float_mut", ExactSpelling = true)]
                extern static unsafe float *__MR_C_std_variant_int32_t_float_get_float_mut(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_variant_int32_t_float_get_int32_t_mut", ExactSpelling = true)]
                extern static unsafe int *__MR_C_std_variant_int32_t_float_get_int32_t_mut(_Underlying *_this);
            }

            /// <summary>
            /// This is used for optional parameters of class `Variant_Int32T_Float` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Variant_Int32T_Float`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Variant_Int32T_Float`/`Const_Variant_Int32T_Float` directly.
            /// </summary>
            public class _InOptMut_Variant_Int32T_Float
            {
                public Variant_Int32T_Float? Opt;

                public _InOptMut_Variant_Int32T_Float() {}
                public _InOptMut_Variant_Int32T_Float(Variant_Int32T_Float value) {Opt = value;}
                public static implicit operator _InOptMut_Variant_Int32T_Float(Variant_Int32T_Float value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Variant_Int32T_Float` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Variant_Int32T_Float`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Variant_Int32T_Float`/`Const_Variant_Int32T_Float` to pass it to the function.
            /// </summary>
            public class _InOptConst_Variant_Int32T_Float
            {
                public Const_Variant_Int32T_Float? Opt;

                public _InOptConst_Variant_Int32T_Float() {}
                public _InOptConst_Variant_Int32T_Float(Const_Variant_Int32T_Float value) {Opt = value;}
                public static implicit operator _InOptConst_Variant_Int32T_Float(Const_Variant_Int32T_Float value) {return new(value);}

                /// <summary>
                /// Constructs the variant storing the element 0, of type `int32_t`.
                /// </summary>
                public static unsafe implicit operator _InOptConst_Variant_Int32T_Float(int value) {return new Const_Variant_Int32T_Float(value);}

                /// <summary>
                /// Constructs the variant storing the element 1, of type `float`.
                /// </summary>
                public static unsafe implicit operator _InOptConst_Variant_Int32T_Float(float value) {return new Const_Variant_Int32T_Float(value);}
            }
        }
    }
}
