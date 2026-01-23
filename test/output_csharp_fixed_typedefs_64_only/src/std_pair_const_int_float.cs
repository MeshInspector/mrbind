public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// Stores two objects: `const int` and `const int`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_Pair_ConstInt_Float : MR.CS.Misc.Object<Const_Pair_ConstInt_Float>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_Pair_ConstInt_Float(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_const_int_float_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_pair_const_int_float_Destroy(_Underlying *_this);
                    __MR_C_std_pair_const_int_float_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Pair_ConstInt_Float() {Dispose(false);}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_Pair_ConstInt_Float() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_const_int_float_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Pair_ConstInt_Float._Underlying *__MR_C_std_pair_const_int_float_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_pair_const_int_float_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Const_Pair_ConstInt_Float(MR.CS.Std.Const_Pair_ConstInt_Float other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_const_int_float_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Pair_ConstInt_Float._Underlying *__MR_C_std_pair_const_int_float_ConstructFromAnother(MR.CS.Std.Pair_ConstInt_Float._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_pair_const_int_float_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// <summary>
                /// Constructs the pair elementwise.
                /// </summary>
                public unsafe Const_Pair_ConstInt_Float(int first, float second) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_const_int_float_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.Pair_ConstInt_Float._Underlying *__MR_C_std_pair_const_int_float_Construct(int first, float second);
                    _UnderlyingPtr = __MR_C_std_pair_const_int_float_Construct(first, second);
                }

                /// <summary>
                /// The first of the two elements, read-only.
                /// </summary>
                public unsafe int first()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_const_int_float_First", ExactSpelling = true)]
                    extern static int *__MR_C_std_pair_const_int_float_First(_Underlying *_this);
                    return *__MR_C_std_pair_const_int_float_First(_UnderlyingPtr);
                }

                /// <summary>
                /// The second of the two elements, read-only.
                /// </summary>
                public unsafe float second()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_const_int_float_Second", ExactSpelling = true)]
                    extern static float *__MR_C_std_pair_const_int_float_Second(_Underlying *_this);
                    return *__MR_C_std_pair_const_int_float_Second(_UnderlyingPtr);
                }
            }

            /// <summary>
            /// Stores two objects: `const int` and `const int`.
            /// This is the non-const half of the class.
            /// </summary>
            public class Pair_ConstInt_Float : Const_Pair_ConstInt_Float
            {
                internal unsafe Pair_ConstInt_Float(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Pair_ConstInt_Float() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_const_int_float_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Pair_ConstInt_Float._Underlying *__MR_C_std_pair_const_int_float_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_pair_const_int_float_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Pair_ConstInt_Float(MR.CS.Std.Const_Pair_ConstInt_Float other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_const_int_float_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Pair_ConstInt_Float._Underlying *__MR_C_std_pair_const_int_float_ConstructFromAnother(MR.CS.Std.Pair_ConstInt_Float._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_pair_const_int_float_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// <summary>
                /// Constructs the pair elementwise.
                /// </summary>
                public unsafe Pair_ConstInt_Float(int first, float second) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_const_int_float_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.Pair_ConstInt_Float._Underlying *__MR_C_std_pair_const_int_float_Construct(int first, float second);
                    _UnderlyingPtr = __MR_C_std_pair_const_int_float_Construct(first, second);
                }

                /// <summary>
                /// The second of the two elements, mutable.
                /// </summary>
                public unsafe new ref float second()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_const_int_float_MutableSecond", ExactSpelling = true)]
                    extern static float *__MR_C_std_pair_const_int_float_MutableSecond(_Underlying *_this);
                    return ref *__MR_C_std_pair_const_int_float_MutableSecond(_UnderlyingPtr);
                }
            }

            /// <summary>
            /// This is used for optional parameters of class `Pair_ConstInt_Float` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Pair_ConstInt_Float`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Pair_ConstInt_Float`/`Const_Pair_ConstInt_Float` directly.
            /// </summary>
            public class _InOptMut_Pair_ConstInt_Float
            {
                public Pair_ConstInt_Float? Opt;

                public _InOptMut_Pair_ConstInt_Float() {}
                public _InOptMut_Pair_ConstInt_Float(Pair_ConstInt_Float value) {Opt = value;}
                public static implicit operator _InOptMut_Pair_ConstInt_Float(Pair_ConstInt_Float value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Pair_ConstInt_Float` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Pair_ConstInt_Float`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Pair_ConstInt_Float`/`Const_Pair_ConstInt_Float` to pass it to the function.
            /// </summary>
            public class _InOptConst_Pair_ConstInt_Float
            {
                public Const_Pair_ConstInt_Float? Opt;

                public _InOptConst_Pair_ConstInt_Float() {}
                public _InOptConst_Pair_ConstInt_Float(Const_Pair_ConstInt_Float value) {Opt = value;}
                public static implicit operator _InOptConst_Pair_ConstInt_Float(Const_Pair_ConstInt_Float value) {return new(value);}
            }
        }
    }
}
