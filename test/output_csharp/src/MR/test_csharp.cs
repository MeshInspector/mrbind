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

            /// The interface for class `A`, the const half.
            /// We never use interfaces as function parameters or return types, because they prevent implicit conversions, but can use them freely.
            public interface IConstA
            {
                public struct _Underlying; // Represents the underlying C++ type.
                internal unsafe _Underlying *_GetUnderlying_MRCSharpA(); // Returns the pointer to the underlying C++ object.

                /// Generated from method `MR::CSharp::A::bar`.
                public unsafe void bar(int _1, int _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_bar", ExactSpelling = true)]
                    extern static void __MR_CSharp_A_bar(_Underlying *_this, int _1, int _2);
                    __MR_CSharp_A_bar(_GetUnderlying_MRCSharpA(), _1, _2);
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
                    __MR_CSharp_A_virtual_bar(_GetUnderlying_MRCSharpA(), _1, _2);
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
            /// This is the const half of the class.
            public class ConstA : MR.CS.Misc.Object, System.IDisposable, IConstA
            {
                protected unsafe IConstA._Underlying *_UnderlyingPtr;
                public unsafe IConstA._Underlying *_GetUnderlying_MRCSharpA() => _UnderlyingPtr;

                internal unsafe ConstA(IConstA._Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr == null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_A_Destroy(IConstA._Underlying *_this);
                    __MR_CSharp_A_Destroy(_GetUnderlying_MRCSharpA());
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstA() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstA() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IConstA._Underlying *__MR_CSharp_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_A_DefaultConstruct();
                }

                /// Generated from method `MR::CSharp::A::bar`.
                public void bar(int _1, int _2) => ((MR.CS.CSharp.IConstA)this).bar(_1, _2);

                /// Generated from method `MR::CSharp::A::static_foo`.
                public static void static_foo() => MR.CS.CSharp.IConstA.static_foo();

                /// Generated from method `MR::CSharp::A::static_bar`.
                public static void static_bar(int _1, int _2) => MR.CS.CSharp.IConstA.static_bar(_1, _2);

                /// Generated from method `MR::CSharp::A::virtual_bar`.
                public virtual void virtual_bar(int _1, int _2) => ((MR.CS.CSharp.IConstA)this).virtual_bar(_1, _2);
            }

            /// The interface for class `A`, the non-const half.
            /// We never use interfaces as function parameters or return types, because they prevent implicit conversions, but can use them freely.
            public interface IA : MR.CS.CSharp.IConstA
            {
                /// Generated from method `MR::CSharp::A::foo`.
                public unsafe void foo()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_foo", ExactSpelling = true)]
                    extern static void __MR_CSharp_A_foo(_Underlying *_this);
                    __MR_CSharp_A_foo(_GetUnderlying_MRCSharpA());
                }

                /// Generated from method `MR::CSharp::A::virtual_foo`.
                public unsafe void virtual_foo()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_virtual_foo", ExactSpelling = true)]
                    extern static void __MR_CSharp_A_virtual_foo(_Underlying *_this);
                    __MR_CSharp_A_virtual_foo(_GetUnderlying_MRCSharpA());
                }

                /// Generated from method `MR::CSharp::A::refs`.
                public unsafe ref int refs(ref int x, ref int _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_refs", ExactSpelling = true)]
                    extern static int *__MR_CSharp_A_refs(_Underlying *_this, int *x, int *_2);
                    fixed (int *__ptr_x = &x) {
                        fixed (int *__ptr__2 = &_2) {
                            return ref *__MR_CSharp_A_refs(_GetUnderlying_MRCSharpA(), __ptr_x, __ptr__2);
                        } // fixed __ptr__2
                    } // fixed __ptr_x
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
            public class A : MR.CS.CSharp.ConstA, IA
            {
                internal unsafe A(IA._Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe A() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IConstA._Underlying *__MR_CSharp_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_A_DefaultConstruct();
                }

                /// Generated from method `MR::CSharp::A::foo`.
                public void foo() => ((MR.CS.CSharp.IA)this).foo();

                /// Generated from method `MR::CSharp::A::virtual_foo`.
                public virtual void virtual_foo() => ((MR.CS.CSharp.IA)this).virtual_foo();

                /// Generated from method `MR::CSharp::A::refs`.
                public ref int refs(ref int x, ref int _2) => ref ((MR.CS.CSharp.IA)this).refs(ref x, ref _2);
            }

            /// The interface for class `B`, the const half.
            /// We never use interfaces as function parameters or return types, because they prevent implicit conversions, but can use them freely.
            public interface IConstB : MR.CS.CSharp.IConstA
            {
                new public struct _Underlying; // Represents the underlying C++ type.
                internal unsafe _Underlying *_GetUnderlying_MRCSharpB(); // Returns the pointer to the underlying C++ object.
            }

            /// Generated from class `MR::CSharp::B`.
            /// Base classes:
            ///   Direct: (non-virtual)
            ///     `MR::CSharp::A`
            /// This is the const half of the class.
            public class ConstB : MR.CS.Misc.Object, System.IDisposable, IConstB, MR.CS.CSharp.IConstA
            {
                protected unsafe IConstB._Underlying *_UnderlyingPtr;
                public unsafe IConstB._Underlying *_GetUnderlying_MRCSharpB() => _UnderlyingPtr;

                public unsafe MR.CS.CSharp.IConstA._Underlying *_GetUnderlying_MRCSharpA()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_B_UpcastTo_MR_CSharp_A", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IConstA._Underlying *__MR_CSharp_B_UpcastTo_MR_CSharp_A(IConstB._Underlying *_this);
                    return __MR_CSharp_B_UpcastTo_MR_CSharp_A(_GetUnderlying_MRCSharpB());
                }

                internal unsafe ConstB(IConstB._Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr == null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_B_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_B_Destroy(IConstB._Underlying *_this);
                    __MR_CSharp_B_Destroy(_GetUnderlying_MRCSharpB());
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstB() {Dispose(false);}

                // Upcasts:
                public static unsafe implicit operator MR.CS.CSharp.ConstA(ConstB self) {MR.CS.CSharp.ConstA ret = new(self._GetUnderlying_MRCSharpA(), is_owning: false); ret._KeepAlive(self); return ret;}

                // Downcasts:
                public static unsafe explicit operator ConstB?(MR.CS.CSharp.ConstA parent)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_DynamicDowncastTo_MR_CSharp_B", ExactSpelling = true)]
                    extern static IConstB._Underlying *__MR_CSharp_A_DynamicDowncastTo_MR_CSharp_B(MR.CS.CSharp.IConstA._Underlying *_this);
                    var ptr = __MR_CSharp_A_DynamicDowncastTo_MR_CSharp_B(parent._GetUnderlying_MRCSharpA());
                    if (ptr == null) return null;
                    ConstB ret = new(ptr, is_owning: false);
                    ret._KeepAlive(parent);
                    return ret;
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstB() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_B_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IConstB._Underlying *__MR_CSharp_B_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_B_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::B::B`.
                public unsafe ConstB(int a, int b) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_B_Construct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IConstB._Underlying *__MR_CSharp_B_Construct(int a, int b);
                    _UnderlyingPtr = __MR_CSharp_B_Construct(a, b);
                }

                /// Generated from method `MR::CSharp::A::bar`.
                public void bar(int _1, int _2) => ((MR.CS.CSharp.IConstA)this).bar(_1, _2);

                /// Generated from method `MR::CSharp::A::static_foo`.
                public static void static_foo() => MR.CS.CSharp.IConstA.static_foo();

                /// Generated from method `MR::CSharp::A::static_bar`.
                public static void static_bar(int _1, int _2) => MR.CS.CSharp.IConstA.static_bar(_1, _2);

                /// Generated from method `MR::CSharp::A::virtual_bar`.
                public virtual void virtual_bar(int _1, int _2) => ((MR.CS.CSharp.IConstA)this).virtual_bar(_1, _2);
            }

            /// The interface for class `B`, the non-const half.
            /// We never use interfaces as function parameters or return types, because they prevent implicit conversions, but can use them freely.
            public interface IB : MR.CS.CSharp.IConstB, MR.CS.CSharp.IA
            {
            }

            /// Generated from class `MR::CSharp::B`.
            /// Base classes:
            ///   Direct: (non-virtual)
            ///     `MR::CSharp::A`
            /// This is the non-const half of the class.
            public class B : MR.CS.CSharp.ConstB, IB, MR.CS.CSharp.IA
            {
                internal unsafe B(IB._Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                // Upcasts:
                public static unsafe implicit operator MR.CS.CSharp.ConstA(B self) {MR.CS.CSharp.ConstA ret = new(self._GetUnderlying_MRCSharpA(), is_owning: false); ret._KeepAlive(self); return ret;}
                public static unsafe implicit operator MR.CS.CSharp.A(B self) {MR.CS.CSharp.A ret = new(self._GetUnderlying_MRCSharpA(), is_owning: false); ret._KeepAlive(self); return ret;}

                // Downcasts:
                public static unsafe explicit operator B?(MR.CS.CSharp.ConstA parent)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_DynamicDowncastTo_MR_CSharp_B", ExactSpelling = true)]
                    extern static IB._Underlying *__MR_CSharp_A_DynamicDowncastTo_MR_CSharp_B(MR.CS.CSharp.IConstA._Underlying *_this);
                    var ptr = __MR_CSharp_A_DynamicDowncastTo_MR_CSharp_B(parent._GetUnderlying_MRCSharpA());
                    if (ptr == null) return null;
                    B ret = new(ptr, is_owning: false);
                    ret._KeepAlive(parent);
                    return ret;
                }
                public static unsafe explicit operator B?(MR.CS.CSharp.A parent)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_DynamicDowncastTo_MR_CSharp_B", ExactSpelling = true)]
                    extern static IB._Underlying *__MR_CSharp_A_DynamicDowncastTo_MR_CSharp_B(MR.CS.CSharp.IA._Underlying *_this);
                    var ptr = __MR_CSharp_A_DynamicDowncastTo_MR_CSharp_B(parent._GetUnderlying_MRCSharpA());
                    if (ptr == null) return null;
                    B ret = new(ptr, is_owning: false);
                    ret._KeepAlive(parent);
                    return ret;
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe B() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_B_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IConstB._Underlying *__MR_CSharp_B_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_B_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::B::B`.
                public unsafe B(int a, int b) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_B_Construct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IConstB._Underlying *__MR_CSharp_B_Construct(int a, int b);
                    _UnderlyingPtr = __MR_CSharp_B_Construct(a, b);
                }

                /// Generated from method `MR::CSharp::A::foo`.
                public void foo() => ((MR.CS.CSharp.IA)this).foo();

                /// Generated from method `MR::CSharp::A::virtual_foo`.
                public virtual void virtual_foo() => ((MR.CS.CSharp.IA)this).virtual_foo();

                /// Generated from method `MR::CSharp::A::refs`.
                public ref int refs(ref int x, ref int _2) => ref ((MR.CS.CSharp.IA)this).refs(ref x, ref _2);
            }

            /// The interface for class `C`, the const half.
            /// We never use interfaces as function parameters or return types, because they prevent implicit conversions, but can use them freely.
            public interface IConstC : MR.CS.CSharp.IConstA
            {
                new public struct _Underlying; // Represents the underlying C++ type.
                internal unsafe _Underlying *_GetUnderlying_MRCSharpC(); // Returns the pointer to the underlying C++ object.
            }

            /// Generated from class `MR::CSharp::C`.
            /// Base classes:
            ///   Virtual:
            ///     `MR::CSharp::A`
            /// This is the const half of the class.
            public class ConstC : MR.CS.Misc.Object, System.IDisposable, IConstC, MR.CS.CSharp.IConstA
            {
                protected unsafe IConstC._Underlying *_UnderlyingPtr;
                public unsafe IConstC._Underlying *_GetUnderlying_MRCSharpC() => _UnderlyingPtr;

                public unsafe MR.CS.CSharp.IConstA._Underlying *_GetUnderlying_MRCSharpA()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_C_UpcastTo_MR_CSharp_A", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IConstA._Underlying *__MR_CSharp_C_UpcastTo_MR_CSharp_A(IConstC._Underlying *_this);
                    return __MR_CSharp_C_UpcastTo_MR_CSharp_A(_GetUnderlying_MRCSharpC());
                }

                internal unsafe ConstC(IConstC._Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr == null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_C_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_C_Destroy(IConstC._Underlying *_this);
                    __MR_CSharp_C_Destroy(_GetUnderlying_MRCSharpC());
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstC() {Dispose(false);}

                // Upcasts:
                public static unsafe implicit operator MR.CS.CSharp.ConstA(ConstC self) {MR.CS.CSharp.ConstA ret = new(self._GetUnderlying_MRCSharpA(), is_owning: false); ret._KeepAlive(self); return ret;}

                // Downcasts:
                public static unsafe explicit operator ConstC?(MR.CS.CSharp.ConstA parent)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_DynamicDowncastTo_MR_CSharp_C", ExactSpelling = true)]
                    extern static IConstC._Underlying *__MR_CSharp_A_DynamicDowncastTo_MR_CSharp_C(MR.CS.CSharp.IConstA._Underlying *_this);
                    var ptr = __MR_CSharp_A_DynamicDowncastTo_MR_CSharp_C(parent._GetUnderlying_MRCSharpA());
                    if (ptr == null) return null;
                    ConstC ret = new(ptr, is_owning: false);
                    ret._KeepAlive(parent);
                    return ret;
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstC() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_C_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IConstC._Underlying *__MR_CSharp_C_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_C_DefaultConstruct();
                }

                /// Generated from method `MR::CSharp::A::bar`.
                public void bar(int _1, int _2) => ((MR.CS.CSharp.IConstA)this).bar(_1, _2);

                /// Generated from method `MR::CSharp::A::static_foo`.
                public static void static_foo() => MR.CS.CSharp.IConstA.static_foo();

                /// Generated from method `MR::CSharp::A::static_bar`.
                public static void static_bar(int _1, int _2) => MR.CS.CSharp.IConstA.static_bar(_1, _2);

                /// Generated from method `MR::CSharp::A::virtual_bar`.
                public virtual void virtual_bar(int _1, int _2) => ((MR.CS.CSharp.IConstA)this).virtual_bar(_1, _2);
            }

            /// The interface for class `C`, the non-const half.
            /// We never use interfaces as function parameters or return types, because they prevent implicit conversions, but can use them freely.
            public interface IC : MR.CS.CSharp.IConstC, MR.CS.CSharp.IA
            {
            }

            /// Generated from class `MR::CSharp::C`.
            /// Base classes:
            ///   Virtual:
            ///     `MR::CSharp::A`
            /// This is the non-const half of the class.
            public class C : MR.CS.CSharp.ConstC, IC, MR.CS.CSharp.IA
            {
                internal unsafe C(IC._Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                // Upcasts:
                public static unsafe implicit operator MR.CS.CSharp.ConstA(C self) {MR.CS.CSharp.ConstA ret = new(self._GetUnderlying_MRCSharpA(), is_owning: false); ret._KeepAlive(self); return ret;}
                public static unsafe implicit operator MR.CS.CSharp.A(C self) {MR.CS.CSharp.A ret = new(self._GetUnderlying_MRCSharpA(), is_owning: false); ret._KeepAlive(self); return ret;}

                // Downcasts:
                public static unsafe explicit operator C?(MR.CS.CSharp.ConstA parent)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_DynamicDowncastTo_MR_CSharp_C", ExactSpelling = true)]
                    extern static IC._Underlying *__MR_CSharp_A_DynamicDowncastTo_MR_CSharp_C(MR.CS.CSharp.IConstA._Underlying *_this);
                    var ptr = __MR_CSharp_A_DynamicDowncastTo_MR_CSharp_C(parent._GetUnderlying_MRCSharpA());
                    if (ptr == null) return null;
                    C ret = new(ptr, is_owning: false);
                    ret._KeepAlive(parent);
                    return ret;
                }
                public static unsafe explicit operator C?(MR.CS.CSharp.A parent)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_DynamicDowncastTo_MR_CSharp_C", ExactSpelling = true)]
                    extern static IC._Underlying *__MR_CSharp_A_DynamicDowncastTo_MR_CSharp_C(MR.CS.CSharp.IA._Underlying *_this);
                    var ptr = __MR_CSharp_A_DynamicDowncastTo_MR_CSharp_C(parent._GetUnderlying_MRCSharpA());
                    if (ptr == null) return null;
                    C ret = new(ptr, is_owning: false);
                    ret._KeepAlive(parent);
                    return ret;
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe C() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_C_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IConstC._Underlying *__MR_CSharp_C_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_C_DefaultConstruct();
                }

                /// Generated from method `MR::CSharp::A::foo`.
                public void foo() => ((MR.CS.CSharp.IA)this).foo();

                /// Generated from method `MR::CSharp::A::virtual_foo`.
                public virtual void virtual_foo() => ((MR.CS.CSharp.IA)this).virtual_foo();

                /// Generated from method `MR::CSharp::A::refs`.
                public ref int refs(ref int x, ref int _2) => ref ((MR.CS.CSharp.IA)this).refs(ref x, ref _2);
            }

            /// The interface for class `D`, the const half.
            /// We never use interfaces as function parameters or return types, because they prevent implicit conversions, but can use them freely.
            public interface IConstD
            {
                public struct _Underlying; // Represents the underlying C++ type.
                internal unsafe _Underlying *_GetUnderlying_MRCSharpD(); // Returns the pointer to the underlying C++ object.

                /// Generated from method `MR::CSharp::D::d1`.
                public unsafe void d1()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_D_d1", ExactSpelling = true)]
                    extern static void __MR_CSharp_D_d1(_Underlying *_this);
                    __MR_CSharp_D_d1(_GetUnderlying_MRCSharpD());
                }
            }

            /// Generated from class `MR::CSharp::D`.
            /// Derived classes:
            ///   Direct: (non-virtual)
            ///     `MR::CSharp::F`
            ///     `MR::CSharp::G`
            /// This is the const half of the class.
            public class ConstD : MR.CS.Misc.Object, System.IDisposable, IConstD
            {
                protected unsafe IConstD._Underlying *_UnderlyingPtr;
                public unsafe IConstD._Underlying *_GetUnderlying_MRCSharpD() => _UnderlyingPtr;

                internal unsafe ConstD(IConstD._Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr == null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_D_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_D_Destroy(IConstD._Underlying *_this);
                    __MR_CSharp_D_Destroy(_GetUnderlying_MRCSharpD());
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstD() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstD() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_D_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IConstD._Underlying *__MR_CSharp_D_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_D_DefaultConstruct();
                }

                /// Generated from method `MR::CSharp::D::d1`.
                public void d1() => ((MR.CS.CSharp.IConstD)this).d1();
            }

            /// The interface for class `D`, the non-const half.
            /// We never use interfaces as function parameters or return types, because they prevent implicit conversions, but can use them freely.
            public interface ID : MR.CS.CSharp.IConstD
            {
                /// Generated from method `MR::CSharp::D::d2`.
                public unsafe void d2()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_D_d2", ExactSpelling = true)]
                    extern static void __MR_CSharp_D_d2(_Underlying *_this);
                    __MR_CSharp_D_d2(_GetUnderlying_MRCSharpD());
                }
            }

            /// Generated from class `MR::CSharp::D`.
            /// Derived classes:
            ///   Direct: (non-virtual)
            ///     `MR::CSharp::F`
            ///     `MR::CSharp::G`
            /// This is the non-const half of the class.
            public class D : MR.CS.CSharp.ConstD, ID
            {
                internal unsafe D(ID._Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe D() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_D_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IConstD._Underlying *__MR_CSharp_D_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_D_DefaultConstruct();
                }

                /// Generated from method `MR::CSharp::D::d2`.
                public void d2() => ((MR.CS.CSharp.ID)this).d2();
            }

            /// The interface for class `E`, the const half.
            /// We never use interfaces as function parameters or return types, because they prevent implicit conversions, but can use them freely.
            public interface IConstE
            {
                public struct _Underlying; // Represents the underlying C++ type.
                internal unsafe _Underlying *_GetUnderlying_MRCSharpE(); // Returns the pointer to the underlying C++ object.

                /// Generated from method `MR::CSharp::E::e1`.
                public unsafe void e1()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_E_e1", ExactSpelling = true)]
                    extern static void __MR_CSharp_E_e1(_Underlying *_this);
                    __MR_CSharp_E_e1(_GetUnderlying_MRCSharpE());
                }
            }

            /// Generated from class `MR::CSharp::E`.
            /// Derived classes:
            ///   Virtual:
            ///     `MR::CSharp::G`
            ///   Direct: (non-virtual)
            ///     `MR::CSharp::F`
            /// This is the const half of the class.
            public class ConstE : MR.CS.Misc.Object, System.IDisposable, IConstE
            {
                protected unsafe IConstE._Underlying *_UnderlyingPtr;
                public unsafe IConstE._Underlying *_GetUnderlying_MRCSharpE() => _UnderlyingPtr;

                internal unsafe ConstE(IConstE._Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr == null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_E_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_E_Destroy(IConstE._Underlying *_this);
                    __MR_CSharp_E_Destroy(_GetUnderlying_MRCSharpE());
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstE() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstE() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_E_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IConstE._Underlying *__MR_CSharp_E_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_E_DefaultConstruct();
                }

                /// Generated from method `MR::CSharp::E::e1`.
                public void e1() => ((MR.CS.CSharp.IConstE)this).e1();
            }

            /// The interface for class `E`, the non-const half.
            /// We never use interfaces as function parameters or return types, because they prevent implicit conversions, but can use them freely.
            public interface IE : MR.CS.CSharp.IConstE
            {
                /// Generated from method `MR::CSharp::E::e2`.
                public unsafe void e2()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_E_e2", ExactSpelling = true)]
                    extern static void __MR_CSharp_E_e2(_Underlying *_this);
                    __MR_CSharp_E_e2(_GetUnderlying_MRCSharpE());
                }
            }

            /// Generated from class `MR::CSharp::E`.
            /// Derived classes:
            ///   Virtual:
            ///     `MR::CSharp::G`
            ///   Direct: (non-virtual)
            ///     `MR::CSharp::F`
            /// This is the non-const half of the class.
            public class E : MR.CS.CSharp.ConstE, IE
            {
                internal unsafe E(IE._Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe E() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_E_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IConstE._Underlying *__MR_CSharp_E_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_E_DefaultConstruct();
                }

                /// Generated from method `MR::CSharp::E::e2`.
                public void e2() => ((MR.CS.CSharp.IE)this).e2();
            }

            /// The interface for class `F`, the const half.
            /// We never use interfaces as function parameters or return types, because they prevent implicit conversions, but can use them freely.
            public interface IConstF : MR.CS.CSharp.IConstA, MR.CS.CSharp.IConstD, MR.CS.CSharp.IConstE
            {
                new public struct _Underlying; // Represents the underlying C++ type.
                internal unsafe _Underlying *_GetUnderlying_MRCSharpF(); // Returns the pointer to the underlying C++ object.
            }

            /// Generated from class `MR::CSharp::F`.
            /// Base classes:
            ///   Direct: (non-virtual)
            ///     `MR::CSharp::A`
            ///     `MR::CSharp::D`
            ///     `MR::CSharp::E`
            /// This is the const half of the class.
            public class ConstF : MR.CS.Misc.Object, System.IDisposable, IConstF, MR.CS.CSharp.IConstA, MR.CS.CSharp.IConstD, MR.CS.CSharp.IConstE
            {
                protected unsafe IConstF._Underlying *_UnderlyingPtr;
                public unsafe IConstF._Underlying *_GetUnderlying_MRCSharpF() => _UnderlyingPtr;

                public unsafe MR.CS.CSharp.IConstA._Underlying *_GetUnderlying_MRCSharpA()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_F_UpcastTo_MR_CSharp_A", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IConstA._Underlying *__MR_CSharp_F_UpcastTo_MR_CSharp_A(IConstF._Underlying *_this);
                    return __MR_CSharp_F_UpcastTo_MR_CSharp_A(_GetUnderlying_MRCSharpF());
                }

                public unsafe MR.CS.CSharp.IConstD._Underlying *_GetUnderlying_MRCSharpD()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_F_UpcastTo_MR_CSharp_D", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IConstD._Underlying *__MR_CSharp_F_UpcastTo_MR_CSharp_D(IConstF._Underlying *_this);
                    return __MR_CSharp_F_UpcastTo_MR_CSharp_D(_GetUnderlying_MRCSharpF());
                }

                public unsafe MR.CS.CSharp.IConstE._Underlying *_GetUnderlying_MRCSharpE()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_F_UpcastTo_MR_CSharp_E", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IConstE._Underlying *__MR_CSharp_F_UpcastTo_MR_CSharp_E(IConstF._Underlying *_this);
                    return __MR_CSharp_F_UpcastTo_MR_CSharp_E(_GetUnderlying_MRCSharpF());
                }

                internal unsafe ConstF(IConstF._Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr == null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_F_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_F_Destroy(IConstF._Underlying *_this);
                    __MR_CSharp_F_Destroy(_GetUnderlying_MRCSharpF());
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstF() {Dispose(false);}

                // Upcasts:
                public static unsafe implicit operator MR.CS.CSharp.ConstA(ConstF self) {MR.CS.CSharp.ConstA ret = new(self._GetUnderlying_MRCSharpA(), is_owning: false); ret._KeepAlive(self); return ret;}
                public static unsafe implicit operator MR.CS.CSharp.ConstD(ConstF self) {MR.CS.CSharp.ConstD ret = new(self._GetUnderlying_MRCSharpD(), is_owning: false); ret._KeepAlive(self); return ret;}
                public static unsafe implicit operator MR.CS.CSharp.ConstE(ConstF self) {MR.CS.CSharp.ConstE ret = new(self._GetUnderlying_MRCSharpE(), is_owning: false); ret._KeepAlive(self); return ret;}

                // Downcasts:
                public static unsafe explicit operator ConstF?(MR.CS.CSharp.ConstA parent)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_DynamicDowncastTo_MR_CSharp_F", ExactSpelling = true)]
                    extern static IConstF._Underlying *__MR_CSharp_A_DynamicDowncastTo_MR_CSharp_F(MR.CS.CSharp.IConstA._Underlying *_this);
                    var ptr = __MR_CSharp_A_DynamicDowncastTo_MR_CSharp_F(parent._GetUnderlying_MRCSharpA());
                    if (ptr == null) return null;
                    ConstF ret = new(ptr, is_owning: false);
                    ret._KeepAlive(parent);
                    return ret;
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstF() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_F_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IConstF._Underlying *__MR_CSharp_F_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_F_DefaultConstruct();
                }

                /// Generated from method `MR::CSharp::A::bar`.
                public void bar(int _1, int _2) => ((MR.CS.CSharp.IConstA)this).bar(_1, _2);

                /// Generated from method `MR::CSharp::A::static_foo`.
                public static void static_foo() => MR.CS.CSharp.IConstA.static_foo();

                /// Generated from method `MR::CSharp::A::static_bar`.
                public static void static_bar(int _1, int _2) => MR.CS.CSharp.IConstA.static_bar(_1, _2);

                /// Generated from method `MR::CSharp::A::virtual_bar`.
                public virtual void virtual_bar(int _1, int _2) => ((MR.CS.CSharp.IConstA)this).virtual_bar(_1, _2);

                /// Generated from method `MR::CSharp::D::d1`.
                public void d1() => ((MR.CS.CSharp.IConstD)this).d1();

                /// Generated from method `MR::CSharp::E::e1`.
                public void e1() => ((MR.CS.CSharp.IConstE)this).e1();
            }

            /// The interface for class `F`, the non-const half.
            /// We never use interfaces as function parameters or return types, because they prevent implicit conversions, but can use them freely.
            public interface IF : MR.CS.CSharp.IConstF, MR.CS.CSharp.IA, MR.CS.CSharp.ID, MR.CS.CSharp.IE
            {
            }

            /// Generated from class `MR::CSharp::F`.
            /// Base classes:
            ///   Direct: (non-virtual)
            ///     `MR::CSharp::A`
            ///     `MR::CSharp::D`
            ///     `MR::CSharp::E`
            /// This is the non-const half of the class.
            public class F : MR.CS.CSharp.ConstF, IF, MR.CS.CSharp.IA, MR.CS.CSharp.ID, MR.CS.CSharp.IE
            {
                internal unsafe F(IF._Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                // Upcasts:
                public static unsafe implicit operator MR.CS.CSharp.ConstA(F self) {MR.CS.CSharp.ConstA ret = new(self._GetUnderlying_MRCSharpA(), is_owning: false); ret._KeepAlive(self); return ret;}
                public static unsafe implicit operator MR.CS.CSharp.A(F self) {MR.CS.CSharp.A ret = new(self._GetUnderlying_MRCSharpA(), is_owning: false); ret._KeepAlive(self); return ret;}
                public static unsafe implicit operator MR.CS.CSharp.ConstD(F self) {MR.CS.CSharp.ConstD ret = new(self._GetUnderlying_MRCSharpD(), is_owning: false); ret._KeepAlive(self); return ret;}
                public static unsafe implicit operator MR.CS.CSharp.D(F self) {MR.CS.CSharp.D ret = new(self._GetUnderlying_MRCSharpD(), is_owning: false); ret._KeepAlive(self); return ret;}
                public static unsafe implicit operator MR.CS.CSharp.ConstE(F self) {MR.CS.CSharp.ConstE ret = new(self._GetUnderlying_MRCSharpE(), is_owning: false); ret._KeepAlive(self); return ret;}
                public static unsafe implicit operator MR.CS.CSharp.E(F self) {MR.CS.CSharp.E ret = new(self._GetUnderlying_MRCSharpE(), is_owning: false); ret._KeepAlive(self); return ret;}

                // Downcasts:
                public static unsafe explicit operator F?(MR.CS.CSharp.ConstA parent)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_DynamicDowncastTo_MR_CSharp_F", ExactSpelling = true)]
                    extern static IF._Underlying *__MR_CSharp_A_DynamicDowncastTo_MR_CSharp_F(MR.CS.CSharp.IConstA._Underlying *_this);
                    var ptr = __MR_CSharp_A_DynamicDowncastTo_MR_CSharp_F(parent._GetUnderlying_MRCSharpA());
                    if (ptr == null) return null;
                    F ret = new(ptr, is_owning: false);
                    ret._KeepAlive(parent);
                    return ret;
                }
                public static unsafe explicit operator F?(MR.CS.CSharp.A parent)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_DynamicDowncastTo_MR_CSharp_F", ExactSpelling = true)]
                    extern static IF._Underlying *__MR_CSharp_A_DynamicDowncastTo_MR_CSharp_F(MR.CS.CSharp.IA._Underlying *_this);
                    var ptr = __MR_CSharp_A_DynamicDowncastTo_MR_CSharp_F(parent._GetUnderlying_MRCSharpA());
                    if (ptr == null) return null;
                    F ret = new(ptr, is_owning: false);
                    ret._KeepAlive(parent);
                    return ret;
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe F() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_F_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IConstF._Underlying *__MR_CSharp_F_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_F_DefaultConstruct();
                }

                /// Generated from method `MR::CSharp::A::foo`.
                public void foo() => ((MR.CS.CSharp.IA)this).foo();

                /// Generated from method `MR::CSharp::A::virtual_foo`.
                public virtual void virtual_foo() => ((MR.CS.CSharp.IA)this).virtual_foo();

                /// Generated from method `MR::CSharp::A::refs`.
                public ref int refs(ref int x, ref int _2) => ref ((MR.CS.CSharp.IA)this).refs(ref x, ref _2);

                /// Generated from method `MR::CSharp::D::d2`.
                public void d2() => ((MR.CS.CSharp.ID)this).d2();

                /// Generated from method `MR::CSharp::E::e2`.
                public void e2() => ((MR.CS.CSharp.IE)this).e2();
            }

            /// The interface for class `G`, the const half.
            /// We never use interfaces as function parameters or return types, because they prevent implicit conversions, but can use them freely.
            public interface IConstG : MR.CS.CSharp.IConstA, MR.CS.CSharp.IConstD, MR.CS.CSharp.IConstE
            {
                new public struct _Underlying; // Represents the underlying C++ type.
                internal unsafe _Underlying *_GetUnderlying_MRCSharpG(); // Returns the pointer to the underlying C++ object.
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
            public class ConstG : MR.CS.Misc.Object, System.IDisposable, IConstG, MR.CS.CSharp.IConstA, MR.CS.CSharp.IConstD, MR.CS.CSharp.IConstE
            {
                protected unsafe IConstG._Underlying *_UnderlyingPtr;
                public unsafe IConstG._Underlying *_GetUnderlying_MRCSharpG() => _UnderlyingPtr;

                public unsafe MR.CS.CSharp.IConstA._Underlying *_GetUnderlying_MRCSharpA()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_G_UpcastTo_MR_CSharp_A", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IConstA._Underlying *__MR_CSharp_G_UpcastTo_MR_CSharp_A(IConstG._Underlying *_this);
                    return __MR_CSharp_G_UpcastTo_MR_CSharp_A(_GetUnderlying_MRCSharpG());
                }

                public unsafe MR.CS.CSharp.IConstD._Underlying *_GetUnderlying_MRCSharpD()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_G_UpcastTo_MR_CSharp_D", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IConstD._Underlying *__MR_CSharp_G_UpcastTo_MR_CSharp_D(IConstG._Underlying *_this);
                    return __MR_CSharp_G_UpcastTo_MR_CSharp_D(_GetUnderlying_MRCSharpG());
                }

                public unsafe MR.CS.CSharp.IConstE._Underlying *_GetUnderlying_MRCSharpE()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_G_UpcastTo_MR_CSharp_E", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IConstE._Underlying *__MR_CSharp_G_UpcastTo_MR_CSharp_E(IConstG._Underlying *_this);
                    return __MR_CSharp_G_UpcastTo_MR_CSharp_E(_GetUnderlying_MRCSharpG());
                }

                internal unsafe ConstG(IConstG._Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr == null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_G_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_G_Destroy(IConstG._Underlying *_this);
                    __MR_CSharp_G_Destroy(_GetUnderlying_MRCSharpG());
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstG() {Dispose(false);}

                // Upcasts:
                public static unsafe implicit operator MR.CS.CSharp.ConstA(ConstG self) {MR.CS.CSharp.ConstA ret = new(self._GetUnderlying_MRCSharpA(), is_owning: false); ret._KeepAlive(self); return ret;}
                public static unsafe implicit operator MR.CS.CSharp.ConstD(ConstG self) {MR.CS.CSharp.ConstD ret = new(self._GetUnderlying_MRCSharpD(), is_owning: false); ret._KeepAlive(self); return ret;}
                public static unsafe implicit operator MR.CS.CSharp.ConstE(ConstG self) {MR.CS.CSharp.ConstE ret = new(self._GetUnderlying_MRCSharpE(), is_owning: false); ret._KeepAlive(self); return ret;}

                // Downcasts:
                public static unsafe explicit operator ConstG?(MR.CS.CSharp.ConstA parent)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_DynamicDowncastTo_MR_CSharp_G", ExactSpelling = true)]
                    extern static IConstG._Underlying *__MR_CSharp_A_DynamicDowncastTo_MR_CSharp_G(MR.CS.CSharp.IConstA._Underlying *_this);
                    var ptr = __MR_CSharp_A_DynamicDowncastTo_MR_CSharp_G(parent._GetUnderlying_MRCSharpA());
                    if (ptr == null) return null;
                    ConstG ret = new(ptr, is_owning: false);
                    ret._KeepAlive(parent);
                    return ret;
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstG() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_G_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IConstG._Underlying *__MR_CSharp_G_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_G_DefaultConstruct();
                }

                /// Generated from method `MR::CSharp::A::bar`.
                public void bar(int _1, int _2) => ((MR.CS.CSharp.IConstA)this).bar(_1, _2);

                /// Generated from method `MR::CSharp::A::static_foo`.
                public static void static_foo() => MR.CS.CSharp.IConstA.static_foo();

                /// Generated from method `MR::CSharp::A::static_bar`.
                public static void static_bar(int _1, int _2) => MR.CS.CSharp.IConstA.static_bar(_1, _2);

                /// Generated from method `MR::CSharp::A::virtual_bar`.
                public virtual void virtual_bar(int _1, int _2) => ((MR.CS.CSharp.IConstA)this).virtual_bar(_1, _2);

                /// Generated from method `MR::CSharp::D::d1`.
                public void d1() => ((MR.CS.CSharp.IConstD)this).d1();

                /// Generated from method `MR::CSharp::E::e1`.
                public void e1() => ((MR.CS.CSharp.IConstE)this).e1();
            }

            /// The interface for class `G`, the non-const half.
            /// We never use interfaces as function parameters or return types, because they prevent implicit conversions, but can use them freely.
            public interface IG : MR.CS.CSharp.IConstG, MR.CS.CSharp.IA, MR.CS.CSharp.ID, MR.CS.CSharp.IE
            {
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
            public class G : MR.CS.CSharp.ConstG, IG, MR.CS.CSharp.IA, MR.CS.CSharp.ID, MR.CS.CSharp.IE
            {
                internal unsafe G(IG._Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                // Upcasts:
                public static unsafe implicit operator MR.CS.CSharp.ConstA(G self) {MR.CS.CSharp.ConstA ret = new(self._GetUnderlying_MRCSharpA(), is_owning: false); ret._KeepAlive(self); return ret;}
                public static unsafe implicit operator MR.CS.CSharp.A(G self) {MR.CS.CSharp.A ret = new(self._GetUnderlying_MRCSharpA(), is_owning: false); ret._KeepAlive(self); return ret;}
                public static unsafe implicit operator MR.CS.CSharp.ConstD(G self) {MR.CS.CSharp.ConstD ret = new(self._GetUnderlying_MRCSharpD(), is_owning: false); ret._KeepAlive(self); return ret;}
                public static unsafe implicit operator MR.CS.CSharp.D(G self) {MR.CS.CSharp.D ret = new(self._GetUnderlying_MRCSharpD(), is_owning: false); ret._KeepAlive(self); return ret;}
                public static unsafe implicit operator MR.CS.CSharp.ConstE(G self) {MR.CS.CSharp.ConstE ret = new(self._GetUnderlying_MRCSharpE(), is_owning: false); ret._KeepAlive(self); return ret;}
                public static unsafe implicit operator MR.CS.CSharp.E(G self) {MR.CS.CSharp.E ret = new(self._GetUnderlying_MRCSharpE(), is_owning: false); ret._KeepAlive(self); return ret;}

                // Downcasts:
                public static unsafe explicit operator G?(MR.CS.CSharp.ConstA parent)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_DynamicDowncastTo_MR_CSharp_G", ExactSpelling = true)]
                    extern static IG._Underlying *__MR_CSharp_A_DynamicDowncastTo_MR_CSharp_G(MR.CS.CSharp.IConstA._Underlying *_this);
                    var ptr = __MR_CSharp_A_DynamicDowncastTo_MR_CSharp_G(parent._GetUnderlying_MRCSharpA());
                    if (ptr == null) return null;
                    G ret = new(ptr, is_owning: false);
                    ret._KeepAlive(parent);
                    return ret;
                }
                public static unsafe explicit operator G?(MR.CS.CSharp.A parent)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_DynamicDowncastTo_MR_CSharp_G", ExactSpelling = true)]
                    extern static IG._Underlying *__MR_CSharp_A_DynamicDowncastTo_MR_CSharp_G(MR.CS.CSharp.IA._Underlying *_this);
                    var ptr = __MR_CSharp_A_DynamicDowncastTo_MR_CSharp_G(parent._GetUnderlying_MRCSharpA());
                    if (ptr == null) return null;
                    G ret = new(ptr, is_owning: false);
                    ret._KeepAlive(parent);
                    return ret;
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe G() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_G_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IConstG._Underlying *__MR_CSharp_G_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_G_DefaultConstruct();
                }

                /// Generated from method `MR::CSharp::A::foo`.
                public void foo() => ((MR.CS.CSharp.IA)this).foo();

                /// Generated from method `MR::CSharp::A::virtual_foo`.
                public virtual void virtual_foo() => ((MR.CS.CSharp.IA)this).virtual_foo();

                /// Generated from method `MR::CSharp::A::refs`.
                public ref int refs(ref int x, ref int _2) => ref ((MR.CS.CSharp.IA)this).refs(ref x, ref _2);

                /// Generated from method `MR::CSharp::D::d2`.
                public void d2() => ((MR.CS.CSharp.ID)this).d2();

                /// Generated from method `MR::CSharp::E::e2`.
                public void e2() => ((MR.CS.CSharp.IE)this).e2();
            }

            /// The interface for class `Trivial`, the const half.
            /// We never use interfaces as function parameters or return types, because they prevent implicit conversions, but can use them freely.
            public interface IConstTrivial
            {
                public struct _Underlying; // Represents the underlying C++ type.
                internal unsafe _Underlying *_GetUnderlying_MRCSharpTrivial(); // Returns the pointer to the underlying C++ object.
            }

            /// Generated from class `MR::CSharp::Trivial`.
            /// This is the const half of the class.
            public class ConstTrivial : MR.CS.Misc.Object, System.IDisposable, IConstTrivial
            {
                protected unsafe IConstTrivial._Underlying *_UnderlyingPtr;
                public unsafe IConstTrivial._Underlying *_GetUnderlying_MRCSharpTrivial() => _UnderlyingPtr;

                internal unsafe ConstTrivial(IConstTrivial._Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr == null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_Trivial_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_Trivial_Destroy(IConstTrivial._Underlying *_this);
                    __MR_CSharp_Trivial_Destroy(_GetUnderlying_MRCSharpTrivial());
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstTrivial() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstTrivial() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_Trivial_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IConstTrivial._Underlying *__MR_CSharp_Trivial_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_Trivial_DefaultConstruct();
                }
            }

            /// The interface for class `Trivial`, the non-const half.
            /// We never use interfaces as function parameters or return types, because they prevent implicit conversions, but can use them freely.
            public interface ITrivial : MR.CS.CSharp.IConstTrivial
            {
            }

            /// Generated from class `MR::CSharp::Trivial`.
            /// This is the non-const half of the class.
            public class Trivial : MR.CS.CSharp.ConstTrivial, ITrivial
            {
                internal unsafe Trivial(ITrivial._Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Trivial() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_Trivial_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IConstTrivial._Underlying *__MR_CSharp_Trivial_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_Trivial_DefaultConstruct();
                }
            }

            /// The interface for class `TrivialDerived`, the const half.
            /// We never use interfaces as function parameters or return types, because they prevent implicit conversions, but can use them freely.
            public interface IConstTrivialDerived
            {
                public struct _Underlying; // Represents the underlying C++ type.
                internal unsafe _Underlying *_GetUnderlying_MRCSharpTrivialDerived(); // Returns the pointer to the underlying C++ object.
            }

            /// Generated from class `MR::CSharp::TrivialDerived`.
            /// This is the const half of the class.
            public class ConstTrivialDerived : MR.CS.Misc.Object, System.IDisposable, IConstTrivialDerived
            {
                protected unsafe IConstTrivialDerived._Underlying *_UnderlyingPtr;
                public unsafe IConstTrivialDerived._Underlying *_GetUnderlying_MRCSharpTrivialDerived() => _UnderlyingPtr;

                internal unsafe ConstTrivialDerived(IConstTrivialDerived._Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr == null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TrivialDerived_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_TrivialDerived_Destroy(IConstTrivialDerived._Underlying *_this);
                    __MR_CSharp_TrivialDerived_Destroy(_GetUnderlying_MRCSharpTrivialDerived());
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstTrivialDerived() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstTrivialDerived() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TrivialDerived_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IConstTrivialDerived._Underlying *__MR_CSharp_TrivialDerived_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_TrivialDerived_DefaultConstruct();
                }
            }

            /// The interface for class `TrivialDerived`, the non-const half.
            /// We never use interfaces as function parameters or return types, because they prevent implicit conversions, but can use them freely.
            public interface ITrivialDerived : MR.CS.CSharp.IConstTrivialDerived
            {
            }

            /// Generated from class `MR::CSharp::TrivialDerived`.
            /// This is the non-const half of the class.
            public class TrivialDerived : MR.CS.CSharp.ConstTrivialDerived, ITrivialDerived
            {
                internal unsafe TrivialDerived(ITrivialDerived._Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe TrivialDerived() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TrivialDerived_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IConstTrivialDerived._Underlying *__MR_CSharp_TrivialDerived_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_TrivialDerived_DefaultConstruct();
                }
            }

            /// The interface for class `NonTrivial`, the const half.
            /// We never use interfaces as function parameters or return types, because they prevent implicit conversions, but can use them freely.
            public interface IConstNonTrivial
            {
                public struct _Underlying; // Represents the underlying C++ type.
                internal unsafe _Underlying *_GetUnderlying_MRCSharpNonTrivial(); // Returns the pointer to the underlying C++ object.
            }

            /// Generated from class `MR::CSharp::NonTrivial`.
            /// This is the const half of the class.
            public class ConstNonTrivial : MR.CS.Misc.Object, System.IDisposable, IConstNonTrivial
            {
                protected unsafe IConstNonTrivial._Underlying *_UnderlyingPtr;
                public unsafe IConstNonTrivial._Underlying *_GetUnderlying_MRCSharpNonTrivial() => _UnderlyingPtr;

                internal unsafe ConstNonTrivial(IConstNonTrivial._Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr == null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_NonTrivial_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_NonTrivial_Destroy(IConstNonTrivial._Underlying *_this);
                    __MR_CSharp_NonTrivial_Destroy(_GetUnderlying_MRCSharpNonTrivial());
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstNonTrivial() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstNonTrivial() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_NonTrivial_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IConstNonTrivial._Underlying *__MR_CSharp_NonTrivial_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_NonTrivial_DefaultConstruct();
                }
            }

            /// The interface for class `NonTrivial`, the non-const half.
            /// We never use interfaces as function parameters or return types, because they prevent implicit conversions, but can use them freely.
            public interface INonTrivial : MR.CS.CSharp.IConstNonTrivial
            {
            }

            /// Generated from class `MR::CSharp::NonTrivial`.
            /// This is the non-const half of the class.
            public class NonTrivial : MR.CS.CSharp.ConstNonTrivial, INonTrivial
            {
                internal unsafe NonTrivial(INonTrivial._Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe NonTrivial() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_NonTrivial_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IConstNonTrivial._Underlying *__MR_CSharp_NonTrivial_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_NonTrivial_DefaultConstruct();
                }
            }

            /// The interface for class `NonTrivialDerived`, the const half.
            /// We never use interfaces as function parameters or return types, because they prevent implicit conversions, but can use them freely.
            public interface IConstNonTrivialDerived
            {
                public struct _Underlying; // Represents the underlying C++ type.
                internal unsafe _Underlying *_GetUnderlying_MRCSharpNonTrivialDerived(); // Returns the pointer to the underlying C++ object.
            }

            /// Generated from class `MR::CSharp::NonTrivialDerived`.
            /// This is the const half of the class.
            public class ConstNonTrivialDerived : MR.CS.Misc.Object, System.IDisposable, IConstNonTrivialDerived
            {
                protected unsafe IConstNonTrivialDerived._Underlying *_UnderlyingPtr;
                public unsafe IConstNonTrivialDerived._Underlying *_GetUnderlying_MRCSharpNonTrivialDerived() => _UnderlyingPtr;

                internal unsafe ConstNonTrivialDerived(IConstNonTrivialDerived._Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr == null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_NonTrivialDerived_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_NonTrivialDerived_Destroy(IConstNonTrivialDerived._Underlying *_this);
                    __MR_CSharp_NonTrivialDerived_Destroy(_GetUnderlying_MRCSharpNonTrivialDerived());
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstNonTrivialDerived() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstNonTrivialDerived() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_NonTrivialDerived_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IConstNonTrivialDerived._Underlying *__MR_CSharp_NonTrivialDerived_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_NonTrivialDerived_DefaultConstruct();
                }
            }

            /// The interface for class `NonTrivialDerived`, the non-const half.
            /// We never use interfaces as function parameters or return types, because they prevent implicit conversions, but can use them freely.
            public interface INonTrivialDerived : MR.CS.CSharp.IConstNonTrivialDerived
            {
            }

            /// Generated from class `MR::CSharp::NonTrivialDerived`.
            /// This is the non-const half of the class.
            public class NonTrivialDerived : MR.CS.CSharp.ConstNonTrivialDerived, INonTrivialDerived
            {
                internal unsafe NonTrivialDerived(INonTrivialDerived._Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe NonTrivialDerived() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_NonTrivialDerived_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IConstNonTrivialDerived._Underlying *__MR_CSharp_NonTrivialDerived_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_NonTrivialDerived_DefaultConstruct();
                }
            }

            /// The interface for class `SA`, the const half.
            /// We never use interfaces as function parameters or return types, because they prevent implicit conversions, but can use them freely.
            public interface IConstSA
            {
                public struct _Underlying; // Represents the underlying C++ type.
                internal unsafe _Underlying *_GetUnderlying_MRCSharpSA(); // Returns the pointer to the underlying C++ object.

                public struct _UnderlyingShared; // Represents the underlying shared pointer C++ type.
            }

            /// Generated from class `MR::CSharp::SA`.
            /// Derived classes:
            ///   Direct: (non-virtual)
            ///     `MR::CSharp::SC`
            /// This is the const half of the class.
            public class ConstSA : MR.CS.Misc.SharedObject, System.IDisposable, IConstSA
            {
                internal unsafe IConstSA._UnderlyingShared *_UnderlyingSharedPtr;
                public unsafe IConstSA._Underlying *_GetUnderlying_MRCSharpSA()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SA_Get", ExactSpelling = true)]
                    extern static IConstSA._Underlying *__MR_C_std_shared_ptr_MR_CSharp_SA_Get(IConstSA._UnderlyingShared *_this);
                    return __MR_C_std_shared_ptr_MR_CSharp_SA_Get(_UnderlyingSharedPtr);
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
                internal unsafe IConstSA._UnderlyingShared *_CloneUnderlyingSharedPtr()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SA_ConstructFromAnother", ExactSpelling = true)]
                    extern static IConstSA._UnderlyingShared *__MR_C_std_shared_ptr_MR_CSharp_SA_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, IConstSA._UnderlyingShared *other);
                    return __MR_C_std_shared_ptr_MR_CSharp_SA_ConstructFromAnother(MR.CS.Misc._PassBy.copy, _UnderlyingSharedPtr);
                }

                internal unsafe ConstSA(IConstSA._Underlying *ptr, bool is_owning) : base(true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SA_Construct", ExactSpelling = true)]
                    extern static IConstSA._UnderlyingShared *__MR_C_std_shared_ptr_MR_CSharp_SA_Construct(IConstSA._Underlying *other);
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SA_ConstructNonOwning", ExactSpelling = true)]
                    extern static IConstSA._UnderlyingShared *__MR_C_std_shared_ptr_MR_CSharp_SA_ConstructNonOwning(IConstSA._Underlying *other);
                    if (is_owning)
                        _UnderlyingSharedPtr = __MR_C_std_shared_ptr_MR_CSharp_SA_Construct(ptr);
                    else
                        _UnderlyingSharedPtr = __MR_C_std_shared_ptr_MR_CSharp_SA_ConstructNonOwning(ptr);
                }

                internal unsafe ConstSA(IConstSA._UnderlyingShared *shared_ptr, bool is_owning) : base(is_owning) {_UnderlyingSharedPtr = shared_ptr;}

                internal static unsafe SA _MakeAliasing(MR.CS.Std.IConstSharedPtr_ConstVoid._Underlying *ownership, IConstSA._Underlying *ptr)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SA_ConstructAliasing", ExactSpelling = true)]
                    extern static IConstSA._UnderlyingShared *__MR_C_std_shared_ptr_MR_CSharp_SA_ConstructAliasing(MR.CS.Misc._PassBy ownership_pass_by, MR.CS.Std.IConstSharedPtr_ConstVoid._Underlying *ownership, IConstSA._Underlying *ptr);
                    return new(__MR_C_std_shared_ptr_MR_CSharp_SA_ConstructAliasing(MR.CS.Misc._PassBy.copy, ownership, ptr), is_owning: true);
                }

                protected unsafe void _LateMakeShared(IConstSA._Underlying *ptr)
                {
                    System.Diagnostics.Trace.Assert(_IsOwningVal == true);
                    System.Diagnostics.Trace.Assert(_UnderlyingSharedPtr == null);
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SA_Construct", ExactSpelling = true)]
                    extern static IConstSA._UnderlyingShared *__MR_C_std_shared_ptr_MR_CSharp_SA_Construct(IConstSA._Underlying *other);
                    _UnderlyingSharedPtr = __MR_C_std_shared_ptr_MR_CSharp_SA_Construct(ptr);
                }

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingSharedPtr == null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SA_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_MR_CSharp_SA_Destroy(IConstSA._UnderlyingShared *_this);
                    __MR_C_std_shared_ptr_MR_CSharp_SA_Destroy(_UnderlyingSharedPtr);
                    _UnderlyingSharedPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstSA() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstSA() : this(shared_ptr: null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_SA_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IConstSA._Underlying *__MR_CSharp_SA_DefaultConstruct();
                    _LateMakeShared(__MR_CSharp_SA_DefaultConstruct());
                }
            }

            /// The interface for class `SA`, the non-const half.
            /// We never use interfaces as function parameters or return types, because they prevent implicit conversions, but can use them freely.
            public interface ISA : MR.CS.CSharp.IConstSA
            {
            }

            /// Generated from class `MR::CSharp::SA`.
            /// Derived classes:
            ///   Direct: (non-virtual)
            ///     `MR::CSharp::SC`
            /// This is the non-const half of the class.
            public class SA : MR.CS.CSharp.ConstSA, ISA
            {
                internal unsafe SA(ISA._Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                internal unsafe SA(ISA._UnderlyingShared *shared_ptr, bool is_owning) : base(shared_ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe SA() : this(shared_ptr: null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_SA_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IConstSA._Underlying *__MR_CSharp_SA_DefaultConstruct();
                    _LateMakeShared(__MR_CSharp_SA_DefaultConstruct());
                }
            }

            /// The interface for class `SB`, the const half.
            /// We never use interfaces as function parameters or return types, because they prevent implicit conversions, but can use them freely.
            public interface IConstSB
            {
                public struct _Underlying; // Represents the underlying C++ type.
                internal unsafe _Underlying *_GetUnderlying_MRCSharpSB(); // Returns the pointer to the underlying C++ object.

                public struct _UnderlyingShared; // Represents the underlying shared pointer C++ type.
            }

            /// Generated from class `MR::CSharp::SB`.
            /// Derived classes:
            ///   Direct: (non-virtual)
            ///     `MR::CSharp::SC`
            /// This is the const half of the class.
            public class ConstSB : MR.CS.Misc.SharedObject, System.IDisposable, IConstSB
            {
                internal unsafe IConstSB._UnderlyingShared *_UnderlyingSharedPtr;
                public unsafe IConstSB._Underlying *_GetUnderlying_MRCSharpSB()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SB_Get", ExactSpelling = true)]
                    extern static IConstSB._Underlying *__MR_C_std_shared_ptr_MR_CSharp_SB_Get(IConstSB._UnderlyingShared *_this);
                    return __MR_C_std_shared_ptr_MR_CSharp_SB_Get(_UnderlyingSharedPtr);
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
                internal unsafe IConstSB._UnderlyingShared *_CloneUnderlyingSharedPtr()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SB_ConstructFromAnother", ExactSpelling = true)]
                    extern static IConstSB._UnderlyingShared *__MR_C_std_shared_ptr_MR_CSharp_SB_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, IConstSB._UnderlyingShared *other);
                    return __MR_C_std_shared_ptr_MR_CSharp_SB_ConstructFromAnother(MR.CS.Misc._PassBy.copy, _UnderlyingSharedPtr);
                }

                internal unsafe ConstSB(IConstSB._Underlying *ptr, bool is_owning) : base(true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SB_Construct", ExactSpelling = true)]
                    extern static IConstSB._UnderlyingShared *__MR_C_std_shared_ptr_MR_CSharp_SB_Construct(IConstSB._Underlying *other);
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SB_ConstructNonOwning", ExactSpelling = true)]
                    extern static IConstSB._UnderlyingShared *__MR_C_std_shared_ptr_MR_CSharp_SB_ConstructNonOwning(IConstSB._Underlying *other);
                    if (is_owning)
                        _UnderlyingSharedPtr = __MR_C_std_shared_ptr_MR_CSharp_SB_Construct(ptr);
                    else
                        _UnderlyingSharedPtr = __MR_C_std_shared_ptr_MR_CSharp_SB_ConstructNonOwning(ptr);
                }

                internal unsafe ConstSB(IConstSB._UnderlyingShared *shared_ptr, bool is_owning) : base(is_owning) {_UnderlyingSharedPtr = shared_ptr;}

                internal static unsafe SB _MakeAliasing(MR.CS.Std.IConstSharedPtr_ConstVoid._Underlying *ownership, IConstSB._Underlying *ptr)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SB_ConstructAliasing", ExactSpelling = true)]
                    extern static IConstSB._UnderlyingShared *__MR_C_std_shared_ptr_MR_CSharp_SB_ConstructAliasing(MR.CS.Misc._PassBy ownership_pass_by, MR.CS.Std.IConstSharedPtr_ConstVoid._Underlying *ownership, IConstSB._Underlying *ptr);
                    return new(__MR_C_std_shared_ptr_MR_CSharp_SB_ConstructAliasing(MR.CS.Misc._PassBy.copy, ownership, ptr), is_owning: true);
                }

                protected unsafe void _LateMakeShared(IConstSB._Underlying *ptr)
                {
                    System.Diagnostics.Trace.Assert(_IsOwningVal == true);
                    System.Diagnostics.Trace.Assert(_UnderlyingSharedPtr == null);
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SB_Construct", ExactSpelling = true)]
                    extern static IConstSB._UnderlyingShared *__MR_C_std_shared_ptr_MR_CSharp_SB_Construct(IConstSB._Underlying *other);
                    _UnderlyingSharedPtr = __MR_C_std_shared_ptr_MR_CSharp_SB_Construct(ptr);
                }

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingSharedPtr == null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SB_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_MR_CSharp_SB_Destroy(IConstSB._UnderlyingShared *_this);
                    __MR_C_std_shared_ptr_MR_CSharp_SB_Destroy(_UnderlyingSharedPtr);
                    _UnderlyingSharedPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstSB() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstSB() : this(shared_ptr: null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_SB_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IConstSB._Underlying *__MR_CSharp_SB_DefaultConstruct();
                    _LateMakeShared(__MR_CSharp_SB_DefaultConstruct());
                }
            }

            /// The interface for class `SB`, the non-const half.
            /// We never use interfaces as function parameters or return types, because they prevent implicit conversions, but can use them freely.
            public interface ISB : MR.CS.CSharp.IConstSB
            {
            }

            /// Generated from class `MR::CSharp::SB`.
            /// Derived classes:
            ///   Direct: (non-virtual)
            ///     `MR::CSharp::SC`
            /// This is the non-const half of the class.
            public class SB : MR.CS.CSharp.ConstSB, ISB
            {
                internal unsafe SB(ISB._Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                internal unsafe SB(ISB._UnderlyingShared *shared_ptr, bool is_owning) : base(shared_ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe SB() : this(shared_ptr: null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_SB_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IConstSB._Underlying *__MR_CSharp_SB_DefaultConstruct();
                    _LateMakeShared(__MR_CSharp_SB_DefaultConstruct());
                }
            }

            /// The interface for class `SC`, the const half.
            /// We never use interfaces as function parameters or return types, because they prevent implicit conversions, but can use them freely.
            public interface IConstSC : MR.CS.CSharp.IConstSA, MR.CS.CSharp.IConstSB
            {
                new public struct _Underlying; // Represents the underlying C++ type.
                internal unsafe _Underlying *_GetUnderlying_MRCSharpSC(); // Returns the pointer to the underlying C++ object.
                new 
                public struct _UnderlyingShared; // Represents the underlying shared pointer C++ type.
            }

            /// Generated from class `MR::CSharp::SC`.
            /// Base classes:
            ///   Direct: (non-virtual)
            ///     `MR::CSharp::SA`
            ///     `MR::CSharp::SB`
            /// This is the const half of the class.
            public class ConstSC : MR.CS.Misc.SharedObject, System.IDisposable, IConstSC, MR.CS.CSharp.IConstSA, MR.CS.CSharp.IConstSB
            {
                internal unsafe IConstSC._UnderlyingShared *_UnderlyingSharedPtr;
                public unsafe IConstSC._Underlying *_GetUnderlying_MRCSharpSC()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SC_Get", ExactSpelling = true)]
                    extern static IConstSC._Underlying *__MR_C_std_shared_ptr_MR_CSharp_SC_Get(IConstSC._UnderlyingShared *_this);
                    return __MR_C_std_shared_ptr_MR_CSharp_SC_Get(_UnderlyingSharedPtr);
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
                internal unsafe IConstSC._UnderlyingShared *_CloneUnderlyingSharedPtr()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SC_ConstructFromAnother", ExactSpelling = true)]
                    extern static IConstSC._UnderlyingShared *__MR_C_std_shared_ptr_MR_CSharp_SC_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, IConstSC._UnderlyingShared *other);
                    return __MR_C_std_shared_ptr_MR_CSharp_SC_ConstructFromAnother(MR.CS.Misc._PassBy.copy, _UnderlyingSharedPtr);
                }

                public unsafe MR.CS.CSharp.IConstSA._Underlying *_GetUnderlying_MRCSharpSA()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_SC_UpcastTo_MR_CSharp_SA", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IConstSA._Underlying *__MR_CSharp_SC_UpcastTo_MR_CSharp_SA(IConstSC._Underlying *_this);
                    return __MR_CSharp_SC_UpcastTo_MR_CSharp_SA(_GetUnderlying_MRCSharpSC());
                }

                public unsafe MR.CS.CSharp.IConstSB._Underlying *_GetUnderlying_MRCSharpSB()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_SC_UpcastTo_MR_CSharp_SB", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IConstSB._Underlying *__MR_CSharp_SC_UpcastTo_MR_CSharp_SB(IConstSC._Underlying *_this);
                    return __MR_CSharp_SC_UpcastTo_MR_CSharp_SB(_GetUnderlying_MRCSharpSC());
                }

                internal unsafe ConstSC(IConstSC._Underlying *ptr, bool is_owning) : base(true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SC_Construct", ExactSpelling = true)]
                    extern static IConstSC._UnderlyingShared *__MR_C_std_shared_ptr_MR_CSharp_SC_Construct(IConstSC._Underlying *other);
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SC_ConstructNonOwning", ExactSpelling = true)]
                    extern static IConstSC._UnderlyingShared *__MR_C_std_shared_ptr_MR_CSharp_SC_ConstructNonOwning(IConstSC._Underlying *other);
                    if (is_owning)
                        _UnderlyingSharedPtr = __MR_C_std_shared_ptr_MR_CSharp_SC_Construct(ptr);
                    else
                        _UnderlyingSharedPtr = __MR_C_std_shared_ptr_MR_CSharp_SC_ConstructNonOwning(ptr);
                }

                internal unsafe ConstSC(IConstSC._UnderlyingShared *shared_ptr, bool is_owning) : base(is_owning) {_UnderlyingSharedPtr = shared_ptr;}

                internal static unsafe SC _MakeAliasing(MR.CS.Std.IConstSharedPtr_ConstVoid._Underlying *ownership, IConstSC._Underlying *ptr)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SC_ConstructAliasing", ExactSpelling = true)]
                    extern static IConstSC._UnderlyingShared *__MR_C_std_shared_ptr_MR_CSharp_SC_ConstructAliasing(MR.CS.Misc._PassBy ownership_pass_by, MR.CS.Std.IConstSharedPtr_ConstVoid._Underlying *ownership, IConstSC._Underlying *ptr);
                    return new(__MR_C_std_shared_ptr_MR_CSharp_SC_ConstructAliasing(MR.CS.Misc._PassBy.copy, ownership, ptr), is_owning: true);
                }

                protected unsafe void _LateMakeShared(IConstSC._Underlying *ptr)
                {
                    System.Diagnostics.Trace.Assert(_IsOwningVal == true);
                    System.Diagnostics.Trace.Assert(_UnderlyingSharedPtr == null);
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SC_Construct", ExactSpelling = true)]
                    extern static IConstSC._UnderlyingShared *__MR_C_std_shared_ptr_MR_CSharp_SC_Construct(IConstSC._Underlying *other);
                    _UnderlyingSharedPtr = __MR_C_std_shared_ptr_MR_CSharp_SC_Construct(ptr);
                }

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingSharedPtr == null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SC_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_shared_ptr_MR_CSharp_SC_Destroy(IConstSC._UnderlyingShared *_this);
                    __MR_C_std_shared_ptr_MR_CSharp_SC_Destroy(_UnderlyingSharedPtr);
                    _UnderlyingSharedPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstSC() {Dispose(false);}

                // Upcasts:
                public static unsafe implicit operator MR.CS.CSharp.ConstSA(ConstSC self) {return MR.CS.CSharp.ConstSA._MakeAliasing((MR.CS.Std.IConstSharedPtr_ConstVoid._Underlying *)self._UnderlyingSharedPtr, self._GetUnderlying_MRCSharpSA());}
                public static unsafe implicit operator MR.CS.CSharp.ConstSB(ConstSC self) {return MR.CS.CSharp.ConstSB._MakeAliasing((MR.CS.Std.IConstSharedPtr_ConstVoid._Underlying *)self._UnderlyingSharedPtr, self._GetUnderlying_MRCSharpSB());}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstSC() : this(shared_ptr: null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_SC_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IConstSC._Underlying *__MR_CSharp_SC_DefaultConstruct();
                    _LateMakeShared(__MR_CSharp_SC_DefaultConstruct());
                }
            }

            /// The interface for class `SC`, the non-const half.
            /// We never use interfaces as function parameters or return types, because they prevent implicit conversions, but can use them freely.
            public interface ISC : MR.CS.CSharp.IConstSC, MR.CS.CSharp.ISA, MR.CS.CSharp.ISB
            {
            }

            /// Generated from class `MR::CSharp::SC`.
            /// Base classes:
            ///   Direct: (non-virtual)
            ///     `MR::CSharp::SA`
            ///     `MR::CSharp::SB`
            /// This is the non-const half of the class.
            public class SC : MR.CS.CSharp.ConstSC, ISC, MR.CS.CSharp.ISA, MR.CS.CSharp.ISB
            {
                internal unsafe SC(ISC._Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                internal unsafe SC(ISC._UnderlyingShared *shared_ptr, bool is_owning) : base(shared_ptr, is_owning) {}

                // Upcasts:
                public static unsafe implicit operator MR.CS.CSharp.ConstSA(SC self) {return MR.CS.CSharp.ConstSA._MakeAliasing((MR.CS.Std.IConstSharedPtr_ConstVoid._Underlying *)self._UnderlyingSharedPtr, self._GetUnderlying_MRCSharpSA());}
                public static unsafe implicit operator MR.CS.CSharp.SA(SC self) {return MR.CS.CSharp.SA._MakeAliasing((MR.CS.Std.IConstSharedPtr_ConstVoid._Underlying *)self._UnderlyingSharedPtr, self._GetUnderlying_MRCSharpSA());}
                public static unsafe implicit operator MR.CS.CSharp.ConstSB(SC self) {return MR.CS.CSharp.ConstSB._MakeAliasing((MR.CS.Std.IConstSharedPtr_ConstVoid._Underlying *)self._UnderlyingSharedPtr, self._GetUnderlying_MRCSharpSB());}
                public static unsafe implicit operator MR.CS.CSharp.SB(SC self) {return MR.CS.CSharp.SB._MakeAliasing((MR.CS.Std.IConstSharedPtr_ConstVoid._Underlying *)self._UnderlyingSharedPtr, self._GetUnderlying_MRCSharpSB());}

                /// Constructs an empty (default-constructed) instance.
                public unsafe SC() : this(shared_ptr: null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_SC_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IConstSC._Underlying *__MR_CSharp_SC_DefaultConstruct();
                    _LateMakeShared(__MR_CSharp_SC_DefaultConstruct());
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
                fixed (bool *__ptr_a = &a) {
                    bool __value_b = b != null ? b.Value : default(bool);
                    __MR_CSharp_test_bool_ref(__ptr_a, b != null ? &__value_b : null);
                    if (b != null) b.Value = __value_b;
                } // fixed __ptr_a
            }

            /// Generated from function `MR::CSharp::test_bool_ref2`.
            /// Parameter `b` defaults to `default_bool`.
            public static unsafe int TestBoolRef2(ref bool a, MR.CS.Misc.InOut<bool>? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_bool_ref2", ExactSpelling = true)]
                extern static int __MR_CSharp_test_bool_ref2(bool *a, bool *b);
                fixed (bool *__ptr_a = &a) {
                    bool __value_b = b != null ? b.Value : default(bool);
                    var __ret = __MR_CSharp_test_bool_ref2(__ptr_a, b != null ? &__value_b : null);
                    if (b != null) b.Value = __value_b;
                    return __ret;
                } // fixed __ptr_a
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
                fixed (int *__ptr_a = &a) {
                    int __value_b = b != null ? b.Value : default(int);
                    var __ret = __MR_CSharp_test_int_ref(__ptr_a, b != null ? &__value_b : null);
                    if (b != null) b.Value = __value_b;
                    return ref *__ret;
                } // fixed __ptr_a
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
                fixed (MR.CS.CSharp.E1 *__ptr_a = &a) {
                    MR.CS.CSharp.E1 __value_b = b != null ? b.Value : default(MR.CS.CSharp.E1);
                    var __ret = __MR_CSharp_test_enum_ref_MR_CSharp_E1(__ptr_a, b != null ? &__value_b : null);
                    if (b != null) b.Value = __value_b;
                    return ref *__ret;
                } // fixed __ptr_a
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
                fixed (MR.CS.CSharp.E2 *__ptr_a = &a) {
                    if ((byte)a > 1) a = (MR.CS.CSharp.E2)1;
                    MR.CS.CSharp.E2 __value_b = b != null ? b.Value : default(MR.CS.CSharp.E2);
                    if ((byte)__value_b > 1) __value_b = (MR.CS.CSharp.E2)1;
                    var __ret = __MR_CSharp_test_enum_ref_MR_CSharp_E2(__ptr_a, b != null ? &__value_b : null);
                    if (b != null) b.Value = __value_b;
                    return ref *__ret;
                } // fixed __ptr_a
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
                extern static MR.CS.CSharp.ITrivial._Underlying *__MR_CSharp_test_class_trivial(MR.CS.CSharp.ITrivial._Underlying *a, MR.CS.CSharp.ITrivial._Underlying *b);
                return new(__MR_CSharp_test_class_trivial(a._GetUnderlying_MRCSharpTrivial(), b != null ? b._GetUnderlying_MRCSharpTrivial() : null), is_owning: true);
            }

            /// Generated from function `MR::CSharp::test_class_trivial_ref`.
            /// Parameter `b` defaults to `default_trivial`.
            public static unsafe MR.CS.CSharp.Trivial TestClassTrivialRef(MR.CS.CSharp.Trivial a, MR.CS.CSharp.Trivial? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_class_trivial_ref", ExactSpelling = true)]
                extern static MR.CS.CSharp.ITrivial._Underlying *__MR_CSharp_test_class_trivial_ref(MR.CS.CSharp.ITrivial._Underlying *a, MR.CS.CSharp.ITrivial._Underlying *b);
                return new(__MR_CSharp_test_class_trivial_ref(a._GetUnderlying_MRCSharpTrivial(), b != null ? b._GetUnderlying_MRCSharpTrivial() : null), is_owning: false);
            }

            /// Generated from function `MR::CSharp::test_class_trivial_cref`.
            /// Parameter `b` defaults to `default_trivial`.
            public static unsafe MR.CS.CSharp.ConstTrivial TestClassTrivialCref(MR.CS.CSharp.ConstTrivial a, MR.CS.CSharp.ConstTrivial? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_class_trivial_cref", ExactSpelling = true)]
                extern static MR.CS.CSharp.IConstTrivial._Underlying *__MR_CSharp_test_class_trivial_cref(MR.CS.CSharp.IConstTrivial._Underlying *a, MR.CS.CSharp.IConstTrivial._Underlying *b);
                return new(__MR_CSharp_test_class_trivial_cref(a._GetUnderlying_MRCSharpTrivial(), b != null ? b._GetUnderlying_MRCSharpTrivial() : null), is_owning: false);
            }

            /// Generated from function `MR::CSharp::test_class_trivial_ptr`.
            /// Parameter `c` defaults to `&default_trivial`.
            public static unsafe MR.CS.CSharp.Trivial? TestClassTrivialPtr(MR.CS.CSharp.Trivial? a, MR.CS.CSharp.Trivial? b = null, MR.CS.Misc.InOptClass<MR.CS.CSharp.Trivial>? c = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_class_trivial_ptr", ExactSpelling = true)]
                extern static MR.CS.CSharp.ITrivial._Underlying *__MR_CSharp_test_class_trivial_ptr(MR.CS.CSharp.ITrivial._Underlying *a, MR.CS.CSharp.ITrivial._Underlying *b, MR.CS.CSharp.ITrivial._Underlying **c);
                MR.CS.CSharp.ITrivial._Underlying *__ptr_c = c != null && c.Opt != null ? c.Opt._GetUnderlying_MRCSharpTrivial() : null;
                var __ret = __MR_CSharp_test_class_trivial_ptr(a != null ? a._GetUnderlying_MRCSharpTrivial() : null, b != null ? b._GetUnderlying_MRCSharpTrivial() : null, c != null ? &__ptr_c : null);
                return __ret != null ? new MR.CS.CSharp.Trivial(__ret, is_owning: false) : null;
            }

            /// Generated from function `MR::CSharp::test_class_trivial_cptr`.
            /// Parameter `c` defaults to `&default_trivial`.
            public static unsafe MR.CS.CSharp.ConstTrivial? TestClassTrivialCptr(MR.CS.CSharp.ConstTrivial? a, MR.CS.CSharp.ConstTrivial? b = null, MR.CS.Misc.InOptClass<MR.CS.CSharp.ConstTrivial>? c = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_class_trivial_cptr", ExactSpelling = true)]
                extern static MR.CS.CSharp.IConstTrivial._Underlying *__MR_CSharp_test_class_trivial_cptr(MR.CS.CSharp.IConstTrivial._Underlying *a, MR.CS.CSharp.IConstTrivial._Underlying *b, MR.CS.CSharp.IConstTrivial._Underlying **c);
                MR.CS.CSharp.IConstTrivial._Underlying *__ptr_c = c != null && c.Opt != null ? c.Opt._GetUnderlying_MRCSharpTrivial() : null;
                var __ret = __MR_CSharp_test_class_trivial_cptr(a != null ? a._GetUnderlying_MRCSharpTrivial() : null, b != null ? b._GetUnderlying_MRCSharpTrivial() : null, c != null ? &__ptr_c : null);
                return __ret != null ? new MR.CS.CSharp.ConstTrivial(__ret, is_owning: false) : null;
            }

            /// Generated from function `MR::CSharp::test_class_nontrivial`.
            /// Parameter `b` defaults to `{}`.
            public static unsafe MR.CS.CSharp.NonTrivial TestClassNontrivial(MR.CS.Misc.ByValue<MR.CS.CSharp.NonTrivial, MR.CS.CSharp.ConstNonTrivial> a, MR.CS.Misc.ByValue<MR.CS.CSharp.NonTrivial, MR.CS.CSharp.ConstNonTrivial>? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_class_nontrivial", ExactSpelling = true)]
                extern static MR.CS.CSharp.INonTrivial._Underlying *__MR_CSharp_test_class_nontrivial(MR.CS.Misc._PassBy a_pass_by, MR.CS.CSharp.INonTrivial._Underlying *a, MR.CS.Misc._PassBy b_pass_by, MR.CS.CSharp.INonTrivial._Underlying *b);
                return new(__MR_CSharp_test_class_nontrivial(a.PassByMode, a.Value != null ? a.Value._GetUnderlying_MRCSharpNonTrivial() : null, b.HasValue ? b.Value.PassByMode : MR.CS.Misc._PassBy.default_arg, b.HasValue && b.Value.Value != null ? b.Value.Value._GetUnderlying_MRCSharpNonTrivial() : null), is_owning: true);
            }

            /// Generated from function `MR::CSharp::test_class_nontrivial_ref`.
            /// Parameter `b` defaults to `default_nontrivial`.
            public static unsafe MR.CS.CSharp.NonTrivial TestClassNontrivialRef(MR.CS.CSharp.NonTrivial a, MR.CS.CSharp.NonTrivial? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_class_nontrivial_ref", ExactSpelling = true)]
                extern static MR.CS.CSharp.INonTrivial._Underlying *__MR_CSharp_test_class_nontrivial_ref(MR.CS.CSharp.INonTrivial._Underlying *a, MR.CS.CSharp.INonTrivial._Underlying *b);
                return new(__MR_CSharp_test_class_nontrivial_ref(a._GetUnderlying_MRCSharpNonTrivial(), b != null ? b._GetUnderlying_MRCSharpNonTrivial() : null), is_owning: false);
            }

            /// Generated from function `MR::CSharp::test_class_nontrivial_cref`.
            /// Parameter `b` defaults to `default_nontrivial`.
            public static unsafe MR.CS.CSharp.ConstNonTrivial TestClassNontrivialCref(MR.CS.CSharp.ConstNonTrivial a, MR.CS.CSharp.ConstNonTrivial? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_class_nontrivial_cref", ExactSpelling = true)]
                extern static MR.CS.CSharp.IConstNonTrivial._Underlying *__MR_CSharp_test_class_nontrivial_cref(MR.CS.CSharp.IConstNonTrivial._Underlying *a, MR.CS.CSharp.IConstNonTrivial._Underlying *b);
                return new(__MR_CSharp_test_class_nontrivial_cref(a._GetUnderlying_MRCSharpNonTrivial(), b != null ? b._GetUnderlying_MRCSharpNonTrivial() : null), is_owning: false);
            }

            /// Generated from function `MR::CSharp::test_class_nontrivial_ptr`.
            /// Parameter `c` defaults to `&default_nontrivial`.
            public static unsafe MR.CS.CSharp.NonTrivial? TestClassNontrivialPtr(MR.CS.CSharp.NonTrivial? a, MR.CS.CSharp.NonTrivial? b = null, MR.CS.Misc.InOptClass<MR.CS.CSharp.NonTrivial>? c = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_class_nontrivial_ptr", ExactSpelling = true)]
                extern static MR.CS.CSharp.INonTrivial._Underlying *__MR_CSharp_test_class_nontrivial_ptr(MR.CS.CSharp.INonTrivial._Underlying *a, MR.CS.CSharp.INonTrivial._Underlying *b, MR.CS.CSharp.INonTrivial._Underlying **c);
                MR.CS.CSharp.INonTrivial._Underlying *__ptr_c = c != null && c.Opt != null ? c.Opt._GetUnderlying_MRCSharpNonTrivial() : null;
                var __ret = __MR_CSharp_test_class_nontrivial_ptr(a != null ? a._GetUnderlying_MRCSharpNonTrivial() : null, b != null ? b._GetUnderlying_MRCSharpNonTrivial() : null, c != null ? &__ptr_c : null);
                return __ret != null ? new MR.CS.CSharp.NonTrivial(__ret, is_owning: false) : null;
            }

            /// Generated from function `MR::CSharp::test_class_nontrivial_cptr`.
            /// Parameter `c` defaults to `&default_nontrivial`.
            public static unsafe MR.CS.CSharp.ConstNonTrivial? TestClassNontrivialCptr(MR.CS.CSharp.ConstNonTrivial? a, MR.CS.CSharp.ConstNonTrivial? b = null, MR.CS.Misc.InOptClass<MR.CS.CSharp.ConstNonTrivial>? c = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_class_nontrivial_cptr", ExactSpelling = true)]
                extern static MR.CS.CSharp.IConstNonTrivial._Underlying *__MR_CSharp_test_class_nontrivial_cptr(MR.CS.CSharp.IConstNonTrivial._Underlying *a, MR.CS.CSharp.IConstNonTrivial._Underlying *b, MR.CS.CSharp.IConstNonTrivial._Underlying **c);
                MR.CS.CSharp.IConstNonTrivial._Underlying *__ptr_c = c != null && c.Opt != null ? c.Opt._GetUnderlying_MRCSharpNonTrivial() : null;
                var __ret = __MR_CSharp_test_class_nontrivial_cptr(a != null ? a._GetUnderlying_MRCSharpNonTrivial() : null, b != null ? b._GetUnderlying_MRCSharpNonTrivial() : null, c != null ? &__ptr_c : null);
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
                extern static MR.CS.CSharp.ISA._UnderlyingShared *__MR_CSharp_test_shptr(MR.CS.Misc._PassBy a_pass_by, MR.CS.CSharp.ISA._UnderlyingShared *a, MR.CS.Misc._PassBy b_pass_by, MR.CS.CSharp.ISA._UnderlyingShared *b);
                return new(__MR_CSharp_test_shptr(a.PassByMode, a.Value != null ? a.Value._UnderlyingSharedPtr : null, b.HasValue ? b.Value.PassByMode : MR.CS.Misc._PassBy.default_arg, b.HasValue && b.Value.Value != null ? b.Value.Value._UnderlyingSharedPtr : null), is_owning: true);
            }

            /// Generated from function `MR::CSharp::test_shptr_ref`.
            /// Parameter `b` defaults to `default_shptr`.
            public static unsafe MR.CS.CSharp.SA TestShptrRef(MR.CS.CSharp.SA a, MR.CS.CSharp.SA? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_shptr_ref", ExactSpelling = true)]
                extern static MR.CS.CSharp.ISA._UnderlyingShared *__MR_CSharp_test_shptr_ref(MR.CS.CSharp.ISA._UnderlyingShared *a, MR.CS.CSharp.ISA._UnderlyingShared *b);
                return new(__MR_CSharp_test_shptr_ref(a._UnderlyingSharedPtr, b != null ? b._UnderlyingSharedPtr : null), is_owning: false);
            }

            /// Generated from function `MR::CSharp::test_shptr_cref`.
            /// Parameter `b` defaults to `default_shptr`.
            public static unsafe MR.CS.CSharp.ConstSA TestShptrCref(MR.CS.CSharp.ConstSA a, MR.CS.CSharp.ConstSA? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_shptr_cref", ExactSpelling = true)]
                extern static MR.CS.CSharp.IConstSA._UnderlyingShared *__MR_CSharp_test_shptr_cref(MR.CS.CSharp.IConstSA._UnderlyingShared *a, MR.CS.CSharp.IConstSA._UnderlyingShared *b);
                return new(__MR_CSharp_test_shptr_cref(a._UnderlyingSharedPtr, b != null ? b._UnderlyingSharedPtr : null), is_owning: false);
            }

            /// Generated from function `MR::CSharp::test_shcptr`.
            /// Parameter `b` defaults to `default_shcptr`.
            public static unsafe MR.CS.CSharp.SA TestShcptr(MR.CS.Misc.ByValue<MR.CS.CSharp.SA, MR.CS.CSharp.ConstSA> a, MR.CS.Misc.ByValue<MR.CS.CSharp.SA, MR.CS.CSharp.ConstSA>? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_shcptr", ExactSpelling = true)]
                extern static MR.CS.CSharp.ISA._UnderlyingShared *__MR_CSharp_test_shcptr(MR.CS.Misc._PassBy a_pass_by, MR.CS.CSharp.ISA._UnderlyingShared *a, MR.CS.Misc._PassBy b_pass_by, MR.CS.CSharp.ISA._UnderlyingShared *b);
                return new(__MR_CSharp_test_shcptr(a.PassByMode, a.Value != null ? a.Value._UnderlyingSharedPtr : null, b.HasValue ? b.Value.PassByMode : MR.CS.Misc._PassBy.default_arg, b.HasValue && b.Value.Value != null ? b.Value.Value._UnderlyingSharedPtr : null), is_owning: true);
            }

            /// Generated from function `MR::CSharp::test_shcptr_ref`.
            /// Parameter `b` defaults to `default_shcptr`.
            public static unsafe MR.CS.CSharp.SA TestShcptrRef(MR.CS.CSharp.SA a, MR.CS.CSharp.SA? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_shcptr_ref", ExactSpelling = true)]
                extern static MR.CS.CSharp.ISA._UnderlyingShared *__MR_CSharp_test_shcptr_ref(MR.CS.CSharp.ISA._UnderlyingShared *a, MR.CS.CSharp.ISA._UnderlyingShared *b);
                return new(__MR_CSharp_test_shcptr_ref(a._UnderlyingSharedPtr, b != null ? b._UnderlyingSharedPtr : null), is_owning: false);
            }

            /// Generated from function `MR::CSharp::test_shcptr_cref`.
            /// Parameter `b` defaults to `default_shcptr`.
            public static unsafe MR.CS.CSharp.ConstSA TestShcptrCref(MR.CS.CSharp.ConstSA a, MR.CS.CSharp.ConstSA? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_shcptr_cref", ExactSpelling = true)]
                extern static MR.CS.CSharp.IConstSA._UnderlyingShared *__MR_CSharp_test_shcptr_cref(MR.CS.CSharp.IConstSA._UnderlyingShared *a, MR.CS.CSharp.IConstSA._UnderlyingShared *b);
                return new(__MR_CSharp_test_shcptr_cref(a._UnderlyingSharedPtr, b != null ? b._UnderlyingSharedPtr : null), is_owning: false);
            }
        }
    }
}
