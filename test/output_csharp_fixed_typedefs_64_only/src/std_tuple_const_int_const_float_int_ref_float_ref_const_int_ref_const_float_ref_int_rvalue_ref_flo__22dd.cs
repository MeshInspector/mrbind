public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// Stores 10 objects: `const int`, `const float`, `int &`, `float &`, `const int &`, `const float &`, `int &&`, `float &&`, `const int &&`, `const float &&`.
            /// This is the const half of the class.
            public class Const_Tuple_ConstInt_ConstFloat_IntRef_FloatRef_ConstIntRef_ConstFloatRef_IntRvalueRef_FloatRvalueRef_ConstIntRvalueRef_ConstFloatRvalueRef : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_Tuple_ConstInt_ConstFloat_IntRef_FloatRef_ConstIntRef_ConstFloatRef_IntRvalueRef_FloatRvalueRef_ConstIntRvalueRef_ConstFloatRvalueRef(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

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

                /// Constructs the tuple elementwise.
                public unsafe Const_Tuple_ConstInt_ConstFloat_IntRef_FloatRef_ConstIntRef_ConstFloatRef_IntRvalueRef_FloatRvalueRef_ConstIntRvalueRef_ConstFloatRvalueRef(int _0, float _1, ref int _2, ref float _3, int _4, float _5, MR.CS.Misc._MoveRef _move__6, ref int _6, MR.CS.Misc._MoveRef _move__7, ref float _7, MR.CS.Misc._MoveRef _move__8, int _8, MR.CS.Misc._MoveRef _move__9, float _9) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_ConstInt_ConstFloat_IntRef_FloatRef_ConstIntRef_ConstFloatRef_IntRvalueRef_FloatRvalueRef_ConstIntRvalueRef_ConstFloatRvalueRef._Underlying *__MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Construct(int _0, float _1, int *_2, float *_3, int *_4, float *_5, int *_6, float *_7, int *_8, float *_9);
                    fixed (int *__ptr__2 = &_2)
                    {
                        fixed (float *__ptr__3 = &_3)
                        {
                            fixed (int *__ptr__6 = &_6)
                            {
                                fixed (float *__ptr__7 = &_7)
                                {
                                    _UnderlyingPtr = __MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Construct(_0, _1, __ptr__2, __ptr__3, &_4, &_5, __ptr__6, __ptr__7, &_8, &_9);
                                }
                            }
                        }
                    }
                }

                /// The element 0, of type `const int`, read-only.
                public unsafe int GetConstInt()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Get_const_int", ExactSpelling = true)]
                    extern static int *__MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Get_const_int(_Underlying *_this);
                    return *__MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Get_const_int(_UnderlyingPtr);
                }

                /// The element 1, of type `const float`, read-only.
                public unsafe float GetConstFloat()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Get_const_float", ExactSpelling = true)]
                    extern static float *__MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Get_const_float(_Underlying *_this);
                    return *__MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Get_const_float(_UnderlyingPtr);
                }

                /// The element 2, of type `int &`, read-only.
                public unsafe ref int GetIntRef()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Get_int_ref", ExactSpelling = true)]
                    extern static int *__MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Get_int_ref(_Underlying *_this);
                    return ref *__MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Get_int_ref(_UnderlyingPtr);
                }

                /// The element 3, of type `float &`, read-only.
                public unsafe ref float GetFloatRef()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Get_float_ref", ExactSpelling = true)]
                    extern static float *__MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Get_float_ref(_Underlying *_this);
                    return ref *__MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Get_float_ref(_UnderlyingPtr);
                }

                /// The element 4, of type `const int &`, read-only.
                public unsafe int GetConstIntRef()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Get_const_int_ref", ExactSpelling = true)]
                    extern static int *__MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Get_const_int_ref(_Underlying *_this);
                    return *__MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Get_const_int_ref(_UnderlyingPtr);
                }

                /// The element 5, of type `const float &`, read-only.
                public unsafe float GetConstFloatRef()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Get_const_float_ref", ExactSpelling = true)]
                    extern static float *__MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Get_const_float_ref(_Underlying *_this);
                    return *__MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Get_const_float_ref(_UnderlyingPtr);
                }

                /// The element 6, of type `int &&`, read-only.
                public unsafe ref int GetIntRvalueRef()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Get_int_rvalue_ref", ExactSpelling = true)]
                    extern static int *__MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Get_int_rvalue_ref(_Underlying *_this);
                    return ref *__MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Get_int_rvalue_ref(_UnderlyingPtr);
                }

                /// The element 7, of type `float &&`, read-only.
                public unsafe ref float GetFloatRvalueRef()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Get_float_rvalue_ref", ExactSpelling = true)]
                    extern static float *__MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Get_float_rvalue_ref(_Underlying *_this);
                    return ref *__MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Get_float_rvalue_ref(_UnderlyingPtr);
                }

                /// The element 8, of type `const int &&`, read-only.
                public unsafe int GetConstIntRvalueRef()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Get_const_int_rvalue_ref", ExactSpelling = true)]
                    extern static int *__MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Get_const_int_rvalue_ref(_Underlying *_this);
                    return *__MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Get_const_int_rvalue_ref(_UnderlyingPtr);
                }

                /// The element 9, of type `const float &&`, read-only.
                public unsafe float GetConstFloatRvalueRef()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Get_const_float_rvalue_ref", ExactSpelling = true)]
                    extern static float *__MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Get_const_float_rvalue_ref(_Underlying *_this);
                    return *__MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Get_const_float_rvalue_ref(_UnderlyingPtr);
                }
            }

            /// Stores 10 objects: `const int`, `const float`, `int &`, `float &`, `const int &`, `const float &`, `int &&`, `float &&`, `const int &&`, `const float &&`.
            /// This is the non-const half of the class.
            public class Tuple_ConstInt_ConstFloat_IntRef_FloatRef_ConstIntRef_ConstFloatRef_IntRvalueRef_FloatRvalueRef_ConstIntRvalueRef_ConstFloatRvalueRef : Const_Tuple_ConstInt_ConstFloat_IntRef_FloatRef_ConstIntRef_ConstFloatRef_IntRvalueRef_FloatRvalueRef_ConstIntRvalueRef_ConstFloatRvalueRef
            {
                internal unsafe Tuple_ConstInt_ConstFloat_IntRef_FloatRef_ConstIntRef_ConstFloatRef_IntRvalueRef_FloatRvalueRef_ConstIntRvalueRef_ConstFloatRvalueRef(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs the tuple elementwise.
                public unsafe Tuple_ConstInt_ConstFloat_IntRef_FloatRef_ConstIntRef_ConstFloatRef_IntRvalueRef_FloatRvalueRef_ConstIntRvalueRef_ConstFloatRvalueRef(int _0, float _1, ref int _2, ref float _3, int _4, float _5, MR.CS.Misc._MoveRef _move__6, ref int _6, MR.CS.Misc._MoveRef _move__7, ref float _7, MR.CS.Misc._MoveRef _move__8, int _8, MR.CS.Misc._MoveRef _move__9, float _9) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_ConstInt_ConstFloat_IntRef_FloatRef_ConstIntRef_ConstFloatRef_IntRvalueRef_FloatRvalueRef_ConstIntRvalueRef_ConstFloatRvalueRef._Underlying *__MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Construct(int _0, float _1, int *_2, float *_3, int *_4, float *_5, int *_6, float *_7, int *_8, float *_9);
                    fixed (int *__ptr__2 = &_2)
                    {
                        fixed (float *__ptr__3 = &_3)
                        {
                            fixed (int *__ptr__6 = &_6)
                            {
                                fixed (float *__ptr__7 = &_7)
                                {
                                    _UnderlyingPtr = __MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Construct(_0, _1, __ptr__2, __ptr__3, &_4, &_5, __ptr__6, __ptr__7, &_8, &_9);
                                }
                            }
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
