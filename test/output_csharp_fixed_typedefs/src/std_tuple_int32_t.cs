public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// Stores 1 object: `int32_t`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_Tuple_Int32T : MR.CS.Misc.Object<Const_Tuple_Int32T>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_int32_t_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_tuple_int32_t_Destroy(_Underlying *_this);
                    __MR_C_std_tuple_int32_t_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Tuple_Int32T() {Dispose(false);}

                internal unsafe Const_Tuple_Int32T(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_Tuple_Int32T() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_int32_t_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_Int32T._Underlying *__MR_C_std_tuple_int32_t_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_tuple_int32_t_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Const_Tuple_Int32T(MR.CS.Std.Const_Tuple_Int32T other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_int32_t_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_Int32T._Underlying *__MR_C_std_tuple_int32_t_ConstructFromAnother(MR.CS.Std.Tuple_Int32T._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_tuple_int32_t_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Const_Tuple_Int32T(Tuple_Int32T other) : this((Const_Tuple_Int32T)other) {}

                /// <summary>
                /// Constructs the tuple elementwise.
                /// </summary>
                public unsafe Const_Tuple_Int32T(int _0) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_int32_t_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_Int32T._Underlying *__MR_C_std_tuple_int32_t_Construct(int _0);
                    _UnderlyingPtr = __MR_C_std_tuple_int32_t_Construct(_0);
                }

                /// <summary>
                /// Constructs the tuple elementwise.
                /// </summary>
                public static unsafe implicit operator Const_Tuple_Int32T(int _0) {return new(_0);}

                /// <summary>
                /// The element 0, of type `int32_t`, read-only.
                /// </summary>
                public unsafe int getInt32T()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_int32_t_get_int32_t", ExactSpelling = true)]
                    extern static int *__MR_C_std_tuple_int32_t_get_int32_t(_Underlying *_this);
                    return *__MR_C_std_tuple_int32_t_get_int32_t(_UnderlyingPtr);
                }
            }

            /// <summary>
            /// Stores 1 object: `int32_t`.
            /// This is the non-const half of the class.
            /// </summary>
            public class Tuple_Int32T : Const_Tuple_Int32T
            {
                internal unsafe Tuple_Int32T(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Tuple_Int32T() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_int32_t_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_Int32T._Underlying *__MR_C_std_tuple_int32_t_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_tuple_int32_t_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Tuple_Int32T(MR.CS.Std.Const_Tuple_Int32T other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_int32_t_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_Int32T._Underlying *__MR_C_std_tuple_int32_t_ConstructFromAnother(MR.CS.Std.Tuple_Int32T._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_tuple_int32_t_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Tuple_Int32T(Tuple_Int32T other) : this((Const_Tuple_Int32T)other) {}

                /// <summary>
                /// Assigns the contents from another instance. Both objects remain alive after the call.
                /// </summary>
                public unsafe void assign(MR.CS.Std.Const_Tuple_Int32T other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_int32_t_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_tuple_int32_t_AssignFromAnother(_Underlying *_this, MR.CS.Std.Tuple_Int32T._Underlying *other);
                    _DiscardKeepAlive();
                    _KeepAlive(other);
                    __MR_C_std_tuple_int32_t_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                }

                /// <summary>
                /// Constructs the tuple elementwise.
                /// </summary>
                public unsafe Tuple_Int32T(int _0) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_int32_t_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_Int32T._Underlying *__MR_C_std_tuple_int32_t_Construct(int _0);
                    _UnderlyingPtr = __MR_C_std_tuple_int32_t_Construct(_0);
                }

                /// <summary>
                /// Constructs the tuple elementwise.
                /// </summary>
                public static unsafe implicit operator Tuple_Int32T(int _0) {return new(_0);}

                /// <summary>
                /// The element 0, of type `int32_t`, mutable.
                /// </summary>
                public unsafe new ref int getInt32T()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_int32_t_get_int32_t_mut", ExactSpelling = true)]
                    extern static int *__MR_C_std_tuple_int32_t_get_int32_t_mut(_Underlying *_this);
                    return ref *__MR_C_std_tuple_int32_t_get_int32_t_mut(_UnderlyingPtr);
                }
            }

            /// <summary>
            /// This is used for optional parameters of class `Tuple_Int32T` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Tuple_Int32T`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Tuple_Int32T`/`Const_Tuple_Int32T` directly.
            /// </summary>
            public class _InOptMut_Tuple_Int32T
            {
                public Tuple_Int32T? Opt;

                public _InOptMut_Tuple_Int32T() {}
                public _InOptMut_Tuple_Int32T(Tuple_Int32T value) {Opt = value;}
                public static implicit operator _InOptMut_Tuple_Int32T(Tuple_Int32T value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Tuple_Int32T` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Tuple_Int32T`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Tuple_Int32T`/`Const_Tuple_Int32T` to pass it to the function.
            /// </summary>
            public class _InOptConst_Tuple_Int32T
            {
                public Const_Tuple_Int32T? Opt;

                public _InOptConst_Tuple_Int32T() {}
                public _InOptConst_Tuple_Int32T(Const_Tuple_Int32T value) {Opt = value;}
                public static implicit operator _InOptConst_Tuple_Int32T(Const_Tuple_Int32T value) {return new(value);}

                /// <summary>
                /// Constructs the tuple elementwise.
                /// </summary>
                public static unsafe implicit operator _InOptConst_Tuple_Int32T(int _0) {return new Const_Tuple_Int32T(_0);}
            }
        }
    }
}
