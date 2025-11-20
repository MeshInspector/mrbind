public static partial class MR
{
    public static partial class CS
    {
        public static partial class CSharp
        {
            /// Enum comment.
            public enum E1 : int
            {
                // A
                a = 10,
                // B
                b = 20,
                // C
                c = 30,
            }

            /// This enum is intended to be boolean.
            public enum E2 : byte
            {
                a = 0,
                b = 1,
            }

            /// Generated from class `MR::CSharp::A`.
            /// Derived classes:
            ///   Virtual:
            ///     `MR::CSharp::C`
            ///   Direct: (non-virtual)
            ///     `MR::CSharp::B`
            ///     `MR::CSharp::F`
            ///     `MR::CSharp::G`
            /// This is the const half of the class.
            public class ConstA : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstA(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr == null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_A_Destroy(_Underlying *_this);
                    __MR_CSharp_A_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstA() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstA() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstA._Underlying *__MR_CSharp_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_A_DefaultConstruct();
                }

                /// Generated from method `MR::CSharp::A::bar`.
                public unsafe void bar(int _1, int _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_bar", ExactSpelling = true)]
                    extern static void __MR_CSharp_A_bar(_Underlying *_this, int _1, int _2);
                    __MR_CSharp_A_bar(_UnderlyingPtr, _1, _2);
                }

                /// Generated from method `MR::CSharp::A::static_foo`.
                public static void static_foo()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_static_foo", ExactSpelling = true)]
                    extern static void __MR_CSharp_A_static_foo();
                    __MR_CSharp_A_static_foo();
                }

                /// Generated from method `MR::CSharp::A::static_bar`.
                public static void static_bar(int _1, int _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_static_bar", ExactSpelling = true)]
                    extern static void __MR_CSharp_A_static_bar(int _1, int _2);
                    __MR_CSharp_A_static_bar(_1, _2);
                }

                /// Generated from method `MR::CSharp::A::virtual_bar`.
                public unsafe void virtual_bar(int _1, int _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_virtual_bar", ExactSpelling = true)]
                    extern static void __MR_CSharp_A_virtual_bar(_Underlying *_this, int _1, int _2);
                    __MR_CSharp_A_virtual_bar(_UnderlyingPtr, _1, _2);
                }
            }

            /// Generated from class `MR::CSharp::A`.
            /// Derived classes:
            ///   Virtual:
            ///     `MR::CSharp::C`
            ///   Direct: (non-virtual)
            ///     `MR::CSharp::B`
            ///     `MR::CSharp::F`
            ///     `MR::CSharp::G`
            /// This is the non-const half of the class.
            public class A : ConstA
            {
                internal unsafe A(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe A() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstA._Underlying *__MR_CSharp_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_A_DefaultConstruct();
                }

                /// Generated from method `MR::CSharp::A::foo`.
                public unsafe void foo()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_foo", ExactSpelling = true)]
                    extern static void __MR_CSharp_A_foo(_Underlying *_this);
                    __MR_CSharp_A_foo(_UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::A::virtual_foo`.
                public unsafe void virtual_foo()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_virtual_foo", ExactSpelling = true)]
                    extern static void __MR_CSharp_A_virtual_foo(_Underlying *_this);
                    __MR_CSharp_A_virtual_foo(_UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::A::refs`.
                public unsafe ref int refs(ref int x, ref int _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_refs", ExactSpelling = true)]
                    extern static int *__MR_CSharp_A_refs(_Underlying *_this, int *x, int *_2);
                    fixed (int *__ptr_x = &x)
                    {
                        fixed (int *__ptr__2 = &_2)
                        {
                            return ref *__MR_CSharp_A_refs(_UnderlyingPtr, __ptr_x, __ptr__2);
                        }
                    }
                }
            }

            /// Generated from class `MR::CSharp::B`.
            /// Base classes:
            ///   Direct: (non-virtual)
            ///     `MR::CSharp::A`
            /// This is the const half of the class.
            public class ConstB : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstB(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr == null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_B_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_B_Destroy(_Underlying *_this);
                    __MR_CSharp_B_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstB() {Dispose(false);}

                // Upcasts:
                public static unsafe implicit operator MR.CS.CSharp.ConstA(ConstB self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_B_UpcastTo_MR_CSharp_A", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstA._Underlying *__MR_CSharp_B_UpcastTo_MR_CSharp_A(_Underlying *_this);
                    MR.CS.CSharp.ConstA ret = new(__MR_CSharp_B_UpcastTo_MR_CSharp_A(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }

                // Downcasts:
                public static unsafe explicit operator ConstB?(MR.CS.CSharp.ConstA parent)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_DynamicDowncastTo_MR_CSharp_B", ExactSpelling = true)]
                    extern static _Underlying *__MR_CSharp_A_DynamicDowncastTo_MR_CSharp_B(MR.CS.CSharp.ConstA._Underlying *_this);
                    var ptr = __MR_CSharp_A_DynamicDowncastTo_MR_CSharp_B(parent._UnderlyingPtr);
                    if (ptr == null) return null;
                    ConstB ret = new(ptr, is_owning: false);
                    ret._KeepAlive(parent);
                    return ret;
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstB() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_B_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstB._Underlying *__MR_CSharp_B_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_B_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::B::B`.
                public unsafe ConstB(int a, int b) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_B_Construct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstB._Underlying *__MR_CSharp_B_Construct(int a, int b);
                    _UnderlyingPtr = __MR_CSharp_B_Construct(a, b);
                }

                /// Generated from method `MR::CSharp::B::bar`.
                public unsafe void bar(int _1, int _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_B_bar", ExactSpelling = true)]
                    extern static void __MR_CSharp_B_bar(_Underlying *_this, int _1, int _2);
                    __MR_CSharp_B_bar(_UnderlyingPtr, _1, _2);
                }

                /// Generated from method `MR::CSharp::B::static_foo`.
                public static void static_foo()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_B_static_foo", ExactSpelling = true)]
                    extern static void __MR_CSharp_B_static_foo();
                    __MR_CSharp_B_static_foo();
                }

                /// Generated from method `MR::CSharp::B::static_bar`.
                public static void static_bar(int _1, int _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_B_static_bar", ExactSpelling = true)]
                    extern static void __MR_CSharp_B_static_bar(int _1, int _2);
                    __MR_CSharp_B_static_bar(_1, _2);
                }

                /// Generated from method `MR::CSharp::B::virtual_bar`.
                public unsafe void virtual_bar(int _1, int _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_B_virtual_bar", ExactSpelling = true)]
                    extern static void __MR_CSharp_B_virtual_bar(_Underlying *_this, int _1, int _2);
                    __MR_CSharp_B_virtual_bar(_UnderlyingPtr, _1, _2);
                }
            }

            /// Generated from class `MR::CSharp::B`.
            /// Base classes:
            ///   Direct: (non-virtual)
            ///     `MR::CSharp::A`
            /// This is the non-const half of the class.
            public class B : ConstB
            {
                internal unsafe B(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                // Upcasts:
                public static unsafe implicit operator MR.CS.CSharp.A(B self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_B_UpcastTo_MR_CSharp_A", ExactSpelling = true)]
                    extern static MR.CS.CSharp.A._Underlying *__MR_CSharp_B_UpcastTo_MR_CSharp_A(_Underlying *_this);
                    MR.CS.CSharp.A ret = new(__MR_CSharp_B_UpcastTo_MR_CSharp_A(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }

                // Downcasts:
                public static unsafe explicit operator B?(MR.CS.CSharp.A parent)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_DynamicDowncastTo_MR_CSharp_B", ExactSpelling = true)]
                    extern static _Underlying *__MR_CSharp_A_DynamicDowncastTo_MR_CSharp_B(MR.CS.CSharp.A._Underlying *_this);
                    var ptr = __MR_CSharp_A_DynamicDowncastTo_MR_CSharp_B(parent._UnderlyingPtr);
                    if (ptr == null) return null;
                    B ret = new(ptr, is_owning: false);
                    ret._KeepAlive(parent);
                    return ret;
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe B() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_B_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstB._Underlying *__MR_CSharp_B_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_B_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::B::B`.
                public unsafe B(int a, int b) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_B_Construct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstB._Underlying *__MR_CSharp_B_Construct(int a, int b);
                    _UnderlyingPtr = __MR_CSharp_B_Construct(a, b);
                }

                /// Generated from method `MR::CSharp::B::foo`.
                public unsafe void foo()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_B_foo", ExactSpelling = true)]
                    extern static void __MR_CSharp_B_foo(_Underlying *_this);
                    __MR_CSharp_B_foo(_UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::B::virtual_foo`.
                public unsafe void virtual_foo()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_B_virtual_foo", ExactSpelling = true)]
                    extern static void __MR_CSharp_B_virtual_foo(_Underlying *_this);
                    __MR_CSharp_B_virtual_foo(_UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::B::refs`.
                public unsafe ref int refs(ref int x, ref int _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_B_refs", ExactSpelling = true)]
                    extern static int *__MR_CSharp_B_refs(_Underlying *_this, int *x, int *_2);
                    fixed (int *__ptr_x = &x)
                    {
                        fixed (int *__ptr__2 = &_2)
                        {
                            return ref *__MR_CSharp_B_refs(_UnderlyingPtr, __ptr_x, __ptr__2);
                        }
                    }
                }
            }

            /// Generated from class `MR::CSharp::C`.
            /// Base classes:
            ///   Virtual:
            ///     `MR::CSharp::A`
            /// This is the const half of the class.
            public class ConstC : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstC(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr == null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_C_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_C_Destroy(_Underlying *_this);
                    __MR_CSharp_C_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstC() {Dispose(false);}

                // Upcasts:
                public static unsafe implicit operator MR.CS.CSharp.ConstA(ConstC self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_C_UpcastTo_MR_CSharp_A", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstA._Underlying *__MR_CSharp_C_UpcastTo_MR_CSharp_A(_Underlying *_this);
                    MR.CS.CSharp.ConstA ret = new(__MR_CSharp_C_UpcastTo_MR_CSharp_A(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }

                // Downcasts:
                public static unsafe explicit operator ConstC?(MR.CS.CSharp.ConstA parent)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_DynamicDowncastTo_MR_CSharp_C", ExactSpelling = true)]
                    extern static _Underlying *__MR_CSharp_A_DynamicDowncastTo_MR_CSharp_C(MR.CS.CSharp.ConstA._Underlying *_this);
                    var ptr = __MR_CSharp_A_DynamicDowncastTo_MR_CSharp_C(parent._UnderlyingPtr);
                    if (ptr == null) return null;
                    ConstC ret = new(ptr, is_owning: false);
                    ret._KeepAlive(parent);
                    return ret;
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstC() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_C_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstC._Underlying *__MR_CSharp_C_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_C_DefaultConstruct();
                }

                /// Generated from method `MR::CSharp::C::bar`.
                public unsafe void bar(int _1, int _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_C_bar", ExactSpelling = true)]
                    extern static void __MR_CSharp_C_bar(_Underlying *_this, int _1, int _2);
                    __MR_CSharp_C_bar(_UnderlyingPtr, _1, _2);
                }

                /// Generated from method `MR::CSharp::C::static_foo`.
                public static void static_foo()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_C_static_foo", ExactSpelling = true)]
                    extern static void __MR_CSharp_C_static_foo();
                    __MR_CSharp_C_static_foo();
                }

                /// Generated from method `MR::CSharp::C::static_bar`.
                public static void static_bar(int _1, int _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_C_static_bar", ExactSpelling = true)]
                    extern static void __MR_CSharp_C_static_bar(int _1, int _2);
                    __MR_CSharp_C_static_bar(_1, _2);
                }

                /// Generated from method `MR::CSharp::C::virtual_bar`.
                public unsafe void virtual_bar(int _1, int _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_C_virtual_bar", ExactSpelling = true)]
                    extern static void __MR_CSharp_C_virtual_bar(_Underlying *_this, int _1, int _2);
                    __MR_CSharp_C_virtual_bar(_UnderlyingPtr, _1, _2);
                }
            }

            /// Generated from class `MR::CSharp::C`.
            /// Base classes:
            ///   Virtual:
            ///     `MR::CSharp::A`
            /// This is the non-const half of the class.
            public class C : ConstC
            {
                internal unsafe C(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                // Upcasts:
                public static unsafe implicit operator MR.CS.CSharp.A(C self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_C_UpcastTo_MR_CSharp_A", ExactSpelling = true)]
                    extern static MR.CS.CSharp.A._Underlying *__MR_CSharp_C_UpcastTo_MR_CSharp_A(_Underlying *_this);
                    MR.CS.CSharp.A ret = new(__MR_CSharp_C_UpcastTo_MR_CSharp_A(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }

                // Downcasts:
                public static unsafe explicit operator C?(MR.CS.CSharp.A parent)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_DynamicDowncastTo_MR_CSharp_C", ExactSpelling = true)]
                    extern static _Underlying *__MR_CSharp_A_DynamicDowncastTo_MR_CSharp_C(MR.CS.CSharp.A._Underlying *_this);
                    var ptr = __MR_CSharp_A_DynamicDowncastTo_MR_CSharp_C(parent._UnderlyingPtr);
                    if (ptr == null) return null;
                    C ret = new(ptr, is_owning: false);
                    ret._KeepAlive(parent);
                    return ret;
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe C() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_C_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstC._Underlying *__MR_CSharp_C_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_C_DefaultConstruct();
                }

                /// Generated from method `MR::CSharp::C::foo`.
                public unsafe void foo()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_C_foo", ExactSpelling = true)]
                    extern static void __MR_CSharp_C_foo(_Underlying *_this);
                    __MR_CSharp_C_foo(_UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::C::virtual_foo`.
                public unsafe void virtual_foo()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_C_virtual_foo", ExactSpelling = true)]
                    extern static void __MR_CSharp_C_virtual_foo(_Underlying *_this);
                    __MR_CSharp_C_virtual_foo(_UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::C::refs`.
                public unsafe ref int refs(ref int x, ref int _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_C_refs", ExactSpelling = true)]
                    extern static int *__MR_CSharp_C_refs(_Underlying *_this, int *x, int *_2);
                    fixed (int *__ptr_x = &x)
                    {
                        fixed (int *__ptr__2 = &_2)
                        {
                            return ref *__MR_CSharp_C_refs(_UnderlyingPtr, __ptr_x, __ptr__2);
                        }
                    }
                }
            }

            /// Generated from class `MR::CSharp::D`.
            /// Derived classes:
            ///   Direct: (non-virtual)
            ///     `MR::CSharp::F`
            ///     `MR::CSharp::G`
            /// This is the const half of the class.
            public class ConstD : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstD(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr == null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_D_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_D_Destroy(_Underlying *_this);
                    __MR_CSharp_D_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstD() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstD() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_D_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstD._Underlying *__MR_CSharp_D_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_D_DefaultConstruct();
                }

                /// Generated from method `MR::CSharp::D::d1`.
                public unsafe void d1()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_D_d1", ExactSpelling = true)]
                    extern static void __MR_CSharp_D_d1(_Underlying *_this);
                    __MR_CSharp_D_d1(_UnderlyingPtr);
                }
            }

            /// Generated from class `MR::CSharp::D`.
            /// Derived classes:
            ///   Direct: (non-virtual)
            ///     `MR::CSharp::F`
            ///     `MR::CSharp::G`
            /// This is the non-const half of the class.
            public class D : ConstD
            {
                internal unsafe D(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe D() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_D_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstD._Underlying *__MR_CSharp_D_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_D_DefaultConstruct();
                }

                /// Generated from method `MR::CSharp::D::d2`.
                public unsafe void d2()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_D_d2", ExactSpelling = true)]
                    extern static void __MR_CSharp_D_d2(_Underlying *_this);
                    __MR_CSharp_D_d2(_UnderlyingPtr);
                }
            }

            /// Generated from class `MR::CSharp::E`.
            /// Derived classes:
            ///   Virtual:
            ///     `MR::CSharp::G`
            ///   Direct: (non-virtual)
            ///     `MR::CSharp::F`
            /// This is the const half of the class.
            public class ConstE : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstE(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr == null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_E_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_E_Destroy(_Underlying *_this);
                    __MR_CSharp_E_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstE() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstE() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_E_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstE._Underlying *__MR_CSharp_E_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_E_DefaultConstruct();
                }

                /// Generated from method `MR::CSharp::E::e1`.
                public unsafe void e1()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_E_e1", ExactSpelling = true)]
                    extern static void __MR_CSharp_E_e1(_Underlying *_this);
                    __MR_CSharp_E_e1(_UnderlyingPtr);
                }
            }

            /// Generated from class `MR::CSharp::E`.
            /// Derived classes:
            ///   Virtual:
            ///     `MR::CSharp::G`
            ///   Direct: (non-virtual)
            ///     `MR::CSharp::F`
            /// This is the non-const half of the class.
            public class E : ConstE
            {
                internal unsafe E(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe E() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_E_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstE._Underlying *__MR_CSharp_E_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_E_DefaultConstruct();
                }

                /// Generated from method `MR::CSharp::E::e2`.
                public unsafe void e2()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_E_e2", ExactSpelling = true)]
                    extern static void __MR_CSharp_E_e2(_Underlying *_this);
                    __MR_CSharp_E_e2(_UnderlyingPtr);
                }
            }

            /// Generated from class `MR::CSharp::F`.
            /// Base classes:
            ///   Direct: (non-virtual)
            ///     `MR::CSharp::A`
            ///     `MR::CSharp::D`
            ///     `MR::CSharp::E`
            /// This is the const half of the class.
            public class ConstF : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstF(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr == null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_F_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_F_Destroy(_Underlying *_this);
                    __MR_CSharp_F_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstF() {Dispose(false);}

                // Upcasts:
                public static unsafe implicit operator MR.CS.CSharp.ConstA(ConstF self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_F_UpcastTo_MR_CSharp_A", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstA._Underlying *__MR_CSharp_F_UpcastTo_MR_CSharp_A(_Underlying *_this);
                    MR.CS.CSharp.ConstA ret = new(__MR_CSharp_F_UpcastTo_MR_CSharp_A(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }
                public static unsafe implicit operator MR.CS.CSharp.ConstD(ConstF self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_F_UpcastTo_MR_CSharp_D", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstD._Underlying *__MR_CSharp_F_UpcastTo_MR_CSharp_D(_Underlying *_this);
                    MR.CS.CSharp.ConstD ret = new(__MR_CSharp_F_UpcastTo_MR_CSharp_D(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }
                public static unsafe implicit operator MR.CS.CSharp.ConstE(ConstF self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_F_UpcastTo_MR_CSharp_E", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstE._Underlying *__MR_CSharp_F_UpcastTo_MR_CSharp_E(_Underlying *_this);
                    MR.CS.CSharp.ConstE ret = new(__MR_CSharp_F_UpcastTo_MR_CSharp_E(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }

                // Downcasts:
                public static unsafe explicit operator ConstF?(MR.CS.CSharp.ConstA parent)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_DynamicDowncastTo_MR_CSharp_F", ExactSpelling = true)]
                    extern static _Underlying *__MR_CSharp_A_DynamicDowncastTo_MR_CSharp_F(MR.CS.CSharp.ConstA._Underlying *_this);
                    var ptr = __MR_CSharp_A_DynamicDowncastTo_MR_CSharp_F(parent._UnderlyingPtr);
                    if (ptr == null) return null;
                    ConstF ret = new(ptr, is_owning: false);
                    ret._KeepAlive(parent);
                    return ret;
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstF() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_F_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstF._Underlying *__MR_CSharp_F_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_F_DefaultConstruct();
                }

                /// Generated from method `MR::CSharp::F::bar`.
                public unsafe void bar(int _1, int _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_F_bar", ExactSpelling = true)]
                    extern static void __MR_CSharp_F_bar(_Underlying *_this, int _1, int _2);
                    __MR_CSharp_F_bar(_UnderlyingPtr, _1, _2);
                }

                /// Generated from method `MR::CSharp::F::static_foo`.
                public static void static_foo()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_F_static_foo", ExactSpelling = true)]
                    extern static void __MR_CSharp_F_static_foo();
                    __MR_CSharp_F_static_foo();
                }

                /// Generated from method `MR::CSharp::F::static_bar`.
                public static void static_bar(int _1, int _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_F_static_bar", ExactSpelling = true)]
                    extern static void __MR_CSharp_F_static_bar(int _1, int _2);
                    __MR_CSharp_F_static_bar(_1, _2);
                }

                /// Generated from method `MR::CSharp::F::virtual_bar`.
                public unsafe void virtual_bar(int _1, int _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_F_virtual_bar", ExactSpelling = true)]
                    extern static void __MR_CSharp_F_virtual_bar(_Underlying *_this, int _1, int _2);
                    __MR_CSharp_F_virtual_bar(_UnderlyingPtr, _1, _2);
                }

                /// Generated from method `MR::CSharp::F::d1`.
                public unsafe void d1()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_F_d1", ExactSpelling = true)]
                    extern static void __MR_CSharp_F_d1(_Underlying *_this);
                    __MR_CSharp_F_d1(_UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::F::e1`.
                public unsafe void e1()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_F_e1", ExactSpelling = true)]
                    extern static void __MR_CSharp_F_e1(_Underlying *_this);
                    __MR_CSharp_F_e1(_UnderlyingPtr);
                }
            }

            /// Generated from class `MR::CSharp::F`.
            /// Base classes:
            ///   Direct: (non-virtual)
            ///     `MR::CSharp::A`
            ///     `MR::CSharp::D`
            ///     `MR::CSharp::E`
            /// This is the non-const half of the class.
            public class F : ConstF
            {
                internal unsafe F(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                // Upcasts:
                public static unsafe implicit operator MR.CS.CSharp.A(F self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_F_UpcastTo_MR_CSharp_A", ExactSpelling = true)]
                    extern static MR.CS.CSharp.A._Underlying *__MR_CSharp_F_UpcastTo_MR_CSharp_A(_Underlying *_this);
                    MR.CS.CSharp.A ret = new(__MR_CSharp_F_UpcastTo_MR_CSharp_A(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }
                public static unsafe implicit operator MR.CS.CSharp.D(F self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_F_UpcastTo_MR_CSharp_D", ExactSpelling = true)]
                    extern static MR.CS.CSharp.D._Underlying *__MR_CSharp_F_UpcastTo_MR_CSharp_D(_Underlying *_this);
                    MR.CS.CSharp.D ret = new(__MR_CSharp_F_UpcastTo_MR_CSharp_D(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }
                public static unsafe implicit operator MR.CS.CSharp.E(F self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_F_UpcastTo_MR_CSharp_E", ExactSpelling = true)]
                    extern static MR.CS.CSharp.E._Underlying *__MR_CSharp_F_UpcastTo_MR_CSharp_E(_Underlying *_this);
                    MR.CS.CSharp.E ret = new(__MR_CSharp_F_UpcastTo_MR_CSharp_E(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }

                // Downcasts:
                public static unsafe explicit operator F?(MR.CS.CSharp.A parent)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_DynamicDowncastTo_MR_CSharp_F", ExactSpelling = true)]
                    extern static _Underlying *__MR_CSharp_A_DynamicDowncastTo_MR_CSharp_F(MR.CS.CSharp.A._Underlying *_this);
                    var ptr = __MR_CSharp_A_DynamicDowncastTo_MR_CSharp_F(parent._UnderlyingPtr);
                    if (ptr == null) return null;
                    F ret = new(ptr, is_owning: false);
                    ret._KeepAlive(parent);
                    return ret;
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe F() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_F_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstF._Underlying *__MR_CSharp_F_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_F_DefaultConstruct();
                }

                /// Generated from method `MR::CSharp::F::foo`.
                public unsafe void foo()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_F_foo", ExactSpelling = true)]
                    extern static void __MR_CSharp_F_foo(_Underlying *_this);
                    __MR_CSharp_F_foo(_UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::F::virtual_foo`.
                public unsafe void virtual_foo()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_F_virtual_foo", ExactSpelling = true)]
                    extern static void __MR_CSharp_F_virtual_foo(_Underlying *_this);
                    __MR_CSharp_F_virtual_foo(_UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::F::refs`.
                public unsafe ref int refs(ref int x, ref int _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_F_refs", ExactSpelling = true)]
                    extern static int *__MR_CSharp_F_refs(_Underlying *_this, int *x, int *_2);
                    fixed (int *__ptr_x = &x)
                    {
                        fixed (int *__ptr__2 = &_2)
                        {
                            return ref *__MR_CSharp_F_refs(_UnderlyingPtr, __ptr_x, __ptr__2);
                        }
                    }
                }

                /// Generated from method `MR::CSharp::F::d2`.
                public unsafe void d2()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_F_d2", ExactSpelling = true)]
                    extern static void __MR_CSharp_F_d2(_Underlying *_this);
                    __MR_CSharp_F_d2(_UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::F::e2`.
                public unsafe void e2()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_F_e2", ExactSpelling = true)]
                    extern static void __MR_CSharp_F_e2(_Underlying *_this);
                    __MR_CSharp_F_e2(_UnderlyingPtr);
                }
            }

            // Even if the secondary bases are virtual, this doesn't affect anything.
            /// Generated from class `MR::CSharp::G`.
            /// Base classes:
            ///   Virtual:
            ///     `MR::CSharp::E`
            ///   Direct: (non-virtual)
            ///     `MR::CSharp::A`
            ///     `MR::CSharp::D`
            /// This is the const half of the class.
            public class ConstG : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstG(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr == null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_G_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_G_Destroy(_Underlying *_this);
                    __MR_CSharp_G_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstG() {Dispose(false);}

                // Upcasts:
                public static unsafe implicit operator MR.CS.CSharp.ConstA(ConstG self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_G_UpcastTo_MR_CSharp_A", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstA._Underlying *__MR_CSharp_G_UpcastTo_MR_CSharp_A(_Underlying *_this);
                    MR.CS.CSharp.ConstA ret = new(__MR_CSharp_G_UpcastTo_MR_CSharp_A(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }
                public static unsafe implicit operator MR.CS.CSharp.ConstD(ConstG self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_G_UpcastTo_MR_CSharp_D", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstD._Underlying *__MR_CSharp_G_UpcastTo_MR_CSharp_D(_Underlying *_this);
                    MR.CS.CSharp.ConstD ret = new(__MR_CSharp_G_UpcastTo_MR_CSharp_D(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }
                public static unsafe implicit operator MR.CS.CSharp.ConstE(ConstG self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_G_UpcastTo_MR_CSharp_E", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstE._Underlying *__MR_CSharp_G_UpcastTo_MR_CSharp_E(_Underlying *_this);
                    MR.CS.CSharp.ConstE ret = new(__MR_CSharp_G_UpcastTo_MR_CSharp_E(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }

                // Downcasts:
                public static unsafe explicit operator ConstG?(MR.CS.CSharp.ConstA parent)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_DynamicDowncastTo_MR_CSharp_G", ExactSpelling = true)]
                    extern static _Underlying *__MR_CSharp_A_DynamicDowncastTo_MR_CSharp_G(MR.CS.CSharp.ConstA._Underlying *_this);
                    var ptr = __MR_CSharp_A_DynamicDowncastTo_MR_CSharp_G(parent._UnderlyingPtr);
                    if (ptr == null) return null;
                    ConstG ret = new(ptr, is_owning: false);
                    ret._KeepAlive(parent);
                    return ret;
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstG() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_G_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstG._Underlying *__MR_CSharp_G_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_G_DefaultConstruct();
                }

                /// Generated from method `MR::CSharp::G::bar`.
                public unsafe void bar(int _1, int _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_G_bar", ExactSpelling = true)]
                    extern static void __MR_CSharp_G_bar(_Underlying *_this, int _1, int _2);
                    __MR_CSharp_G_bar(_UnderlyingPtr, _1, _2);
                }

                /// Generated from method `MR::CSharp::G::static_foo`.
                public static void static_foo()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_G_static_foo", ExactSpelling = true)]
                    extern static void __MR_CSharp_G_static_foo();
                    __MR_CSharp_G_static_foo();
                }

                /// Generated from method `MR::CSharp::G::static_bar`.
                public static void static_bar(int _1, int _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_G_static_bar", ExactSpelling = true)]
                    extern static void __MR_CSharp_G_static_bar(int _1, int _2);
                    __MR_CSharp_G_static_bar(_1, _2);
                }

                /// Generated from method `MR::CSharp::G::virtual_bar`.
                public unsafe void virtual_bar(int _1, int _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_G_virtual_bar", ExactSpelling = true)]
                    extern static void __MR_CSharp_G_virtual_bar(_Underlying *_this, int _1, int _2);
                    __MR_CSharp_G_virtual_bar(_UnderlyingPtr, _1, _2);
                }

                /// Generated from method `MR::CSharp::G::d1`.
                public unsafe void d1()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_G_d1", ExactSpelling = true)]
                    extern static void __MR_CSharp_G_d1(_Underlying *_this);
                    __MR_CSharp_G_d1(_UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::G::e1`.
                public unsafe void e1()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_G_e1", ExactSpelling = true)]
                    extern static void __MR_CSharp_G_e1(_Underlying *_this);
                    __MR_CSharp_G_e1(_UnderlyingPtr);
                }
            }

            // Even if the secondary bases are virtual, this doesn't affect anything.
            /// Generated from class `MR::CSharp::G`.
            /// Base classes:
            ///   Virtual:
            ///     `MR::CSharp::E`
            ///   Direct: (non-virtual)
            ///     `MR::CSharp::A`
            ///     `MR::CSharp::D`
            /// This is the non-const half of the class.
            public class G : ConstG
            {
                internal unsafe G(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                // Upcasts:
                public static unsafe implicit operator MR.CS.CSharp.A(G self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_G_UpcastTo_MR_CSharp_A", ExactSpelling = true)]
                    extern static MR.CS.CSharp.A._Underlying *__MR_CSharp_G_UpcastTo_MR_CSharp_A(_Underlying *_this);
                    MR.CS.CSharp.A ret = new(__MR_CSharp_G_UpcastTo_MR_CSharp_A(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }
                public static unsafe implicit operator MR.CS.CSharp.D(G self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_G_UpcastTo_MR_CSharp_D", ExactSpelling = true)]
                    extern static MR.CS.CSharp.D._Underlying *__MR_CSharp_G_UpcastTo_MR_CSharp_D(_Underlying *_this);
                    MR.CS.CSharp.D ret = new(__MR_CSharp_G_UpcastTo_MR_CSharp_D(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }
                public static unsafe implicit operator MR.CS.CSharp.E(G self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_G_UpcastTo_MR_CSharp_E", ExactSpelling = true)]
                    extern static MR.CS.CSharp.E._Underlying *__MR_CSharp_G_UpcastTo_MR_CSharp_E(_Underlying *_this);
                    MR.CS.CSharp.E ret = new(__MR_CSharp_G_UpcastTo_MR_CSharp_E(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAlive(self);
                    return ret;
                }

                // Downcasts:
                public static unsafe explicit operator G?(MR.CS.CSharp.A parent)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_DynamicDowncastTo_MR_CSharp_G", ExactSpelling = true)]
                    extern static _Underlying *__MR_CSharp_A_DynamicDowncastTo_MR_CSharp_G(MR.CS.CSharp.A._Underlying *_this);
                    var ptr = __MR_CSharp_A_DynamicDowncastTo_MR_CSharp_G(parent._UnderlyingPtr);
                    if (ptr == null) return null;
                    G ret = new(ptr, is_owning: false);
                    ret._KeepAlive(parent);
                    return ret;
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe G() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_G_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstG._Underlying *__MR_CSharp_G_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_G_DefaultConstruct();
                }

                /// Generated from method `MR::CSharp::G::foo`.
                public unsafe void foo()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_G_foo", ExactSpelling = true)]
                    extern static void __MR_CSharp_G_foo(_Underlying *_this);
                    __MR_CSharp_G_foo(_UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::G::virtual_foo`.
                public unsafe void virtual_foo()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_G_virtual_foo", ExactSpelling = true)]
                    extern static void __MR_CSharp_G_virtual_foo(_Underlying *_this);
                    __MR_CSharp_G_virtual_foo(_UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::G::refs`.
                public unsafe ref int refs(ref int x, ref int _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_G_refs", ExactSpelling = true)]
                    extern static int *__MR_CSharp_G_refs(_Underlying *_this, int *x, int *_2);
                    fixed (int *__ptr_x = &x)
                    {
                        fixed (int *__ptr__2 = &_2)
                        {
                            return ref *__MR_CSharp_G_refs(_UnderlyingPtr, __ptr_x, __ptr__2);
                        }
                    }
                }

                /// Generated from method `MR::CSharp::G::d2`.
                public unsafe void d2()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_G_d2", ExactSpelling = true)]
                    extern static void __MR_CSharp_G_d2(_Underlying *_this);
                    __MR_CSharp_G_d2(_UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::G::e2`.
                public unsafe void e2()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_G_e2", ExactSpelling = true)]
                    extern static void __MR_CSharp_G_e2(_Underlying *_this);
                    __MR_CSharp_G_e2(_UnderlyingPtr);
                }
            }

            /// Generated from class `MR::CSharp::Trivial`.
            /// This is the const half of the class.
            public class ConstTrivial : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstTrivial(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr == null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_Trivial_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_Trivial_Destroy(_Underlying *_this);
                    __MR_CSharp_Trivial_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstTrivial() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstTrivial() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_Trivial_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstTrivial._Underlying *__MR_CSharp_Trivial_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_Trivial_DefaultConstruct();
                }
            }

            /// Generated from class `MR::CSharp::Trivial`.
            /// This is the non-const half of the class.
            public class Trivial : ConstTrivial
            {
                internal unsafe Trivial(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Trivial() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_Trivial_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstTrivial._Underlying *__MR_CSharp_Trivial_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_Trivial_DefaultConstruct();
                }
            }

            /// Generated from class `MR::CSharp::TrivialDerived`.
            /// This is the const half of the class.
            public class ConstTrivialDerived : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstTrivialDerived(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr == null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TrivialDerived_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_TrivialDerived_Destroy(_Underlying *_this);
                    __MR_CSharp_TrivialDerived_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstTrivialDerived() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstTrivialDerived() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TrivialDerived_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstTrivialDerived._Underlying *__MR_CSharp_TrivialDerived_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_TrivialDerived_DefaultConstruct();
                }
            }

            /// Generated from class `MR::CSharp::TrivialDerived`.
            /// This is the non-const half of the class.
            public class TrivialDerived : ConstTrivialDerived
            {
                internal unsafe TrivialDerived(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe TrivialDerived() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TrivialDerived_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstTrivialDerived._Underlying *__MR_CSharp_TrivialDerived_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_TrivialDerived_DefaultConstruct();
                }
            }

            /// Generated from class `MR::CSharp::NonTrivial`.
            /// This is the const half of the class.
            public class ConstNonTrivial : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstNonTrivial(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr == null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_NonTrivial_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_NonTrivial_Destroy(_Underlying *_this);
                    __MR_CSharp_NonTrivial_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstNonTrivial() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstNonTrivial() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_NonTrivial_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstNonTrivial._Underlying *__MR_CSharp_NonTrivial_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_NonTrivial_DefaultConstruct();
                }
            }

            /// Generated from class `MR::CSharp::NonTrivial`.
            /// This is the non-const half of the class.
            public class NonTrivial : ConstNonTrivial
            {
                internal unsafe NonTrivial(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe NonTrivial() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_NonTrivial_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstNonTrivial._Underlying *__MR_CSharp_NonTrivial_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_NonTrivial_DefaultConstruct();
                }
            }

            /// Generated from class `MR::CSharp::NonTrivialDerived`.
            /// This is the const half of the class.
            public class ConstNonTrivialDerived : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstNonTrivialDerived(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr == null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_NonTrivialDerived_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_NonTrivialDerived_Destroy(_Underlying *_this);
                    __MR_CSharp_NonTrivialDerived_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstNonTrivialDerived() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstNonTrivialDerived() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_NonTrivialDerived_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstNonTrivialDerived._Underlying *__MR_CSharp_NonTrivialDerived_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_NonTrivialDerived_DefaultConstruct();
                }
            }

            /// Generated from class `MR::CSharp::NonTrivialDerived`.
            /// This is the non-const half of the class.
            public class NonTrivialDerived : ConstNonTrivialDerived
            {
                internal unsafe NonTrivialDerived(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe NonTrivialDerived() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_NonTrivialDerived_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstNonTrivialDerived._Underlying *__MR_CSharp_NonTrivialDerived_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_NonTrivialDerived_DefaultConstruct();
                }
            }

            /// Generated from class `MR::CSharp::SA`.
            /// Derived classes:
            ///   Direct: (non-virtual)
            ///     `MR::CSharp::SC`
            /// This is the const half of the class.
            public class ConstSA : MR.CS.Misc.SharedObject, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.
                internal struct _UnderlyingShared; // Represents the underlying shared pointer C++ type.

                internal unsafe _UnderlyingShared *_UnderlyingSharedPtr;
                internal unsafe _Underlying *_UnderlyingPtr
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SA_Get", ExactSpelling = true)]
                        extern static _Underlying *__MR_C_std_shared_ptr_MR_CSharp_SA_Get(_UnderlyingShared *_this);
                        return __MR_C_std_shared_ptr_MR_CSharp_SA_Get(_UnderlyingSharedPtr);
                    }
                }

                /// Check if the underlying shared pointer is owning or not.
                public override bool _IsOwning
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SA_UseCount", ExactSpelling = true)]
                        extern static int __MR_C_std_shared_ptr_MR_CSharp_SA_UseCount();
                        return __MR_C_std_shared_ptr_MR_CSharp_SA_UseCount() > 0;
                    }
                }

                /// Clones the underlying shared pointer. Returns an owning pointer to shared pointer (which itself isn't necessarily owning).
                internal unsafe _UnderlyingShared *_CloneUnderlyingSharedPtr()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SA_ConstructFromAnother", ExactSpelling = true)]
                    extern static _UnderlyingShared *__MR_C_std_shared_ptr_MR_CSharp_SA_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, _UnderlyingShared *other);
                    return __MR_C_std_shared_ptr_MR_CSharp_SA_ConstructFromAnother(MR.CS.Misc._PassBy.copy, _UnderlyingSharedPtr);
                }

                internal unsafe ConstSA(_Underlying *ptr, bool is_owning) : base(true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SA_Construct", ExactSpelling = true)]
                    extern static _UnderlyingShared *__MR_C_std_shared_ptr_MR_CSharp_SA_Construct(_Underlying *other);
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SA_ConstructNonOwning", ExactSpelling = true)]
                    extern static _UnderlyingShared *__MR_C_std_shared_ptr_MR_CSharp_SA_ConstructNonOwning(_Underlying *other);
                    if (is_owning)
                        _UnderlyingSharedPtr = __MR_C_std_shared_ptr_MR_CSharp_SA_Construct(ptr);
                    else
                        _UnderlyingSharedPtr = __MR_C_std_shared_ptr_MR_CSharp_SA_ConstructNonOwning(ptr);
                }

                internal unsafe ConstSA(_UnderlyingShared *shared_ptr, bool is_owning) : base(is_owning) {_UnderlyingSharedPtr = shared_ptr;}

                internal static unsafe SA _MakeAliasing(MR.CS.Std.ConstSharedPtr_ConstVoid._Underlying *ownership, _Underlying *ptr)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SA_ConstructAliasing", ExactSpelling = true)]
                    extern static _UnderlyingShared *__MR_C_std_shared_ptr_MR_CSharp_SA_ConstructAliasing(MR.CS.Misc._PassBy ownership_pass_by, MR.CS.Std.ConstSharedPtr_ConstVoid._Underlying *ownership, _Underlying *ptr);
                    return new(__MR_C_std_shared_ptr_MR_CSharp_SA_ConstructAliasing(MR.CS.Misc._PassBy.copy, ownership, ptr), is_owning: true);
                }

                private protected unsafe void _LateMakeShared(_Underlying *ptr)
                {
                    System.Diagnostics.Trace.Assert(_IsOwningVal == true);
                    System.Diagnostics.Trace.Assert(_UnderlyingSharedPtr == null);
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SA_Construct", ExactSpelling = true)]
                    extern static _UnderlyingShared *__MR_C_std_shared_ptr_MR_CSharp_SA_Construct(_Underlying *other);
                    _UnderlyingSharedPtr = __MR_C_std_shared_ptr_MR_CSharp_SA_Construct(ptr);
                }

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingSharedPtr == null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SA_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_MR_CSharp_SA_Destroy(_UnderlyingShared *_this);
                    __MR_C_std_shared_ptr_MR_CSharp_SA_Destroy(_UnderlyingSharedPtr);
                    _UnderlyingSharedPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstSA() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstSA() : this(shared_ptr: null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_SA_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstSA._Underlying *__MR_CSharp_SA_DefaultConstruct();
                    _LateMakeShared(__MR_CSharp_SA_DefaultConstruct());
                }
            }

            /// Generated from class `MR::CSharp::SA`.
            /// Derived classes:
            ///   Direct: (non-virtual)
            ///     `MR::CSharp::SC`
            /// This is the non-const half of the class.
            public class SA : ConstSA
            {
                internal unsafe SA(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                internal unsafe SA(_UnderlyingShared *shared_ptr, bool is_owning) : base(shared_ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe SA() : this(shared_ptr: null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_SA_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstSA._Underlying *__MR_CSharp_SA_DefaultConstruct();
                    _LateMakeShared(__MR_CSharp_SA_DefaultConstruct());
                }
            }

            /// Generated from class `MR::CSharp::SB`.
            /// Derived classes:
            ///   Direct: (non-virtual)
            ///     `MR::CSharp::SC`
            /// This is the const half of the class.
            public class ConstSB : MR.CS.Misc.SharedObject, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.
                internal struct _UnderlyingShared; // Represents the underlying shared pointer C++ type.

                internal unsafe _UnderlyingShared *_UnderlyingSharedPtr;
                internal unsafe _Underlying *_UnderlyingPtr
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SB_Get", ExactSpelling = true)]
                        extern static _Underlying *__MR_C_std_shared_ptr_MR_CSharp_SB_Get(_UnderlyingShared *_this);
                        return __MR_C_std_shared_ptr_MR_CSharp_SB_Get(_UnderlyingSharedPtr);
                    }
                }

                /// Check if the underlying shared pointer is owning or not.
                public override bool _IsOwning
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SB_UseCount", ExactSpelling = true)]
                        extern static int __MR_C_std_shared_ptr_MR_CSharp_SB_UseCount();
                        return __MR_C_std_shared_ptr_MR_CSharp_SB_UseCount() > 0;
                    }
                }

                /// Clones the underlying shared pointer. Returns an owning pointer to shared pointer (which itself isn't necessarily owning).
                internal unsafe _UnderlyingShared *_CloneUnderlyingSharedPtr()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SB_ConstructFromAnother", ExactSpelling = true)]
                    extern static _UnderlyingShared *__MR_C_std_shared_ptr_MR_CSharp_SB_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, _UnderlyingShared *other);
                    return __MR_C_std_shared_ptr_MR_CSharp_SB_ConstructFromAnother(MR.CS.Misc._PassBy.copy, _UnderlyingSharedPtr);
                }

                internal unsafe ConstSB(_Underlying *ptr, bool is_owning) : base(true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SB_Construct", ExactSpelling = true)]
                    extern static _UnderlyingShared *__MR_C_std_shared_ptr_MR_CSharp_SB_Construct(_Underlying *other);
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SB_ConstructNonOwning", ExactSpelling = true)]
                    extern static _UnderlyingShared *__MR_C_std_shared_ptr_MR_CSharp_SB_ConstructNonOwning(_Underlying *other);
                    if (is_owning)
                        _UnderlyingSharedPtr = __MR_C_std_shared_ptr_MR_CSharp_SB_Construct(ptr);
                    else
                        _UnderlyingSharedPtr = __MR_C_std_shared_ptr_MR_CSharp_SB_ConstructNonOwning(ptr);
                }

                internal unsafe ConstSB(_UnderlyingShared *shared_ptr, bool is_owning) : base(is_owning) {_UnderlyingSharedPtr = shared_ptr;}

                internal static unsafe SB _MakeAliasing(MR.CS.Std.ConstSharedPtr_ConstVoid._Underlying *ownership, _Underlying *ptr)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SB_ConstructAliasing", ExactSpelling = true)]
                    extern static _UnderlyingShared *__MR_C_std_shared_ptr_MR_CSharp_SB_ConstructAliasing(MR.CS.Misc._PassBy ownership_pass_by, MR.CS.Std.ConstSharedPtr_ConstVoid._Underlying *ownership, _Underlying *ptr);
                    return new(__MR_C_std_shared_ptr_MR_CSharp_SB_ConstructAliasing(MR.CS.Misc._PassBy.copy, ownership, ptr), is_owning: true);
                }

                private protected unsafe void _LateMakeShared(_Underlying *ptr)
                {
                    System.Diagnostics.Trace.Assert(_IsOwningVal == true);
                    System.Diagnostics.Trace.Assert(_UnderlyingSharedPtr == null);
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SB_Construct", ExactSpelling = true)]
                    extern static _UnderlyingShared *__MR_C_std_shared_ptr_MR_CSharp_SB_Construct(_Underlying *other);
                    _UnderlyingSharedPtr = __MR_C_std_shared_ptr_MR_CSharp_SB_Construct(ptr);
                }

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingSharedPtr == null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SB_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_MR_CSharp_SB_Destroy(_UnderlyingShared *_this);
                    __MR_C_std_shared_ptr_MR_CSharp_SB_Destroy(_UnderlyingSharedPtr);
                    _UnderlyingSharedPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstSB() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstSB() : this(shared_ptr: null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_SB_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstSB._Underlying *__MR_CSharp_SB_DefaultConstruct();
                    _LateMakeShared(__MR_CSharp_SB_DefaultConstruct());
                }
            }

            /// Generated from class `MR::CSharp::SB`.
            /// Derived classes:
            ///   Direct: (non-virtual)
            ///     `MR::CSharp::SC`
            /// This is the non-const half of the class.
            public class SB : ConstSB
            {
                internal unsafe SB(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                internal unsafe SB(_UnderlyingShared *shared_ptr, bool is_owning) : base(shared_ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe SB() : this(shared_ptr: null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_SB_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstSB._Underlying *__MR_CSharp_SB_DefaultConstruct();
                    _LateMakeShared(__MR_CSharp_SB_DefaultConstruct());
                }
            }

            /// Generated from class `MR::CSharp::SC`.
            /// Base classes:
            ///   Direct: (non-virtual)
            ///     `MR::CSharp::SA`
            ///     `MR::CSharp::SB`
            /// This is the const half of the class.
            public class ConstSC : MR.CS.Misc.SharedObject, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.
                internal struct _UnderlyingShared; // Represents the underlying shared pointer C++ type.

                internal unsafe _UnderlyingShared *_UnderlyingSharedPtr;
                internal unsafe _Underlying *_UnderlyingPtr
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SC_Get", ExactSpelling = true)]
                        extern static _Underlying *__MR_C_std_shared_ptr_MR_CSharp_SC_Get(_UnderlyingShared *_this);
                        return __MR_C_std_shared_ptr_MR_CSharp_SC_Get(_UnderlyingSharedPtr);
                    }
                }

                /// Check if the underlying shared pointer is owning or not.
                public override bool _IsOwning
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SC_UseCount", ExactSpelling = true)]
                        extern static int __MR_C_std_shared_ptr_MR_CSharp_SC_UseCount();
                        return __MR_C_std_shared_ptr_MR_CSharp_SC_UseCount() > 0;
                    }
                }

                /// Clones the underlying shared pointer. Returns an owning pointer to shared pointer (which itself isn't necessarily owning).
                internal unsafe _UnderlyingShared *_CloneUnderlyingSharedPtr()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SC_ConstructFromAnother", ExactSpelling = true)]
                    extern static _UnderlyingShared *__MR_C_std_shared_ptr_MR_CSharp_SC_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, _UnderlyingShared *other);
                    return __MR_C_std_shared_ptr_MR_CSharp_SC_ConstructFromAnother(MR.CS.Misc._PassBy.copy, _UnderlyingSharedPtr);
                }

                internal unsafe ConstSC(_Underlying *ptr, bool is_owning) : base(true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SC_Construct", ExactSpelling = true)]
                    extern static _UnderlyingShared *__MR_C_std_shared_ptr_MR_CSharp_SC_Construct(_Underlying *other);
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SC_ConstructNonOwning", ExactSpelling = true)]
                    extern static _UnderlyingShared *__MR_C_std_shared_ptr_MR_CSharp_SC_ConstructNonOwning(_Underlying *other);
                    if (is_owning)
                        _UnderlyingSharedPtr = __MR_C_std_shared_ptr_MR_CSharp_SC_Construct(ptr);
                    else
                        _UnderlyingSharedPtr = __MR_C_std_shared_ptr_MR_CSharp_SC_ConstructNonOwning(ptr);
                }

                internal unsafe ConstSC(_UnderlyingShared *shared_ptr, bool is_owning) : base(is_owning) {_UnderlyingSharedPtr = shared_ptr;}

                internal static unsafe SC _MakeAliasing(MR.CS.Std.ConstSharedPtr_ConstVoid._Underlying *ownership, _Underlying *ptr)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SC_ConstructAliasing", ExactSpelling = true)]
                    extern static _UnderlyingShared *__MR_C_std_shared_ptr_MR_CSharp_SC_ConstructAliasing(MR.CS.Misc._PassBy ownership_pass_by, MR.CS.Std.ConstSharedPtr_ConstVoid._Underlying *ownership, _Underlying *ptr);
                    return new(__MR_C_std_shared_ptr_MR_CSharp_SC_ConstructAliasing(MR.CS.Misc._PassBy.copy, ownership, ptr), is_owning: true);
                }

                private protected unsafe void _LateMakeShared(_Underlying *ptr)
                {
                    System.Diagnostics.Trace.Assert(_IsOwningVal == true);
                    System.Diagnostics.Trace.Assert(_UnderlyingSharedPtr == null);
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SC_Construct", ExactSpelling = true)]
                    extern static _UnderlyingShared *__MR_C_std_shared_ptr_MR_CSharp_SC_Construct(_Underlying *other);
                    _UnderlyingSharedPtr = __MR_C_std_shared_ptr_MR_CSharp_SC_Construct(ptr);
                }

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingSharedPtr == null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SC_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_MR_CSharp_SC_Destroy(_UnderlyingShared *_this);
                    __MR_C_std_shared_ptr_MR_CSharp_SC_Destroy(_UnderlyingSharedPtr);
                    _UnderlyingSharedPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstSC() {Dispose(false);}

                // Upcasts:
                public static unsafe implicit operator MR.CS.CSharp.ConstSA(ConstSC self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_SC_UpcastTo_MR_CSharp_SA", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstSA._Underlying *__MR_CSharp_SC_UpcastTo_MR_CSharp_SA(_Underlying *_this);
                    return MR.CS.CSharp.ConstSA._MakeAliasing((MR.CS.Std.ConstSharedPtr_ConstVoid._Underlying *)self._UnderlyingSharedPtr, __MR_CSharp_SC_UpcastTo_MR_CSharp_SA(self._UnderlyingPtr));
                }
                public static unsafe implicit operator MR.CS.CSharp.ConstSB(ConstSC self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_SC_UpcastTo_MR_CSharp_SB", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstSB._Underlying *__MR_CSharp_SC_UpcastTo_MR_CSharp_SB(_Underlying *_this);
                    return MR.CS.CSharp.ConstSB._MakeAliasing((MR.CS.Std.ConstSharedPtr_ConstVoid._Underlying *)self._UnderlyingSharedPtr, __MR_CSharp_SC_UpcastTo_MR_CSharp_SB(self._UnderlyingPtr));
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstSC() : this(shared_ptr: null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_SC_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstSC._Underlying *__MR_CSharp_SC_DefaultConstruct();
                    _LateMakeShared(__MR_CSharp_SC_DefaultConstruct());
                }
            }

            /// Generated from class `MR::CSharp::SC`.
            /// Base classes:
            ///   Direct: (non-virtual)
            ///     `MR::CSharp::SA`
            ///     `MR::CSharp::SB`
            /// This is the non-const half of the class.
            public class SC : ConstSC
            {
                internal unsafe SC(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                internal unsafe SC(_UnderlyingShared *shared_ptr, bool is_owning) : base(shared_ptr, is_owning) {}

                // Upcasts:
                public static unsafe implicit operator MR.CS.CSharp.SA(SC self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_SC_UpcastTo_MR_CSharp_SA", ExactSpelling = true)]
                    extern static MR.CS.CSharp.SA._Underlying *__MR_CSharp_SC_UpcastTo_MR_CSharp_SA(_Underlying *_this);
                    return MR.CS.CSharp.SA._MakeAliasing((MR.CS.Std.ConstSharedPtr_ConstVoid._Underlying *)self._UnderlyingSharedPtr, __MR_CSharp_SC_UpcastTo_MR_CSharp_SA(self._UnderlyingPtr));
                }
                public static unsafe implicit operator MR.CS.CSharp.SB(SC self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_SC_UpcastTo_MR_CSharp_SB", ExactSpelling = true)]
                    extern static MR.CS.CSharp.SB._Underlying *__MR_CSharp_SC_UpcastTo_MR_CSharp_SB(_Underlying *_this);
                    return MR.CS.CSharp.SB._MakeAliasing((MR.CS.Std.ConstSharedPtr_ConstVoid._Underlying *)self._UnderlyingSharedPtr, __MR_CSharp_SC_UpcastTo_MR_CSharp_SB(self._UnderlyingPtr));
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe SC() : this(shared_ptr: null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_SC_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstSC._Underlying *__MR_CSharp_SC_DefaultConstruct();
                    _LateMakeShared(__MR_CSharp_SC_DefaultConstruct());
                }
            }

            // Nested classes.
            /// Generated from class `MR::CSharp::Outer`.
            /// This is the const half of the class.
            public class ConstOuter : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstOuter(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr == null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_Outer_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_Outer_Destroy(_Underlying *_this);
                    __MR_CSharp_Outer_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstOuter() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstOuter() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_Outer_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstOuter._Underlying *__MR_CSharp_Outer_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_Outer_DefaultConstruct();
                }

                /// Generated from class `MR::CSharp::Outer::Inner`.
                /// This is the const half of the class.
                public class ConstInner : MR.CS.Misc.Object, System.IDisposable
                {
                    internal struct _Underlying; // Represents the underlying C++ type.

                    internal unsafe _Underlying *_UnderlyingPtr;

                    internal unsafe ConstInner(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                    protected virtual unsafe void Dispose(bool disposing)
                    {
                        if (_UnderlyingPtr == null || !_IsOwningVal)
                            return;
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_Outer_Inner_Destroy", ExactSpelling = true)]
                        extern static void __MR_CSharp_Outer_Inner_Destroy(_Underlying *_this);
                        __MR_CSharp_Outer_Inner_Destroy(_UnderlyingPtr);
                        _UnderlyingPtr = null;
                    }
                    public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                    ~ConstInner() {Dispose(false);}

                    /// Constructs an empty (default-constructed) instance.
                    public unsafe ConstInner() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_Outer_Inner_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.CSharp.Outer.ConstInner._Underlying *__MR_CSharp_Outer_Inner_DefaultConstruct();
                        _UnderlyingPtr = __MR_CSharp_Outer_Inner_DefaultConstruct();
                    }
                }

                /// Generated from class `MR::CSharp::Outer::Inner`.
                /// This is the non-const half of the class.
                public class Inner : ConstInner
                {
                    internal unsafe Inner(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                    /// Constructs an empty (default-constructed) instance.
                    public unsafe Inner() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_Outer_Inner_DefaultConstruct", ExactSpelling = true)]
                        extern static MR.CS.CSharp.Outer.ConstInner._Underlying *__MR_CSharp_Outer_Inner_DefaultConstruct();
                        _UnderlyingPtr = __MR_CSharp_Outer_Inner_DefaultConstruct();
                    }

                    /// Generated from method `MR::CSharp::Outer::Inner::bar`.
                    public unsafe void bar()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_Outer_Inner_bar", ExactSpelling = true)]
                        extern static void __MR_CSharp_Outer_Inner_bar(_Underlying *_this);
                        __MR_CSharp_Outer_Inner_bar(_UnderlyingPtr);
                    }
                }
            }

            // Nested classes.
            /// Generated from class `MR::CSharp::Outer`.
            /// This is the non-const half of the class.
            public class Outer : ConstOuter
            {
                internal unsafe Outer(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Outer() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_Outer_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstOuter._Underlying *__MR_CSharp_Outer_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_Outer_DefaultConstruct();
                }

                /// Generated from method `MR::CSharp::Outer::foo`.
                public unsafe void foo()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_Outer_foo", ExactSpelling = true)]
                    extern static void __MR_CSharp_Outer_foo(_Underlying *_this);
                    __MR_CSharp_Outer_foo(_UnderlyingPtr);
                }
            }

            /// Generated from function `MR::CSharp::foo`.
            public static void Foo()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_foo", ExactSpelling = true)]
                extern static void __MR_CSharp_foo();
                __MR_CSharp_foo();
            }

            /// Generated from function `MR::CSharp::test_int`.
            /// Parameter `b` defaults to `42`.
            public static unsafe int TestInt(int a, int? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_int", ExactSpelling = true)]
                extern static int __MR_CSharp_test_int(int a, int *b);
                int __deref_b = b.GetValueOrDefault();
                return __MR_CSharp_test_int(a, b.HasValue ? &__deref_b : null);
            }

            /// Generated from function `MR::CSharp::test_bool`.
            /// Parameter `b` defaults to `true`.
            public static unsafe bool TestBool(bool a, bool? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_bool", ExactSpelling = true)]
                extern static byte __MR_CSharp_test_bool(byte a, byte *b);
                byte __deref_b = b.GetValueOrDefault() ? (byte)1 : (byte)0;
                return __MR_CSharp_test_bool(a ? (byte)1 : (byte)0, b.HasValue ? &__deref_b : null) != 0;
            }

            /// Generated from function `MR::CSharp::test_bool_ref`.
            /// Parameter `b` defaults to `default_bool`.
            public static unsafe void TestBoolRef(ref bool a, MR.CS.Misc.InOut<bool>? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_bool_ref", ExactSpelling = true)]
                extern static void __MR_CSharp_test_bool_ref(bool *a, bool *b);
                fixed (bool *__ptr_a = &a)
                {
                    bool __value_b = b != null ? b.Value : default(bool);
                    __MR_CSharp_test_bool_ref(__ptr_a, b != null ? &__value_b : null);
                    if (b != null) b.Value = __value_b;
                }
            }

            /// Generated from function `MR::CSharp::test_bool_ref2`.
            /// Parameter `b` defaults to `default_bool`.
            public static unsafe int TestBoolRef2(ref bool a, MR.CS.Misc.InOut<bool>? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_bool_ref2", ExactSpelling = true)]
                extern static int __MR_CSharp_test_bool_ref2(bool *a, bool *b);
                fixed (bool *__ptr_a = &a)
                {
                    bool __value_b = b != null ? b.Value : default(bool);
                    var __ret = __MR_CSharp_test_bool_ref2(__ptr_a, b != null ? &__value_b : null);
                    if (b != null) b.Value = __value_b;
                    return __ret;
                }
            }

            /// Generated from function `MR::CSharp::get_bool_ref`.
            public static unsafe ref bool GetBoolRef()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_get_bool_ref", ExactSpelling = true)]
                extern static bool *__MR_CSharp_get_bool_ref();
                return ref *__MR_CSharp_get_bool_ref();
            }

            /// Generated from function `MR::CSharp::print_bool_ref`.
            public static void PrintBoolRef()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_print_bool_ref", ExactSpelling = true)]
                extern static void __MR_CSharp_print_bool_ref();
                __MR_CSharp_print_bool_ref();
            }

            /// Generated from function `MR::CSharp::test_bool_cref`.
            /// Parameter `_2` defaults to `default_bool`.
            public static unsafe bool TestBoolCref(bool _1, bool? _2 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_bool_cref", ExactSpelling = true)]
                extern static bool *__MR_CSharp_test_bool_cref(bool *_1, bool *_2);
                bool __deref__2 = _2.GetValueOrDefault();
                return *__MR_CSharp_test_bool_cref(&_1, _2.HasValue ? &__deref__2 : null);
            }

            /// Generated from function `MR::CSharp::test_int_ref`.
            /// Parameter `b` defaults to `default_int`.
            public static unsafe ref int TestIntRef(ref int a, MR.CS.Misc.InOut<int>? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_int_ref", ExactSpelling = true)]
                extern static int *__MR_CSharp_test_int_ref(int *a, int *b);
                fixed (int *__ptr_a = &a)
                {
                    int __value_b = b != null ? b.Value : default(int);
                    var __ret = __MR_CSharp_test_int_ref(__ptr_a, b != null ? &__value_b : null);
                    if (b != null) b.Value = __value_b;
                    return ref *__ret;
                }
            }

            /// Generated from function `MR::CSharp::test_int_cref`.
            /// Parameter `b` defaults to `default_int`.
            public static unsafe int TestIntCref(int a, int? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_int_cref", ExactSpelling = true)]
                extern static int *__MR_CSharp_test_int_cref(int *a, int *b);
                int __deref_b = b.GetValueOrDefault();
                return *__MR_CSharp_test_int_cref(&a, b.HasValue ? &__deref_b : null);
            }

            /// Generated from function `MR::CSharp::test_int_ptr`.
            /// Parameter `c` defaults to `&default_int`.
            public static unsafe MR.CS.Misc.Ref<int>? TestIntPtr(MR.CS.Misc.InOut<int>? a, MR.CS.Misc.InOut<int>? b = null, MR.CS.Misc.InOutOpt<int>? c = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_int_ptr", ExactSpelling = true)]
                extern static int *__MR_CSharp_test_int_ptr(int *a, int *b, int **c);
                int __value_a = a != null ? a.Value : default(int);
                int __value_b = b != null ? b.Value : default(int);
                int __value_c = c != null && c.Opt != null ? c.Opt.Value : default(int);
                int *__valueptr_c = c != null && c.Opt != null ? &__value_c : null;
                var __ret = __MR_CSharp_test_int_ptr(a != null ? &__value_a : null, b != null ? &__value_b : null, c != null ? &__valueptr_c : null);
                if (c != null && c.Opt != null) c.Opt.Value = __value_c;
                if (b != null) b.Value = __value_b;
                if (a != null) a.Value = __value_a;
                return __ret != null ? new MR.CS.Misc.Ref<int>(__ret) : null;
            }

            /// Generated from function `MR::CSharp::test_int_cptr`.
            /// Parameter `c` defaults to `&default_int`.
            public static unsafe int? TestIntCptr(int? a, int? b = null, MR.CS.Misc.InOpt<int>? c = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_int_cptr", ExactSpelling = true)]
                extern static int *__MR_CSharp_test_int_cptr(int *a, int *b, int **c);
                int __deref_a = a.GetValueOrDefault();
                int __deref_b = b.GetValueOrDefault();
                int __value_c = c != null && c.Opt != null ? c.Opt.Value : default(int);
                int *__valueptr_c = c != null && c.Opt != null ? &__value_c : null;
                var __ret = __MR_CSharp_test_int_cptr(a.HasValue ? &__deref_a : null, b.HasValue ? &__deref_b : null, c != null ? &__valueptr_c : null);
                return __ret != null ? *__ret : null;
            }

            /// Generated from function `MR::CSharp::test_ushort`.
            /// Parameter `b` defaults to `42`.
            public static unsafe ushort TestUshort(ushort a, ushort? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_ushort", ExactSpelling = true)]
                extern static ushort __MR_CSharp_test_ushort(ushort a, ushort *b);
                ushort __deref_b = b.GetValueOrDefault();
                return __MR_CSharp_test_ushort(a, b.HasValue ? &__deref_b : null);
            }

            /// Generated from function `MR::CSharp::test_ushort_ref`.
            /// Parameter `b` defaults to `default_ushort`.
            public static unsafe ref ushort TestUshortRef(ref ushort a, MR.CS.Misc.InOut<ushort>? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_ushort_ref", ExactSpelling = true)]
                extern static ushort *__MR_CSharp_test_ushort_ref(ushort *a, ushort *b);
                fixed (ushort *__ptr_a = &a)
                {
                    ushort __value_b = b != null ? b.Value : default(ushort);
                    var __ret = __MR_CSharp_test_ushort_ref(__ptr_a, b != null ? &__value_b : null);
                    if (b != null) b.Value = __value_b;
                    return ref *__ret;
                }
            }

            /// Generated from function `MR::CSharp::test_ushort_cref`.
            /// Parameter `b` defaults to `default_ushort`.
            public static unsafe ushort TestUshortCref(ushort a, ushort? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_ushort_cref", ExactSpelling = true)]
                extern static ushort *__MR_CSharp_test_ushort_cref(ushort *a, ushort *b);
                ushort __deref_b = b.GetValueOrDefault();
                return *__MR_CSharp_test_ushort_cref(&a, b.HasValue ? &__deref_b : null);
            }

            /// Generated from function `MR::CSharp::test_ushort_ptr`.
            /// Parameter `c` defaults to `&default_ushort`.
            public static unsafe MR.CS.Misc.Ref<ushort>? TestUshortPtr(MR.CS.Misc.InOut<ushort>? a, MR.CS.Misc.InOut<ushort>? b = null, MR.CS.Misc.InOutOpt<ushort>? c = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_ushort_ptr", ExactSpelling = true)]
                extern static ushort *__MR_CSharp_test_ushort_ptr(ushort *a, ushort *b, ushort **c);
                ushort __value_a = a != null ? a.Value : default(ushort);
                ushort __value_b = b != null ? b.Value : default(ushort);
                ushort __value_c = c != null && c.Opt != null ? c.Opt.Value : default(ushort);
                ushort *__valueptr_c = c != null && c.Opt != null ? &__value_c : null;
                var __ret = __MR_CSharp_test_ushort_ptr(a != null ? &__value_a : null, b != null ? &__value_b : null, c != null ? &__valueptr_c : null);
                if (c != null && c.Opt != null) c.Opt.Value = __value_c;
                if (b != null) b.Value = __value_b;
                if (a != null) a.Value = __value_a;
                return __ret != null ? new MR.CS.Misc.Ref<ushort>(__ret) : null;
            }

            /// Generated from function `MR::CSharp::test_ushort_cptr`.
            /// Parameter `c` defaults to `&default_ushort`.
            public static unsafe ushort? TestUshortCptr(ushort? a, ushort? b = null, MR.CS.Misc.InOpt<ushort>? c = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_ushort_cptr", ExactSpelling = true)]
                extern static ushort *__MR_CSharp_test_ushort_cptr(ushort *a, ushort *b, ushort **c);
                ushort __deref_a = a.GetValueOrDefault();
                ushort __deref_b = b.GetValueOrDefault();
                ushort __value_c = c != null && c.Opt != null ? c.Opt.Value : default(ushort);
                ushort *__valueptr_c = c != null && c.Opt != null ? &__value_c : null;
                var __ret = __MR_CSharp_test_ushort_cptr(a.HasValue ? &__deref_a : null, b.HasValue ? &__deref_b : null, c != null ? &__valueptr_c : null);
                return __ret != null ? *__ret : null;
            }

            /// Generated from function `MR::CSharp::test_enum`.
            /// Parameter `b` defaults to `E1::b`.
            public static unsafe MR.CS.CSharp.E1 TestEnum(MR.CS.CSharp.E1 a, MR.CS.CSharp.E1? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_enum_MR_CSharp_E1", ExactSpelling = true)]
                extern static MR.CS.CSharp.E1 __MR_CSharp_test_enum_MR_CSharp_E1(MR.CS.CSharp.E1 a, MR.CS.CSharp.E1 *b);
                MR.CS.CSharp.E1 __deref_b = b.GetValueOrDefault();
                return __MR_CSharp_test_enum_MR_CSharp_E1(a, b.HasValue ? &__deref_b : null);
            }

            /// Generated from function `MR::CSharp::test_enum_ref`.
            /// Parameter `b` defaults to `default_e1`.
            public static unsafe ref MR.CS.CSharp.E1 TestEnumRef(ref MR.CS.CSharp.E1 a, MR.CS.Misc.InOut<MR.CS.CSharp.E1>? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_enum_ref_MR_CSharp_E1", ExactSpelling = true)]
                extern static MR.CS.CSharp.E1 *__MR_CSharp_test_enum_ref_MR_CSharp_E1(MR.CS.CSharp.E1 *a, MR.CS.CSharp.E1 *b);
                fixed (MR.CS.CSharp.E1 *__ptr_a = &a)
                {
                    MR.CS.CSharp.E1 __value_b = b != null ? b.Value : default(MR.CS.CSharp.E1);
                    var __ret = __MR_CSharp_test_enum_ref_MR_CSharp_E1(__ptr_a, b != null ? &__value_b : null);
                    if (b != null) b.Value = __value_b;
                    return ref *__ret;
                }
            }

            /// Generated from function `MR::CSharp::test_enum_cref`.
            /// Parameter `b` defaults to `default_e1`.
            public static unsafe MR.CS.CSharp.E1 TestEnumCref(MR.CS.CSharp.E1 a, MR.CS.CSharp.E1? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_enum_cref_MR_CSharp_E1", ExactSpelling = true)]
                extern static MR.CS.CSharp.E1 *__MR_CSharp_test_enum_cref_MR_CSharp_E1(MR.CS.CSharp.E1 *a, MR.CS.CSharp.E1 *b);
                MR.CS.CSharp.E1 __deref_b = b.GetValueOrDefault();
                return *__MR_CSharp_test_enum_cref_MR_CSharp_E1(&a, b.HasValue ? &__deref_b : null);
            }

            /// Generated from function `MR::CSharp::test_enum_ptr`.
            /// Parameter `c` defaults to `&default_e1`.
            public static unsafe MR.CS.Misc.Ref<MR.CS.CSharp.E1>? TestEnumPtr(MR.CS.Misc.InOut<MR.CS.CSharp.E1>? a, MR.CS.Misc.InOut<MR.CS.CSharp.E1>? b = null, MR.CS.Misc.InOutOpt<MR.CS.CSharp.E1>? c = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_enum_ptr_MR_CSharp_E1_ptr", ExactSpelling = true)]
                extern static MR.CS.CSharp.E1 *__MR_CSharp_test_enum_ptr_MR_CSharp_E1_ptr(MR.CS.CSharp.E1 *a, MR.CS.CSharp.E1 *b, MR.CS.CSharp.E1 **c);
                MR.CS.CSharp.E1 __value_a = a != null ? a.Value : default(MR.CS.CSharp.E1);
                MR.CS.CSharp.E1 __value_b = b != null ? b.Value : default(MR.CS.CSharp.E1);
                MR.CS.CSharp.E1 __value_c = c != null && c.Opt != null ? c.Opt.Value : default(MR.CS.CSharp.E1);
                MR.CS.CSharp.E1 *__valueptr_c = c != null && c.Opt != null ? &__value_c : null;
                var __ret = __MR_CSharp_test_enum_ptr_MR_CSharp_E1_ptr(a != null ? &__value_a : null, b != null ? &__value_b : null, c != null ? &__valueptr_c : null);
                if (c != null && c.Opt != null) c.Opt.Value = __value_c;
                if (b != null) b.Value = __value_b;
                if (a != null) a.Value = __value_a;
                return __ret != null ? new MR.CS.Misc.Ref<MR.CS.CSharp.E1>(__ret) : null;
            }

            /// Generated from function `MR::CSharp::test_enum_cptr`.
            /// Parameter `c` defaults to `&default_e1`.
            public static unsafe MR.CS.CSharp.E1? TestEnumCptr(MR.CS.CSharp.E1? a, MR.CS.CSharp.E1? b = null, MR.CS.Misc.InOpt<MR.CS.CSharp.E1>? c = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_enum_cptr_const_MR_CSharp_E1_ptr", ExactSpelling = true)]
                extern static MR.CS.CSharp.E1 *__MR_CSharp_test_enum_cptr_const_MR_CSharp_E1_ptr(MR.CS.CSharp.E1 *a, MR.CS.CSharp.E1 *b, MR.CS.CSharp.E1 **c);
                MR.CS.CSharp.E1 __deref_a = a.GetValueOrDefault();
                MR.CS.CSharp.E1 __deref_b = b.GetValueOrDefault();
                MR.CS.CSharp.E1 __value_c = c != null && c.Opt != null ? c.Opt.Value : default(MR.CS.CSharp.E1);
                MR.CS.CSharp.E1 *__valueptr_c = c != null && c.Opt != null ? &__value_c : null;
                var __ret = __MR_CSharp_test_enum_cptr_const_MR_CSharp_E1_ptr(a.HasValue ? &__deref_a : null, b.HasValue ? &__deref_b : null, c != null ? &__valueptr_c : null);
                return __ret != null ? *__ret : null;
            }

            /// Generated from function `MR::CSharp::test_enum`.
            /// Parameter `b` defaults to `E2::b`.
            public static unsafe MR.CS.CSharp.E2 TestEnum(MR.CS.CSharp.E2 a, MR.CS.CSharp.E2? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_enum_MR_CSharp_E2", ExactSpelling = true)]
                extern static MR.CS.CSharp.E2 __MR_CSharp_test_enum_MR_CSharp_E2(MR.CS.CSharp.E2 a, MR.CS.CSharp.E2 *b);
                if ((byte)a > 1) a = (MR.CS.CSharp.E2)1;
                MR.CS.CSharp.E2 __deref_b = b.GetValueOrDefault();
                if ((byte)__deref_b > 1) __deref_b = (MR.CS.CSharp.E2)1;
                return __MR_CSharp_test_enum_MR_CSharp_E2(a, b.HasValue ? &__deref_b : null);
            }

            /// Generated from function `MR::CSharp::test_enum_ref`.
            /// Parameter `b` defaults to `default_e2`.
            public static unsafe ref MR.CS.CSharp.E2 TestEnumRef(ref MR.CS.CSharp.E2 a, MR.CS.Misc.InOut<MR.CS.CSharp.E2>? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_enum_ref_MR_CSharp_E2", ExactSpelling = true)]
                extern static MR.CS.CSharp.E2 *__MR_CSharp_test_enum_ref_MR_CSharp_E2(MR.CS.CSharp.E2 *a, MR.CS.CSharp.E2 *b);
                fixed (MR.CS.CSharp.E2 *__ptr_a = &a)
                {
                    if ((byte)a > 1) a = (MR.CS.CSharp.E2)1;
                    MR.CS.CSharp.E2 __value_b = b != null ? b.Value : default(MR.CS.CSharp.E2);
                    if ((byte)__value_b > 1) __value_b = (MR.CS.CSharp.E2)1;
                    var __ret = __MR_CSharp_test_enum_ref_MR_CSharp_E2(__ptr_a, b != null ? &__value_b : null);
                    if (b != null) b.Value = __value_b;
                    return ref *__ret;
                }
            }

            /// Generated from function `MR::CSharp::test_enum_cref`.
            /// Parameter `b` defaults to `default_e2`.
            public static unsafe MR.CS.CSharp.E2 TestEnumCref(MR.CS.CSharp.E2 a, MR.CS.CSharp.E2? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_enum_cref_MR_CSharp_E2", ExactSpelling = true)]
                extern static MR.CS.CSharp.E2 *__MR_CSharp_test_enum_cref_MR_CSharp_E2(MR.CS.CSharp.E2 *a, MR.CS.CSharp.E2 *b);
                if ((byte)a > 1) a = (MR.CS.CSharp.E2)1;
                MR.CS.CSharp.E2 __deref_b = b.GetValueOrDefault();
                if ((byte)__deref_b > 1) __deref_b = (MR.CS.CSharp.E2)1;
                return *__MR_CSharp_test_enum_cref_MR_CSharp_E2(&a, b.HasValue ? &__deref_b : null);
            }

            /// Generated from function `MR::CSharp::test_enum_ptr`.
            /// Parameter `c` defaults to `&default_e2`.
            public static unsafe MR.CS.Misc.Ref<MR.CS.CSharp.E2>? TestEnumPtr(MR.CS.Misc.InOut<MR.CS.CSharp.E2>? a, MR.CS.Misc.InOut<MR.CS.CSharp.E2>? b = null, MR.CS.Misc.InOutOpt<MR.CS.CSharp.E2>? c = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_enum_ptr_MR_CSharp_E2_ptr", ExactSpelling = true)]
                extern static MR.CS.CSharp.E2 *__MR_CSharp_test_enum_ptr_MR_CSharp_E2_ptr(MR.CS.CSharp.E2 *a, MR.CS.CSharp.E2 *b, MR.CS.CSharp.E2 **c);
                MR.CS.CSharp.E2 __value_a = a != null ? a.Value : default(MR.CS.CSharp.E2);
                if ((byte)__value_a > 1) __value_a = (MR.CS.CSharp.E2)1;
                MR.CS.CSharp.E2 __value_b = b != null ? b.Value : default(MR.CS.CSharp.E2);
                if ((byte)__value_b > 1) __value_b = (MR.CS.CSharp.E2)1;
                MR.CS.CSharp.E2 __value_c = c != null && c.Opt != null ? c.Opt.Value : default(MR.CS.CSharp.E2);
                MR.CS.CSharp.E2 *__valueptr_c = c != null && c.Opt != null ? &__value_c : null;
                if ((byte)__value_c > 1) __value_c = (MR.CS.CSharp.E2)1;
                var __ret = __MR_CSharp_test_enum_ptr_MR_CSharp_E2_ptr(a != null ? &__value_a : null, b != null ? &__value_b : null, c != null ? &__valueptr_c : null);
                if (c != null && c.Opt != null) c.Opt.Value = __value_c;
                if (b != null) b.Value = __value_b;
                if (a != null) a.Value = __value_a;
                return __ret != null ? new MR.CS.Misc.Ref<MR.CS.CSharp.E2>(__ret) : null;
            }

            /// Generated from function `MR::CSharp::test_enum_cptr`.
            /// Parameter `c` defaults to `&default_e2`.
            public static unsafe MR.CS.CSharp.E2? TestEnumCptr(MR.CS.CSharp.E2? a, MR.CS.CSharp.E2? b = null, MR.CS.Misc.InOpt<MR.CS.CSharp.E2>? c = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_enum_cptr_const_MR_CSharp_E2_ptr", ExactSpelling = true)]
                extern static MR.CS.CSharp.E2 *__MR_CSharp_test_enum_cptr_const_MR_CSharp_E2_ptr(MR.CS.CSharp.E2 *a, MR.CS.CSharp.E2 *b, MR.CS.CSharp.E2 **c);
                MR.CS.CSharp.E2 __deref_a = a.GetValueOrDefault();
                if ((byte)__deref_a > 1) __deref_a = (MR.CS.CSharp.E2)1;
                MR.CS.CSharp.E2 __deref_b = b.GetValueOrDefault();
                if ((byte)__deref_b > 1) __deref_b = (MR.CS.CSharp.E2)1;
                MR.CS.CSharp.E2 __value_c = c != null && c.Opt != null ? c.Opt.Value : default(MR.CS.CSharp.E2);
                MR.CS.CSharp.E2 *__valueptr_c = c != null && c.Opt != null ? &__value_c : null;
                if ((byte)__value_c > 1) __value_c = (MR.CS.CSharp.E2)1;
                var __ret = __MR_CSharp_test_enum_cptr_const_MR_CSharp_E2_ptr(a.HasValue ? &__deref_a : null, b.HasValue ? &__deref_b : null, c != null ? &__valueptr_c : null);
                return __ret != null ? *__ret : null;
            }

            /// Generated from function `MR::CSharp::test_class_trivial`.
            /// Parameter `b` defaults to `{}`.
            public static unsafe MR.CS.CSharp.Trivial TestClassTrivial(MR.CS.CSharp.ConstTrivial a, MR.CS.CSharp.ConstTrivial? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_class_trivial", ExactSpelling = true)]
                extern static MR.CS.CSharp.Trivial._Underlying *__MR_CSharp_test_class_trivial(MR.CS.CSharp.Trivial._Underlying *a, MR.CS.CSharp.Trivial._Underlying *b);
                return new(__MR_CSharp_test_class_trivial(a._UnderlyingPtr, b != null ? b._UnderlyingPtr : null), is_owning: true);
            }

            /// Generated from function `MR::CSharp::test_class_trivial_ref`.
            /// Parameter `b` defaults to `default_trivial`.
            public static unsafe MR.CS.CSharp.Trivial TestClassTrivialRef(MR.CS.CSharp.Trivial a, MR.CS.CSharp.Trivial? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_class_trivial_ref", ExactSpelling = true)]
                extern static MR.CS.CSharp.Trivial._Underlying *__MR_CSharp_test_class_trivial_ref(MR.CS.CSharp.Trivial._Underlying *a, MR.CS.CSharp.Trivial._Underlying *b);
                return new(__MR_CSharp_test_class_trivial_ref(a._UnderlyingPtr, b != null ? b._UnderlyingPtr : null), is_owning: false);
            }

            /// Generated from function `MR::CSharp::test_class_trivial_cref`.
            /// Parameter `b` defaults to `default_trivial`.
            public static unsafe MR.CS.CSharp.ConstTrivial TestClassTrivialCref(MR.CS.CSharp.ConstTrivial a, MR.CS.CSharp.ConstTrivial? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_class_trivial_cref", ExactSpelling = true)]
                extern static MR.CS.CSharp.ConstTrivial._Underlying *__MR_CSharp_test_class_trivial_cref(MR.CS.CSharp.ConstTrivial._Underlying *a, MR.CS.CSharp.ConstTrivial._Underlying *b);
                return new(__MR_CSharp_test_class_trivial_cref(a._UnderlyingPtr, b != null ? b._UnderlyingPtr : null), is_owning: false);
            }

            /// Generated from function `MR::CSharp::test_class_trivial_ptr`.
            /// Parameter `c` defaults to `&default_trivial`.
            public static unsafe MR.CS.CSharp.Trivial? TestClassTrivialPtr(MR.CS.CSharp.Trivial? a, MR.CS.CSharp.Trivial? b = null, MR.CS.Misc.InOptClass<MR.CS.CSharp.Trivial>? c = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_class_trivial_ptr", ExactSpelling = true)]
                extern static MR.CS.CSharp.Trivial._Underlying *__MR_CSharp_test_class_trivial_ptr(MR.CS.CSharp.Trivial._Underlying *a, MR.CS.CSharp.Trivial._Underlying *b, MR.CS.CSharp.Trivial._Underlying **c);
                MR.CS.CSharp.Trivial._Underlying *__ptr_c = c != null && c.Opt != null ? c.Opt._UnderlyingPtr : null;
                var __ret = __MR_CSharp_test_class_trivial_ptr(a != null ? a._UnderlyingPtr : null, b != null ? b._UnderlyingPtr : null, c != null ? &__ptr_c : null);
                return __ret != null ? new MR.CS.CSharp.Trivial(__ret, is_owning: false) : null;
            }

            /// Generated from function `MR::CSharp::test_class_trivial_cptr`.
            /// Parameter `c` defaults to `&default_trivial`.
            public static unsafe MR.CS.CSharp.ConstTrivial? TestClassTrivialCptr(MR.CS.CSharp.ConstTrivial? a, MR.CS.CSharp.ConstTrivial? b = null, MR.CS.Misc.InOptClass<MR.CS.CSharp.ConstTrivial>? c = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_class_trivial_cptr", ExactSpelling = true)]
                extern static MR.CS.CSharp.ConstTrivial._Underlying *__MR_CSharp_test_class_trivial_cptr(MR.CS.CSharp.ConstTrivial._Underlying *a, MR.CS.CSharp.ConstTrivial._Underlying *b, MR.CS.CSharp.ConstTrivial._Underlying **c);
                MR.CS.CSharp.ConstTrivial._Underlying *__ptr_c = c != null && c.Opt != null ? c.Opt._UnderlyingPtr : null;
                var __ret = __MR_CSharp_test_class_trivial_cptr(a != null ? a._UnderlyingPtr : null, b != null ? b._UnderlyingPtr : null, c != null ? &__ptr_c : null);
                return __ret != null ? new MR.CS.CSharp.ConstTrivial(__ret, is_owning: false) : null;
            }

            /// Generated from function `MR::CSharp::test_class_nontrivial`.
            /// Parameter `b` defaults to `{}`.
            public static unsafe MR.CS.CSharp.NonTrivial TestClassNontrivial(MR.CS.Misc.ByValue<MR.CS.CSharp.NonTrivial, MR.CS.CSharp.ConstNonTrivial> a, MR.CS.Misc.ByValue<MR.CS.CSharp.NonTrivial, MR.CS.CSharp.ConstNonTrivial>? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_class_nontrivial", ExactSpelling = true)]
                extern static MR.CS.CSharp.NonTrivial._Underlying *__MR_CSharp_test_class_nontrivial(MR.CS.Misc._PassBy a_pass_by, MR.CS.CSharp.NonTrivial._Underlying *a, MR.CS.Misc._PassBy b_pass_by, MR.CS.CSharp.NonTrivial._Underlying *b);
                return new(__MR_CSharp_test_class_nontrivial(a.PassByMode, a.Value != null ? a.Value._UnderlyingPtr : null, b.HasValue ? b.Value.PassByMode : MR.CS.Misc._PassBy.default_arg, b.HasValue && b.Value.Value != null ? b.Value.Value._UnderlyingPtr : null), is_owning: true);
            }

            /// Generated from function `MR::CSharp::test_class_nontrivial_ref`.
            /// Parameter `b` defaults to `default_nontrivial`.
            public static unsafe MR.CS.CSharp.NonTrivial TestClassNontrivialRef(MR.CS.CSharp.NonTrivial a, MR.CS.CSharp.NonTrivial? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_class_nontrivial_ref", ExactSpelling = true)]
                extern static MR.CS.CSharp.NonTrivial._Underlying *__MR_CSharp_test_class_nontrivial_ref(MR.CS.CSharp.NonTrivial._Underlying *a, MR.CS.CSharp.NonTrivial._Underlying *b);
                return new(__MR_CSharp_test_class_nontrivial_ref(a._UnderlyingPtr, b != null ? b._UnderlyingPtr : null), is_owning: false);
            }

            /// Generated from function `MR::CSharp::test_class_nontrivial_cref`.
            /// Parameter `b` defaults to `default_nontrivial`.
            public static unsafe MR.CS.CSharp.ConstNonTrivial TestClassNontrivialCref(MR.CS.CSharp.ConstNonTrivial a, MR.CS.CSharp.ConstNonTrivial? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_class_nontrivial_cref", ExactSpelling = true)]
                extern static MR.CS.CSharp.ConstNonTrivial._Underlying *__MR_CSharp_test_class_nontrivial_cref(MR.CS.CSharp.ConstNonTrivial._Underlying *a, MR.CS.CSharp.ConstNonTrivial._Underlying *b);
                return new(__MR_CSharp_test_class_nontrivial_cref(a._UnderlyingPtr, b != null ? b._UnderlyingPtr : null), is_owning: false);
            }

            /// Generated from function `MR::CSharp::test_class_nontrivial_ptr`.
            /// Parameter `c` defaults to `&default_nontrivial`.
            public static unsafe MR.CS.CSharp.NonTrivial? TestClassNontrivialPtr(MR.CS.CSharp.NonTrivial? a, MR.CS.CSharp.NonTrivial? b = null, MR.CS.Misc.InOptClass<MR.CS.CSharp.NonTrivial>? c = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_class_nontrivial_ptr", ExactSpelling = true)]
                extern static MR.CS.CSharp.NonTrivial._Underlying *__MR_CSharp_test_class_nontrivial_ptr(MR.CS.CSharp.NonTrivial._Underlying *a, MR.CS.CSharp.NonTrivial._Underlying *b, MR.CS.CSharp.NonTrivial._Underlying **c);
                MR.CS.CSharp.NonTrivial._Underlying *__ptr_c = c != null && c.Opt != null ? c.Opt._UnderlyingPtr : null;
                var __ret = __MR_CSharp_test_class_nontrivial_ptr(a != null ? a._UnderlyingPtr : null, b != null ? b._UnderlyingPtr : null, c != null ? &__ptr_c : null);
                return __ret != null ? new MR.CS.CSharp.NonTrivial(__ret, is_owning: false) : null;
            }

            /// Generated from function `MR::CSharp::test_class_nontrivial_cptr`.
            /// Parameter `c` defaults to `&default_nontrivial`.
            public static unsafe MR.CS.CSharp.ConstNonTrivial? TestClassNontrivialCptr(MR.CS.CSharp.ConstNonTrivial? a, MR.CS.CSharp.ConstNonTrivial? b = null, MR.CS.Misc.InOptClass<MR.CS.CSharp.ConstNonTrivial>? c = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_class_nontrivial_cptr", ExactSpelling = true)]
                extern static MR.CS.CSharp.ConstNonTrivial._Underlying *__MR_CSharp_test_class_nontrivial_cptr(MR.CS.CSharp.ConstNonTrivial._Underlying *a, MR.CS.CSharp.ConstNonTrivial._Underlying *b, MR.CS.CSharp.ConstNonTrivial._Underlying **c);
                MR.CS.CSharp.ConstNonTrivial._Underlying *__ptr_c = c != null && c.Opt != null ? c.Opt._UnderlyingPtr : null;
                var __ret = __MR_CSharp_test_class_nontrivial_cptr(a != null ? a._UnderlyingPtr : null, b != null ? b._UnderlyingPtr : null, c != null ? &__ptr_c : null);
                return __ret != null ? new MR.CS.CSharp.ConstNonTrivial(__ret, is_owning: false) : null;
            }

            /// Generated from function `MR::CSharp::test_void_ptr`.
            /// Parameter `a` is a mutable pointer.
            /// Parameter `b` is a mutable pointer.
            /// Parameter `c` defaults to `(void *)42`.
            /// Parameter `c` is a mutable pointer.
            /// Returns a mutable pointer.
            public static unsafe void *TestVoidPtr(void *a, void *b = null, void **c = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_void_ptr", ExactSpelling = true)]
                extern static void *__MR_CSharp_test_void_ptr(void *a, void *b, void **c);
                return __MR_CSharp_test_void_ptr(a, b, c);
            }

            /// Generated from function `MR::CSharp::test_void_cptr`.
            /// Parameter `a` is a read-only pointer.
            /// Parameter `b` is a read-only pointer.
            /// Parameter `c` defaults to `(const void *)42`.
            /// Parameter `c` is a read-only pointer.
            /// Returns a read-only pointer.
            public static unsafe void *TestVoidCptr(void *a, void *b = null, void **c = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_void_cptr", ExactSpelling = true)]
                extern static void *__MR_CSharp_test_void_cptr(void *a, void *b, void **c);
                return __MR_CSharp_test_void_cptr(a, b, c);
            }

            // Pokeing a shared pointer type for a single class causes `std::shared_ptr` to be instantiated for the entire hierarchy (when `--bind-shared-ptr-virally`, which is required for `C#`).
            /// Generated from function `MR::CSharp::test_shptr`.
            /// Parameter `b` defaults to `default_shptr`.
            public static unsafe MR.CS.CSharp.SA TestShptr(MR.CS.Misc.ByValue<MR.CS.CSharp.SA, MR.CS.CSharp.ConstSA> a, MR.CS.Misc.ByValue<MR.CS.CSharp.SA, MR.CS.CSharp.ConstSA>? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_shptr", ExactSpelling = true)]
                extern static MR.CS.CSharp.SA._UnderlyingShared *__MR_CSharp_test_shptr(MR.CS.Misc._PassBy a_pass_by, MR.CS.CSharp.SA._UnderlyingShared *a, MR.CS.Misc._PassBy b_pass_by, MR.CS.CSharp.SA._UnderlyingShared *b);
                return new(__MR_CSharp_test_shptr(a.PassByMode, a.Value != null ? a.Value._UnderlyingSharedPtr : null, b.HasValue ? b.Value.PassByMode : MR.CS.Misc._PassBy.default_arg, b.HasValue && b.Value.Value != null ? b.Value.Value._UnderlyingSharedPtr : null), is_owning: true);
            }

            /// Generated from function `MR::CSharp::test_shptr_ref`.
            /// Parameter `b` defaults to `default_shptr`.
            public static unsafe MR.CS.CSharp.SA TestShptrRef(MR.CS.CSharp.SA a, MR.CS.CSharp.SA? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_shptr_ref", ExactSpelling = true)]
                extern static MR.CS.CSharp.SA._UnderlyingShared *__MR_CSharp_test_shptr_ref(MR.CS.CSharp.SA._UnderlyingShared *a, MR.CS.CSharp.SA._UnderlyingShared *b);
                return new(__MR_CSharp_test_shptr_ref(a._UnderlyingSharedPtr, b != null ? b._UnderlyingSharedPtr : null), is_owning: false);
            }

            /// Generated from function `MR::CSharp::test_shptr_cref`.
            /// Parameter `b` defaults to `default_shptr`.
            public static unsafe MR.CS.CSharp.ConstSA TestShptrCref(MR.CS.CSharp.ConstSA a, MR.CS.CSharp.ConstSA? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_shptr_cref", ExactSpelling = true)]
                extern static MR.CS.CSharp.ConstSA._UnderlyingShared *__MR_CSharp_test_shptr_cref(MR.CS.CSharp.ConstSA._UnderlyingShared *a, MR.CS.CSharp.ConstSA._UnderlyingShared *b);
                return new(__MR_CSharp_test_shptr_cref(a._UnderlyingSharedPtr, b != null ? b._UnderlyingSharedPtr : null), is_owning: false);
            }

            /// Generated from function `MR::CSharp::test_shptr_ptr`.
            /// Parameter `b` defaults to `&default_shptr`.
            public static unsafe MR.CS.CSharp.SA? TestShptrPtr(MR.CS.CSharp.SA? a, MR.CS.Misc.InOptClass<MR.CS.CSharp.SA>? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_shptr_ptr", ExactSpelling = true)]
                extern static MR.CS.CSharp.SA._UnderlyingShared *__MR_CSharp_test_shptr_ptr(MR.CS.CSharp.SA._UnderlyingShared *a, MR.CS.CSharp.SA._UnderlyingShared **b);
                MR.CS.CSharp.SA._UnderlyingShared *__ptr_b = b != null && b.Opt != null ? b.Opt._UnderlyingSharedPtr : null;
                var __ret = __MR_CSharp_test_shptr_ptr(a != null ? a._UnderlyingSharedPtr : null, b != null ? &__ptr_b : null);
                return __ret != null ? new MR.CS.CSharp.SA(__ret, is_owning: false) : null;
            }

            /// Generated from function `MR::CSharp::test_shptr_cptr`.
            /// Parameter `b` defaults to `&default_shptr`.
            public static unsafe MR.CS.CSharp.ConstSA? TestShptrCptr(MR.CS.CSharp.ConstSA? a, MR.CS.Misc.InOptClass<MR.CS.CSharp.ConstSA>? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_shptr_cptr", ExactSpelling = true)]
                extern static MR.CS.CSharp.ConstSA._UnderlyingShared *__MR_CSharp_test_shptr_cptr(MR.CS.CSharp.ConstSA._UnderlyingShared *a, MR.CS.CSharp.ConstSA._UnderlyingShared **b);
                MR.CS.CSharp.ConstSA._UnderlyingShared *__ptr_b = b != null && b.Opt != null ? b.Opt._UnderlyingSharedPtr : null;
                var __ret = __MR_CSharp_test_shptr_cptr(a != null ? a._UnderlyingSharedPtr : null, b != null ? &__ptr_b : null);
                return __ret != null ? new MR.CS.CSharp.ConstSA(__ret, is_owning: false) : null;
            }

            /// Generated from function `MR::CSharp::test_shcptr`.
            /// Parameter `b` defaults to `default_shcptr`.
            public static unsafe MR.CS.CSharp.SA TestShcptr(MR.CS.Misc.ByValue<MR.CS.CSharp.SA, MR.CS.CSharp.ConstSA> a, MR.CS.Misc.ByValue<MR.CS.CSharp.SA, MR.CS.CSharp.ConstSA>? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_shcptr", ExactSpelling = true)]
                extern static MR.CS.CSharp.SA._UnderlyingShared *__MR_CSharp_test_shcptr(MR.CS.Misc._PassBy a_pass_by, MR.CS.CSharp.SA._UnderlyingShared *a, MR.CS.Misc._PassBy b_pass_by, MR.CS.CSharp.SA._UnderlyingShared *b);
                return new(__MR_CSharp_test_shcptr(a.PassByMode, a.Value != null ? a.Value._UnderlyingSharedPtr : null, b.HasValue ? b.Value.PassByMode : MR.CS.Misc._PassBy.default_arg, b.HasValue && b.Value.Value != null ? b.Value.Value._UnderlyingSharedPtr : null), is_owning: true);
            }

            /// Generated from function `MR::CSharp::test_shcptr_ref`.
            /// Parameter `b` defaults to `default_shcptr`.
            public static unsafe MR.CS.CSharp.SA TestShcptrRef(MR.CS.CSharp.SA a, MR.CS.CSharp.SA? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_shcptr_ref", ExactSpelling = true)]
                extern static MR.CS.CSharp.SA._UnderlyingShared *__MR_CSharp_test_shcptr_ref(MR.CS.CSharp.SA._UnderlyingShared *a, MR.CS.CSharp.SA._UnderlyingShared *b);
                return new(__MR_CSharp_test_shcptr_ref(a._UnderlyingSharedPtr, b != null ? b._UnderlyingSharedPtr : null), is_owning: false);
            }

            /// Generated from function `MR::CSharp::test_shcptr_cref`.
            /// Parameter `b` defaults to `default_shcptr`.
            public static unsafe MR.CS.CSharp.ConstSA TestShcptrCref(MR.CS.CSharp.ConstSA a, MR.CS.CSharp.ConstSA? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_shcptr_cref", ExactSpelling = true)]
                extern static MR.CS.CSharp.ConstSA._UnderlyingShared *__MR_CSharp_test_shcptr_cref(MR.CS.CSharp.ConstSA._UnderlyingShared *a, MR.CS.CSharp.ConstSA._UnderlyingShared *b);
                return new(__MR_CSharp_test_shcptr_cref(a._UnderlyingSharedPtr, b != null ? b._UnderlyingSharedPtr : null), is_owning: false);
            }

            /// Generated from function `MR::CSharp::test_shcptr_ptr`.
            /// Parameter `b` defaults to `&default_shcptr`.
            public static unsafe MR.CS.CSharp.SA? TestShcptrPtr(MR.CS.CSharp.SA? a, MR.CS.Misc.InOptClass<MR.CS.CSharp.SA>? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_shcptr_ptr", ExactSpelling = true)]
                extern static MR.CS.CSharp.SA._UnderlyingShared *__MR_CSharp_test_shcptr_ptr(MR.CS.CSharp.SA._UnderlyingShared *a, MR.CS.CSharp.SA._UnderlyingShared **b);
                MR.CS.CSharp.SA._UnderlyingShared *__ptr_b = b != null && b.Opt != null ? b.Opt._UnderlyingSharedPtr : null;
                var __ret = __MR_CSharp_test_shcptr_ptr(a != null ? a._UnderlyingSharedPtr : null, b != null ? &__ptr_b : null);
                return __ret != null ? new MR.CS.CSharp.SA(__ret, is_owning: false) : null;
            }

            /// Generated from function `MR::CSharp::test_shcptr_cptr`.
            /// Parameter `b` defaults to `&default_shcptr`.
            public static unsafe MR.CS.CSharp.ConstSA? TestShcptrCptr(MR.CS.CSharp.ConstSA? a, MR.CS.Misc.InOptClass<MR.CS.CSharp.ConstSA>? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_shcptr_cptr", ExactSpelling = true)]
                extern static MR.CS.CSharp.ConstSA._UnderlyingShared *__MR_CSharp_test_shcptr_cptr(MR.CS.CSharp.ConstSA._UnderlyingShared *a, MR.CS.CSharp.ConstSA._UnderlyingShared **b);
                MR.CS.CSharp.ConstSA._UnderlyingShared *__ptr_b = b != null && b.Opt != null ? b.Opt._UnderlyingSharedPtr : null;
                var __ret = __MR_CSharp_test_shcptr_cptr(a != null ? a._UnderlyingSharedPtr : null, b != null ? &__ptr_b : null);
                return __ret != null ? new MR.CS.CSharp.ConstSA(__ret, is_owning: false) : null;
            }

            /// Generated from function `MR::CSharp::test_string`.
            /// Parameter `b` defaults to `default_string`.
            public static unsafe MR.CS.Std.String TestString(ReadOnlySpan<char> a, MR.CS.Misc.ReadOnlyCharSpanOpt b = new())
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_string", ExactSpelling = true)]
                extern static MR.CS.Std.String._Underlying *__MR_CSharp_test_string(byte *a, byte *a_end, byte *b, byte *b_end);
                byte[] __bytes_a = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(a.Length)];
                int __len_a = System.Text.Encoding.UTF8.GetBytes(a, __bytes_a);
                fixed (byte *__ptr_a = __bytes_a)
                {
                    byte[] __bytes_b;
                    int __len_b = 0;
                    if (b.HasValue)
                    {
                        __bytes_b = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(b.Value.Length)];
                        __len_b = System.Text.Encoding.UTF8.GetBytes(b.Value, __bytes_b);
                    }
                    fixed (byte *__ptr_b = __bytes_b)
                    {
                        return new(__MR_CSharp_test_string(__ptr_a, __ptr_a + __len_a, b.HasValue ? __ptr_b : null, b.HasValue ? __ptr_b + __len_b : null), is_owning: true);
                    }
                }
            }

            /// Generated from function `MR::CSharp::test_string_ref`.
            /// Parameter `b` defaults to `default_string`.
            public static unsafe MR.CS.Std.String TestStringRef(MR.CS.Std.String a, MR.CS.Std.String? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_string_ref", ExactSpelling = true)]
                extern static MR.CS.Std.String._Underlying *__MR_CSharp_test_string_ref(MR.CS.Std.String._Underlying *a, MR.CS.Std.String._Underlying *b);
                return new(__MR_CSharp_test_string_ref(a._UnderlyingPtr, b != null ? b._UnderlyingPtr : null), is_owning: false);
            }

            /// Generated from function `MR::CSharp::test_string_cref`.
            /// Parameter `b` defaults to `default_string`.
            public static unsafe MR.CS.Std.ConstString TestStringCref(ReadOnlySpan<char> a, MR.CS.Misc.ReadOnlyCharSpanOpt b = new())
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_string_cref", ExactSpelling = true)]
                extern static MR.CS.Std.ConstString._Underlying *__MR_CSharp_test_string_cref(byte *a, byte *a_end, byte *b, byte *b_end);
                byte[] __bytes_a = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(a.Length)];
                int __len_a = System.Text.Encoding.UTF8.GetBytes(a, __bytes_a);
                fixed (byte *__ptr_a = __bytes_a)
                {
                    byte[] __bytes_b;
                    int __len_b = 0;
                    if (b.HasValue)
                    {
                        __bytes_b = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(b.Value.Length)];
                        __len_b = System.Text.Encoding.UTF8.GetBytes(b.Value, __bytes_b);
                    }
                    fixed (byte *__ptr_b = __bytes_b)
                    {
                        return new(__MR_CSharp_test_string_cref(__ptr_a, __ptr_a + __len_a, b.HasValue ? __ptr_b : null, b.HasValue ? __ptr_b + __len_b : null), is_owning: false);
                    }
                }
            }

            /// Generated from function `MR::CSharp::test_string_ptr`.
            /// Parameter `b` defaults to `&default_string`.
            public static unsafe MR.CS.Std.String? TestStringPtr(MR.CS.Std.String? a, MR.CS.Misc.InOptClass<MR.CS.Std.String>? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_string_ptr", ExactSpelling = true)]
                extern static MR.CS.Std.String._Underlying *__MR_CSharp_test_string_ptr(MR.CS.Std.String._Underlying *a, MR.CS.Std.String._Underlying **b);
                MR.CS.Std.String._Underlying *__ptr_b = b != null && b.Opt != null ? b.Opt._UnderlyingPtr : null;
                var __ret = __MR_CSharp_test_string_ptr(a != null ? a._UnderlyingPtr : null, b != null ? &__ptr_b : null);
                return __ret != null ? new MR.CS.Std.String(__ret, is_owning: false) : null;
            }

            /// Generated from function `MR::CSharp::test_string_cptr`.
            /// Parameter `b` defaults to `&default_string`.
            public static unsafe MR.CS.Std.ConstString? TestStringCptr(MR.CS.Std.ConstString? a, MR.CS.Misc.InOptClass<MR.CS.Std.ConstString>? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_string_cptr", ExactSpelling = true)]
                extern static MR.CS.Std.ConstString._Underlying *__MR_CSharp_test_string_cptr(MR.CS.Std.ConstString._Underlying *a, MR.CS.Std.ConstString._Underlying **b);
                MR.CS.Std.ConstString._Underlying *__ptr_b = b != null && b.Opt != null ? b.Opt._UnderlyingPtr : null;
                var __ret = __MR_CSharp_test_string_cptr(a != null ? a._UnderlyingPtr : null, b != null ? &__ptr_b : null);
                return __ret != null ? new MR.CS.Std.ConstString(__ret, is_owning: false) : null;
            }

            /// Generated from function `MR::CSharp::test_stringview`.
            /// Parameter `b` defaults to `default_stringview`.
            public static unsafe MR.CS.Std.StringView TestStringview(ReadOnlySpan<char> a, MR.CS.Misc.ReadOnlyCharSpanOpt b = new())
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_stringview", ExactSpelling = true)]
                extern static MR.CS.Std.StringView._Underlying *__MR_CSharp_test_stringview(byte *a, byte *a_end, byte *b, byte *b_end);
                byte[] __bytes_a = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(a.Length)];
                int __len_a = System.Text.Encoding.UTF8.GetBytes(a, __bytes_a);
                fixed (byte *__ptr_a = __bytes_a)
                {
                    byte[] __bytes_b;
                    int __len_b = 0;
                    if (b.HasValue)
                    {
                        __bytes_b = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(b.Value.Length)];
                        __len_b = System.Text.Encoding.UTF8.GetBytes(b.Value, __bytes_b);
                    }
                    fixed (byte *__ptr_b = __bytes_b)
                    {
                        return new(__MR_CSharp_test_stringview(__ptr_a, __ptr_a + __len_a, b.HasValue ? __ptr_b : null, b.HasValue ? __ptr_b + __len_b : null), is_owning: true);
                    }
                }
            }

            /// Generated from function `MR::CSharp::test_stringview_ref`.
            /// Parameter `b` defaults to `default_stringview`.
            public static unsafe MR.CS.Std.StringView TestStringviewRef(MR.CS.Std.StringView a, MR.CS.Std.StringView? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_stringview_ref", ExactSpelling = true)]
                extern static MR.CS.Std.StringView._Underlying *__MR_CSharp_test_stringview_ref(MR.CS.Std.StringView._Underlying *a, MR.CS.Std.StringView._Underlying *b);
                return new(__MR_CSharp_test_stringview_ref(a._UnderlyingPtr, b != null ? b._UnderlyingPtr : null), is_owning: false);
            }

            /// Generated from function `MR::CSharp::test_stringview_cref`.
            /// Parameter `b` defaults to `default_stringview`.
            public static unsafe MR.CS.Std.ConstStringView TestStringviewCref(ReadOnlySpan<char> a, MR.CS.Misc.ReadOnlyCharSpanOpt b = new())
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_stringview_cref", ExactSpelling = true)]
                extern static MR.CS.Std.ConstStringView._Underlying *__MR_CSharp_test_stringview_cref(byte *a, byte *a_end, byte *b, byte *b_end);
                byte[] __bytes_a = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(a.Length)];
                int __len_a = System.Text.Encoding.UTF8.GetBytes(a, __bytes_a);
                fixed (byte *__ptr_a = __bytes_a)
                {
                    byte[] __bytes_b;
                    int __len_b = 0;
                    if (b.HasValue)
                    {
                        __bytes_b = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(b.Value.Length)];
                        __len_b = System.Text.Encoding.UTF8.GetBytes(b.Value, __bytes_b);
                    }
                    fixed (byte *__ptr_b = __bytes_b)
                    {
                        return new(__MR_CSharp_test_stringview_cref(__ptr_a, __ptr_a + __len_a, b.HasValue ? __ptr_b : null, b.HasValue ? __ptr_b + __len_b : null), is_owning: false);
                    }
                }
            }

            /// Generated from function `MR::CSharp::test_stringview_ptr`.
            /// Parameter `b` defaults to `&default_stringview`.
            public static unsafe MR.CS.Std.StringView? TestStringviewPtr(MR.CS.Std.StringView? a, MR.CS.Misc.InOptClass<MR.CS.Std.StringView>? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_stringview_ptr", ExactSpelling = true)]
                extern static MR.CS.Std.StringView._Underlying *__MR_CSharp_test_stringview_ptr(MR.CS.Std.StringView._Underlying *a, MR.CS.Std.StringView._Underlying **b);
                MR.CS.Std.StringView._Underlying *__ptr_b = b != null && b.Opt != null ? b.Opt._UnderlyingPtr : null;
                var __ret = __MR_CSharp_test_stringview_ptr(a != null ? a._UnderlyingPtr : null, b != null ? &__ptr_b : null);
                return __ret != null ? new MR.CS.Std.StringView(__ret, is_owning: false) : null;
            }

            /// Generated from function `MR::CSharp::test_stringview_cptr`.
            /// Parameter `b` defaults to `&default_stringview`.
            public static unsafe MR.CS.Std.ConstStringView? TestStringviewCptr(MR.CS.Std.ConstStringView? a, MR.CS.Misc.InOptClass<MR.CS.Std.ConstStringView>? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_stringview_cptr", ExactSpelling = true)]
                extern static MR.CS.Std.ConstStringView._Underlying *__MR_CSharp_test_stringview_cptr(MR.CS.Std.ConstStringView._Underlying *a, MR.CS.Std.ConstStringView._Underlying **b);
                MR.CS.Std.ConstStringView._Underlying *__ptr_b = b != null && b.Opt != null ? b.Opt._UnderlyingPtr : null;
                var __ret = __MR_CSharp_test_stringview_cptr(a != null ? a._UnderlyingPtr : null, b != null ? &__ptr_b : null);
                return __ret != null ? new MR.CS.Std.ConstStringView(__ret, is_owning: false) : null;
            }

            /// Generated from function `MR::CSharp::test_fspath`.
            /// Parameter `b` defaults to `default_fspath`.
            public static unsafe MR.CS.Std.Filesystem.Path TestFspath(ReadOnlySpan<char> a, MR.CS.Misc.ReadOnlyCharSpanOpt b = new())
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_fspath", ExactSpelling = true)]
                extern static MR.CS.Std.Filesystem.Path._Underlying *__MR_CSharp_test_fspath(byte *a, byte *a_end, byte *b, byte *b_end);
                byte[] __bytes_a = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(a.Length)];
                int __len_a = System.Text.Encoding.UTF8.GetBytes(a, __bytes_a);
                fixed (byte *__ptr_a = __bytes_a)
                {
                    byte[] __bytes_b;
                    int __len_b = 0;
                    if (b.HasValue)
                    {
                        __bytes_b = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(b.Value.Length)];
                        __len_b = System.Text.Encoding.UTF8.GetBytes(b.Value, __bytes_b);
                    }
                    fixed (byte *__ptr_b = __bytes_b)
                    {
                        return new(__MR_CSharp_test_fspath(__ptr_a, __ptr_a + __len_a, b.HasValue ? __ptr_b : null, b.HasValue ? __ptr_b + __len_b : null), is_owning: true);
                    }
                }
            }

            /// Generated from function `MR::CSharp::test_fspath_ref`.
            /// Parameter `b` defaults to `default_fspath`.
            public static unsafe MR.CS.Std.Filesystem.Path TestFspathRef(MR.CS.Std.Filesystem.Path a, MR.CS.Std.Filesystem.Path? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_fspath_ref", ExactSpelling = true)]
                extern static MR.CS.Std.Filesystem.Path._Underlying *__MR_CSharp_test_fspath_ref(MR.CS.Std.Filesystem.Path._Underlying *a, MR.CS.Std.Filesystem.Path._Underlying *b);
                return new(__MR_CSharp_test_fspath_ref(a._UnderlyingPtr, b != null ? b._UnderlyingPtr : null), is_owning: false);
            }

            /// Generated from function `MR::CSharp::test_fspath_cref`.
            /// Parameter `b` defaults to `default_fspath`.
            public static unsafe MR.CS.Std.Filesystem.ConstPath TestFspathCref(ReadOnlySpan<char> a, MR.CS.Misc.ReadOnlyCharSpanOpt b = new())
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_fspath_cref", ExactSpelling = true)]
                extern static MR.CS.Std.Filesystem.ConstPath._Underlying *__MR_CSharp_test_fspath_cref(byte *a, byte *a_end, byte *b, byte *b_end);
                byte[] __bytes_a = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(a.Length)];
                int __len_a = System.Text.Encoding.UTF8.GetBytes(a, __bytes_a);
                fixed (byte *__ptr_a = __bytes_a)
                {
                    byte[] __bytes_b;
                    int __len_b = 0;
                    if (b.HasValue)
                    {
                        __bytes_b = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(b.Value.Length)];
                        __len_b = System.Text.Encoding.UTF8.GetBytes(b.Value, __bytes_b);
                    }
                    fixed (byte *__ptr_b = __bytes_b)
                    {
                        return new(__MR_CSharp_test_fspath_cref(__ptr_a, __ptr_a + __len_a, b.HasValue ? __ptr_b : null, b.HasValue ? __ptr_b + __len_b : null), is_owning: false);
                    }
                }
            }

            /// Generated from function `MR::CSharp::test_fspath_ptr`.
            /// Parameter `b` defaults to `&default_fspath`.
            public static unsafe MR.CS.Std.Filesystem.Path? TestFspathPtr(MR.CS.Std.Filesystem.Path? a, MR.CS.Misc.InOptClass<MR.CS.Std.Filesystem.Path>? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_fspath_ptr", ExactSpelling = true)]
                extern static MR.CS.Std.Filesystem.Path._Underlying *__MR_CSharp_test_fspath_ptr(MR.CS.Std.Filesystem.Path._Underlying *a, MR.CS.Std.Filesystem.Path._Underlying **b);
                MR.CS.Std.Filesystem.Path._Underlying *__ptr_b = b != null && b.Opt != null ? b.Opt._UnderlyingPtr : null;
                var __ret = __MR_CSharp_test_fspath_ptr(a != null ? a._UnderlyingPtr : null, b != null ? &__ptr_b : null);
                return __ret != null ? new MR.CS.Std.Filesystem.Path(__ret, is_owning: false) : null;
            }

            /// Generated from function `MR::CSharp::test_fspath_cptr`.
            /// Parameter `b` defaults to `&default_fspath`.
            public static unsafe MR.CS.Std.Filesystem.ConstPath? TestFspathCptr(MR.CS.Std.Filesystem.ConstPath? a, MR.CS.Misc.InOptClass<MR.CS.Std.Filesystem.ConstPath>? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_fspath_cptr", ExactSpelling = true)]
                extern static MR.CS.Std.Filesystem.ConstPath._Underlying *__MR_CSharp_test_fspath_cptr(MR.CS.Std.Filesystem.ConstPath._Underlying *a, MR.CS.Std.Filesystem.ConstPath._Underlying **b);
                MR.CS.Std.Filesystem.ConstPath._Underlying *__ptr_b = b != null && b.Opt != null ? b.Opt._UnderlyingPtr : null;
                var __ret = __MR_CSharp_test_fspath_cptr(a != null ? a._UnderlyingPtr : null, b != null ? &__ptr_b : null);
                return __ret != null ? new MR.CS.Std.Filesystem.ConstPath(__ret, is_owning: false) : null;
            }
        }
    }
}
