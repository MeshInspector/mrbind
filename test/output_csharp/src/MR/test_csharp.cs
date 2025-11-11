public static partial class MR
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
            public struct _Underlying; // Represents the underlying C type.
            internal unsafe _Underlying *_GetUnderlying_MR_CSharp_A(); // Returns the pointer to the underlying C object.

            /// Generated from method `MR::CSharp::A::bar`.
            public unsafe void bar(int _1, int _2)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_bar", ExactSpelling = true)]
                extern static void __MR_CSharp_A_bar(_Underlying *_this, int _1, int _2);
                __MR_CSharp_A_bar(_GetUnderlying_MR_CSharp_A(), _1, _2);
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
                __MR_CSharp_A_virtual_bar(_GetUnderlying_MR_CSharp_A(), _1, _2);
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
        public class ConstA : MR.Misc.Object, System.IDisposable, IConstA
        {
            protected unsafe IConstA._Underlying *_UnderlyingPtr;
            public unsafe IConstA._Underlying *_GetUnderlying_MR_CSharp_A() => _UnderlyingPtr;

            internal unsafe ConstA(IConstA._Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

            protected virtual unsafe void Dispose(bool disposing)
            {
                if (_UnderlyingPtr == null || !_IsOwning)
                    return;
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_Destroy", ExactSpelling = true)]
                extern static void __MR_CSharp_A_Destroy(IConstA._Underlying *_this);
                __MR_CSharp_A_Destroy(_GetUnderlying_MR_CSharp_A());
                _UnderlyingPtr = null;
            }
            public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
            ~ConstA() {Dispose(false);}

            /// Constructs an empty (default-constructed) instance.
            public unsafe ConstA() : this(null, is_owning: true)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_DefaultConstruct", ExactSpelling = true)]
                extern static MR.CSharp.IConstA._Underlying *__MR_CSharp_A_DefaultConstruct();
                _UnderlyingPtr = __MR_CSharp_A_DefaultConstruct();
            }

            /// Generated from method `MR::CSharp::A::bar`.
            public void bar(int _1, int _2) => ((MR.CSharp.IConstA)this).bar(_1, _2);

            /// Generated from method `MR::CSharp::A::static_foo`.
            public static void static_foo() => MR.CSharp.IConstA.static_foo();

            /// Generated from method `MR::CSharp::A::static_bar`.
            public static void static_bar(int _1, int _2) => MR.CSharp.IConstA.static_bar(_1, _2);

            /// Generated from method `MR::CSharp::A::virtual_bar`.
            public virtual void virtual_bar(int _1, int _2) => ((MR.CSharp.IConstA)this).virtual_bar(_1, _2);
        }

        /// The interface for class `A`, the non-const half.
        /// We never use interfaces as function parameters or return types, because they prevent implicit conversions, but can use them freely.
        public interface IA : MR.CSharp.IConstA
        {
            /// Generated from method `MR::CSharp::A::foo`.
            public unsafe void foo()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_foo", ExactSpelling = true)]
                extern static void __MR_CSharp_A_foo(_Underlying *_this);
                __MR_CSharp_A_foo(_GetUnderlying_MR_CSharp_A());
            }

            /// Generated from method `MR::CSharp::A::virtual_foo`.
            public unsafe void virtual_foo()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_virtual_foo", ExactSpelling = true)]
                extern static void __MR_CSharp_A_virtual_foo(_Underlying *_this);
                __MR_CSharp_A_virtual_foo(_GetUnderlying_MR_CSharp_A());
            }

            /// Generated from method `MR::CSharp::A::refs`.
            public unsafe ref int refs(ref int x, ref int _2)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_refs", ExactSpelling = true)]
                extern static int *__MR_CSharp_A_refs(_Underlying *_this, int *x, int *_2);
                fixed (int *__ptr_x = &x) {
                    fixed (int *__ptr__2 = &_2) {
                        return ref *__MR_CSharp_A_refs(_GetUnderlying_MR_CSharp_A(), __ptr_x, __ptr__2);
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
        public class A : MR.CSharp.ConstA, IA
        {
            internal unsafe A(IA._Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

            /// Constructs an empty (default-constructed) instance.
            public unsafe A() : this(null, is_owning: true)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_DefaultConstruct", ExactSpelling = true)]
                extern static MR.CSharp.IConstA._Underlying *__MR_CSharp_A_DefaultConstruct();
                _UnderlyingPtr = __MR_CSharp_A_DefaultConstruct();
            }

            /// Generated from method `MR::CSharp::A::foo`.
            public void foo() => ((MR.CSharp.IA)this).foo();

            /// Generated from method `MR::CSharp::A::virtual_foo`.
            public virtual void virtual_foo() => ((MR.CSharp.IA)this).virtual_foo();

            /// Generated from method `MR::CSharp::A::refs`.
            public ref int refs(ref int x, ref int _2) => ref ((MR.CSharp.IA)this).refs(ref x, ref _2);
        }

        /// The interface for class `B`, the const half.
        /// We never use interfaces as function parameters or return types, because they prevent implicit conversions, but can use them freely.
        public interface IConstB : MR.CSharp.IConstA
        {
            new public struct _Underlying; // Represents the underlying C type.
            internal unsafe _Underlying *_GetUnderlying_MR_CSharp_B(); // Returns the pointer to the underlying C object.
        }

        /// Generated from class `MR::CSharp::B`.
        /// Base classes:
        ///   Direct: (non-virtual)
        ///     `MR::CSharp::A`
        /// This is the const half of the class.
        public class ConstB : MR.Misc.Object, System.IDisposable, IConstB, MR.CSharp.IConstA
        {
            protected unsafe IConstB._Underlying *_UnderlyingPtr;
            public unsafe IConstB._Underlying *_GetUnderlying_MR_CSharp_B() => _UnderlyingPtr;

            public unsafe MR.CSharp.IConstA._Underlying *_GetUnderlying_MR_CSharp_A()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_B_UpcastTo_MR_CSharp_A", ExactSpelling = true)]
                extern static MR.CSharp.IConstA._Underlying *__MR_CSharp_B_UpcastTo_MR_CSharp_A(IConstB._Underlying *_this);
                return __MR_CSharp_B_UpcastTo_MR_CSharp_A(_GetUnderlying_MR_CSharp_B());
            }

            internal unsafe ConstB(IConstB._Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

            protected virtual unsafe void Dispose(bool disposing)
            {
                if (_UnderlyingPtr == null || !_IsOwning)
                    return;
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_B_Destroy", ExactSpelling = true)]
                extern static void __MR_CSharp_B_Destroy(IConstB._Underlying *_this);
                __MR_CSharp_B_Destroy(_GetUnderlying_MR_CSharp_B());
                _UnderlyingPtr = null;
            }
            public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
            ~ConstB() {Dispose(false);}

            // Upcasts:
            public static unsafe implicit operator MR.CSharp.ConstA(ConstB self) {MR.CSharp.ConstA ret = new(self._GetUnderlying_MR_CSharp_A(), is_owning: false); ret._KeepAlive(self); return ret;}

            // Downcasts:
            public static unsafe explicit operator ConstB?(MR.CSharp.ConstA parent)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_DynamicDowncastTo_MR_CSharp_B", ExactSpelling = true)]
                extern static IConstB._Underlying *__MR_CSharp_A_DynamicDowncastTo_MR_CSharp_B(MR.CSharp.IConstA._Underlying *_this);
                var ptr = __MR_CSharp_A_DynamicDowncastTo_MR_CSharp_B(parent._GetUnderlying_MR_CSharp_A());
                if (ptr == null) return null;
                ConstB ret = new(ptr, is_owning: false);
                ret._KeepAlive(parent);
                return ret;
            }

            /// Constructs an empty (default-constructed) instance.
            public unsafe ConstB() : this(null, is_owning: true)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_B_DefaultConstruct", ExactSpelling = true)]
                extern static MR.CSharp.IConstB._Underlying *__MR_CSharp_B_DefaultConstruct();
                _UnderlyingPtr = __MR_CSharp_B_DefaultConstruct();
            }

            /// Generated from constructor `MR::CSharp::B::B`.
            public unsafe ConstB(int a, int b) : this(null, is_owning: true)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_B_Construct", ExactSpelling = true)]
                extern static MR.CSharp.IConstB._Underlying *__MR_CSharp_B_Construct(int a, int b);
                _UnderlyingPtr = __MR_CSharp_B_Construct(a, b);
            }

            /// Generated from method `MR::CSharp::A::bar`.
            public void bar(int _1, int _2) => ((MR.CSharp.IConstA)this).bar(_1, _2);

            /// Generated from method `MR::CSharp::A::static_foo`.
            public static void static_foo() => MR.CSharp.IConstA.static_foo();

            /// Generated from method `MR::CSharp::A::static_bar`.
            public static void static_bar(int _1, int _2) => MR.CSharp.IConstA.static_bar(_1, _2);

            /// Generated from method `MR::CSharp::A::virtual_bar`.
            public virtual void virtual_bar(int _1, int _2) => ((MR.CSharp.IConstA)this).virtual_bar(_1, _2);
        }

        /// The interface for class `B`, the non-const half.
        /// We never use interfaces as function parameters or return types, because they prevent implicit conversions, but can use them freely.
        public interface IB : MR.CSharp.IConstB, MR.CSharp.IA
        {
        }

        /// Generated from class `MR::CSharp::B`.
        /// Base classes:
        ///   Direct: (non-virtual)
        ///     `MR::CSharp::A`
        /// This is the non-const half of the class.
        public class B : MR.CSharp.ConstB, IB, MR.CSharp.IA
        {
            internal unsafe B(IB._Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

            // Upcasts:
            public static unsafe implicit operator MR.CSharp.ConstA(B self) {MR.CSharp.ConstA ret = new(self._GetUnderlying_MR_CSharp_A(), is_owning: false); ret._KeepAlive(self); return ret;}
            public static unsafe implicit operator MR.CSharp.A(B self) {MR.CSharp.A ret = new(self._GetUnderlying_MR_CSharp_A(), is_owning: false); ret._KeepAlive(self); return ret;}

            // Downcasts:
            public static unsafe explicit operator B?(MR.CSharp.ConstA parent)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_DynamicDowncastTo_MR_CSharp_B", ExactSpelling = true)]
                extern static IB._Underlying *__MR_CSharp_A_DynamicDowncastTo_MR_CSharp_B(MR.CSharp.IConstA._Underlying *_this);
                var ptr = __MR_CSharp_A_DynamicDowncastTo_MR_CSharp_B(parent._GetUnderlying_MR_CSharp_A());
                if (ptr == null) return null;
                B ret = new(ptr, is_owning: false);
                ret._KeepAlive(parent);
                return ret;
            }
            public static unsafe explicit operator B?(MR.CSharp.A parent)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_DynamicDowncastTo_MR_CSharp_B", ExactSpelling = true)]
                extern static IB._Underlying *__MR_CSharp_A_DynamicDowncastTo_MR_CSharp_B(MR.CSharp.IA._Underlying *_this);
                var ptr = __MR_CSharp_A_DynamicDowncastTo_MR_CSharp_B(parent._GetUnderlying_MR_CSharp_A());
                if (ptr == null) return null;
                B ret = new(ptr, is_owning: false);
                ret._KeepAlive(parent);
                return ret;
            }

            /// Constructs an empty (default-constructed) instance.
            public unsafe B() : this(null, is_owning: true)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_B_DefaultConstruct", ExactSpelling = true)]
                extern static MR.CSharp.IConstB._Underlying *__MR_CSharp_B_DefaultConstruct();
                _UnderlyingPtr = __MR_CSharp_B_DefaultConstruct();
            }

            /// Generated from constructor `MR::CSharp::B::B`.
            public unsafe B(int a, int b) : this(null, is_owning: true)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_B_Construct", ExactSpelling = true)]
                extern static MR.CSharp.IConstB._Underlying *__MR_CSharp_B_Construct(int a, int b);
                _UnderlyingPtr = __MR_CSharp_B_Construct(a, b);
            }

            /// Generated from method `MR::CSharp::A::foo`.
            public void foo() => ((MR.CSharp.IA)this).foo();

            /// Generated from method `MR::CSharp::A::virtual_foo`.
            public virtual void virtual_foo() => ((MR.CSharp.IA)this).virtual_foo();

            /// Generated from method `MR::CSharp::A::refs`.
            public ref int refs(ref int x, ref int _2) => ref ((MR.CSharp.IA)this).refs(ref x, ref _2);
        }

        /// The interface for class `C`, the const half.
        /// We never use interfaces as function parameters or return types, because they prevent implicit conversions, but can use them freely.
        public interface IConstC : MR.CSharp.IConstA
        {
            new public struct _Underlying; // Represents the underlying C type.
            internal unsafe _Underlying *_GetUnderlying_MR_CSharp_C(); // Returns the pointer to the underlying C object.
        }

        /// Generated from class `MR::CSharp::C`.
        /// Base classes:
        ///   Virtual:
        ///     `MR::CSharp::A`
        /// This is the const half of the class.
        public class ConstC : MR.Misc.Object, System.IDisposable, IConstC, MR.CSharp.IConstA
        {
            protected unsafe IConstC._Underlying *_UnderlyingPtr;
            public unsafe IConstC._Underlying *_GetUnderlying_MR_CSharp_C() => _UnderlyingPtr;

            public unsafe MR.CSharp.IConstA._Underlying *_GetUnderlying_MR_CSharp_A()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_C_UpcastTo_MR_CSharp_A", ExactSpelling = true)]
                extern static MR.CSharp.IConstA._Underlying *__MR_CSharp_C_UpcastTo_MR_CSharp_A(IConstC._Underlying *_this);
                return __MR_CSharp_C_UpcastTo_MR_CSharp_A(_GetUnderlying_MR_CSharp_C());
            }

            internal unsafe ConstC(IConstC._Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

            protected virtual unsafe void Dispose(bool disposing)
            {
                if (_UnderlyingPtr == null || !_IsOwning)
                    return;
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_C_Destroy", ExactSpelling = true)]
                extern static void __MR_CSharp_C_Destroy(IConstC._Underlying *_this);
                __MR_CSharp_C_Destroy(_GetUnderlying_MR_CSharp_C());
                _UnderlyingPtr = null;
            }
            public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
            ~ConstC() {Dispose(false);}

            // Upcasts:
            public static unsafe implicit operator MR.CSharp.ConstA(ConstC self) {MR.CSharp.ConstA ret = new(self._GetUnderlying_MR_CSharp_A(), is_owning: false); ret._KeepAlive(self); return ret;}

            // Downcasts:
            public static unsafe explicit operator ConstC?(MR.CSharp.ConstA parent)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_DynamicDowncastTo_MR_CSharp_C", ExactSpelling = true)]
                extern static IConstC._Underlying *__MR_CSharp_A_DynamicDowncastTo_MR_CSharp_C(MR.CSharp.IConstA._Underlying *_this);
                var ptr = __MR_CSharp_A_DynamicDowncastTo_MR_CSharp_C(parent._GetUnderlying_MR_CSharp_A());
                if (ptr == null) return null;
                ConstC ret = new(ptr, is_owning: false);
                ret._KeepAlive(parent);
                return ret;
            }

            /// Constructs an empty (default-constructed) instance.
            public unsafe ConstC() : this(null, is_owning: true)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_C_DefaultConstruct", ExactSpelling = true)]
                extern static MR.CSharp.IConstC._Underlying *__MR_CSharp_C_DefaultConstruct();
                _UnderlyingPtr = __MR_CSharp_C_DefaultConstruct();
            }

            /// Generated from method `MR::CSharp::A::bar`.
            public void bar(int _1, int _2) => ((MR.CSharp.IConstA)this).bar(_1, _2);

            /// Generated from method `MR::CSharp::A::static_foo`.
            public static void static_foo() => MR.CSharp.IConstA.static_foo();

            /// Generated from method `MR::CSharp::A::static_bar`.
            public static void static_bar(int _1, int _2) => MR.CSharp.IConstA.static_bar(_1, _2);

            /// Generated from method `MR::CSharp::A::virtual_bar`.
            public virtual void virtual_bar(int _1, int _2) => ((MR.CSharp.IConstA)this).virtual_bar(_1, _2);
        }

        /// The interface for class `C`, the non-const half.
        /// We never use interfaces as function parameters or return types, because they prevent implicit conversions, but can use them freely.
        public interface IC : MR.CSharp.IConstC, MR.CSharp.IA
        {
        }

        /// Generated from class `MR::CSharp::C`.
        /// Base classes:
        ///   Virtual:
        ///     `MR::CSharp::A`
        /// This is the non-const half of the class.
        public class C : MR.CSharp.ConstC, IC, MR.CSharp.IA
        {
            internal unsafe C(IC._Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

            // Upcasts:
            public static unsafe implicit operator MR.CSharp.ConstA(C self) {MR.CSharp.ConstA ret = new(self._GetUnderlying_MR_CSharp_A(), is_owning: false); ret._KeepAlive(self); return ret;}
            public static unsafe implicit operator MR.CSharp.A(C self) {MR.CSharp.A ret = new(self._GetUnderlying_MR_CSharp_A(), is_owning: false); ret._KeepAlive(self); return ret;}

            // Downcasts:
            public static unsafe explicit operator C?(MR.CSharp.ConstA parent)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_DynamicDowncastTo_MR_CSharp_C", ExactSpelling = true)]
                extern static IC._Underlying *__MR_CSharp_A_DynamicDowncastTo_MR_CSharp_C(MR.CSharp.IConstA._Underlying *_this);
                var ptr = __MR_CSharp_A_DynamicDowncastTo_MR_CSharp_C(parent._GetUnderlying_MR_CSharp_A());
                if (ptr == null) return null;
                C ret = new(ptr, is_owning: false);
                ret._KeepAlive(parent);
                return ret;
            }
            public static unsafe explicit operator C?(MR.CSharp.A parent)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_DynamicDowncastTo_MR_CSharp_C", ExactSpelling = true)]
                extern static IC._Underlying *__MR_CSharp_A_DynamicDowncastTo_MR_CSharp_C(MR.CSharp.IA._Underlying *_this);
                var ptr = __MR_CSharp_A_DynamicDowncastTo_MR_CSharp_C(parent._GetUnderlying_MR_CSharp_A());
                if (ptr == null) return null;
                C ret = new(ptr, is_owning: false);
                ret._KeepAlive(parent);
                return ret;
            }

            /// Constructs an empty (default-constructed) instance.
            public unsafe C() : this(null, is_owning: true)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_C_DefaultConstruct", ExactSpelling = true)]
                extern static MR.CSharp.IConstC._Underlying *__MR_CSharp_C_DefaultConstruct();
                _UnderlyingPtr = __MR_CSharp_C_DefaultConstruct();
            }

            /// Generated from method `MR::CSharp::A::foo`.
            public void foo() => ((MR.CSharp.IA)this).foo();

            /// Generated from method `MR::CSharp::A::virtual_foo`.
            public virtual void virtual_foo() => ((MR.CSharp.IA)this).virtual_foo();

            /// Generated from method `MR::CSharp::A::refs`.
            public ref int refs(ref int x, ref int _2) => ref ((MR.CSharp.IA)this).refs(ref x, ref _2);
        }

        /// The interface for class `D`, the const half.
        /// We never use interfaces as function parameters or return types, because they prevent implicit conversions, but can use them freely.
        public interface IConstD
        {
            public struct _Underlying; // Represents the underlying C type.
            internal unsafe _Underlying *_GetUnderlying_MR_CSharp_D(); // Returns the pointer to the underlying C object.

            /// Generated from method `MR::CSharp::D::d1`.
            public unsafe void d1()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_D_d1", ExactSpelling = true)]
                extern static void __MR_CSharp_D_d1(_Underlying *_this);
                __MR_CSharp_D_d1(_GetUnderlying_MR_CSharp_D());
            }
        }

        /// Generated from class `MR::CSharp::D`.
        /// Derived classes:
        ///   Direct: (non-virtual)
        ///     `MR::CSharp::F`
        ///     `MR::CSharp::G`
        /// This is the const half of the class.
        public class ConstD : MR.Misc.Object, System.IDisposable, IConstD
        {
            protected unsafe IConstD._Underlying *_UnderlyingPtr;
            public unsafe IConstD._Underlying *_GetUnderlying_MR_CSharp_D() => _UnderlyingPtr;

            internal unsafe ConstD(IConstD._Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

            protected virtual unsafe void Dispose(bool disposing)
            {
                if (_UnderlyingPtr == null || !_IsOwning)
                    return;
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_D_Destroy", ExactSpelling = true)]
                extern static void __MR_CSharp_D_Destroy(IConstD._Underlying *_this);
                __MR_CSharp_D_Destroy(_GetUnderlying_MR_CSharp_D());
                _UnderlyingPtr = null;
            }
            public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
            ~ConstD() {Dispose(false);}

            /// Constructs an empty (default-constructed) instance.
            public unsafe ConstD() : this(null, is_owning: true)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_D_DefaultConstruct", ExactSpelling = true)]
                extern static MR.CSharp.IConstD._Underlying *__MR_CSharp_D_DefaultConstruct();
                _UnderlyingPtr = __MR_CSharp_D_DefaultConstruct();
            }

            /// Generated from method `MR::CSharp::D::d1`.
            public void d1() => ((MR.CSharp.IConstD)this).d1();
        }

        /// The interface for class `D`, the non-const half.
        /// We never use interfaces as function parameters or return types, because they prevent implicit conversions, but can use them freely.
        public interface ID : MR.CSharp.IConstD
        {
            /// Generated from method `MR::CSharp::D::d2`.
            public unsafe void d2()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_D_d2", ExactSpelling = true)]
                extern static void __MR_CSharp_D_d2(_Underlying *_this);
                __MR_CSharp_D_d2(_GetUnderlying_MR_CSharp_D());
            }
        }

        /// Generated from class `MR::CSharp::D`.
        /// Derived classes:
        ///   Direct: (non-virtual)
        ///     `MR::CSharp::F`
        ///     `MR::CSharp::G`
        /// This is the non-const half of the class.
        public class D : MR.CSharp.ConstD, ID
        {
            internal unsafe D(ID._Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

            /// Constructs an empty (default-constructed) instance.
            public unsafe D() : this(null, is_owning: true)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_D_DefaultConstruct", ExactSpelling = true)]
                extern static MR.CSharp.IConstD._Underlying *__MR_CSharp_D_DefaultConstruct();
                _UnderlyingPtr = __MR_CSharp_D_DefaultConstruct();
            }

            /// Generated from method `MR::CSharp::D::d2`.
            public void d2() => ((MR.CSharp.ID)this).d2();
        }

        /// The interface for class `E`, the const half.
        /// We never use interfaces as function parameters or return types, because they prevent implicit conversions, but can use them freely.
        public interface IConstE
        {
            public struct _Underlying; // Represents the underlying C type.
            internal unsafe _Underlying *_GetUnderlying_MR_CSharp_E(); // Returns the pointer to the underlying C object.

            /// Generated from method `MR::CSharp::E::e1`.
            public unsafe void e1()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_E_e1", ExactSpelling = true)]
                extern static void __MR_CSharp_E_e1(_Underlying *_this);
                __MR_CSharp_E_e1(_GetUnderlying_MR_CSharp_E());
            }
        }

        /// Generated from class `MR::CSharp::E`.
        /// Derived classes:
        ///   Virtual:
        ///     `MR::CSharp::G`
        ///   Direct: (non-virtual)
        ///     `MR::CSharp::F`
        /// This is the const half of the class.
        public class ConstE : MR.Misc.Object, System.IDisposable, IConstE
        {
            protected unsafe IConstE._Underlying *_UnderlyingPtr;
            public unsafe IConstE._Underlying *_GetUnderlying_MR_CSharp_E() => _UnderlyingPtr;

            internal unsafe ConstE(IConstE._Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

            protected virtual unsafe void Dispose(bool disposing)
            {
                if (_UnderlyingPtr == null || !_IsOwning)
                    return;
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_E_Destroy", ExactSpelling = true)]
                extern static void __MR_CSharp_E_Destroy(IConstE._Underlying *_this);
                __MR_CSharp_E_Destroy(_GetUnderlying_MR_CSharp_E());
                _UnderlyingPtr = null;
            }
            public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
            ~ConstE() {Dispose(false);}

            /// Constructs an empty (default-constructed) instance.
            public unsafe ConstE() : this(null, is_owning: true)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_E_DefaultConstruct", ExactSpelling = true)]
                extern static MR.CSharp.IConstE._Underlying *__MR_CSharp_E_DefaultConstruct();
                _UnderlyingPtr = __MR_CSharp_E_DefaultConstruct();
            }

            /// Generated from method `MR::CSharp::E::e1`.
            public void e1() => ((MR.CSharp.IConstE)this).e1();
        }

        /// The interface for class `E`, the non-const half.
        /// We never use interfaces as function parameters or return types, because they prevent implicit conversions, but can use them freely.
        public interface IE : MR.CSharp.IConstE
        {
            /// Generated from method `MR::CSharp::E::e2`.
            public unsafe void e2()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_E_e2", ExactSpelling = true)]
                extern static void __MR_CSharp_E_e2(_Underlying *_this);
                __MR_CSharp_E_e2(_GetUnderlying_MR_CSharp_E());
            }
        }

        /// Generated from class `MR::CSharp::E`.
        /// Derived classes:
        ///   Virtual:
        ///     `MR::CSharp::G`
        ///   Direct: (non-virtual)
        ///     `MR::CSharp::F`
        /// This is the non-const half of the class.
        public class E : MR.CSharp.ConstE, IE
        {
            internal unsafe E(IE._Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

            /// Constructs an empty (default-constructed) instance.
            public unsafe E() : this(null, is_owning: true)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_E_DefaultConstruct", ExactSpelling = true)]
                extern static MR.CSharp.IConstE._Underlying *__MR_CSharp_E_DefaultConstruct();
                _UnderlyingPtr = __MR_CSharp_E_DefaultConstruct();
            }

            /// Generated from method `MR::CSharp::E::e2`.
            public void e2() => ((MR.CSharp.IE)this).e2();
        }

        /// The interface for class `F`, the const half.
        /// We never use interfaces as function parameters or return types, because they prevent implicit conversions, but can use them freely.
        public interface IConstF : MR.CSharp.IConstA, MR.CSharp.IConstD, MR.CSharp.IConstE
        {
            new public struct _Underlying; // Represents the underlying C type.
            internal unsafe _Underlying *_GetUnderlying_MR_CSharp_F(); // Returns the pointer to the underlying C object.
        }

        /// Generated from class `MR::CSharp::F`.
        /// Base classes:
        ///   Direct: (non-virtual)
        ///     `MR::CSharp::A`
        ///     `MR::CSharp::D`
        ///     `MR::CSharp::E`
        /// This is the const half of the class.
        public class ConstF : MR.Misc.Object, System.IDisposable, IConstF, MR.CSharp.IConstA, MR.CSharp.IConstD, MR.CSharp.IConstE
        {
            protected unsafe IConstF._Underlying *_UnderlyingPtr;
            public unsafe IConstF._Underlying *_GetUnderlying_MR_CSharp_F() => _UnderlyingPtr;

            public unsafe MR.CSharp.IConstA._Underlying *_GetUnderlying_MR_CSharp_A()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_F_UpcastTo_MR_CSharp_A", ExactSpelling = true)]
                extern static MR.CSharp.IConstA._Underlying *__MR_CSharp_F_UpcastTo_MR_CSharp_A(IConstF._Underlying *_this);
                return __MR_CSharp_F_UpcastTo_MR_CSharp_A(_GetUnderlying_MR_CSharp_F());
            }

            public unsafe MR.CSharp.IConstD._Underlying *_GetUnderlying_MR_CSharp_D()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_F_UpcastTo_MR_CSharp_D", ExactSpelling = true)]
                extern static MR.CSharp.IConstD._Underlying *__MR_CSharp_F_UpcastTo_MR_CSharp_D(IConstF._Underlying *_this);
                return __MR_CSharp_F_UpcastTo_MR_CSharp_D(_GetUnderlying_MR_CSharp_F());
            }

            public unsafe MR.CSharp.IConstE._Underlying *_GetUnderlying_MR_CSharp_E()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_F_UpcastTo_MR_CSharp_E", ExactSpelling = true)]
                extern static MR.CSharp.IConstE._Underlying *__MR_CSharp_F_UpcastTo_MR_CSharp_E(IConstF._Underlying *_this);
                return __MR_CSharp_F_UpcastTo_MR_CSharp_E(_GetUnderlying_MR_CSharp_F());
            }

            internal unsafe ConstF(IConstF._Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

            protected virtual unsafe void Dispose(bool disposing)
            {
                if (_UnderlyingPtr == null || !_IsOwning)
                    return;
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_F_Destroy", ExactSpelling = true)]
                extern static void __MR_CSharp_F_Destroy(IConstF._Underlying *_this);
                __MR_CSharp_F_Destroy(_GetUnderlying_MR_CSharp_F());
                _UnderlyingPtr = null;
            }
            public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
            ~ConstF() {Dispose(false);}

            // Upcasts:
            public static unsafe implicit operator MR.CSharp.ConstA(ConstF self) {MR.CSharp.ConstA ret = new(self._GetUnderlying_MR_CSharp_A(), is_owning: false); ret._KeepAlive(self); return ret;}
            public static unsafe implicit operator MR.CSharp.ConstD(ConstF self) {MR.CSharp.ConstD ret = new(self._GetUnderlying_MR_CSharp_D(), is_owning: false); ret._KeepAlive(self); return ret;}
            public static unsafe implicit operator MR.CSharp.ConstE(ConstF self) {MR.CSharp.ConstE ret = new(self._GetUnderlying_MR_CSharp_E(), is_owning: false); ret._KeepAlive(self); return ret;}

            // Downcasts:
            public static unsafe explicit operator ConstF?(MR.CSharp.ConstA parent)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_DynamicDowncastTo_MR_CSharp_F", ExactSpelling = true)]
                extern static IConstF._Underlying *__MR_CSharp_A_DynamicDowncastTo_MR_CSharp_F(MR.CSharp.IConstA._Underlying *_this);
                var ptr = __MR_CSharp_A_DynamicDowncastTo_MR_CSharp_F(parent._GetUnderlying_MR_CSharp_A());
                if (ptr == null) return null;
                ConstF ret = new(ptr, is_owning: false);
                ret._KeepAlive(parent);
                return ret;
            }

            /// Constructs an empty (default-constructed) instance.
            public unsafe ConstF() : this(null, is_owning: true)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_F_DefaultConstruct", ExactSpelling = true)]
                extern static MR.CSharp.IConstF._Underlying *__MR_CSharp_F_DefaultConstruct();
                _UnderlyingPtr = __MR_CSharp_F_DefaultConstruct();
            }

            /// Generated from method `MR::CSharp::A::bar`.
            public void bar(int _1, int _2) => ((MR.CSharp.IConstA)this).bar(_1, _2);

            /// Generated from method `MR::CSharp::A::static_foo`.
            public static void static_foo() => MR.CSharp.IConstA.static_foo();

            /// Generated from method `MR::CSharp::A::static_bar`.
            public static void static_bar(int _1, int _2) => MR.CSharp.IConstA.static_bar(_1, _2);

            /// Generated from method `MR::CSharp::A::virtual_bar`.
            public virtual void virtual_bar(int _1, int _2) => ((MR.CSharp.IConstA)this).virtual_bar(_1, _2);

            /// Generated from method `MR::CSharp::D::d1`.
            public void d1() => ((MR.CSharp.IConstD)this).d1();

            /// Generated from method `MR::CSharp::E::e1`.
            public void e1() => ((MR.CSharp.IConstE)this).e1();
        }

        /// The interface for class `F`, the non-const half.
        /// We never use interfaces as function parameters or return types, because they prevent implicit conversions, but can use them freely.
        public interface IF : MR.CSharp.IConstF, MR.CSharp.IA, MR.CSharp.ID, MR.CSharp.IE
        {
        }

        /// Generated from class `MR::CSharp::F`.
        /// Base classes:
        ///   Direct: (non-virtual)
        ///     `MR::CSharp::A`
        ///     `MR::CSharp::D`
        ///     `MR::CSharp::E`
        /// This is the non-const half of the class.
        public class F : MR.CSharp.ConstF, IF, MR.CSharp.IA, MR.CSharp.ID, MR.CSharp.IE
        {
            internal unsafe F(IF._Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

            // Upcasts:
            public static unsafe implicit operator MR.CSharp.ConstA(F self) {MR.CSharp.ConstA ret = new(self._GetUnderlying_MR_CSharp_A(), is_owning: false); ret._KeepAlive(self); return ret;}
            public static unsafe implicit operator MR.CSharp.A(F self) {MR.CSharp.A ret = new(self._GetUnderlying_MR_CSharp_A(), is_owning: false); ret._KeepAlive(self); return ret;}
            public static unsafe implicit operator MR.CSharp.ConstD(F self) {MR.CSharp.ConstD ret = new(self._GetUnderlying_MR_CSharp_D(), is_owning: false); ret._KeepAlive(self); return ret;}
            public static unsafe implicit operator MR.CSharp.D(F self) {MR.CSharp.D ret = new(self._GetUnderlying_MR_CSharp_D(), is_owning: false); ret._KeepAlive(self); return ret;}
            public static unsafe implicit operator MR.CSharp.ConstE(F self) {MR.CSharp.ConstE ret = new(self._GetUnderlying_MR_CSharp_E(), is_owning: false); ret._KeepAlive(self); return ret;}
            public static unsafe implicit operator MR.CSharp.E(F self) {MR.CSharp.E ret = new(self._GetUnderlying_MR_CSharp_E(), is_owning: false); ret._KeepAlive(self); return ret;}

            // Downcasts:
            public static unsafe explicit operator F?(MR.CSharp.ConstA parent)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_DynamicDowncastTo_MR_CSharp_F", ExactSpelling = true)]
                extern static IF._Underlying *__MR_CSharp_A_DynamicDowncastTo_MR_CSharp_F(MR.CSharp.IConstA._Underlying *_this);
                var ptr = __MR_CSharp_A_DynamicDowncastTo_MR_CSharp_F(parent._GetUnderlying_MR_CSharp_A());
                if (ptr == null) return null;
                F ret = new(ptr, is_owning: false);
                ret._KeepAlive(parent);
                return ret;
            }
            public static unsafe explicit operator F?(MR.CSharp.A parent)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_DynamicDowncastTo_MR_CSharp_F", ExactSpelling = true)]
                extern static IF._Underlying *__MR_CSharp_A_DynamicDowncastTo_MR_CSharp_F(MR.CSharp.IA._Underlying *_this);
                var ptr = __MR_CSharp_A_DynamicDowncastTo_MR_CSharp_F(parent._GetUnderlying_MR_CSharp_A());
                if (ptr == null) return null;
                F ret = new(ptr, is_owning: false);
                ret._KeepAlive(parent);
                return ret;
            }

            /// Constructs an empty (default-constructed) instance.
            public unsafe F() : this(null, is_owning: true)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_F_DefaultConstruct", ExactSpelling = true)]
                extern static MR.CSharp.IConstF._Underlying *__MR_CSharp_F_DefaultConstruct();
                _UnderlyingPtr = __MR_CSharp_F_DefaultConstruct();
            }

            /// Generated from method `MR::CSharp::A::foo`.
            public void foo() => ((MR.CSharp.IA)this).foo();

            /// Generated from method `MR::CSharp::A::virtual_foo`.
            public virtual void virtual_foo() => ((MR.CSharp.IA)this).virtual_foo();

            /// Generated from method `MR::CSharp::A::refs`.
            public ref int refs(ref int x, ref int _2) => ref ((MR.CSharp.IA)this).refs(ref x, ref _2);

            /// Generated from method `MR::CSharp::D::d2`.
            public void d2() => ((MR.CSharp.ID)this).d2();

            /// Generated from method `MR::CSharp::E::e2`.
            public void e2() => ((MR.CSharp.IE)this).e2();
        }

        /// The interface for class `G`, the const half.
        /// We never use interfaces as function parameters or return types, because they prevent implicit conversions, but can use them freely.
        public interface IConstG : MR.CSharp.IConstA, MR.CSharp.IConstD, MR.CSharp.IConstE
        {
            new public struct _Underlying; // Represents the underlying C type.
            internal unsafe _Underlying *_GetUnderlying_MR_CSharp_G(); // Returns the pointer to the underlying C object.
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
        public class ConstG : MR.Misc.Object, System.IDisposable, IConstG, MR.CSharp.IConstA, MR.CSharp.IConstD, MR.CSharp.IConstE
        {
            protected unsafe IConstG._Underlying *_UnderlyingPtr;
            public unsafe IConstG._Underlying *_GetUnderlying_MR_CSharp_G() => _UnderlyingPtr;

            public unsafe MR.CSharp.IConstA._Underlying *_GetUnderlying_MR_CSharp_A()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_G_UpcastTo_MR_CSharp_A", ExactSpelling = true)]
                extern static MR.CSharp.IConstA._Underlying *__MR_CSharp_G_UpcastTo_MR_CSharp_A(IConstG._Underlying *_this);
                return __MR_CSharp_G_UpcastTo_MR_CSharp_A(_GetUnderlying_MR_CSharp_G());
            }

            public unsafe MR.CSharp.IConstD._Underlying *_GetUnderlying_MR_CSharp_D()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_G_UpcastTo_MR_CSharp_D", ExactSpelling = true)]
                extern static MR.CSharp.IConstD._Underlying *__MR_CSharp_G_UpcastTo_MR_CSharp_D(IConstG._Underlying *_this);
                return __MR_CSharp_G_UpcastTo_MR_CSharp_D(_GetUnderlying_MR_CSharp_G());
            }

            public unsafe MR.CSharp.IConstE._Underlying *_GetUnderlying_MR_CSharp_E()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_G_UpcastTo_MR_CSharp_E", ExactSpelling = true)]
                extern static MR.CSharp.IConstE._Underlying *__MR_CSharp_G_UpcastTo_MR_CSharp_E(IConstG._Underlying *_this);
                return __MR_CSharp_G_UpcastTo_MR_CSharp_E(_GetUnderlying_MR_CSharp_G());
            }

            internal unsafe ConstG(IConstG._Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

            protected virtual unsafe void Dispose(bool disposing)
            {
                if (_UnderlyingPtr == null || !_IsOwning)
                    return;
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_G_Destroy", ExactSpelling = true)]
                extern static void __MR_CSharp_G_Destroy(IConstG._Underlying *_this);
                __MR_CSharp_G_Destroy(_GetUnderlying_MR_CSharp_G());
                _UnderlyingPtr = null;
            }
            public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
            ~ConstG() {Dispose(false);}

            // Upcasts:
            public static unsafe implicit operator MR.CSharp.ConstA(ConstG self) {MR.CSharp.ConstA ret = new(self._GetUnderlying_MR_CSharp_A(), is_owning: false); ret._KeepAlive(self); return ret;}
            public static unsafe implicit operator MR.CSharp.ConstD(ConstG self) {MR.CSharp.ConstD ret = new(self._GetUnderlying_MR_CSharp_D(), is_owning: false); ret._KeepAlive(self); return ret;}
            public static unsafe implicit operator MR.CSharp.ConstE(ConstG self) {MR.CSharp.ConstE ret = new(self._GetUnderlying_MR_CSharp_E(), is_owning: false); ret._KeepAlive(self); return ret;}

            // Downcasts:
            public static unsafe explicit operator ConstG?(MR.CSharp.ConstA parent)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_DynamicDowncastTo_MR_CSharp_G", ExactSpelling = true)]
                extern static IConstG._Underlying *__MR_CSharp_A_DynamicDowncastTo_MR_CSharp_G(MR.CSharp.IConstA._Underlying *_this);
                var ptr = __MR_CSharp_A_DynamicDowncastTo_MR_CSharp_G(parent._GetUnderlying_MR_CSharp_A());
                if (ptr == null) return null;
                ConstG ret = new(ptr, is_owning: false);
                ret._KeepAlive(parent);
                return ret;
            }

            /// Constructs an empty (default-constructed) instance.
            public unsafe ConstG() : this(null, is_owning: true)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_G_DefaultConstruct", ExactSpelling = true)]
                extern static MR.CSharp.IConstG._Underlying *__MR_CSharp_G_DefaultConstruct();
                _UnderlyingPtr = __MR_CSharp_G_DefaultConstruct();
            }

            /// Generated from method `MR::CSharp::A::bar`.
            public void bar(int _1, int _2) => ((MR.CSharp.IConstA)this).bar(_1, _2);

            /// Generated from method `MR::CSharp::A::static_foo`.
            public static void static_foo() => MR.CSharp.IConstA.static_foo();

            /// Generated from method `MR::CSharp::A::static_bar`.
            public static void static_bar(int _1, int _2) => MR.CSharp.IConstA.static_bar(_1, _2);

            /// Generated from method `MR::CSharp::A::virtual_bar`.
            public virtual void virtual_bar(int _1, int _2) => ((MR.CSharp.IConstA)this).virtual_bar(_1, _2);

            /// Generated from method `MR::CSharp::D::d1`.
            public void d1() => ((MR.CSharp.IConstD)this).d1();

            /// Generated from method `MR::CSharp::E::e1`.
            public void e1() => ((MR.CSharp.IConstE)this).e1();
        }

        /// The interface for class `G`, the non-const half.
        /// We never use interfaces as function parameters or return types, because they prevent implicit conversions, but can use them freely.
        public interface IG : MR.CSharp.IConstG, MR.CSharp.IA, MR.CSharp.ID, MR.CSharp.IE
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
        public class G : MR.CSharp.ConstG, IG, MR.CSharp.IA, MR.CSharp.ID, MR.CSharp.IE
        {
            internal unsafe G(IG._Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

            // Upcasts:
            public static unsafe implicit operator MR.CSharp.ConstA(G self) {MR.CSharp.ConstA ret = new(self._GetUnderlying_MR_CSharp_A(), is_owning: false); ret._KeepAlive(self); return ret;}
            public static unsafe implicit operator MR.CSharp.A(G self) {MR.CSharp.A ret = new(self._GetUnderlying_MR_CSharp_A(), is_owning: false); ret._KeepAlive(self); return ret;}
            public static unsafe implicit operator MR.CSharp.ConstD(G self) {MR.CSharp.ConstD ret = new(self._GetUnderlying_MR_CSharp_D(), is_owning: false); ret._KeepAlive(self); return ret;}
            public static unsafe implicit operator MR.CSharp.D(G self) {MR.CSharp.D ret = new(self._GetUnderlying_MR_CSharp_D(), is_owning: false); ret._KeepAlive(self); return ret;}
            public static unsafe implicit operator MR.CSharp.ConstE(G self) {MR.CSharp.ConstE ret = new(self._GetUnderlying_MR_CSharp_E(), is_owning: false); ret._KeepAlive(self); return ret;}
            public static unsafe implicit operator MR.CSharp.E(G self) {MR.CSharp.E ret = new(self._GetUnderlying_MR_CSharp_E(), is_owning: false); ret._KeepAlive(self); return ret;}

            // Downcasts:
            public static unsafe explicit operator G?(MR.CSharp.ConstA parent)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_DynamicDowncastTo_MR_CSharp_G", ExactSpelling = true)]
                extern static IG._Underlying *__MR_CSharp_A_DynamicDowncastTo_MR_CSharp_G(MR.CSharp.IConstA._Underlying *_this);
                var ptr = __MR_CSharp_A_DynamicDowncastTo_MR_CSharp_G(parent._GetUnderlying_MR_CSharp_A());
                if (ptr == null) return null;
                G ret = new(ptr, is_owning: false);
                ret._KeepAlive(parent);
                return ret;
            }
            public static unsafe explicit operator G?(MR.CSharp.A parent)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_DynamicDowncastTo_MR_CSharp_G", ExactSpelling = true)]
                extern static IG._Underlying *__MR_CSharp_A_DynamicDowncastTo_MR_CSharp_G(MR.CSharp.IA._Underlying *_this);
                var ptr = __MR_CSharp_A_DynamicDowncastTo_MR_CSharp_G(parent._GetUnderlying_MR_CSharp_A());
                if (ptr == null) return null;
                G ret = new(ptr, is_owning: false);
                ret._KeepAlive(parent);
                return ret;
            }

            /// Constructs an empty (default-constructed) instance.
            public unsafe G() : this(null, is_owning: true)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_G_DefaultConstruct", ExactSpelling = true)]
                extern static MR.CSharp.IConstG._Underlying *__MR_CSharp_G_DefaultConstruct();
                _UnderlyingPtr = __MR_CSharp_G_DefaultConstruct();
            }

            /// Generated from method `MR::CSharp::A::foo`.
            public void foo() => ((MR.CSharp.IA)this).foo();

            /// Generated from method `MR::CSharp::A::virtual_foo`.
            public virtual void virtual_foo() => ((MR.CSharp.IA)this).virtual_foo();

            /// Generated from method `MR::CSharp::A::refs`.
            public ref int refs(ref int x, ref int _2) => ref ((MR.CSharp.IA)this).refs(ref x, ref _2);

            /// Generated from method `MR::CSharp::D::d2`.
            public void d2() => ((MR.CSharp.ID)this).d2();

            /// Generated from method `MR::CSharp::E::e2`.
            public void e2() => ((MR.CSharp.IE)this).e2();
        }

        /// The interface for class `Trivial`, the const half.
        /// We never use interfaces as function parameters or return types, because they prevent implicit conversions, but can use them freely.
        public interface IConstTrivial
        {
            public struct _Underlying; // Represents the underlying C type.
            internal unsafe _Underlying *_GetUnderlying_MR_CSharp_Trivial(); // Returns the pointer to the underlying C object.
        }

        /// Generated from class `MR::CSharp::Trivial`.
        /// This is the const half of the class.
        public class ConstTrivial : MR.Misc.Object, System.IDisposable, IConstTrivial
        {
            protected unsafe IConstTrivial._Underlying *_UnderlyingPtr;
            public unsafe IConstTrivial._Underlying *_GetUnderlying_MR_CSharp_Trivial() => _UnderlyingPtr;

            internal unsafe ConstTrivial(IConstTrivial._Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

            protected virtual unsafe void Dispose(bool disposing)
            {
                if (_UnderlyingPtr == null || !_IsOwning)
                    return;
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_Trivial_Destroy", ExactSpelling = true)]
                extern static void __MR_CSharp_Trivial_Destroy(IConstTrivial._Underlying *_this);
                __MR_CSharp_Trivial_Destroy(_GetUnderlying_MR_CSharp_Trivial());
                _UnderlyingPtr = null;
            }
            public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
            ~ConstTrivial() {Dispose(false);}

            /// Constructs an empty (default-constructed) instance.
            public unsafe ConstTrivial() : this(null, is_owning: true)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_Trivial_DefaultConstruct", ExactSpelling = true)]
                extern static MR.CSharp.IConstTrivial._Underlying *__MR_CSharp_Trivial_DefaultConstruct();
                _UnderlyingPtr = __MR_CSharp_Trivial_DefaultConstruct();
            }
        }

        /// The interface for class `Trivial`, the non-const half.
        /// We never use interfaces as function parameters or return types, because they prevent implicit conversions, but can use them freely.
        public interface ITrivial : MR.CSharp.IConstTrivial
        {
        }

        /// Generated from class `MR::CSharp::Trivial`.
        /// This is the non-const half of the class.
        public class Trivial : MR.CSharp.ConstTrivial, ITrivial
        {
            internal unsafe Trivial(ITrivial._Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

            /// Constructs an empty (default-constructed) instance.
            public unsafe Trivial() : this(null, is_owning: true)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_Trivial_DefaultConstruct", ExactSpelling = true)]
                extern static MR.CSharp.IConstTrivial._Underlying *__MR_CSharp_Trivial_DefaultConstruct();
                _UnderlyingPtr = __MR_CSharp_Trivial_DefaultConstruct();
            }
        }

        /// Generated from function `MR::CSharp::foo`.
        public static void foo()
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_foo", ExactSpelling = true)]
            extern static void __MR_CSharp_foo();
            __MR_CSharp_foo();
        }

        /// Generated from function `MR::CSharp::test_int`.
        /// Parameter `b` defaults to `42`.
        public static unsafe int test_int(int a, int? b = null)
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_int", ExactSpelling = true)]
            extern static int __MR_CSharp_test_int(int a, int *b);
            int __deref_b = b.GetValueOrDefault();
            return __MR_CSharp_test_int(a, b.HasValue ? &__deref_b : null);
        }

        /// Generated from function `MR::CSharp::test_bool`.
        /// Parameter `b` defaults to `true`.
        public static unsafe bool test_bool(bool a, bool? b = null)
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_bool", ExactSpelling = true)]
            extern static byte __MR_CSharp_test_bool(byte a, byte *b);
            byte __deref_b = b.GetValueOrDefault() ? (byte)1 : (byte)0;
            return __MR_CSharp_test_bool(a ? (byte)1 : (byte)0, b.HasValue ? &__deref_b : null) != 0;
        }

        /// Generated from function `MR::CSharp::test_bool_ref`.
        /// Parameter `b` defaults to `default_bool`.
        public static unsafe void test_bool_ref(ref bool a, MR.Misc.InOut<bool>? b = null)
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
        public static unsafe int test_bool_ref2(ref bool a, MR.Misc.InOut<bool>? b = null)
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
        public static unsafe ref bool get_bool_ref()
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_get_bool_ref", ExactSpelling = true)]
            extern static bool *__MR_CSharp_get_bool_ref();
            return ref *__MR_CSharp_get_bool_ref();
        }

        /// Generated from function `MR::CSharp::print_bool_ref`.
        public static void print_bool_ref()
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_print_bool_ref", ExactSpelling = true)]
            extern static void __MR_CSharp_print_bool_ref();
            __MR_CSharp_print_bool_ref();
        }

        /// Generated from function `MR::CSharp::test_bool_cref`.
        /// Parameter `_2` defaults to `default_bool`.
        public static unsafe bool test_bool_cref(bool _1, bool? _2 = null)
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_bool_cref", ExactSpelling = true)]
            extern static bool *__MR_CSharp_test_bool_cref(bool *_1, bool *_2);
            bool __deref__2 = _2.GetValueOrDefault();
            return *__MR_CSharp_test_bool_cref(&_1, _2.HasValue ? &__deref__2 : null);
        }

        /// Generated from function `MR::CSharp::test_int_ref`.
        /// Parameter `b` defaults to `default_int`.
        public static unsafe ref int test_int_ref(ref int a, MR.Misc.InOut<int>? b = null)
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
        public static unsafe int test_int_cref(int a, int? b = null)
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_int_cref", ExactSpelling = true)]
            extern static int *__MR_CSharp_test_int_cref(int *a, int *b);
            int __deref_b = b.GetValueOrDefault();
            return *__MR_CSharp_test_int_cref(&a, b.HasValue ? &__deref_b : null);
        }

        /// Generated from function `MR::CSharp::test_int_ptr`.
        /// Parameter `c` defaults to `&default_int`.
        public static unsafe MR.Misc.Ref<int>? test_int_ptr(MR.Misc.InOut<int>? a, MR.Misc.InOut<int>? b = null, MR.Misc.InOutOpt<int>? c = null)
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
            return __ret != null ? new MR.Misc.Ref<int>(__ret) : null;
        }

        /// Generated from function `MR::CSharp::test_int_cptr`.
        /// Parameter `c` defaults to `&default_int`.
        public static unsafe int? test_int_cptr(int? a, int? b = null, MR.Misc.InOpt<int>? c = null)
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
        public static unsafe MR.CSharp.E1 test_enum(MR.CSharp.E1 a, MR.CSharp.E1? b = null)
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_enum", ExactSpelling = true)]
            extern static MR.CSharp.E1 __MR_CSharp_test_enum(MR.CSharp.E1 a, MR.CSharp.E1 *b);
            MR.CSharp.E1 __deref_b = b.GetValueOrDefault();
            return __MR_CSharp_test_enum(a, b.HasValue ? &__deref_b : null);
        }

        /// Generated from function `MR::CSharp::test_enum_ref`.
        /// Parameter `b` defaults to `default_e1`.
        public static unsafe ref MR.CSharp.E1 test_enum_ref(ref MR.CSharp.E1 a, MR.Misc.InOut<MR.CSharp.E1>? b = null)
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_enum_ref", ExactSpelling = true)]
            extern static MR.CSharp.E1 *__MR_CSharp_test_enum_ref(MR.CSharp.E1 *a, MR.CSharp.E1 *b);
            fixed (MR.CSharp.E1 *__ptr_a = &a) {
                MR.CSharp.E1 __value_b = b != null ? b.Value : default(MR.CSharp.E1);
                var __ret = __MR_CSharp_test_enum_ref(__ptr_a, b != null ? &__value_b : null);
                if (b != null) b.Value = __value_b;
                return ref *__ret;
            } // fixed __ptr_a
        }

        /// Generated from function `MR::CSharp::test_enum_cref`.
        /// Parameter `b` defaults to `default_e1`.
        public static unsafe MR.CSharp.E1 test_enum_cref(MR.CSharp.E1 a, MR.CSharp.E1? b = null)
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_enum_cref", ExactSpelling = true)]
            extern static MR.CSharp.E1 *__MR_CSharp_test_enum_cref(MR.CSharp.E1 *a, MR.CSharp.E1 *b);
            MR.CSharp.E1 __deref_b = b.GetValueOrDefault();
            return *__MR_CSharp_test_enum_cref(&a, b.HasValue ? &__deref_b : null);
        }

        /// Generated from function `MR::CSharp::test_enum_ptr`.
        /// Parameter `c` defaults to `&default_e1`.
        public static unsafe MR.Misc.Ref<MR.CSharp.E1>? test_enum_ptr(MR.Misc.InOut<MR.CSharp.E1>? a, MR.Misc.InOut<MR.CSharp.E1>? b = null, MR.Misc.InOutOpt<MR.CSharp.E1>? c = null)
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_enum_ptr", ExactSpelling = true)]
            extern static MR.CSharp.E1 *__MR_CSharp_test_enum_ptr(MR.CSharp.E1 *a, MR.CSharp.E1 *b, MR.CSharp.E1 **c);
            MR.CSharp.E1 __value_a = a != null ? a.Value : default(MR.CSharp.E1);
            MR.CSharp.E1 __value_b = b != null ? b.Value : default(MR.CSharp.E1);
            MR.CSharp.E1 __value_c = c != null && c.Opt != null ? c.Opt.Value : default(MR.CSharp.E1);
            MR.CSharp.E1 *__valueptr_c = c != null && c.Opt != null ? &__value_c : null;
            var __ret = __MR_CSharp_test_enum_ptr(a != null ? &__value_a : null, b != null ? &__value_b : null, c != null ? &__valueptr_c : null);
            if (c != null && c.Opt != null) c.Opt.Value = __value_c;
            if (b != null) b.Value = __value_b;
            if (a != null) a.Value = __value_a;
            return __ret != null ? new MR.Misc.Ref<MR.CSharp.E1>(__ret) : null;
        }

        /// Generated from function `MR::CSharp::test_enum_cptr`.
        /// Parameter `c` defaults to `&default_e1`.
        public static unsafe MR.CSharp.E1? test_enum_cptr(MR.CSharp.E1? a, MR.CSharp.E1? b = null, MR.Misc.InOpt<MR.CSharp.E1>? c = null)
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_enum_cptr", ExactSpelling = true)]
            extern static MR.CSharp.E1 *__MR_CSharp_test_enum_cptr(MR.CSharp.E1 *a, MR.CSharp.E1 *b, MR.CSharp.E1 **c);
            MR.CSharp.E1 __deref_a = a.GetValueOrDefault();
            MR.CSharp.E1 __deref_b = b.GetValueOrDefault();
            MR.CSharp.E1 __value_c = c != null && c.Opt != null ? c.Opt.Value : default(MR.CSharp.E1);
            MR.CSharp.E1 *__valueptr_c = c != null && c.Opt != null ? &__value_c : null;
            var __ret = __MR_CSharp_test_enum_cptr(a.HasValue ? &__deref_a : null, b.HasValue ? &__deref_b : null, c != null ? &__valueptr_c : null);
            return __ret != null ? *__ret : null;
        }

        /// Generated from function `MR::CSharp::test_bool_enum`.
        /// Parameter `b` defaults to `E2::b`.
        public static unsafe MR.CSharp.E2 test_bool_enum(MR.CSharp.E2 a, MR.CSharp.E2? b = null)
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_bool_enum", ExactSpelling = true)]
            extern static MR.CSharp.E2 __MR_CSharp_test_bool_enum(MR.CSharp.E2 a, MR.CSharp.E2 *b);
            if ((byte)a > 1) a = (MR.CSharp.E2)1;
            MR.CSharp.E2 __deref_b = b.GetValueOrDefault();
            if ((byte)__deref_b > 1) __deref_b = (MR.CSharp.E2)1;
            return __MR_CSharp_test_bool_enum(a, b.HasValue ? &__deref_b : null);
        }

        /// Generated from function `MR::CSharp::test_bool_enum_ref`.
        /// Parameter `b` defaults to `default_e2`.
        public static unsafe ref MR.CSharp.E2 test_bool_enum_ref(ref MR.CSharp.E2 a, MR.Misc.InOut<MR.CSharp.E2>? b = null)
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_bool_enum_ref", ExactSpelling = true)]
            extern static MR.CSharp.E2 *__MR_CSharp_test_bool_enum_ref(MR.CSharp.E2 *a, MR.CSharp.E2 *b);
            fixed (MR.CSharp.E2 *__ptr_a = &a) {
                if ((byte)a > 1) a = (MR.CSharp.E2)1;
                MR.CSharp.E2 __value_b = b != null ? b.Value : default(MR.CSharp.E2);
                if ((byte)__value_b > 1) __value_b = (MR.CSharp.E2)1;
                var __ret = __MR_CSharp_test_bool_enum_ref(__ptr_a, b != null ? &__value_b : null);
                if (b != null) b.Value = __value_b;
                return ref *__ret;
            } // fixed __ptr_a
        }

        /// Generated from function `MR::CSharp::test_bool_enum_cref`.
        /// Parameter `b` defaults to `default_e2`.
        public static unsafe MR.CSharp.E2 test_bool_enum_cref(MR.CSharp.E2 a, MR.CSharp.E2? b = null)
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_bool_enum_cref", ExactSpelling = true)]
            extern static MR.CSharp.E2 *__MR_CSharp_test_bool_enum_cref(MR.CSharp.E2 *a, MR.CSharp.E2 *b);
            if ((byte)a > 1) a = (MR.CSharp.E2)1;
            MR.CSharp.E2 __deref_b = b.GetValueOrDefault();
            if ((byte)__deref_b > 1) __deref_b = (MR.CSharp.E2)1;
            return *__MR_CSharp_test_bool_enum_cref(&a, b.HasValue ? &__deref_b : null);
        }

        /// Generated from function `MR::CSharp::test_bool_enum_ptr`.
        /// Parameter `c` defaults to `&default_e2`.
        public static unsafe MR.Misc.Ref<MR.CSharp.E2>? test_bool_enum_ptr(MR.Misc.InOut<MR.CSharp.E2>? a, MR.Misc.InOut<MR.CSharp.E2>? b = null, MR.Misc.InOutOpt<MR.CSharp.E2>? c = null)
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_bool_enum_ptr", ExactSpelling = true)]
            extern static MR.CSharp.E2 *__MR_CSharp_test_bool_enum_ptr(MR.CSharp.E2 *a, MR.CSharp.E2 *b, MR.CSharp.E2 **c);
            MR.CSharp.E2 __value_a = a != null ? a.Value : default(MR.CSharp.E2);
            if ((byte)__value_a > 1) __value_a = (MR.CSharp.E2)1;
            MR.CSharp.E2 __value_b = b != null ? b.Value : default(MR.CSharp.E2);
            if ((byte)__value_b > 1) __value_b = (MR.CSharp.E2)1;
            MR.CSharp.E2 __value_c = c != null && c.Opt != null ? c.Opt.Value : default(MR.CSharp.E2);
            MR.CSharp.E2 *__valueptr_c = c != null && c.Opt != null ? &__value_c : null;
            if ((byte)__value_c > 1) __value_c = (MR.CSharp.E2)1;
            var __ret = __MR_CSharp_test_bool_enum_ptr(a != null ? &__value_a : null, b != null ? &__value_b : null, c != null ? &__valueptr_c : null);
            if (c != null && c.Opt != null) c.Opt.Value = __value_c;
            if (b != null) b.Value = __value_b;
            if (a != null) a.Value = __value_a;
            return __ret != null ? new MR.Misc.Ref<MR.CSharp.E2>(__ret) : null;
        }

        /// Generated from function `MR::CSharp::test_bool_enum_cptr`.
        /// Parameter `c` defaults to `&default_e2`.
        public static unsafe MR.CSharp.E2? test_bool_enum_cptr(MR.CSharp.E2? a, MR.CSharp.E2? b = null, MR.Misc.InOpt<MR.CSharp.E2>? c = null)
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_bool_enum_cptr", ExactSpelling = true)]
            extern static MR.CSharp.E2 *__MR_CSharp_test_bool_enum_cptr(MR.CSharp.E2 *a, MR.CSharp.E2 *b, MR.CSharp.E2 **c);
            MR.CSharp.E2 __deref_a = a.GetValueOrDefault();
            if ((byte)__deref_a > 1) __deref_a = (MR.CSharp.E2)1;
            MR.CSharp.E2 __deref_b = b.GetValueOrDefault();
            if ((byte)__deref_b > 1) __deref_b = (MR.CSharp.E2)1;
            MR.CSharp.E2 __value_c = c != null && c.Opt != null ? c.Opt.Value : default(MR.CSharp.E2);
            MR.CSharp.E2 *__valueptr_c = c != null && c.Opt != null ? &__value_c : null;
            if ((byte)__value_c > 1) __value_c = (MR.CSharp.E2)1;
            var __ret = __MR_CSharp_test_bool_enum_cptr(a.HasValue ? &__deref_a : null, b.HasValue ? &__deref_b : null, c != null ? &__valueptr_c : null);
            return __ret != null ? *__ret : null;
        }

        /// Generated from function `MR::CSharp::test_class_trivial`.
        /// Parameter `b` defaults to `{}`.
        public static unsafe MR.CSharp.Trivial test_class_trivial(MR.CSharp.Trivial a, MR.CSharp.Trivial? b = null)
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_class_trivial", ExactSpelling = true)]
            extern static MR.CSharp.ITrivial._Underlying *__MR_CSharp_test_class_trivial(MR.CSharp.ITrivial._Underlying *a, MR.CSharp.ITrivial._Underlying *b);
            return new(__MR_CSharp_test_class_trivial(a._GetUnderlying_MR_CSharp_Trivial(), b != null ? b._GetUnderlying_MR_CSharp_Trivial() : null), is_owning: true);
        }
    }
}
