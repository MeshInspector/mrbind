public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// Stores 4 objects: `int &`, `float &&`, `std::string &`, `std::string &&`.
            /// This is the const half of the class.
            public class Const_Tuple_IntRef_FloatRvalueRef_StdStringRef_StdStringRvalueRef : MR.CS.Misc.Object<Const_Tuple_IntRef_FloatRvalueRef_StdStringRef_StdStringRvalueRef>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_Destroy(_Underlying *_this);
                    __MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Tuple_IntRef_FloatRvalueRef_StdStringRef_StdStringRvalueRef() {Dispose(false);}

                internal unsafe Const_Tuple_IntRef_FloatRvalueRef_StdStringRef_StdStringRvalueRef(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// Constructs the tuple elementwise.
                public unsafe Const_Tuple_IntRef_FloatRvalueRef_StdStringRef_StdStringRvalueRef(ref int _0, MR.CS.Misc._MoveRef _move__1, float _1, MR.CS.Std.String _2, MR.CS.Misc._MoveRef _move__3, string _3) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_IntRef_FloatRvalueRef_StdStringRef_StdStringRvalueRef._Underlying *__MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_Construct(int *_0, float *_1, MR.CS.Std.String._Underlying *_2, byte *_3, byte *_3_end);
                    fixed (int *__ptr__0 = &_0)
                    {
                        byte[] __bytes__3 = System.Text.Encoding.UTF8.GetBytes(_3);
                        fixed (byte *__ptr__3 = __bytes__3)
                        {
                            _UnderlyingPtr = __MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_Construct(__ptr__0, &_1, _2._UnderlyingPtr, __ptr__3, __ptr__3 + __bytes__3.Length);
                            _KeepAlive(_2);
                        }
                    }
                }

                /// The element 0, of type `int &`, read-only.
                public unsafe ref int GetIntRef()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_get_int_ref", ExactSpelling = true)]
                    extern static int *__MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_get_int_ref(_Underlying *_this);
                    return ref *__MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_get_int_ref(_UnderlyingPtr);
                }

                /// The element 1, of type `float &&`, read-only.
                public unsafe float GetFloatRvalueRef()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_get_float_rvalue_ref", ExactSpelling = true)]
                    extern static float *__MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_get_float_rvalue_ref(_Underlying *_this);
                    return *__MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_get_float_rvalue_ref(_UnderlyingPtr);
                }

                /// The element 2, of type `std::string &`, read-only.
                public unsafe MR.CS.Std.String GetStdStringRef()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_get_std_string_ref", ExactSpelling = true)]
                    extern static MR.CS.Std.String._Underlying *__MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_get_std_string_ref(_Underlying *_this);
                    MR.CS.Std.String __ret;
                    __ret = new(__MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_get_std_string_ref(_UnderlyingPtr), is_owning: false);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// The element 3, of type `std::string &&`, read-only.
                public unsafe MR.CS.Misc._Moved<MR.CS.Std.String> GetStdStringRvalueRef()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_get_std_string_rvalue_ref", ExactSpelling = true)]
                    extern static MR.CS.Std.String._Underlying *__MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_get_std_string_rvalue_ref(_Underlying *_this);
                    MR.CS.Misc._Moved<MR.CS.Std.String> __ret;
                    __ret = MR.CS.Misc.Move(new MR.CS.Std.String(__MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_get_std_string_rvalue_ref(_UnderlyingPtr), is_owning: false));
                    __ret.Value._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                // Custom extras:

                public void Deconstruct(out MR.CS.Misc.Ref<int> _1, out float _2, out MR.CS.Std.String _3, out MR.CS.Misc._Moved<MR.CS.Std.String> _4)
                {
                    _1 = new(ref GetIntRef());
                    _2 = GetFloatRvalueRef();
                    _3 = GetStdStringRef();
                    _4 = GetStdStringRvalueRef();
                }
            }

            /// Stores 4 objects: `int &`, `float &&`, `std::string &`, `std::string &&`.
            /// This is the non-const half of the class.
            public class Tuple_IntRef_FloatRvalueRef_StdStringRef_StdStringRvalueRef : Const_Tuple_IntRef_FloatRvalueRef_StdStringRef_StdStringRvalueRef
            {
                internal unsafe Tuple_IntRef_FloatRvalueRef_StdStringRef_StdStringRvalueRef(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs the tuple elementwise.
                public unsafe Tuple_IntRef_FloatRvalueRef_StdStringRef_StdStringRvalueRef(ref int _0, MR.CS.Misc._MoveRef _move__1, float _1, MR.CS.Std.String _2, MR.CS.Misc._MoveRef _move__3, string _3) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_IntRef_FloatRvalueRef_StdStringRef_StdStringRvalueRef._Underlying *__MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_Construct(int *_0, float *_1, MR.CS.Std.String._Underlying *_2, byte *_3, byte *_3_end);
                    fixed (int *__ptr__0 = &_0)
                    {
                        byte[] __bytes__3 = System.Text.Encoding.UTF8.GetBytes(_3);
                        fixed (byte *__ptr__3 = __bytes__3)
                        {
                            _UnderlyingPtr = __MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_Construct(__ptr__0, &_1, _2._UnderlyingPtr, __ptr__3, __ptr__3 + __bytes__3.Length);
                            _KeepAlive(_2);
                        }
                    }
                }
            }

            /// This is used for optional parameters of class `Tuple_IntRef_FloatRvalueRef_StdStringRef_StdStringRvalueRef` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Tuple_IntRef_FloatRvalueRef_StdStringRef_StdStringRvalueRef`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Tuple_IntRef_FloatRvalueRef_StdStringRef_StdStringRvalueRef`/`Const_Tuple_IntRef_FloatRvalueRef_StdStringRef_StdStringRvalueRef` directly.
            public class _InOptMut_Tuple_IntRef_FloatRvalueRef_StdStringRef_StdStringRvalueRef
            {
                public Tuple_IntRef_FloatRvalueRef_StdStringRef_StdStringRvalueRef? Opt;

                public _InOptMut_Tuple_IntRef_FloatRvalueRef_StdStringRef_StdStringRvalueRef() {}
                public _InOptMut_Tuple_IntRef_FloatRvalueRef_StdStringRef_StdStringRvalueRef(Tuple_IntRef_FloatRvalueRef_StdStringRef_StdStringRvalueRef value) {Opt = value;}
                public static implicit operator _InOptMut_Tuple_IntRef_FloatRvalueRef_StdStringRef_StdStringRvalueRef(Tuple_IntRef_FloatRvalueRef_StdStringRef_StdStringRvalueRef value) {return new(value);}
            }

            /// This is used for optional parameters of class `Tuple_IntRef_FloatRvalueRef_StdStringRef_StdStringRvalueRef` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Tuple_IntRef_FloatRvalueRef_StdStringRef_StdStringRvalueRef`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Tuple_IntRef_FloatRvalueRef_StdStringRef_StdStringRvalueRef`/`Const_Tuple_IntRef_FloatRvalueRef_StdStringRef_StdStringRvalueRef` to pass it to the function.
            public class _InOptConst_Tuple_IntRef_FloatRvalueRef_StdStringRef_StdStringRvalueRef
            {
                public Const_Tuple_IntRef_FloatRvalueRef_StdStringRef_StdStringRvalueRef? Opt;

                public _InOptConst_Tuple_IntRef_FloatRvalueRef_StdStringRef_StdStringRvalueRef() {}
                public _InOptConst_Tuple_IntRef_FloatRvalueRef_StdStringRef_StdStringRvalueRef(Const_Tuple_IntRef_FloatRvalueRef_StdStringRef_StdStringRvalueRef value) {Opt = value;}
                public static implicit operator _InOptConst_Tuple_IntRef_FloatRvalueRef_StdStringRef_StdStringRvalueRef(Const_Tuple_IntRef_FloatRvalueRef_StdStringRef_StdStringRvalueRef value) {return new(value);}
            }
        }
    }
}
