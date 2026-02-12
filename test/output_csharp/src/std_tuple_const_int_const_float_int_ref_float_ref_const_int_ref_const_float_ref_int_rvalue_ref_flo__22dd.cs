public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// Stores 10 objects: `const int`, `const float`, `int &`, `float &`, `const int &`, `const float &`, `int &&`, `float &&`, `const int &&`, `const float &&`.
            /// This is the const half of the class.
            public class Const_Tuple_ConstInt_ConstFloat_IntRef_FloatRef_ConstIntRef_ConstFloatRef_IntRvalueRef_FloatRvalueRef_ConstIntRvalueRef_ConstFloatRvalueRef : MR.CS.Misc.Object<Const_Tuple_ConstInt_ConstFloat_IntRef_FloatRef_ConstIntRef_ConstFloatRef_IntRvalueRef_FloatRvalueRef_ConstIntRvalueRef_ConstFloatRvalueRef>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Destroy(_Underlying *_this);
                    __MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Tuple_ConstInt_ConstFloat_IntRef_FloatRef_ConstIntRef_ConstFloatRef_IntRvalueRef_FloatRvalueRef_ConstIntRvalueRef_ConstFloatRvalueRef() {Dispose(false);}

                internal unsafe Const_Tuple_ConstInt_ConstFloat_IntRef_FloatRef_ConstIntRef_ConstFloatRef_IntRvalueRef_FloatRvalueRef_ConstIntRvalueRef_ConstFloatRvalueRef(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// Constructs the tuple elementwise.
                public unsafe Const_Tuple_ConstInt_ConstFloat_IntRef_FloatRef_ConstIntRef_ConstFloatRef_IntRvalueRef_FloatRvalueRef_ConstIntRvalueRef_ConstFloatRvalueRef(int _0, float _1, ref int _2, ref float _3, int _4, float _5, MR.CS.Misc._MoveRef _move__6, int _6, MR.CS.Misc._MoveRef _move__7, float _7, MR.CS.Misc._MoveRef _move__8, int _8, MR.CS.Misc._MoveRef _move__9, float _9) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_ConstInt_ConstFloat_IntRef_FloatRef_ConstIntRef_ConstFloatRef_IntRvalueRef_FloatRvalueRef_ConstIntRvalueRef_ConstFloatRvalueRef._Underlying *__MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Construct(int _0, float _1, int *_2, float *_3, int *_4, float *_5, int *_6, float *_7, int *_8, float *_9);
                    fixed (int *__ptr__2 = &_2)
                    {
                        fixed (float *__ptr__3 = &_3)
                        {
                            _UnderlyingPtr = __MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Construct(_0, _1, __ptr__2, __ptr__3, &_4, &_5, &_6, &_7, &_8, &_9);
                        }
                    }
                }

                /// The element 0, of type `const int`, read-only.
                public unsafe int GetConstInt()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_int", ExactSpelling = true)]
                    extern static int *__MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_int(_Underlying *_this);
                    return *__MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_int(_UnderlyingPtr);
                }

                /// The element 1, of type `const float`, read-only.
                public unsafe float GetConstFloat()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_float", ExactSpelling = true)]
                    extern static float *__MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_float(_Underlying *_this);
                    return *__MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_float(_UnderlyingPtr);
                }

                /// The element 2, of type `int &`, read-only.
                public unsafe ref int GetIntRef()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_int_ref", ExactSpelling = true)]
                    extern static int *__MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_int_ref(_Underlying *_this);
                    return ref *__MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_int_ref(_UnderlyingPtr);
                }

                /// The element 3, of type `float &`, read-only.
                public unsafe ref float GetFloatRef()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_float_ref", ExactSpelling = true)]
                    extern static float *__MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_float_ref(_Underlying *_this);
                    return ref *__MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_float_ref(_UnderlyingPtr);
                }

                /// The element 4, of type `const int &`, read-only.
                public unsafe int GetConstIntRef()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_int_ref", ExactSpelling = true)]
                    extern static int *__MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_int_ref(_Underlying *_this);
                    return *__MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_int_ref(_UnderlyingPtr);
                }

                /// The element 5, of type `const float &`, read-only.
                public unsafe float GetConstFloatRef()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_float_ref", ExactSpelling = true)]
                    extern static float *__MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_float_ref(_Underlying *_this);
                    return *__MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_float_ref(_UnderlyingPtr);
                }

                /// The element 6, of type `int &&`, read-only.
                public unsafe int GetIntRvalueRef()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_int_rvalue_ref", ExactSpelling = true)]
                    extern static int *__MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_int_rvalue_ref(_Underlying *_this);
                    return *__MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_int_rvalue_ref(_UnderlyingPtr);
                }

                /// The element 7, of type `float &&`, read-only.
                public unsafe float GetFloatRvalueRef()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_float_rvalue_ref", ExactSpelling = true)]
                    extern static float *__MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_float_rvalue_ref(_Underlying *_this);
                    return *__MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_float_rvalue_ref(_UnderlyingPtr);
                }

                /// The element 8, of type `const int &&`, read-only.
                public unsafe int GetConstIntRvalueRef()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_int_rvalue_ref", ExactSpelling = true)]
                    extern static int *__MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_int_rvalue_ref(_Underlying *_this);
                    return *__MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_int_rvalue_ref(_UnderlyingPtr);
                }

                /// The element 9, of type `const float &&`, read-only.
                public unsafe float GetConstFloatRvalueRef()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_float_rvalue_ref", ExactSpelling = true)]
                    extern static float *__MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_float_rvalue_ref(_Underlying *_this);
                    return *__MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_float_rvalue_ref(_UnderlyingPtr);
                }

                // Custom extras:

                public void Deconstruct(out int _1, out float _2, out MR.CS.Misc.Ref<int> _3, out MR.CS.Misc.Ref<float> _4, out int _5, out float _6, out int _7, out float _8, out int _9, out float _10)
                {
                    _1 = GetConstInt();
                    _2 = GetConstFloat();
                    _3 = new(ref GetIntRef());
                    _4 = new(ref GetFloatRef());
                    _5 = GetConstIntRef();
                    _6 = GetConstFloatRef();
                    _7 = GetIntRvalueRef();
                    _8 = GetFloatRvalueRef();
                    _9 = GetConstIntRvalueRef();
                    _10 = GetConstFloatRvalueRef();
                }
            }

            /// Stores 10 objects: `const int`, `const float`, `int &`, `float &`, `const int &`, `const float &`, `int &&`, `float &&`, `const int &&`, `const float &&`.
            /// This is the non-const half of the class.
            public class Tuple_ConstInt_ConstFloat_IntRef_FloatRef_ConstIntRef_ConstFloatRef_IntRvalueRef_FloatRvalueRef_ConstIntRvalueRef_ConstFloatRvalueRef : Const_Tuple_ConstInt_ConstFloat_IntRef_FloatRef_ConstIntRef_ConstFloatRef_IntRvalueRef_FloatRvalueRef_ConstIntRvalueRef_ConstFloatRvalueRef
            {
                internal unsafe Tuple_ConstInt_ConstFloat_IntRef_FloatRef_ConstIntRef_ConstFloatRef_IntRvalueRef_FloatRvalueRef_ConstIntRvalueRef_ConstFloatRvalueRef(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs the tuple elementwise.
                public unsafe Tuple_ConstInt_ConstFloat_IntRef_FloatRef_ConstIntRef_ConstFloatRef_IntRvalueRef_FloatRvalueRef_ConstIntRvalueRef_ConstFloatRvalueRef(int _0, float _1, ref int _2, ref float _3, int _4, float _5, MR.CS.Misc._MoveRef _move__6, int _6, MR.CS.Misc._MoveRef _move__7, float _7, MR.CS.Misc._MoveRef _move__8, int _8, MR.CS.Misc._MoveRef _move__9, float _9) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_ConstInt_ConstFloat_IntRef_FloatRef_ConstIntRef_ConstFloatRef_IntRvalueRef_FloatRvalueRef_ConstIntRvalueRef_ConstFloatRvalueRef._Underlying *__MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Construct(int _0, float _1, int *_2, float *_3, int *_4, float *_5, int *_6, float *_7, int *_8, float *_9);
                    fixed (int *__ptr__2 = &_2)
                    {
                        fixed (float *__ptr__3 = &_3)
                        {
                            _UnderlyingPtr = __MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Construct(_0, _1, __ptr__2, __ptr__3, &_4, &_5, &_6, &_7, &_8, &_9);
                        }
                    }
                }
            }

            /// This is used for optional parameters of class `Tuple_ConstInt_ConstFloat_IntRef_FloatRef_ConstIntRef_ConstFloatRef_IntRvalueRef_FloatRvalueRef_ConstIntRvalueRef_ConstFloatRvalueRef` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Tuple_ConstInt_ConstFloat_IntRef_FloatRef_ConstIntRef_ConstFloatRef_IntRvalueRef_FloatRvalueRef_ConstIntRvalueRef_ConstFloatRvalueRef`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Tuple_ConstInt_ConstFloat_IntRef_FloatRef_ConstIntRef_ConstFloatRef_IntRvalueRef_FloatRvalueRef_ConstIntRvalueRef_ConstFloatRvalueRef`/`Const_Tuple_ConstInt_ConstFloat_IntRef_FloatRef_ConstIntRef_ConstFloatRef_IntRvalueRef_FloatRvalueRef_ConstIntRvalueRef_ConstFloatRvalueRef` directly.
            public class _InOptMut_Tuple_ConstInt_ConstFloat_IntRef_FloatRef_ConstIntRef_ConstFloatRef_IntRvalueRef_FloatRvalueRef_ConstIntRvalueRef_ConstFloatRvalueRef
            {
                public Tuple_ConstInt_ConstFloat_IntRef_FloatRef_ConstIntRef_ConstFloatRef_IntRvalueRef_FloatRvalueRef_ConstIntRvalueRef_ConstFloatRvalueRef? Opt;

                public _InOptMut_Tuple_ConstInt_ConstFloat_IntRef_FloatRef_ConstIntRef_ConstFloatRef_IntRvalueRef_FloatRvalueRef_ConstIntRvalueRef_ConstFloatRvalueRef() {}
                public _InOptMut_Tuple_ConstInt_ConstFloat_IntRef_FloatRef_ConstIntRef_ConstFloatRef_IntRvalueRef_FloatRvalueRef_ConstIntRvalueRef_ConstFloatRvalueRef(Tuple_ConstInt_ConstFloat_IntRef_FloatRef_ConstIntRef_ConstFloatRef_IntRvalueRef_FloatRvalueRef_ConstIntRvalueRef_ConstFloatRvalueRef value) {Opt = value;}
                public static implicit operator _InOptMut_Tuple_ConstInt_ConstFloat_IntRef_FloatRef_ConstIntRef_ConstFloatRef_IntRvalueRef_FloatRvalueRef_ConstIntRvalueRef_ConstFloatRvalueRef(Tuple_ConstInt_ConstFloat_IntRef_FloatRef_ConstIntRef_ConstFloatRef_IntRvalueRef_FloatRvalueRef_ConstIntRvalueRef_ConstFloatRvalueRef value) {return new(value);}
            }

            /// This is used for optional parameters of class `Tuple_ConstInt_ConstFloat_IntRef_FloatRef_ConstIntRef_ConstFloatRef_IntRvalueRef_FloatRvalueRef_ConstIntRvalueRef_ConstFloatRvalueRef` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Tuple_ConstInt_ConstFloat_IntRef_FloatRef_ConstIntRef_ConstFloatRef_IntRvalueRef_FloatRvalueRef_ConstIntRvalueRef_ConstFloatRvalueRef`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Tuple_ConstInt_ConstFloat_IntRef_FloatRef_ConstIntRef_ConstFloatRef_IntRvalueRef_FloatRvalueRef_ConstIntRvalueRef_ConstFloatRvalueRef`/`Const_Tuple_ConstInt_ConstFloat_IntRef_FloatRef_ConstIntRef_ConstFloatRef_IntRvalueRef_FloatRvalueRef_ConstIntRvalueRef_ConstFloatRvalueRef` to pass it to the function.
            public class _InOptConst_Tuple_ConstInt_ConstFloat_IntRef_FloatRef_ConstIntRef_ConstFloatRef_IntRvalueRef_FloatRvalueRef_ConstIntRvalueRef_ConstFloatRvalueRef
            {
                public Const_Tuple_ConstInt_ConstFloat_IntRef_FloatRef_ConstIntRef_ConstFloatRef_IntRvalueRef_FloatRvalueRef_ConstIntRvalueRef_ConstFloatRvalueRef? Opt;

                public _InOptConst_Tuple_ConstInt_ConstFloat_IntRef_FloatRef_ConstIntRef_ConstFloatRef_IntRvalueRef_FloatRvalueRef_ConstIntRvalueRef_ConstFloatRvalueRef() {}
                public _InOptConst_Tuple_ConstInt_ConstFloat_IntRef_FloatRef_ConstIntRef_ConstFloatRef_IntRvalueRef_FloatRvalueRef_ConstIntRvalueRef_ConstFloatRvalueRef(Const_Tuple_ConstInt_ConstFloat_IntRef_FloatRef_ConstIntRef_ConstFloatRef_IntRvalueRef_FloatRvalueRef_ConstIntRvalueRef_ConstFloatRvalueRef value) {Opt = value;}
                public static implicit operator _InOptConst_Tuple_ConstInt_ConstFloat_IntRef_FloatRef_ConstIntRef_ConstFloatRef_IntRvalueRef_FloatRvalueRef_ConstIntRvalueRef_ConstFloatRvalueRef(Const_Tuple_ConstInt_ConstFloat_IntRef_FloatRef_ConstIntRef_ConstFloatRef_IntRvalueRef_FloatRvalueRef_ConstIntRvalueRef_ConstFloatRvalueRef value) {return new(value);}
            }
        }
    }
}
