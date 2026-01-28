public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// Stores two objects: `int &` and `int &`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_Pair_IntRef_FloatRef : MR.CS.Misc.Object<Const_Pair_IntRef_FloatRef>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_int_ref_float_ref_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_pair_int_ref_float_ref_Destroy(_Underlying *_this);
                    __MR_C_std_pair_int_ref_float_ref_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Pair_IntRef_FloatRef() {Dispose(false);}

                internal unsafe Const_Pair_IntRef_FloatRef(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Constructs the pair elementwise.
                /// </summary>
                public unsafe Const_Pair_IntRef_FloatRef(ref int first, ref float second) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_int_ref_float_ref_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.Pair_IntRef_FloatRef._Underlying *__MR_C_std_pair_int_ref_float_ref_Construct(int *first, float *second);
                    fixed (int *__ptr_first = &first)
                    {
                        fixed (float *__ptr_second = &second)
                        {
                            _UnderlyingPtr = __MR_C_std_pair_int_ref_float_ref_Construct(__ptr_first, __ptr_second);
                        }
                    }
                }

                /// <summary>
                /// The first of the two elements, read-only.
                /// </summary>
                public unsafe ref int first()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_int_ref_float_ref_First", ExactSpelling = true)]
                    extern static int *__MR_C_std_pair_int_ref_float_ref_First(_Underlying *_this);
                    return ref *__MR_C_std_pair_int_ref_float_ref_First(_UnderlyingPtr);
                }

                /// <summary>
                /// The second of the two elements, read-only.
                /// </summary>
                public unsafe ref float second()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_int_ref_float_ref_Second", ExactSpelling = true)]
                    extern static float *__MR_C_std_pair_int_ref_float_ref_Second(_Underlying *_this);
                    return ref *__MR_C_std_pair_int_ref_float_ref_Second(_UnderlyingPtr);
                }
            }

            /// <summary>
            /// Stores two objects: `int &` and `int &`.
            /// This is the non-const half of the class.
            /// </summary>
            public class Pair_IntRef_FloatRef : Const_Pair_IntRef_FloatRef
            {
                internal unsafe Pair_IntRef_FloatRef(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs the pair elementwise.
                /// </summary>
                public unsafe Pair_IntRef_FloatRef(ref int first, ref float second) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_int_ref_float_ref_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.Pair_IntRef_FloatRef._Underlying *__MR_C_std_pair_int_ref_float_ref_Construct(int *first, float *second);
                    fixed (int *__ptr_first = &first)
                    {
                        fixed (float *__ptr_second = &second)
                        {
                            _UnderlyingPtr = __MR_C_std_pair_int_ref_float_ref_Construct(__ptr_first, __ptr_second);
                        }
                    }
                }
            }

            /// <summary>
            /// This is used for optional parameters of class `Pair_IntRef_FloatRef` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Pair_IntRef_FloatRef`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Pair_IntRef_FloatRef`/`Const_Pair_IntRef_FloatRef` directly.
            /// </summary>
            public class _InOptMut_Pair_IntRef_FloatRef
            {
                public Pair_IntRef_FloatRef? Opt;

                public _InOptMut_Pair_IntRef_FloatRef() {}
                public _InOptMut_Pair_IntRef_FloatRef(Pair_IntRef_FloatRef value) {Opt = value;}
                public static implicit operator _InOptMut_Pair_IntRef_FloatRef(Pair_IntRef_FloatRef value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Pair_IntRef_FloatRef` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Pair_IntRef_FloatRef`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Pair_IntRef_FloatRef`/`Const_Pair_IntRef_FloatRef` to pass it to the function.
            /// </summary>
            public class _InOptConst_Pair_IntRef_FloatRef
            {
                public Const_Pair_IntRef_FloatRef? Opt;

                public _InOptConst_Pair_IntRef_FloatRef() {}
                public _InOptConst_Pair_IntRef_FloatRef(Const_Pair_IntRef_FloatRef value) {Opt = value;}
                public static implicit operator _InOptConst_Pair_IntRef_FloatRef(Const_Pair_IntRef_FloatRef value) {return new(value);}
            }
        }
    }
}
