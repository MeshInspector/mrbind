public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// Stores 4 objects: `const int32_t &`, `const float &&`, `const std::string &`, `const std::string &&`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_Tuple_ConstInt32TRef_ConstFloatRvalueRef_ConstStdStringRef_ConstStdStringRvalueRef : MR.CS.Misc.Object<Const_Tuple_ConstInt32TRef_ConstFloatRvalueRef_ConstStdStringRef_ConstStdStringRvalueRef>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_Destroy(_Underlying *_this);
                    __MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Tuple_ConstInt32TRef_ConstFloatRvalueRef_ConstStdStringRef_ConstStdStringRvalueRef() {Dispose(false);}

                internal unsafe Const_Tuple_ConstInt32TRef_ConstFloatRvalueRef_ConstStdStringRef_ConstStdStringRvalueRef(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Const_Tuple_ConstInt32TRef_ConstFloatRvalueRef_ConstStdStringRef_ConstStdStringRvalueRef(MR.CS.Std.Const_Tuple_ConstInt32TRef_ConstFloatRvalueRef_ConstStdStringRef_ConstStdStringRvalueRef other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_ConstInt32TRef_ConstFloatRvalueRef_ConstStdStringRef_ConstStdStringRvalueRef._Underlying *__MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_ConstructFromAnother(MR.CS.Std.Tuple_ConstInt32TRef_ConstFloatRvalueRef_ConstStdStringRef_ConstStdStringRvalueRef._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// <summary>
                /// Constructs the tuple elementwise.
                /// </summary>
                public unsafe Const_Tuple_ConstInt32TRef_ConstFloatRvalueRef_ConstStdStringRef_ConstStdStringRvalueRef(int _0, MR.CS.Misc._MoveRef _move__1, float _1, ReadOnlySpan<char> _2, MR.CS.Misc._MoveRef _move__3, ReadOnlySpan<char> _3) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_ConstInt32TRef_ConstFloatRvalueRef_ConstStdStringRef_ConstStdStringRvalueRef._Underlying *__MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_Construct(int *_0, float *_1, byte *_2, byte *_2_end, byte *_3, byte *_3_end);
                    byte[] __bytes__2 = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(_2.Length)];
                    int __len__2 = System.Text.Encoding.UTF8.GetBytes(_2, __bytes__2);
                    fixed (byte *__ptr__2 = __bytes__2)
                    {
                        byte[] __bytes__3 = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(_3.Length)];
                        int __len__3 = System.Text.Encoding.UTF8.GetBytes(_3, __bytes__3);
                        fixed (byte *__ptr__3 = __bytes__3)
                        {
                            _UnderlyingPtr = __MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_Construct(&_0, &_1, __ptr__2, __ptr__2 + __len__2, __ptr__3, __ptr__3 + __len__3);
                        }
                    }
                }

                /// <summary>
                /// The element 0, of type `const int32_t &`, read-only.
                /// </summary>
                public unsafe int getConstInt32TRef()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_get_const_int32_t_ref", ExactSpelling = true)]
                    extern static int *__MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_get_const_int32_t_ref(_Underlying *_this);
                    return *__MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_get_const_int32_t_ref(_UnderlyingPtr);
                }

                /// <summary>
                /// The element 1, of type `const float &&`, read-only.
                /// </summary>
                public unsafe float getConstFloatRvalueRef()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_get_const_float_rvalue_ref", ExactSpelling = true)]
                    extern static float *__MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_get_const_float_rvalue_ref(_Underlying *_this);
                    return *__MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_get_const_float_rvalue_ref(_UnderlyingPtr);
                }

                /// <summary>
                /// The element 2, of type `const std::string &`, read-only.
                /// </summary>
                public unsafe MR.CS.Std.Const_String getConstStdStringRef()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_get_const_std_string_ref", ExactSpelling = true)]
                    extern static MR.CS.Std.Const_String._Underlying *__MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_get_const_std_string_ref(_Underlying *_this);
                    MR.CS.Std.Const_String __ret;
                    __ret = new(__MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_get_const_std_string_ref(_UnderlyingPtr), is_owning: false);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// The element 3, of type `const std::string &&`, read-only.
                /// </summary>
                public unsafe MR.CS.Misc._Moved<MR.CS.Std.Const_String> getConstStdStringRvalueRef()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_get_const_std_string_rvalue_ref", ExactSpelling = true)]
                    extern static MR.CS.Std.Const_String._Underlying *__MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_get_const_std_string_rvalue_ref(_Underlying *_this);
                    MR.CS.Misc._Moved<MR.CS.Std.Const_String> __ret;
                    __ret = MR.CS.Misc.Move(new MR.CS.Std.Const_String(__MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_get_const_std_string_rvalue_ref(_UnderlyingPtr), is_owning: false));
                    __ret.Value._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                // Custom extras:

                public void Deconstruct(out int _1, out float _2, out MR.CS.Std.Const_String _3, out MR.CS.Misc._Moved<MR.CS.Std.Const_String> _4)
                {
                    _1 = getConstInt32TRef();
                    _2 = getConstFloatRvalueRef();
                    _3 = getConstStdStringRef();
                    _4 = getConstStdStringRvalueRef();
                }
            }

            /// <summary>
            /// Stores 4 objects: `const int32_t &`, `const float &&`, `const std::string &`, `const std::string &&`.
            /// This is the non-const half of the class.
            /// </summary>
            public class Tuple_ConstInt32TRef_ConstFloatRvalueRef_ConstStdStringRef_ConstStdStringRvalueRef : Const_Tuple_ConstInt32TRef_ConstFloatRvalueRef_ConstStdStringRef_ConstStdStringRvalueRef
            {
                internal unsafe Tuple_ConstInt32TRef_ConstFloatRvalueRef_ConstStdStringRef_ConstStdStringRvalueRef(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Tuple_ConstInt32TRef_ConstFloatRvalueRef_ConstStdStringRef_ConstStdStringRvalueRef(MR.CS.Std.Const_Tuple_ConstInt32TRef_ConstFloatRvalueRef_ConstStdStringRef_ConstStdStringRvalueRef other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_ConstInt32TRef_ConstFloatRvalueRef_ConstStdStringRef_ConstStdStringRvalueRef._Underlying *__MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_ConstructFromAnother(MR.CS.Std.Tuple_ConstInt32TRef_ConstFloatRvalueRef_ConstStdStringRef_ConstStdStringRvalueRef._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// <summary>
                /// Constructs the tuple elementwise.
                /// </summary>
                public unsafe Tuple_ConstInt32TRef_ConstFloatRvalueRef_ConstStdStringRef_ConstStdStringRvalueRef(int _0, MR.CS.Misc._MoveRef _move__1, float _1, ReadOnlySpan<char> _2, MR.CS.Misc._MoveRef _move__3, ReadOnlySpan<char> _3) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_ConstInt32TRef_ConstFloatRvalueRef_ConstStdStringRef_ConstStdStringRvalueRef._Underlying *__MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_Construct(int *_0, float *_1, byte *_2, byte *_2_end, byte *_3, byte *_3_end);
                    byte[] __bytes__2 = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(_2.Length)];
                    int __len__2 = System.Text.Encoding.UTF8.GetBytes(_2, __bytes__2);
                    fixed (byte *__ptr__2 = __bytes__2)
                    {
                        byte[] __bytes__3 = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(_3.Length)];
                        int __len__3 = System.Text.Encoding.UTF8.GetBytes(_3, __bytes__3);
                        fixed (byte *__ptr__3 = __bytes__3)
                        {
                            _UnderlyingPtr = __MR_C_std_tuple_const_int32_t_ref_const_float_rvalue_ref_const_std_string_ref_const_std_string_rvalue_ref_Construct(&_0, &_1, __ptr__2, __ptr__2 + __len__2, __ptr__3, __ptr__3 + __len__3);
                        }
                    }
                }
            }

            /// <summary>
            /// This is used for optional parameters of class `Tuple_ConstInt32TRef_ConstFloatRvalueRef_ConstStdStringRef_ConstStdStringRvalueRef` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Tuple_ConstInt32TRef_ConstFloatRvalueRef_ConstStdStringRef_ConstStdStringRvalueRef`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Tuple_ConstInt32TRef_ConstFloatRvalueRef_ConstStdStringRef_ConstStdStringRvalueRef`/`Const_Tuple_ConstInt32TRef_ConstFloatRvalueRef_ConstStdStringRef_ConstStdStringRvalueRef` directly.
            /// </summary>
            public class _InOptMut_Tuple_ConstInt32TRef_ConstFloatRvalueRef_ConstStdStringRef_ConstStdStringRvalueRef
            {
                public Tuple_ConstInt32TRef_ConstFloatRvalueRef_ConstStdStringRef_ConstStdStringRvalueRef? Opt;

                public _InOptMut_Tuple_ConstInt32TRef_ConstFloatRvalueRef_ConstStdStringRef_ConstStdStringRvalueRef() {}
                public _InOptMut_Tuple_ConstInt32TRef_ConstFloatRvalueRef_ConstStdStringRef_ConstStdStringRvalueRef(Tuple_ConstInt32TRef_ConstFloatRvalueRef_ConstStdStringRef_ConstStdStringRvalueRef value) {Opt = value;}
                public static implicit operator _InOptMut_Tuple_ConstInt32TRef_ConstFloatRvalueRef_ConstStdStringRef_ConstStdStringRvalueRef(Tuple_ConstInt32TRef_ConstFloatRvalueRef_ConstStdStringRef_ConstStdStringRvalueRef value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Tuple_ConstInt32TRef_ConstFloatRvalueRef_ConstStdStringRef_ConstStdStringRvalueRef` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Tuple_ConstInt32TRef_ConstFloatRvalueRef_ConstStdStringRef_ConstStdStringRvalueRef`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Tuple_ConstInt32TRef_ConstFloatRvalueRef_ConstStdStringRef_ConstStdStringRvalueRef`/`Const_Tuple_ConstInt32TRef_ConstFloatRvalueRef_ConstStdStringRef_ConstStdStringRvalueRef` to pass it to the function.
            /// </summary>
            public class _InOptConst_Tuple_ConstInt32TRef_ConstFloatRvalueRef_ConstStdStringRef_ConstStdStringRvalueRef
            {
                public Const_Tuple_ConstInt32TRef_ConstFloatRvalueRef_ConstStdStringRef_ConstStdStringRvalueRef? Opt;

                public _InOptConst_Tuple_ConstInt32TRef_ConstFloatRvalueRef_ConstStdStringRef_ConstStdStringRvalueRef() {}
                public _InOptConst_Tuple_ConstInt32TRef_ConstFloatRvalueRef_ConstStdStringRef_ConstStdStringRvalueRef(Const_Tuple_ConstInt32TRef_ConstFloatRvalueRef_ConstStdStringRef_ConstStdStringRvalueRef value) {Opt = value;}
                public static implicit operator _InOptConst_Tuple_ConstInt32TRef_ConstFloatRvalueRef_ConstStdStringRef_ConstStdStringRvalueRef(Const_Tuple_ConstInt32TRef_ConstFloatRvalueRef_ConstStdStringRef_ConstStdStringRvalueRef value) {return new(value);}
            }
        }
    }
}
