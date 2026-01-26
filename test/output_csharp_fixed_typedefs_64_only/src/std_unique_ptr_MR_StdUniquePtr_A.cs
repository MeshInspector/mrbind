public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// Wraps a pointer to a single heap-allocated `MR::StdUniquePtr::A`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_UniquePtr_MRStdUniquePtrA : MR.CS.Misc.Object<Const_UniquePtr_MRStdUniquePtrA>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_UniquePtr_MRStdUniquePtrA(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_MR_StdUniquePtr_A_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_unique_ptr_MR_StdUniquePtr_A_Destroy(_Underlying *_this);
                    __MR_C_std_unique_ptr_MR_StdUniquePtr_A_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_UniquePtr_MRStdUniquePtrA() {Dispose(false);}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_UniquePtr_MRStdUniquePtrA() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_MR_StdUniquePtr_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.UniquePtr_MRStdUniquePtrA._Underlying *__MR_C_std_unique_ptr_MR_StdUniquePtr_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_unique_ptr_MR_StdUniquePtr_A_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Const_UniquePtr_MRStdUniquePtrA(MR.CS.Std.Const_UniquePtr_MRStdUniquePtrA other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_MR_StdUniquePtr_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.UniquePtr_MRStdUniquePtrA._Underlying *__MR_C_std_unique_ptr_MR_StdUniquePtr_A_ConstructFromAnother(MR.CS.Std.UniquePtr_MRStdUniquePtrA._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_unique_ptr_MR_StdUniquePtr_A_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// <summary>
                /// Constructs a new instance.
                /// </summary>
                public unsafe Const_UniquePtr_MRStdUniquePtrA(void *other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_MR_StdUniquePtr_A_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Std.UniquePtr_MRStdUniquePtrA._Underlying *__MR_C_std_unique_ptr_MR_StdUniquePtr_A_ConstructFrom(void *other);
                    _UnderlyingPtr = __MR_C_std_unique_ptr_MR_StdUniquePtr_A_ConstructFrom(other);
                }

                /// <summary>
                /// Constructs a new instance.
                /// </summary>
                public static unsafe implicit operator Const_UniquePtr_MRStdUniquePtrA(void *other) {return new(other);}

                /// <summary>
                /// Returns the stored pointer, possibly null.
                /// </summary>
                public unsafe MR.CS.StdUniquePtr.A? get()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_MR_StdUniquePtr_A_Get", ExactSpelling = true)]
                    extern static MR.CS.StdUniquePtr.A._Underlying *__MR_C_std_unique_ptr_MR_StdUniquePtr_A_Get(_Underlying *_this);
                    var __c_ret = __MR_C_std_unique_ptr_MR_StdUniquePtr_A_Get(_UnderlyingPtr);
                    MR.CS.StdUniquePtr.A? __ret;
                    __ret = __c_ret is not null ? new MR.CS.StdUniquePtr.A(__c_ret, is_owning: false) : null;
                    if (__ret is not null) __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }
            }

            /// <summary>
            /// Wraps a pointer to a single heap-allocated `MR::StdUniquePtr::A`.
            /// This is the non-const half of the class.
            /// </summary>
            public class UniquePtr_MRStdUniquePtrA : Const_UniquePtr_MRStdUniquePtrA
            {
                internal unsafe UniquePtr_MRStdUniquePtrA(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe UniquePtr_MRStdUniquePtrA() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_MR_StdUniquePtr_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.UniquePtr_MRStdUniquePtrA._Underlying *__MR_C_std_unique_ptr_MR_StdUniquePtr_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_unique_ptr_MR_StdUniquePtr_A_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe UniquePtr_MRStdUniquePtrA(MR.CS.Std.Const_UniquePtr_MRStdUniquePtrA other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_MR_StdUniquePtr_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.UniquePtr_MRStdUniquePtrA._Underlying *__MR_C_std_unique_ptr_MR_StdUniquePtr_A_ConstructFromAnother(MR.CS.Std.UniquePtr_MRStdUniquePtrA._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_unique_ptr_MR_StdUniquePtr_A_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// <summary>
                /// Constructs a new instance.
                /// </summary>
                public unsafe UniquePtr_MRStdUniquePtrA(void *other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_MR_StdUniquePtr_A_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Std.UniquePtr_MRStdUniquePtrA._Underlying *__MR_C_std_unique_ptr_MR_StdUniquePtr_A_ConstructFrom(void *other);
                    _UnderlyingPtr = __MR_C_std_unique_ptr_MR_StdUniquePtr_A_ConstructFrom(other);
                }

                /// <summary>
                /// Constructs a new instance.
                /// </summary>
                public static unsafe implicit operator UniquePtr_MRStdUniquePtrA(void *other) {return new(other);}

                /// <summary>
                /// Assigns the contents from another instance. Both objects remain alive after the call.
                /// </summary>
                public unsafe void assign(MR.CS.Std.Const_UniquePtr_MRStdUniquePtrA other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_MR_StdUniquePtr_A_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_unique_ptr_MR_StdUniquePtr_A_AssignFromAnother(_Underlying *_this, MR.CS.Std.UniquePtr_MRStdUniquePtrA._Underlying *other);
                    _DiscardKeepAlive();
                    _KeepAlive(other);
                    __MR_C_std_unique_ptr_MR_StdUniquePtr_A_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                }

                /// <summary>
                /// Assigns the contents.
                /// </summary>
                public unsafe void assign(void *other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_MR_StdUniquePtr_A_AssignFrom", ExactSpelling = true)]
                    extern static void __MR_C_std_unique_ptr_MR_StdUniquePtr_A_AssignFrom(_Underlying *_this, void *other);
                    __MR_C_std_unique_ptr_MR_StdUniquePtr_A_AssignFrom(_UnderlyingPtr, other);
                }

                /// <summary>
                /// Releases the pointer ownership. Returns the stored pointer and zeroes the source. If the source is already null, returns null and does nothing.
                /// The returned pointer is owning! It must be deallocated using `MR_StdUniquePtr_A_Destroy()`.
                /// </summary>
                public unsafe MR.CS.StdUniquePtr.A? release()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_MR_StdUniquePtr_A_Release", ExactSpelling = true)]
                    extern static MR.CS.StdUniquePtr.A._Underlying *__MR_C_std_unique_ptr_MR_StdUniquePtr_A_Release(_Underlying *_this);
                    var __c_ret = __MR_C_std_unique_ptr_MR_StdUniquePtr_A_Release(_UnderlyingPtr);
                    return __c_ret is not null ? new MR.CS.StdUniquePtr.A(__c_ret, is_owning: false) : null;
                }
            }

            /// <summary>
            /// This is used for optional parameters of class `UniquePtr_MRStdUniquePtrA` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_UniquePtr_MRStdUniquePtrA`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `UniquePtr_MRStdUniquePtrA`/`Const_UniquePtr_MRStdUniquePtrA` directly.
            /// </summary>
            public class _InOptMut_UniquePtr_MRStdUniquePtrA
            {
                public UniquePtr_MRStdUniquePtrA? Opt;

                public _InOptMut_UniquePtr_MRStdUniquePtrA() {}
                public _InOptMut_UniquePtr_MRStdUniquePtrA(UniquePtr_MRStdUniquePtrA value) {Opt = value;}
                public static implicit operator _InOptMut_UniquePtr_MRStdUniquePtrA(UniquePtr_MRStdUniquePtrA value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `UniquePtr_MRStdUniquePtrA` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_UniquePtr_MRStdUniquePtrA`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `UniquePtr_MRStdUniquePtrA`/`Const_UniquePtr_MRStdUniquePtrA` to pass it to the function.
            /// </summary>
            public class _InOptConst_UniquePtr_MRStdUniquePtrA
            {
                public Const_UniquePtr_MRStdUniquePtrA? Opt;

                public _InOptConst_UniquePtr_MRStdUniquePtrA() {}
                public _InOptConst_UniquePtr_MRStdUniquePtrA(Const_UniquePtr_MRStdUniquePtrA value) {Opt = value;}
                public static implicit operator _InOptConst_UniquePtr_MRStdUniquePtrA(Const_UniquePtr_MRStdUniquePtrA value) {return new(value);}

                /// <summary>
                /// Constructs a new instance.
                /// </summary>
                public static unsafe implicit operator _InOptConst_UniquePtr_MRStdUniquePtrA(void *other) {return new Const_UniquePtr_MRStdUniquePtrA(other);}
            }
        }
    }
}
