public static partial class MR
{
    public static partial class CS
    {
        public static partial class TestSizeT
        {
            /// Generated from class `MR::TestSizeT::A<unsigned long>`.
            /// This is the const half of the class.
            public class Const_A_UnsignedLong : MR.CS.Misc.Object<Const_A_UnsignedLong>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSizeT_A_unsigned_long_Destroy", ExactSpelling = true)]
                    extern static void __MR_TestSizeT_A_unsigned_long_Destroy(_Underlying *_this);
                    __MR_TestSizeT_A_unsigned_long_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_A_UnsignedLong() {Dispose(false);}

                internal unsafe Const_A_UnsignedLong(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_A_UnsignedLong() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSizeT_A_unsigned_long_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.TestSizeT.A_UnsignedLong._Underlying *__MR_TestSizeT_A_unsigned_long_DefaultConstruct();
                    _UnderlyingPtr = __MR_TestSizeT_A_unsigned_long_DefaultConstruct();
                }

                /// Generated from constructor `MR::TestSizeT::A<unsigned long>::A`.
                public unsafe Const_A_UnsignedLong(MR.CS.TestSizeT.Const_A_UnsignedLong _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSizeT_A_unsigned_long_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.TestSizeT.A_UnsignedLong._Underlying *__MR_TestSizeT_A_unsigned_long_ConstructFromAnother(MR.CS.TestSizeT.A_UnsignedLong._Underlying *_other);
                    _UnderlyingPtr = __MR_TestSizeT_A_unsigned_long_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// Generated from constructor `MR::TestSizeT::A<unsigned long>::A`.
                public Const_A_UnsignedLong(A_UnsignedLong _other) : this((Const_A_UnsignedLong)_other) {}
            }

            /// Generated from class `MR::TestSizeT::A<unsigned long>`.
            /// This is the non-const half of the class.
            public class A_UnsignedLong : Const_A_UnsignedLong
            {
                internal unsafe A_UnsignedLong(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe A_UnsignedLong() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSizeT_A_unsigned_long_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.TestSizeT.A_UnsignedLong._Underlying *__MR_TestSizeT_A_unsigned_long_DefaultConstruct();
                    _UnderlyingPtr = __MR_TestSizeT_A_unsigned_long_DefaultConstruct();
                }

                /// Generated from constructor `MR::TestSizeT::A<unsigned long>::A`.
                public unsafe A_UnsignedLong(MR.CS.TestSizeT.Const_A_UnsignedLong _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSizeT_A_unsigned_long_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.TestSizeT.A_UnsignedLong._Underlying *__MR_TestSizeT_A_unsigned_long_ConstructFromAnother(MR.CS.TestSizeT.A_UnsignedLong._Underlying *_other);
                    _UnderlyingPtr = __MR_TestSizeT_A_unsigned_long_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// Generated from constructor `MR::TestSizeT::A<unsigned long>::A`.
                public A_UnsignedLong(A_UnsignedLong _other) : this((Const_A_UnsignedLong)_other) {}

                /// Generated from method `MR::TestSizeT::A<unsigned long>::operator=`.
                public unsafe MR.CS.TestSizeT.A_UnsignedLong Assign(MR.CS.TestSizeT.Const_A_UnsignedLong _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSizeT_A_unsigned_long_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.TestSizeT.A_UnsignedLong._Underlying *__MR_TestSizeT_A_unsigned_long_AssignFromAnother(_Underlying *_this, MR.CS.TestSizeT.A_UnsignedLong._Underlying *_other);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_TestSizeT_A_unsigned_long_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }

                /// Generated from method `MR::TestSizeT::A<unsigned long>::foo`.
                public unsafe ulong Foo()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSizeT_A_unsigned_long_foo", ExactSpelling = true)]
                    extern static ulong __MR_TestSizeT_A_unsigned_long_foo(_Underlying *_this);
                    return __MR_TestSizeT_A_unsigned_long_foo(_UnderlyingPtr);
                }
            }

