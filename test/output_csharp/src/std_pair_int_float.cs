public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// Stores two objects: `int` and `int`.
            /// This is the const half of the class.
            public class Const_Pair_Int_Float : MR.CS.Misc.Object<Const_Pair_Int_Float>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_Pair_Int_Float(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_int_float_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_pair_int_float_Destroy(_Underlying *_this);
                    __MR_C_std_pair_int_float_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Pair_Int_Float() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_Pair_Int_Float() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_int_float_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Pair_Int_Float._Underlying *__MR_C_std_pair_int_float_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_pair_int_float_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Const_Pair_Int_Float(MR.CS.Std.Const_Pair_Int_Float other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_int_float_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Pair_Int_Float._Underlying *__MR_C_std_pair_int_float_ConstructFromAnother(MR.CS.Std.Pair_Int_Float._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_pair_int_float_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// Constructs the pair elementwise.
                public unsafe Const_Pair_Int_Float(int first, float second) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_int_float_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.Pair_Int_Float._Underlying *__MR_C_std_pair_int_float_Construct(int first, float second);
                    _UnderlyingPtr = __MR_C_std_pair_int_float_Construct(first, second);
                }

                /// The first of the two elements, read-only.
                public unsafe int First()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_int_float_First", ExactSpelling = true)]
                    extern static int *__MR_C_std_pair_int_float_First(_Underlying *_this);
                    return *__MR_C_std_pair_int_float_First(_UnderlyingPtr);
                }

                /// The second of the two elements, read-only.
                public unsafe float Second()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_int_float_Second", ExactSpelling = true)]
                    extern static float *__MR_C_std_pair_int_float_Second(_Underlying *_this);
                    return *__MR_C_std_pair_int_float_Second(_UnderlyingPtr);
                }
            }

            /// Stores two objects: `int` and `int`.
            /// This is the non-const half of the class.
            public class Pair_Int_Float : Const_Pair_Int_Float
            {
                internal unsafe Pair_Int_Float(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Pair_Int_Float() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_int_float_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Pair_Int_Float._Underlying *__MR_C_std_pair_int_float_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_pair_int_float_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Pair_Int_Float(MR.CS.Std.Const_Pair_Int_Float other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_int_float_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Pair_Int_Float._Underlying *__MR_C_std_pair_int_float_ConstructFromAnother(MR.CS.Std.Pair_Int_Float._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_pair_int_float_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// Assigns the contents from another instance. Both objects remain alive after the call.
                public unsafe void Assign(MR.CS.Std.Const_Pair_Int_Float other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_int_float_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_pair_int_float_AssignFromAnother(_Underlying *_this, MR.CS.Std.Pair_Int_Float._Underlying *other);
                    _DiscardKeepAlive();
                    _KeepAlive(other);
                    __MR_C_std_pair_int_float_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                }

                /// Constructs the pair elementwise.
                public unsafe Pair_Int_Float(int first, float second) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_int_float_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.Pair_Int_Float._Underlying *__MR_C_std_pair_int_float_Construct(int first, float second);
                    _UnderlyingPtr = __MR_C_std_pair_int_float_Construct(first, second);
                }

                /// The first of the two elements, mutable.
                public unsafe new ref int First()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_int_float_MutableFirst", ExactSpelling = true)]
                    extern static int *__MR_C_std_pair_int_float_MutableFirst(_Underlying *_this);
                    return ref *__MR_C_std_pair_int_float_MutableFirst(_UnderlyingPtr);
                }

                /// The second of the two elements, mutable.
                public unsafe new ref float Second()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_int_float_MutableSecond", ExactSpelling = true)]
                    extern static float *__MR_C_std_pair_int_float_MutableSecond(_Underlying *_this);
                    return ref *__MR_C_std_pair_int_float_MutableSecond(_UnderlyingPtr);
                }
            }

            /// This is used for optional parameters of class `Pair_Int_Float` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Pair_Int_Float`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Pair_Int_Float`/`Const_Pair_Int_Float` directly.
            public class _InOptMut_Pair_Int_Float
            {
                public Pair_Int_Float? Opt;

                public _InOptMut_Pair_Int_Float() {}
                public _InOptMut_Pair_Int_Float(Pair_Int_Float value) {Opt = value;}
                public static implicit operator _InOptMut_Pair_Int_Float(Pair_Int_Float value) {return new(value);}
            }

            /// This is used for optional parameters of class `Pair_Int_Float` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Pair_Int_Float`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Pair_Int_Float`/`Const_Pair_Int_Float` to pass it to the function.
            public class _InOptConst_Pair_Int_Float
            {
                public Const_Pair_Int_Float? Opt;

                public _InOptConst_Pair_Int_Float() {}
                public _InOptConst_Pair_Int_Float(Const_Pair_Int_Float value) {Opt = value;}
                public static implicit operator _InOptConst_Pair_Int_Float(Const_Pair_Int_Float value) {return new(value);}
            }
        }
    }
}
