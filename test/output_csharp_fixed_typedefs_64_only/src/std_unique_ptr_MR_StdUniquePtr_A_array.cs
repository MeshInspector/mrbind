public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// Wraps a pointer to a heap-allocated array of type `MR::StdUniquePtr::A`, of an unspecified size.
            /// Doesn't store the size, it has to be obtained separately.
            /// This is the const half of the class.
            /// </summary>
            public class Const_UniquePtr_MRStdUniquePtrAArray : MR.CS.Misc.Object<Const_UniquePtr_MRStdUniquePtrAArray>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_Destroy(_Underlying *_this);
                    __MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_UniquePtr_MRStdUniquePtrAArray() {Dispose(false);}

                internal unsafe Const_UniquePtr_MRStdUniquePtrAArray(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_UniquePtr_MRStdUniquePtrAArray() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.UniquePtr_MRStdUniquePtrAArray._Underlying *__MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Const_UniquePtr_MRStdUniquePtrAArray(MR.CS.Std.Const_UniquePtr_MRStdUniquePtrAArray other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.UniquePtr_MRStdUniquePtrAArray._Underlying *__MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_ConstructFromAnother(MR.CS.Std.UniquePtr_MRStdUniquePtrAArray._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// <summary>
                /// Constructs a new instance.
                /// </summary>
                public unsafe Const_UniquePtr_MRStdUniquePtrAArray(void *other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Std.UniquePtr_MRStdUniquePtrAArray._Underlying *__MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_ConstructFrom(void *other);
                    _UnderlyingPtr = __MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_ConstructFrom(other);
                }

                /// <summary>
                /// Constructs a new instance.
                /// </summary>
                public static unsafe implicit operator Const_UniquePtr_MRStdUniquePtrAArray(void *other) {return new(other);}

                /// <summary>
                /// Returns the stored pointer, possibly null.
                /// </summary>
                public unsafe MR.CS.StdUniquePtr.A? get()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_Get", ExactSpelling = true)]
                    extern static MR.CS.StdUniquePtr.A._Underlying *__MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_Get(_Underlying *_this);
                    var __c_ret = __MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_Get(_UnderlyingPtr);
                    MR.CS.StdUniquePtr.A? __ret;
                    __ret = __c_ret is not null ? new MR.CS.StdUniquePtr.A(__c_ret, is_owning: false) : null;
                    if (__ret is not null) __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// Returns an element from the stored array. The stored pointer must not be null.
                /// </summary>
                public unsafe MR.CS.StdUniquePtr.A this[ulong i]
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_At", ExactSpelling = true)]
                        extern static MR.CS.StdUniquePtr.A._Underlying *__MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_At(_Underlying *_this, ulong i);
                        MR.CS.StdUniquePtr.A __ret;
                        __ret = new(__MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_At(_UnderlyingPtr, i), is_owning: false);
                        __ret._KeepAliveEnclosingObject = this;
                        return __ret;
                    }
                }
            }

            /// <summary>
            /// Wraps a pointer to a heap-allocated array of type `MR::StdUniquePtr::A`, of an unspecified size.
            /// Doesn't store the size, it has to be obtained separately.
            /// This is the non-const half of the class.
            /// </summary>
            public class UniquePtr_MRStdUniquePtrAArray : Const_UniquePtr_MRStdUniquePtrAArray
            {
                internal unsafe UniquePtr_MRStdUniquePtrAArray(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe UniquePtr_MRStdUniquePtrAArray() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.UniquePtr_MRStdUniquePtrAArray._Underlying *__MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe UniquePtr_MRStdUniquePtrAArray(MR.CS.Std.Const_UniquePtr_MRStdUniquePtrAArray other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.UniquePtr_MRStdUniquePtrAArray._Underlying *__MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_ConstructFromAnother(MR.CS.Std.UniquePtr_MRStdUniquePtrAArray._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// <summary>
                /// Constructs a new instance.
                /// </summary>
                public unsafe UniquePtr_MRStdUniquePtrAArray(void *other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Std.UniquePtr_MRStdUniquePtrAArray._Underlying *__MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_ConstructFrom(void *other);
                    _UnderlyingPtr = __MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_ConstructFrom(other);
                }

                /// <summary>
                /// Constructs a new instance.
                /// </summary>
                public static unsafe implicit operator UniquePtr_MRStdUniquePtrAArray(void *other) {return new(other);}

                /// <summary>
                /// Assigns the contents from another instance. Both objects remain alive after the call.
                /// </summary>
                public unsafe void assign(MR.CS.Std.Const_UniquePtr_MRStdUniquePtrAArray other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_AssignFromAnother(_Underlying *_this, MR.CS.Std.UniquePtr_MRStdUniquePtrAArray._Underlying *other);
                    _DiscardKeepAlive();
                    _KeepAlive(other);
                    __MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                }

                /// <summary>
                /// Assigns the contents.
                /// </summary>
                public unsafe void assign(void *other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_AssignFrom", ExactSpelling = true)]
                    extern static void __MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_AssignFrom(_Underlying *_this, void *other);
                    __MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_AssignFrom(_UnderlyingPtr, other);
                }

                /// <summary>
                /// Releases the pointer ownership. Returns the stored pointer and zeroes the source. If the source is already null, returns null and does nothing.
                /// The returned pointer is owning! It must be deallocated using `MR_StdUniquePtr_A_DestroyArray()`.
                /// </summary>
                public unsafe MR.CS.StdUniquePtr.A? release()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_Release", ExactSpelling = true)]
                    extern static MR.CS.StdUniquePtr.A._Underlying *__MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_Release(_Underlying *_this);
                    var __c_ret = __MR_C_std_unique_ptr_MR_StdUniquePtr_A_array_Release(_UnderlyingPtr);
                    return __c_ret is not null ? new MR.CS.StdUniquePtr.A(__c_ret, is_owning: false) : null;
                }
            }

            /// <summary>
            /// This is used for optional parameters of class `UniquePtr_MRStdUniquePtrAArray` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_UniquePtr_MRStdUniquePtrAArray`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `UniquePtr_MRStdUniquePtrAArray`/`Const_UniquePtr_MRStdUniquePtrAArray` directly.
            /// </summary>
            public class _InOptMut_UniquePtr_MRStdUniquePtrAArray
            {
                public UniquePtr_MRStdUniquePtrAArray? Opt;

                public _InOptMut_UniquePtr_MRStdUniquePtrAArray() {}
                public _InOptMut_UniquePtr_MRStdUniquePtrAArray(UniquePtr_MRStdUniquePtrAArray value) {Opt = value;}
                public static implicit operator _InOptMut_UniquePtr_MRStdUniquePtrAArray(UniquePtr_MRStdUniquePtrAArray value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `UniquePtr_MRStdUniquePtrAArray` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_UniquePtr_MRStdUniquePtrAArray`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `UniquePtr_MRStdUniquePtrAArray`/`Const_UniquePtr_MRStdUniquePtrAArray` to pass it to the function.
            /// </summary>
            public class _InOptConst_UniquePtr_MRStdUniquePtrAArray
            {
                public Const_UniquePtr_MRStdUniquePtrAArray? Opt;

                public _InOptConst_UniquePtr_MRStdUniquePtrAArray() {}
                public _InOptConst_UniquePtr_MRStdUniquePtrAArray(Const_UniquePtr_MRStdUniquePtrAArray value) {Opt = value;}
                public static implicit operator _InOptConst_UniquePtr_MRStdUniquePtrAArray(Const_UniquePtr_MRStdUniquePtrAArray value) {return new(value);}

                /// <summary>
                /// Constructs a new instance.
                /// </summary>
                public static unsafe implicit operator _InOptConst_UniquePtr_MRStdUniquePtrAArray(void *other) {return new Const_UniquePtr_MRStdUniquePtrAArray(other);}
            }
        }
    }
}
