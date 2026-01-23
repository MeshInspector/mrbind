public static partial class MR
{
    public static partial class CS
    {
        public static partial class TestSizeT
        {
            /// <summary>
            /// Generated from class `MR::TestSizeT::A<MR_C_uint64_t>`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_A_MRCUint64T : MR.CS.Misc.Object<Const_A_MRCUint64T>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_A_MRCUint64T(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSizeT_A_uint64_t_Destroy", ExactSpelling = true)]
                    extern static void __MR_TestSizeT_A_uint64_t_Destroy(_Underlying *_this);
                    __MR_TestSizeT_A_uint64_t_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_A_MRCUint64T() {Dispose(false);}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_A_MRCUint64T() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSizeT_A_uint64_t_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.TestSizeT.A_MRCUint64T._Underlying *__MR_TestSizeT_A_uint64_t_DefaultConstruct();
                    _UnderlyingPtr = __MR_TestSizeT_A_uint64_t_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::TestSizeT::A<MR_C_uint64_t>::A`.
                /// </summary>
                public unsafe Const_A_MRCUint64T(MR.CS.TestSizeT.Const_A_MRCUint64T _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSizeT_A_uint64_t_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.TestSizeT.A_MRCUint64T._Underlying *__MR_TestSizeT_A_uint64_t_ConstructFromAnother(MR.CS.TestSizeT.A_MRCUint64T._Underlying *_other);
                    _UnderlyingPtr = __MR_TestSizeT_A_uint64_t_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }
            }

            /// <summary>
            /// Generated from class `MR::TestSizeT::A<MR_C_uint64_t>`.
            /// This is the non-const half of the class.
            /// </summary>
            public class A_MRCUint64T : Const_A_MRCUint64T
            {
                internal unsafe A_MRCUint64T(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe A_MRCUint64T() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSizeT_A_uint64_t_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.TestSizeT.A_MRCUint64T._Underlying *__MR_TestSizeT_A_uint64_t_DefaultConstruct();
                    _UnderlyingPtr = __MR_TestSizeT_A_uint64_t_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::TestSizeT::A<MR_C_uint64_t>::A`.
                /// </summary>
                public unsafe A_MRCUint64T(MR.CS.TestSizeT.Const_A_MRCUint64T _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSizeT_A_uint64_t_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.TestSizeT.A_MRCUint64T._Underlying *__MR_TestSizeT_A_uint64_t_ConstructFromAnother(MR.CS.TestSizeT.A_MRCUint64T._Underlying *_other);
                    _UnderlyingPtr = __MR_TestSizeT_A_uint64_t_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// <summary>
                /// Generated from method `MR::TestSizeT::A<MR_C_uint64_t>::operator=`.
                /// </summary>
                public unsafe MR.CS.TestSizeT.A_MRCUint64T assign(MR.CS.TestSizeT.Const_A_MRCUint64T _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSizeT_A_uint64_t_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.TestSizeT.A_MRCUint64T._Underlying *__MR_TestSizeT_A_uint64_t_AssignFromAnother(_Underlying *_this, MR.CS.TestSizeT.A_MRCUint64T._Underlying *_other);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_TestSizeT_A_uint64_t_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }

                /// <summary>
                /// Generated from method `MR::TestSizeT::A<MR_C_uint64_t>::foo`.
                /// </summary>
                public unsafe ulong foo()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSizeT_A_uint64_t_foo", ExactSpelling = true)]
                    extern static ulong __MR_TestSizeT_A_uint64_t_foo(_Underlying *_this);
                    return __MR_TestSizeT_A_uint64_t_foo(_UnderlyingPtr);
                }
            }

            /// <summary>
            /// This is used for optional parameters of class `A_MRCUint64T` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_A_MRCUint64T`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `A_MRCUint64T`/`Const_A_MRCUint64T` directly.
            /// </summary>
            public class _InOptMut_A_MRCUint64T
            {
                public A_MRCUint64T? Opt;

                public _InOptMut_A_MRCUint64T() {}
                public _InOptMut_A_MRCUint64T(A_MRCUint64T value) {Opt = value;}
                public static implicit operator _InOptMut_A_MRCUint64T(A_MRCUint64T value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `A_MRCUint64T` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_A_MRCUint64T`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `A_MRCUint64T`/`Const_A_MRCUint64T` to pass it to the function.
            /// </summary>
            public class _InOptConst_A_MRCUint64T
            {
                public Const_A_MRCUint64T? Opt;

                public _InOptConst_A_MRCUint64T() {}
                public _InOptConst_A_MRCUint64T(Const_A_MRCUint64T value) {Opt = value;}
                public static implicit operator _InOptConst_A_MRCUint64T(Const_A_MRCUint64T value) {return new(value);}
            }

            /// <summary>
            /// Generated from function `MR::TestSizeT::foo`.
            /// </summary>
            public static ulong foo(ulong _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSizeT_foo_uint64_t", ExactSpelling = true)]
                extern static ulong __MR_TestSizeT_foo_uint64_t(ulong _1);
                return __MR_TestSizeT_foo_uint64_t(_1);
            }

            /// <summary>
            /// Generated from function `MR::TestSizeT::foo`.
            /// In C++ this function returns an rvalue reference.
            /// </summary>
            public static unsafe ref ulong *foo(ref ulong *_1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSizeT_foo_uint64_t_ptr", ExactSpelling = true)]
                extern static ulong **__MR_TestSizeT_foo_uint64_t_ptr(ulong **_1);
                fixed (ulong **__ptr__1 = &_1)
                {
                    return ref *__MR_TestSizeT_foo_uint64_t_ptr(__ptr__1);
                }
            }

            /// <summary>
            /// Generated from function `MR::TestSizeT::foo`.
            /// </summary>
            public static unsafe MR.CS.Misc._Moved<MR.CS.Std.Vector_MRCUint64T> foo(MR.CS.Std._ByValue_Vector_MRCUint64T _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSizeT_foo_std_vector_uint64_t", ExactSpelling = true)]
                extern static MR.CS.Std.Vector_MRCUint64T._Underlying *__MR_TestSizeT_foo_std_vector_uint64_t(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.Vector_MRCUint64T._Underlying *_1);
                return MR.CS.Misc.Move(new MR.CS.Std.Vector_MRCUint64T(__MR_TestSizeT_foo_std_vector_uint64_t(_1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null), is_owning: true));
            }

            /// <summary>
            /// Generated from function `MR::TestSizeT::foo`.
            /// </summary>
            public static long foo(long _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSizeT_foo_int64_t", ExactSpelling = true)]
                extern static long __MR_TestSizeT_foo_int64_t(long _1);
                return __MR_TestSizeT_foo_int64_t(_1);
            }

            /// <summary>
            /// Generated from function `MR::TestSizeT::foo`.
            /// In C++ this function returns an rvalue reference.
            /// </summary>
            public static unsafe ref long *foo(ref long *_1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSizeT_foo_int64_t_ptr", ExactSpelling = true)]
                extern static long **__MR_TestSizeT_foo_int64_t_ptr(long **_1);
                fixed (long **__ptr__1 = &_1)
                {
                    return ref *__MR_TestSizeT_foo_int64_t_ptr(__ptr__1);
                }
            }

            /// <summary>
            /// Generated from function `MR::TestSizeT::foo`.
            /// </summary>
            public static unsafe MR.CS.Misc._Moved<MR.CS.Std.Vector_MRCInt64T> foo(MR.CS.Std._ByValue_Vector_MRCInt64T _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSizeT_foo_std_vector_int64_t", ExactSpelling = true)]
                extern static MR.CS.Std.Vector_MRCInt64T._Underlying *__MR_TestSizeT_foo_std_vector_int64_t(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.Vector_MRCInt64T._Underlying *_1);
                return MR.CS.Misc.Move(new MR.CS.Std.Vector_MRCInt64T(__MR_TestSizeT_foo_std_vector_int64_t(_1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null), is_owning: true));
            }
        }
    }
}
