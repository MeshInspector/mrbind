public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// Stores 4 objects: `float`, `double`, `int`, `int`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_Tuple_Float_Double_Int_Int : MR.CS.Misc.Object<Const_Tuple_Float_Double_Int_Int>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_Tuple_Float_Double_Int_Int(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_float_double_int_int_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_tuple_float_double_int_int_Destroy(_Underlying *_this);
                    __MR_C_std_tuple_float_double_int_int_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Tuple_Float_Double_Int_Int() {Dispose(false);}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_Tuple_Float_Double_Int_Int() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_float_double_int_int_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_Float_Double_Int_Int._Underlying *__MR_C_std_tuple_float_double_int_int_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_tuple_float_double_int_int_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Const_Tuple_Float_Double_Int_Int(MR.CS.Std.Const_Tuple_Float_Double_Int_Int other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_float_double_int_int_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_Float_Double_Int_Int._Underlying *__MR_C_std_tuple_float_double_int_int_ConstructFromAnother(MR.CS.Std.Tuple_Float_Double_Int_Int._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_tuple_float_double_int_int_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// <summary>
                /// Constructs the tuple elementwise.
                /// </summary>
                public unsafe Const_Tuple_Float_Double_Int_Int(float _0, double _1, int _2, int _3) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_float_double_int_int_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_Float_Double_Int_Int._Underlying *__MR_C_std_tuple_float_double_int_int_Construct(float _0, double _1, int _2, int _3);
                    _UnderlyingPtr = __MR_C_std_tuple_float_double_int_int_Construct(_0, _1, _2, _3);
                }

                /// <summary>
                /// The element 0, of type `float`, read-only.
                /// </summary>
                public unsafe float getFloat()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_float_double_int_int_Get_float", ExactSpelling = true)]
                    extern static float *__MR_C_std_tuple_float_double_int_int_Get_float(_Underlying *_this);
                    return *__MR_C_std_tuple_float_double_int_int_Get_float(_UnderlyingPtr);
                }

                /// <summary>
                /// The element 1, of type `double`, read-only.
                /// </summary>
                public unsafe double getDouble()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_float_double_int_int_Get_double", ExactSpelling = true)]
                    extern static double *__MR_C_std_tuple_float_double_int_int_Get_double(_Underlying *_this);
                    return *__MR_C_std_tuple_float_double_int_int_Get_double(_UnderlyingPtr);
                }

                /// <summary>
                /// The element 2, of type `int`, read-only.
                /// </summary>
                public unsafe int getInt2()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_float_double_int_int_Get_int_2", ExactSpelling = true)]
                    extern static int *__MR_C_std_tuple_float_double_int_int_Get_int_2(_Underlying *_this);
                    return *__MR_C_std_tuple_float_double_int_int_Get_int_2(_UnderlyingPtr);
                }

                /// <summary>
                /// The element 3, of type `int`, read-only.
                /// </summary>
                public unsafe int getInt3()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_float_double_int_int_Get_int_3", ExactSpelling = true)]
                    extern static int *__MR_C_std_tuple_float_double_int_int_Get_int_3(_Underlying *_this);
                    return *__MR_C_std_tuple_float_double_int_int_Get_int_3(_UnderlyingPtr);
                }
            }

            /// <summary>
            /// Stores 4 objects: `float`, `double`, `int`, `int`.
            /// This is the non-const half of the class.
            /// </summary>
            public class Tuple_Float_Double_Int_Int : Const_Tuple_Float_Double_Int_Int
            {
                internal unsafe Tuple_Float_Double_Int_Int(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Tuple_Float_Double_Int_Int() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_float_double_int_int_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_Float_Double_Int_Int._Underlying *__MR_C_std_tuple_float_double_int_int_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_tuple_float_double_int_int_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Tuple_Float_Double_Int_Int(MR.CS.Std.Const_Tuple_Float_Double_Int_Int other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_float_double_int_int_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_Float_Double_Int_Int._Underlying *__MR_C_std_tuple_float_double_int_int_ConstructFromAnother(MR.CS.Std.Tuple_Float_Double_Int_Int._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_tuple_float_double_int_int_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// <summary>
                /// Assigns the contents from another instance. Both objects remain alive after the call.
                /// </summary>
                public unsafe void assign(MR.CS.Std.Const_Tuple_Float_Double_Int_Int other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_float_double_int_int_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_tuple_float_double_int_int_AssignFromAnother(_Underlying *_this, MR.CS.Std.Tuple_Float_Double_Int_Int._Underlying *other);
                    _DiscardKeepAlive();
                    _KeepAlive(other);
                    __MR_C_std_tuple_float_double_int_int_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                }

                /// <summary>
                /// Constructs the tuple elementwise.
                /// </summary>
                public unsafe Tuple_Float_Double_Int_Int(float _0, double _1, int _2, int _3) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_float_double_int_int_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_Float_Double_Int_Int._Underlying *__MR_C_std_tuple_float_double_int_int_Construct(float _0, double _1, int _2, int _3);
                    _UnderlyingPtr = __MR_C_std_tuple_float_double_int_int_Construct(_0, _1, _2, _3);
                }

                /// <summary>
                /// The element 0, of type `float`, mutable.
                /// </summary>
                public unsafe new ref float getFloat()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_float_double_int_int_GetMutable_float", ExactSpelling = true)]
                    extern static float *__MR_C_std_tuple_float_double_int_int_GetMutable_float(_Underlying *_this);
                    return ref *__MR_C_std_tuple_float_double_int_int_GetMutable_float(_UnderlyingPtr);
                }

                /// <summary>
                /// The element 1, of type `double`, mutable.
                /// </summary>
                public unsafe new ref double getDouble()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_float_double_int_int_GetMutable_double", ExactSpelling = true)]
                    extern static double *__MR_C_std_tuple_float_double_int_int_GetMutable_double(_Underlying *_this);
                    return ref *__MR_C_std_tuple_float_double_int_int_GetMutable_double(_UnderlyingPtr);
                }

                /// <summary>
                /// The element 2, of type `int`, mutable.
                /// </summary>
                public unsafe new ref int getInt2()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_float_double_int_int_GetMutable_int_2", ExactSpelling = true)]
                    extern static int *__MR_C_std_tuple_float_double_int_int_GetMutable_int_2(_Underlying *_this);
                    return ref *__MR_C_std_tuple_float_double_int_int_GetMutable_int_2(_UnderlyingPtr);
                }

                /// <summary>
                /// The element 3, of type `int`, mutable.
                /// </summary>
                public unsafe new ref int getInt3()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_float_double_int_int_GetMutable_int_3", ExactSpelling = true)]
                    extern static int *__MR_C_std_tuple_float_double_int_int_GetMutable_int_3(_Underlying *_this);
                    return ref *__MR_C_std_tuple_float_double_int_int_GetMutable_int_3(_UnderlyingPtr);
                }
            }

            /// <summary>
            /// This is used for optional parameters of class `Tuple_Float_Double_Int_Int` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Tuple_Float_Double_Int_Int`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Tuple_Float_Double_Int_Int`/`Const_Tuple_Float_Double_Int_Int` directly.
            /// </summary>
            public class _InOptMut_Tuple_Float_Double_Int_Int
            {
                public Tuple_Float_Double_Int_Int? Opt;

                public _InOptMut_Tuple_Float_Double_Int_Int() {}
                public _InOptMut_Tuple_Float_Double_Int_Int(Tuple_Float_Double_Int_Int value) {Opt = value;}
                public static implicit operator _InOptMut_Tuple_Float_Double_Int_Int(Tuple_Float_Double_Int_Int value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Tuple_Float_Double_Int_Int` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Tuple_Float_Double_Int_Int`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Tuple_Float_Double_Int_Int`/`Const_Tuple_Float_Double_Int_Int` to pass it to the function.
            /// </summary>
            public class _InOptConst_Tuple_Float_Double_Int_Int
            {
                public Const_Tuple_Float_Double_Int_Int? Opt;

                public _InOptConst_Tuple_Float_Double_Int_Int() {}
                public _InOptConst_Tuple_Float_Double_Int_Int(Const_Tuple_Float_Double_Int_Int value) {Opt = value;}
                public static implicit operator _InOptConst_Tuple_Float_Double_Int_Int(Const_Tuple_Float_Double_Int_Int value) {return new(value);}
            }
        }
    }
}
