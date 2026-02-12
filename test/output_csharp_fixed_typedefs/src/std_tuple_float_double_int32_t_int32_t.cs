public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// Stores 4 objects: `float`, `double`, `int32_t`, `int32_t`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_Tuple_Float_Double_Int32T_Int32T : MR.CS.Misc.Object<Const_Tuple_Float_Double_Int32T_Int32T>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_float_double_int32_t_int32_t_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_tuple_float_double_int32_t_int32_t_Destroy(_Underlying *_this);
                    __MR_C_std_tuple_float_double_int32_t_int32_t_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Tuple_Float_Double_Int32T_Int32T() {Dispose(false);}

                internal unsafe Const_Tuple_Float_Double_Int32T_Int32T(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_Tuple_Float_Double_Int32T_Int32T() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_float_double_int32_t_int32_t_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_Float_Double_Int32T_Int32T._Underlying *__MR_C_std_tuple_float_double_int32_t_int32_t_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_tuple_float_double_int32_t_int32_t_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Const_Tuple_Float_Double_Int32T_Int32T(MR.CS.Std.Const_Tuple_Float_Double_Int32T_Int32T other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_float_double_int32_t_int32_t_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_Float_Double_Int32T_Int32T._Underlying *__MR_C_std_tuple_float_double_int32_t_int32_t_ConstructFromAnother(MR.CS.Std.Tuple_Float_Double_Int32T_Int32T._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_tuple_float_double_int32_t_int32_t_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Const_Tuple_Float_Double_Int32T_Int32T(Tuple_Float_Double_Int32T_Int32T other) : this((Const_Tuple_Float_Double_Int32T_Int32T)other) {}

                /// <summary>
                /// Constructs the tuple elementwise.
                /// </summary>
                public unsafe Const_Tuple_Float_Double_Int32T_Int32T(float _0, double _1, int _2, int _3) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_float_double_int32_t_int32_t_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_Float_Double_Int32T_Int32T._Underlying *__MR_C_std_tuple_float_double_int32_t_int32_t_Construct(float _0, double _1, int _2, int _3);
                    _UnderlyingPtr = __MR_C_std_tuple_float_double_int32_t_int32_t_Construct(_0, _1, _2, _3);
                }

                /// <summary>
                /// The element 0, of type `float`, read-only.
                /// </summary>
                public unsafe float getFloat()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_float_double_int32_t_int32_t_get_float", ExactSpelling = true)]
                    extern static float *__MR_C_std_tuple_float_double_int32_t_int32_t_get_float(_Underlying *_this);
                    return *__MR_C_std_tuple_float_double_int32_t_int32_t_get_float(_UnderlyingPtr);
                }

                /// <summary>
                /// The element 1, of type `double`, read-only.
                /// </summary>
                public unsafe double getDouble()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_float_double_int32_t_int32_t_get_double", ExactSpelling = true)]
                    extern static double *__MR_C_std_tuple_float_double_int32_t_int32_t_get_double(_Underlying *_this);
                    return *__MR_C_std_tuple_float_double_int32_t_int32_t_get_double(_UnderlyingPtr);
                }

                /// <summary>
                /// The element 2, of type `int32_t`, read-only.
                /// </summary>
                public unsafe int getInt32T2()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_float_double_int32_t_int32_t_get_int32_t_2", ExactSpelling = true)]
                    extern static int *__MR_C_std_tuple_float_double_int32_t_int32_t_get_int32_t_2(_Underlying *_this);
                    return *__MR_C_std_tuple_float_double_int32_t_int32_t_get_int32_t_2(_UnderlyingPtr);
                }

                /// <summary>
                /// The element 3, of type `int32_t`, read-only.
                /// </summary>
                public unsafe int getInt32T3()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_float_double_int32_t_int32_t_get_int32_t_3", ExactSpelling = true)]
                    extern static int *__MR_C_std_tuple_float_double_int32_t_int32_t_get_int32_t_3(_Underlying *_this);
                    return *__MR_C_std_tuple_float_double_int32_t_int32_t_get_int32_t_3(_UnderlyingPtr);
                }

                // Custom extras:

                public void Deconstruct(out float _1, out double _2, out int _3, out int _4)
                {
                    _1 = getFloat();
                    _2 = getDouble();
                    _3 = getInt32T2();
                    _4 = getInt32T3();
                }
            }

            /// <summary>
            /// Stores 4 objects: `float`, `double`, `int32_t`, `int32_t`.
            /// This is the non-const half of the class.
            /// </summary>
            public class Tuple_Float_Double_Int32T_Int32T : Const_Tuple_Float_Double_Int32T_Int32T
            {
                internal unsafe Tuple_Float_Double_Int32T_Int32T(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Tuple_Float_Double_Int32T_Int32T() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_float_double_int32_t_int32_t_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_Float_Double_Int32T_Int32T._Underlying *__MR_C_std_tuple_float_double_int32_t_int32_t_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_tuple_float_double_int32_t_int32_t_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Tuple_Float_Double_Int32T_Int32T(MR.CS.Std.Const_Tuple_Float_Double_Int32T_Int32T other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_float_double_int32_t_int32_t_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_Float_Double_Int32T_Int32T._Underlying *__MR_C_std_tuple_float_double_int32_t_int32_t_ConstructFromAnother(MR.CS.Std.Tuple_Float_Double_Int32T_Int32T._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_tuple_float_double_int32_t_int32_t_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Tuple_Float_Double_Int32T_Int32T(Tuple_Float_Double_Int32T_Int32T other) : this((Const_Tuple_Float_Double_Int32T_Int32T)other) {}

                /// <summary>
                /// Assigns the contents from another instance. Both objects remain alive after the call.
                /// </summary>
                public unsafe void assign(MR.CS.Std.Const_Tuple_Float_Double_Int32T_Int32T other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_float_double_int32_t_int32_t_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_tuple_float_double_int32_t_int32_t_AssignFromAnother(_Underlying *_this, MR.CS.Std.Tuple_Float_Double_Int32T_Int32T._Underlying *other);
                    _DiscardKeepAlive();
                    _KeepAlive(other);
                    __MR_C_std_tuple_float_double_int32_t_int32_t_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                }

                /// <summary>
                /// Constructs the tuple elementwise.
                /// </summary>
                public unsafe Tuple_Float_Double_Int32T_Int32T(float _0, double _1, int _2, int _3) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_float_double_int32_t_int32_t_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_Float_Double_Int32T_Int32T._Underlying *__MR_C_std_tuple_float_double_int32_t_int32_t_Construct(float _0, double _1, int _2, int _3);
                    _UnderlyingPtr = __MR_C_std_tuple_float_double_int32_t_int32_t_Construct(_0, _1, _2, _3);
                }

                /// <summary>
                /// The element 0, of type `float`, mutable.
                /// </summary>
                public unsafe new ref float getFloat()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_float_double_int32_t_int32_t_get_float_mut", ExactSpelling = true)]
                    extern static float *__MR_C_std_tuple_float_double_int32_t_int32_t_get_float_mut(_Underlying *_this);
                    return ref *__MR_C_std_tuple_float_double_int32_t_int32_t_get_float_mut(_UnderlyingPtr);
                }

                /// <summary>
                /// The element 1, of type `double`, mutable.
                /// </summary>
                public unsafe new ref double getDouble()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_float_double_int32_t_int32_t_get_double_mut", ExactSpelling = true)]
                    extern static double *__MR_C_std_tuple_float_double_int32_t_int32_t_get_double_mut(_Underlying *_this);
                    return ref *__MR_C_std_tuple_float_double_int32_t_int32_t_get_double_mut(_UnderlyingPtr);
                }

                /// <summary>
                /// The element 2, of type `int32_t`, mutable.
                /// </summary>
                public unsafe new ref int getInt32T2()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_float_double_int32_t_int32_t_get_int32_t_2_mut", ExactSpelling = true)]
                    extern static int *__MR_C_std_tuple_float_double_int32_t_int32_t_get_int32_t_2_mut(_Underlying *_this);
                    return ref *__MR_C_std_tuple_float_double_int32_t_int32_t_get_int32_t_2_mut(_UnderlyingPtr);
                }

                /// <summary>
                /// The element 3, of type `int32_t`, mutable.
                /// </summary>
                public unsafe new ref int getInt32T3()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_float_double_int32_t_int32_t_get_int32_t_3_mut", ExactSpelling = true)]
                    extern static int *__MR_C_std_tuple_float_double_int32_t_int32_t_get_int32_t_3_mut(_Underlying *_this);
                    return ref *__MR_C_std_tuple_float_double_int32_t_int32_t_get_int32_t_3_mut(_UnderlyingPtr);
                }

                // Custom extras:

                public void Deconstruct(out MR.CS.Misc.Ref<float> _1, out MR.CS.Misc.Ref<double> _2, out MR.CS.Misc.Ref<int> _3, out MR.CS.Misc.Ref<int> _4)
                {
                    _1 = new(ref getFloat());
                    _2 = new(ref getDouble());
                    _3 = new(ref getInt32T2());
                    _4 = new(ref getInt32T3());
                }
            }

            /// <summary>
            /// This is used for optional parameters of class `Tuple_Float_Double_Int32T_Int32T` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Tuple_Float_Double_Int32T_Int32T`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Tuple_Float_Double_Int32T_Int32T`/`Const_Tuple_Float_Double_Int32T_Int32T` directly.
            /// </summary>
            public class _InOptMut_Tuple_Float_Double_Int32T_Int32T
            {
                public Tuple_Float_Double_Int32T_Int32T? Opt;

                public _InOptMut_Tuple_Float_Double_Int32T_Int32T() {}
                public _InOptMut_Tuple_Float_Double_Int32T_Int32T(Tuple_Float_Double_Int32T_Int32T value) {Opt = value;}
                public static implicit operator _InOptMut_Tuple_Float_Double_Int32T_Int32T(Tuple_Float_Double_Int32T_Int32T value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Tuple_Float_Double_Int32T_Int32T` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Tuple_Float_Double_Int32T_Int32T`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Tuple_Float_Double_Int32T_Int32T`/`Const_Tuple_Float_Double_Int32T_Int32T` to pass it to the function.
            /// </summary>
            public class _InOptConst_Tuple_Float_Double_Int32T_Int32T
            {
                public Const_Tuple_Float_Double_Int32T_Int32T? Opt;

                public _InOptConst_Tuple_Float_Double_Int32T_Int32T() {}
                public _InOptConst_Tuple_Float_Double_Int32T_Int32T(Const_Tuple_Float_Double_Int32T_Int32T value) {Opt = value;}
                public static implicit operator _InOptConst_Tuple_Float_Double_Int32T_Int32T(Const_Tuple_Float_Double_Int32T_Int32T value) {return new(value);}
            }
        }
    }
}
