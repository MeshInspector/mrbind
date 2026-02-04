public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// Wraps a pointer to a single heap-allocated `int32_t`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_UniquePtr_Int32T : MR.CS.Misc.Object<Const_UniquePtr_Int32T>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_int32_t_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_unique_ptr_int32_t_Destroy(_Underlying *_this);
                    __MR_C_std_unique_ptr_int32_t_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_UniquePtr_Int32T() {Dispose(false);}

                internal unsafe Const_UniquePtr_Int32T(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_UniquePtr_Int32T() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_int32_t_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.UniquePtr_Int32T._Underlying *__MR_C_std_unique_ptr_int32_t_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_unique_ptr_int32_t_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Const_UniquePtr_Int32T(MR.CS.Std.Const_UniquePtr_Int32T other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_int32_t_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.UniquePtr_Int32T._Underlying *__MR_C_std_unique_ptr_int32_t_ConstructFromAnother(MR.CS.Std.UniquePtr_Int32T._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_unique_ptr_int32_t_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// <summary>
                /// Constructs a new instance.
                /// </summary>
                public unsafe Const_UniquePtr_Int32T(void *other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_int32_t_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Std.UniquePtr_Int32T._Underlying *__MR_C_std_unique_ptr_int32_t_ConstructFrom(void *other);
                    _UnderlyingPtr = __MR_C_std_unique_ptr_int32_t_ConstructFrom(other);
                }

                /// <summary>
                /// Constructs a new instance.
                /// </summary>
                public static unsafe implicit operator Const_UniquePtr_Int32T(void *other) {return new(other);}

                /// <summary>
                /// Returns the stored pointer, possibly null.
                /// </summary>
                public unsafe MR.CS.Misc.Ref<int>? get()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_int32_t_get", ExactSpelling = true)]
                    extern static int *__MR_C_std_unique_ptr_int32_t_get(_Underlying *_this);
                    var __c_ret = __MR_C_std_unique_ptr_int32_t_get(_UnderlyingPtr);
                    return __c_ret is not null ? new MR.CS.Misc.Ref<int>(__c_ret) : null;
                }
            }

            /// <summary>
            /// Wraps a pointer to a single heap-allocated `int32_t`.
            /// This is the non-const half of the class.
            /// </summary>
            public class UniquePtr_Int32T : Const_UniquePtr_Int32T
            {
                internal unsafe UniquePtr_Int32T(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe UniquePtr_Int32T() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_int32_t_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.UniquePtr_Int32T._Underlying *__MR_C_std_unique_ptr_int32_t_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_unique_ptr_int32_t_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe UniquePtr_Int32T(MR.CS.Std.Const_UniquePtr_Int32T other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_int32_t_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.UniquePtr_Int32T._Underlying *__MR_C_std_unique_ptr_int32_t_ConstructFromAnother(MR.CS.Std.UniquePtr_Int32T._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_unique_ptr_int32_t_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// <summary>
                /// Constructs a new instance.
                /// </summary>
                public unsafe UniquePtr_Int32T(void *other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_int32_t_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Std.UniquePtr_Int32T._Underlying *__MR_C_std_unique_ptr_int32_t_ConstructFrom(void *other);
                    _UnderlyingPtr = __MR_C_std_unique_ptr_int32_t_ConstructFrom(other);
                }

                /// <summary>
                /// Constructs a new instance.
                /// </summary>
                public static unsafe implicit operator UniquePtr_Int32T(void *other) {return new(other);}

                /// <summary>
                /// Assigns the contents from another instance. Both objects remain alive after the call.
                /// </summary>
                public unsafe void assign(MR.CS.Std.Const_UniquePtr_Int32T other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_int32_t_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_unique_ptr_int32_t_AssignFromAnother(_Underlying *_this, MR.CS.Std.UniquePtr_Int32T._Underlying *other);
                    _DiscardKeepAlive();
                    _KeepAlive(other);
                    __MR_C_std_unique_ptr_int32_t_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                }

                /// <summary>
                /// Assigns the contents.
                /// </summary>
                public unsafe void assign(void *other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_int32_t_AssignFrom", ExactSpelling = true)]
                    extern static void __MR_C_std_unique_ptr_int32_t_AssignFrom(_Underlying *_this, void *other);
                    __MR_C_std_unique_ptr_int32_t_AssignFrom(_UnderlyingPtr, other);
                }

                /// <summary>
                /// Releases the pointer ownership. Returns the stored pointer and zeroes the source. If the source is already null, returns null and does nothing.
                /// The returned pointer is owning! It must be deallocated using `MR_C_Free()`.
                /// </summary>
                public unsafe MR.CS.Misc.Ref<int>? release()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_int32_t_release", ExactSpelling = true)]
                    extern static int *__MR_C_std_unique_ptr_int32_t_release(_Underlying *_this);
                    var __c_ret = __MR_C_std_unique_ptr_int32_t_release(_UnderlyingPtr);
                    return __c_ret is not null ? new MR.CS.Misc.Ref<int>(__c_ret) : null;
                }
            }

            /// <summary>
            /// This is used for optional parameters of class `UniquePtr_Int32T` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_UniquePtr_Int32T`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `UniquePtr_Int32T`/`Const_UniquePtr_Int32T` directly.
            /// </summary>
            public class _InOptMut_UniquePtr_Int32T
            {
                public UniquePtr_Int32T? Opt;

                public _InOptMut_UniquePtr_Int32T() {}
                public _InOptMut_UniquePtr_Int32T(UniquePtr_Int32T value) {Opt = value;}
                public static implicit operator _InOptMut_UniquePtr_Int32T(UniquePtr_Int32T value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `UniquePtr_Int32T` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_UniquePtr_Int32T`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `UniquePtr_Int32T`/`Const_UniquePtr_Int32T` to pass it to the function.
            /// </summary>
            public class _InOptConst_UniquePtr_Int32T
            {
                public Const_UniquePtr_Int32T? Opt;

                public _InOptConst_UniquePtr_Int32T() {}
                public _InOptConst_UniquePtr_Int32T(Const_UniquePtr_Int32T value) {Opt = value;}
                public static implicit operator _InOptConst_UniquePtr_Int32T(Const_UniquePtr_Int32T value) {return new(value);}

                /// <summary>
                /// Constructs a new instance.
                /// </summary>
                public static unsafe implicit operator _InOptConst_UniquePtr_Int32T(void *other) {return new Const_UniquePtr_Int32T(other);}
            }
        }
    }
}
