public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// Stores two objects: `const int &&` and `const int &&`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_Pair_ConstIntRvalueRef_ConstFloatRvalueRef : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_Pair_ConstIntRvalueRef_ConstFloatRvalueRef(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_Destroy(_Underlying *_this);
                    __MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Pair_ConstIntRvalueRef_ConstFloatRvalueRef() {Dispose(false);}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Const_Pair_ConstIntRvalueRef_ConstFloatRvalueRef(MR.CS.Std.Const_Pair_ConstIntRvalueRef_ConstFloatRvalueRef other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Pair_ConstIntRvalueRef_ConstFloatRvalueRef._Underlying *__MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_ConstructFromAnother(MR.CS.Std.Pair_ConstIntRvalueRef_ConstFloatRvalueRef._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_ConstructFromAnother(other._UnderlyingPtr);
                }

                /// <summary>
                /// Constructs the pair elementwise.
                /// </summary>
                public unsafe Const_Pair_ConstIntRvalueRef_ConstFloatRvalueRef(MR.CS.Misc._MoveRef _move_first, int first, MR.CS.Misc._MoveRef _move_second, float second) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.Pair_ConstIntRvalueRef_ConstFloatRvalueRef._Underlying *__MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_Construct(int *first, float *second);
                    _UnderlyingPtr = __MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_Construct(&first, &second);
                }

                /// <summary>
                /// The first of the two elements, read-only.
                /// </summary>
                public unsafe int first()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_First", ExactSpelling = true)]
                    extern static int *__MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_First(_Underlying *_this);
                    return *__MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_First(_UnderlyingPtr);
                }

                /// <summary>
                /// The second of the two elements, read-only.
                /// </summary>
                public unsafe float second()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_Second", ExactSpelling = true)]
                    extern static float *__MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_Second(_Underlying *_this);
                    return *__MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_Second(_UnderlyingPtr);
                }
            }

            /// <summary>
            /// Stores two objects: `const int &&` and `const int &&`.
            /// This is the non-const half of the class.
            /// </summary>
            public class Pair_ConstIntRvalueRef_ConstFloatRvalueRef : Const_Pair_ConstIntRvalueRef_ConstFloatRvalueRef
            {
                internal unsafe Pair_ConstIntRvalueRef_ConstFloatRvalueRef(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Pair_ConstIntRvalueRef_ConstFloatRvalueRef(MR.CS.Std.Const_Pair_ConstIntRvalueRef_ConstFloatRvalueRef other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Pair_ConstIntRvalueRef_ConstFloatRvalueRef._Underlying *__MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_ConstructFromAnother(MR.CS.Std.Pair_ConstIntRvalueRef_ConstFloatRvalueRef._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_ConstructFromAnother(other._UnderlyingPtr);
                }

                /// <summary>
                /// Constructs the pair elementwise.
                /// </summary>
                public unsafe Pair_ConstIntRvalueRef_ConstFloatRvalueRef(MR.CS.Misc._MoveRef _move_first, int first, MR.CS.Misc._MoveRef _move_second, float second) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.Pair_ConstIntRvalueRef_ConstFloatRvalueRef._Underlying *__MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_Construct(int *first, float *second);
                    _UnderlyingPtr = __MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_Construct(&first, &second);
                }
            }

            /// <summary>
            /// This is used for optional parameters of class `Pair_ConstIntRvalueRef_ConstFloatRvalueRef` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Pair_ConstIntRvalueRef_ConstFloatRvalueRef`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Pair_ConstIntRvalueRef_ConstFloatRvalueRef`/`Const_Pair_ConstIntRvalueRef_ConstFloatRvalueRef` directly.
            /// </summary>
            public class _InOptMut_Pair_ConstIntRvalueRef_ConstFloatRvalueRef
            {
                public Pair_ConstIntRvalueRef_ConstFloatRvalueRef? Opt;

                public _InOptMut_Pair_ConstIntRvalueRef_ConstFloatRvalueRef() {}
                public _InOptMut_Pair_ConstIntRvalueRef_ConstFloatRvalueRef(Pair_ConstIntRvalueRef_ConstFloatRvalueRef value) {Opt = value;}
                public static implicit operator _InOptMut_Pair_ConstIntRvalueRef_ConstFloatRvalueRef(Pair_ConstIntRvalueRef_ConstFloatRvalueRef value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Pair_ConstIntRvalueRef_ConstFloatRvalueRef` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Pair_ConstIntRvalueRef_ConstFloatRvalueRef`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Pair_ConstIntRvalueRef_ConstFloatRvalueRef`/`Const_Pair_ConstIntRvalueRef_ConstFloatRvalueRef` to pass it to the function.
            /// </summary>
            public class _InOptConst_Pair_ConstIntRvalueRef_ConstFloatRvalueRef
            {
                public Const_Pair_ConstIntRvalueRef_ConstFloatRvalueRef? Opt;

                public _InOptConst_Pair_ConstIntRvalueRef_ConstFloatRvalueRef() {}
                public _InOptConst_Pair_ConstIntRvalueRef_ConstFloatRvalueRef(Const_Pair_ConstIntRvalueRef_ConstFloatRvalueRef value) {Opt = value;}
                public static implicit operator _InOptConst_Pair_ConstIntRvalueRef_ConstFloatRvalueRef(Const_Pair_ConstIntRvalueRef_ConstFloatRvalueRef value) {return new(value);}
            }
        }
    }
}
