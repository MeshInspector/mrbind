public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// Stores two objects: `int &&` and `int &&`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_Pair_IntRvalueRef_FloatRvalueRef : MR.CS.Misc.Object<Const_Pair_IntRvalueRef_FloatRvalueRef>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_int_rvalue_ref_float_rvalue_ref_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_pair_int_rvalue_ref_float_rvalue_ref_Destroy(_Underlying *_this);
                    __MR_C_std_pair_int_rvalue_ref_float_rvalue_ref_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Pair_IntRvalueRef_FloatRvalueRef() {Dispose(false);}

                internal unsafe Const_Pair_IntRvalueRef_FloatRvalueRef(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Const_Pair_IntRvalueRef_FloatRvalueRef(MR.CS.Std.Const_Pair_IntRvalueRef_FloatRvalueRef other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_int_rvalue_ref_float_rvalue_ref_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Pair_IntRvalueRef_FloatRvalueRef._Underlying *__MR_C_std_pair_int_rvalue_ref_float_rvalue_ref_ConstructFromAnother(MR.CS.Std.Pair_IntRvalueRef_FloatRvalueRef._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_pair_int_rvalue_ref_float_rvalue_ref_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// <summary>
                /// Constructs the pair elementwise.
                /// </summary>
                public unsafe Const_Pair_IntRvalueRef_FloatRvalueRef(MR.CS.Misc._MoveRef _move_first, int first, MR.CS.Misc._MoveRef _move_second, float second) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_int_rvalue_ref_float_rvalue_ref_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.Pair_IntRvalueRef_FloatRvalueRef._Underlying *__MR_C_std_pair_int_rvalue_ref_float_rvalue_ref_Construct(int *first, float *second);
                    _UnderlyingPtr = __MR_C_std_pair_int_rvalue_ref_float_rvalue_ref_Construct(&first, &second);
                }

                /// <summary>
                /// The first of the two elements, read-only.
                /// </summary>
                public unsafe int first()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_int_rvalue_ref_float_rvalue_ref_first", ExactSpelling = true)]
                    extern static int *__MR_C_std_pair_int_rvalue_ref_float_rvalue_ref_first(_Underlying *_this);
                    return *__MR_C_std_pair_int_rvalue_ref_float_rvalue_ref_first(_UnderlyingPtr);
                }

                /// <summary>
                /// The second of the two elements, read-only.
                /// </summary>
                public unsafe float second()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_int_rvalue_ref_float_rvalue_ref_second", ExactSpelling = true)]
                    extern static float *__MR_C_std_pair_int_rvalue_ref_float_rvalue_ref_second(_Underlying *_this);
                    return *__MR_C_std_pair_int_rvalue_ref_float_rvalue_ref_second(_UnderlyingPtr);
                }

                // Custom extras:

                public void Deconstruct(out int _1, out float _2)
                {
                    _1 = first();
                    _2 = second();
                }
            }

            /// <summary>
            /// Stores two objects: `int &&` and `int &&`.
            /// This is the non-const half of the class.
            /// </summary>
            public class Pair_IntRvalueRef_FloatRvalueRef : Const_Pair_IntRvalueRef_FloatRvalueRef
            {
                internal unsafe Pair_IntRvalueRef_FloatRvalueRef(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Pair_IntRvalueRef_FloatRvalueRef(MR.CS.Std.Const_Pair_IntRvalueRef_FloatRvalueRef other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_int_rvalue_ref_float_rvalue_ref_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Pair_IntRvalueRef_FloatRvalueRef._Underlying *__MR_C_std_pair_int_rvalue_ref_float_rvalue_ref_ConstructFromAnother(MR.CS.Std.Pair_IntRvalueRef_FloatRvalueRef._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_pair_int_rvalue_ref_float_rvalue_ref_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// <summary>
                /// Constructs the pair elementwise.
                /// </summary>
                public unsafe Pair_IntRvalueRef_FloatRvalueRef(MR.CS.Misc._MoveRef _move_first, int first, MR.CS.Misc._MoveRef _move_second, float second) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_int_rvalue_ref_float_rvalue_ref_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.Pair_IntRvalueRef_FloatRvalueRef._Underlying *__MR_C_std_pair_int_rvalue_ref_float_rvalue_ref_Construct(int *first, float *second);
                    _UnderlyingPtr = __MR_C_std_pair_int_rvalue_ref_float_rvalue_ref_Construct(&first, &second);
                }
            }

            /// <summary>
            /// This is used for optional parameters of class `Pair_IntRvalueRef_FloatRvalueRef` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Pair_IntRvalueRef_FloatRvalueRef`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Pair_IntRvalueRef_FloatRvalueRef`/`Const_Pair_IntRvalueRef_FloatRvalueRef` directly.
            /// </summary>
            public class _InOptMut_Pair_IntRvalueRef_FloatRvalueRef
            {
                public Pair_IntRvalueRef_FloatRvalueRef? Opt;

                public _InOptMut_Pair_IntRvalueRef_FloatRvalueRef() {}
                public _InOptMut_Pair_IntRvalueRef_FloatRvalueRef(Pair_IntRvalueRef_FloatRvalueRef value) {Opt = value;}
                public static implicit operator _InOptMut_Pair_IntRvalueRef_FloatRvalueRef(Pair_IntRvalueRef_FloatRvalueRef value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Pair_IntRvalueRef_FloatRvalueRef` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Pair_IntRvalueRef_FloatRvalueRef`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Pair_IntRvalueRef_FloatRvalueRef`/`Const_Pair_IntRvalueRef_FloatRvalueRef` to pass it to the function.
            /// </summary>
            public class _InOptConst_Pair_IntRvalueRef_FloatRvalueRef
            {
                public Const_Pair_IntRvalueRef_FloatRvalueRef? Opt;

                public _InOptConst_Pair_IntRvalueRef_FloatRvalueRef() {}
                public _InOptConst_Pair_IntRvalueRef_FloatRvalueRef(Const_Pair_IntRvalueRef_FloatRvalueRef value) {Opt = value;}
                public static implicit operator _InOptConst_Pair_IntRvalueRef_FloatRvalueRef(Const_Pair_IntRvalueRef_FloatRvalueRef value) {return new(value);}
            }
        }
    }
}