            /// This is used for optional parameters of class `A_UnsignedLong` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_A_UnsignedLong`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `A_UnsignedLong`/`Const_A_UnsignedLong` directly.
            public class _InOptMut_A_UnsignedLong
            {
                public A_UnsignedLong? Opt;

                public _InOptMut_A_UnsignedLong() {}
                public _InOptMut_A_UnsignedLong(A_UnsignedLong value) {Opt = value;}
                public static implicit operator _InOptMut_A_UnsignedLong(A_UnsignedLong value) {return new(value);}
            }

            /// This is used for optional parameters of class `A_UnsignedLong` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_A_UnsignedLong`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `A_UnsignedLong`/`Const_A_UnsignedLong` to pass it to the function.
            public class _InOptConst_A_UnsignedLong
            {
                public Const_A_UnsignedLong? Opt;

                public _InOptConst_A_UnsignedLong() {}
                public _InOptConst_A_UnsignedLong(Const_A_UnsignedLong value) {Opt = value;}
                public static implicit operator _InOptConst_A_UnsignedLong(Const_A_UnsignedLong value) {return new(value);}
            }

            /// Generated from function `MR::TestSizeT::foo`.
            public static ulong Foo(ulong _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSizeT_foo_unsigned_long", ExactSpelling = true)]
                extern static ulong __MR_TestSizeT_foo_unsigned_long(ulong _1);
                return __MR_TestSizeT_foo_unsigned_long(_1);
            }

            /// Generated from function `MR::TestSizeT::foo`.
            /// In C++ this function returns an rvalue reference.
            public static unsafe ref ulong *Foo(ref ulong *_1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSizeT_foo_unsigned_long_ptr", ExactSpelling = true)]
                extern static ulong **__MR_TestSizeT_foo_unsigned_long_ptr(ulong **_1);
                fixed (ulong **__ptr__1 = &_1)
                {
                    return ref *__MR_TestSizeT_foo_unsigned_long_ptr(__ptr__1);
                }
            }

            /// Generated from function `MR::TestSizeT::foo`.
            public static unsafe MR.CS.Std.Vector_UnsignedLong Foo(MR.CS.Std._ByValue_Vector_UnsignedLong _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSizeT_foo_std_vector_unsigned_long", ExactSpelling = true)]
                extern static MR.CS.Std.Vector_UnsignedLong._Underlying *__MR_TestSizeT_foo_std_vector_unsigned_long(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.Vector_UnsignedLong._Underlying *_1);
                return new(__MR_TestSizeT_foo_std_vector_unsigned_long(_1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null), is_owning: true);
            }

            /// Generated from function `MR::TestSizeT::foo`.
            public static long Foo(long _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSizeT_foo_long", ExactSpelling = true)]
                extern static long __MR_TestSizeT_foo_long(long _1);
                return __MR_TestSizeT_foo_long(_1);
            }

            /// Generated from function `MR::TestSizeT::foo`.
            /// In C++ this function returns an rvalue reference.
            public static unsafe ref long *Foo(ref long *_1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSizeT_foo_long_ptr", ExactSpelling = true)]
                extern static long **__MR_TestSizeT_foo_long_ptr(long **_1);
                fixed (long **__ptr__1 = &_1)
                {
                    return ref *__MR_TestSizeT_foo_long_ptr(__ptr__1);
                }
            }

            /// Generated from function `MR::TestSizeT::foo`.
            public static unsafe MR.CS.Std.Vector_Long Foo(MR.CS.Std._ByValue_Vector_Long _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_TestSizeT_foo_std_vector_long", ExactSpelling = true)]
                extern static MR.CS.Std.Vector_Long._Underlying *__MR_TestSizeT_foo_std_vector_long(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.Vector_Long._Underlying *_1);
                return new(__MR_TestSizeT_foo_std_vector_long(_1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null), is_owning: true);
            }
        }
    }
}
