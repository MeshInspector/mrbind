public static partial class MR
{
    public static partial class CS
    {
        public static partial class AbstractClasses
        {
            /// Generated from class `MR::AbstractClasses::A`.
            /// This is the const half of the class.
            public class Const_A : MR.CS.Misc.Object<Const_A>
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_A(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}
            }

            /// Generated from class `MR::AbstractClasses::A`.
            /// This is the non-const half of the class.
            public class A : Const_A
            {
                internal unsafe A(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Generated from method `MR::AbstractClasses::A::foo`.
                public unsafe void Foo()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_AbstractClasses_A_foo", ExactSpelling = true)]
                    extern static void __MR_AbstractClasses_A_foo(_Underlying *_this);
                    __MR_AbstractClasses_A_foo(_UnderlyingPtr);
                }
            }

            /// This is used for optional parameters of class `A` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_A`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `A`/`Const_A` directly.
            public class _InOptMut_A
            {
                public A? Opt;

                public _InOptMut_A() {}
                public _InOptMut_A(A value) {Opt = value;}
                public static implicit operator _InOptMut_A(A value) {return new(value);}
            }

            /// This is used for optional parameters of class `A` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_A`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `A`/`Const_A` to pass it to the function.
            public class _InOptConst_A
            {
                public Const_A? Opt;

                public _InOptConst_A() {}
                public _InOptConst_A(Const_A value) {Opt = value;}
                public static implicit operator _InOptConst_A(Const_A value) {return new(value);}
            }

            /// Generated from class `MR::AbstractClasses::B`.
            /// Derived classes:
            ///   Direct: (non-virtual)
            ///     `MR::AbstractClasses::C`
            /// This is the const half of the class.
            public class Const_B : MR.CS.Misc.Object<Const_B>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_AbstractClasses_B_Destroy", ExactSpelling = true)]
                    extern static void __MR_AbstractClasses_B_Destroy(_Underlying *_this);
                    __MR_AbstractClasses_B_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_B() {Dispose(false);}

                internal unsafe Const_B(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}
            }

            /// Generated from class `MR::AbstractClasses::B`.
            /// Derived classes:
            ///   Direct: (non-virtual)
            ///     `MR::AbstractClasses::C`
            /// This is the non-const half of the class.
            public class B : Const_B
            {
                internal unsafe B(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Generated from method `MR::AbstractClasses::B::foo`.
                public unsafe void Foo()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_AbstractClasses_B_foo", ExactSpelling = true)]
                    extern static void __MR_AbstractClasses_B_foo(_Underlying *_this);
                    __MR_AbstractClasses_B_foo(_UnderlyingPtr);
                }
            }

            /// This is used for optional parameters of class `B` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_B`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `B`/`Const_B` directly.
            public class _InOptMut_B
            {
                public B? Opt;

                public _InOptMut_B() {}
                public _InOptMut_B(B value) {Opt = value;}
                public static implicit operator _InOptMut_B(B value) {return new(value);}
            }

            /// This is used for optional parameters of class `B` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_B`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `B`/`Const_B` to pass it to the function.
            public class _InOptConst_B
            {
                public Const_B? Opt;

                public _InOptConst_B() {}
                public _InOptConst_B(Const_B value) {Opt = value;}
                public static implicit operator _InOptConst_B(Const_B value) {return new(value);}
            }

            /// Generated from class `MR::AbstractClasses::C`.
            /// Base classes:
            ///   Direct: (non-virtual)
            ///     `MR::AbstractClasses::B`
            /// This is the const half of the class.
            public class Const_C : MR.CS.Misc.Object<Const_C>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_AbstractClasses_C_Destroy", ExactSpelling = true)]
                    extern static void __MR_AbstractClasses_C_Destroy(_Underlying *_this);
                    __MR_AbstractClasses_C_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_C() {Dispose(false);}

                // Upcasts:
                public static unsafe implicit operator MR.CS.AbstractClasses.Const_B(Const_C self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_AbstractClasses_C_UpcastTo_MR_AbstractClasses_B", ExactSpelling = true)]
                    extern static MR.CS.AbstractClasses.Const_B._Underlying *__MR_AbstractClasses_C_UpcastTo_MR_AbstractClasses_B(_Underlying *_this);
                    MR.CS.AbstractClasses.Const_B ret = new(__MR_AbstractClasses_C_UpcastTo_MR_AbstractClasses_B(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAliveEnclosingObject = self;
                    return ret;
                }

                // Downcasts:
                public static unsafe explicit operator Const_C?(MR.CS.AbstractClasses.Const_B parent)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_AbstractClasses_B_DynamicDowncastTo_MR_AbstractClasses_C", ExactSpelling = true)]
                    extern static _Underlying *__MR_AbstractClasses_B_DynamicDowncastTo_MR_AbstractClasses_C(MR.CS.AbstractClasses.Const_B._Underlying *_this);
                    var ptr = __MR_AbstractClasses_B_DynamicDowncastTo_MR_AbstractClasses_C(parent._UnderlyingPtr);
                    if (ptr is null) return null;
                    Const_C ret = new(ptr, is_owning: false);
                    ret._KeepAliveEnclosingObject = parent;
                    return ret;
                }

                internal unsafe Const_C(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}
            }

            /// Generated from class `MR::AbstractClasses::C`.
            /// Base classes:
            ///   Direct: (non-virtual)
            ///     `MR::AbstractClasses::B`
            /// This is the non-const half of the class.
            public class C : Const_C
            {
                // Upcasts:
                public static unsafe implicit operator MR.CS.AbstractClasses.B(C self)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_AbstractClasses_C_UpcastTo_MR_AbstractClasses_B", ExactSpelling = true)]
                    extern static MR.CS.AbstractClasses.B._Underlying *__MR_AbstractClasses_C_UpcastTo_MR_AbstractClasses_B(_Underlying *_this);
                    MR.CS.AbstractClasses.B ret = new(__MR_AbstractClasses_C_UpcastTo_MR_AbstractClasses_B(self._UnderlyingPtr), is_owning: false);
                    ret._KeepAliveEnclosingObject = self;
                    return ret;
                }

                // Downcasts:
                public static unsafe explicit operator C?(MR.CS.AbstractClasses.B parent)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_AbstractClasses_B_DynamicDowncastTo_MR_AbstractClasses_C", ExactSpelling = true)]
                    extern static _Underlying *__MR_AbstractClasses_B_DynamicDowncastTo_MR_AbstractClasses_C(MR.CS.AbstractClasses.B._Underlying *_this);
                    var ptr = __MR_AbstractClasses_B_DynamicDowncastTo_MR_AbstractClasses_C(parent._UnderlyingPtr);
                    if (ptr is null) return null;
                    C ret = new(ptr, is_owning: false);
                    ret._KeepAliveEnclosingObject = parent;
                    return ret;
                }

                internal unsafe C(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Generated from method `MR::AbstractClasses::C::foo`.
                public unsafe void Foo()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_AbstractClasses_C_foo", ExactSpelling = true)]
                    extern static void __MR_AbstractClasses_C_foo(_Underlying *_this);
                    __MR_AbstractClasses_C_foo(_UnderlyingPtr);
                }
            }

            /// This is used for optional parameters of class `C` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_C`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `C`/`Const_C` directly.
            public class _InOptMut_C
            {
                public C? Opt;

                public _InOptMut_C() {}
                public _InOptMut_C(C value) {Opt = value;}
                public static implicit operator _InOptMut_C(C value) {return new(value);}
            }

            /// This is used for optional parameters of class `C` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_C`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `C`/`Const_C` to pass it to the function.
            public class _InOptConst_C
            {
                public Const_C? Opt;

                public _InOptConst_C() {}
                public _InOptConst_C(Const_C value) {Opt = value;}
                public static implicit operator _InOptConst_C(Const_C value) {return new(value);}
            }
        }
    }
}
