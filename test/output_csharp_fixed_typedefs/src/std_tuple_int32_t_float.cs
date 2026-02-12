public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// Stores 2 objects: `int32_t`, `float`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_Tuple_Int32T_Float : MR.CS.Misc.Object<Const_Tuple_Int32T_Float>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_int32_t_float_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_tuple_int32_t_float_Destroy(_Underlying *_this);
                    __MR_C_std_tuple_int32_t_float_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Tuple_Int32T_Float() {Dispose(false);}

                internal unsafe Const_Tuple_Int32T_Float(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_Tuple_Int32T_Float() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_int32_t_float_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_Int32T_Float._Underlying *__MR_C_std_tuple_int32_t_float_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_tuple_int32_t_float_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Const_Tuple_Int32T_Float(MR.CS.Std.Const_Tuple_Int32T_Float other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_int32_t_float_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_Int32T_Float._Underlying *__MR_C_std_tuple_int32_t_float_ConstructFromAnother(MR.CS.Std.Tuple_Int32T_Float._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_tuple_int32_t_float_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Const_Tuple_Int32T_Float(Tuple_Int32T_Float other) : this((Const_Tuple_Int32T_Float)other) {}

                /// <summary>
                /// Constructs the tuple elementwise.
                /// </summary>
                public unsafe Const_Tuple_Int32T_Float(int _0, float _1) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_int32_t_float_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_Int32T_Float._Underlying *__MR_C_std_tuple_int32_t_float_Construct(int _0, float _1);
                    _UnderlyingPtr = __MR_C_std_tuple_int32_t_float_Construct(_0, _1);
                }

                /// <summary>
                /// The element 0, of type `int32_t`, read-only.
                /// </summary>
                public unsafe int getInt32T()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_int32_t_float_get_int32_t", ExactSpelling = true)]
                    extern static int *__MR_C_std_tuple_int32_t_float_get_int32_t(_Underlying *_this);
                    return *__MR_C_std_tuple_int32_t_float_get_int32_t(_UnderlyingPtr);
                }

                /// <summary>
                /// The element 1, of type `float`, read-only.
                /// </summary>
                public unsafe float getFloat()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_int32_t_float_get_float", ExactSpelling = true)]
                    extern static float *__MR_C_std_tuple_int32_t_float_get_float(_Underlying *_this);
                    return *__MR_C_std_tuple_int32_t_float_get_float(_UnderlyingPtr);
                }

                // Custom extras:

                public void Deconstruct(out int _1, out float _2)
                {
                    _1 = getInt32T();
                    _2 = getFloat();
                }
            }

            /// <summary>
            /// Stores 2 objects: `int32_t`, `float`.
            /// This is the non-const half of the class.
            /// </summary>
            public class Tuple_Int32T_Float : Const_Tuple_Int32T_Float
            {
                internal unsafe Tuple_Int32T_Float(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Tuple_Int32T_Float() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_int32_t_float_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_Int32T_Float._Underlying *__MR_C_std_tuple_int32_t_float_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_tuple_int32_t_float_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Tuple_Int32T_Float(MR.CS.Std.Const_Tuple_Int32T_Float other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_int32_t_float_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_Int32T_Float._Underlying *__MR_C_std_tuple_int32_t_float_ConstructFromAnother(MR.CS.Std.Tuple_Int32T_Float._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_tuple_int32_t_float_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Tuple_Int32T_Float(Tuple_Int32T_Float other) : this((Const_Tuple_Int32T_Float)other) {}

                /// <summary>
                /// Assigns the contents from another instance. Both objects remain alive after the call.
                /// </summary>
                public unsafe void assign(MR.CS.Std.Const_Tuple_Int32T_Float other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_int32_t_float_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_tuple_int32_t_float_AssignFromAnother(_Underlying *_this, MR.CS.Std.Tuple_Int32T_Float._Underlying *other);
                    _DiscardKeepAlive();
                    _KeepAlive(other);
                    __MR_C_std_tuple_int32_t_float_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                }

                /// <summary>
                /// Constructs the tuple elementwise.
                /// </summary>
                public unsafe Tuple_Int32T_Float(int _0, float _1) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_int32_t_float_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_Int32T_Float._Underlying *__MR_C_std_tuple_int32_t_float_Construct(int _0, float _1);
                    _UnderlyingPtr = __MR_C_std_tuple_int32_t_float_Construct(_0, _1);
                }

                /// <summary>
                /// The element 0, of type `int32_t`, mutable.
                /// </summary>
                public unsafe new ref int getInt32T()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_int32_t_float_get_int32_t_mut", ExactSpelling = true)]
                    extern static int *__MR_C_std_tuple_int32_t_float_get_int32_t_mut(_Underlying *_this);
                    return ref *__MR_C_std_tuple_int32_t_float_get_int32_t_mut(_UnderlyingPtr);
                }

                /// <summary>
                /// The element 1, of type `float`, mutable.
                /// </summary>
                public unsafe new ref float getFloat()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_int32_t_float_get_float_mut", ExactSpelling = true)]
                    extern static float *__MR_C_std_tuple_int32_t_float_get_float_mut(_Underlying *_this);
                    return ref *__MR_C_std_tuple_int32_t_float_get_float_mut(_UnderlyingPtr);
                }

                // Custom extras:

                public void Deconstruct(out MR.CS.Misc.Ref<int> _1, out MR.CS.Misc.Ref<float> _2)
                {
                    _1 = new(ref getInt32T());
                    _2 = new(ref getFloat());
                }
            }

            /// <summary>
            /// This is used for optional parameters of class `Tuple_Int32T_Float` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Tuple_Int32T_Float`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Tuple_Int32T_Float`/`Const_Tuple_Int32T_Float` directly.
            /// </summary>
            public class _InOptMut_Tuple_Int32T_Float
            {
                public Tuple_Int32T_Float? Opt;

                public _InOptMut_Tuple_Int32T_Float() {}
                public _InOptMut_Tuple_Int32T_Float(Tuple_Int32T_Float value) {Opt = value;}
                public static implicit operator _InOptMut_Tuple_Int32T_Float(Tuple_Int32T_Float value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Tuple_Int32T_Float` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Tuple_Int32T_Float`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Tuple_Int32T_Float`/`Const_Tuple_Int32T_Float` to pass it to the function.
            /// </summary>
            public class _InOptConst_Tuple_Int32T_Float
            {
                public Const_Tuple_Int32T_Float? Opt;

                public _InOptConst_Tuple_Int32T_Float() {}
                public _InOptConst_Tuple_Int32T_Float(Const_Tuple_Int32T_Float value) {Opt = value;}
                public static implicit operator _InOptConst_Tuple_Int32T_Float(Const_Tuple_Int32T_Float value) {return new(value);}
            }
        }
    }
}
