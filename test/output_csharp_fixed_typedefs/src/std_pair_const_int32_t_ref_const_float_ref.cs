public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// Stores two objects: `const int32_t &` and `const int32_t &`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_Pair_ConstInt32TRef_ConstFloatRef : MR.CS.Misc.Object<Const_Pair_ConstInt32TRef_ConstFloatRef>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_const_int32_t_ref_const_float_ref_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_pair_const_int32_t_ref_const_float_ref_Destroy(_Underlying *_this);
                    __MR_C_std_pair_const_int32_t_ref_const_float_ref_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Pair_ConstInt32TRef_ConstFloatRef() {Dispose(false);}

                internal unsafe Const_Pair_ConstInt32TRef_ConstFloatRef(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Const_Pair_ConstInt32TRef_ConstFloatRef(MR.CS.Std.Const_Pair_ConstInt32TRef_ConstFloatRef other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_const_int32_t_ref_const_float_ref_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Pair_ConstInt32TRef_ConstFloatRef._Underlying *__MR_C_std_pair_const_int32_t_ref_const_float_ref_ConstructFromAnother(MR.CS.Std.Pair_ConstInt32TRef_ConstFloatRef._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_pair_const_int32_t_ref_const_float_ref_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Const_Pair_ConstInt32TRef_ConstFloatRef(Pair_ConstInt32TRef_ConstFloatRef other) : this((Const_Pair_ConstInt32TRef_ConstFloatRef)other) {}

                /// <summary>
                /// Constructs the pair elementwise.
                /// </summary>
                public unsafe Const_Pair_ConstInt32TRef_ConstFloatRef(int first, float second) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_const_int32_t_ref_const_float_ref_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.Pair_ConstInt32TRef_ConstFloatRef._Underlying *__MR_C_std_pair_const_int32_t_ref_const_float_ref_Construct(int *first, float *second);
                    _UnderlyingPtr = __MR_C_std_pair_const_int32_t_ref_const_float_ref_Construct(&first, &second);
                }

                /// <summary>
                /// The first of the two elements, read-only.
                /// </summary>
                public unsafe int first()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_const_int32_t_ref_const_float_ref_first", ExactSpelling = true)]
                    extern static int *__MR_C_std_pair_const_int32_t_ref_const_float_ref_first(_Underlying *_this);
                    return *__MR_C_std_pair_const_int32_t_ref_const_float_ref_first(_UnderlyingPtr);
                }

                /// <summary>
                /// The second of the two elements, read-only.
                /// </summary>
                public unsafe float second()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_const_int32_t_ref_const_float_ref_second", ExactSpelling = true)]
                    extern static float *__MR_C_std_pair_const_int32_t_ref_const_float_ref_second(_Underlying *_this);
                    return *__MR_C_std_pair_const_int32_t_ref_const_float_ref_second(_UnderlyingPtr);
                }
            }

            /// <summary>
            /// Stores two objects: `const int32_t &` and `const int32_t &`.
            /// This is the non-const half of the class.
            /// </summary>
            public class Pair_ConstInt32TRef_ConstFloatRef : Const_Pair_ConstInt32TRef_ConstFloatRef
            {
                internal unsafe Pair_ConstInt32TRef_ConstFloatRef(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Pair_ConstInt32TRef_ConstFloatRef(MR.CS.Std.Const_Pair_ConstInt32TRef_ConstFloatRef other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_const_int32_t_ref_const_float_ref_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Pair_ConstInt32TRef_ConstFloatRef._Underlying *__MR_C_std_pair_const_int32_t_ref_const_float_ref_ConstructFromAnother(MR.CS.Std.Pair_ConstInt32TRef_ConstFloatRef._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_pair_const_int32_t_ref_const_float_ref_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Pair_ConstInt32TRef_ConstFloatRef(Pair_ConstInt32TRef_ConstFloatRef other) : this((Const_Pair_ConstInt32TRef_ConstFloatRef)other) {}

                /// <summary>
                /// Constructs the pair elementwise.
                /// </summary>
                public unsafe Pair_ConstInt32TRef_ConstFloatRef(int first, float second) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_const_int32_t_ref_const_float_ref_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.Pair_ConstInt32TRef_ConstFloatRef._Underlying *__MR_C_std_pair_const_int32_t_ref_const_float_ref_Construct(int *first, float *second);
                    _UnderlyingPtr = __MR_C_std_pair_const_int32_t_ref_const_float_ref_Construct(&first, &second);
                }
            }

            /// <summary>
            /// This is used for optional parameters of class `Pair_ConstInt32TRef_ConstFloatRef` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Pair_ConstInt32TRef_ConstFloatRef`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Pair_ConstInt32TRef_ConstFloatRef`/`Const_Pair_ConstInt32TRef_ConstFloatRef` directly.
            /// </summary>
            public class _InOptMut_Pair_ConstInt32TRef_ConstFloatRef
            {
                public Pair_ConstInt32TRef_ConstFloatRef? Opt;

                public _InOptMut_Pair_ConstInt32TRef_ConstFloatRef() {}
                public _InOptMut_Pair_ConstInt32TRef_ConstFloatRef(Pair_ConstInt32TRef_ConstFloatRef value) {Opt = value;}
                public static implicit operator _InOptMut_Pair_ConstInt32TRef_ConstFloatRef(Pair_ConstInt32TRef_ConstFloatRef value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Pair_ConstInt32TRef_ConstFloatRef` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Pair_ConstInt32TRef_ConstFloatRef`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Pair_ConstInt32TRef_ConstFloatRef`/`Const_Pair_ConstInt32TRef_ConstFloatRef` to pass it to the function.
            /// </summary>
            public class _InOptConst_Pair_ConstInt32TRef_ConstFloatRef
            {
                public Const_Pair_ConstInt32TRef_ConstFloatRef? Opt;

                public _InOptConst_Pair_ConstInt32TRef_ConstFloatRef() {}
                public _InOptConst_Pair_ConstInt32TRef_ConstFloatRef(Const_Pair_ConstInt32TRef_ConstFloatRef value) {Opt = value;}
                public static implicit operator _InOptConst_Pair_ConstInt32TRef_ConstFloatRef(Const_Pair_ConstInt32TRef_ConstFloatRef value) {return new(value);}
            }
        }
    }
}
