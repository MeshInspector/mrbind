public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// Wraps a pointer to a single heap-allocated `int`.
            /// This is the const half of the class.
            public class Const_UniquePtr_Int : MR.CS.Misc.Object<Const_UniquePtr_Int>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_int_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_unique_ptr_int_Destroy(_Underlying *_this);
                    __MR_C_std_unique_ptr_int_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_UniquePtr_Int() {Dispose(false);}

                internal unsafe Const_UniquePtr_Int(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_UniquePtr_Int() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_int_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.UniquePtr_Int._Underlying *__MR_C_std_unique_ptr_int_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_unique_ptr_int_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Const_UniquePtr_Int(MR.CS.Std.Const_UniquePtr_Int other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_int_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.UniquePtr_Int._Underlying *__MR_C_std_unique_ptr_int_ConstructFromAnother(MR.CS.Std.UniquePtr_Int._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_unique_ptr_int_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// Constructs a new instance.
                public unsafe Const_UniquePtr_Int(void *other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_int_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Std.UniquePtr_Int._Underlying *__MR_C_std_unique_ptr_int_ConstructFrom(void *other);
                    _UnderlyingPtr = __MR_C_std_unique_ptr_int_ConstructFrom(other);
                }

                /// Constructs a new instance.
                public static unsafe implicit operator Const_UniquePtr_Int(void *other) {return new(other);}

                /// Returns the stored pointer, possibly null.
                public unsafe MR.CS.Misc.Ref<int>? Get()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_int_Get", ExactSpelling = true)]
                    extern static int *__MR_C_std_unique_ptr_int_Get(_Underlying *_this);
                    var __c_ret = __MR_C_std_unique_ptr_int_Get(_UnderlyingPtr);
                    return __c_ret is not null ? new MR.CS.Misc.Ref<int>(__c_ret) : null;
                }
            }

            /// Wraps a pointer to a single heap-allocated `int`.
            /// This is the non-const half of the class.
            public class UniquePtr_Int : Const_UniquePtr_Int
            {
                internal unsafe UniquePtr_Int(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe UniquePtr_Int() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_int_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.UniquePtr_Int._Underlying *__MR_C_std_unique_ptr_int_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_unique_ptr_int_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe UniquePtr_Int(MR.CS.Std.Const_UniquePtr_Int other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_int_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.UniquePtr_Int._Underlying *__MR_C_std_unique_ptr_int_ConstructFromAnother(MR.CS.Std.UniquePtr_Int._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_unique_ptr_int_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// Constructs a new instance.
                public unsafe UniquePtr_Int(void *other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_int_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.Std.UniquePtr_Int._Underlying *__MR_C_std_unique_ptr_int_ConstructFrom(void *other);
                    _UnderlyingPtr = __MR_C_std_unique_ptr_int_ConstructFrom(other);
                }

                /// Constructs a new instance.
                public static unsafe implicit operator UniquePtr_Int(void *other) {return new(other);}

                /// Assigns the contents from another instance. Both objects remain alive after the call.
                public unsafe void Assign(MR.CS.Std.Const_UniquePtr_Int other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_int_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_unique_ptr_int_AssignFromAnother(_Underlying *_this, MR.CS.Std.UniquePtr_Int._Underlying *other);
                    _DiscardKeepAlive();
                    _KeepAlive(other);
                    __MR_C_std_unique_ptr_int_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                }

                /// Assigns the contents.
                public unsafe void Assign(void *other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_int_AssignFrom", ExactSpelling = true)]
                    extern static void __MR_C_std_unique_ptr_int_AssignFrom(_Underlying *_this, void *other);
                    __MR_C_std_unique_ptr_int_AssignFrom(_UnderlyingPtr, other);
                }

                /// Releases the pointer ownership. Returns the stored pointer and zeroes the source. If the source is already null, returns null and does nothing.
                /// The returned pointer is owning! It must be deallocated using `MR_C_Free()`.
                public unsafe MR.CS.Misc.Ref<int>? Release()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_unique_ptr_int_Release", ExactSpelling = true)]
                    extern static int *__MR_C_std_unique_ptr_int_Release(_Underlying *_this);
                    var __c_ret = __MR_C_std_unique_ptr_int_Release(_UnderlyingPtr);
                    return __c_ret is not null ? new MR.CS.Misc.Ref<int>(__c_ret) : null;
                }
            }

            /// This is used for optional parameters of class `UniquePtr_Int` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_UniquePtr_Int`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `UniquePtr_Int`/`Const_UniquePtr_Int` directly.
            public class _InOptMut_UniquePtr_Int
            {
                public UniquePtr_Int? Opt;

                public _InOptMut_UniquePtr_Int() {}
                public _InOptMut_UniquePtr_Int(UniquePtr_Int value) {Opt = value;}
                public static implicit operator _InOptMut_UniquePtr_Int(UniquePtr_Int value) {return new(value);}
            }

            /// This is used for optional parameters of class `UniquePtr_Int` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_UniquePtr_Int`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `UniquePtr_Int`/`Const_UniquePtr_Int` to pass it to the function.
            public class _InOptConst_UniquePtr_Int
            {
                public Const_UniquePtr_Int? Opt;

                public _InOptConst_UniquePtr_Int() {}
                public _InOptConst_UniquePtr_Int(Const_UniquePtr_Int value) {Opt = value;}
                public static implicit operator _InOptConst_UniquePtr_Int(Const_UniquePtr_Int value) {return new(value);}

                /// Constructs a new instance.
                public static unsafe implicit operator _InOptConst_UniquePtr_Int(void *other) {return new Const_UniquePtr_Int(other);}
            }
        }
    }
}
