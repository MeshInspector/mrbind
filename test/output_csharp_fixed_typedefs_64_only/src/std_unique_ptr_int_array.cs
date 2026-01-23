public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// Wraps a pointer to a heap-allocated array of type `int`, of an unspecified size.
            /// Doesn't store the size, it has to be obtained separately.
            /// This is the const half of the class.
            /// </summary>
            public class Const_UniquePtr_IntArray : MR.CS.Misc.Object<Const_UniquePtr_IntArray>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_UniquePtr_IntArray(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_int_array_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_unique_ptr_int_array_Destroy(_Underlying *_this);
                    __MR_C_std_unique_ptr_int_array_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_UniquePtr_IntArray() {Dispose(false);}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_UniquePtr_IntArray() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_int_array_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.UniquePtr_IntArray._Underlying *__MR_C_std_unique_ptr_int_array_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_unique_ptr_int_array_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Const_UniquePtr_IntArray(MR.CS.Std.Const_UniquePtr_IntArray other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_int_array_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.UniquePtr_IntArray._Underlying *__MR_C_std_unique_ptr_int_array_ConstructFromAnother(MR.CS.Std.UniquePtr_IntArray._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_unique_ptr_int_array_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// <summary>
                /// Constructs a new instance.
                /// </summary>
                public unsafe Const_UniquePtr_IntArray(void *other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_int_array_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Std.UniquePtr_IntArray._Underlying *__MR_C_std_unique_ptr_int_array_ConstructFrom(void *other);
                    _UnderlyingPtr = __MR_C_std_unique_ptr_int_array_ConstructFrom(other);
                }

                /// <summary>
                /// Constructs a new instance.
                /// </summary>
                public static unsafe implicit operator Const_UniquePtr_IntArray(void *other) {return new(other);}

                /// <summary>
                /// Returns the stored pointer, possibly null.
                /// </summary>
                public unsafe MR.CS.Misc.Ref<int>? get()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_int_array_Get", ExactSpelling = true)]
                    extern static int *__MR_C_std_unique_ptr_int_array_Get(_Underlying *_this);
                    var __c_ret = __MR_C_std_unique_ptr_int_array_Get(_UnderlyingPtr);
                    return __c_ret is not null ? new MR.CS.Misc.Ref<int>(__c_ret) : null;
                }

                /// <summary>
                /// Returns an element from the stored array. The stored pointer must not be null.
                /// </summary>
                public unsafe ref int this[ulong i]
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_int_array_At", ExactSpelling = true)]
                        extern static int *__MR_C_std_unique_ptr_int_array_At(_Underlying *_this, ulong i);
                        return ref *__MR_C_std_unique_ptr_int_array_At(_UnderlyingPtr, i);
                    }
                }
            }

            /// <summary>
            /// Wraps a pointer to a heap-allocated array of type `int`, of an unspecified size.
            /// Doesn't store the size, it has to be obtained separately.
            /// This is the non-const half of the class.
            /// </summary>
            public class UniquePtr_IntArray : Const_UniquePtr_IntArray
            {
                internal unsafe UniquePtr_IntArray(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe UniquePtr_IntArray() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_int_array_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.UniquePtr_IntArray._Underlying *__MR_C_std_unique_ptr_int_array_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_unique_ptr_int_array_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe UniquePtr_IntArray(MR.CS.Std.Const_UniquePtr_IntArray other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_int_array_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.UniquePtr_IntArray._Underlying *__MR_C_std_unique_ptr_int_array_ConstructFromAnother(MR.CS.Std.UniquePtr_IntArray._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_unique_ptr_int_array_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// <summary>
                /// Constructs a new instance.
                /// </summary>
                public unsafe UniquePtr_IntArray(void *other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_int_array_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Std.UniquePtr_IntArray._Underlying *__MR_C_std_unique_ptr_int_array_ConstructFrom(void *other);
                    _UnderlyingPtr = __MR_C_std_unique_ptr_int_array_ConstructFrom(other);
                }

                /// <summary>
                /// Constructs a new instance.
                /// </summary>
                public static unsafe implicit operator UniquePtr_IntArray(void *other) {return new(other);}

                /// <summary>
                /// Assigns the contents from another instance. Both objects remain alive after the call.
                /// </summary>
                public unsafe void assign(MR.CS.Std.Const_UniquePtr_IntArray other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_int_array_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_unique_ptr_int_array_AssignFromAnother(_Underlying *_this, MR.CS.Std.UniquePtr_IntArray._Underlying *other);
                    _DiscardKeepAlive();
                    _KeepAlive(other);
                    __MR_C_std_unique_ptr_int_array_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                }

                /// <summary>
                /// Assigns the contents.
                /// </summary>
                public unsafe void assign(void *other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_int_array_AssignFrom", ExactSpelling = true)]
                    extern static void __MR_C_std_unique_ptr_int_array_AssignFrom(_Underlying *_this, void *other);
                    __MR_C_std_unique_ptr_int_array_AssignFrom(_UnderlyingPtr, other);
                }

                /// <summary>
                /// Releases the pointer ownership. Returns the stored pointer and zeroes the source. If the source is already null, returns null and does nothing.
                /// The returned pointer is owning! It must be deallocated using `MR_C_FreeArray()`.
                /// </summary>
                public unsafe MR.CS.Misc.Ref<int>? release()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_int_array_Release", ExactSpelling = true)]
                    extern static int *__MR_C_std_unique_ptr_int_array_Release(_Underlying *_this);
                    var __c_ret = __MR_C_std_unique_ptr_int_array_Release(_UnderlyingPtr);
                    return __c_ret is not null ? new MR.CS.Misc.Ref<int>(__c_ret) : null;
                }
            }

            /// <summary>
            /// This is used for optional parameters of class `UniquePtr_IntArray` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_UniquePtr_IntArray`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `UniquePtr_IntArray`/`Const_UniquePtr_IntArray` directly.
            /// </summary>
            public class _InOptMut_UniquePtr_IntArray
            {
                public UniquePtr_IntArray? Opt;

                public _InOptMut_UniquePtr_IntArray() {}
                public _InOptMut_UniquePtr_IntArray(UniquePtr_IntArray value) {Opt = value;}
                public static implicit operator _InOptMut_UniquePtr_IntArray(UniquePtr_IntArray value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `UniquePtr_IntArray` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_UniquePtr_IntArray`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `UniquePtr_IntArray`/`Const_UniquePtr_IntArray` to pass it to the function.
            /// </summary>
            public class _InOptConst_UniquePtr_IntArray
            {
                public Const_UniquePtr_IntArray? Opt;

                public _InOptConst_UniquePtr_IntArray() {}
                public _InOptConst_UniquePtr_IntArray(Const_UniquePtr_IntArray value) {Opt = value;}
                public static implicit operator _InOptConst_UniquePtr_IntArray(Const_UniquePtr_IntArray value) {return new(value);}

                /// <summary>
                /// Constructs a new instance.
                /// </summary>
                public static unsafe implicit operator _InOptConst_UniquePtr_IntArray(void *other) {return new Const_UniquePtr_IntArray(other);}
            }
        }
    }
}
