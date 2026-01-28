public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// Stores two objects: `const int &&` and `const int &&`.
            /// This is the const half of the class.
            public class Const_Pair_ConstIntRvalueRef_ConstFloatRvalueRef : MR.CS.Misc.Object<Const_Pair_ConstIntRvalueRef_ConstFloatRvalueRef>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

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

                internal unsafe Const_Pair_ConstIntRvalueRef_ConstFloatRvalueRef(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Const_Pair_ConstIntRvalueRef_ConstFloatRvalueRef(MR.CS.Std.Const_Pair_ConstIntRvalueRef_ConstFloatRvalueRef other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Pair_ConstIntRvalueRef_ConstFloatRvalueRef._Underlying *__MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_ConstructFromAnother(MR.CS.Std.Pair_ConstIntRvalueRef_ConstFloatRvalueRef._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// Constructs the pair elementwise.
                public unsafe Const_Pair_ConstIntRvalueRef_ConstFloatRvalueRef(MR.CS.Misc._MoveRef _move_first, int first, MR.CS.Misc._MoveRef _move_second, float second) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.Pair_ConstIntRvalueRef_ConstFloatRvalueRef._Underlying *__MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_Construct(int *first, float *second);
                    _UnderlyingPtr = __MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_Construct(&first, &second);
                }

                /// The first of the two elements, read-only.
                public unsafe int First()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_First", ExactSpelling = true)]
                    extern static int *__MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_First(_Underlying *_this);
                    return *__MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_First(_UnderlyingPtr);
                }

                /// The second of the two elements, read-only.
                public unsafe float Second()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_Second", ExactSpelling = true)]
                    extern static float *__MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_Second(_Underlying *_this);
                    return *__MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_Second(_UnderlyingPtr);
                }
            }

            /// Stores two objects: `const int &&` and `const int &&`.
            /// This is the non-const half of the class.
            public class Pair_ConstIntRvalueRef_ConstFloatRvalueRef : Const_Pair_ConstIntRvalueRef_ConstFloatRvalueRef
            {
                internal unsafe Pair_ConstIntRvalueRef_ConstFloatRvalueRef(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Pair_ConstIntRvalueRef_ConstFloatRvalueRef(MR.CS.Std.Const_Pair_ConstIntRvalueRef_ConstFloatRvalueRef other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Pair_ConstIntRvalueRef_ConstFloatRvalueRef._Underlying *__MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_ConstructFromAnother(MR.CS.Std.Pair_ConstIntRvalueRef_ConstFloatRvalueRef._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// Constructs the pair elementwise.
                public unsafe Pair_ConstIntRvalueRef_ConstFloatRvalueRef(MR.CS.Misc._MoveRef _move_first, int first, MR.CS.Misc._MoveRef _move_second, float second) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.Pair_ConstIntRvalueRef_ConstFloatRvalueRef._Underlying *__MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_Construct(int *first, float *second);
                    _UnderlyingPtr = __MR_C_std_pair_const_int_rvalue_ref_const_float_rvalue_ref_Construct(&first, &second);
                }
            }

            /// This is used for optional parameters of class `Pair_ConstIntRvalueRef_ConstFloatRvalueRef` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Pair_ConstIntRvalueRef_ConstFloatRvalueRef`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Pair_ConstIntRvalueRef_ConstFloatRvalueRef`/`Const_Pair_ConstIntRvalueRef_ConstFloatRvalueRef` directly.
            public class _InOptMut_Pair_ConstIntRvalueRef_ConstFloatRvalueRef
            {
                public Pair_ConstIntRvalueRef_ConstFloatRvalueRef? Opt;

                public _InOptMut_Pair_ConstIntRvalueRef_ConstFloatRvalueRef() {}
                public _InOptMut_Pair_ConstIntRvalueRef_ConstFloatRvalueRef(Pair_ConstIntRvalueRef_ConstFloatRvalueRef value) {Opt = value;}
                public static implicit operator _InOptMut_Pair_ConstIntRvalueRef_ConstFloatRvalueRef(Pair_ConstIntRvalueRef_ConstFloatRvalueRef value) {return new(value);}
            }

            /// This is used for optional parameters of class `Pair_ConstIntRvalueRef_ConstFloatRvalueRef` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Pair_ConstIntRvalueRef_ConstFloatRvalueRef`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Pair_ConstIntRvalueRef_ConstFloatRvalueRef`/`Const_Pair_ConstIntRvalueRef_ConstFloatRvalueRef` to pass it to the function.
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
