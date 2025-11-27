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
                    if (_UnderlyingPtr is null || !_IsOwningVal)
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

                /// Generated from constructor `MR::CSharp::A::A`.
                public unsafe ConstA(MR.CS.CSharp.ByValueA _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstA._Underlying *__MR_CSharp_A_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.A._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_A_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
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

                /// Generated from constructor `MR::CSharp::A::A`.
                public unsafe A(MR.CS.CSharp.ByValueA _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstA._Underlying *__MR_CSharp_A_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.A._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_A_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// Generated from method `MR::CSharp::A::operator=`.
                public unsafe MR.CS.CSharp.A Assign(MR.CS.CSharp.ByValueA _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.A._Underlying *__MR_CSharp_A_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.A._Underlying *_other);
                    return new(__MR_CSharp_A_AssignFromAnother(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null), is_owning: false);
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

            /// This is used as a function parameter when the underlying function receives `A` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `A`/`ConstA` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter is nullable and has a default argument.
            public readonly struct ByValueA
            {
                internal readonly ConstA? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public ByValueA() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public ByValueA(ConstA new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public ByValueA(MR.CS.Misc._Moved<A> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator ByValueA(ConstA arg) {return new(arg);}
                public static implicit operator ByValueA(MR.CS.Misc._Moved<A> arg) {return new(arg);}
            }

            /// This is used for optional parameters of class `A` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `A`/`ConstA` to pass it to the function.
            public class InOptConstA
            {
                public ConstA? Opt;

                public InOptConstA() {}
                public InOptConstA(ConstA NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstA(ConstA NewOpt) {return new InOptConstA(NewOpt);}
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
                    if (_UnderlyingPtr is null || !_IsOwningVal)
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
                    if (ptr is null) return null;
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
                public unsafe ConstB(MR.CS.CSharp.ByValueB _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_B_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstB._Underlying *__MR_CSharp_B_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.B._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_B_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
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
                    if (ptr is null) return null;
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
                public unsafe B(MR.CS.CSharp.ByValueB _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_B_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstB._Underlying *__MR_CSharp_B_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.B._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_B_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// Generated from constructor `MR::CSharp::B::B`.
                public unsafe B(int a, int b) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_B_Construct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstB._Underlying *__MR_CSharp_B_Construct(int a, int b);
                    _UnderlyingPtr = __MR_CSharp_B_Construct(a, b);
                }

                /// Generated from method `MR::CSharp::B::operator=`.
                public unsafe MR.CS.CSharp.B Assign(MR.CS.CSharp.ByValueB _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_B_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.B._Underlying *__MR_CSharp_B_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.B._Underlying *_other);
                    return new(__MR_CSharp_B_AssignFromAnother(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null), is_owning: false);
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

            /// This is used as a function parameter when the underlying function receives `B` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `B`/`ConstB` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter is nullable and has a default argument.
            public readonly struct ByValueB
            {
                internal readonly ConstB? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public ByValueB() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public ByValueB(ConstB new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public ByValueB(MR.CS.Misc._Moved<B> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator ByValueB(ConstB arg) {return new(arg);}
                public static implicit operator ByValueB(MR.CS.Misc._Moved<B> arg) {return new(arg);}
            }

            /// This is used for optional parameters of class `B` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `B`/`ConstB` to pass it to the function.
            public class InOptConstB
            {
                public ConstB? Opt;

                public InOptConstB() {}
                public InOptConstB(ConstB NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstB(ConstB NewOpt) {return new InOptConstB(NewOpt);}
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
                    if (_UnderlyingPtr is null || !_IsOwningVal)
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
                    if (ptr is null) return null;
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

                /// Generated from constructor `MR::CSharp::C::C`.
                public unsafe ConstC(MR.CS.CSharp.ByValueC _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_C_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstC._Underlying *__MR_CSharp_C_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.C._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_C_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
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
                    if (ptr is null) return null;
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

                /// Generated from constructor `MR::CSharp::C::C`.
                public unsafe C(MR.CS.CSharp.ByValueC _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_C_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstC._Underlying *__MR_CSharp_C_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.C._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_C_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// Generated from method `MR::CSharp::C::operator=`.
                public unsafe MR.CS.CSharp.C Assign(MR.CS.CSharp.ByValueC _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_C_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.C._Underlying *__MR_CSharp_C_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.C._Underlying *_other);
                    return new(__MR_CSharp_C_AssignFromAnother(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null), is_owning: false);
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

            /// This is used as a function parameter when the underlying function receives `C` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `C`/`ConstC` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter is nullable and has a default argument.
            public readonly struct ByValueC
            {
                internal readonly ConstC? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public ByValueC() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public ByValueC(ConstC new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public ByValueC(MR.CS.Misc._Moved<C> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator ByValueC(ConstC arg) {return new(arg);}
                public static implicit operator ByValueC(MR.CS.Misc._Moved<C> arg) {return new(arg);}
            }

            /// This is used for optional parameters of class `C` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `C`/`ConstC` to pass it to the function.
            public class InOptConstC
            {
                public ConstC? Opt;

                public InOptConstC() {}
                public InOptConstC(ConstC NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstC(ConstC NewOpt) {return new InOptConstC(NewOpt);}
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
                    if (_UnderlyingPtr is null || !_IsOwningVal)
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

                /// Generated from constructor `MR::CSharp::D::D`.
                public unsafe ConstD(MR.CS.CSharp.ConstD _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_D_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstD._Underlying *__MR_CSharp_D_ConstructFromAnother(MR.CS.CSharp.D._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_D_ConstructFromAnother(_other._UnderlyingPtr);
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

                /// Generated from constructor `MR::CSharp::D::D`.
                public unsafe D(MR.CS.CSharp.ConstD _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_D_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstD._Underlying *__MR_CSharp_D_ConstructFromAnother(MR.CS.CSharp.D._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_D_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::D::operator=`.
                public unsafe MR.CS.CSharp.D Assign(MR.CS.CSharp.ConstD _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_D_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.D._Underlying *__MR_CSharp_D_AssignFromAnother(_Underlying *_this, MR.CS.CSharp.D._Underlying *_other);
                    return new(__MR_CSharp_D_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }

                /// Generated from method `MR::CSharp::D::d2`.
                public unsafe void d2()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_D_d2", ExactSpelling = true)]
                    extern static void __MR_CSharp_D_d2(_Underlying *_this);
                    __MR_CSharp_D_d2(_UnderlyingPtr);
                }
            }

            /// This is used for optional parameters of class `D` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `D`/`ConstD` to pass it to the function.
            public class InOptConstD
            {
                public ConstD? Opt;

                public InOptConstD() {}
                public InOptConstD(ConstD NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstD(ConstD NewOpt) {return new InOptConstD(NewOpt);}
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
                    if (_UnderlyingPtr is null || !_IsOwningVal)
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

                /// Generated from constructor `MR::CSharp::E::E`.
                public unsafe ConstE(MR.CS.CSharp.ConstE _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_E_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstE._Underlying *__MR_CSharp_E_ConstructFromAnother(MR.CS.CSharp.E._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_E_ConstructFromAnother(_other._UnderlyingPtr);
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

                /// Generated from constructor `MR::CSharp::E::E`.
                public unsafe E(MR.CS.CSharp.ConstE _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_E_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstE._Underlying *__MR_CSharp_E_ConstructFromAnother(MR.CS.CSharp.E._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_E_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::E::operator=`.
                public unsafe MR.CS.CSharp.E Assign(MR.CS.CSharp.ConstE _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_E_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.E._Underlying *__MR_CSharp_E_AssignFromAnother(_Underlying *_this, MR.CS.CSharp.E._Underlying *_other);
                    return new(__MR_CSharp_E_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }

                /// Generated from method `MR::CSharp::E::e2`.
                public unsafe void e2()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_E_e2", ExactSpelling = true)]
                    extern static void __MR_CSharp_E_e2(_Underlying *_this);
                    __MR_CSharp_E_e2(_UnderlyingPtr);
                }
            }

            /// This is used for optional parameters of class `E` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `E`/`ConstE` to pass it to the function.
            public class InOptConstE
            {
                public ConstE? Opt;

                public InOptConstE() {}
                public InOptConstE(ConstE NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstE(ConstE NewOpt) {return new InOptConstE(NewOpt);}
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
                    if (_UnderlyingPtr is null || !_IsOwningVal)
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
                    if (ptr is null) return null;
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

                /// Generated from constructor `MR::CSharp::F::F`.
                public unsafe ConstF(MR.CS.CSharp.ByValueF _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_F_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstF._Underlying *__MR_CSharp_F_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.F._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_F_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
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
                    if (ptr is null) return null;
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

                /// Generated from constructor `MR::CSharp::F::F`.
                public unsafe F(MR.CS.CSharp.ByValueF _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_F_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstF._Underlying *__MR_CSharp_F_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.F._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_F_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// Generated from method `MR::CSharp::F::operator=`.
                public unsafe MR.CS.CSharp.F Assign(MR.CS.CSharp.ByValueF _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_F_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.F._Underlying *__MR_CSharp_F_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.F._Underlying *_other);
                    return new(__MR_CSharp_F_AssignFromAnother(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null), is_owning: false);
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

            /// This is used as a function parameter when the underlying function receives `F` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `F`/`ConstF` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter is nullable and has a default argument.
            public readonly struct ByValueF
            {
                internal readonly ConstF? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public ByValueF() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public ByValueF(ConstF new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public ByValueF(MR.CS.Misc._Moved<F> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator ByValueF(ConstF arg) {return new(arg);}
                public static implicit operator ByValueF(MR.CS.Misc._Moved<F> arg) {return new(arg);}
            }

            /// This is used for optional parameters of class `F` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `F`/`ConstF` to pass it to the function.
            public class InOptConstF
            {
                public ConstF? Opt;

                public InOptConstF() {}
                public InOptConstF(ConstF NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstF(ConstF NewOpt) {return new InOptConstF(NewOpt);}
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
                    if (_UnderlyingPtr is null || !_IsOwningVal)
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
                    if (ptr is null) return null;
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

                /// Generated from constructor `MR::CSharp::G::G`.
                public unsafe ConstG(MR.CS.CSharp.ByValueG _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_G_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstG._Underlying *__MR_CSharp_G_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.G._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_G_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
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
                    if (ptr is null) return null;
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

                /// Generated from constructor `MR::CSharp::G::G`.
                public unsafe G(MR.CS.CSharp.ByValueG _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_G_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstG._Underlying *__MR_CSharp_G_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.G._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_G_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// Generated from method `MR::CSharp::G::operator=`.
                public unsafe MR.CS.CSharp.G Assign(MR.CS.CSharp.ByValueG _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_G_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.G._Underlying *__MR_CSharp_G_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.G._Underlying *_other);
                    return new(__MR_CSharp_G_AssignFromAnother(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null), is_owning: false);
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

            /// This is used as a function parameter when the underlying function receives `G` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `G`/`ConstG` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter is nullable and has a default argument.
            public readonly struct ByValueG
            {
                internal readonly ConstG? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public ByValueG() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public ByValueG(ConstG new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public ByValueG(MR.CS.Misc._Moved<G> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator ByValueG(ConstG arg) {return new(arg);}
                public static implicit operator ByValueG(MR.CS.Misc._Moved<G> arg) {return new(arg);}
            }

            /// This is used for optional parameters of class `G` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `G`/`ConstG` to pass it to the function.
            public class InOptConstG
            {
                public ConstG? Opt;

                public InOptConstG() {}
                public InOptConstG(ConstG NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstG(ConstG NewOpt) {return new InOptConstG(NewOpt);}
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
                    if (_UnderlyingPtr is null || !_IsOwningVal)
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

                /// Generated from constructor `MR::CSharp::Trivial::Trivial`.
                public unsafe ConstTrivial(MR.CS.CSharp.ConstTrivial _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_Trivial_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstTrivial._Underlying *__MR_CSharp_Trivial_ConstructFromAnother(MR.CS.CSharp.Trivial._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_Trivial_ConstructFromAnother(_other._UnderlyingPtr);
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

                /// Generated from constructor `MR::CSharp::Trivial::Trivial`.
                public unsafe Trivial(MR.CS.CSharp.ConstTrivial _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_Trivial_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstTrivial._Underlying *__MR_CSharp_Trivial_ConstructFromAnother(MR.CS.CSharp.Trivial._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_Trivial_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::Trivial::operator=`.
                public unsafe MR.CS.CSharp.Trivial Assign(MR.CS.CSharp.ConstTrivial _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_Trivial_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.Trivial._Underlying *__MR_CSharp_Trivial_AssignFromAnother(_Underlying *_this, MR.CS.CSharp.Trivial._Underlying *_other);
                    return new(__MR_CSharp_Trivial_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }
            }

            /// This is used for optional parameters of class `Trivial` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Trivial`/`ConstTrivial` to pass it to the function.
            public class InOptConstTrivial
            {
                public ConstTrivial? Opt;

                public InOptConstTrivial() {}
                public InOptConstTrivial(ConstTrivial NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstTrivial(ConstTrivial NewOpt) {return new InOptConstTrivial(NewOpt);}
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
                    if (_UnderlyingPtr is null || !_IsOwningVal)
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

                /// Generated from constructor `MR::CSharp::TrivialDerived::TrivialDerived`.
                public unsafe ConstTrivialDerived(MR.CS.CSharp.ConstTrivialDerived _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TrivialDerived_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstTrivialDerived._Underlying *__MR_CSharp_TrivialDerived_ConstructFromAnother(MR.CS.CSharp.TrivialDerived._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_TrivialDerived_ConstructFromAnother(_other._UnderlyingPtr);
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

                /// Generated from constructor `MR::CSharp::TrivialDerived::TrivialDerived`.
                public unsafe TrivialDerived(MR.CS.CSharp.ConstTrivialDerived _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TrivialDerived_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstTrivialDerived._Underlying *__MR_CSharp_TrivialDerived_ConstructFromAnother(MR.CS.CSharp.TrivialDerived._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_TrivialDerived_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TrivialDerived::operator=`.
                public unsafe MR.CS.CSharp.TrivialDerived Assign(MR.CS.CSharp.ConstTrivialDerived _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TrivialDerived_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.TrivialDerived._Underlying *__MR_CSharp_TrivialDerived_AssignFromAnother(_Underlying *_this, MR.CS.CSharp.TrivialDerived._Underlying *_other);
                    return new(__MR_CSharp_TrivialDerived_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }
            }

            /// This is used for optional parameters of class `TrivialDerived` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `TrivialDerived`/`ConstTrivialDerived` to pass it to the function.
            public class InOptConstTrivialDerived
            {
                public ConstTrivialDerived? Opt;

                public InOptConstTrivialDerived() {}
                public InOptConstTrivialDerived(ConstTrivialDerived NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstTrivialDerived(ConstTrivialDerived NewOpt) {return new InOptConstTrivialDerived(NewOpt);}
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
                    if (_UnderlyingPtr is null || !_IsOwningVal)
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

                /// Generated from constructor `MR::CSharp::NonTrivial::NonTrivial`.
                public unsafe ConstNonTrivial(MR.CS.CSharp.ByValueNonTrivial _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_NonTrivial_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstNonTrivial._Underlying *__MR_CSharp_NonTrivial_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.NonTrivial._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_NonTrivial_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
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

                /// Generated from constructor `MR::CSharp::NonTrivial::NonTrivial`.
                public unsafe NonTrivial(MR.CS.CSharp.ByValueNonTrivial _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_NonTrivial_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstNonTrivial._Underlying *__MR_CSharp_NonTrivial_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.NonTrivial._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_NonTrivial_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// Generated from method `MR::CSharp::NonTrivial::operator=`.
                public unsafe MR.CS.CSharp.NonTrivial Assign(MR.CS.CSharp.ByValueNonTrivial _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_NonTrivial_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.NonTrivial._Underlying *__MR_CSharp_NonTrivial_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.NonTrivial._Underlying *_other);
                    return new(__MR_CSharp_NonTrivial_AssignFromAnother(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null), is_owning: false);
                }
            }

            /// This is used as a function parameter when the underlying function receives `NonTrivial` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `NonTrivial`/`ConstNonTrivial` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter is nullable and has a default argument.
            public readonly struct ByValueNonTrivial
            {
                internal readonly ConstNonTrivial? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public ByValueNonTrivial() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public ByValueNonTrivial(ConstNonTrivial new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public ByValueNonTrivial(MR.CS.Misc._Moved<NonTrivial> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator ByValueNonTrivial(ConstNonTrivial arg) {return new(arg);}
                public static implicit operator ByValueNonTrivial(MR.CS.Misc._Moved<NonTrivial> arg) {return new(arg);}
            }

            /// This is used for optional parameters of class `NonTrivial` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `NonTrivial`/`ConstNonTrivial` to pass it to the function.
            public class InOptConstNonTrivial
            {
                public ConstNonTrivial? Opt;

                public InOptConstNonTrivial() {}
                public InOptConstNonTrivial(ConstNonTrivial NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstNonTrivial(ConstNonTrivial NewOpt) {return new InOptConstNonTrivial(NewOpt);}
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
                    if (_UnderlyingPtr is null || !_IsOwningVal)
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

                /// Generated from constructor `MR::CSharp::NonTrivialDerived::NonTrivialDerived`.
                public unsafe ConstNonTrivialDerived(MR.CS.CSharp.ByValueNonTrivialDerived _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_NonTrivialDerived_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstNonTrivialDerived._Underlying *__MR_CSharp_NonTrivialDerived_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.NonTrivialDerived._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_NonTrivialDerived_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
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

                /// Generated from constructor `MR::CSharp::NonTrivialDerived::NonTrivialDerived`.
                public unsafe NonTrivialDerived(MR.CS.CSharp.ByValueNonTrivialDerived _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_NonTrivialDerived_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstNonTrivialDerived._Underlying *__MR_CSharp_NonTrivialDerived_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.NonTrivialDerived._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_NonTrivialDerived_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// Generated from method `MR::CSharp::NonTrivialDerived::operator=`.
                public unsafe MR.CS.CSharp.NonTrivialDerived Assign(MR.CS.CSharp.ByValueNonTrivialDerived _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_NonTrivialDerived_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.NonTrivialDerived._Underlying *__MR_CSharp_NonTrivialDerived_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.NonTrivialDerived._Underlying *_other);
                    return new(__MR_CSharp_NonTrivialDerived_AssignFromAnother(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null), is_owning: false);
                }
            }

            /// This is used as a function parameter when the underlying function receives `NonTrivialDerived` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `NonTrivialDerived`/`ConstNonTrivialDerived` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter is nullable and has a default argument.
            public readonly struct ByValueNonTrivialDerived
            {
                internal readonly ConstNonTrivialDerived? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public ByValueNonTrivialDerived() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public ByValueNonTrivialDerived(ConstNonTrivialDerived new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public ByValueNonTrivialDerived(MR.CS.Misc._Moved<NonTrivialDerived> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator ByValueNonTrivialDerived(ConstNonTrivialDerived arg) {return new(arg);}
                public static implicit operator ByValueNonTrivialDerived(MR.CS.Misc._Moved<NonTrivialDerived> arg) {return new(arg);}
            }

            /// This is used for optional parameters of class `NonTrivialDerived` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `NonTrivialDerived`/`ConstNonTrivialDerived` to pass it to the function.
            public class InOptConstNonTrivialDerived
            {
                public ConstNonTrivialDerived? Opt;

                public InOptConstNonTrivialDerived() {}
                public InOptConstNonTrivialDerived(ConstNonTrivialDerived NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstNonTrivialDerived(ConstNonTrivialDerived NewOpt) {return new InOptConstNonTrivialDerived(NewOpt);}
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
                    System.Diagnostics.Trace.Assert(_UnderlyingSharedPtr is null);
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SA_Construct", ExactSpelling = true)]
                    extern static _UnderlyingShared *__MR_C_std_shared_ptr_MR_CSharp_SA_Construct(_Underlying *other);
                    _UnderlyingSharedPtr = __MR_C_std_shared_ptr_MR_CSharp_SA_Construct(ptr);
                }

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingSharedPtr is null || !_IsOwningVal)
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

                /// Generated from constructor `MR::CSharp::SA::SA`.
                public unsafe ConstSA(MR.CS.CSharp.ConstSA _other) : this(shared_ptr: null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_SA_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstSA._Underlying *__MR_CSharp_SA_ConstructFromAnother(MR.CS.CSharp.SA._Underlying *_other);
                    _LateMakeShared(__MR_CSharp_SA_ConstructFromAnother(_other._UnderlyingPtr));
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

                /// Generated from constructor `MR::CSharp::SA::SA`.
                public unsafe SA(MR.CS.CSharp.ConstSA _other) : this(shared_ptr: null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_SA_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstSA._Underlying *__MR_CSharp_SA_ConstructFromAnother(MR.CS.CSharp.SA._Underlying *_other);
                    _LateMakeShared(__MR_CSharp_SA_ConstructFromAnother(_other._UnderlyingPtr));
                }

                /// Generated from method `MR::CSharp::SA::operator=`.
                public unsafe MR.CS.CSharp.SA Assign(MR.CS.CSharp.ConstSA _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_SA_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.SA._Underlying *__MR_CSharp_SA_AssignFromAnother(_Underlying *_this, MR.CS.CSharp.SA._Underlying *_other);
                    return new(__MR_CSharp_SA_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }
            }

            /// This is used as a function parameter when the underlying function receives `SA` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `SA`/`ConstSA` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter is nullable and has a default argument.
            public readonly struct ByValueSA
            {
                internal readonly ConstSA? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public ByValueSA() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public ByValueSA(ConstSA new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public ByValueSA(MR.CS.Misc._Moved<SA> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator ByValueSA(ConstSA arg) {return new(arg);}
                public static implicit operator ByValueSA(MR.CS.Misc._Moved<SA> arg) {return new(arg);}
            }

            /// This is used for optional parameters of class `SA` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `SA`/`ConstSA` to pass it to the function.
            public class InOptConstSA
            {
                public ConstSA? Opt;

                public InOptConstSA() {}
                public InOptConstSA(ConstSA NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstSA(ConstSA NewOpt) {return new InOptConstSA(NewOpt);}
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
                    System.Diagnostics.Trace.Assert(_UnderlyingSharedPtr is null);
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SB_Construct", ExactSpelling = true)]
                    extern static _UnderlyingShared *__MR_C_std_shared_ptr_MR_CSharp_SB_Construct(_Underlying *other);
                    _UnderlyingSharedPtr = __MR_C_std_shared_ptr_MR_CSharp_SB_Construct(ptr);
                }

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingSharedPtr is null || !_IsOwningVal)
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

                /// Generated from constructor `MR::CSharp::SB::SB`.
                public unsafe ConstSB(MR.CS.CSharp.ByValueSB _other) : this(shared_ptr: null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_SB_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstSB._Underlying *__MR_CSharp_SB_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.SB._Underlying *_other);
                    _LateMakeShared(__MR_CSharp_SB_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null));
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

                /// Generated from constructor `MR::CSharp::SB::SB`.
                public unsafe SB(MR.CS.CSharp.ByValueSB _other) : this(shared_ptr: null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_SB_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstSB._Underlying *__MR_CSharp_SB_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.SB._Underlying *_other);
                    _LateMakeShared(__MR_CSharp_SB_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null));
                }

                /// Generated from method `MR::CSharp::SB::operator=`.
                public unsafe MR.CS.CSharp.SB Assign(MR.CS.CSharp.ByValueSB _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_SB_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.SB._Underlying *__MR_CSharp_SB_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.SB._Underlying *_other);
                    return new(__MR_CSharp_SB_AssignFromAnother(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null), is_owning: false);
                }
            }

            /// This is used as a function parameter when the underlying function receives `SB` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `SB`/`ConstSB` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter is nullable and has a default argument.
            public readonly struct ByValueSB
            {
                internal readonly ConstSB? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public ByValueSB() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public ByValueSB(ConstSB new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public ByValueSB(MR.CS.Misc._Moved<SB> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator ByValueSB(ConstSB arg) {return new(arg);}
                public static implicit operator ByValueSB(MR.CS.Misc._Moved<SB> arg) {return new(arg);}
            }

            /// This is used for optional parameters of class `SB` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `SB`/`ConstSB` to pass it to the function.
            public class InOptConstSB
            {
                public ConstSB? Opt;

                public InOptConstSB() {}
                public InOptConstSB(ConstSB NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstSB(ConstSB NewOpt) {return new InOptConstSB(NewOpt);}
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
                    System.Diagnostics.Trace.Assert(_UnderlyingSharedPtr is null);
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CSharp_SC_Construct", ExactSpelling = true)]
                    extern static _UnderlyingShared *__MR_C_std_shared_ptr_MR_CSharp_SC_Construct(_Underlying *other);
                    _UnderlyingSharedPtr = __MR_C_std_shared_ptr_MR_CSharp_SC_Construct(ptr);
                }

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingSharedPtr is null || !_IsOwningVal)
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

                /// Generated from constructor `MR::CSharp::SC::SC`.
                public unsafe ConstSC(MR.CS.CSharp.ByValueSC _other) : this(shared_ptr: null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_SC_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstSC._Underlying *__MR_CSharp_SC_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.SC._Underlying *_other);
                    _LateMakeShared(__MR_CSharp_SC_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null));
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

                /// Generated from constructor `MR::CSharp::SC::SC`.
                public unsafe SC(MR.CS.CSharp.ByValueSC _other) : this(shared_ptr: null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_SC_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstSC._Underlying *__MR_CSharp_SC_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.SC._Underlying *_other);
                    _LateMakeShared(__MR_CSharp_SC_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null));
                }

                /// Generated from method `MR::CSharp::SC::operator=`.
                public unsafe MR.CS.CSharp.SC Assign(MR.CS.CSharp.ByValueSC _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_SC_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.SC._Underlying *__MR_CSharp_SC_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.SC._Underlying *_other);
                    return new(__MR_CSharp_SC_AssignFromAnother(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null), is_owning: false);
                }
            }

            /// This is used as a function parameter when the underlying function receives `SC` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `SC`/`ConstSC` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter is nullable and has a default argument.
            public readonly struct ByValueSC
            {
                internal readonly ConstSC? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public ByValueSC() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public ByValueSC(ConstSC new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public ByValueSC(MR.CS.Misc._Moved<SC> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator ByValueSC(ConstSC arg) {return new(arg);}
                public static implicit operator ByValueSC(MR.CS.Misc._Moved<SC> arg) {return new(arg);}
            }

            /// This is used for optional parameters of class `SC` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `SC`/`ConstSC` to pass it to the function.
            public class InOptConstSC
            {
                public ConstSC? Opt;

                public InOptConstSC() {}
                public InOptConstSC(ConstSC NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstSC(ConstSC NewOpt) {return new InOptConstSC(NewOpt);}
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
                    if (_UnderlyingPtr is null || !_IsOwningVal)
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

                /// Generated from constructor `MR::CSharp::Outer::Outer`.
                public unsafe ConstOuter(MR.CS.CSharp.ConstOuter _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_Outer_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstOuter._Underlying *__MR_CSharp_Outer_ConstructFromAnother(MR.CS.CSharp.Outer._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_Outer_ConstructFromAnother(_other._UnderlyingPtr);
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
                        if (_UnderlyingPtr is null || !_IsOwningVal)
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

                    /// Generated from constructor `MR::CSharp::Outer::Inner::Inner`.
                    public unsafe ConstInner(MR.CS.CSharp.Outer.ConstInner _other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_Outer_Inner_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.CSharp.Outer.ConstInner._Underlying *__MR_CSharp_Outer_Inner_ConstructFromAnother(MR.CS.CSharp.Outer.Inner._Underlying *_other);
                        _UnderlyingPtr = __MR_CSharp_Outer_Inner_ConstructFromAnother(_other._UnderlyingPtr);
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

                    /// Generated from constructor `MR::CSharp::Outer::Inner::Inner`.
                    public unsafe Inner(MR.CS.CSharp.Outer.ConstInner _other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_Outer_Inner_ConstructFromAnother", ExactSpelling = true)]
                        extern static MR.CS.CSharp.Outer.ConstInner._Underlying *__MR_CSharp_Outer_Inner_ConstructFromAnother(MR.CS.CSharp.Outer.Inner._Underlying *_other);
                        _UnderlyingPtr = __MR_CSharp_Outer_Inner_ConstructFromAnother(_other._UnderlyingPtr);
                    }

                    /// Generated from method `MR::CSharp::Outer::Inner::operator=`.
                    public unsafe MR.CS.CSharp.Outer.Inner Assign(MR.CS.CSharp.Outer.ConstInner _other)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_Outer_Inner_AssignFromAnother", ExactSpelling = true)]
                        extern static MR.CS.CSharp.Outer.Inner._Underlying *__MR_CSharp_Outer_Inner_AssignFromAnother(_Underlying *_this, MR.CS.CSharp.Outer.Inner._Underlying *_other);
                        return new(__MR_CSharp_Outer_Inner_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                    }

                    /// Generated from method `MR::CSharp::Outer::Inner::bar`.
                    public unsafe void bar()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_Outer_Inner_bar", ExactSpelling = true)]
                        extern static void __MR_CSharp_Outer_Inner_bar(_Underlying *_this);
                        __MR_CSharp_Outer_Inner_bar(_UnderlyingPtr);
                    }
                }

                /// This is used for optional parameters of class `Inner` with default arguments.
                /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
                /// Usage:
                /// * Pass `null` to use the default argument.
                /// * Pass `new()` to pass no object.
                /// * Pass an instance of `Inner`/`ConstInner` to pass it to the function.
                public class InOptConstInner
                {
                    public ConstInner? Opt;

                    public InOptConstInner() {}
                    public InOptConstInner(ConstInner NewOpt) {Opt = NewOpt;}
                    public static implicit operator InOptConstInner(ConstInner NewOpt) {return new InOptConstInner(NewOpt);}
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

                /// Generated from constructor `MR::CSharp::Outer::Outer`.
                public unsafe Outer(MR.CS.CSharp.ConstOuter _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_Outer_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstOuter._Underlying *__MR_CSharp_Outer_ConstructFromAnother(MR.CS.CSharp.Outer._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_Outer_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::Outer::operator=`.
                public unsafe MR.CS.CSharp.Outer Assign(MR.CS.CSharp.ConstOuter _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_Outer_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.Outer._Underlying *__MR_CSharp_Outer_AssignFromAnother(_Underlying *_this, MR.CS.CSharp.Outer._Underlying *_other);
                    return new(__MR_CSharp_Outer_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }

                /// Generated from method `MR::CSharp::Outer::foo`.
                public unsafe void foo()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_Outer_foo", ExactSpelling = true)]
                    extern static void __MR_CSharp_Outer_foo(_Underlying *_this);
                    __MR_CSharp_Outer_foo(_UnderlyingPtr);
                }
            }

            /// This is used for optional parameters of class `Outer` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Outer`/`ConstOuter` to pass it to the function.
            public class InOptConstOuter
            {
                public ConstOuter? Opt;

                public InOptConstOuter() {}
                public InOptConstOuter(ConstOuter NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstOuter(ConstOuter NewOpt) {return new InOptConstOuter(NewOpt);}
            }

            /// Generated from class `MR::CSharp::TestFields`.
            /// This is the const half of the class.
            public class ConstTestFields : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstTestFields(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestFields_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_TestFields_Destroy(_Underlying *_this);
                    __MR_CSharp_TestFields_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstTestFields() {Dispose(false);}

                /// Returns a mutable pointer to a member variable of class `MR::CSharp::TestFields` named `static_i`.
                public static unsafe ref int GetStaticI()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestFields_GetMutable_static_i", ExactSpelling = true)]
                    extern static int *__MR_CSharp_TestFields_GetMutable_static_i();
                    return ref *__MR_CSharp_TestFields_GetMutable_static_i();
                }

                /// Modifies a member variable of class `MR::CSharp::TestFields` named `static_i`.
                public static void SetStaticI(int value)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestFields_Set_static_i", ExactSpelling = true)]
                    extern static void __MR_CSharp_TestFields_Set_static_i(int value);
                    __MR_CSharp_TestFields_Set_static_i(value);
                }
                public static unsafe int StaticConstI
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestFields_Get_static_const_i", ExactSpelling = true)]
                        extern static int *__MR_CSharp_TestFields_Get_static_const_i();
                        return *__MR_CSharp_TestFields_Get_static_const_i();
                    }
                }
                public static unsafe ref int StaticIRef
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestFields_Get_static_i_ref", ExactSpelling = true)]
                        extern static int *__MR_CSharp_TestFields_Get_static_i_ref();
                        return ref *__MR_CSharp_TestFields_Get_static_i_ref();
                    }
                }
                public static unsafe int StaticConstIRef
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestFields_Get_static_const_i_ref", ExactSpelling = true)]
                        extern static int *__MR_CSharp_TestFields_Get_static_const_i_ref();
                        return *__MR_CSharp_TestFields_Get_static_const_i_ref();
                    }
                }

                /// Returns a mutable pointer to a member variable of class `MR::CSharp::TestFields` named `static_s`.
                public static unsafe MR.CS.Std.String GetStaticS()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestFields_GetMutable_static_s", ExactSpelling = true)]
                    extern static MR.CS.Std.String._Underlying *__MR_CSharp_TestFields_GetMutable_static_s();
                    return new(__MR_CSharp_TestFields_GetMutable_static_s(), is_owning: false);
                }

                /// Modifies a member variable of class `MR::CSharp::TestFields` named `static_s`.
                public static unsafe void SetStaticS(ReadOnlySpan<char> value)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestFields_Set_static_s", ExactSpelling = true)]
                    extern static void __MR_CSharp_TestFields_Set_static_s(byte *value, byte *value_end);
                    byte[] __bytes_value = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(value.Length)];
                    int __len_value = System.Text.Encoding.UTF8.GetBytes(value, __bytes_value);
                    fixed (byte *__ptr_value = __bytes_value)
                    {
                        __MR_CSharp_TestFields_Set_static_s(__ptr_value, __ptr_value + __len_value);
                    }
                }
                public static unsafe MR.CS.Std.ConstString StaticConstS
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestFields_Get_static_const_s", ExactSpelling = true)]
                        extern static MR.CS.Std.ConstString._Underlying *__MR_CSharp_TestFields_Get_static_const_s();
                        return new(__MR_CSharp_TestFields_Get_static_const_s(), is_owning: false);
                    }
                }
                public static unsafe MR.CS.Std.String StaticSRef
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestFields_Get_static_s_ref", ExactSpelling = true)]
                        extern static MR.CS.Std.String._Underlying *__MR_CSharp_TestFields_Get_static_s_ref();
                        return new(__MR_CSharp_TestFields_Get_static_s_ref(), is_owning: false);
                    }
                }
                public static unsafe MR.CS.Std.ConstString StaticConstSRef
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestFields_Get_static_const_s_ref", ExactSpelling = true)]
                        extern static MR.CS.Std.ConstString._Underlying *__MR_CSharp_TestFields_Get_static_const_s_ref();
                        return new(__MR_CSharp_TestFields_Get_static_const_s_ref(), is_owning: false);
                    }
                }

                /// Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `i`.
                public unsafe int GetI()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestFields_Get_i", ExactSpelling = true)]
                    extern static int *__MR_CSharp_TestFields_Get_i(_Underlying *_this);
                    return *__MR_CSharp_TestFields_Get_i(_UnderlyingPtr);
                }
                public unsafe int ConstI
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestFields_Get_const_i", ExactSpelling = true)]
                        extern static int *__MR_CSharp_TestFields_Get_const_i(_Underlying *_this);
                        return *__MR_CSharp_TestFields_Get_const_i(_UnderlyingPtr);
                    }
                }
                public unsafe ref int IRef
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestFields_Get_i_ref", ExactSpelling = true)]
                        extern static int *__MR_CSharp_TestFields_Get_i_ref(_Underlying *_this);
                        return ref *__MR_CSharp_TestFields_Get_i_ref(_UnderlyingPtr);
                    }
                }
                public unsafe int ConstIRef
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestFields_Get_const_i_ref", ExactSpelling = true)]
                        extern static int *__MR_CSharp_TestFields_Get_const_i_ref(_Underlying *_this);
                        return *__MR_CSharp_TestFields_Get_const_i_ref(_UnderlyingPtr);
                    }
                }

                /// Returns a pointer to a member variable of class `MR::CSharp::TestFields` named `s`.
                public unsafe MR.CS.Std.ConstString GetS()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestFields_Get_s", ExactSpelling = true)]
                    extern static MR.CS.Std.ConstString._Underlying *__MR_CSharp_TestFields_Get_s(_Underlying *_this);
                    return new(__MR_CSharp_TestFields_Get_s(_UnderlyingPtr), is_owning: false);
                }
                public unsafe MR.CS.Std.ConstString ConstS
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestFields_Get_const_s", ExactSpelling = true)]
                        extern static MR.CS.Std.ConstString._Underlying *__MR_CSharp_TestFields_Get_const_s(_Underlying *_this);
                        return new(__MR_CSharp_TestFields_Get_const_s(_UnderlyingPtr), is_owning: false);
                    }
                }
                public unsafe MR.CS.Std.String SRef
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestFields_Get_s_ref", ExactSpelling = true)]
                        extern static MR.CS.Std.String._Underlying *__MR_CSharp_TestFields_Get_s_ref(_Underlying *_this);
                        return new(__MR_CSharp_TestFields_Get_s_ref(_UnderlyingPtr), is_owning: false);
                    }
                }
                public unsafe MR.CS.Std.ConstString ConstSRef
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestFields_Get_const_s_ref", ExactSpelling = true)]
                        extern static MR.CS.Std.ConstString._Underlying *__MR_CSharp_TestFields_Get_const_s_ref(_Underlying *_this);
                        return new(__MR_CSharp_TestFields_Get_const_s_ref(_UnderlyingPtr), is_owning: false);
                    }
                }

                /// Generated from constructor `MR::CSharp::TestFields::TestFields`.
                public unsafe ConstTestFields(MR.CS.CSharp.ByValueTestFields _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestFields_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstTestFields._Underlying *__MR_CSharp_TestFields_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.TestFields._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_TestFields_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// Constructs `MR::CSharp::TestFields` elementwise.
                public unsafe ConstTestFields(int i, int const_i, ref int i_ref, int const_i_ref, ReadOnlySpan<char> s, ReadOnlySpan<char> const_s, MR.CS.Std.String s_ref, ReadOnlySpan<char> const_s_ref) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestFields_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstTestFields._Underlying *__MR_CSharp_TestFields_ConstructFrom(int i, int const_i, int *i_ref, int *const_i_ref, byte *s, byte *s_end, byte *const_s, byte *const_s_end, MR.CS.Std.String._Underlying *s_ref, byte *const_s_ref, byte *const_s_ref_end);
                    fixed (int *__ptr_i_ref = &i_ref)
                    {
                        byte[] __bytes_s = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(s.Length)];
                        int __len_s = System.Text.Encoding.UTF8.GetBytes(s, __bytes_s);
                        fixed (byte *__ptr_s = __bytes_s)
                        {
                            byte[] __bytes_const_s = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(const_s.Length)];
                            int __len_const_s = System.Text.Encoding.UTF8.GetBytes(const_s, __bytes_const_s);
                            fixed (byte *__ptr_const_s = __bytes_const_s)
                            {
                                byte[] __bytes_const_s_ref = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(const_s_ref.Length)];
                                int __len_const_s_ref = System.Text.Encoding.UTF8.GetBytes(const_s_ref, __bytes_const_s_ref);
                                fixed (byte *__ptr_const_s_ref = __bytes_const_s_ref)
                                {
                                    _UnderlyingPtr = __MR_CSharp_TestFields_ConstructFrom(i, const_i, __ptr_i_ref, &const_i_ref, __ptr_s, __ptr_s + __len_s, __ptr_const_s, __ptr_const_s + __len_const_s, s_ref._UnderlyingPtr, __ptr_const_s_ref, __ptr_const_s_ref + __len_const_s_ref);
                                }
                            }
                        }
                    }
                }
            }

            /// Generated from class `MR::CSharp::TestFields`.
            /// This is the non-const half of the class.
            public class TestFields : ConstTestFields
            {
                internal unsafe TestFields(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Returns a mutable pointer to a member variable of class `MR::CSharp::TestFields` named `i`.
                public unsafe new ref int GetI()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestFields_GetMutable_i", ExactSpelling = true)]
                    extern static int *__MR_CSharp_TestFields_GetMutable_i(_Underlying *_this);
                    return ref *__MR_CSharp_TestFields_GetMutable_i(_UnderlyingPtr);
                }

                /// Modifies a member variable of class `MR::CSharp::TestFields` named `i`.
                public unsafe void SetI(int value)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestFields_Set_i", ExactSpelling = true)]
                    extern static void __MR_CSharp_TestFields_Set_i(_Underlying *_this, int value);
                    __MR_CSharp_TestFields_Set_i(_UnderlyingPtr, value);
                }

                /// Returns a mutable pointer to a member variable of class `MR::CSharp::TestFields` named `s`.
                public unsafe new MR.CS.Std.String GetS()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestFields_GetMutable_s", ExactSpelling = true)]
                    extern static MR.CS.Std.String._Underlying *__MR_CSharp_TestFields_GetMutable_s(_Underlying *_this);
                    return new(__MR_CSharp_TestFields_GetMutable_s(_UnderlyingPtr), is_owning: false);
                }

                /// Modifies a member variable of class `MR::CSharp::TestFields` named `s`.
                public unsafe void SetS(ReadOnlySpan<char> value)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestFields_Set_s", ExactSpelling = true)]
                    extern static void __MR_CSharp_TestFields_Set_s(_Underlying *_this, byte *value, byte *value_end);
                    byte[] __bytes_value = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(value.Length)];
                    int __len_value = System.Text.Encoding.UTF8.GetBytes(value, __bytes_value);
                    fixed (byte *__ptr_value = __bytes_value)
                    {
                        __MR_CSharp_TestFields_Set_s(_UnderlyingPtr, __ptr_value, __ptr_value + __len_value);
                    }
                }

                /// Generated from constructor `MR::CSharp::TestFields::TestFields`.
                public unsafe TestFields(MR.CS.CSharp.ByValueTestFields _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestFields_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstTestFields._Underlying *__MR_CSharp_TestFields_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.TestFields._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_TestFields_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// Constructs `MR::CSharp::TestFields` elementwise.
                public unsafe TestFields(int i, int const_i, ref int i_ref, int const_i_ref, ReadOnlySpan<char> s, ReadOnlySpan<char> const_s, MR.CS.Std.String s_ref, ReadOnlySpan<char> const_s_ref) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestFields_ConstructFrom", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstTestFields._Underlying *__MR_CSharp_TestFields_ConstructFrom(int i, int const_i, int *i_ref, int *const_i_ref, byte *s, byte *s_end, byte *const_s, byte *const_s_end, MR.CS.Std.String._Underlying *s_ref, byte *const_s_ref, byte *const_s_ref_end);
                    fixed (int *__ptr_i_ref = &i_ref)
                    {
                        byte[] __bytes_s = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(s.Length)];
                        int __len_s = System.Text.Encoding.UTF8.GetBytes(s, __bytes_s);
                        fixed (byte *__ptr_s = __bytes_s)
                        {
                            byte[] __bytes_const_s = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(const_s.Length)];
                            int __len_const_s = System.Text.Encoding.UTF8.GetBytes(const_s, __bytes_const_s);
                            fixed (byte *__ptr_const_s = __bytes_const_s)
                            {
                                byte[] __bytes_const_s_ref = new byte[System.Text.Encoding.UTF8.GetMaxByteCount(const_s_ref.Length)];
                                int __len_const_s_ref = System.Text.Encoding.UTF8.GetBytes(const_s_ref, __bytes_const_s_ref);
                                fixed (byte *__ptr_const_s_ref = __bytes_const_s_ref)
                                {
                                    _UnderlyingPtr = __MR_CSharp_TestFields_ConstructFrom(i, const_i, __ptr_i_ref, &const_i_ref, __ptr_s, __ptr_s + __len_s, __ptr_const_s, __ptr_const_s + __len_const_s, s_ref._UnderlyingPtr, __ptr_const_s_ref, __ptr_const_s_ref + __len_const_s_ref);
                                }
                            }
                        }
                    }
                }
            }

            /// This is used as a function parameter when the underlying function receives `TestFields` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `TestFields`/`ConstTestFields` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter is nullable and has a default argument.
            public readonly struct ByValueTestFields
            {
                internal readonly ConstTestFields? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public ByValueTestFields() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public ByValueTestFields(ConstTestFields new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public ByValueTestFields(MR.CS.Misc._Moved<TestFields> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator ByValueTestFields(ConstTestFields arg) {return new(arg);}
                public static implicit operator ByValueTestFields(MR.CS.Misc._Moved<TestFields> arg) {return new(arg);}
            }

            /// This is used for optional parameters of class `TestFields` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `TestFields`/`ConstTestFields` to pass it to the function.
            public class InOptConstTestFields
            {
                public ConstTestFields? Opt;

                public InOptConstTestFields() {}
                public InOptConstTestFields(ConstTestFields NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstTestFields(ConstTestFields NewOpt) {return new InOptConstTestFields(NewOpt);}
            }

            /// Generated from class `MR::CSharp::TestConstness`.
            /// This is the const half of the class.
            public class ConstTestConstness : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstTestConstness(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestConstness_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_TestConstness_Destroy(_Underlying *_this);
                    __MR_CSharp_TestConstness_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstTestConstness() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstTestConstness() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestConstness_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstTestConstness._Underlying *__MR_CSharp_TestConstness_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_TestConstness_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::TestConstness::TestConstness`.
                public unsafe ConstTestConstness(MR.CS.CSharp.ConstTestConstness _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestConstness_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstTestConstness._Underlying *__MR_CSharp_TestConstness_ConstructFromAnother(MR.CS.CSharp.TestConstness._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_TestConstness_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestConstness::foo`.
                public unsafe void foo()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestConstness_foo_const", ExactSpelling = true)]
                    extern static void __MR_CSharp_TestConstness_foo_const(_Underlying *_this);
                    __MR_CSharp_TestConstness_foo_const(_UnderlyingPtr);
                }
            }

            /// Generated from class `MR::CSharp::TestConstness`.
            /// This is the non-const half of the class.
            public class TestConstness : ConstTestConstness
            {
                internal unsafe TestConstness(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe TestConstness() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestConstness_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstTestConstness._Underlying *__MR_CSharp_TestConstness_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_TestConstness_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::TestConstness::TestConstness`.
                public unsafe TestConstness(MR.CS.CSharp.ConstTestConstness _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestConstness_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstTestConstness._Underlying *__MR_CSharp_TestConstness_ConstructFromAnother(MR.CS.CSharp.TestConstness._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_TestConstness_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestConstness::operator=`.
                public unsafe MR.CS.CSharp.TestConstness Assign(MR.CS.CSharp.ConstTestConstness _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestConstness_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.TestConstness._Underlying *__MR_CSharp_TestConstness_AssignFromAnother(_Underlying *_this, MR.CS.CSharp.TestConstness._Underlying *_other);
                    return new(__MR_CSharp_TestConstness_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }

                /// Generated from method `MR::CSharp::TestConstness::foo`.
                public unsafe new void foo()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestConstness_foo", ExactSpelling = true)]
                    extern static void __MR_CSharp_TestConstness_foo(_Underlying *_this);
                    __MR_CSharp_TestConstness_foo(_UnderlyingPtr);
                }
            }

            /// This is used for optional parameters of class `TestConstness` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `TestConstness`/`ConstTestConstness` to pass it to the function.
            public class InOptConstTestConstness
            {
                public ConstTestConstness? Opt;

                public InOptConstTestConstness() {}
                public InOptConstTestConstness(ConstTestConstness NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstTestConstness(ConstTestConstness NewOpt) {return new InOptConstTestConstness(NewOpt);}
            }

            // This is the happy path.
            // This emits static operators in the const half, and non-static operators (or functions pre C# 14) in the non-const half.
            /// Generated from class `MR::CSharp::IncrDecrA`.
            /// This is the const half of the class.
            public class ConstIncrDecrA : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstIncrDecrA(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_IncrDecrA_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_IncrDecrA_Destroy(_Underlying *_this);
                    __MR_CSharp_IncrDecrA_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstIncrDecrA() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstIncrDecrA() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_IncrDecrA_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstIncrDecrA._Underlying *__MR_CSharp_IncrDecrA_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_IncrDecrA_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::IncrDecrA::IncrDecrA`.
                public unsafe ConstIncrDecrA(MR.CS.CSharp.ConstIncrDecrA _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_IncrDecrA_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstIncrDecrA._Underlying *__MR_CSharp_IncrDecrA_ConstructFromAnother(MR.CS.CSharp.IncrDecrA._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_IncrDecrA_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::IncrDecrA::operator++`.
                public static unsafe IncrDecrA operator++(MR.CS.CSharp.ConstIncrDecrA _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_incr_MR_CSharp_IncrDecrA", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IncrDecrA._Underlying *__MR_C_incr_MR_CSharp_IncrDecrA(MR.CS.CSharp.ConstIncrDecrA._Underlying *_this);
                    IncrDecrA _this_copy = new(_this);
                    MR.CS.CSharp.IncrDecrA _unused_ret = new(__MR_C_incr_MR_CSharp_IncrDecrA(_this_copy._UnderlyingPtr), is_owning: false);
                    return _this_copy;
                }

                /// Generated from method `MR::CSharp::IncrDecrA::operator--`.
                public static unsafe IncrDecrA operator--(MR.CS.CSharp.ConstIncrDecrA _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_decr_MR_CSharp_IncrDecrA", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IncrDecrA._Underlying *__MR_C_decr_MR_CSharp_IncrDecrA(MR.CS.CSharp.ConstIncrDecrA._Underlying *_this);
                    IncrDecrA _this_copy = new(_this);
                    MR.CS.CSharp.IncrDecrA _unused_ret = new(__MR_C_decr_MR_CSharp_IncrDecrA(_this_copy._UnderlyingPtr), is_owning: false);
                    return _this_copy;
                }
            }

            // This is the happy path.
            // This emits static operators in the const half, and non-static operators (or functions pre C# 14) in the non-const half.
            /// Generated from class `MR::CSharp::IncrDecrA`.
            /// This is the non-const half of the class.
            public class IncrDecrA : ConstIncrDecrA
            {
                internal unsafe IncrDecrA(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe IncrDecrA() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_IncrDecrA_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstIncrDecrA._Underlying *__MR_CSharp_IncrDecrA_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_IncrDecrA_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::IncrDecrA::IncrDecrA`.
                public unsafe IncrDecrA(MR.CS.CSharp.ConstIncrDecrA _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_IncrDecrA_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstIncrDecrA._Underlying *__MR_CSharp_IncrDecrA_ConstructFromAnother(MR.CS.CSharp.IncrDecrA._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_IncrDecrA_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::IncrDecrA::operator=`.
                public unsafe MR.CS.CSharp.IncrDecrA Assign(MR.CS.CSharp.ConstIncrDecrA _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_IncrDecrA_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IncrDecrA._Underlying *__MR_CSharp_IncrDecrA_AssignFromAnother(_Underlying *_this, MR.CS.CSharp.IncrDecrA._Underlying *_other);
                    return new(__MR_CSharp_IncrDecrA_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }

                /// Generated from method `MR::CSharp::IncrDecrA::operator++`.
                public unsafe void Incr(MR.CS.CSharp.IncrDecrA _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_incr_MR_CSharp_IncrDecrA", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IncrDecrA._Underlying *__MR_C_incr_MR_CSharp_IncrDecrA(MR.CS.CSharp.IncrDecrA._Underlying *_this);
                    MR.CS.CSharp.IncrDecrA _unused_ret = new(__MR_C_incr_MR_CSharp_IncrDecrA(_this._UnderlyingPtr), is_owning: false);
                }

                /// Generated from method `MR::CSharp::IncrDecrA::operator--`.
                public unsafe void Decr(MR.CS.CSharp.IncrDecrA _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_decr_MR_CSharp_IncrDecrA", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IncrDecrA._Underlying *__MR_C_decr_MR_CSharp_IncrDecrA(MR.CS.CSharp.IncrDecrA._Underlying *_this);
                    MR.CS.CSharp.IncrDecrA _unused_ret = new(__MR_C_decr_MR_CSharp_IncrDecrA(_this._UnderlyingPtr), is_owning: false);
                }
            }

            /// This is used for optional parameters of class `IncrDecrA` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `IncrDecrA`/`ConstIncrDecrA` to pass it to the function.
            public class InOptConstIncrDecrA
            {
                public ConstIncrDecrA? Opt;

                public InOptConstIncrDecrA() {}
                public InOptConstIncrDecrA(ConstIncrDecrA NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstIncrDecrA(ConstIncrDecrA NewOpt) {return new InOptConstIncrDecrA(NewOpt);}
            }

            // This is a somewhat happy path. Same as above, but everything gets emitted in the const half.
            /// Generated from class `MR::CSharp::IncrDecrB`.
            /// This is the const half of the class.
            public class ConstIncrDecrB : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstIncrDecrB(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_IncrDecrB_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_IncrDecrB_Destroy(_Underlying *_this);
                    __MR_CSharp_IncrDecrB_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstIncrDecrB() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstIncrDecrB() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_IncrDecrB_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstIncrDecrB._Underlying *__MR_CSharp_IncrDecrB_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_IncrDecrB_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::IncrDecrB::IncrDecrB`.
                public unsafe ConstIncrDecrB(MR.CS.CSharp.ConstIncrDecrB _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_IncrDecrB_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstIncrDecrB._Underlying *__MR_CSharp_IncrDecrB_ConstructFromAnother(MR.CS.CSharp.IncrDecrB._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_IncrDecrB_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::IncrDecrB::operator++`.
                public unsafe void Incr(MR.CS.CSharp.ConstIncrDecrB _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_incr_MR_CSharp_IncrDecrB", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstIncrDecrB._Underlying *__MR_C_incr_MR_CSharp_IncrDecrB(MR.CS.CSharp.ConstIncrDecrB._Underlying *_this);
                    MR.CS.CSharp.ConstIncrDecrB _unused_ret = new(__MR_C_incr_MR_CSharp_IncrDecrB(_this._UnderlyingPtr), is_owning: false);
                }

                /// Generated from method `MR::CSharp::IncrDecrB::operator++`.
                public static unsafe IncrDecrB operator++(MR.CS.CSharp.ConstIncrDecrB _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_incr_MR_CSharp_IncrDecrB", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstIncrDecrB._Underlying *__MR_C_incr_MR_CSharp_IncrDecrB(MR.CS.CSharp.ConstIncrDecrB._Underlying *_this);
                    IncrDecrB _this_copy = new(_this);
                    MR.CS.CSharp.ConstIncrDecrB _unused_ret = new(__MR_C_incr_MR_CSharp_IncrDecrB(_this_copy._UnderlyingPtr), is_owning: false);
                    return _this_copy;
                }

                /// Generated from method `MR::CSharp::IncrDecrB::operator--`.
                public unsafe void Decr(MR.CS.CSharp.ConstIncrDecrB _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_decr_MR_CSharp_IncrDecrB", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstIncrDecrB._Underlying *__MR_C_decr_MR_CSharp_IncrDecrB(MR.CS.CSharp.ConstIncrDecrB._Underlying *_this);
                    MR.CS.CSharp.ConstIncrDecrB _unused_ret = new(__MR_C_decr_MR_CSharp_IncrDecrB(_this._UnderlyingPtr), is_owning: false);
                }

                /// Generated from method `MR::CSharp::IncrDecrB::operator--`.
                public static unsafe IncrDecrB operator--(MR.CS.CSharp.ConstIncrDecrB _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_decr_MR_CSharp_IncrDecrB", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstIncrDecrB._Underlying *__MR_C_decr_MR_CSharp_IncrDecrB(MR.CS.CSharp.ConstIncrDecrB._Underlying *_this);
                    IncrDecrB _this_copy = new(_this);
                    MR.CS.CSharp.ConstIncrDecrB _unused_ret = new(__MR_C_decr_MR_CSharp_IncrDecrB(_this_copy._UnderlyingPtr), is_owning: false);
                    return _this_copy;
                }
            }

            // This is a somewhat happy path. Same as above, but everything gets emitted in the const half.
            /// Generated from class `MR::CSharp::IncrDecrB`.
            /// This is the non-const half of the class.
            public class IncrDecrB : ConstIncrDecrB
            {
                internal unsafe IncrDecrB(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe IncrDecrB() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_IncrDecrB_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstIncrDecrB._Underlying *__MR_CSharp_IncrDecrB_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_IncrDecrB_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::IncrDecrB::IncrDecrB`.
                public unsafe IncrDecrB(MR.CS.CSharp.ConstIncrDecrB _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_IncrDecrB_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstIncrDecrB._Underlying *__MR_CSharp_IncrDecrB_ConstructFromAnother(MR.CS.CSharp.IncrDecrB._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_IncrDecrB_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::IncrDecrB::operator=`.
                public unsafe MR.CS.CSharp.IncrDecrB Assign(MR.CS.CSharp.ConstIncrDecrB _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_IncrDecrB_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IncrDecrB._Underlying *__MR_CSharp_IncrDecrB_AssignFromAnother(_Underlying *_this, MR.CS.CSharp.IncrDecrB._Underlying *_other);
                    return new(__MR_CSharp_IncrDecrB_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }
            }

            /// This is used for optional parameters of class `IncrDecrB` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `IncrDecrB`/`ConstIncrDecrB` to pass it to the function.
            public class InOptConstIncrDecrB
            {
                public ConstIncrDecrB? Opt;

                public InOptConstIncrDecrB() {}
                public InOptConstIncrDecrB(ConstIncrDecrB NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstIncrDecrB(ConstIncrDecrB NewOpt) {return new InOptConstIncrDecrB(NewOpt);}
            }

            // This is a somewhat happy path. Since here the copy ctor takes a non-const reference, the static operators get added to the non-const half.
            // The non-static ones are not marked const, so they're also in the non-const half.
            /// Generated from class `MR::CSharp::IncrDecrC`.
            /// This is the const half of the class.
            public class ConstIncrDecrC : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstIncrDecrC(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_IncrDecrC_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_IncrDecrC_Destroy(_Underlying *_this);
                    __MR_CSharp_IncrDecrC_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstIncrDecrC() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstIncrDecrC() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_IncrDecrC_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstIncrDecrC._Underlying *__MR_CSharp_IncrDecrC_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_IncrDecrC_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::IncrDecrC::IncrDecrC`.
                public unsafe ConstIncrDecrC(MR.CS.CSharp.ConstIncrDecrC _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_IncrDecrC_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstIncrDecrC._Underlying *__MR_CSharp_IncrDecrC_ConstructFromAnother(MR.CS.CSharp.IncrDecrC._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_IncrDecrC_ConstructFromAnother(_other._UnderlyingPtr);
                }
            }

            // This is a somewhat happy path. Since here the copy ctor takes a non-const reference, the static operators get added to the non-const half.
            // The non-static ones are not marked const, so they're also in the non-const half.
            /// Generated from class `MR::CSharp::IncrDecrC`.
            /// This is the non-const half of the class.
            public class IncrDecrC : ConstIncrDecrC
            {
                internal unsafe IncrDecrC(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe IncrDecrC() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_IncrDecrC_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstIncrDecrC._Underlying *__MR_CSharp_IncrDecrC_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_IncrDecrC_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::IncrDecrC::IncrDecrC`.
                public unsafe IncrDecrC(MR.CS.CSharp.ConstIncrDecrC _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_IncrDecrC_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstIncrDecrC._Underlying *__MR_CSharp_IncrDecrC_ConstructFromAnother(MR.CS.CSharp.IncrDecrC._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_IncrDecrC_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::IncrDecrC::operator++`.
                public unsafe void Incr(MR.CS.CSharp.IncrDecrC _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_incr_MR_CSharp_IncrDecrC", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IncrDecrC._Underlying *__MR_C_incr_MR_CSharp_IncrDecrC(MR.CS.CSharp.IncrDecrC._Underlying *_this);
                    MR.CS.CSharp.IncrDecrC _unused_ret = new(__MR_C_incr_MR_CSharp_IncrDecrC(_this._UnderlyingPtr), is_owning: false);
                }

                /// Generated from method `MR::CSharp::IncrDecrC::operator++`.
                public static unsafe IncrDecrC operator++(MR.CS.CSharp.IncrDecrC _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_incr_MR_CSharp_IncrDecrC", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IncrDecrC._Underlying *__MR_C_incr_MR_CSharp_IncrDecrC(MR.CS.CSharp.IncrDecrC._Underlying *_this);
                    IncrDecrC _this_copy = new(_this);
                    MR.CS.CSharp.IncrDecrC _unused_ret = new(__MR_C_incr_MR_CSharp_IncrDecrC(_this_copy._UnderlyingPtr), is_owning: false);
                    return _this_copy;
                }

                /// Generated from method `MR::CSharp::IncrDecrC::operator--`.
                public unsafe void Decr(MR.CS.CSharp.IncrDecrC _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_decr_MR_CSharp_IncrDecrC", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IncrDecrC._Underlying *__MR_C_decr_MR_CSharp_IncrDecrC(MR.CS.CSharp.IncrDecrC._Underlying *_this);
                    MR.CS.CSharp.IncrDecrC _unused_ret = new(__MR_C_decr_MR_CSharp_IncrDecrC(_this._UnderlyingPtr), is_owning: false);
                }

                /// Generated from method `MR::CSharp::IncrDecrC::operator--`.
                public static unsafe IncrDecrC operator--(MR.CS.CSharp.IncrDecrC _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_decr_MR_CSharp_IncrDecrC", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IncrDecrC._Underlying *__MR_C_decr_MR_CSharp_IncrDecrC(MR.CS.CSharp.IncrDecrC._Underlying *_this);
                    IncrDecrC _this_copy = new(_this);
                    MR.CS.CSharp.IncrDecrC _unused_ret = new(__MR_C_decr_MR_CSharp_IncrDecrC(_this_copy._UnderlyingPtr), is_owning: false);
                    return _this_copy;
                }
            }

            /// This is used for optional parameters of class `IncrDecrC` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `IncrDecrC`/`ConstIncrDecrC` to pass it to the function.
            public class InOptConstIncrDecrC
            {
                public ConstIncrDecrC? Opt;

                public InOptConstIncrDecrC() {}
                public InOptConstIncrDecrC(ConstIncrDecrC NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstIncrDecrC(ConstIncrDecrC NewOpt) {return new InOptConstIncrDecrC(NewOpt);}
            }

            // This is a somewhat happy path. Since here the copy ctor takes a non-const reference, the static operators get added to the non-const half.
            // The non-static ones are in the const half due to being marked const.
            /// Generated from class `MR::CSharp::IncrDecrD`.
            /// This is the const half of the class.
            public class ConstIncrDecrD : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstIncrDecrD(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_IncrDecrD_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_IncrDecrD_Destroy(_Underlying *_this);
                    __MR_CSharp_IncrDecrD_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstIncrDecrD() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstIncrDecrD() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_IncrDecrD_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstIncrDecrD._Underlying *__MR_CSharp_IncrDecrD_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_IncrDecrD_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::IncrDecrD::IncrDecrD`.
                public unsafe ConstIncrDecrD(MR.CS.CSharp.ConstIncrDecrD _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_IncrDecrD_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstIncrDecrD._Underlying *__MR_CSharp_IncrDecrD_ConstructFromAnother(MR.CS.CSharp.IncrDecrD._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_IncrDecrD_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::IncrDecrD::operator++`.
                public unsafe void Incr(MR.CS.CSharp.ConstIncrDecrD _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_incr_MR_CSharp_IncrDecrD", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstIncrDecrD._Underlying *__MR_C_incr_MR_CSharp_IncrDecrD(MR.CS.CSharp.ConstIncrDecrD._Underlying *_this);
                    MR.CS.CSharp.ConstIncrDecrD _unused_ret = new(__MR_C_incr_MR_CSharp_IncrDecrD(_this._UnderlyingPtr), is_owning: false);
                }

                /// Generated from method `MR::CSharp::IncrDecrD::operator--`.
                public unsafe void Decr(MR.CS.CSharp.ConstIncrDecrD _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_decr_MR_CSharp_IncrDecrD", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstIncrDecrD._Underlying *__MR_C_decr_MR_CSharp_IncrDecrD(MR.CS.CSharp.ConstIncrDecrD._Underlying *_this);
                    MR.CS.CSharp.ConstIncrDecrD _unused_ret = new(__MR_C_decr_MR_CSharp_IncrDecrD(_this._UnderlyingPtr), is_owning: false);
                }
            }

            // This is a somewhat happy path. Since here the copy ctor takes a non-const reference, the static operators get added to the non-const half.
            // The non-static ones are in the const half due to being marked const.
            /// Generated from class `MR::CSharp::IncrDecrD`.
            /// This is the non-const half of the class.
            public class IncrDecrD : ConstIncrDecrD
            {
                internal unsafe IncrDecrD(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe IncrDecrD() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_IncrDecrD_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstIncrDecrD._Underlying *__MR_CSharp_IncrDecrD_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_IncrDecrD_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::IncrDecrD::IncrDecrD`.
                public unsafe IncrDecrD(MR.CS.CSharp.ConstIncrDecrD _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_IncrDecrD_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstIncrDecrD._Underlying *__MR_CSharp_IncrDecrD_ConstructFromAnother(MR.CS.CSharp.IncrDecrD._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_IncrDecrD_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::IncrDecrD::operator++`.
                public static unsafe IncrDecrD operator++(MR.CS.CSharp.IncrDecrD _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_incr_MR_CSharp_IncrDecrD", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstIncrDecrD._Underlying *__MR_C_incr_MR_CSharp_IncrDecrD(MR.CS.CSharp.IncrDecrD._Underlying *_this);
                    IncrDecrD _this_copy = new(_this);
                    MR.CS.CSharp.ConstIncrDecrD _unused_ret = new(__MR_C_incr_MR_CSharp_IncrDecrD(_this_copy._UnderlyingPtr), is_owning: false);
                    return _this_copy;
                }

                /// Generated from method `MR::CSharp::IncrDecrD::operator--`.
                public static unsafe IncrDecrD operator--(MR.CS.CSharp.IncrDecrD _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_decr_MR_CSharp_IncrDecrD", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstIncrDecrD._Underlying *__MR_C_decr_MR_CSharp_IncrDecrD(MR.CS.CSharp.IncrDecrD._Underlying *_this);
                    IncrDecrD _this_copy = new(_this);
                    MR.CS.CSharp.ConstIncrDecrD _unused_ret = new(__MR_C_decr_MR_CSharp_IncrDecrD(_this_copy._UnderlyingPtr), is_owning: false);
                    return _this_copy;
                }
            }

            /// This is used for optional parameters of class `IncrDecrD` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `IncrDecrD`/`ConstIncrDecrD` to pass it to the function.
            public class InOptConstIncrDecrD
            {
                public ConstIncrDecrD? Opt;

                public InOptConstIncrDecrD() {}
                public InOptConstIncrDecrD(ConstIncrDecrD NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstIncrDecrD(ConstIncrDecrD NewOpt) {return new InOptConstIncrDecrD(NewOpt);}
            }

            // Here we don't special-case those operators due to the class being non-copyable (and not trivially movable). They get spawned as functions as usual, in the non-const half.
            /// Generated from class `MR::CSharp::IncrDecrE`.
            /// This is the const half of the class.
            public class ConstIncrDecrE : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstIncrDecrE(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_IncrDecrE_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_IncrDecrE_Destroy(_Underlying *_this);
                    __MR_CSharp_IncrDecrE_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstIncrDecrE() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstIncrDecrE() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_IncrDecrE_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstIncrDecrE._Underlying *__MR_CSharp_IncrDecrE_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_IncrDecrE_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::IncrDecrE::IncrDecrE`.
                public unsafe ConstIncrDecrE(MR.CS.CSharp.ByValueIncrDecrE _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_IncrDecrE_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstIncrDecrE._Underlying *__MR_CSharp_IncrDecrE_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.IncrDecrE._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_IncrDecrE_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }
            }

            // Here we don't special-case those operators due to the class being non-copyable (and not trivially movable). They get spawned as functions as usual, in the non-const half.
            /// Generated from class `MR::CSharp::IncrDecrE`.
            /// This is the non-const half of the class.
            public class IncrDecrE : ConstIncrDecrE
            {
                internal unsafe IncrDecrE(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe IncrDecrE() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_IncrDecrE_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstIncrDecrE._Underlying *__MR_CSharp_IncrDecrE_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_IncrDecrE_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::IncrDecrE::IncrDecrE`.
                public unsafe IncrDecrE(MR.CS.CSharp.ByValueIncrDecrE _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_IncrDecrE_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstIncrDecrE._Underlying *__MR_CSharp_IncrDecrE_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.IncrDecrE._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_IncrDecrE_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// Generated from method `MR::CSharp::IncrDecrE::operator++`.
                public unsafe void Incr(MR.CS.CSharp.IncrDecrE _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_incr_MR_CSharp_IncrDecrE", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IncrDecrE._Underlying *__MR_C_incr_MR_CSharp_IncrDecrE(MR.CS.CSharp.IncrDecrE._Underlying *_this);
                    MR.CS.CSharp.IncrDecrE _unused_ret = new(__MR_C_incr_MR_CSharp_IncrDecrE(_this._UnderlyingPtr), is_owning: false);
                }

                /// Generated from method `MR::CSharp::IncrDecrE::operator--`.
                public unsafe void Decr(MR.CS.CSharp.IncrDecrE _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_decr_MR_CSharp_IncrDecrE", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IncrDecrE._Underlying *__MR_C_decr_MR_CSharp_IncrDecrE(MR.CS.CSharp.IncrDecrE._Underlying *_this);
                    MR.CS.CSharp.IncrDecrE _unused_ret = new(__MR_C_decr_MR_CSharp_IncrDecrE(_this._UnderlyingPtr), is_owning: false);
                }
            }

            /// This is used as a function parameter when the underlying function receives `IncrDecrE` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `IncrDecrE`/`ConstIncrDecrE` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter is nullable and has a default argument.
            public readonly struct ByValueIncrDecrE
            {
                internal readonly ConstIncrDecrE? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public ByValueIncrDecrE() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public ByValueIncrDecrE(ConstIncrDecrE new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public ByValueIncrDecrE(MR.CS.Misc._Moved<IncrDecrE> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator ByValueIncrDecrE(ConstIncrDecrE arg) {return new(arg);}
                public static implicit operator ByValueIncrDecrE(MR.CS.Misc._Moved<IncrDecrE> arg) {return new(arg);}
            }

            /// This is used for optional parameters of class `IncrDecrE` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `IncrDecrE`/`ConstIncrDecrE` to pass it to the function.
            public class InOptConstIncrDecrE
            {
                public ConstIncrDecrE? Opt;

                public InOptConstIncrDecrE() {}
                public InOptConstIncrDecrE(ConstIncrDecrE NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstIncrDecrE(ConstIncrDecrE NewOpt) {return new InOptConstIncrDecrE(NewOpt);}
            }

            // Here we don't special-case those operators due to the class being non-copyable (and not trivially movable). They get spawned as functions as usual, in the const half.
            /// Generated from class `MR::CSharp::IncrDecrF`.
            /// This is the const half of the class.
            public class ConstIncrDecrF : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstIncrDecrF(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_IncrDecrF_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_IncrDecrF_Destroy(_Underlying *_this);
                    __MR_CSharp_IncrDecrF_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstIncrDecrF() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstIncrDecrF() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_IncrDecrF_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstIncrDecrF._Underlying *__MR_CSharp_IncrDecrF_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_IncrDecrF_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::IncrDecrF::IncrDecrF`.
                public unsafe ConstIncrDecrF(MR.CS.CSharp.ByValueIncrDecrF _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_IncrDecrF_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstIncrDecrF._Underlying *__MR_CSharp_IncrDecrF_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.IncrDecrF._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_IncrDecrF_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// Generated from method `MR::CSharp::IncrDecrF::operator++`.
                public unsafe void Incr(MR.CS.CSharp.ConstIncrDecrF _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_incr_MR_CSharp_IncrDecrF", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstIncrDecrF._Underlying *__MR_C_incr_MR_CSharp_IncrDecrF(MR.CS.CSharp.ConstIncrDecrF._Underlying *_this);
                    MR.CS.CSharp.ConstIncrDecrF _unused_ret = new(__MR_C_incr_MR_CSharp_IncrDecrF(_this._UnderlyingPtr), is_owning: false);
                }

                /// Generated from method `MR::CSharp::IncrDecrF::operator--`.
                public unsafe void Decr(MR.CS.CSharp.ConstIncrDecrF _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_decr_MR_CSharp_IncrDecrF", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstIncrDecrF._Underlying *__MR_C_decr_MR_CSharp_IncrDecrF(MR.CS.CSharp.ConstIncrDecrF._Underlying *_this);
                    MR.CS.CSharp.ConstIncrDecrF _unused_ret = new(__MR_C_decr_MR_CSharp_IncrDecrF(_this._UnderlyingPtr), is_owning: false);
                }
            }

            // Here we don't special-case those operators due to the class being non-copyable (and not trivially movable). They get spawned as functions as usual, in the const half.
            /// Generated from class `MR::CSharp::IncrDecrF`.
            /// This is the non-const half of the class.
            public class IncrDecrF : ConstIncrDecrF
            {
                internal unsafe IncrDecrF(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe IncrDecrF() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_IncrDecrF_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstIncrDecrF._Underlying *__MR_CSharp_IncrDecrF_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_IncrDecrF_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::IncrDecrF::IncrDecrF`.
                public unsafe IncrDecrF(MR.CS.CSharp.ByValueIncrDecrF _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_IncrDecrF_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstIncrDecrF._Underlying *__MR_CSharp_IncrDecrF_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.IncrDecrF._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_IncrDecrF_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }
            }

            /// This is used as a function parameter when the underlying function receives `IncrDecrF` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `IncrDecrF`/`ConstIncrDecrF` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter is nullable and has a default argument.
            public readonly struct ByValueIncrDecrF
            {
                internal readonly ConstIncrDecrF? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public ByValueIncrDecrF() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public ByValueIncrDecrF(ConstIncrDecrF new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public ByValueIncrDecrF(MR.CS.Misc._Moved<IncrDecrF> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator ByValueIncrDecrF(ConstIncrDecrF arg) {return new(arg);}
                public static implicit operator ByValueIncrDecrF(MR.CS.Misc._Moved<IncrDecrF> arg) {return new(arg);}
            }

            /// This is used for optional parameters of class `IncrDecrF` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `IncrDecrF`/`ConstIncrDecrF` to pass it to the function.
            public class InOptConstIncrDecrF
            {
                public ConstIncrDecrF? Opt;

                public InOptConstIncrDecrF() {}
                public InOptConstIncrDecrF(ConstIncrDecrF NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstIncrDecrF(ConstIncrDecrF NewOpt) {return new InOptConstIncrDecrF(NewOpt);}
            }

            // This class is non-copyable, but is trivially movable, so we treat it as if it was copyable.
            /// Generated from class `MR::CSharp::IncrDecrG`.
            /// This is the const half of the class.
            public class ConstIncrDecrG : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstIncrDecrG(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_IncrDecrG_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_IncrDecrG_Destroy(_Underlying *_this);
                    __MR_CSharp_IncrDecrG_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstIncrDecrG() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstIncrDecrG() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_IncrDecrG_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstIncrDecrG._Underlying *__MR_CSharp_IncrDecrG_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_IncrDecrG_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::IncrDecrG::IncrDecrG`.
                public unsafe ConstIncrDecrG(MR.CS.CSharp.ConstIncrDecrG _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_IncrDecrG_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstIncrDecrG._Underlying *__MR_CSharp_IncrDecrG_ConstructFromAnother(MR.CS.CSharp.IncrDecrG._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_IncrDecrG_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::IncrDecrG::operator++`.
                public static unsafe IncrDecrG operator++(MR.CS.CSharp.ConstIncrDecrG _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_incr_MR_CSharp_IncrDecrG", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IncrDecrG._Underlying *__MR_C_incr_MR_CSharp_IncrDecrG(MR.CS.CSharp.ConstIncrDecrG._Underlying *_this);
                    IncrDecrG _this_copy = new(_this);
                    MR.CS.CSharp.IncrDecrG _unused_ret = new(__MR_C_incr_MR_CSharp_IncrDecrG(_this_copy._UnderlyingPtr), is_owning: false);
                    return _this_copy;
                }

                /// Generated from method `MR::CSharp::IncrDecrG::operator--`.
                public static unsafe IncrDecrG operator--(MR.CS.CSharp.ConstIncrDecrG _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_decr_MR_CSharp_IncrDecrG", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IncrDecrG._Underlying *__MR_C_decr_MR_CSharp_IncrDecrG(MR.CS.CSharp.ConstIncrDecrG._Underlying *_this);
                    IncrDecrG _this_copy = new(_this);
                    MR.CS.CSharp.IncrDecrG _unused_ret = new(__MR_C_decr_MR_CSharp_IncrDecrG(_this_copy._UnderlyingPtr), is_owning: false);
                    return _this_copy;
                }
            }

            // This class is non-copyable, but is trivially movable, so we treat it as if it was copyable.
            /// Generated from class `MR::CSharp::IncrDecrG`.
            /// This is the non-const half of the class.
            public class IncrDecrG : ConstIncrDecrG
            {
                internal unsafe IncrDecrG(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe IncrDecrG() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_IncrDecrG_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstIncrDecrG._Underlying *__MR_CSharp_IncrDecrG_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_IncrDecrG_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::IncrDecrG::IncrDecrG`.
                public unsafe IncrDecrG(MR.CS.CSharp.ConstIncrDecrG _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_IncrDecrG_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstIncrDecrG._Underlying *__MR_CSharp_IncrDecrG_ConstructFromAnother(MR.CS.CSharp.IncrDecrG._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_IncrDecrG_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::IncrDecrG::operator++`.
                public unsafe void Incr(MR.CS.CSharp.IncrDecrG _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_incr_MR_CSharp_IncrDecrG", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IncrDecrG._Underlying *__MR_C_incr_MR_CSharp_IncrDecrG(MR.CS.CSharp.IncrDecrG._Underlying *_this);
                    MR.CS.CSharp.IncrDecrG _unused_ret = new(__MR_C_incr_MR_CSharp_IncrDecrG(_this._UnderlyingPtr), is_owning: false);
                }

                /// Generated from method `MR::CSharp::IncrDecrG::operator--`.
                public unsafe void Decr(MR.CS.CSharp.IncrDecrG _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_decr_MR_CSharp_IncrDecrG", ExactSpelling = true)]
                    extern static MR.CS.CSharp.IncrDecrG._Underlying *__MR_C_decr_MR_CSharp_IncrDecrG(MR.CS.CSharp.IncrDecrG._Underlying *_this);
                    MR.CS.CSharp.IncrDecrG _unused_ret = new(__MR_C_decr_MR_CSharp_IncrDecrG(_this._UnderlyingPtr), is_owning: false);
                }
            }

            /// This is used for optional parameters of class `IncrDecrG` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `IncrDecrG`/`ConstIncrDecrG` to pass it to the function.
            public class InOptConstIncrDecrG
            {
                public ConstIncrDecrG? Opt;

                public InOptConstIncrDecrG() {}
                public InOptConstIncrDecrG(ConstIncrDecrG NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstIncrDecrG(ConstIncrDecrG NewOpt) {return new InOptConstIncrDecrG(NewOpt);}
            }

            // This class is non-copyable, but is trivially movable, so we treat it as if it was copyable.
            /// Generated from class `MR::CSharp::IncrDecrH`.
            /// This is the const half of the class.
            public class ConstIncrDecrH : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstIncrDecrH(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_IncrDecrH_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_IncrDecrH_Destroy(_Underlying *_this);
                    __MR_CSharp_IncrDecrH_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstIncrDecrH() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstIncrDecrH() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_IncrDecrH_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstIncrDecrH._Underlying *__MR_CSharp_IncrDecrH_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_IncrDecrH_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::IncrDecrH::IncrDecrH`.
                public unsafe ConstIncrDecrH(MR.CS.CSharp.ConstIncrDecrH _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_IncrDecrH_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstIncrDecrH._Underlying *__MR_CSharp_IncrDecrH_ConstructFromAnother(MR.CS.CSharp.IncrDecrH._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_IncrDecrH_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::IncrDecrH::operator++`.
                public unsafe void Incr(MR.CS.CSharp.ConstIncrDecrH _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_incr_MR_CSharp_IncrDecrH", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstIncrDecrH._Underlying *__MR_C_incr_MR_CSharp_IncrDecrH(MR.CS.CSharp.ConstIncrDecrH._Underlying *_this);
                    MR.CS.CSharp.ConstIncrDecrH _unused_ret = new(__MR_C_incr_MR_CSharp_IncrDecrH(_this._UnderlyingPtr), is_owning: false);
                }

                /// Generated from method `MR::CSharp::IncrDecrH::operator++`.
                public static unsafe IncrDecrH operator++(MR.CS.CSharp.ConstIncrDecrH _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_incr_MR_CSharp_IncrDecrH", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstIncrDecrH._Underlying *__MR_C_incr_MR_CSharp_IncrDecrH(MR.CS.CSharp.ConstIncrDecrH._Underlying *_this);
                    IncrDecrH _this_copy = new(_this);
                    MR.CS.CSharp.ConstIncrDecrH _unused_ret = new(__MR_C_incr_MR_CSharp_IncrDecrH(_this_copy._UnderlyingPtr), is_owning: false);
                    return _this_copy;
                }

                /// Generated from method `MR::CSharp::IncrDecrH::operator--`.
                public unsafe void Decr(MR.CS.CSharp.ConstIncrDecrH _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_decr_MR_CSharp_IncrDecrH", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstIncrDecrH._Underlying *__MR_C_decr_MR_CSharp_IncrDecrH(MR.CS.CSharp.ConstIncrDecrH._Underlying *_this);
                    MR.CS.CSharp.ConstIncrDecrH _unused_ret = new(__MR_C_decr_MR_CSharp_IncrDecrH(_this._UnderlyingPtr), is_owning: false);
                }

                /// Generated from method `MR::CSharp::IncrDecrH::operator--`.
                public static unsafe IncrDecrH operator--(MR.CS.CSharp.ConstIncrDecrH _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_decr_MR_CSharp_IncrDecrH", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstIncrDecrH._Underlying *__MR_C_decr_MR_CSharp_IncrDecrH(MR.CS.CSharp.ConstIncrDecrH._Underlying *_this);
                    IncrDecrH _this_copy = new(_this);
                    MR.CS.CSharp.ConstIncrDecrH _unused_ret = new(__MR_C_decr_MR_CSharp_IncrDecrH(_this_copy._UnderlyingPtr), is_owning: false);
                    return _this_copy;
                }
            }

            // This class is non-copyable, but is trivially movable, so we treat it as if it was copyable.
            /// Generated from class `MR::CSharp::IncrDecrH`.
            /// This is the non-const half of the class.
            public class IncrDecrH : ConstIncrDecrH
            {
                internal unsafe IncrDecrH(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe IncrDecrH() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_IncrDecrH_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstIncrDecrH._Underlying *__MR_CSharp_IncrDecrH_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_IncrDecrH_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::IncrDecrH::IncrDecrH`.
                public unsafe IncrDecrH(MR.CS.CSharp.ConstIncrDecrH _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_IncrDecrH_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstIncrDecrH._Underlying *__MR_CSharp_IncrDecrH_ConstructFromAnother(MR.CS.CSharp.IncrDecrH._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_IncrDecrH_ConstructFromAnother(_other._UnderlyingPtr);
                }
            }

            /// This is used for optional parameters of class `IncrDecrH` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `IncrDecrH`/`ConstIncrDecrH` to pass it to the function.
            public class InOptConstIncrDecrH
            {
                public ConstIncrDecrH? Opt;

                public InOptConstIncrDecrH() {}
                public InOptConstIncrDecrH(ConstIncrDecrH NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstIncrDecrH(ConstIncrDecrH NewOpt) {return new InOptConstIncrDecrH(NewOpt);}
            }

            // Test equality comparison.
            /// Generated from class `MR::CSharp::EqualityA`.
            /// This is the const half of the class.
            public class ConstEqualityA : MR.CS.Misc.Object, System.IDisposable, System.IEquatable<MR.CS.CSharp.ConstEqualityA>
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstEqualityA(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_EqualityA_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_EqualityA_Destroy(_Underlying *_this);
                    __MR_CSharp_EqualityA_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstEqualityA() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstEqualityA() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_EqualityA_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstEqualityA._Underlying *__MR_CSharp_EqualityA_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_EqualityA_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::EqualityA::EqualityA`.
                public unsafe ConstEqualityA(MR.CS.CSharp.ConstEqualityA _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_EqualityA_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstEqualityA._Underlying *__MR_CSharp_EqualityA_ConstructFromAnother(MR.CS.CSharp.EqualityA._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_EqualityA_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::EqualityA::operator==`.
                public static unsafe bool operator==(MR.CS.CSharp.ConstEqualityA _this, MR.CS.CSharp.ConstEqualityA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_equal_MR_CSharp_EqualityA", ExactSpelling = true)]
                    extern static byte __MR_C_equal_MR_CSharp_EqualityA(MR.CS.CSharp.ConstEqualityA._Underlying *_this, MR.CS.CSharp.ConstEqualityA._Underlying *_1);
                    return __MR_C_equal_MR_CSharp_EqualityA(_this._UnderlyingPtr, _1._UnderlyingPtr) != 0;
                }

                public static unsafe bool operator!=(MR.CS.CSharp.ConstEqualityA _this, MR.CS.CSharp.ConstEqualityA _1)
                {
                    return !(_this == _1);
                }

                // IEquatable:

                public bool Equals(MR.CS.CSharp.ConstEqualityA? _1)
                {
                    if (_1 is null)
                        return false;
                    return this == _1;
                }

                public override bool Equals(object? other)
                {
                    if (other is null)
                        return false;
                    if (other is MR.CS.CSharp.ConstEqualityA)
                        return this == (MR.CS.CSharp.ConstEqualityA)other;
                    return false;
                }
            }

            // Test equality comparison.
            /// Generated from class `MR::CSharp::EqualityA`.
            /// This is the non-const half of the class.
            public class EqualityA : ConstEqualityA, System.IEquatable<int>
            {
                internal unsafe EqualityA(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe EqualityA() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_EqualityA_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstEqualityA._Underlying *__MR_CSharp_EqualityA_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_EqualityA_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::EqualityA::EqualityA`.
                public unsafe EqualityA(MR.CS.CSharp.ConstEqualityA _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_EqualityA_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstEqualityA._Underlying *__MR_CSharp_EqualityA_ConstructFromAnother(MR.CS.CSharp.EqualityA._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_EqualityA_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::EqualityA::operator=`.
                public unsafe MR.CS.CSharp.EqualityA Assign(MR.CS.CSharp.ConstEqualityA _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_EqualityA_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.EqualityA._Underlying *__MR_CSharp_EqualityA_AssignFromAnother(_Underlying *_this, MR.CS.CSharp.EqualityA._Underlying *_other);
                    return new(__MR_CSharp_EqualityA_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }

                /// Generated from method `MR::CSharp::EqualityA::operator==`.
                public static unsafe bool operator==(MR.CS.CSharp.EqualityA _this, int _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_equal_MR_CSharp_EqualityA_int", ExactSpelling = true)]
                    extern static byte __MR_C_equal_MR_CSharp_EqualityA_int(MR.CS.CSharp.EqualityA._Underlying *_this, int _1);
                    return __MR_C_equal_MR_CSharp_EqualityA_int(_this._UnderlyingPtr, _1) != 0;
                }

                public static unsafe bool operator!=(MR.CS.CSharp.EqualityA _this, int _1)
                {
                    return !(_this == _1);
                }

                // IEquatable:

                public bool Equals(int _1)
                {
                    return this == _1;
                }

                public override bool Equals(object? other)
                {
                    if (other is null)
                        return false;
                    if (other is int)
                        return this == (int)other;
                    return base.Equals(other);
                }
            }

            /// This is used for optional parameters of class `EqualityA` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `EqualityA`/`ConstEqualityA` to pass it to the function.
            public class InOptConstEqualityA
            {
                public ConstEqualityA? Opt;

                public InOptConstEqualityA() {}
                public InOptConstEqualityA(ConstEqualityA NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstEqualityA(ConstEqualityA NewOpt) {return new InOptConstEqualityA(NewOpt);}
            }

            // Return type isn't `bool`.
            /// Generated from class `MR::CSharp::EqualityB`.
            /// This is the const half of the class.
            public class ConstEqualityB : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstEqualityB(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_EqualityB_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_EqualityB_Destroy(_Underlying *_this);
                    __MR_CSharp_EqualityB_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstEqualityB() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstEqualityB() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_EqualityB_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstEqualityB._Underlying *__MR_CSharp_EqualityB_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_EqualityB_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::EqualityB::EqualityB`.
                public unsafe ConstEqualityB(MR.CS.CSharp.ConstEqualityB _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_EqualityB_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstEqualityB._Underlying *__MR_CSharp_EqualityB_ConstructFromAnother(MR.CS.CSharp.EqualityB._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_EqualityB_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::EqualityB::operator==`.
                public unsafe int Equal(MR.CS.CSharp.ConstEqualityB _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_equal_MR_CSharp_EqualityB", ExactSpelling = true)]
                    extern static int __MR_C_equal_MR_CSharp_EqualityB(_Underlying *_this, MR.CS.CSharp.ConstEqualityB._Underlying *_1);
                    return __MR_C_equal_MR_CSharp_EqualityB(_UnderlyingPtr, _1._UnderlyingPtr);
                }
            }

            // Return type isn't `bool`.
            /// Generated from class `MR::CSharp::EqualityB`.
            /// This is the non-const half of the class.
            public class EqualityB : ConstEqualityB
            {
                internal unsafe EqualityB(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe EqualityB() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_EqualityB_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstEqualityB._Underlying *__MR_CSharp_EqualityB_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_EqualityB_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::EqualityB::EqualityB`.
                public unsafe EqualityB(MR.CS.CSharp.ConstEqualityB _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_EqualityB_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstEqualityB._Underlying *__MR_CSharp_EqualityB_ConstructFromAnother(MR.CS.CSharp.EqualityB._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_EqualityB_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::EqualityB::operator=`.
                public unsafe MR.CS.CSharp.EqualityB Assign(MR.CS.CSharp.ConstEqualityB _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_EqualityB_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.EqualityB._Underlying *__MR_CSharp_EqualityB_AssignFromAnother(_Underlying *_this, MR.CS.CSharp.EqualityB._Underlying *_other);
                    return new(__MR_CSharp_EqualityB_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }

                /// Generated from method `MR::CSharp::EqualityB::operator==`.
                public unsafe int Equal(int _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_equal_MR_CSharp_EqualityB_int", ExactSpelling = true)]
                    extern static int __MR_C_equal_MR_CSharp_EqualityB_int(_Underlying *_this, int _1);
                    return __MR_C_equal_MR_CSharp_EqualityB_int(_UnderlyingPtr, _1);
                }

                /// Generated from method `MR::CSharp::EqualityB::operator!=`.
                public unsafe int NotEqual(int _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_not_equal_MR_CSharp_EqualityB_int", ExactSpelling = true)]
                    extern static int __MR_C_not_equal_MR_CSharp_EqualityB_int(_Underlying *_this, int _1);
                    return __MR_C_not_equal_MR_CSharp_EqualityB_int(_UnderlyingPtr, _1);
                }
            }

            /// This is used for optional parameters of class `EqualityB` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `EqualityB`/`ConstEqualityB` to pass it to the function.
            public class InOptConstEqualityB
            {
                public ConstEqualityB? Opt;

                public InOptConstEqualityB() {}
                public InOptConstEqualityB(ConstEqualityB NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstEqualityB(ConstEqualityB NewOpt) {return new InOptConstEqualityB(NewOpt);}
            }

            // Return type is `void`.
            /// Generated from class `MR::CSharp::EqualityC`.
            /// This is the const half of the class.
            public class ConstEqualityC : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstEqualityC(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_EqualityC_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_EqualityC_Destroy(_Underlying *_this);
                    __MR_CSharp_EqualityC_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstEqualityC() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstEqualityC() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_EqualityC_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstEqualityC._Underlying *__MR_CSharp_EqualityC_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_EqualityC_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::EqualityC::EqualityC`.
                public unsafe ConstEqualityC(MR.CS.CSharp.ConstEqualityC _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_EqualityC_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstEqualityC._Underlying *__MR_CSharp_EqualityC_ConstructFromAnother(MR.CS.CSharp.EqualityC._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_EqualityC_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::EqualityC::operator==`.
                public unsafe void Equal(MR.CS.CSharp.ConstEqualityC _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_equal_MR_CSharp_EqualityC", ExactSpelling = true)]
                    extern static void __MR_C_equal_MR_CSharp_EqualityC(_Underlying *_this, MR.CS.CSharp.ConstEqualityC._Underlying *_1);
                    __MR_C_equal_MR_CSharp_EqualityC(_UnderlyingPtr, _1._UnderlyingPtr);
                }
            }

            // Return type is `void`.
            /// Generated from class `MR::CSharp::EqualityC`.
            /// This is the non-const half of the class.
            public class EqualityC : ConstEqualityC
            {
                internal unsafe EqualityC(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe EqualityC() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_EqualityC_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstEqualityC._Underlying *__MR_CSharp_EqualityC_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_EqualityC_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::EqualityC::EqualityC`.
                public unsafe EqualityC(MR.CS.CSharp.ConstEqualityC _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_EqualityC_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstEqualityC._Underlying *__MR_CSharp_EqualityC_ConstructFromAnother(MR.CS.CSharp.EqualityC._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_EqualityC_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::EqualityC::operator=`.
                public unsafe MR.CS.CSharp.EqualityC Assign(MR.CS.CSharp.ConstEqualityC _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_EqualityC_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.EqualityC._Underlying *__MR_CSharp_EqualityC_AssignFromAnother(_Underlying *_this, MR.CS.CSharp.EqualityC._Underlying *_other);
                    return new(__MR_CSharp_EqualityC_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }

                /// Generated from method `MR::CSharp::EqualityC::operator==`.
                public unsafe void Equal(int _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_equal_MR_CSharp_EqualityC_int", ExactSpelling = true)]
                    extern static void __MR_C_equal_MR_CSharp_EqualityC_int(_Underlying *_this, int _1);
                    __MR_C_equal_MR_CSharp_EqualityC_int(_UnderlyingPtr, _1);
                }

                /// Generated from method `MR::CSharp::EqualityC::operator!=`.
                public unsafe void NotEqual(int _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_not_equal_MR_CSharp_EqualityC_int", ExactSpelling = true)]
                    extern static void __MR_C_not_equal_MR_CSharp_EqualityC_int(_Underlying *_this, int _1);
                    __MR_C_not_equal_MR_CSharp_EqualityC_int(_UnderlyingPtr, _1);
                }
            }

            /// This is used for optional parameters of class `EqualityC` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `EqualityC`/`ConstEqualityC` to pass it to the function.
            public class InOptConstEqualityC
            {
                public ConstEqualityC? Opt;

                public InOptConstEqualityC() {}
                public InOptConstEqualityC(ConstEqualityC NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstEqualityC(ConstEqualityC NewOpt) {return new InOptConstEqualityC(NewOpt);}
            }

            // The C# parameter type ends with `?`, and isn't a managed type.
            /// Generated from class `MR::CSharp::EqualityD`.
            /// This is the const half of the class.
            public class ConstEqualityD : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstEqualityD(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_EqualityD_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_EqualityD_Destroy(_Underlying *_this);
                    __MR_CSharp_EqualityD_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstEqualityD() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstEqualityD() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_EqualityD_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstEqualityD._Underlying *__MR_CSharp_EqualityD_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_EqualityD_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::EqualityD::EqualityD`.
                public unsafe ConstEqualityD(MR.CS.CSharp.ConstEqualityD _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_EqualityD_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstEqualityD._Underlying *__MR_CSharp_EqualityD_ConstructFromAnother(MR.CS.CSharp.EqualityD._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_EqualityD_ConstructFromAnother(_other._UnderlyingPtr);
                }
            }

            // The C# parameter type ends with `?`, and isn't a managed type.
            /// Generated from class `MR::CSharp::EqualityD`.
            /// This is the non-const half of the class.
            public class EqualityD : ConstEqualityD, System.IEquatable<int?>
            {
                internal unsafe EqualityD(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe EqualityD() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_EqualityD_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstEqualityD._Underlying *__MR_CSharp_EqualityD_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_EqualityD_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::EqualityD::EqualityD`.
                public unsafe EqualityD(MR.CS.CSharp.ConstEqualityD _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_EqualityD_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstEqualityD._Underlying *__MR_CSharp_EqualityD_ConstructFromAnother(MR.CS.CSharp.EqualityD._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_EqualityD_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::EqualityD::operator=`.
                public unsafe MR.CS.CSharp.EqualityD Assign(MR.CS.CSharp.ConstEqualityD _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_EqualityD_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.EqualityD._Underlying *__MR_CSharp_EqualityD_AssignFromAnother(_Underlying *_this, MR.CS.CSharp.EqualityD._Underlying *_other);
                    return new(__MR_CSharp_EqualityD_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }

                /// Generated from method `MR::CSharp::EqualityD::operator==`.
                public static unsafe bool operator==(MR.CS.CSharp.EqualityD _this, int? _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_equal_MR_CSharp_EqualityD_const_int_ptr", ExactSpelling = true)]
                    extern static byte __MR_C_equal_MR_CSharp_EqualityD_const_int_ptr(MR.CS.CSharp.EqualityD._Underlying *_this, int *_1);
                    int __deref__1 = _1.GetValueOrDefault();
                    return __MR_C_equal_MR_CSharp_EqualityD_const_int_ptr(_this._UnderlyingPtr, _1.HasValue ? &__deref__1 : null) != 0;
                }

                public static unsafe bool operator!=(MR.CS.CSharp.EqualityD _this, int? _1)
                {
                    return !(_this == _1);
                }

                // IEquatable:

                public bool Equals(int? _1)
                {
                    return this == _1;
                }

                public override bool Equals(object? other)
                {
                    if (other is null)
                        return false;
                    if (other is int)
                        return this == (int)other;
                    return false;
                }
            }

            /// This is used for optional parameters of class `EqualityD` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `EqualityD`/`ConstEqualityD` to pass it to the function.
            public class InOptConstEqualityD
            {
                public ConstEqualityD? Opt;

                public InOptConstEqualityD() {}
                public InOptConstEqualityD(ConstEqualityD NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstEqualityD(ConstEqualityD NewOpt) {return new InOptConstEqualityD(NewOpt);}
            }

            // The C# parameter type ends with `?`, and is a managed type.
            /// Generated from class `MR::CSharp::EqualityE`.
            /// This is the const half of the class.
            public class ConstEqualityE : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstEqualityE(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_EqualityE_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_EqualityE_Destroy(_Underlying *_this);
                    __MR_CSharp_EqualityE_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstEqualityE() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstEqualityE() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_EqualityE_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstEqualityE._Underlying *__MR_CSharp_EqualityE_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_EqualityE_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::EqualityE::EqualityE`.
                public unsafe ConstEqualityE(MR.CS.CSharp.ConstEqualityE _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_EqualityE_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstEqualityE._Underlying *__MR_CSharp_EqualityE_ConstructFromAnother(MR.CS.CSharp.EqualityE._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_EqualityE_ConstructFromAnother(_other._UnderlyingPtr);
                }
            }

            // The C# parameter type ends with `?`, and is a managed type.
            /// Generated from class `MR::CSharp::EqualityE`.
            /// This is the non-const half of the class.
            public class EqualityE : ConstEqualityE, System.IEquatable<MR.CS.CSharp.EqualityD?>
            {
                internal unsafe EqualityE(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe EqualityE() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_EqualityE_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstEqualityE._Underlying *__MR_CSharp_EqualityE_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_EqualityE_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::EqualityE::EqualityE`.
                public unsafe EqualityE(MR.CS.CSharp.ConstEqualityE _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_EqualityE_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstEqualityE._Underlying *__MR_CSharp_EqualityE_ConstructFromAnother(MR.CS.CSharp.EqualityE._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_EqualityE_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::EqualityE::operator=`.
                public unsafe MR.CS.CSharp.EqualityE Assign(MR.CS.CSharp.ConstEqualityE _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_EqualityE_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.EqualityE._Underlying *__MR_CSharp_EqualityE_AssignFromAnother(_Underlying *_this, MR.CS.CSharp.EqualityE._Underlying *_other);
                    return new(__MR_CSharp_EqualityE_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }

                /// Generated from method `MR::CSharp::EqualityE::operator==`.
                public static unsafe bool operator==(MR.CS.CSharp.EqualityE _this, MR.CS.CSharp.EqualityD? _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_equal_MR_CSharp_EqualityE_MR_CSharp_EqualityD_ptr", ExactSpelling = true)]
                    extern static byte __MR_C_equal_MR_CSharp_EqualityE_MR_CSharp_EqualityD_ptr(MR.CS.CSharp.EqualityE._Underlying *_this, MR.CS.CSharp.EqualityD._Underlying *_1);
                    return __MR_C_equal_MR_CSharp_EqualityE_MR_CSharp_EqualityD_ptr(_this._UnderlyingPtr, _1 is not null ? _1._UnderlyingPtr : null) != 0;
                }

                public static unsafe bool operator!=(MR.CS.CSharp.EqualityE _this, MR.CS.CSharp.EqualityD? _1)
                {
                    return !(_this == _1);
                }

                // IEquatable:

                public bool Equals(MR.CS.CSharp.EqualityD? _1)
                {
                    return this == _1;
                }

                public override bool Equals(object? other)
                {
                    if (other is null)
                        return false;
                    if (other is MR.CS.CSharp.EqualityD)
                        return this == (MR.CS.CSharp.EqualityD)other;
                    return false;
                }
            }

            /// This is used for optional parameters of class `EqualityE` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `EqualityE`/`ConstEqualityE` to pass it to the function.
            public class InOptConstEqualityE
            {
                public ConstEqualityE? Opt;

                public InOptConstEqualityE() {}
                public InOptConstEqualityE(ConstEqualityE NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstEqualityE(ConstEqualityE NewOpt) {return new InOptConstEqualityE(NewOpt);}
            }

            // The happy path, the operator is const.
            /// Generated from class `MR::CSharp::RelationalA`.
            /// This is the const half of the class.
            public class ConstRelationalA : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstRelationalA(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_RelationalA_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_RelationalA_Destroy(_Underlying *_this);
                    __MR_CSharp_RelationalA_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstRelationalA() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstRelationalA() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_RelationalA_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstRelationalA._Underlying *__MR_CSharp_RelationalA_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_RelationalA_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::RelationalA::RelationalA`.
                public unsafe ConstRelationalA(MR.CS.CSharp.ConstRelationalA _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_RelationalA_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstRelationalA._Underlying *__MR_CSharp_RelationalA_ConstructFromAnother(MR.CS.CSharp.RelationalA._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_RelationalA_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::RelationalA::operator<`.
                public static unsafe bool operator<(MR.CS.CSharp.ConstRelationalA _this, MR.CS.CSharp.ConstRelationalA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_less_MR_CSharp_RelationalA", ExactSpelling = true)]
                    extern static byte __MR_C_less_MR_CSharp_RelationalA(MR.CS.CSharp.ConstRelationalA._Underlying *_this, MR.CS.CSharp.ConstRelationalA._Underlying *_1);
                    return __MR_C_less_MR_CSharp_RelationalA(_this._UnderlyingPtr, _1._UnderlyingPtr) != 0;
                }

                public static unsafe bool operator>(MR.CS.CSharp.ConstRelationalA _this, MR.CS.CSharp.ConstRelationalA _1)
                {
                    return _1 < _this;
                }

                public static unsafe bool operator<=(MR.CS.CSharp.ConstRelationalA _this, MR.CS.CSharp.ConstRelationalA _1)
                {
                    return !(_1 < _this);
                }

                public static unsafe bool operator>=(MR.CS.CSharp.ConstRelationalA _this, MR.CS.CSharp.ConstRelationalA _1)
                {
                    return !(_this < _1);
                }
            }

            // The happy path, the operator is const.
            /// Generated from class `MR::CSharp::RelationalA`.
            /// This is the non-const half of the class.
            public class RelationalA : ConstRelationalA
            {
                internal unsafe RelationalA(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe RelationalA() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_RelationalA_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstRelationalA._Underlying *__MR_CSharp_RelationalA_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_RelationalA_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::RelationalA::RelationalA`.
                public unsafe RelationalA(MR.CS.CSharp.ConstRelationalA _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_RelationalA_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstRelationalA._Underlying *__MR_CSharp_RelationalA_ConstructFromAnother(MR.CS.CSharp.RelationalA._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_RelationalA_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::RelationalA::operator=`.
                public unsafe MR.CS.CSharp.RelationalA Assign(MR.CS.CSharp.ConstRelationalA _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_RelationalA_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.RelationalA._Underlying *__MR_CSharp_RelationalA_AssignFromAnother(_Underlying *_this, MR.CS.CSharp.RelationalA._Underlying *_other);
                    return new(__MR_CSharp_RelationalA_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }
            }

            /// This is used for optional parameters of class `RelationalA` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `RelationalA`/`ConstRelationalA` to pass it to the function.
            public class InOptConstRelationalA
            {
                public ConstRelationalA? Opt;

                public InOptConstRelationalA() {}
                public InOptConstRelationalA(ConstRelationalA NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstRelationalA(ConstRelationalA NewOpt) {return new InOptConstRelationalA(NewOpt);}
            }

            // The happy path, the operator is non-const.
            /// Generated from class `MR::CSharp::RelationalB`.
            /// This is the const half of the class.
            public class ConstRelationalB : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstRelationalB(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_RelationalB_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_RelationalB_Destroy(_Underlying *_this);
                    __MR_CSharp_RelationalB_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstRelationalB() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstRelationalB() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_RelationalB_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstRelationalB._Underlying *__MR_CSharp_RelationalB_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_RelationalB_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::RelationalB::RelationalB`.
                public unsafe ConstRelationalB(MR.CS.CSharp.ConstRelationalB _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_RelationalB_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstRelationalB._Underlying *__MR_CSharp_RelationalB_ConstructFromAnother(MR.CS.CSharp.RelationalB._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_RelationalB_ConstructFromAnother(_other._UnderlyingPtr);
                }
            }

            // The happy path, the operator is non-const.
            /// Generated from class `MR::CSharp::RelationalB`.
            /// This is the non-const half of the class.
            public class RelationalB : ConstRelationalB
            {
                internal unsafe RelationalB(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe RelationalB() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_RelationalB_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstRelationalB._Underlying *__MR_CSharp_RelationalB_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_RelationalB_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::RelationalB::RelationalB`.
                public unsafe RelationalB(MR.CS.CSharp.ConstRelationalB _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_RelationalB_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstRelationalB._Underlying *__MR_CSharp_RelationalB_ConstructFromAnother(MR.CS.CSharp.RelationalB._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_RelationalB_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::RelationalB::operator=`.
                public unsafe MR.CS.CSharp.RelationalB Assign(MR.CS.CSharp.ConstRelationalB _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_RelationalB_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.RelationalB._Underlying *__MR_CSharp_RelationalB_AssignFromAnother(_Underlying *_this, MR.CS.CSharp.RelationalB._Underlying *_other);
                    return new(__MR_CSharp_RelationalB_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }

                /// Generated from method `MR::CSharp::RelationalB::operator<`.
                public static unsafe bool operator<(MR.CS.CSharp.RelationalB _this, MR.CS.CSharp.RelationalB _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_less_MR_CSharp_RelationalB", ExactSpelling = true)]
                    extern static byte __MR_C_less_MR_CSharp_RelationalB(MR.CS.CSharp.RelationalB._Underlying *_this, MR.CS.CSharp.RelationalB._Underlying *_1);
                    return __MR_C_less_MR_CSharp_RelationalB(_this._UnderlyingPtr, _1._UnderlyingPtr) != 0;
                }

                public static unsafe bool operator>(MR.CS.CSharp.RelationalB _this, MR.CS.CSharp.RelationalB _1)
                {
                    return _1 < _this;
                }

                public static unsafe bool operator<=(MR.CS.CSharp.RelationalB _this, MR.CS.CSharp.RelationalB _1)
                {
                    return !(_1 < _this);
                }

                public static unsafe bool operator>=(MR.CS.CSharp.RelationalB _this, MR.CS.CSharp.RelationalB _1)
                {
                    return !(_this < _1);
                }
            }

            /// This is used for optional parameters of class `RelationalB` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `RelationalB`/`ConstRelationalB` to pass it to the function.
            public class InOptConstRelationalB
            {
                public ConstRelationalB? Opt;

                public InOptConstRelationalB() {}
                public InOptConstRelationalB(ConstRelationalB NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstRelationalB(ConstRelationalB NewOpt) {return new InOptConstRelationalB(NewOpt);}
            }

            // The operators have mixed constness, which causes them to be demoted to functions.
            /// Generated from class `MR::CSharp::RelationalC`.
            /// This is the const half of the class.
            public class ConstRelationalC : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstRelationalC(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_RelationalC_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_RelationalC_Destroy(_Underlying *_this);
                    __MR_CSharp_RelationalC_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstRelationalC() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstRelationalC() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_RelationalC_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstRelationalC._Underlying *__MR_CSharp_RelationalC_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_RelationalC_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::RelationalC::RelationalC`.
                public unsafe ConstRelationalC(MR.CS.CSharp.ConstRelationalC _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_RelationalC_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstRelationalC._Underlying *__MR_CSharp_RelationalC_ConstructFromAnother(MR.CS.CSharp.RelationalC._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_RelationalC_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::RelationalC::operator<`.
                public unsafe bool Less(MR.CS.CSharp.RelationalC _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_less_MR_CSharp_RelationalC", ExactSpelling = true)]
                    extern static byte __MR_C_less_MR_CSharp_RelationalC(_Underlying *_this, MR.CS.CSharp.RelationalC._Underlying *_1);
                    return __MR_C_less_MR_CSharp_RelationalC(_UnderlyingPtr, _1._UnderlyingPtr) != 0;
                }

                /// Generated from method `MR::CSharp::RelationalC::operator>`.
                public unsafe bool Greater(MR.CS.CSharp.RelationalC _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_greater_MR_CSharp_RelationalC", ExactSpelling = true)]
                    extern static byte __MR_C_greater_MR_CSharp_RelationalC(_Underlying *_this, MR.CS.CSharp.RelationalC._Underlying *_1);
                    return __MR_C_greater_MR_CSharp_RelationalC(_UnderlyingPtr, _1._UnderlyingPtr) != 0;
                }

                // bool operator<=(RelationalC &) const {return false;} // Skip one operator to observe the function missing.
                /// Generated from method `MR::CSharp::RelationalC::operator>=`.
                public unsafe bool GreaterEqual(MR.CS.CSharp.RelationalC _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_greater_equal_MR_CSharp_RelationalC", ExactSpelling = true)]
                    extern static byte __MR_C_greater_equal_MR_CSharp_RelationalC(_Underlying *_this, MR.CS.CSharp.RelationalC._Underlying *_1);
                    return __MR_C_greater_equal_MR_CSharp_RelationalC(_UnderlyingPtr, _1._UnderlyingPtr) != 0;
                }
            }

            // The operators have mixed constness, which causes them to be demoted to functions.
            /// Generated from class `MR::CSharp::RelationalC`.
            /// This is the non-const half of the class.
            public class RelationalC : ConstRelationalC
            {
                internal unsafe RelationalC(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe RelationalC() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_RelationalC_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstRelationalC._Underlying *__MR_CSharp_RelationalC_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_RelationalC_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::RelationalC::RelationalC`.
                public unsafe RelationalC(MR.CS.CSharp.ConstRelationalC _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_RelationalC_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstRelationalC._Underlying *__MR_CSharp_RelationalC_ConstructFromAnother(MR.CS.CSharp.RelationalC._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_RelationalC_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::RelationalC::operator=`.
                public unsafe MR.CS.CSharp.RelationalC Assign(MR.CS.CSharp.ConstRelationalC _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_RelationalC_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.RelationalC._Underlying *__MR_CSharp_RelationalC_AssignFromAnother(_Underlying *_this, MR.CS.CSharp.RelationalC._Underlying *_other);
                    return new(__MR_CSharp_RelationalC_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }
            }

            /// This is used for optional parameters of class `RelationalC` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `RelationalC`/`ConstRelationalC` to pass it to the function.
            public class InOptConstRelationalC
            {
                public ConstRelationalC? Opt;

                public InOptConstRelationalC() {}
                public InOptConstRelationalC(ConstRelationalC NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstRelationalC(ConstRelationalC NewOpt) {return new InOptConstRelationalC(NewOpt);}
            }

            // The operators have operands of different types, causing them to be demoted to functions.
            /// Generated from class `MR::CSharp::RelationalD`.
            /// This is the const half of the class.
            public class ConstRelationalD : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstRelationalD(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_RelationalD_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_RelationalD_Destroy(_Underlying *_this);
                    __MR_CSharp_RelationalD_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstRelationalD() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstRelationalD() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_RelationalD_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstRelationalD._Underlying *__MR_CSharp_RelationalD_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_RelationalD_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::RelationalD::RelationalD`.
                public unsafe ConstRelationalD(MR.CS.CSharp.ConstRelationalD _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_RelationalD_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstRelationalD._Underlying *__MR_CSharp_RelationalD_ConstructFromAnother(MR.CS.CSharp.RelationalD._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_RelationalD_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::RelationalD::operator<`.
                public unsafe bool Less(MR.CS.CSharp.RelationalC _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_less_MR_CSharp_RelationalD_MR_CSharp_RelationalC", ExactSpelling = true)]
                    extern static byte __MR_C_less_MR_CSharp_RelationalD_MR_CSharp_RelationalC(_Underlying *_this, MR.CS.CSharp.RelationalC._Underlying *_1);
                    return __MR_C_less_MR_CSharp_RelationalD_MR_CSharp_RelationalC(_UnderlyingPtr, _1._UnderlyingPtr) != 0;
                }

                /// Generated from method `MR::CSharp::RelationalD::operator>`.
                public unsafe bool Greater(MR.CS.CSharp.RelationalC _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_greater_MR_CSharp_RelationalD_MR_CSharp_RelationalC", ExactSpelling = true)]
                    extern static byte __MR_C_greater_MR_CSharp_RelationalD_MR_CSharp_RelationalC(_Underlying *_this, MR.CS.CSharp.RelationalC._Underlying *_1);
                    return __MR_C_greater_MR_CSharp_RelationalD_MR_CSharp_RelationalC(_UnderlyingPtr, _1._UnderlyingPtr) != 0;
                }

                /// Generated from method `MR::CSharp::RelationalD::operator<=`.
                public unsafe bool LessEqual(MR.CS.CSharp.RelationalC _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_less_equal_MR_CSharp_RelationalD_MR_CSharp_RelationalC", ExactSpelling = true)]
                    extern static byte __MR_C_less_equal_MR_CSharp_RelationalD_MR_CSharp_RelationalC(_Underlying *_this, MR.CS.CSharp.RelationalC._Underlying *_1);
                    return __MR_C_less_equal_MR_CSharp_RelationalD_MR_CSharp_RelationalC(_UnderlyingPtr, _1._UnderlyingPtr) != 0;
                }

                /// Generated from method `MR::CSharp::RelationalD::operator>=`.
                public unsafe bool GreaterEqual(MR.CS.CSharp.RelationalC _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_greater_equal_MR_CSharp_RelationalD_MR_CSharp_RelationalC", ExactSpelling = true)]
                    extern static byte __MR_C_greater_equal_MR_CSharp_RelationalD_MR_CSharp_RelationalC(_Underlying *_this, MR.CS.CSharp.RelationalC._Underlying *_1);
                    return __MR_C_greater_equal_MR_CSharp_RelationalD_MR_CSharp_RelationalC(_UnderlyingPtr, _1._UnderlyingPtr) != 0;
                }
            }

            // The operators have operands of different types, causing them to be demoted to functions.
            /// Generated from class `MR::CSharp::RelationalD`.
            /// This is the non-const half of the class.
            public class RelationalD : ConstRelationalD
            {
                internal unsafe RelationalD(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe RelationalD() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_RelationalD_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstRelationalD._Underlying *__MR_CSharp_RelationalD_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_RelationalD_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::RelationalD::RelationalD`.
                public unsafe RelationalD(MR.CS.CSharp.ConstRelationalD _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_RelationalD_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstRelationalD._Underlying *__MR_CSharp_RelationalD_ConstructFromAnother(MR.CS.CSharp.RelationalD._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_RelationalD_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::RelationalD::operator=`.
                public unsafe MR.CS.CSharp.RelationalD Assign(MR.CS.CSharp.ConstRelationalD _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_RelationalD_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.RelationalD._Underlying *__MR_CSharp_RelationalD_AssignFromAnother(_Underlying *_this, MR.CS.CSharp.RelationalD._Underlying *_other);
                    return new(__MR_CSharp_RelationalD_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }
            }

            /// This is used for optional parameters of class `RelationalD` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `RelationalD`/`ConstRelationalD` to pass it to the function.
            public class InOptConstRelationalD
            {
                public ConstRelationalD? Opt;

                public InOptConstRelationalD() {}
                public InOptConstRelationalD(ConstRelationalD NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstRelationalD(ConstRelationalD NewOpt) {return new InOptConstRelationalD(NewOpt);}
            }

            // The operators have a weird return type.
            /// Generated from class `MR::CSharp::RelationalE`.
            /// This is the const half of the class.
            public class ConstRelationalE : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstRelationalE(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_RelationalE_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_RelationalE_Destroy(_Underlying *_this);
                    __MR_CSharp_RelationalE_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstRelationalE() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstRelationalE() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_RelationalE_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstRelationalE._Underlying *__MR_CSharp_RelationalE_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_RelationalE_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::RelationalE::RelationalE`.
                public unsafe ConstRelationalE(MR.CS.CSharp.ConstRelationalE _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_RelationalE_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstRelationalE._Underlying *__MR_CSharp_RelationalE_ConstructFromAnother(MR.CS.CSharp.RelationalE._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_RelationalE_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::RelationalE::operator<`.
                public unsafe int Less(MR.CS.CSharp.RelationalC _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_less_MR_CSharp_RelationalE_MR_CSharp_RelationalC", ExactSpelling = true)]
                    extern static int __MR_C_less_MR_CSharp_RelationalE_MR_CSharp_RelationalC(_Underlying *_this, MR.CS.CSharp.RelationalC._Underlying *_1);
                    return __MR_C_less_MR_CSharp_RelationalE_MR_CSharp_RelationalC(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::RelationalE::operator>`.
                public unsafe int Greater(MR.CS.CSharp.RelationalC _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_greater_MR_CSharp_RelationalE_MR_CSharp_RelationalC", ExactSpelling = true)]
                    extern static int __MR_C_greater_MR_CSharp_RelationalE_MR_CSharp_RelationalC(_Underlying *_this, MR.CS.CSharp.RelationalC._Underlying *_1);
                    return __MR_C_greater_MR_CSharp_RelationalE_MR_CSharp_RelationalC(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::RelationalE::operator<=`.
                public unsafe int LessEqual(MR.CS.CSharp.RelationalC _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_less_equal_MR_CSharp_RelationalE_MR_CSharp_RelationalC", ExactSpelling = true)]
                    extern static int __MR_C_less_equal_MR_CSharp_RelationalE_MR_CSharp_RelationalC(_Underlying *_this, MR.CS.CSharp.RelationalC._Underlying *_1);
                    return __MR_C_less_equal_MR_CSharp_RelationalE_MR_CSharp_RelationalC(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::RelationalE::operator>=`.
                public unsafe int GreaterEqual(MR.CS.CSharp.RelationalC _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_greater_equal_MR_CSharp_RelationalE_MR_CSharp_RelationalC", ExactSpelling = true)]
                    extern static int __MR_C_greater_equal_MR_CSharp_RelationalE_MR_CSharp_RelationalC(_Underlying *_this, MR.CS.CSharp.RelationalC._Underlying *_1);
                    return __MR_C_greater_equal_MR_CSharp_RelationalE_MR_CSharp_RelationalC(_UnderlyingPtr, _1._UnderlyingPtr);
                }
            }

            // The operators have a weird return type.
            /// Generated from class `MR::CSharp::RelationalE`.
            /// This is the non-const half of the class.
            public class RelationalE : ConstRelationalE
            {
                internal unsafe RelationalE(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe RelationalE() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_RelationalE_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstRelationalE._Underlying *__MR_CSharp_RelationalE_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_RelationalE_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::RelationalE::RelationalE`.
                public unsafe RelationalE(MR.CS.CSharp.ConstRelationalE _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_RelationalE_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstRelationalE._Underlying *__MR_CSharp_RelationalE_ConstructFromAnother(MR.CS.CSharp.RelationalE._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_RelationalE_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::RelationalE::operator=`.
                public unsafe MR.CS.CSharp.RelationalE Assign(MR.CS.CSharp.ConstRelationalE _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_RelationalE_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.RelationalE._Underlying *__MR_CSharp_RelationalE_AssignFromAnother(_Underlying *_this, MR.CS.CSharp.RelationalE._Underlying *_other);
                    return new(__MR_CSharp_RelationalE_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }
            }

            /// This is used for optional parameters of class `RelationalE` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `RelationalE`/`ConstRelationalE` to pass it to the function.
            public class InOptConstRelationalE
            {
                public ConstRelationalE? Opt;

                public InOptConstRelationalE() {}
                public InOptConstRelationalE(ConstRelationalE NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstRelationalE(ConstRelationalE NewOpt) {return new InOptConstRelationalE(NewOpt);}
            }

            // The operators return void.
            /// Generated from class `MR::CSharp::RelationalF`.
            /// This is the const half of the class.
            public class ConstRelationalF : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstRelationalF(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_RelationalF_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_RelationalF_Destroy(_Underlying *_this);
                    __MR_CSharp_RelationalF_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstRelationalF() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstRelationalF() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_RelationalF_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstRelationalF._Underlying *__MR_CSharp_RelationalF_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_RelationalF_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::RelationalF::RelationalF`.
                public unsafe ConstRelationalF(MR.CS.CSharp.ConstRelationalF _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_RelationalF_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstRelationalF._Underlying *__MR_CSharp_RelationalF_ConstructFromAnother(MR.CS.CSharp.RelationalF._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_RelationalF_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::RelationalF::operator<`.
                public unsafe void Less(MR.CS.CSharp.RelationalC _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_less_MR_CSharp_RelationalF_MR_CSharp_RelationalC", ExactSpelling = true)]
                    extern static void __MR_C_less_MR_CSharp_RelationalF_MR_CSharp_RelationalC(_Underlying *_this, MR.CS.CSharp.RelationalC._Underlying *_1);
                    __MR_C_less_MR_CSharp_RelationalF_MR_CSharp_RelationalC(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::RelationalF::operator>`.
                public unsafe void Greater(MR.CS.CSharp.RelationalC _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_greater_MR_CSharp_RelationalF_MR_CSharp_RelationalC", ExactSpelling = true)]
                    extern static void __MR_C_greater_MR_CSharp_RelationalF_MR_CSharp_RelationalC(_Underlying *_this, MR.CS.CSharp.RelationalC._Underlying *_1);
                    __MR_C_greater_MR_CSharp_RelationalF_MR_CSharp_RelationalC(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::RelationalF::operator<=`.
                public unsafe void LessEqual(MR.CS.CSharp.RelationalC _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_less_equal_MR_CSharp_RelationalF_MR_CSharp_RelationalC", ExactSpelling = true)]
                    extern static void __MR_C_less_equal_MR_CSharp_RelationalF_MR_CSharp_RelationalC(_Underlying *_this, MR.CS.CSharp.RelationalC._Underlying *_1);
                    __MR_C_less_equal_MR_CSharp_RelationalF_MR_CSharp_RelationalC(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::RelationalF::operator>=`.
                public unsafe void GreaterEqual(MR.CS.CSharp.RelationalC _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_greater_equal_MR_CSharp_RelationalF_MR_CSharp_RelationalC", ExactSpelling = true)]
                    extern static void __MR_C_greater_equal_MR_CSharp_RelationalF_MR_CSharp_RelationalC(_Underlying *_this, MR.CS.CSharp.RelationalC._Underlying *_1);
                    __MR_C_greater_equal_MR_CSharp_RelationalF_MR_CSharp_RelationalC(_UnderlyingPtr, _1._UnderlyingPtr);
                }
            }

            // The operators return void.
            /// Generated from class `MR::CSharp::RelationalF`.
            /// This is the non-const half of the class.
            public class RelationalF : ConstRelationalF
            {
                internal unsafe RelationalF(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe RelationalF() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_RelationalF_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstRelationalF._Underlying *__MR_CSharp_RelationalF_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_RelationalF_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::RelationalF::RelationalF`.
                public unsafe RelationalF(MR.CS.CSharp.ConstRelationalF _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_RelationalF_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstRelationalF._Underlying *__MR_CSharp_RelationalF_ConstructFromAnother(MR.CS.CSharp.RelationalF._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_RelationalF_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::RelationalF::operator=`.
                public unsafe MR.CS.CSharp.RelationalF Assign(MR.CS.CSharp.ConstRelationalF _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_RelationalF_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.RelationalF._Underlying *__MR_CSharp_RelationalF_AssignFromAnother(_Underlying *_this, MR.CS.CSharp.RelationalF._Underlying *_other);
                    return new(__MR_CSharp_RelationalF_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }
            }

            /// This is used for optional parameters of class `RelationalF` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `RelationalF`/`ConstRelationalF` to pass it to the function.
            public class InOptConstRelationalF
            {
                public ConstRelationalF? Opt;

                public InOptConstRelationalF() {}
                public InOptConstRelationalF(ConstRelationalF NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstRelationalF(ConstRelationalF NewOpt) {return new InOptConstRelationalF(NewOpt);}
            }

            // The operator is injected correctly.
            /// Generated from class `MR::CSharp::StaticOpsLhsA`.
            /// This is the const half of the class.
            public class ConstStaticOpsLhsA : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstStaticOpsLhsA(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsLhsA_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_StaticOpsLhsA_Destroy(_Underlying *_this);
                    __MR_CSharp_StaticOpsLhsA_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstStaticOpsLhsA() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstStaticOpsLhsA() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsLhsA_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsLhsA._Underlying *__MR_CSharp_StaticOpsLhsA_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_StaticOpsLhsA_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::StaticOpsLhsA::StaticOpsLhsA`.
                public unsafe ConstStaticOpsLhsA(MR.CS.CSharp.ConstStaticOpsLhsA _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsLhsA_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsLhsA._Underlying *__MR_CSharp_StaticOpsLhsA_ConstructFromAnother(MR.CS.CSharp.StaticOpsLhsA._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_StaticOpsLhsA_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from function `MR::CSharp::operator+`.
                public static unsafe int operator+(ConstStaticOpsLhsA _1, int _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_add_MR_CSharp_StaticOpsLhsA_int", ExactSpelling = true)]
                    extern static int __MR_C_add_MR_CSharp_StaticOpsLhsA_int(MR.CS.CSharp.StaticOpsLhsA._Underlying *_1, int _2);
                    return __MR_C_add_MR_CSharp_StaticOpsLhsA_int(_1._UnderlyingPtr, _2);
                }
            }

            // The operator is injected correctly.
            /// Generated from class `MR::CSharp::StaticOpsLhsA`.
            /// This is the non-const half of the class.
            public class StaticOpsLhsA : ConstStaticOpsLhsA
            {
                internal unsafe StaticOpsLhsA(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe StaticOpsLhsA() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsLhsA_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsLhsA._Underlying *__MR_CSharp_StaticOpsLhsA_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_StaticOpsLhsA_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::StaticOpsLhsA::StaticOpsLhsA`.
                public unsafe StaticOpsLhsA(MR.CS.CSharp.ConstStaticOpsLhsA _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsLhsA_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsLhsA._Underlying *__MR_CSharp_StaticOpsLhsA_ConstructFromAnother(MR.CS.CSharp.StaticOpsLhsA._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_StaticOpsLhsA_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::StaticOpsLhsA::operator=`.
                public unsafe MR.CS.CSharp.StaticOpsLhsA Assign(MR.CS.CSharp.ConstStaticOpsLhsA _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsLhsA_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.StaticOpsLhsA._Underlying *__MR_CSharp_StaticOpsLhsA_AssignFromAnother(_Underlying *_this, MR.CS.CSharp.StaticOpsLhsA._Underlying *_other);
                    return new(__MR_CSharp_StaticOpsLhsA_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }
            }

            /// This is used for optional parameters of class `StaticOpsLhsA` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `StaticOpsLhsA`/`ConstStaticOpsLhsA` to pass it to the function.
            public class InOptConstStaticOpsLhsA
            {
                public ConstStaticOpsLhsA? Opt;

                public InOptConstStaticOpsLhsA() {}
                public InOptConstStaticOpsLhsA(ConstStaticOpsLhsA NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstStaticOpsLhsA(ConstStaticOpsLhsA NewOpt) {return new InOptConstStaticOpsLhsA(NewOpt);}
            }

            // The operator injects but becomes a function, because it returns void.
            /// Generated from class `MR::CSharp::StaticOpsLhsB`.
            /// This is the const half of the class.
            public class ConstStaticOpsLhsB : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstStaticOpsLhsB(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsLhsB_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_StaticOpsLhsB_Destroy(_Underlying *_this);
                    __MR_CSharp_StaticOpsLhsB_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstStaticOpsLhsB() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstStaticOpsLhsB() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsLhsB_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsLhsB._Underlying *__MR_CSharp_StaticOpsLhsB_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_StaticOpsLhsB_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::StaticOpsLhsB::StaticOpsLhsB`.
                public unsafe ConstStaticOpsLhsB(MR.CS.CSharp.ConstStaticOpsLhsB _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsLhsB_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsLhsB._Underlying *__MR_CSharp_StaticOpsLhsB_ConstructFromAnother(MR.CS.CSharp.StaticOpsLhsB._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_StaticOpsLhsB_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from function `MR::CSharp::operator+`.
                public unsafe void Add(int _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_add_MR_CSharp_StaticOpsLhsB_int", ExactSpelling = true)]
                    extern static void __MR_C_add_MR_CSharp_StaticOpsLhsB_int(_Underlying *_1, int _2);
                    __MR_C_add_MR_CSharp_StaticOpsLhsB_int(_UnderlyingPtr, _2);
                }
            }

            // The operator injects but becomes a function, because it returns void.
            /// Generated from class `MR::CSharp::StaticOpsLhsB`.
            /// This is the non-const half of the class.
            public class StaticOpsLhsB : ConstStaticOpsLhsB
            {
                internal unsafe StaticOpsLhsB(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe StaticOpsLhsB() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsLhsB_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsLhsB._Underlying *__MR_CSharp_StaticOpsLhsB_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_StaticOpsLhsB_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::StaticOpsLhsB::StaticOpsLhsB`.
                public unsafe StaticOpsLhsB(MR.CS.CSharp.ConstStaticOpsLhsB _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsLhsB_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsLhsB._Underlying *__MR_CSharp_StaticOpsLhsB_ConstructFromAnother(MR.CS.CSharp.StaticOpsLhsB._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_StaticOpsLhsB_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::StaticOpsLhsB::operator=`.
                public unsafe MR.CS.CSharp.StaticOpsLhsB Assign(MR.CS.CSharp.ConstStaticOpsLhsB _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsLhsB_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.StaticOpsLhsB._Underlying *__MR_CSharp_StaticOpsLhsB_AssignFromAnother(_Underlying *_this, MR.CS.CSharp.StaticOpsLhsB._Underlying *_other);
                    return new(__MR_CSharp_StaticOpsLhsB_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }
            }

            /// This is used for optional parameters of class `StaticOpsLhsB` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `StaticOpsLhsB`/`ConstStaticOpsLhsB` to pass it to the function.
            public class InOptConstStaticOpsLhsB
            {
                public ConstStaticOpsLhsB? Opt;

                public InOptConstStaticOpsLhsB() {}
                public InOptConstStaticOpsLhsB(ConstStaticOpsLhsB NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstStaticOpsLhsB(ConstStaticOpsLhsB NewOpt) {return new InOptConstStaticOpsLhsB(NewOpt);}
            }

            // The operator fails to inject because the class isn't copyable (and isn't trivially movable), and the operator takes it by value.
            /// Generated from class `MR::CSharp::StaticOpsLhsC`.
            /// This is the const half of the class.
            public class ConstStaticOpsLhsC : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstStaticOpsLhsC(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsLhsC_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_StaticOpsLhsC_Destroy(_Underlying *_this);
                    __MR_CSharp_StaticOpsLhsC_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstStaticOpsLhsC() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstStaticOpsLhsC() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsLhsC_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsLhsC._Underlying *__MR_CSharp_StaticOpsLhsC_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_StaticOpsLhsC_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::StaticOpsLhsC::StaticOpsLhsC`.
                public unsafe ConstStaticOpsLhsC(MR.CS.CSharp.ByValueStaticOpsLhsC _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsLhsC_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsLhsC._Underlying *__MR_CSharp_StaticOpsLhsC_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.StaticOpsLhsC._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_StaticOpsLhsC_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }
            }

            // The operator fails to inject because the class isn't copyable (and isn't trivially movable), and the operator takes it by value.
            /// Generated from class `MR::CSharp::StaticOpsLhsC`.
            /// This is the non-const half of the class.
            public class StaticOpsLhsC : ConstStaticOpsLhsC
            {
                internal unsafe StaticOpsLhsC(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe StaticOpsLhsC() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsLhsC_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsLhsC._Underlying *__MR_CSharp_StaticOpsLhsC_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_StaticOpsLhsC_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::StaticOpsLhsC::StaticOpsLhsC`.
                public unsafe StaticOpsLhsC(MR.CS.CSharp.ByValueStaticOpsLhsC _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsLhsC_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsLhsC._Underlying *__MR_CSharp_StaticOpsLhsC_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.StaticOpsLhsC._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_StaticOpsLhsC_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }
            }

            /// This is used as a function parameter when the underlying function receives `StaticOpsLhsC` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `StaticOpsLhsC`/`ConstStaticOpsLhsC` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter is nullable and has a default argument.
            public readonly struct ByValueStaticOpsLhsC
            {
                internal readonly ConstStaticOpsLhsC? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public ByValueStaticOpsLhsC() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public ByValueStaticOpsLhsC(ConstStaticOpsLhsC new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public ByValueStaticOpsLhsC(MR.CS.Misc._Moved<StaticOpsLhsC> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator ByValueStaticOpsLhsC(ConstStaticOpsLhsC arg) {return new(arg);}
                public static implicit operator ByValueStaticOpsLhsC(MR.CS.Misc._Moved<StaticOpsLhsC> arg) {return new(arg);}
            }

            /// This is used for optional parameters of class `StaticOpsLhsC` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `StaticOpsLhsC`/`ConstStaticOpsLhsC` to pass it to the function.
            public class InOptConstStaticOpsLhsC
            {
                public ConstStaticOpsLhsC? Opt;

                public InOptConstStaticOpsLhsC() {}
                public InOptConstStaticOpsLhsC(ConstStaticOpsLhsC NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstStaticOpsLhsC(ConstStaticOpsLhsC NewOpt) {return new InOptConstStaticOpsLhsC(NewOpt);}
            }

            // The class is non-copyable, but is trivially movable, so the by-value operator injects fine.
            /// Generated from class `MR::CSharp::StaticOpsLhsD`.
            /// This is the const half of the class.
            public class ConstStaticOpsLhsD : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstStaticOpsLhsD(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsLhsD_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_StaticOpsLhsD_Destroy(_Underlying *_this);
                    __MR_CSharp_StaticOpsLhsD_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstStaticOpsLhsD() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstStaticOpsLhsD() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsLhsD_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsLhsD._Underlying *__MR_CSharp_StaticOpsLhsD_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_StaticOpsLhsD_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::StaticOpsLhsD::StaticOpsLhsD`.
                public unsafe ConstStaticOpsLhsD(MR.CS.CSharp.ConstStaticOpsLhsD _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsLhsD_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsLhsD._Underlying *__MR_CSharp_StaticOpsLhsD_ConstructFromAnother(MR.CS.CSharp.StaticOpsLhsD._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_StaticOpsLhsD_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from function `MR::CSharp::operator+`.
                public static unsafe int operator+(ConstStaticOpsLhsD _1, int _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_add_MR_CSharp_StaticOpsLhsD_int", ExactSpelling = true)]
                    extern static int __MR_C_add_MR_CSharp_StaticOpsLhsD_int(MR.CS.CSharp.StaticOpsLhsD._Underlying *_1, int _2);
                    return __MR_C_add_MR_CSharp_StaticOpsLhsD_int(_1._UnderlyingPtr, _2);
                }
            }

            // The class is non-copyable, but is trivially movable, so the by-value operator injects fine.
            /// Generated from class `MR::CSharp::StaticOpsLhsD`.
            /// This is the non-const half of the class.
            public class StaticOpsLhsD : ConstStaticOpsLhsD
            {
                internal unsafe StaticOpsLhsD(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe StaticOpsLhsD() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsLhsD_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsLhsD._Underlying *__MR_CSharp_StaticOpsLhsD_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_StaticOpsLhsD_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::StaticOpsLhsD::StaticOpsLhsD`.
                public unsafe StaticOpsLhsD(MR.CS.CSharp.ConstStaticOpsLhsD _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsLhsD_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsLhsD._Underlying *__MR_CSharp_StaticOpsLhsD_ConstructFromAnother(MR.CS.CSharp.StaticOpsLhsD._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_StaticOpsLhsD_ConstructFromAnother(_other._UnderlyingPtr);
                }
            }

            /// This is used for optional parameters of class `StaticOpsLhsD` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `StaticOpsLhsD`/`ConstStaticOpsLhsD` to pass it to the function.
            public class InOptConstStaticOpsLhsD
            {
                public ConstStaticOpsLhsD? Opt;

                public InOptConstStaticOpsLhsD() {}
                public InOptConstStaticOpsLhsD(ConstStaticOpsLhsD NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstStaticOpsLhsD(ConstStaticOpsLhsD NewOpt) {return new InOptConstStaticOpsLhsD(NewOpt);}
            }

            // The class isn't copyable, but the operator takes it by reference, so it injects fine.
            /// Generated from class `MR::CSharp::StaticOpsLhsE`.
            /// This is the const half of the class.
            public class ConstStaticOpsLhsE : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstStaticOpsLhsE(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsLhsE_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_StaticOpsLhsE_Destroy(_Underlying *_this);
                    __MR_CSharp_StaticOpsLhsE_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstStaticOpsLhsE() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstStaticOpsLhsE() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsLhsE_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsLhsE._Underlying *__MR_CSharp_StaticOpsLhsE_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_StaticOpsLhsE_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::StaticOpsLhsE::StaticOpsLhsE`.
                public unsafe ConstStaticOpsLhsE(MR.CS.CSharp.ConstStaticOpsLhsE _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsLhsE_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsLhsE._Underlying *__MR_CSharp_StaticOpsLhsE_ConstructFromAnother(MR.CS.CSharp.StaticOpsLhsE._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_StaticOpsLhsE_ConstructFromAnother(_other._UnderlyingPtr);
                }
            }

            // The class isn't copyable, but the operator takes it by reference, so it injects fine.
            /// Generated from class `MR::CSharp::StaticOpsLhsE`.
            /// This is the non-const half of the class.
            public class StaticOpsLhsE : ConstStaticOpsLhsE
            {
                internal unsafe StaticOpsLhsE(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe StaticOpsLhsE() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsLhsE_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsLhsE._Underlying *__MR_CSharp_StaticOpsLhsE_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_StaticOpsLhsE_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::StaticOpsLhsE::StaticOpsLhsE`.
                public unsafe StaticOpsLhsE(MR.CS.CSharp.ConstStaticOpsLhsE _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsLhsE_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsLhsE._Underlying *__MR_CSharp_StaticOpsLhsE_ConstructFromAnother(MR.CS.CSharp.StaticOpsLhsE._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_StaticOpsLhsE_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::StaticOpsLhsE::operator=`.
                public unsafe MR.CS.CSharp.StaticOpsLhsE Assign(MR.CS.CSharp.ConstStaticOpsLhsE _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsLhsE_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.StaticOpsLhsE._Underlying *__MR_CSharp_StaticOpsLhsE_AssignFromAnother(_Underlying *_this, MR.CS.CSharp.StaticOpsLhsE._Underlying *_other);
                    return new(__MR_CSharp_StaticOpsLhsE_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }

                /// Generated from function `MR::CSharp::operator+`.
                public static unsafe int operator+(MR.CS.CSharp.StaticOpsLhsE _1, int _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_add_MR_CSharp_StaticOpsLhsE_int", ExactSpelling = true)]
                    extern static int __MR_C_add_MR_CSharp_StaticOpsLhsE_int(MR.CS.CSharp.StaticOpsLhsE._Underlying *_1, int _2);
                    return __MR_C_add_MR_CSharp_StaticOpsLhsE_int(_1._UnderlyingPtr, _2);
                }
            }

            /// This is used for optional parameters of class `StaticOpsLhsE` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `StaticOpsLhsE`/`ConstStaticOpsLhsE` to pass it to the function.
            public class InOptConstStaticOpsLhsE
            {
                public ConstStaticOpsLhsE? Opt;

                public InOptConstStaticOpsLhsE() {}
                public InOptConstStaticOpsLhsE(ConstStaticOpsLhsE NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstStaticOpsLhsE(ConstStaticOpsLhsE NewOpt) {return new InOptConstStaticOpsLhsE(NewOpt);}
            }

            // The class isn't copyable, but the operator takes it by const reference, so it injects fine.
            /// Generated from class `MR::CSharp::StaticOpsLhsF`.
            /// This is the const half of the class.
            public class ConstStaticOpsLhsF : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstStaticOpsLhsF(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsLhsF_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_StaticOpsLhsF_Destroy(_Underlying *_this);
                    __MR_CSharp_StaticOpsLhsF_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstStaticOpsLhsF() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstStaticOpsLhsF() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsLhsF_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsLhsF._Underlying *__MR_CSharp_StaticOpsLhsF_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_StaticOpsLhsF_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::StaticOpsLhsF::StaticOpsLhsF`.
                public unsafe ConstStaticOpsLhsF(MR.CS.CSharp.ConstStaticOpsLhsF _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsLhsF_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsLhsF._Underlying *__MR_CSharp_StaticOpsLhsF_ConstructFromAnother(MR.CS.CSharp.StaticOpsLhsF._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_StaticOpsLhsF_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from function `MR::CSharp::operator+`.
                public static unsafe int operator+(MR.CS.CSharp.ConstStaticOpsLhsF _1, int _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_add_MR_CSharp_StaticOpsLhsF_int", ExactSpelling = true)]
                    extern static int __MR_C_add_MR_CSharp_StaticOpsLhsF_int(MR.CS.CSharp.ConstStaticOpsLhsF._Underlying *_1, int _2);
                    return __MR_C_add_MR_CSharp_StaticOpsLhsF_int(_1._UnderlyingPtr, _2);
                }
            }

            // The class isn't copyable, but the operator takes it by const reference, so it injects fine.
            /// Generated from class `MR::CSharp::StaticOpsLhsF`.
            /// This is the non-const half of the class.
            public class StaticOpsLhsF : ConstStaticOpsLhsF
            {
                internal unsafe StaticOpsLhsF(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe StaticOpsLhsF() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsLhsF_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsLhsF._Underlying *__MR_CSharp_StaticOpsLhsF_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_StaticOpsLhsF_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::StaticOpsLhsF::StaticOpsLhsF`.
                public unsafe StaticOpsLhsF(MR.CS.CSharp.ConstStaticOpsLhsF _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsLhsF_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsLhsF._Underlying *__MR_CSharp_StaticOpsLhsF_ConstructFromAnother(MR.CS.CSharp.StaticOpsLhsF._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_StaticOpsLhsF_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::StaticOpsLhsF::operator=`.
                public unsafe MR.CS.CSharp.StaticOpsLhsF Assign(MR.CS.CSharp.ConstStaticOpsLhsF _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsLhsF_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.StaticOpsLhsF._Underlying *__MR_CSharp_StaticOpsLhsF_AssignFromAnother(_Underlying *_this, MR.CS.CSharp.StaticOpsLhsF._Underlying *_other);
                    return new(__MR_CSharp_StaticOpsLhsF_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }
            }

            /// This is used for optional parameters of class `StaticOpsLhsF` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `StaticOpsLhsF`/`ConstStaticOpsLhsF` to pass it to the function.
            public class InOptConstStaticOpsLhsF
            {
                public ConstStaticOpsLhsF? Opt;

                public InOptConstStaticOpsLhsF() {}
                public InOptConstStaticOpsLhsF(ConstStaticOpsLhsF NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstStaticOpsLhsF(ConstStaticOpsLhsF NewOpt) {return new InOptConstStaticOpsLhsF(NewOpt);}
            }

            // The copy ctor uses a non-const reference, so an operator with a by-value parameter gets injected into the non-const half.
            /// Generated from class `MR::CSharp::StaticOpsLhsG`.
            /// This is the const half of the class.
            public class ConstStaticOpsLhsG : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstStaticOpsLhsG(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsLhsG_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_StaticOpsLhsG_Destroy(_Underlying *_this);
                    __MR_CSharp_StaticOpsLhsG_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstStaticOpsLhsG() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstStaticOpsLhsG() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsLhsG_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsLhsG._Underlying *__MR_CSharp_StaticOpsLhsG_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_StaticOpsLhsG_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::StaticOpsLhsG::StaticOpsLhsG`.
                public unsafe ConstStaticOpsLhsG(MR.CS.CSharp.ConstStaticOpsLhsG _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsLhsG_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsLhsG._Underlying *__MR_CSharp_StaticOpsLhsG_ConstructFromAnother(MR.CS.CSharp.StaticOpsLhsG._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_StaticOpsLhsG_ConstructFromAnother(_other._UnderlyingPtr);
                }
            }

            // The copy ctor uses a non-const reference, so an operator with a by-value parameter gets injected into the non-const half.
            /// Generated from class `MR::CSharp::StaticOpsLhsG`.
            /// This is the non-const half of the class.
            public class StaticOpsLhsG : ConstStaticOpsLhsG
            {
                internal unsafe StaticOpsLhsG(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe StaticOpsLhsG() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsLhsG_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsLhsG._Underlying *__MR_CSharp_StaticOpsLhsG_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_StaticOpsLhsG_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::StaticOpsLhsG::StaticOpsLhsG`.
                public unsafe StaticOpsLhsG(MR.CS.CSharp.ConstStaticOpsLhsG _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsLhsG_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsLhsG._Underlying *__MR_CSharp_StaticOpsLhsG_ConstructFromAnother(MR.CS.CSharp.StaticOpsLhsG._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_StaticOpsLhsG_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from function `MR::CSharp::operator+`.
                public static unsafe int operator+(StaticOpsLhsG _1, int _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_add_MR_CSharp_StaticOpsLhsG_int", ExactSpelling = true)]
                    extern static int __MR_C_add_MR_CSharp_StaticOpsLhsG_int(MR.CS.CSharp.StaticOpsLhsG._Underlying *_1, int _2);
                    return __MR_C_add_MR_CSharp_StaticOpsLhsG_int(_1._UnderlyingPtr, _2);
                }
            }

            /// This is used for optional parameters of class `StaticOpsLhsG` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `StaticOpsLhsG`/`ConstStaticOpsLhsG` to pass it to the function.
            public class InOptConstStaticOpsLhsG
            {
                public ConstStaticOpsLhsG? Opt;

                public InOptConstStaticOpsLhsG() {}
                public InOptConstStaticOpsLhsG(ConstStaticOpsLhsG NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstStaticOpsLhsG(ConstStaticOpsLhsG NewOpt) {return new InOptConstStaticOpsLhsG(NewOpt);}
            }

            // The copy ctor uses a non-const reference, but it doesn't matter because the operator takes the parameter by const reference,
            //   so the operator gets injected into the const half.
            /// Generated from class `MR::CSharp::StaticOpsLhsH`.
            /// This is the const half of the class.
            public class ConstStaticOpsLhsH : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstStaticOpsLhsH(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsLhsH_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_StaticOpsLhsH_Destroy(_Underlying *_this);
                    __MR_CSharp_StaticOpsLhsH_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstStaticOpsLhsH() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstStaticOpsLhsH() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsLhsH_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsLhsH._Underlying *__MR_CSharp_StaticOpsLhsH_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_StaticOpsLhsH_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::StaticOpsLhsH::StaticOpsLhsH`.
                public unsafe ConstStaticOpsLhsH(MR.CS.CSharp.ConstStaticOpsLhsH _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsLhsH_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsLhsH._Underlying *__MR_CSharp_StaticOpsLhsH_ConstructFromAnother(MR.CS.CSharp.StaticOpsLhsH._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_StaticOpsLhsH_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from function `MR::CSharp::operator+`.
                public static unsafe int operator+(MR.CS.CSharp.ConstStaticOpsLhsH _1, int _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_add_MR_CSharp_StaticOpsLhsH_int", ExactSpelling = true)]
                    extern static int __MR_C_add_MR_CSharp_StaticOpsLhsH_int(MR.CS.CSharp.ConstStaticOpsLhsH._Underlying *_1, int _2);
                    return __MR_C_add_MR_CSharp_StaticOpsLhsH_int(_1._UnderlyingPtr, _2);
                }
            }

            // The copy ctor uses a non-const reference, but it doesn't matter because the operator takes the parameter by const reference,
            //   so the operator gets injected into the const half.
            /// Generated from class `MR::CSharp::StaticOpsLhsH`.
            /// This is the non-const half of the class.
            public class StaticOpsLhsH : ConstStaticOpsLhsH
            {
                internal unsafe StaticOpsLhsH(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe StaticOpsLhsH() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsLhsH_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsLhsH._Underlying *__MR_CSharp_StaticOpsLhsH_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_StaticOpsLhsH_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::StaticOpsLhsH::StaticOpsLhsH`.
                public unsafe StaticOpsLhsH(MR.CS.CSharp.ConstStaticOpsLhsH _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsLhsH_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsLhsH._Underlying *__MR_CSharp_StaticOpsLhsH_ConstructFromAnother(MR.CS.CSharp.StaticOpsLhsH._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_StaticOpsLhsH_ConstructFromAnother(_other._UnderlyingPtr);
                }
            }

            /// This is used for optional parameters of class `StaticOpsLhsH` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `StaticOpsLhsH`/`ConstStaticOpsLhsH` to pass it to the function.
            public class InOptConstStaticOpsLhsH
            {
                public ConstStaticOpsLhsH? Opt;

                public InOptConstStaticOpsLhsH() {}
                public InOptConstStaticOpsLhsH(ConstStaticOpsLhsH NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstStaticOpsLhsH(ConstStaticOpsLhsH NewOpt) {return new InOptConstStaticOpsLhsH(NewOpt);}
            }

            // The operator is injected correctly.
            /// Generated from class `MR::CSharp::StaticOpsRhsA`.
            /// This is the const half of the class.
            public class ConstStaticOpsRhsA : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstStaticOpsRhsA(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsRhsA_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_StaticOpsRhsA_Destroy(_Underlying *_this);
                    __MR_CSharp_StaticOpsRhsA_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstStaticOpsRhsA() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstStaticOpsRhsA() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsRhsA_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsRhsA._Underlying *__MR_CSharp_StaticOpsRhsA_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_StaticOpsRhsA_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::StaticOpsRhsA::StaticOpsRhsA`.
                public unsafe ConstStaticOpsRhsA(MR.CS.CSharp.ConstStaticOpsRhsA _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsRhsA_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsRhsA._Underlying *__MR_CSharp_StaticOpsRhsA_ConstructFromAnother(MR.CS.CSharp.StaticOpsRhsA._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_StaticOpsRhsA_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from function `MR::CSharp::operator+`.
                public static unsafe int operator+(int _1, ConstStaticOpsRhsA _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_add_int_MR_CSharp_StaticOpsRhsA", ExactSpelling = true)]
                    extern static int __MR_C_add_int_MR_CSharp_StaticOpsRhsA(int _1, MR.CS.CSharp.StaticOpsRhsA._Underlying *_2);
                    return __MR_C_add_int_MR_CSharp_StaticOpsRhsA(_1, _2._UnderlyingPtr);
                }
            }

            // The operator is injected correctly.
            /// Generated from class `MR::CSharp::StaticOpsRhsA`.
            /// This is the non-const half of the class.
            public class StaticOpsRhsA : ConstStaticOpsRhsA
            {
                internal unsafe StaticOpsRhsA(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe StaticOpsRhsA() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsRhsA_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsRhsA._Underlying *__MR_CSharp_StaticOpsRhsA_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_StaticOpsRhsA_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::StaticOpsRhsA::StaticOpsRhsA`.
                public unsafe StaticOpsRhsA(MR.CS.CSharp.ConstStaticOpsRhsA _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsRhsA_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsRhsA._Underlying *__MR_CSharp_StaticOpsRhsA_ConstructFromAnother(MR.CS.CSharp.StaticOpsRhsA._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_StaticOpsRhsA_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::StaticOpsRhsA::operator=`.
                public unsafe MR.CS.CSharp.StaticOpsRhsA Assign(MR.CS.CSharp.ConstStaticOpsRhsA _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsRhsA_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.StaticOpsRhsA._Underlying *__MR_CSharp_StaticOpsRhsA_AssignFromAnother(_Underlying *_this, MR.CS.CSharp.StaticOpsRhsA._Underlying *_other);
                    return new(__MR_CSharp_StaticOpsRhsA_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }
            }

            /// This is used for optional parameters of class `StaticOpsRhsA` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `StaticOpsRhsA`/`ConstStaticOpsRhsA` to pass it to the function.
            public class InOptConstStaticOpsRhsA
            {
                public ConstStaticOpsRhsA? Opt;

                public InOptConstStaticOpsRhsA() {}
                public InOptConstStaticOpsRhsA(ConstStaticOpsRhsA NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstStaticOpsRhsA(ConstStaticOpsRhsA NewOpt) {return new InOptConstStaticOpsRhsA(NewOpt);}
            }

            // The operator injects but becomes a function, because it returns void.
            /// Generated from class `MR::CSharp::StaticOpsRhsB`.
            /// This is the const half of the class.
            public class ConstStaticOpsRhsB : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstStaticOpsRhsB(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsRhsB_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_StaticOpsRhsB_Destroy(_Underlying *_this);
                    __MR_CSharp_StaticOpsRhsB_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstStaticOpsRhsB() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstStaticOpsRhsB() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsRhsB_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsRhsB._Underlying *__MR_CSharp_StaticOpsRhsB_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_StaticOpsRhsB_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::StaticOpsRhsB::StaticOpsRhsB`.
                public unsafe ConstStaticOpsRhsB(MR.CS.CSharp.ConstStaticOpsRhsB _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsRhsB_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsRhsB._Underlying *__MR_CSharp_StaticOpsRhsB_ConstructFromAnother(MR.CS.CSharp.StaticOpsRhsB._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_StaticOpsRhsB_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from function `MR::CSharp::operator+`.
                public static unsafe void Add(int _1, MR.CS.CSharp.ConstStaticOpsRhsB _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_add_int_MR_CSharp_StaticOpsRhsB", ExactSpelling = true)]
                    extern static void __MR_C_add_int_MR_CSharp_StaticOpsRhsB(int _1, MR.CS.CSharp.StaticOpsRhsB._Underlying *_2);
                    __MR_C_add_int_MR_CSharp_StaticOpsRhsB(_1, _2._UnderlyingPtr);
                }
            }

            // The operator injects but becomes a function, because it returns void.
            /// Generated from class `MR::CSharp::StaticOpsRhsB`.
            /// This is the non-const half of the class.
            public class StaticOpsRhsB : ConstStaticOpsRhsB
            {
                internal unsafe StaticOpsRhsB(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe StaticOpsRhsB() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsRhsB_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsRhsB._Underlying *__MR_CSharp_StaticOpsRhsB_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_StaticOpsRhsB_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::StaticOpsRhsB::StaticOpsRhsB`.
                public unsafe StaticOpsRhsB(MR.CS.CSharp.ConstStaticOpsRhsB _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsRhsB_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsRhsB._Underlying *__MR_CSharp_StaticOpsRhsB_ConstructFromAnother(MR.CS.CSharp.StaticOpsRhsB._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_StaticOpsRhsB_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::StaticOpsRhsB::operator=`.
                public unsafe MR.CS.CSharp.StaticOpsRhsB Assign(MR.CS.CSharp.ConstStaticOpsRhsB _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsRhsB_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.StaticOpsRhsB._Underlying *__MR_CSharp_StaticOpsRhsB_AssignFromAnother(_Underlying *_this, MR.CS.CSharp.StaticOpsRhsB._Underlying *_other);
                    return new(__MR_CSharp_StaticOpsRhsB_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }
            }

            /// This is used for optional parameters of class `StaticOpsRhsB` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `StaticOpsRhsB`/`ConstStaticOpsRhsB` to pass it to the function.
            public class InOptConstStaticOpsRhsB
            {
                public ConstStaticOpsRhsB? Opt;

                public InOptConstStaticOpsRhsB() {}
                public InOptConstStaticOpsRhsB(ConstStaticOpsRhsB NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstStaticOpsRhsB(ConstStaticOpsRhsB NewOpt) {return new InOptConstStaticOpsRhsB(NewOpt);}
            }

            // The operator fails to inject because the class isn't copyable (and isn't trivially movable), and the operator takes it by value.
            /// Generated from class `MR::CSharp::StaticOpsRhsC`.
            /// This is the const half of the class.
            public class ConstStaticOpsRhsC : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstStaticOpsRhsC(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsRhsC_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_StaticOpsRhsC_Destroy(_Underlying *_this);
                    __MR_CSharp_StaticOpsRhsC_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstStaticOpsRhsC() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstStaticOpsRhsC() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsRhsC_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsRhsC._Underlying *__MR_CSharp_StaticOpsRhsC_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_StaticOpsRhsC_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::StaticOpsRhsC::StaticOpsRhsC`.
                public unsafe ConstStaticOpsRhsC(MR.CS.CSharp.ByValueStaticOpsRhsC _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsRhsC_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsRhsC._Underlying *__MR_CSharp_StaticOpsRhsC_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.StaticOpsRhsC._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_StaticOpsRhsC_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }
            }

            // The operator fails to inject because the class isn't copyable (and isn't trivially movable), and the operator takes it by value.
            /// Generated from class `MR::CSharp::StaticOpsRhsC`.
            /// This is the non-const half of the class.
            public class StaticOpsRhsC : ConstStaticOpsRhsC
            {
                internal unsafe StaticOpsRhsC(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe StaticOpsRhsC() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsRhsC_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsRhsC._Underlying *__MR_CSharp_StaticOpsRhsC_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_StaticOpsRhsC_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::StaticOpsRhsC::StaticOpsRhsC`.
                public unsafe StaticOpsRhsC(MR.CS.CSharp.ByValueStaticOpsRhsC _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsRhsC_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsRhsC._Underlying *__MR_CSharp_StaticOpsRhsC_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.StaticOpsRhsC._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_StaticOpsRhsC_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }
            }

            /// This is used as a function parameter when the underlying function receives `StaticOpsRhsC` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `StaticOpsRhsC`/`ConstStaticOpsRhsC` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter is nullable and has a default argument.
            public readonly struct ByValueStaticOpsRhsC
            {
                internal readonly ConstStaticOpsRhsC? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public ByValueStaticOpsRhsC() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public ByValueStaticOpsRhsC(ConstStaticOpsRhsC new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public ByValueStaticOpsRhsC(MR.CS.Misc._Moved<StaticOpsRhsC> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator ByValueStaticOpsRhsC(ConstStaticOpsRhsC arg) {return new(arg);}
                public static implicit operator ByValueStaticOpsRhsC(MR.CS.Misc._Moved<StaticOpsRhsC> arg) {return new(arg);}
            }

            /// This is used for optional parameters of class `StaticOpsRhsC` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `StaticOpsRhsC`/`ConstStaticOpsRhsC` to pass it to the function.
            public class InOptConstStaticOpsRhsC
            {
                public ConstStaticOpsRhsC? Opt;

                public InOptConstStaticOpsRhsC() {}
                public InOptConstStaticOpsRhsC(ConstStaticOpsRhsC NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstStaticOpsRhsC(ConstStaticOpsRhsC NewOpt) {return new InOptConstStaticOpsRhsC(NewOpt);}
            }

            // The class is non-copyable, but is trivially movable, so the by-value operator injects fine.
            /// Generated from class `MR::CSharp::StaticOpsRhsD`.
            /// This is the const half of the class.
            public class ConstStaticOpsRhsD : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstStaticOpsRhsD(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsRhsD_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_StaticOpsRhsD_Destroy(_Underlying *_this);
                    __MR_CSharp_StaticOpsRhsD_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstStaticOpsRhsD() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstStaticOpsRhsD() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsRhsD_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsRhsD._Underlying *__MR_CSharp_StaticOpsRhsD_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_StaticOpsRhsD_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::StaticOpsRhsD::StaticOpsRhsD`.
                public unsafe ConstStaticOpsRhsD(MR.CS.CSharp.ConstStaticOpsRhsD _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsRhsD_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsRhsD._Underlying *__MR_CSharp_StaticOpsRhsD_ConstructFromAnother(MR.CS.CSharp.StaticOpsRhsD._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_StaticOpsRhsD_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from function `MR::CSharp::operator+`.
                public static unsafe int operator+(int _1, ConstStaticOpsRhsD _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_add_int_MR_CSharp_StaticOpsRhsD", ExactSpelling = true)]
                    extern static int __MR_C_add_int_MR_CSharp_StaticOpsRhsD(int _1, MR.CS.CSharp.StaticOpsRhsD._Underlying *_2);
                    return __MR_C_add_int_MR_CSharp_StaticOpsRhsD(_1, _2._UnderlyingPtr);
                }
            }

            // The class is non-copyable, but is trivially movable, so the by-value operator injects fine.
            /// Generated from class `MR::CSharp::StaticOpsRhsD`.
            /// This is the non-const half of the class.
            public class StaticOpsRhsD : ConstStaticOpsRhsD
            {
                internal unsafe StaticOpsRhsD(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe StaticOpsRhsD() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsRhsD_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsRhsD._Underlying *__MR_CSharp_StaticOpsRhsD_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_StaticOpsRhsD_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::StaticOpsRhsD::StaticOpsRhsD`.
                public unsafe StaticOpsRhsD(MR.CS.CSharp.ConstStaticOpsRhsD _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsRhsD_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsRhsD._Underlying *__MR_CSharp_StaticOpsRhsD_ConstructFromAnother(MR.CS.CSharp.StaticOpsRhsD._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_StaticOpsRhsD_ConstructFromAnother(_other._UnderlyingPtr);
                }
            }

            /// This is used for optional parameters of class `StaticOpsRhsD` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `StaticOpsRhsD`/`ConstStaticOpsRhsD` to pass it to the function.
            public class InOptConstStaticOpsRhsD
            {
                public ConstStaticOpsRhsD? Opt;

                public InOptConstStaticOpsRhsD() {}
                public InOptConstStaticOpsRhsD(ConstStaticOpsRhsD NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstStaticOpsRhsD(ConstStaticOpsRhsD NewOpt) {return new InOptConstStaticOpsRhsD(NewOpt);}
            }

            // The class isn't copyable, but the operator takes it by reference, so it injects fine.
            /// Generated from class `MR::CSharp::StaticOpsRhsE`.
            /// This is the const half of the class.
            public class ConstStaticOpsRhsE : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstStaticOpsRhsE(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsRhsE_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_StaticOpsRhsE_Destroy(_Underlying *_this);
                    __MR_CSharp_StaticOpsRhsE_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstStaticOpsRhsE() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstStaticOpsRhsE() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsRhsE_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsRhsE._Underlying *__MR_CSharp_StaticOpsRhsE_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_StaticOpsRhsE_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::StaticOpsRhsE::StaticOpsRhsE`.
                public unsafe ConstStaticOpsRhsE(MR.CS.CSharp.ConstStaticOpsRhsE _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsRhsE_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsRhsE._Underlying *__MR_CSharp_StaticOpsRhsE_ConstructFromAnother(MR.CS.CSharp.StaticOpsRhsE._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_StaticOpsRhsE_ConstructFromAnother(_other._UnderlyingPtr);
                }
            }

            // The class isn't copyable, but the operator takes it by reference, so it injects fine.
            /// Generated from class `MR::CSharp::StaticOpsRhsE`.
            /// This is the non-const half of the class.
            public class StaticOpsRhsE : ConstStaticOpsRhsE
            {
                internal unsafe StaticOpsRhsE(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe StaticOpsRhsE() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsRhsE_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsRhsE._Underlying *__MR_CSharp_StaticOpsRhsE_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_StaticOpsRhsE_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::StaticOpsRhsE::StaticOpsRhsE`.
                public unsafe StaticOpsRhsE(MR.CS.CSharp.ConstStaticOpsRhsE _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsRhsE_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsRhsE._Underlying *__MR_CSharp_StaticOpsRhsE_ConstructFromAnother(MR.CS.CSharp.StaticOpsRhsE._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_StaticOpsRhsE_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::StaticOpsRhsE::operator=`.
                public unsafe MR.CS.CSharp.StaticOpsRhsE Assign(MR.CS.CSharp.ConstStaticOpsRhsE _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsRhsE_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.StaticOpsRhsE._Underlying *__MR_CSharp_StaticOpsRhsE_AssignFromAnother(_Underlying *_this, MR.CS.CSharp.StaticOpsRhsE._Underlying *_other);
                    return new(__MR_CSharp_StaticOpsRhsE_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }

                /// Generated from function `MR::CSharp::operator+`.
                public static unsafe int operator+(int _1, MR.CS.CSharp.StaticOpsRhsE _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_add_int_MR_CSharp_StaticOpsRhsE", ExactSpelling = true)]
                    extern static int __MR_C_add_int_MR_CSharp_StaticOpsRhsE(int _1, MR.CS.CSharp.StaticOpsRhsE._Underlying *_2);
                    return __MR_C_add_int_MR_CSharp_StaticOpsRhsE(_1, _2._UnderlyingPtr);
                }
            }

            /// This is used for optional parameters of class `StaticOpsRhsE` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `StaticOpsRhsE`/`ConstStaticOpsRhsE` to pass it to the function.
            public class InOptConstStaticOpsRhsE
            {
                public ConstStaticOpsRhsE? Opt;

                public InOptConstStaticOpsRhsE() {}
                public InOptConstStaticOpsRhsE(ConstStaticOpsRhsE NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstStaticOpsRhsE(ConstStaticOpsRhsE NewOpt) {return new InOptConstStaticOpsRhsE(NewOpt);}
            }

            // The class isn't copyable, but the operator takes it by const reference, so it injects fine.
            /// Generated from class `MR::CSharp::StaticOpsRhsF`.
            /// This is the const half of the class.
            public class ConstStaticOpsRhsF : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstStaticOpsRhsF(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsRhsF_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_StaticOpsRhsF_Destroy(_Underlying *_this);
                    __MR_CSharp_StaticOpsRhsF_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstStaticOpsRhsF() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstStaticOpsRhsF() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsRhsF_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsRhsF._Underlying *__MR_CSharp_StaticOpsRhsF_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_StaticOpsRhsF_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::StaticOpsRhsF::StaticOpsRhsF`.
                public unsafe ConstStaticOpsRhsF(MR.CS.CSharp.ConstStaticOpsRhsF _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsRhsF_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsRhsF._Underlying *__MR_CSharp_StaticOpsRhsF_ConstructFromAnother(MR.CS.CSharp.StaticOpsRhsF._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_StaticOpsRhsF_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from function `MR::CSharp::operator+`.
                public static unsafe int operator+(int _1, MR.CS.CSharp.ConstStaticOpsRhsF _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_add_int_MR_CSharp_StaticOpsRhsF", ExactSpelling = true)]
                    extern static int __MR_C_add_int_MR_CSharp_StaticOpsRhsF(int _1, MR.CS.CSharp.ConstStaticOpsRhsF._Underlying *_2);
                    return __MR_C_add_int_MR_CSharp_StaticOpsRhsF(_1, _2._UnderlyingPtr);
                }
            }

            // The class isn't copyable, but the operator takes it by const reference, so it injects fine.
            /// Generated from class `MR::CSharp::StaticOpsRhsF`.
            /// This is the non-const half of the class.
            public class StaticOpsRhsF : ConstStaticOpsRhsF
            {
                internal unsafe StaticOpsRhsF(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe StaticOpsRhsF() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsRhsF_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsRhsF._Underlying *__MR_CSharp_StaticOpsRhsF_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_StaticOpsRhsF_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::StaticOpsRhsF::StaticOpsRhsF`.
                public unsafe StaticOpsRhsF(MR.CS.CSharp.ConstStaticOpsRhsF _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsRhsF_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsRhsF._Underlying *__MR_CSharp_StaticOpsRhsF_ConstructFromAnother(MR.CS.CSharp.StaticOpsRhsF._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_StaticOpsRhsF_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::StaticOpsRhsF::operator=`.
                public unsafe MR.CS.CSharp.StaticOpsRhsF Assign(MR.CS.CSharp.ConstStaticOpsRhsF _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsRhsF_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.StaticOpsRhsF._Underlying *__MR_CSharp_StaticOpsRhsF_AssignFromAnother(_Underlying *_this, MR.CS.CSharp.StaticOpsRhsF._Underlying *_other);
                    return new(__MR_CSharp_StaticOpsRhsF_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }
            }

            /// This is used for optional parameters of class `StaticOpsRhsF` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `StaticOpsRhsF`/`ConstStaticOpsRhsF` to pass it to the function.
            public class InOptConstStaticOpsRhsF
            {
                public ConstStaticOpsRhsF? Opt;

                public InOptConstStaticOpsRhsF() {}
                public InOptConstStaticOpsRhsF(ConstStaticOpsRhsF NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstStaticOpsRhsF(ConstStaticOpsRhsF NewOpt) {return new InOptConstStaticOpsRhsF(NewOpt);}
            }

            // The copy ctor uses a non-const reference, so an operator with a by-value parameter gets injected into the non-const half.
            /// Generated from class `MR::CSharp::StaticOpsRhsG`.
            /// This is the const half of the class.
            public class ConstStaticOpsRhsG : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstStaticOpsRhsG(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsRhsG_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_StaticOpsRhsG_Destroy(_Underlying *_this);
                    __MR_CSharp_StaticOpsRhsG_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstStaticOpsRhsG() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstStaticOpsRhsG() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsRhsG_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsRhsG._Underlying *__MR_CSharp_StaticOpsRhsG_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_StaticOpsRhsG_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::StaticOpsRhsG::StaticOpsRhsG`.
                public unsafe ConstStaticOpsRhsG(MR.CS.CSharp.ConstStaticOpsRhsG _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsRhsG_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsRhsG._Underlying *__MR_CSharp_StaticOpsRhsG_ConstructFromAnother(MR.CS.CSharp.StaticOpsRhsG._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_StaticOpsRhsG_ConstructFromAnother(_other._UnderlyingPtr);
                }
            }

            // The copy ctor uses a non-const reference, so an operator with a by-value parameter gets injected into the non-const half.
            /// Generated from class `MR::CSharp::StaticOpsRhsG`.
            /// This is the non-const half of the class.
            public class StaticOpsRhsG : ConstStaticOpsRhsG
            {
                internal unsafe StaticOpsRhsG(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe StaticOpsRhsG() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsRhsG_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsRhsG._Underlying *__MR_CSharp_StaticOpsRhsG_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_StaticOpsRhsG_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::StaticOpsRhsG::StaticOpsRhsG`.
                public unsafe StaticOpsRhsG(MR.CS.CSharp.ConstStaticOpsRhsG _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsRhsG_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsRhsG._Underlying *__MR_CSharp_StaticOpsRhsG_ConstructFromAnother(MR.CS.CSharp.StaticOpsRhsG._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_StaticOpsRhsG_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from function `MR::CSharp::operator+`.
                public static unsafe int operator+(int _1, StaticOpsRhsG _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_add_int_MR_CSharp_StaticOpsRhsG", ExactSpelling = true)]
                    extern static int __MR_C_add_int_MR_CSharp_StaticOpsRhsG(int _1, MR.CS.CSharp.StaticOpsRhsG._Underlying *_2);
                    return __MR_C_add_int_MR_CSharp_StaticOpsRhsG(_1, _2._UnderlyingPtr);
                }
            }

            /// This is used for optional parameters of class `StaticOpsRhsG` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `StaticOpsRhsG`/`ConstStaticOpsRhsG` to pass it to the function.
            public class InOptConstStaticOpsRhsG
            {
                public ConstStaticOpsRhsG? Opt;

                public InOptConstStaticOpsRhsG() {}
                public InOptConstStaticOpsRhsG(ConstStaticOpsRhsG NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstStaticOpsRhsG(ConstStaticOpsRhsG NewOpt) {return new InOptConstStaticOpsRhsG(NewOpt);}
            }

            // The copy ctor uses a non-const reference, but it doesn't matter because the operator takes the parameter by const reference,
            //   so the operator gets injected into the const half.
            /// Generated from class `MR::CSharp::StaticOpsRhsH`.
            /// This is the const half of the class.
            public class ConstStaticOpsRhsH : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstStaticOpsRhsH(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsRhsH_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_StaticOpsRhsH_Destroy(_Underlying *_this);
                    __MR_CSharp_StaticOpsRhsH_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstStaticOpsRhsH() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstStaticOpsRhsH() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsRhsH_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsRhsH._Underlying *__MR_CSharp_StaticOpsRhsH_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_StaticOpsRhsH_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::StaticOpsRhsH::StaticOpsRhsH`.
                public unsafe ConstStaticOpsRhsH(MR.CS.CSharp.ConstStaticOpsRhsH _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsRhsH_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsRhsH._Underlying *__MR_CSharp_StaticOpsRhsH_ConstructFromAnother(MR.CS.CSharp.StaticOpsRhsH._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_StaticOpsRhsH_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from function `MR::CSharp::operator+`.
                public static unsafe int operator+(int _1, MR.CS.CSharp.ConstStaticOpsRhsH _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_add_int_MR_CSharp_StaticOpsRhsH", ExactSpelling = true)]
                    extern static int __MR_C_add_int_MR_CSharp_StaticOpsRhsH(int _1, MR.CS.CSharp.ConstStaticOpsRhsH._Underlying *_2);
                    return __MR_C_add_int_MR_CSharp_StaticOpsRhsH(_1, _2._UnderlyingPtr);
                }
            }

            // The copy ctor uses a non-const reference, but it doesn't matter because the operator takes the parameter by const reference,
            //   so the operator gets injected into the const half.
            /// Generated from class `MR::CSharp::StaticOpsRhsH`.
            /// This is the non-const half of the class.
            public class StaticOpsRhsH : ConstStaticOpsRhsH
            {
                internal unsafe StaticOpsRhsH(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe StaticOpsRhsH() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsRhsH_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsRhsH._Underlying *__MR_CSharp_StaticOpsRhsH_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_StaticOpsRhsH_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::StaticOpsRhsH::StaticOpsRhsH`.
                public unsafe StaticOpsRhsH(MR.CS.CSharp.ConstStaticOpsRhsH _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsRhsH_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsRhsH._Underlying *__MR_CSharp_StaticOpsRhsH_ConstructFromAnother(MR.CS.CSharp.StaticOpsRhsH._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_StaticOpsRhsH_ConstructFromAnother(_other._UnderlyingPtr);
                }
            }

            /// This is used for optional parameters of class `StaticOpsRhsH` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `StaticOpsRhsH`/`ConstStaticOpsRhsH` to pass it to the function.
            public class InOptConstStaticOpsRhsH
            {
                public ConstStaticOpsRhsH? Opt;

                public InOptConstStaticOpsRhsH() {}
                public InOptConstStaticOpsRhsH(ConstStaticOpsRhsH NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstStaticOpsRhsH(ConstStaticOpsRhsH NewOpt) {return new InOptConstStaticOpsRhsH(NewOpt);}
            }

            // Other injection cases:
            public enum StaticOpsEnum : int
            {
            }

            /// Generated from class `MR::CSharp::StaticOpsMixedLhs`.
            /// This is the const half of the class.
            public class ConstStaticOpsMixedLhs : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstStaticOpsMixedLhs(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsMixedLhs_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_StaticOpsMixedLhs_Destroy(_Underlying *_this);
                    __MR_CSharp_StaticOpsMixedLhs_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstStaticOpsMixedLhs() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstStaticOpsMixedLhs() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsMixedLhs_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsMixedLhs._Underlying *__MR_CSharp_StaticOpsMixedLhs_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_StaticOpsMixedLhs_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::StaticOpsMixedLhs::StaticOpsMixedLhs`.
                public unsafe ConstStaticOpsMixedLhs(MR.CS.CSharp.ConstStaticOpsMixedLhs _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsMixedLhs_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsMixedLhs._Underlying *__MR_CSharp_StaticOpsMixedLhs_ConstructFromAnother(MR.CS.CSharp.StaticOpsMixedLhs._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_StaticOpsMixedLhs_ConstructFromAnother(_other._UnderlyingPtr);
                }

                // Gets injected into the lhs by default.
                /// Generated from function `MR::CSharp::operator+`.
                public static unsafe int operator+(ConstStaticOpsMixedLhs _1, MR.CS.CSharp.ConstStaticOpsMixedRhs _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_add_MR_CSharp_StaticOpsMixedLhs_MR_CSharp_StaticOpsMixedRhs", ExactSpelling = true)]
                    extern static int __MR_C_add_MR_CSharp_StaticOpsMixedLhs_MR_CSharp_StaticOpsMixedRhs(MR.CS.CSharp.StaticOpsMixedLhs._Underlying *_1, MR.CS.CSharp.StaticOpsMixedRhs._Underlying *_2);
                    return __MR_C_add_MR_CSharp_StaticOpsMixedLhs_MR_CSharp_StaticOpsMixedRhs(_1._UnderlyingPtr, _2._UnderlyingPtr);
                }
            }

            /// Generated from class `MR::CSharp::StaticOpsMixedLhs`.
            /// This is the non-const half of the class.
            public class StaticOpsMixedLhs : ConstStaticOpsMixedLhs
            {
                internal unsafe StaticOpsMixedLhs(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe StaticOpsMixedLhs() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsMixedLhs_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsMixedLhs._Underlying *__MR_CSharp_StaticOpsMixedLhs_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_StaticOpsMixedLhs_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::StaticOpsMixedLhs::StaticOpsMixedLhs`.
                public unsafe StaticOpsMixedLhs(MR.CS.CSharp.ConstStaticOpsMixedLhs _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsMixedLhs_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsMixedLhs._Underlying *__MR_CSharp_StaticOpsMixedLhs_ConstructFromAnother(MR.CS.CSharp.StaticOpsMixedLhs._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_StaticOpsMixedLhs_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::StaticOpsMixedLhs::operator=`.
                public unsafe MR.CS.CSharp.StaticOpsMixedLhs Assign(MR.CS.CSharp.ConstStaticOpsMixedLhs _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsMixedLhs_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.StaticOpsMixedLhs._Underlying *__MR_CSharp_StaticOpsMixedLhs_AssignFromAnother(_Underlying *_this, MR.CS.CSharp.StaticOpsMixedLhs._Underlying *_other);
                    return new(__MR_CSharp_StaticOpsMixedLhs_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }
            }

            /// This is used for optional parameters of class `StaticOpsMixedLhs` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `StaticOpsMixedLhs`/`ConstStaticOpsMixedLhs` to pass it to the function.
            public class InOptConstStaticOpsMixedLhs
            {
                public ConstStaticOpsMixedLhs? Opt;

                public InOptConstStaticOpsMixedLhs() {}
                public InOptConstStaticOpsMixedLhs(ConstStaticOpsMixedLhs NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstStaticOpsMixedLhs(ConstStaticOpsMixedLhs NewOpt) {return new InOptConstStaticOpsMixedLhs(NewOpt);}
            }

            /// Generated from class `MR::CSharp::StaticOpsMixedRhs`.
            /// This is the const half of the class.
            public class ConstStaticOpsMixedRhs : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstStaticOpsMixedRhs(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsMixedRhs_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_StaticOpsMixedRhs_Destroy(_Underlying *_this);
                    __MR_CSharp_StaticOpsMixedRhs_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstStaticOpsMixedRhs() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstStaticOpsMixedRhs() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsMixedRhs_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsMixedRhs._Underlying *__MR_CSharp_StaticOpsMixedRhs_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_StaticOpsMixedRhs_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::StaticOpsMixedRhs::StaticOpsMixedRhs`.
                public unsafe ConstStaticOpsMixedRhs(MR.CS.CSharp.ConstStaticOpsMixedRhs _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsMixedRhs_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsMixedRhs._Underlying *__MR_CSharp_StaticOpsMixedRhs_ConstructFromAnother(MR.CS.CSharp.StaticOpsMixedRhs._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_StaticOpsMixedRhs_ConstructFromAnother(_other._UnderlyingPtr);
                }
            }

            /// Generated from class `MR::CSharp::StaticOpsMixedRhs`.
            /// This is the non-const half of the class.
            public class StaticOpsMixedRhs : ConstStaticOpsMixedRhs
            {
                internal unsafe StaticOpsMixedRhs(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe StaticOpsMixedRhs() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsMixedRhs_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsMixedRhs._Underlying *__MR_CSharp_StaticOpsMixedRhs_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_StaticOpsMixedRhs_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::StaticOpsMixedRhs::StaticOpsMixedRhs`.
                public unsafe StaticOpsMixedRhs(MR.CS.CSharp.ConstStaticOpsMixedRhs _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsMixedRhs_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstStaticOpsMixedRhs._Underlying *__MR_CSharp_StaticOpsMixedRhs_ConstructFromAnother(MR.CS.CSharp.StaticOpsMixedRhs._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_StaticOpsMixedRhs_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::StaticOpsMixedRhs::operator=`.
                public unsafe MR.CS.CSharp.StaticOpsMixedRhs Assign(MR.CS.CSharp.ConstStaticOpsMixedRhs _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_StaticOpsMixedRhs_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.StaticOpsMixedRhs._Underlying *__MR_CSharp_StaticOpsMixedRhs_AssignFromAnother(_Underlying *_this, MR.CS.CSharp.StaticOpsMixedRhs._Underlying *_other);
                    return new(__MR_CSharp_StaticOpsMixedRhs_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }
            }

            /// This is used for optional parameters of class `StaticOpsMixedRhs` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `StaticOpsMixedRhs`/`ConstStaticOpsMixedRhs` to pass it to the function.
            public class InOptConstStaticOpsMixedRhs
            {
                public ConstStaticOpsMixedRhs? Opt;

                public InOptConstStaticOpsMixedRhs() {}
                public InOptConstStaticOpsMixedRhs(ConstStaticOpsMixedRhs NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstStaticOpsMixedRhs(ConstStaticOpsMixedRhs NewOpt) {return new InOptConstStaticOpsMixedRhs(NewOpt);}
            }

            // Check how non-trivial class types are passed by value into operators.
            /// Generated from class `MR::CSharp::NonTrivialClassOps`.
            /// This is the const half of the class.
            public class ConstNonTrivialClassOps : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstNonTrivialClassOps(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_NonTrivialClassOps_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_NonTrivialClassOps_Destroy(_Underlying *_this);
                    __MR_CSharp_NonTrivialClassOps_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstNonTrivialClassOps() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstNonTrivialClassOps() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_NonTrivialClassOps_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstNonTrivialClassOps._Underlying *__MR_CSharp_NonTrivialClassOps_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_NonTrivialClassOps_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::NonTrivialClassOps::NonTrivialClassOps`.
                public unsafe ConstNonTrivialClassOps(MR.CS.CSharp.ByValueNonTrivialClassOps _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_NonTrivialClassOps_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstNonTrivialClassOps._Underlying *__MR_CSharp_NonTrivialClassOps_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.NonTrivialClassOps._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_NonTrivialClassOps_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// Generated from function `MR::CSharp::operator+`.
                public static unsafe int operator+(ConstNonTrivialClassOps _1, float _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_add_MR_CSharp_NonTrivialClassOps_float", ExactSpelling = true)]
                    extern static int __MR_C_add_MR_CSharp_NonTrivialClassOps_float(MR.CS.Misc._PassBy _1_pass_by, MR.CS.CSharp.NonTrivialClassOps._Underlying *_1, float _2);
                    return __MR_C_add_MR_CSharp_NonTrivialClassOps_float(MR.CS.Misc._PassBy.copy, _1._UnderlyingPtr, _2);
                }

                /// Generated from function `MR::CSharp::operator+`.
                public static unsafe int operator+(float _1, ConstNonTrivialClassOps _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_add_float_MR_CSharp_NonTrivialClassOps", ExactSpelling = true)]
                    extern static int __MR_C_add_float_MR_CSharp_NonTrivialClassOps(float _1, MR.CS.Misc._PassBy _2_pass_by, MR.CS.CSharp.NonTrivialClassOps._Underlying *_2);
                    return __MR_C_add_float_MR_CSharp_NonTrivialClassOps(_1, MR.CS.Misc._PassBy.copy, _2._UnderlyingPtr);
                }
            }

            // Check how non-trivial class types are passed by value into operators.
            /// Generated from class `MR::CSharp::NonTrivialClassOps`.
            /// This is the non-const half of the class.
            public class NonTrivialClassOps : ConstNonTrivialClassOps
            {
                internal unsafe NonTrivialClassOps(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe NonTrivialClassOps() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_NonTrivialClassOps_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstNonTrivialClassOps._Underlying *__MR_CSharp_NonTrivialClassOps_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_NonTrivialClassOps_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::NonTrivialClassOps::NonTrivialClassOps`.
                public unsafe NonTrivialClassOps(MR.CS.CSharp.ByValueNonTrivialClassOps _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_NonTrivialClassOps_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstNonTrivialClassOps._Underlying *__MR_CSharp_NonTrivialClassOps_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.NonTrivialClassOps._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_NonTrivialClassOps_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// Generated from method `MR::CSharp::NonTrivialClassOps::operator=`.
                public unsafe MR.CS.CSharp.NonTrivialClassOps Assign(MR.CS.CSharp.ByValueNonTrivialClassOps _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_NonTrivialClassOps_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.NonTrivialClassOps._Underlying *__MR_CSharp_NonTrivialClassOps_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.NonTrivialClassOps._Underlying *_other);
                    return new(__MR_CSharp_NonTrivialClassOps_AssignFromAnother(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null), is_owning: false);
                }

                /// Generated from method `MR::CSharp::NonTrivialClassOps::operator+`.
                public static unsafe int operator+(MR.CS.CSharp.NonTrivialClassOps _this, int _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_add_MR_CSharp_NonTrivialClassOps_int", ExactSpelling = true)]
                    extern static int __MR_C_add_MR_CSharp_NonTrivialClassOps_int(MR.CS.CSharp.NonTrivialClassOps._Underlying *_this, int _1);
                    return __MR_C_add_MR_CSharp_NonTrivialClassOps_int(_this._UnderlyingPtr, _1);
                }
            }

            /// This is used as a function parameter when the underlying function receives `NonTrivialClassOps` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `NonTrivialClassOps`/`ConstNonTrivialClassOps` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter is nullable and has a default argument.
            public readonly struct ByValueNonTrivialClassOps
            {
                internal readonly ConstNonTrivialClassOps? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public ByValueNonTrivialClassOps() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public ByValueNonTrivialClassOps(ConstNonTrivialClassOps new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public ByValueNonTrivialClassOps(MR.CS.Misc._Moved<NonTrivialClassOps> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator ByValueNonTrivialClassOps(ConstNonTrivialClassOps arg) {return new(arg);}
                public static implicit operator ByValueNonTrivialClassOps(MR.CS.Misc._Moved<NonTrivialClassOps> arg) {return new(arg);}
            }

            /// This is used for optional parameters of class `NonTrivialClassOps` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `NonTrivialClassOps`/`ConstNonTrivialClassOps` to pass it to the function.
            public class InOptConstNonTrivialClassOps
            {
                public ConstNonTrivialClassOps? Opt;

                public InOptConstNonTrivialClassOps() {}
                public InOptConstNonTrivialClassOps(ConstNonTrivialClassOps NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstNonTrivialClassOps(ConstNonTrivialClassOps NewOpt) {return new InOptConstNonTrivialClassOps(NewOpt);}
            }

            // The class is non-copyable, so operators with by-value parameters fail to inject.
            /// Generated from class `MR::CSharp::NonCopyableClassByValueOps`.
            /// This is the const half of the class.
            public class ConstNonCopyableClassByValueOps : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstNonCopyableClassByValueOps(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_NonCopyableClassByValueOps_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_NonCopyableClassByValueOps_Destroy(_Underlying *_this);
                    __MR_CSharp_NonCopyableClassByValueOps_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstNonCopyableClassByValueOps() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstNonCopyableClassByValueOps() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_NonCopyableClassByValueOps_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstNonCopyableClassByValueOps._Underlying *__MR_CSharp_NonCopyableClassByValueOps_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_NonCopyableClassByValueOps_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::NonCopyableClassByValueOps::NonCopyableClassByValueOps`.
                public unsafe ConstNonCopyableClassByValueOps(MR.CS.CSharp.ConstNonCopyableClassByValueOps _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_NonCopyableClassByValueOps_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstNonCopyableClassByValueOps._Underlying *__MR_CSharp_NonCopyableClassByValueOps_ConstructFromAnother(MR.CS.CSharp.NonCopyableClassByValueOps._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_NonCopyableClassByValueOps_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from function `MR::CSharp::operator+`.
                public static unsafe int operator+(ConstNonCopyableClassByValueOps _1, int _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_add_MR_CSharp_NonCopyableClassByValueOps_int", ExactSpelling = true)]
                    extern static int __MR_C_add_MR_CSharp_NonCopyableClassByValueOps_int(MR.CS.CSharp.NonCopyableClassByValueOps._Underlying *_1, int _2);
                    return __MR_C_add_MR_CSharp_NonCopyableClassByValueOps_int(_1._UnderlyingPtr, _2);
                }

                /// Generated from function `MR::CSharp::operator+`.
                public static unsafe int operator+(int _1, ConstNonCopyableClassByValueOps _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_add_int_MR_CSharp_NonCopyableClassByValueOps", ExactSpelling = true)]
                    extern static int __MR_C_add_int_MR_CSharp_NonCopyableClassByValueOps(int _1, MR.CS.CSharp.NonCopyableClassByValueOps._Underlying *_2);
                    return __MR_C_add_int_MR_CSharp_NonCopyableClassByValueOps(_1, _2._UnderlyingPtr);
                }
            }

            // The class is non-copyable, so operators with by-value parameters fail to inject.
            /// Generated from class `MR::CSharp::NonCopyableClassByValueOps`.
            /// This is the non-const half of the class.
            public class NonCopyableClassByValueOps : ConstNonCopyableClassByValueOps
            {
                internal unsafe NonCopyableClassByValueOps(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe NonCopyableClassByValueOps() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_NonCopyableClassByValueOps_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstNonCopyableClassByValueOps._Underlying *__MR_CSharp_NonCopyableClassByValueOps_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_NonCopyableClassByValueOps_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::NonCopyableClassByValueOps::NonCopyableClassByValueOps`.
                public unsafe NonCopyableClassByValueOps(MR.CS.CSharp.ConstNonCopyableClassByValueOps _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_NonCopyableClassByValueOps_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstNonCopyableClassByValueOps._Underlying *__MR_CSharp_NonCopyableClassByValueOps_ConstructFromAnother(MR.CS.CSharp.NonCopyableClassByValueOps._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_NonCopyableClassByValueOps_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::NonCopyableClassByValueOps::operator=`.
                public unsafe MR.CS.CSharp.NonCopyableClassByValueOps Assign(MR.CS.CSharp.ConstNonCopyableClassByValueOps _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_NonCopyableClassByValueOps_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.NonCopyableClassByValueOps._Underlying *__MR_CSharp_NonCopyableClassByValueOps_AssignFromAnother(_Underlying *_this, MR.CS.CSharp.NonCopyableClassByValueOps._Underlying *_other);
                    return new(__MR_CSharp_NonCopyableClassByValueOps_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }
            }

            /// This is used for optional parameters of class `NonCopyableClassByValueOps` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `NonCopyableClassByValueOps`/`ConstNonCopyableClassByValueOps` to pass it to the function.
            public class InOptConstNonCopyableClassByValueOps
            {
                public ConstNonCopyableClassByValueOps? Opt;

                public InOptConstNonCopyableClassByValueOps() {}
                public InOptConstNonCopyableClassByValueOps(ConstNonCopyableClassByValueOps NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstNonCopyableClassByValueOps(ConstNonCopyableClassByValueOps NewOpt) {return new InOptConstNonCopyableClassByValueOps(NewOpt);}
            }

            // Test the call operator, since it can have an unusual amount of arguments.
            // Not testing `[]` here to be able to run the tests on older C++.
            /// Generated from class `MR::CSharp::CallOp`.
            /// This is the const half of the class.
            public class ConstCallOp : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstCallOp(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_CallOp_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_CallOp_Destroy(_Underlying *_this);
                    __MR_CSharp_CallOp_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstCallOp() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstCallOp() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_CallOp_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstCallOp._Underlying *__MR_CSharp_CallOp_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_CallOp_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::CallOp::CallOp`.
                public unsafe ConstCallOp(MR.CS.CSharp.ConstCallOp _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_CallOp_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstCallOp._Underlying *__MR_CSharp_CallOp_ConstructFromAnother(MR.CS.CSharp.CallOp._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_CallOp_ConstructFromAnother(_other._UnderlyingPtr);
                }
            }

            // Test the call operator, since it can have an unusual amount of arguments.
            // Not testing `[]` here to be able to run the tests on older C++.
            /// Generated from class `MR::CSharp::CallOp`.
            /// This is the non-const half of the class.
            public class CallOp : ConstCallOp
            {
                internal unsafe CallOp(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe CallOp() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_CallOp_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstCallOp._Underlying *__MR_CSharp_CallOp_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_CallOp_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::CallOp::CallOp`.
                public unsafe CallOp(MR.CS.CSharp.ConstCallOp _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_CallOp_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstCallOp._Underlying *__MR_CSharp_CallOp_ConstructFromAnother(MR.CS.CSharp.CallOp._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_CallOp_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::CallOp::operator=`.
                public unsafe MR.CS.CSharp.CallOp Assign(MR.CS.CSharp.ConstCallOp _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_CallOp_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.CallOp._Underlying *__MR_CSharp_CallOp_AssignFromAnother(_Underlying *_this, MR.CS.CSharp.CallOp._Underlying *_other);
                    return new(__MR_CSharp_CallOp_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }

                /// Generated from method `MR::CSharp::CallOp::operator()`.
                public unsafe void Call()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_CallOp_call_0", ExactSpelling = true)]
                    extern static void __MR_CSharp_CallOp_call_0(_Underlying *_this);
                    __MR_CSharp_CallOp_call_0(_UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::CallOp::operator()`.
                public unsafe int Call(int _1, int _2, int _3)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_CallOp_call_3", ExactSpelling = true)]
                    extern static int __MR_CSharp_CallOp_call_3(_Underlying *_this, int _1, int _2, int _3);
                    return __MR_CSharp_CallOp_call_3(_UnderlyingPtr, _1, _2, _3);
                }
            }

            /// This is used for optional parameters of class `CallOp` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `CallOp`/`ConstCallOp` to pass it to the function.
            public class InOptConstCallOp
            {
                public ConstCallOp? Opt;

                public InOptConstCallOp() {}
                public InOptConstCallOp(ConstCallOp NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstCallOp(ConstCallOp NewOpt) {return new InOptConstCallOp(NewOpt);}
            }

            /// Generated from class `MR::CSharp::TestOpsA`.
            /// This is the const half of the class.
            public class ConstTestOpsA : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstTestOpsA(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsA_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_TestOpsA_Destroy(_Underlying *_this);
                    __MR_CSharp_TestOpsA_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstTestOpsA() {Dispose(false);}

                /// Generated from constructor `MR::CSharp::TestOpsA::TestOpsA`.
                public unsafe ConstTestOpsA(MR.CS.CSharp.ConstTestOpsA _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsA_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstTestOpsA._Underlying *__MR_CSharp_TestOpsA_ConstructFromAnother(MR.CS.CSharp.TestOpsA._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_TestOpsA_ConstructFromAnother(_other._UnderlyingPtr);
                }
            }

            /// Generated from class `MR::CSharp::TestOpsA`.
            /// This is the non-const half of the class.
            public class TestOpsA : ConstTestOpsA
            {
                internal unsafe TestOpsA(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Generated from constructor `MR::CSharp::TestOpsA::TestOpsA`.
                public unsafe TestOpsA(MR.CS.CSharp.ConstTestOpsA _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsA_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstTestOpsA._Underlying *__MR_CSharp_TestOpsA_ConstructFromAnother(MR.CS.CSharp.TestOpsA._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_TestOpsA_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsA::operator=`.
                public unsafe int Assign(MR.CS.CSharp.ConstTestOpsA _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsA_AssignFromAnother", ExactSpelling = true)]
                    extern static int __MR_CSharp_TestOpsA_AssignFromAnother(_Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_other);
                    return __MR_CSharp_TestOpsA_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsA::operator+`.
                public static unsafe int operator+(MR.CS.CSharp.TestOpsA _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_pos_MR_CSharp_TestOpsA", ExactSpelling = true)]
                    extern static int __MR_C_pos_MR_CSharp_TestOpsA(MR.CS.CSharp.TestOpsA._Underlying *_this);
                    return __MR_C_pos_MR_CSharp_TestOpsA(_this._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsA::operator+`.
                public static unsafe int operator+(MR.CS.CSharp.TestOpsA _this, MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_add_MR_CSharp_TestOpsA", ExactSpelling = true)]
                    extern static int __MR_C_add_MR_CSharp_TestOpsA(MR.CS.CSharp.TestOpsA._Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    return __MR_C_add_MR_CSharp_TestOpsA(_this._UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsA::operator-`.
                public static unsafe int operator-(MR.CS.CSharp.TestOpsA _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_neg_MR_CSharp_TestOpsA", ExactSpelling = true)]
                    extern static int __MR_C_neg_MR_CSharp_TestOpsA(MR.CS.CSharp.TestOpsA._Underlying *_this);
                    return __MR_C_neg_MR_CSharp_TestOpsA(_this._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsA::operator-`.
                public static unsafe int operator-(MR.CS.CSharp.TestOpsA _this, MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_sub_MR_CSharp_TestOpsA", ExactSpelling = true)]
                    extern static int __MR_C_sub_MR_CSharp_TestOpsA(MR.CS.CSharp.TestOpsA._Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    return __MR_C_sub_MR_CSharp_TestOpsA(_this._UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsA::operator*`.
                public unsafe int Deref()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_deref_MR_CSharp_TestOpsA", ExactSpelling = true)]
                    extern static int __MR_C_deref_MR_CSharp_TestOpsA(_Underlying *_this);
                    return __MR_C_deref_MR_CSharp_TestOpsA(_UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsA::operator*`.
                public static unsafe int operator*(MR.CS.CSharp.TestOpsA _this, MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_mul_MR_CSharp_TestOpsA", ExactSpelling = true)]
                    extern static int __MR_C_mul_MR_CSharp_TestOpsA(MR.CS.CSharp.TestOpsA._Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    return __MR_C_mul_MR_CSharp_TestOpsA(_this._UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsA::operator/`.
                public static unsafe int operator/(MR.CS.CSharp.TestOpsA _this, MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_div_MR_CSharp_TestOpsA", ExactSpelling = true)]
                    extern static int __MR_C_div_MR_CSharp_TestOpsA(MR.CS.CSharp.TestOpsA._Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    return __MR_C_div_MR_CSharp_TestOpsA(_this._UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsA::operator%`.
                public static unsafe int operator%(MR.CS.CSharp.TestOpsA _this, MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_mod_MR_CSharp_TestOpsA", ExactSpelling = true)]
                    extern static int __MR_C_mod_MR_CSharp_TestOpsA(MR.CS.CSharp.TestOpsA._Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    return __MR_C_mod_MR_CSharp_TestOpsA(_this._UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsA::operator^`.
                public static unsafe int operator^(MR.CS.CSharp.TestOpsA _this, MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_xor_MR_CSharp_TestOpsA", ExactSpelling = true)]
                    extern static int __MR_C_xor_MR_CSharp_TestOpsA(MR.CS.CSharp.TestOpsA._Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    return __MR_C_xor_MR_CSharp_TestOpsA(_this._UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsA::operator&`.
                public unsafe int AddressOf()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_addressof_MR_CSharp_TestOpsA", ExactSpelling = true)]
                    extern static int __MR_C_addressof_MR_CSharp_TestOpsA(_Underlying *_this);
                    return __MR_C_addressof_MR_CSharp_TestOpsA(_UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsA::operator&`.
                public static unsafe int operator&(MR.CS.CSharp.TestOpsA _this, MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_bitand_MR_CSharp_TestOpsA", ExactSpelling = true)]
                    extern static int __MR_C_bitand_MR_CSharp_TestOpsA(MR.CS.CSharp.TestOpsA._Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    return __MR_C_bitand_MR_CSharp_TestOpsA(_this._UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsA::operator|`.
                public static unsafe int operator|(MR.CS.CSharp.TestOpsA _this, MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_bitor_MR_CSharp_TestOpsA", ExactSpelling = true)]
                    extern static int __MR_C_bitor_MR_CSharp_TestOpsA(MR.CS.CSharp.TestOpsA._Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    return __MR_C_bitor_MR_CSharp_TestOpsA(_this._UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsA::operator~`.
                public static unsafe int operator~(MR.CS.CSharp.TestOpsA _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_compl_MR_CSharp_TestOpsA", ExactSpelling = true)]
                    extern static int __MR_C_compl_MR_CSharp_TestOpsA(MR.CS.CSharp.TestOpsA._Underlying *_this);
                    return __MR_C_compl_MR_CSharp_TestOpsA(_this._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsA::operator!`.
                public static unsafe int operator!(MR.CS.CSharp.TestOpsA _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_not_MR_CSharp_TestOpsA", ExactSpelling = true)]
                    extern static int __MR_C_not_MR_CSharp_TestOpsA(MR.CS.CSharp.TestOpsA._Underlying *_this);
                    return __MR_C_not_MR_CSharp_TestOpsA(_this._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsA::operator+=`.
                public unsafe int AddAssign(MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsA_add_assign", ExactSpelling = true)]
                    extern static int __MR_CSharp_TestOpsA_add_assign(_Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    return __MR_CSharp_TestOpsA_add_assign(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsA::operator-=`.
                public unsafe int SubAssign(MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsA_sub_assign", ExactSpelling = true)]
                    extern static int __MR_CSharp_TestOpsA_sub_assign(_Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    return __MR_CSharp_TestOpsA_sub_assign(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsA::operator*=`.
                public unsafe int MulAssign(MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsA_mul_assign", ExactSpelling = true)]
                    extern static int __MR_CSharp_TestOpsA_mul_assign(_Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    return __MR_CSharp_TestOpsA_mul_assign(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsA::operator/=`.
                public unsafe int DivAssign(MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsA_div_assign", ExactSpelling = true)]
                    extern static int __MR_CSharp_TestOpsA_div_assign(_Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    return __MR_CSharp_TestOpsA_div_assign(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsA::operator%=`.
                public unsafe int ModAssign(MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsA_mod_assign", ExactSpelling = true)]
                    extern static int __MR_CSharp_TestOpsA_mod_assign(_Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    return __MR_CSharp_TestOpsA_mod_assign(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsA::operator^=`.
                public unsafe int XorAssign(MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsA_xor_assign", ExactSpelling = true)]
                    extern static int __MR_CSharp_TestOpsA_xor_assign(_Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    return __MR_CSharp_TestOpsA_xor_assign(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsA::operator&=`.
                public unsafe int BitandAssign(MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsA_bitand_assign", ExactSpelling = true)]
                    extern static int __MR_CSharp_TestOpsA_bitand_assign(_Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    return __MR_CSharp_TestOpsA_bitand_assign(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsA::operator|=`.
                public unsafe int BitorAssign(MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsA_bitor_assign", ExactSpelling = true)]
                    extern static int __MR_CSharp_TestOpsA_bitor_assign(_Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    return __MR_CSharp_TestOpsA_bitor_assign(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsA::operator<<`.
                public static unsafe int operator<<(MR.CS.CSharp.TestOpsA _this, MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_lshift_MR_CSharp_TestOpsA", ExactSpelling = true)]
                    extern static int __MR_C_lshift_MR_CSharp_TestOpsA(MR.CS.CSharp.TestOpsA._Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    return __MR_C_lshift_MR_CSharp_TestOpsA(_this._UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsA::operator>>`.
                public static unsafe int operator>>(MR.CS.CSharp.TestOpsA _this, MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_rshift_MR_CSharp_TestOpsA", ExactSpelling = true)]
                    extern static int __MR_C_rshift_MR_CSharp_TestOpsA(MR.CS.CSharp.TestOpsA._Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    return __MR_C_rshift_MR_CSharp_TestOpsA(_this._UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsA::operator<<=`.
                public unsafe int LshiftAssign(MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsA_lshift_assign", ExactSpelling = true)]
                    extern static int __MR_CSharp_TestOpsA_lshift_assign(_Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    return __MR_CSharp_TestOpsA_lshift_assign(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsA::operator>>=`.
                public unsafe int RshiftAssign(MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsA_rshift_assign", ExactSpelling = true)]
                    extern static int __MR_CSharp_TestOpsA_rshift_assign(_Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    return __MR_CSharp_TestOpsA_rshift_assign(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsA::operator<=>`.
                public unsafe int CompareThreeWay(MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_compare_three_way_MR_CSharp_TestOpsA", ExactSpelling = true)]
                    extern static int __MR_C_compare_three_way_MR_CSharp_TestOpsA(_Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    return __MR_C_compare_three_way_MR_CSharp_TestOpsA(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsA::operator&&`.
                public unsafe int And(MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_and_MR_CSharp_TestOpsA", ExactSpelling = true)]
                    extern static int __MR_C_and_MR_CSharp_TestOpsA(_Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    return __MR_C_and_MR_CSharp_TestOpsA(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsA::operator||`.
                public unsafe int Or(MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_or_MR_CSharp_TestOpsA", ExactSpelling = true)]
                    extern static int __MR_C_or_MR_CSharp_TestOpsA(_Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    return __MR_C_or_MR_CSharp_TestOpsA(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsA::operator,`.
                public unsafe int Comma(MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_comma_MR_CSharp_TestOpsA", ExactSpelling = true)]
                    extern static int __MR_C_comma_MR_CSharp_TestOpsA(_Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    return __MR_C_comma_MR_CSharp_TestOpsA(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsA::operator->*`.
                public unsafe int ArrowStar(MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsA_arrow_star", ExactSpelling = true)]
                    extern static int __MR_CSharp_TestOpsA_arrow_star(_Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    return __MR_CSharp_TestOpsA_arrow_star(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsA::operator->`.
                public unsafe int Arrow()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsA_arrow", ExactSpelling = true)]
                    extern static int __MR_CSharp_TestOpsA_arrow(_Underlying *_this);
                    return __MR_CSharp_TestOpsA_arrow(_UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsA::operator()`.
                public unsafe int Call(MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsA_call", ExactSpelling = true)]
                    extern static int __MR_CSharp_TestOpsA_call(_Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    return __MR_CSharp_TestOpsA_call(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsA::operator[]`.
                public unsafe int Index(MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsA_index", ExactSpelling = true)]
                    extern static int __MR_CSharp_TestOpsA_index(_Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    return __MR_CSharp_TestOpsA_index(_UnderlyingPtr, _1._UnderlyingPtr);
                }
            }

            /// This is used for optional parameters of class `TestOpsA` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `TestOpsA`/`ConstTestOpsA` to pass it to the function.
            public class InOptConstTestOpsA
            {
                public ConstTestOpsA? Opt;

                public InOptConstTestOpsA() {}
                public InOptConstTestOpsA(ConstTestOpsA NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstTestOpsA(ConstTestOpsA NewOpt) {return new InOptConstTestOpsA(NewOpt);}
            }

            /// Generated from class `MR::CSharp::TestOpsB`.
            /// This is the const half of the class.
            public class ConstTestOpsB : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstTestOpsB(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsB_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_TestOpsB_Destroy(_Underlying *_this);
                    __MR_CSharp_TestOpsB_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstTestOpsB() {Dispose(false);}

                /// Generated from constructor `MR::CSharp::TestOpsB::TestOpsB`.
                public unsafe ConstTestOpsB(MR.CS.CSharp.ByValueTestOpsB _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsB_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstTestOpsB._Underlying *__MR_CSharp_TestOpsB_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.TestOpsB._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_TestOpsB_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }
            }

            /// Generated from class `MR::CSharp::TestOpsB`.
            /// This is the non-const half of the class.
            public class TestOpsB : ConstTestOpsB
            {
                internal unsafe TestOpsB(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Generated from constructor `MR::CSharp::TestOpsB::TestOpsB`.
                public unsafe TestOpsB(MR.CS.CSharp.ByValueTestOpsB _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsB_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstTestOpsB._Underlying *__MR_CSharp_TestOpsB_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.TestOpsB._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_TestOpsB_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// Generated from method `MR::CSharp::TestOpsB::operator=`.
                public unsafe int Assign(MR.CS.CSharp.ByValueTestOpsB _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsB_AssignFromAnother", ExactSpelling = true)]
                    extern static int __MR_CSharp_TestOpsB_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.TestOpsB._Underlying *_other);
                    return __MR_CSharp_TestOpsB_AssignFromAnother(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// Generated from method `MR::CSharp::TestOpsB::operator+`.
                public static unsafe int operator+(MR.CS.CSharp.TestOpsB _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_pos_MR_CSharp_TestOpsB", ExactSpelling = true)]
                    extern static int __MR_C_pos_MR_CSharp_TestOpsB(MR.CS.CSharp.TestOpsB._Underlying *_this);
                    return __MR_C_pos_MR_CSharp_TestOpsB(_this._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsB::operator+`.
                public static unsafe int operator+(MR.CS.CSharp.TestOpsB _this, MR.CS.CSharp.ByValueTestOpsB _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_add_MR_CSharp_TestOpsB", ExactSpelling = true)]
                    extern static int __MR_C_add_MR_CSharp_TestOpsB(MR.CS.CSharp.TestOpsB._Underlying *_this, MR.CS.Misc._PassBy _1_pass_by, MR.CS.CSharp.TestOpsB._Underlying *_1);
                    return __MR_C_add_MR_CSharp_TestOpsB(_this._UnderlyingPtr, _1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
                }

                /// Generated from method `MR::CSharp::TestOpsB::operator-`.
                public static unsafe int operator-(MR.CS.CSharp.TestOpsB _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_neg_MR_CSharp_TestOpsB", ExactSpelling = true)]
                    extern static int __MR_C_neg_MR_CSharp_TestOpsB(MR.CS.CSharp.TestOpsB._Underlying *_this);
                    return __MR_C_neg_MR_CSharp_TestOpsB(_this._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsB::operator-`.
                public static unsafe int operator-(MR.CS.CSharp.TestOpsB _this, MR.CS.CSharp.ByValueTestOpsB _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_sub_MR_CSharp_TestOpsB", ExactSpelling = true)]
                    extern static int __MR_C_sub_MR_CSharp_TestOpsB(MR.CS.CSharp.TestOpsB._Underlying *_this, MR.CS.Misc._PassBy _1_pass_by, MR.CS.CSharp.TestOpsB._Underlying *_1);
                    return __MR_C_sub_MR_CSharp_TestOpsB(_this._UnderlyingPtr, _1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
                }

                /// Generated from method `MR::CSharp::TestOpsB::operator*`.
                public unsafe int Deref()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_deref_MR_CSharp_TestOpsB", ExactSpelling = true)]
                    extern static int __MR_C_deref_MR_CSharp_TestOpsB(_Underlying *_this);
                    return __MR_C_deref_MR_CSharp_TestOpsB(_UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsB::operator*`.
                public static unsafe int operator*(MR.CS.CSharp.TestOpsB _this, MR.CS.CSharp.ByValueTestOpsB _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_mul_MR_CSharp_TestOpsB", ExactSpelling = true)]
                    extern static int __MR_C_mul_MR_CSharp_TestOpsB(MR.CS.CSharp.TestOpsB._Underlying *_this, MR.CS.Misc._PassBy _1_pass_by, MR.CS.CSharp.TestOpsB._Underlying *_1);
                    return __MR_C_mul_MR_CSharp_TestOpsB(_this._UnderlyingPtr, _1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
                }

                /// Generated from method `MR::CSharp::TestOpsB::operator/`.
                public static unsafe int operator/(MR.CS.CSharp.TestOpsB _this, MR.CS.CSharp.ByValueTestOpsB _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_div_MR_CSharp_TestOpsB", ExactSpelling = true)]
                    extern static int __MR_C_div_MR_CSharp_TestOpsB(MR.CS.CSharp.TestOpsB._Underlying *_this, MR.CS.Misc._PassBy _1_pass_by, MR.CS.CSharp.TestOpsB._Underlying *_1);
                    return __MR_C_div_MR_CSharp_TestOpsB(_this._UnderlyingPtr, _1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
                }

                /// Generated from method `MR::CSharp::TestOpsB::operator%`.
                public static unsafe int operator%(MR.CS.CSharp.TestOpsB _this, MR.CS.CSharp.ByValueTestOpsB _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_mod_MR_CSharp_TestOpsB", ExactSpelling = true)]
                    extern static int __MR_C_mod_MR_CSharp_TestOpsB(MR.CS.CSharp.TestOpsB._Underlying *_this, MR.CS.Misc._PassBy _1_pass_by, MR.CS.CSharp.TestOpsB._Underlying *_1);
                    return __MR_C_mod_MR_CSharp_TestOpsB(_this._UnderlyingPtr, _1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
                }

                /// Generated from method `MR::CSharp::TestOpsB::operator^`.
                public static unsafe int operator^(MR.CS.CSharp.TestOpsB _this, MR.CS.CSharp.ByValueTestOpsB _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_xor_MR_CSharp_TestOpsB", ExactSpelling = true)]
                    extern static int __MR_C_xor_MR_CSharp_TestOpsB(MR.CS.CSharp.TestOpsB._Underlying *_this, MR.CS.Misc._PassBy _1_pass_by, MR.CS.CSharp.TestOpsB._Underlying *_1);
                    return __MR_C_xor_MR_CSharp_TestOpsB(_this._UnderlyingPtr, _1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
                }

                /// Generated from method `MR::CSharp::TestOpsB::operator&`.
                public unsafe int AddressOf()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_addressof_MR_CSharp_TestOpsB", ExactSpelling = true)]
                    extern static int __MR_C_addressof_MR_CSharp_TestOpsB(_Underlying *_this);
                    return __MR_C_addressof_MR_CSharp_TestOpsB(_UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsB::operator&`.
                public static unsafe int operator&(MR.CS.CSharp.TestOpsB _this, MR.CS.CSharp.ByValueTestOpsB _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_bitand_MR_CSharp_TestOpsB", ExactSpelling = true)]
                    extern static int __MR_C_bitand_MR_CSharp_TestOpsB(MR.CS.CSharp.TestOpsB._Underlying *_this, MR.CS.Misc._PassBy _1_pass_by, MR.CS.CSharp.TestOpsB._Underlying *_1);
                    return __MR_C_bitand_MR_CSharp_TestOpsB(_this._UnderlyingPtr, _1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
                }

                /// Generated from method `MR::CSharp::TestOpsB::operator|`.
                public static unsafe int operator|(MR.CS.CSharp.TestOpsB _this, MR.CS.CSharp.ByValueTestOpsB _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_bitor_MR_CSharp_TestOpsB", ExactSpelling = true)]
                    extern static int __MR_C_bitor_MR_CSharp_TestOpsB(MR.CS.CSharp.TestOpsB._Underlying *_this, MR.CS.Misc._PassBy _1_pass_by, MR.CS.CSharp.TestOpsB._Underlying *_1);
                    return __MR_C_bitor_MR_CSharp_TestOpsB(_this._UnderlyingPtr, _1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
                }

                /// Generated from method `MR::CSharp::TestOpsB::operator~`.
                public static unsafe int operator~(MR.CS.CSharp.TestOpsB _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_compl_MR_CSharp_TestOpsB", ExactSpelling = true)]
                    extern static int __MR_C_compl_MR_CSharp_TestOpsB(MR.CS.CSharp.TestOpsB._Underlying *_this);
                    return __MR_C_compl_MR_CSharp_TestOpsB(_this._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsB::operator!`.
                public static unsafe int operator!(MR.CS.CSharp.TestOpsB _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_not_MR_CSharp_TestOpsB", ExactSpelling = true)]
                    extern static int __MR_C_not_MR_CSharp_TestOpsB(MR.CS.CSharp.TestOpsB._Underlying *_this);
                    return __MR_C_not_MR_CSharp_TestOpsB(_this._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsB::operator+=`.
                public unsafe int AddAssign(MR.CS.CSharp.ByValueTestOpsB _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsB_add_assign", ExactSpelling = true)]
                    extern static int __MR_CSharp_TestOpsB_add_assign(_Underlying *_this, MR.CS.Misc._PassBy _1_pass_by, MR.CS.CSharp.TestOpsB._Underlying *_1);
                    return __MR_CSharp_TestOpsB_add_assign(_UnderlyingPtr, _1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
                }

                /// Generated from method `MR::CSharp::TestOpsB::operator-=`.
                public unsafe int SubAssign(MR.CS.CSharp.ByValueTestOpsB _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsB_sub_assign", ExactSpelling = true)]
                    extern static int __MR_CSharp_TestOpsB_sub_assign(_Underlying *_this, MR.CS.Misc._PassBy _1_pass_by, MR.CS.CSharp.TestOpsB._Underlying *_1);
                    return __MR_CSharp_TestOpsB_sub_assign(_UnderlyingPtr, _1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
                }

                /// Generated from method `MR::CSharp::TestOpsB::operator*=`.
                public unsafe int MulAssign(MR.CS.CSharp.ByValueTestOpsB _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsB_mul_assign", ExactSpelling = true)]
                    extern static int __MR_CSharp_TestOpsB_mul_assign(_Underlying *_this, MR.CS.Misc._PassBy _1_pass_by, MR.CS.CSharp.TestOpsB._Underlying *_1);
                    return __MR_CSharp_TestOpsB_mul_assign(_UnderlyingPtr, _1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
                }

                /// Generated from method `MR::CSharp::TestOpsB::operator/=`.
                public unsafe int DivAssign(MR.CS.CSharp.ByValueTestOpsB _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsB_div_assign", ExactSpelling = true)]
                    extern static int __MR_CSharp_TestOpsB_div_assign(_Underlying *_this, MR.CS.Misc._PassBy _1_pass_by, MR.CS.CSharp.TestOpsB._Underlying *_1);
                    return __MR_CSharp_TestOpsB_div_assign(_UnderlyingPtr, _1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
                }

                /// Generated from method `MR::CSharp::TestOpsB::operator%=`.
                public unsafe int ModAssign(MR.CS.CSharp.ByValueTestOpsB _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsB_mod_assign", ExactSpelling = true)]
                    extern static int __MR_CSharp_TestOpsB_mod_assign(_Underlying *_this, MR.CS.Misc._PassBy _1_pass_by, MR.CS.CSharp.TestOpsB._Underlying *_1);
                    return __MR_CSharp_TestOpsB_mod_assign(_UnderlyingPtr, _1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
                }

                /// Generated from method `MR::CSharp::TestOpsB::operator^=`.
                public unsafe int XorAssign(MR.CS.CSharp.ByValueTestOpsB _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsB_xor_assign", ExactSpelling = true)]
                    extern static int __MR_CSharp_TestOpsB_xor_assign(_Underlying *_this, MR.CS.Misc._PassBy _1_pass_by, MR.CS.CSharp.TestOpsB._Underlying *_1);
                    return __MR_CSharp_TestOpsB_xor_assign(_UnderlyingPtr, _1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
                }

                /// Generated from method `MR::CSharp::TestOpsB::operator&=`.
                public unsafe int BitandAssign(MR.CS.CSharp.ByValueTestOpsB _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsB_bitand_assign", ExactSpelling = true)]
                    extern static int __MR_CSharp_TestOpsB_bitand_assign(_Underlying *_this, MR.CS.Misc._PassBy _1_pass_by, MR.CS.CSharp.TestOpsB._Underlying *_1);
                    return __MR_CSharp_TestOpsB_bitand_assign(_UnderlyingPtr, _1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
                }

                /// Generated from method `MR::CSharp::TestOpsB::operator|=`.
                public unsafe int BitorAssign(MR.CS.CSharp.ByValueTestOpsB _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsB_bitor_assign", ExactSpelling = true)]
                    extern static int __MR_CSharp_TestOpsB_bitor_assign(_Underlying *_this, MR.CS.Misc._PassBy _1_pass_by, MR.CS.CSharp.TestOpsB._Underlying *_1);
                    return __MR_CSharp_TestOpsB_bitor_assign(_UnderlyingPtr, _1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
                }

                /// Generated from method `MR::CSharp::TestOpsB::operator<<`.
                public static unsafe int operator<<(MR.CS.CSharp.TestOpsB _this, MR.CS.CSharp.ByValueTestOpsB _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_lshift_MR_CSharp_TestOpsB", ExactSpelling = true)]
                    extern static int __MR_C_lshift_MR_CSharp_TestOpsB(MR.CS.CSharp.TestOpsB._Underlying *_this, MR.CS.Misc._PassBy _1_pass_by, MR.CS.CSharp.TestOpsB._Underlying *_1);
                    return __MR_C_lshift_MR_CSharp_TestOpsB(_this._UnderlyingPtr, _1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
                }

                /// Generated from method `MR::CSharp::TestOpsB::operator>>`.
                public static unsafe int operator>>(MR.CS.CSharp.TestOpsB _this, MR.CS.CSharp.ByValueTestOpsB _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_rshift_MR_CSharp_TestOpsB", ExactSpelling = true)]
                    extern static int __MR_C_rshift_MR_CSharp_TestOpsB(MR.CS.CSharp.TestOpsB._Underlying *_this, MR.CS.Misc._PassBy _1_pass_by, MR.CS.CSharp.TestOpsB._Underlying *_1);
                    return __MR_C_rshift_MR_CSharp_TestOpsB(_this._UnderlyingPtr, _1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
                }

                /// Generated from method `MR::CSharp::TestOpsB::operator<<=`.
                public unsafe int LshiftAssign(MR.CS.CSharp.ByValueTestOpsB _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsB_lshift_assign", ExactSpelling = true)]
                    extern static int __MR_CSharp_TestOpsB_lshift_assign(_Underlying *_this, MR.CS.Misc._PassBy _1_pass_by, MR.CS.CSharp.TestOpsB._Underlying *_1);
                    return __MR_CSharp_TestOpsB_lshift_assign(_UnderlyingPtr, _1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
                }

                /// Generated from method `MR::CSharp::TestOpsB::operator>>=`.
                public unsafe int RshiftAssign(MR.CS.CSharp.ByValueTestOpsB _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsB_rshift_assign", ExactSpelling = true)]
                    extern static int __MR_CSharp_TestOpsB_rshift_assign(_Underlying *_this, MR.CS.Misc._PassBy _1_pass_by, MR.CS.CSharp.TestOpsB._Underlying *_1);
                    return __MR_CSharp_TestOpsB_rshift_assign(_UnderlyingPtr, _1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
                }

                /// Generated from method `MR::CSharp::TestOpsB::operator<=>`.
                public unsafe int CompareThreeWay(MR.CS.CSharp.ByValueTestOpsB _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_compare_three_way_MR_CSharp_TestOpsB", ExactSpelling = true)]
                    extern static int __MR_C_compare_three_way_MR_CSharp_TestOpsB(_Underlying *_this, MR.CS.Misc._PassBy _1_pass_by, MR.CS.CSharp.TestOpsB._Underlying *_1);
                    return __MR_C_compare_three_way_MR_CSharp_TestOpsB(_UnderlyingPtr, _1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
                }

                /// Generated from method `MR::CSharp::TestOpsB::operator&&`.
                public unsafe int And(MR.CS.CSharp.ByValueTestOpsB _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_and_MR_CSharp_TestOpsB", ExactSpelling = true)]
                    extern static int __MR_C_and_MR_CSharp_TestOpsB(_Underlying *_this, MR.CS.Misc._PassBy _1_pass_by, MR.CS.CSharp.TestOpsB._Underlying *_1);
                    return __MR_C_and_MR_CSharp_TestOpsB(_UnderlyingPtr, _1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
                }

                /// Generated from method `MR::CSharp::TestOpsB::operator||`.
                public unsafe int Or(MR.CS.CSharp.ByValueTestOpsB _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_or_MR_CSharp_TestOpsB", ExactSpelling = true)]
                    extern static int __MR_C_or_MR_CSharp_TestOpsB(_Underlying *_this, MR.CS.Misc._PassBy _1_pass_by, MR.CS.CSharp.TestOpsB._Underlying *_1);
                    return __MR_C_or_MR_CSharp_TestOpsB(_UnderlyingPtr, _1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
                }

                /// Generated from method `MR::CSharp::TestOpsB::operator,`.
                public unsafe int Comma(MR.CS.CSharp.ByValueTestOpsB _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_comma_MR_CSharp_TestOpsB", ExactSpelling = true)]
                    extern static int __MR_C_comma_MR_CSharp_TestOpsB(_Underlying *_this, MR.CS.Misc._PassBy _1_pass_by, MR.CS.CSharp.TestOpsB._Underlying *_1);
                    return __MR_C_comma_MR_CSharp_TestOpsB(_UnderlyingPtr, _1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
                }

                /// Generated from method `MR::CSharp::TestOpsB::operator->*`.
                public unsafe int ArrowStar(MR.CS.CSharp.ByValueTestOpsB _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsB_arrow_star", ExactSpelling = true)]
                    extern static int __MR_CSharp_TestOpsB_arrow_star(_Underlying *_this, MR.CS.Misc._PassBy _1_pass_by, MR.CS.CSharp.TestOpsB._Underlying *_1);
                    return __MR_CSharp_TestOpsB_arrow_star(_UnderlyingPtr, _1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
                }

                /// Generated from method `MR::CSharp::TestOpsB::operator->`.
                public unsafe int Arrow()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsB_arrow", ExactSpelling = true)]
                    extern static int __MR_CSharp_TestOpsB_arrow(_Underlying *_this);
                    return __MR_CSharp_TestOpsB_arrow(_UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsB::operator()`.
                public unsafe int Call(MR.CS.CSharp.ByValueTestOpsB _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsB_call", ExactSpelling = true)]
                    extern static int __MR_CSharp_TestOpsB_call(_Underlying *_this, MR.CS.Misc._PassBy _1_pass_by, MR.CS.CSharp.TestOpsB._Underlying *_1);
                    return __MR_CSharp_TestOpsB_call(_UnderlyingPtr, _1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
                }

                /// Generated from method `MR::CSharp::TestOpsB::operator[]`.
                public unsafe int Index(MR.CS.CSharp.ByValueTestOpsB _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsB_index", ExactSpelling = true)]
                    extern static int __MR_CSharp_TestOpsB_index(_Underlying *_this, MR.CS.Misc._PassBy _1_pass_by, MR.CS.CSharp.TestOpsB._Underlying *_1);
                    return __MR_CSharp_TestOpsB_index(_UnderlyingPtr, _1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
                }
            }

            /// This is used as a function parameter when the underlying function receives `TestOpsB` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `TestOpsB`/`ConstTestOpsB` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter is nullable and has a default argument.
            public readonly struct ByValueTestOpsB
            {
                internal readonly ConstTestOpsB? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public ByValueTestOpsB() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public ByValueTestOpsB(ConstTestOpsB new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public ByValueTestOpsB(MR.CS.Misc._Moved<TestOpsB> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator ByValueTestOpsB(ConstTestOpsB arg) {return new(arg);}
                public static implicit operator ByValueTestOpsB(MR.CS.Misc._Moved<TestOpsB> arg) {return new(arg);}
            }

            /// This is used for optional parameters of class `TestOpsB` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `TestOpsB`/`ConstTestOpsB` to pass it to the function.
            public class InOptConstTestOpsB
            {
                public ConstTestOpsB? Opt;

                public InOptConstTestOpsB() {}
                public InOptConstTestOpsB(ConstTestOpsB NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstTestOpsB(ConstTestOpsB NewOpt) {return new InOptConstTestOpsB(NewOpt);}
            }

            /// Generated from class `MR::CSharp::TestOpsC`.
            /// This is the const half of the class.
            public class ConstTestOpsC : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstTestOpsC(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsC_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_TestOpsC_Destroy(_Underlying *_this);
                    __MR_CSharp_TestOpsC_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstTestOpsC() {Dispose(false);}

                /// Generated from constructor `MR::CSharp::TestOpsC::TestOpsC`.
                public unsafe ConstTestOpsC(MR.CS.CSharp.ConstTestOpsC _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsC_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstTestOpsC._Underlying *__MR_CSharp_TestOpsC_ConstructFromAnother(MR.CS.CSharp.TestOpsC._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_TestOpsC_ConstructFromAnother(_other._UnderlyingPtr);
                }
            }

            /// Generated from class `MR::CSharp::TestOpsC`.
            /// This is the non-const half of the class.
            public class TestOpsC : ConstTestOpsC
            {
                internal unsafe TestOpsC(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Generated from constructor `MR::CSharp::TestOpsC::TestOpsC`.
                public unsafe TestOpsC(MR.CS.CSharp.ConstTestOpsC _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsC_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstTestOpsC._Underlying *__MR_CSharp_TestOpsC_ConstructFromAnother(MR.CS.CSharp.TestOpsC._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_TestOpsC_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsC::operator+`.
                public unsafe void Add()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_pos_MR_CSharp_TestOpsC", ExactSpelling = true)]
                    extern static void __MR_C_pos_MR_CSharp_TestOpsC(_Underlying *_this);
                    __MR_C_pos_MR_CSharp_TestOpsC(_UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsC::operator+`.
                public unsafe void Add(MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_add_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA", ExactSpelling = true)]
                    extern static void __MR_C_add_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(_Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    __MR_C_add_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsC::operator-`.
                public unsafe void Sub()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_neg_MR_CSharp_TestOpsC", ExactSpelling = true)]
                    extern static void __MR_C_neg_MR_CSharp_TestOpsC(_Underlying *_this);
                    __MR_C_neg_MR_CSharp_TestOpsC(_UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsC::operator-`.
                public unsafe void Sub(MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_sub_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA", ExactSpelling = true)]
                    extern static void __MR_C_sub_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(_Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    __MR_C_sub_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsC::operator*`.
                public unsafe void Deref()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_deref_MR_CSharp_TestOpsC", ExactSpelling = true)]
                    extern static void __MR_C_deref_MR_CSharp_TestOpsC(_Underlying *_this);
                    __MR_C_deref_MR_CSharp_TestOpsC(_UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsC::operator*`.
                public unsafe void Mul(MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_mul_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA", ExactSpelling = true)]
                    extern static void __MR_C_mul_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(_Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    __MR_C_mul_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsC::operator/`.
                public unsafe void Div(MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_div_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA", ExactSpelling = true)]
                    extern static void __MR_C_div_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(_Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    __MR_C_div_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsC::operator%`.
                public unsafe void Mod(MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_mod_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA", ExactSpelling = true)]
                    extern static void __MR_C_mod_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(_Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    __MR_C_mod_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsC::operator^`.
                public unsafe void Xor(MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_xor_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA", ExactSpelling = true)]
                    extern static void __MR_C_xor_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(_Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    __MR_C_xor_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsC::operator&`.
                public unsafe void AddressOf()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_addressof_MR_CSharp_TestOpsC", ExactSpelling = true)]
                    extern static void __MR_C_addressof_MR_CSharp_TestOpsC(_Underlying *_this);
                    __MR_C_addressof_MR_CSharp_TestOpsC(_UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsC::operator&`.
                public unsafe void Bitand(MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_bitand_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA", ExactSpelling = true)]
                    extern static void __MR_C_bitand_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(_Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    __MR_C_bitand_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsC::operator|`.
                public unsafe void Bitor(MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_bitor_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA", ExactSpelling = true)]
                    extern static void __MR_C_bitor_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(_Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    __MR_C_bitor_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsC::operator~`.
                public unsafe void Compl()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_compl_MR_CSharp_TestOpsC", ExactSpelling = true)]
                    extern static void __MR_C_compl_MR_CSharp_TestOpsC(_Underlying *_this);
                    __MR_C_compl_MR_CSharp_TestOpsC(_UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsC::operator!`.
                public unsafe void Not()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_not_MR_CSharp_TestOpsC", ExactSpelling = true)]
                    extern static void __MR_C_not_MR_CSharp_TestOpsC(_Underlying *_this);
                    __MR_C_not_MR_CSharp_TestOpsC(_UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsC::operator=`.
                public unsafe void Assign(MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsC_assign", ExactSpelling = true)]
                    extern static void __MR_CSharp_TestOpsC_assign(_Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    __MR_CSharp_TestOpsC_assign(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsC::operator+=`.
                public unsafe void AddAssign(MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsC_add_assign", ExactSpelling = true)]
                    extern static void __MR_CSharp_TestOpsC_add_assign(_Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    __MR_CSharp_TestOpsC_add_assign(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsC::operator-=`.
                public unsafe void SubAssign(MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsC_sub_assign", ExactSpelling = true)]
                    extern static void __MR_CSharp_TestOpsC_sub_assign(_Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    __MR_CSharp_TestOpsC_sub_assign(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsC::operator*=`.
                public unsafe void MulAssign(MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsC_mul_assign", ExactSpelling = true)]
                    extern static void __MR_CSharp_TestOpsC_mul_assign(_Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    __MR_CSharp_TestOpsC_mul_assign(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsC::operator/=`.
                public unsafe void DivAssign(MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsC_div_assign", ExactSpelling = true)]
                    extern static void __MR_CSharp_TestOpsC_div_assign(_Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    __MR_CSharp_TestOpsC_div_assign(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsC::operator%=`.
                public unsafe void ModAssign(MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsC_mod_assign", ExactSpelling = true)]
                    extern static void __MR_CSharp_TestOpsC_mod_assign(_Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    __MR_CSharp_TestOpsC_mod_assign(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsC::operator^=`.
                public unsafe void XorAssign(MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsC_xor_assign", ExactSpelling = true)]
                    extern static void __MR_CSharp_TestOpsC_xor_assign(_Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    __MR_CSharp_TestOpsC_xor_assign(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsC::operator&=`.
                public unsafe void BitandAssign(MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsC_bitand_assign", ExactSpelling = true)]
                    extern static void __MR_CSharp_TestOpsC_bitand_assign(_Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    __MR_CSharp_TestOpsC_bitand_assign(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsC::operator|=`.
                public unsafe void BitorAssign(MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsC_bitor_assign", ExactSpelling = true)]
                    extern static void __MR_CSharp_TestOpsC_bitor_assign(_Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    __MR_CSharp_TestOpsC_bitor_assign(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsC::operator<<`.
                public unsafe void Lshift(MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_lshift_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA", ExactSpelling = true)]
                    extern static void __MR_C_lshift_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(_Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    __MR_C_lshift_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsC::operator>>`.
                public unsafe void Rshift(MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_rshift_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA", ExactSpelling = true)]
                    extern static void __MR_C_rshift_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(_Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    __MR_C_rshift_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsC::operator<<=`.
                public unsafe void LshiftAssign(MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsC_lshift_assign", ExactSpelling = true)]
                    extern static void __MR_CSharp_TestOpsC_lshift_assign(_Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    __MR_CSharp_TestOpsC_lshift_assign(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsC::operator>>=`.
                public unsafe void RshiftAssign(MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsC_rshift_assign", ExactSpelling = true)]
                    extern static void __MR_CSharp_TestOpsC_rshift_assign(_Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    __MR_CSharp_TestOpsC_rshift_assign(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsC::operator<=>`.
                public unsafe void CompareThreeWay(MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_compare_three_way_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA", ExactSpelling = true)]
                    extern static void __MR_C_compare_three_way_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(_Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    __MR_C_compare_three_way_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsC::operator&&`.
                public unsafe void And(MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_and_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA", ExactSpelling = true)]
                    extern static void __MR_C_and_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(_Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    __MR_C_and_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsC::operator||`.
                public unsafe void Or(MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_or_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA", ExactSpelling = true)]
                    extern static void __MR_C_or_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(_Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    __MR_C_or_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsC::operator,`.
                public unsafe void Comma(MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_comma_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA", ExactSpelling = true)]
                    extern static void __MR_C_comma_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(_Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    __MR_C_comma_MR_CSharp_TestOpsC_MR_CSharp_TestOpsA(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsC::operator->*`.
                public unsafe void ArrowStar(MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsC_arrow_star", ExactSpelling = true)]
                    extern static void __MR_CSharp_TestOpsC_arrow_star(_Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    __MR_CSharp_TestOpsC_arrow_star(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsC::operator->`.
                public unsafe void Arrow()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsC_arrow", ExactSpelling = true)]
                    extern static void __MR_CSharp_TestOpsC_arrow(_Underlying *_this);
                    __MR_CSharp_TestOpsC_arrow(_UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsC::operator()`.
                public unsafe void Call(MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsC_call", ExactSpelling = true)]
                    extern static void __MR_CSharp_TestOpsC_call(_Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    __MR_CSharp_TestOpsC_call(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::TestOpsC::operator[]`.
                public unsafe void Index(MR.CS.CSharp.ConstTestOpsA _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_TestOpsC_index", ExactSpelling = true)]
                    extern static void __MR_CSharp_TestOpsC_index(_Underlying *_this, MR.CS.CSharp.TestOpsA._Underlying *_1);
                    __MR_CSharp_TestOpsC_index(_UnderlyingPtr, _1._UnderlyingPtr);
                }
            }

            /// This is used for optional parameters of class `TestOpsC` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `TestOpsC`/`ConstTestOpsC` to pass it to the function.
            public class InOptConstTestOpsC
            {
                public ConstTestOpsC? Opt;

                public InOptConstTestOpsC() {}
                public InOptConstTestOpsC(ConstTestOpsC NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstTestOpsC(ConstTestOpsC NewOpt) {return new InOptConstTestOpsC(NewOpt);}
            }

            // Conversion operators. We preserve explicit-ness.
            /// Generated from class `MR::CSharp::ConvOp`.
            /// This is the const half of the class.
            public class ConstConvOp : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstConvOp(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_ConvOp_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_ConvOp_Destroy(_Underlying *_this);
                    __MR_CSharp_ConvOp_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstConvOp() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstConvOp() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_ConvOp_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstConvOp._Underlying *__MR_CSharp_ConvOp_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_ConvOp_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::ConvOp::ConvOp`.
                public unsafe ConstConvOp(MR.CS.CSharp.ConstConvOp _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_ConvOp_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstConvOp._Underlying *__MR_CSharp_ConvOp_ConstructFromAnother(MR.CS.CSharp.ConvOp._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_ConvOp_ConstructFromAnother(_other._UnderlyingPtr);
                }
            }

            // Conversion operators. We preserve explicit-ness.
            /// Generated from class `MR::CSharp::ConvOp`.
            /// This is the non-const half of the class.
            public class ConvOp : ConstConvOp
            {
                internal unsafe ConvOp(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConvOp() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_ConvOp_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstConvOp._Underlying *__MR_CSharp_ConvOp_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_ConvOp_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::ConvOp::ConvOp`.
                public unsafe ConvOp(MR.CS.CSharp.ConstConvOp _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_ConvOp_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstConvOp._Underlying *__MR_CSharp_ConvOp_ConstructFromAnother(MR.CS.CSharp.ConvOp._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_ConvOp_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from conversion operator `MR::CSharp::ConvOp::operator int`.
                public static unsafe implicit operator int(MR.CS.CSharp.ConvOp _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_ConvOp_ConvertTo_int", ExactSpelling = true)]
                    extern static int __MR_CSharp_ConvOp_ConvertTo_int(MR.CS.CSharp.ConvOp._Underlying *_this);
                    return __MR_CSharp_ConvOp_ConvertTo_int(_this._UnderlyingPtr);
                }

                /// Generated from conversion operator `MR::CSharp::ConvOp::operator float`.
                public static unsafe explicit operator float(MR.CS.CSharp.ConvOp _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_ConvOp_ConvertTo_float", ExactSpelling = true)]
                    extern static float __MR_CSharp_ConvOp_ConvertTo_float(MR.CS.CSharp.ConvOp._Underlying *_this);
                    return __MR_CSharp_ConvOp_ConvertTo_float(_this._UnderlyingPtr);
                }

                /// Generated from method `MR::CSharp::ConvOp::operator=`.
                public unsafe MR.CS.CSharp.ConvOp Assign(MR.CS.CSharp.ConstConvOp _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_ConvOp_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConvOp._Underlying *__MR_CSharp_ConvOp_AssignFromAnother(_Underlying *_this, MR.CS.CSharp.ConvOp._Underlying *_other);
                    return new(__MR_CSharp_ConvOp_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }
            }

            /// This is used for optional parameters of class `ConvOp` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `ConvOp`/`ConstConvOp` to pass it to the function.
            public class InOptConstConvOp
            {
                public ConstConvOp? Opt;

                public InOptConstConvOp() {}
                public InOptConstConvOp(ConstConvOp NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstConvOp(ConstConvOp NewOpt) {return new InOptConstConvOp(NewOpt);}
            }

            // Conversion constructors. Right now we only provide conversion operators for implicit ones,
            //   because I have no idea when the explicit ones could be useful.
            /// Generated from class `MR::CSharp::ConvCtor`.
            /// This is the const half of the class.
            public class ConstConvCtor : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstConvCtor(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_ConvCtor_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_ConvCtor_Destroy(_Underlying *_this);
                    __MR_CSharp_ConvCtor_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstConvCtor() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstConvCtor() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_ConvCtor_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstConvCtor._Underlying *__MR_CSharp_ConvCtor_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_ConvCtor_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::ConvCtor::ConvCtor`.
                public unsafe ConstConvCtor(MR.CS.CSharp.ConstConvCtor _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_ConvCtor_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstConvCtor._Underlying *__MR_CSharp_ConvCtor_ConstructFromAnother(MR.CS.CSharp.ConvCtor._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_ConvCtor_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from constructor `MR::CSharp::ConvCtor::ConvCtor`.
                public unsafe ConstConvCtor(int _1) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_ConvCtor_Construct_1_int", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstConvCtor._Underlying *__MR_CSharp_ConvCtor_Construct_1_int(int _1);
                    _UnderlyingPtr = __MR_CSharp_ConvCtor_Construct_1_int(_1);
                }

                /// Generated from constructor `MR::CSharp::ConvCtor::ConvCtor`.
                public static unsafe implicit operator ConstConvCtor(int _1) {return new(_1);}

                /// Generated from constructor `MR::CSharp::ConvCtor::ConvCtor`.
                public unsafe ConstConvCtor(int _1, int _2) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_ConvCtor_Construct_2_int", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstConvCtor._Underlying *__MR_CSharp_ConvCtor_Construct_2_int(int _1, int _2);
                    _UnderlyingPtr = __MR_CSharp_ConvCtor_Construct_2_int(_1, _2);
                }

                /// Generated from constructor `MR::CSharp::ConvCtor::ConvCtor`.
                public unsafe ConstConvCtor(float _1) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_ConvCtor_Construct_1_float", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstConvCtor._Underlying *__MR_CSharp_ConvCtor_Construct_1_float(float _1);
                    _UnderlyingPtr = __MR_CSharp_ConvCtor_Construct_1_float(_1);
                }

                /// Generated from constructor `MR::CSharp::ConvCtor::ConvCtor`.
                public unsafe ConstConvCtor(float _1, float _2) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_ConvCtor_Construct_2_float", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstConvCtor._Underlying *__MR_CSharp_ConvCtor_Construct_2_float(float _1, float _2);
                    _UnderlyingPtr = __MR_CSharp_ConvCtor_Construct_2_float(_1, _2);
                }
            }

            // Conversion constructors. Right now we only provide conversion operators for implicit ones,
            //   because I have no idea when the explicit ones could be useful.
            /// Generated from class `MR::CSharp::ConvCtor`.
            /// This is the non-const half of the class.
            public class ConvCtor : ConstConvCtor
            {
                internal unsafe ConvCtor(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConvCtor() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_ConvCtor_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstConvCtor._Underlying *__MR_CSharp_ConvCtor_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_ConvCtor_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::ConvCtor::ConvCtor`.
                public unsafe ConvCtor(MR.CS.CSharp.ConstConvCtor _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_ConvCtor_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstConvCtor._Underlying *__MR_CSharp_ConvCtor_ConstructFromAnother(MR.CS.CSharp.ConvCtor._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_ConvCtor_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from constructor `MR::CSharp::ConvCtor::ConvCtor`.
                public unsafe ConvCtor(int _1) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_ConvCtor_Construct_1_int", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstConvCtor._Underlying *__MR_CSharp_ConvCtor_Construct_1_int(int _1);
                    _UnderlyingPtr = __MR_CSharp_ConvCtor_Construct_1_int(_1);
                }

                /// Generated from constructor `MR::CSharp::ConvCtor::ConvCtor`.
                public static unsafe implicit operator ConvCtor(int _1) {return new(_1);}

                /// Generated from constructor `MR::CSharp::ConvCtor::ConvCtor`.
                public unsafe ConvCtor(int _1, int _2) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_ConvCtor_Construct_2_int", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstConvCtor._Underlying *__MR_CSharp_ConvCtor_Construct_2_int(int _1, int _2);
                    _UnderlyingPtr = __MR_CSharp_ConvCtor_Construct_2_int(_1, _2);
                }

                /// Generated from constructor `MR::CSharp::ConvCtor::ConvCtor`.
                public unsafe ConvCtor(float _1) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_ConvCtor_Construct_1_float", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstConvCtor._Underlying *__MR_CSharp_ConvCtor_Construct_1_float(float _1);
                    _UnderlyingPtr = __MR_CSharp_ConvCtor_Construct_1_float(_1);
                }

                /// Generated from constructor `MR::CSharp::ConvCtor::ConvCtor`.
                public unsafe ConvCtor(float _1, float _2) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_ConvCtor_Construct_2_float", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstConvCtor._Underlying *__MR_CSharp_ConvCtor_Construct_2_float(float _1, float _2);
                    _UnderlyingPtr = __MR_CSharp_ConvCtor_Construct_2_float(_1, _2);
                }

                /// Generated from method `MR::CSharp::ConvCtor::operator=`.
                public unsafe MR.CS.CSharp.ConvCtor Assign(MR.CS.CSharp.ConstConvCtor _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_ConvCtor_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConvCtor._Underlying *__MR_CSharp_ConvCtor_AssignFromAnother(_Underlying *_this, MR.CS.CSharp.ConvCtor._Underlying *_other);
                    return new(__MR_CSharp_ConvCtor_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }
            }

            /// This is used for optional parameters of class `ConvCtor` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `ConvCtor`/`ConstConvCtor` to pass it to the function.
            public class InOptConstConvCtor
            {
                public ConstConvCtor? Opt;

                public InOptConstConvCtor() {}
                public InOptConstConvCtor(ConstConvCtor NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstConvCtor(ConstConvCtor NewOpt) {return new InOptConstConvCtor(NewOpt);}

                /// Generated from constructor `MR::CSharp::ConvCtor::ConvCtor`.
                public static unsafe implicit operator InOptConstConvCtor(int _1) {return new MR.CS.CSharp.ConvCtor(_1);}
            }

            // Test how a trivial class with a converting constructor gets the additional conversion operators in its parameter passing helpers.
            /// Generated from class `MR::CSharp::ConvCtorTrivial`.
            /// This is the const half of the class.
            public class ConstConvCtorTrivial : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstConvCtorTrivial(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_ConvCtorTrivial_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_ConvCtorTrivial_Destroy(_Underlying *_this);
                    __MR_CSharp_ConvCtorTrivial_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstConvCtorTrivial() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstConvCtorTrivial() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_ConvCtorTrivial_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstConvCtorTrivial._Underlying *__MR_CSharp_ConvCtorTrivial_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_ConvCtorTrivial_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::ConvCtorTrivial::ConvCtorTrivial`.
                public unsafe ConstConvCtorTrivial(MR.CS.CSharp.ConstConvCtorTrivial _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_ConvCtorTrivial_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstConvCtorTrivial._Underlying *__MR_CSharp_ConvCtorTrivial_ConstructFromAnother(MR.CS.CSharp.ConvCtorTrivial._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_ConvCtorTrivial_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from constructor `MR::CSharp::ConvCtorTrivial::ConvCtorTrivial`.
                public unsafe ConstConvCtorTrivial(int _1) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_ConvCtorTrivial_Construct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstConvCtorTrivial._Underlying *__MR_CSharp_ConvCtorTrivial_Construct(int _1);
                    _UnderlyingPtr = __MR_CSharp_ConvCtorTrivial_Construct(_1);
                }

                /// Generated from constructor `MR::CSharp::ConvCtorTrivial::ConvCtorTrivial`.
                public static unsafe implicit operator ConstConvCtorTrivial(int _1) {return new(_1);}
            }

            // Test how a trivial class with a converting constructor gets the additional conversion operators in its parameter passing helpers.
            /// Generated from class `MR::CSharp::ConvCtorTrivial`.
            /// This is the non-const half of the class.
            public class ConvCtorTrivial : ConstConvCtorTrivial
            {
                internal unsafe ConvCtorTrivial(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConvCtorTrivial() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_ConvCtorTrivial_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstConvCtorTrivial._Underlying *__MR_CSharp_ConvCtorTrivial_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_ConvCtorTrivial_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::ConvCtorTrivial::ConvCtorTrivial`.
                public unsafe ConvCtorTrivial(MR.CS.CSharp.ConstConvCtorTrivial _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_ConvCtorTrivial_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstConvCtorTrivial._Underlying *__MR_CSharp_ConvCtorTrivial_ConstructFromAnother(MR.CS.CSharp.ConvCtorTrivial._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_ConvCtorTrivial_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from constructor `MR::CSharp::ConvCtorTrivial::ConvCtorTrivial`.
                public unsafe ConvCtorTrivial(int _1) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_ConvCtorTrivial_Construct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstConvCtorTrivial._Underlying *__MR_CSharp_ConvCtorTrivial_Construct(int _1);
                    _UnderlyingPtr = __MR_CSharp_ConvCtorTrivial_Construct(_1);
                }

                /// Generated from constructor `MR::CSharp::ConvCtorTrivial::ConvCtorTrivial`.
                public static unsafe implicit operator ConvCtorTrivial(int _1) {return new(_1);}

                /// Generated from method `MR::CSharp::ConvCtorTrivial::operator=`.
                public unsafe MR.CS.CSharp.ConvCtorTrivial Assign(MR.CS.CSharp.ConstConvCtorTrivial _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_ConvCtorTrivial_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConvCtorTrivial._Underlying *__MR_CSharp_ConvCtorTrivial_AssignFromAnother(_Underlying *_this, MR.CS.CSharp.ConvCtorTrivial._Underlying *_other);
                    return new(__MR_CSharp_ConvCtorTrivial_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }
            }

            /// This is used for optional parameters of class `ConvCtorTrivial` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `ConvCtorTrivial`/`ConstConvCtorTrivial` to pass it to the function.
            public class InOptConstConvCtorTrivial
            {
                public ConstConvCtorTrivial? Opt;

                public InOptConstConvCtorTrivial() {}
                public InOptConstConvCtorTrivial(ConstConvCtorTrivial NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstConvCtorTrivial(ConstConvCtorTrivial NewOpt) {return new InOptConstConvCtorTrivial(NewOpt);}

                /// Generated from constructor `MR::CSharp::ConvCtorTrivial::ConvCtorTrivial`.
                public static unsafe implicit operator InOptConstConvCtorTrivial(int _1) {return new MR.CS.CSharp.ConvCtorTrivial(_1);}
            }

            // Test how a non-trivial class with a converting constructor gets the additional conversion operators in its parameter passing helpers.
            /// Generated from class `MR::CSharp::ConvCtorNonTrivial`.
            /// This is the const half of the class.
            public class ConstConvCtorNonTrivial : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe ConstConvCtorNonTrivial(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_ConvCtorNonTrivial_Destroy", ExactSpelling = true)]
                    extern static void __MR_CSharp_ConvCtorNonTrivial_Destroy(_Underlying *_this);
                    __MR_CSharp_ConvCtorNonTrivial_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstConvCtorNonTrivial() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConstConvCtorNonTrivial() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_ConvCtorNonTrivial_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstConvCtorNonTrivial._Underlying *__MR_CSharp_ConvCtorNonTrivial_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_ConvCtorNonTrivial_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::ConvCtorNonTrivial::ConvCtorNonTrivial`.
                public unsafe ConstConvCtorNonTrivial(MR.CS.CSharp.ByValueConvCtorNonTrivial _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_ConvCtorNonTrivial_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstConvCtorNonTrivial._Underlying *__MR_CSharp_ConvCtorNonTrivial_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.ConvCtorNonTrivial._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_ConvCtorNonTrivial_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// Generated from constructor `MR::CSharp::ConvCtorNonTrivial::ConvCtorNonTrivial`.
                public unsafe ConstConvCtorNonTrivial(int _1) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_ConvCtorNonTrivial_Construct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstConvCtorNonTrivial._Underlying *__MR_CSharp_ConvCtorNonTrivial_Construct(int _1);
                    _UnderlyingPtr = __MR_CSharp_ConvCtorNonTrivial_Construct(_1);
                }

                /// Generated from constructor `MR::CSharp::ConvCtorNonTrivial::ConvCtorNonTrivial`.
                public static unsafe implicit operator ConstConvCtorNonTrivial(int _1) {return new(_1);}
            }

            // Test how a non-trivial class with a converting constructor gets the additional conversion operators in its parameter passing helpers.
            /// Generated from class `MR::CSharp::ConvCtorNonTrivial`.
            /// This is the non-const half of the class.
            public class ConvCtorNonTrivial : ConstConvCtorNonTrivial
            {
                internal unsafe ConvCtorNonTrivial(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe ConvCtorNonTrivial() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_ConvCtorNonTrivial_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstConvCtorNonTrivial._Underlying *__MR_CSharp_ConvCtorNonTrivial_DefaultConstruct();
                    _UnderlyingPtr = __MR_CSharp_ConvCtorNonTrivial_DefaultConstruct();
                }

                /// Generated from constructor `MR::CSharp::ConvCtorNonTrivial::ConvCtorNonTrivial`.
                public unsafe ConvCtorNonTrivial(MR.CS.CSharp.ByValueConvCtorNonTrivial _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_ConvCtorNonTrivial_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstConvCtorNonTrivial._Underlying *__MR_CSharp_ConvCtorNonTrivial_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.ConvCtorNonTrivial._Underlying *_other);
                    _UnderlyingPtr = __MR_CSharp_ConvCtorNonTrivial_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                }

                /// Generated from constructor `MR::CSharp::ConvCtorNonTrivial::ConvCtorNonTrivial`.
                public unsafe ConvCtorNonTrivial(int _1) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_ConvCtorNonTrivial_Construct", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConstConvCtorNonTrivial._Underlying *__MR_CSharp_ConvCtorNonTrivial_Construct(int _1);
                    _UnderlyingPtr = __MR_CSharp_ConvCtorNonTrivial_Construct(_1);
                }

                /// Generated from constructor `MR::CSharp::ConvCtorNonTrivial::ConvCtorNonTrivial`.
                public static unsafe implicit operator ConvCtorNonTrivial(int _1) {return new(_1);}

                /// Generated from method `MR::CSharp::ConvCtorNonTrivial::operator=`.
                public unsafe MR.CS.CSharp.ConvCtorNonTrivial Assign(MR.CS.CSharp.ByValueConvCtorNonTrivial _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_ConvCtorNonTrivial_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ConvCtorNonTrivial._Underlying *__MR_CSharp_ConvCtorNonTrivial_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.CSharp.ConvCtorNonTrivial._Underlying *_other);
                    return new(__MR_CSharp_ConvCtorNonTrivial_AssignFromAnother(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null), is_owning: false);
                }
            }

            /// This is used as a function parameter when the underlying function receives `ConvCtorNonTrivial` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `ConvCtorNonTrivial`/`ConstConvCtorNonTrivial` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter is nullable and has a default argument.
            public readonly struct ByValueConvCtorNonTrivial
            {
                internal readonly ConstConvCtorNonTrivial? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public ByValueConvCtorNonTrivial() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public ByValueConvCtorNonTrivial(ConstConvCtorNonTrivial new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public ByValueConvCtorNonTrivial(MR.CS.Misc._Moved<ConvCtorNonTrivial> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator ByValueConvCtorNonTrivial(ConstConvCtorNonTrivial arg) {return new(arg);}
                public static implicit operator ByValueConvCtorNonTrivial(MR.CS.Misc._Moved<ConvCtorNonTrivial> arg) {return new(arg);}

                /// Generated from constructor `MR::CSharp::ConvCtorNonTrivial::ConvCtorNonTrivial`.
                public static unsafe implicit operator ByValueConvCtorNonTrivial(int _1) {return new MR.CS.CSharp.ConvCtorNonTrivial(_1);}
            }

            /// This is used for optional parameters of class `ConvCtorNonTrivial` with default arguments.
            /// This is only used const parameters. For non-const ones we have a generic `InOptMutClass<T>`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `ConvCtorNonTrivial`/`ConstConvCtorNonTrivial` to pass it to the function.
            public class InOptConstConvCtorNonTrivial
            {
                public ConstConvCtorNonTrivial? Opt;

                public InOptConstConvCtorNonTrivial() {}
                public InOptConstConvCtorNonTrivial(ConstConvCtorNonTrivial NewOpt) {Opt = NewOpt;}
                public static implicit operator InOptConstConvCtorNonTrivial(ConstConvCtorNonTrivial NewOpt) {return new InOptConstConvCtorNonTrivial(NewOpt);}

                /// Generated from constructor `MR::CSharp::ConvCtorNonTrivial::ConvCtorNonTrivial`.
                public static unsafe implicit operator InOptConstConvCtorNonTrivial(int _1) {return new MR.CS.CSharp.ConvCtorNonTrivial(_1);}
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
                    bool __value_b = b is not null ? b.Value : default(bool);
                    __MR_CSharp_test_bool_ref(__ptr_a, b is not null ? &__value_b : null);
                    if (b is not null) b.Value = __value_b;
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
                    bool __value_b = b is not null ? b.Value : default(bool);
                    var __ret = __MR_CSharp_test_bool_ref2(__ptr_a, b is not null ? &__value_b : null);
                    if (b is not null) b.Value = __value_b;
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
                    int __value_b = b is not null ? b.Value : default(int);
                    var __ret = __MR_CSharp_test_int_ref(__ptr_a, b is not null ? &__value_b : null);
                    if (b is not null) b.Value = __value_b;
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
                int __value_a = a is not null ? a.Value : default(int);
                int __value_b = b is not null ? b.Value : default(int);
                int __value_c = c is not null && c.Opt is not null ? c.Opt.Value : default(int);
                int *__valueptr_c = c is not null && c.Opt is not null ? &__value_c : null;
                var __ret = __MR_CSharp_test_int_ptr(a is not null ? &__value_a : null, b is not null ? &__value_b : null, c is not null ? &__valueptr_c : null);
                if (c is not null && c.Opt is not null) c.Opt.Value = __value_c;
                if (b is not null) b.Value = __value_b;
                if (a is not null) a.Value = __value_a;
                return __ret is not null ? new MR.CS.Misc.Ref<int>(__ret) : null;
            }

            /// Generated from function `MR::CSharp::test_int_cptr`.
            /// Parameter `c` defaults to `&default_int`.
            public static unsafe int? TestIntCptr(int? a, int? b = null, MR.CS.Misc.InOpt<int>? c = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_int_cptr", ExactSpelling = true)]
                extern static int *__MR_CSharp_test_int_cptr(int *a, int *b, int **c);
                int __deref_a = a.GetValueOrDefault();
                int __deref_b = b.GetValueOrDefault();
                int __value_c = c is not null && c.Opt is not null ? c.Opt.Value : default(int);
                int *__valueptr_c = c is not null && c.Opt is not null ? &__value_c : null;
                var __ret = __MR_CSharp_test_int_cptr(a.HasValue ? &__deref_a : null, b.HasValue ? &__deref_b : null, c is not null ? &__valueptr_c : null);
                return __ret is not null ? *__ret : null;
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
                    ushort __value_b = b is not null ? b.Value : default(ushort);
                    var __ret = __MR_CSharp_test_ushort_ref(__ptr_a, b is not null ? &__value_b : null);
                    if (b is not null) b.Value = __value_b;
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
                ushort __value_a = a is not null ? a.Value : default(ushort);
                ushort __value_b = b is not null ? b.Value : default(ushort);
                ushort __value_c = c is not null && c.Opt is not null ? c.Opt.Value : default(ushort);
                ushort *__valueptr_c = c is not null && c.Opt is not null ? &__value_c : null;
                var __ret = __MR_CSharp_test_ushort_ptr(a is not null ? &__value_a : null, b is not null ? &__value_b : null, c is not null ? &__valueptr_c : null);
                if (c is not null && c.Opt is not null) c.Opt.Value = __value_c;
                if (b is not null) b.Value = __value_b;
                if (a is not null) a.Value = __value_a;
                return __ret is not null ? new MR.CS.Misc.Ref<ushort>(__ret) : null;
            }

            /// Generated from function `MR::CSharp::test_ushort_cptr`.
            /// Parameter `c` defaults to `&default_ushort`.
            public static unsafe ushort? TestUshortCptr(ushort? a, ushort? b = null, MR.CS.Misc.InOpt<ushort>? c = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_ushort_cptr", ExactSpelling = true)]
                extern static ushort *__MR_CSharp_test_ushort_cptr(ushort *a, ushort *b, ushort **c);
                ushort __deref_a = a.GetValueOrDefault();
                ushort __deref_b = b.GetValueOrDefault();
                ushort __value_c = c is not null && c.Opt is not null ? c.Opt.Value : default(ushort);
                ushort *__valueptr_c = c is not null && c.Opt is not null ? &__value_c : null;
                var __ret = __MR_CSharp_test_ushort_cptr(a.HasValue ? &__deref_a : null, b.HasValue ? &__deref_b : null, c is not null ? &__valueptr_c : null);
                return __ret is not null ? *__ret : null;
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
                    MR.CS.CSharp.E1 __value_b = b is not null ? b.Value : default(MR.CS.CSharp.E1);
                    var __ret = __MR_CSharp_test_enum_ref_MR_CSharp_E1(__ptr_a, b is not null ? &__value_b : null);
                    if (b is not null) b.Value = __value_b;
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
                MR.CS.CSharp.E1 __value_a = a is not null ? a.Value : default(MR.CS.CSharp.E1);
                MR.CS.CSharp.E1 __value_b = b is not null ? b.Value : default(MR.CS.CSharp.E1);
                MR.CS.CSharp.E1 __value_c = c is not null && c.Opt is not null ? c.Opt.Value : default(MR.CS.CSharp.E1);
                MR.CS.CSharp.E1 *__valueptr_c = c is not null && c.Opt is not null ? &__value_c : null;
                var __ret = __MR_CSharp_test_enum_ptr_MR_CSharp_E1_ptr(a is not null ? &__value_a : null, b is not null ? &__value_b : null, c is not null ? &__valueptr_c : null);
                if (c is not null && c.Opt is not null) c.Opt.Value = __value_c;
                if (b is not null) b.Value = __value_b;
                if (a is not null) a.Value = __value_a;
                return __ret is not null ? new MR.CS.Misc.Ref<MR.CS.CSharp.E1>(__ret) : null;
            }

            /// Generated from function `MR::CSharp::test_enum_cptr`.
            /// Parameter `c` defaults to `&default_e1`.
            public static unsafe MR.CS.CSharp.E1? TestEnumCptr(MR.CS.CSharp.E1? a, MR.CS.CSharp.E1? b = null, MR.CS.Misc.InOpt<MR.CS.CSharp.E1>? c = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_enum_cptr_const_MR_CSharp_E1_ptr", ExactSpelling = true)]
                extern static MR.CS.CSharp.E1 *__MR_CSharp_test_enum_cptr_const_MR_CSharp_E1_ptr(MR.CS.CSharp.E1 *a, MR.CS.CSharp.E1 *b, MR.CS.CSharp.E1 **c);
                MR.CS.CSharp.E1 __deref_a = a.GetValueOrDefault();
                MR.CS.CSharp.E1 __deref_b = b.GetValueOrDefault();
                MR.CS.CSharp.E1 __value_c = c is not null && c.Opt is not null ? c.Opt.Value : default(MR.CS.CSharp.E1);
                MR.CS.CSharp.E1 *__valueptr_c = c is not null && c.Opt is not null ? &__value_c : null;
                var __ret = __MR_CSharp_test_enum_cptr_const_MR_CSharp_E1_ptr(a.HasValue ? &__deref_a : null, b.HasValue ? &__deref_b : null, c is not null ? &__valueptr_c : null);
                return __ret is not null ? *__ret : null;
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
                    MR.CS.CSharp.E2 __value_b = b is not null ? b.Value : default(MR.CS.CSharp.E2);
                    if ((byte)__value_b > 1) __value_b = (MR.CS.CSharp.E2)1;
                    var __ret = __MR_CSharp_test_enum_ref_MR_CSharp_E2(__ptr_a, b is not null ? &__value_b : null);
                    if (b is not null) b.Value = __value_b;
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
                MR.CS.CSharp.E2 __value_a = a is not null ? a.Value : default(MR.CS.CSharp.E2);
                if ((byte)__value_a > 1) __value_a = (MR.CS.CSharp.E2)1;
                MR.CS.CSharp.E2 __value_b = b is not null ? b.Value : default(MR.CS.CSharp.E2);
                if ((byte)__value_b > 1) __value_b = (MR.CS.CSharp.E2)1;
                MR.CS.CSharp.E2 __value_c = c is not null && c.Opt is not null ? c.Opt.Value : default(MR.CS.CSharp.E2);
                MR.CS.CSharp.E2 *__valueptr_c = c is not null && c.Opt is not null ? &__value_c : null;
                if ((byte)__value_c > 1) __value_c = (MR.CS.CSharp.E2)1;
                var __ret = __MR_CSharp_test_enum_ptr_MR_CSharp_E2_ptr(a is not null ? &__value_a : null, b is not null ? &__value_b : null, c is not null ? &__valueptr_c : null);
                if (c is not null && c.Opt is not null) c.Opt.Value = __value_c;
                if (b is not null) b.Value = __value_b;
                if (a is not null) a.Value = __value_a;
                return __ret is not null ? new MR.CS.Misc.Ref<MR.CS.CSharp.E2>(__ret) : null;
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
                MR.CS.CSharp.E2 __value_c = c is not null && c.Opt is not null ? c.Opt.Value : default(MR.CS.CSharp.E2);
                MR.CS.CSharp.E2 *__valueptr_c = c is not null && c.Opt is not null ? &__value_c : null;
                if ((byte)__value_c > 1) __value_c = (MR.CS.CSharp.E2)1;
                var __ret = __MR_CSharp_test_enum_cptr_const_MR_CSharp_E2_ptr(a.HasValue ? &__deref_a : null, b.HasValue ? &__deref_b : null, c is not null ? &__valueptr_c : null);
                return __ret is not null ? *__ret : null;
            }

            /// Generated from function `MR::CSharp::test_class_trivial`.
            /// Parameter `b` defaults to `{}`.
            public static unsafe MR.CS.CSharp.Trivial TestClassTrivial(MR.CS.CSharp.ConstTrivial a, MR.CS.CSharp.ConstTrivial? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_class_trivial", ExactSpelling = true)]
                extern static MR.CS.CSharp.Trivial._Underlying *__MR_CSharp_test_class_trivial(MR.CS.CSharp.Trivial._Underlying *a, MR.CS.CSharp.Trivial._Underlying *b);
                return new(__MR_CSharp_test_class_trivial(a._UnderlyingPtr, b is not null ? b._UnderlyingPtr : null), is_owning: true);
            }

            /// Generated from function `MR::CSharp::test_class_trivial_ref`.
            /// Parameter `b` defaults to `default_trivial`.
            public static unsafe MR.CS.CSharp.Trivial TestClassTrivialRef(MR.CS.CSharp.Trivial a, MR.CS.CSharp.Trivial? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_class_trivial_ref", ExactSpelling = true)]
                extern static MR.CS.CSharp.Trivial._Underlying *__MR_CSharp_test_class_trivial_ref(MR.CS.CSharp.Trivial._Underlying *a, MR.CS.CSharp.Trivial._Underlying *b);
                return new(__MR_CSharp_test_class_trivial_ref(a._UnderlyingPtr, b is not null ? b._UnderlyingPtr : null), is_owning: false);
            }

            /// Generated from function `MR::CSharp::test_class_trivial_cref`.
            /// Parameter `b` defaults to `default_trivial`.
            public static unsafe MR.CS.CSharp.ConstTrivial TestClassTrivialCref(MR.CS.CSharp.ConstTrivial a, MR.CS.CSharp.ConstTrivial? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_class_trivial_cref", ExactSpelling = true)]
                extern static MR.CS.CSharp.ConstTrivial._Underlying *__MR_CSharp_test_class_trivial_cref(MR.CS.CSharp.ConstTrivial._Underlying *a, MR.CS.CSharp.ConstTrivial._Underlying *b);
                return new(__MR_CSharp_test_class_trivial_cref(a._UnderlyingPtr, b is not null ? b._UnderlyingPtr : null), is_owning: false);
            }

            /// Generated from function `MR::CSharp::test_class_trivial_ptr`.
            /// Parameter `c` defaults to `&default_trivial`.
            public static unsafe MR.CS.CSharp.Trivial? TestClassTrivialPtr(MR.CS.CSharp.Trivial? a, MR.CS.CSharp.Trivial? b = null, MR.CS.Misc.InOptMutClass<MR.CS.CSharp.Trivial>? c = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_class_trivial_ptr", ExactSpelling = true)]
                extern static MR.CS.CSharp.Trivial._Underlying *__MR_CSharp_test_class_trivial_ptr(MR.CS.CSharp.Trivial._Underlying *a, MR.CS.CSharp.Trivial._Underlying *b, MR.CS.CSharp.Trivial._Underlying **c);
                MR.CS.CSharp.Trivial._Underlying *__ptr_c = c is not null && c.Opt is not null ? c.Opt._UnderlyingPtr : null;
                var __ret = __MR_CSharp_test_class_trivial_ptr(a is not null ? a._UnderlyingPtr : null, b is not null ? b._UnderlyingPtr : null, c is not null ? &__ptr_c : null);
                return __ret is not null ? new MR.CS.CSharp.Trivial(__ret, is_owning: false) : null;
            }

            /// Generated from function `MR::CSharp::test_class_trivial_cptr`.
            /// Parameter `c` defaults to `&default_trivial`.
            public static unsafe MR.CS.CSharp.ConstTrivial? TestClassTrivialCptr(MR.CS.CSharp.ConstTrivial? a, MR.CS.CSharp.ConstTrivial? b = null, MR.CS.CSharp.InOptConstTrivial? c = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_class_trivial_cptr", ExactSpelling = true)]
                extern static MR.CS.CSharp.ConstTrivial._Underlying *__MR_CSharp_test_class_trivial_cptr(MR.CS.CSharp.ConstTrivial._Underlying *a, MR.CS.CSharp.ConstTrivial._Underlying *b, MR.CS.CSharp.ConstTrivial._Underlying **c);
                MR.CS.CSharp.ConstTrivial._Underlying *__ptr_c = c is not null && c.Opt is not null ? c.Opt._UnderlyingPtr : null;
                var __ret = __MR_CSharp_test_class_trivial_cptr(a is not null ? a._UnderlyingPtr : null, b is not null ? b._UnderlyingPtr : null, c is not null ? &__ptr_c : null);
                return __ret is not null ? new MR.CS.CSharp.ConstTrivial(__ret, is_owning: false) : null;
            }

            /// Generated from function `MR::CSharp::test_class_nontrivial`.
            /// Parameter `b` defaults to `{}`.
            public static unsafe MR.CS.CSharp.NonTrivial TestClassNontrivial(MR.CS.CSharp.ByValueNonTrivial a, MR.CS.CSharp.ByValueNonTrivial? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_class_nontrivial", ExactSpelling = true)]
                extern static MR.CS.CSharp.NonTrivial._Underlying *__MR_CSharp_test_class_nontrivial(MR.CS.Misc._PassBy a_pass_by, MR.CS.CSharp.NonTrivial._Underlying *a, MR.CS.Misc._PassBy b_pass_by, MR.CS.CSharp.NonTrivial._Underlying *b);
                return new(__MR_CSharp_test_class_nontrivial(a.PassByMode, a.Value is not null ? a.Value._UnderlyingPtr : null, b.HasValue ? b.Value.PassByMode : MR.CS.Misc._PassBy.default_arg, b.HasValue && b.Value.Value is not null ? b.Value.Value._UnderlyingPtr : null), is_owning: true);
            }

            /// Generated from function `MR::CSharp::test_class_nontrivial_ref`.
            /// Parameter `b` defaults to `default_nontrivial`.
            public static unsafe MR.CS.CSharp.NonTrivial TestClassNontrivialRef(MR.CS.CSharp.NonTrivial a, MR.CS.CSharp.NonTrivial? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_class_nontrivial_ref", ExactSpelling = true)]
                extern static MR.CS.CSharp.NonTrivial._Underlying *__MR_CSharp_test_class_nontrivial_ref(MR.CS.CSharp.NonTrivial._Underlying *a, MR.CS.CSharp.NonTrivial._Underlying *b);
                return new(__MR_CSharp_test_class_nontrivial_ref(a._UnderlyingPtr, b is not null ? b._UnderlyingPtr : null), is_owning: false);
            }

            /// Generated from function `MR::CSharp::test_class_nontrivial_cref`.
            /// Parameter `b` defaults to `default_nontrivial`.
            public static unsafe MR.CS.CSharp.ConstNonTrivial TestClassNontrivialCref(MR.CS.CSharp.ConstNonTrivial a, MR.CS.CSharp.ConstNonTrivial? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_class_nontrivial_cref", ExactSpelling = true)]
                extern static MR.CS.CSharp.ConstNonTrivial._Underlying *__MR_CSharp_test_class_nontrivial_cref(MR.CS.CSharp.ConstNonTrivial._Underlying *a, MR.CS.CSharp.ConstNonTrivial._Underlying *b);
                return new(__MR_CSharp_test_class_nontrivial_cref(a._UnderlyingPtr, b is not null ? b._UnderlyingPtr : null), is_owning: false);
            }

            /// Generated from function `MR::CSharp::test_class_nontrivial_ptr`.
            /// Parameter `c` defaults to `&default_nontrivial`.
            public static unsafe MR.CS.CSharp.NonTrivial? TestClassNontrivialPtr(MR.CS.CSharp.NonTrivial? a, MR.CS.CSharp.NonTrivial? b = null, MR.CS.Misc.InOptMutClass<MR.CS.CSharp.NonTrivial>? c = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_class_nontrivial_ptr", ExactSpelling = true)]
                extern static MR.CS.CSharp.NonTrivial._Underlying *__MR_CSharp_test_class_nontrivial_ptr(MR.CS.CSharp.NonTrivial._Underlying *a, MR.CS.CSharp.NonTrivial._Underlying *b, MR.CS.CSharp.NonTrivial._Underlying **c);
                MR.CS.CSharp.NonTrivial._Underlying *__ptr_c = c is not null && c.Opt is not null ? c.Opt._UnderlyingPtr : null;
                var __ret = __MR_CSharp_test_class_nontrivial_ptr(a is not null ? a._UnderlyingPtr : null, b is not null ? b._UnderlyingPtr : null, c is not null ? &__ptr_c : null);
                return __ret is not null ? new MR.CS.CSharp.NonTrivial(__ret, is_owning: false) : null;
            }

            /// Generated from function `MR::CSharp::test_class_nontrivial_cptr`.
            /// Parameter `c` defaults to `&default_nontrivial`.
            public static unsafe MR.CS.CSharp.ConstNonTrivial? TestClassNontrivialCptr(MR.CS.CSharp.ConstNonTrivial? a, MR.CS.CSharp.ConstNonTrivial? b = null, MR.CS.CSharp.InOptConstNonTrivial? c = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_class_nontrivial_cptr", ExactSpelling = true)]
                extern static MR.CS.CSharp.ConstNonTrivial._Underlying *__MR_CSharp_test_class_nontrivial_cptr(MR.CS.CSharp.ConstNonTrivial._Underlying *a, MR.CS.CSharp.ConstNonTrivial._Underlying *b, MR.CS.CSharp.ConstNonTrivial._Underlying **c);
                MR.CS.CSharp.ConstNonTrivial._Underlying *__ptr_c = c is not null && c.Opt is not null ? c.Opt._UnderlyingPtr : null;
                var __ret = __MR_CSharp_test_class_nontrivial_cptr(a is not null ? a._UnderlyingPtr : null, b is not null ? b._UnderlyingPtr : null, c is not null ? &__ptr_c : null);
                return __ret is not null ? new MR.CS.CSharp.ConstNonTrivial(__ret, is_owning: false) : null;
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
            public static unsafe MR.CS.CSharp.SA TestShptr(MR.CS.CSharp.ByValueSA a, MR.CS.CSharp.ByValueSA? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_shptr", ExactSpelling = true)]
                extern static MR.CS.CSharp.SA._UnderlyingShared *__MR_CSharp_test_shptr(MR.CS.Misc._PassBy a_pass_by, MR.CS.CSharp.SA._UnderlyingShared *a, MR.CS.Misc._PassBy b_pass_by, MR.CS.CSharp.SA._UnderlyingShared *b);
                return new(__MR_CSharp_test_shptr(a.PassByMode, a.Value is not null ? a.Value._UnderlyingSharedPtr : null, b.HasValue ? b.Value.PassByMode : MR.CS.Misc._PassBy.default_arg, b.HasValue && b.Value.Value is not null ? b.Value.Value._UnderlyingSharedPtr : null), is_owning: true);
            }

            /// Generated from function `MR::CSharp::test_shptr_ref`.
            /// Parameter `b` defaults to `default_shptr`.
            public static unsafe MR.CS.CSharp.SA TestShptrRef(MR.CS.CSharp.SA a, MR.CS.CSharp.SA? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_shptr_ref", ExactSpelling = true)]
                extern static MR.CS.CSharp.SA._UnderlyingShared *__MR_CSharp_test_shptr_ref(MR.CS.CSharp.SA._UnderlyingShared *a, MR.CS.CSharp.SA._UnderlyingShared *b);
                return new(__MR_CSharp_test_shptr_ref(a._UnderlyingSharedPtr, b is not null ? b._UnderlyingSharedPtr : null), is_owning: false);
            }

            /// Generated from function `MR::CSharp::test_shptr_cref`.
            /// Parameter `b` defaults to `default_shptr`.
            public static unsafe MR.CS.CSharp.ConstSA TestShptrCref(MR.CS.CSharp.ConstSA a, MR.CS.CSharp.ConstSA? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_shptr_cref", ExactSpelling = true)]
                extern static MR.CS.CSharp.ConstSA._UnderlyingShared *__MR_CSharp_test_shptr_cref(MR.CS.CSharp.ConstSA._UnderlyingShared *a, MR.CS.CSharp.ConstSA._UnderlyingShared *b);
                return new(__MR_CSharp_test_shptr_cref(a._UnderlyingSharedPtr, b is not null ? b._UnderlyingSharedPtr : null), is_owning: false);
            }

            /// Generated from function `MR::CSharp::test_shptr_ptr`.
            /// Parameter `b` defaults to `&default_shptr`.
            public static unsafe MR.CS.CSharp.SA? TestShptrPtr(MR.CS.CSharp.SA? a, MR.CS.Misc.InOptMutClass<MR.CS.CSharp.SA>? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_shptr_ptr", ExactSpelling = true)]
                extern static MR.CS.CSharp.SA._UnderlyingShared *__MR_CSharp_test_shptr_ptr(MR.CS.CSharp.SA._UnderlyingShared *a, MR.CS.CSharp.SA._UnderlyingShared **b);
                MR.CS.CSharp.SA._UnderlyingShared *__ptr_b = b is not null && b.Opt is not null ? b.Opt._UnderlyingSharedPtr : null;
                var __ret = __MR_CSharp_test_shptr_ptr(a is not null ? a._UnderlyingSharedPtr : null, b is not null ? &__ptr_b : null);
                return __ret is not null ? new MR.CS.CSharp.SA(__ret, is_owning: false) : null;
            }

            /// Generated from function `MR::CSharp::test_shptr_cptr`.
            /// Parameter `b` defaults to `&default_shptr`.
            public static unsafe MR.CS.CSharp.ConstSA? TestShptrCptr(MR.CS.CSharp.ConstSA? a, MR.CS.CSharp.InOptConstSA? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_shptr_cptr", ExactSpelling = true)]
                extern static MR.CS.CSharp.ConstSA._UnderlyingShared *__MR_CSharp_test_shptr_cptr(MR.CS.CSharp.ConstSA._UnderlyingShared *a, MR.CS.CSharp.ConstSA._UnderlyingShared **b);
                MR.CS.CSharp.ConstSA._UnderlyingShared *__ptr_b = b is not null && b.Opt is not null ? b.Opt._UnderlyingSharedPtr : null;
                var __ret = __MR_CSharp_test_shptr_cptr(a is not null ? a._UnderlyingSharedPtr : null, b is not null ? &__ptr_b : null);
                return __ret is not null ? new MR.CS.CSharp.ConstSA(__ret, is_owning: false) : null;
            }

            /// Generated from function `MR::CSharp::test_shcptr`.
            /// Parameter `b` defaults to `default_shcptr`.
            public static unsafe MR.CS.CSharp.SA TestShcptr(MR.CS.CSharp.ByValueSA a, MR.CS.CSharp.ByValueSA? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_shcptr", ExactSpelling = true)]
                extern static MR.CS.CSharp.SA._UnderlyingShared *__MR_CSharp_test_shcptr(MR.CS.Misc._PassBy a_pass_by, MR.CS.CSharp.SA._UnderlyingShared *a, MR.CS.Misc._PassBy b_pass_by, MR.CS.CSharp.SA._UnderlyingShared *b);
                return new(__MR_CSharp_test_shcptr(a.PassByMode, a.Value is not null ? a.Value._UnderlyingSharedPtr : null, b.HasValue ? b.Value.PassByMode : MR.CS.Misc._PassBy.default_arg, b.HasValue && b.Value.Value is not null ? b.Value.Value._UnderlyingSharedPtr : null), is_owning: true);
            }

            /// Generated from function `MR::CSharp::test_shcptr_ref`.
            /// Parameter `b` defaults to `default_shcptr`.
            public static unsafe MR.CS.CSharp.SA TestShcptrRef(MR.CS.CSharp.SA a, MR.CS.CSharp.SA? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_shcptr_ref", ExactSpelling = true)]
                extern static MR.CS.CSharp.SA._UnderlyingShared *__MR_CSharp_test_shcptr_ref(MR.CS.CSharp.SA._UnderlyingShared *a, MR.CS.CSharp.SA._UnderlyingShared *b);
                return new(__MR_CSharp_test_shcptr_ref(a._UnderlyingSharedPtr, b is not null ? b._UnderlyingSharedPtr : null), is_owning: false);
            }

            /// Generated from function `MR::CSharp::test_shcptr_cref`.
            /// Parameter `b` defaults to `default_shcptr`.
            public static unsafe MR.CS.CSharp.ConstSA TestShcptrCref(MR.CS.CSharp.ConstSA a, MR.CS.CSharp.ConstSA? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_shcptr_cref", ExactSpelling = true)]
                extern static MR.CS.CSharp.ConstSA._UnderlyingShared *__MR_CSharp_test_shcptr_cref(MR.CS.CSharp.ConstSA._UnderlyingShared *a, MR.CS.CSharp.ConstSA._UnderlyingShared *b);
                return new(__MR_CSharp_test_shcptr_cref(a._UnderlyingSharedPtr, b is not null ? b._UnderlyingSharedPtr : null), is_owning: false);
            }

            /// Generated from function `MR::CSharp::test_shcptr_ptr`.
            /// Parameter `b` defaults to `&default_shcptr`.
            public static unsafe MR.CS.CSharp.SA? TestShcptrPtr(MR.CS.CSharp.SA? a, MR.CS.Misc.InOptMutClass<MR.CS.CSharp.SA>? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_shcptr_ptr", ExactSpelling = true)]
                extern static MR.CS.CSharp.SA._UnderlyingShared *__MR_CSharp_test_shcptr_ptr(MR.CS.CSharp.SA._UnderlyingShared *a, MR.CS.CSharp.SA._UnderlyingShared **b);
                MR.CS.CSharp.SA._UnderlyingShared *__ptr_b = b is not null && b.Opt is not null ? b.Opt._UnderlyingSharedPtr : null;
                var __ret = __MR_CSharp_test_shcptr_ptr(a is not null ? a._UnderlyingSharedPtr : null, b is not null ? &__ptr_b : null);
                return __ret is not null ? new MR.CS.CSharp.SA(__ret, is_owning: false) : null;
            }

            /// Generated from function `MR::CSharp::test_shcptr_cptr`.
            /// Parameter `b` defaults to `&default_shcptr`.
            public static unsafe MR.CS.CSharp.ConstSA? TestShcptrCptr(MR.CS.CSharp.ConstSA? a, MR.CS.CSharp.InOptConstSA? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_shcptr_cptr", ExactSpelling = true)]
                extern static MR.CS.CSharp.ConstSA._UnderlyingShared *__MR_CSharp_test_shcptr_cptr(MR.CS.CSharp.ConstSA._UnderlyingShared *a, MR.CS.CSharp.ConstSA._UnderlyingShared **b);
                MR.CS.CSharp.ConstSA._UnderlyingShared *__ptr_b = b is not null && b.Opt is not null ? b.Opt._UnderlyingSharedPtr : null;
                var __ret = __MR_CSharp_test_shcptr_cptr(a is not null ? a._UnderlyingSharedPtr : null, b is not null ? &__ptr_b : null);
                return __ret is not null ? new MR.CS.CSharp.ConstSA(__ret, is_owning: false) : null;
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
                return new(__MR_CSharp_test_string_ref(a._UnderlyingPtr, b is not null ? b._UnderlyingPtr : null), is_owning: false);
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
            public static unsafe MR.CS.Std.String? TestStringPtr(MR.CS.Std.String? a, MR.CS.Misc.InOptMutClass<MR.CS.Std.String>? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_string_ptr", ExactSpelling = true)]
                extern static MR.CS.Std.String._Underlying *__MR_CSharp_test_string_ptr(MR.CS.Std.String._Underlying *a, MR.CS.Std.String._Underlying **b);
                MR.CS.Std.String._Underlying *__ptr_b = b is not null && b.Opt is not null ? b.Opt._UnderlyingPtr : null;
                var __ret = __MR_CSharp_test_string_ptr(a is not null ? a._UnderlyingPtr : null, b is not null ? &__ptr_b : null);
                return __ret is not null ? new MR.CS.Std.String(__ret, is_owning: false) : null;
            }

            /// Generated from function `MR::CSharp::test_string_cptr`.
            /// Parameter `b` defaults to `&default_string`.
            public static unsafe MR.CS.Std.ConstString? TestStringCptr(MR.CS.Std.ConstString? a, MR.CS.Std.InOptConstString? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_string_cptr", ExactSpelling = true)]
                extern static MR.CS.Std.ConstString._Underlying *__MR_CSharp_test_string_cptr(MR.CS.Std.ConstString._Underlying *a, MR.CS.Std.ConstString._Underlying **b);
                MR.CS.Std.ConstString._Underlying *__ptr_b = b is not null && b.Opt is not null ? b.Opt._UnderlyingPtr : null;
                var __ret = __MR_CSharp_test_string_cptr(a is not null ? a._UnderlyingPtr : null, b is not null ? &__ptr_b : null);
                return __ret is not null ? new MR.CS.Std.ConstString(__ret, is_owning: false) : null;
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
                return new(__MR_CSharp_test_stringview_ref(a._UnderlyingPtr, b is not null ? b._UnderlyingPtr : null), is_owning: false);
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
            public static unsafe MR.CS.Std.StringView? TestStringviewPtr(MR.CS.Std.StringView? a, MR.CS.Misc.InOptMutClass<MR.CS.Std.StringView>? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_stringview_ptr", ExactSpelling = true)]
                extern static MR.CS.Std.StringView._Underlying *__MR_CSharp_test_stringview_ptr(MR.CS.Std.StringView._Underlying *a, MR.CS.Std.StringView._Underlying **b);
                MR.CS.Std.StringView._Underlying *__ptr_b = b is not null && b.Opt is not null ? b.Opt._UnderlyingPtr : null;
                var __ret = __MR_CSharp_test_stringview_ptr(a is not null ? a._UnderlyingPtr : null, b is not null ? &__ptr_b : null);
                return __ret is not null ? new MR.CS.Std.StringView(__ret, is_owning: false) : null;
            }

            /// Generated from function `MR::CSharp::test_stringview_cptr`.
            /// Parameter `b` defaults to `&default_stringview`.
            public static unsafe MR.CS.Std.ConstStringView? TestStringviewCptr(MR.CS.Std.ConstStringView? a, MR.CS.Std.InOptConstStringView? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_stringview_cptr", ExactSpelling = true)]
                extern static MR.CS.Std.ConstStringView._Underlying *__MR_CSharp_test_stringview_cptr(MR.CS.Std.ConstStringView._Underlying *a, MR.CS.Std.ConstStringView._Underlying **b);
                MR.CS.Std.ConstStringView._Underlying *__ptr_b = b is not null && b.Opt is not null ? b.Opt._UnderlyingPtr : null;
                var __ret = __MR_CSharp_test_stringview_cptr(a is not null ? a._UnderlyingPtr : null, b is not null ? &__ptr_b : null);
                return __ret is not null ? new MR.CS.Std.ConstStringView(__ret, is_owning: false) : null;
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
                return new(__MR_CSharp_test_fspath_ref(a._UnderlyingPtr, b is not null ? b._UnderlyingPtr : null), is_owning: false);
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
            public static unsafe MR.CS.Std.Filesystem.Path? TestFspathPtr(MR.CS.Std.Filesystem.Path? a, MR.CS.Misc.InOptMutClass<MR.CS.Std.Filesystem.Path>? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_fspath_ptr", ExactSpelling = true)]
                extern static MR.CS.Std.Filesystem.Path._Underlying *__MR_CSharp_test_fspath_ptr(MR.CS.Std.Filesystem.Path._Underlying *a, MR.CS.Std.Filesystem.Path._Underlying **b);
                MR.CS.Std.Filesystem.Path._Underlying *__ptr_b = b is not null && b.Opt is not null ? b.Opt._UnderlyingPtr : null;
                var __ret = __MR_CSharp_test_fspath_ptr(a is not null ? a._UnderlyingPtr : null, b is not null ? &__ptr_b : null);
                return __ret is not null ? new MR.CS.Std.Filesystem.Path(__ret, is_owning: false) : null;
            }

            /// Generated from function `MR::CSharp::test_fspath_cptr`.
            /// Parameter `b` defaults to `&default_fspath`.
            public static unsafe MR.CS.Std.Filesystem.ConstPath? TestFspathCptr(MR.CS.Std.Filesystem.ConstPath? a, MR.CS.Std.Filesystem.InOptConstPath? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_fspath_cptr", ExactSpelling = true)]
                extern static MR.CS.Std.Filesystem.ConstPath._Underlying *__MR_CSharp_test_fspath_cptr(MR.CS.Std.Filesystem.ConstPath._Underlying *a, MR.CS.Std.Filesystem.ConstPath._Underlying **b);
                MR.CS.Std.Filesystem.ConstPath._Underlying *__ptr_b = b is not null && b.Opt is not null ? b.Opt._UnderlyingPtr : null;
                var __ret = __MR_CSharp_test_fspath_cptr(a is not null ? a._UnderlyingPtr : null, b is not null ? &__ptr_b : null);
                return __ret is not null ? new MR.CS.Std.Filesystem.ConstPath(__ret, is_owning: false) : null;
            }

            /// Generated from function `MR::CSharp::operator+`.
            public static unsafe int Add(MR.CS.CSharp.ByValueStaticOpsLhsC _1, int _2)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_add_MR_CSharp_StaticOpsLhsC_int", ExactSpelling = true)]
                extern static int __MR_C_add_MR_CSharp_StaticOpsLhsC_int(MR.CS.Misc._PassBy _1_pass_by, MR.CS.CSharp.StaticOpsLhsC._Underlying *_1, int _2);
                return __MR_C_add_MR_CSharp_StaticOpsLhsC_int(_1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null, _2);
            }

            /// Generated from function `MR::CSharp::operator+`.
            public static unsafe int Add(int _1, MR.CS.CSharp.ByValueStaticOpsRhsC _2)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_add_int_MR_CSharp_StaticOpsRhsC", ExactSpelling = true)]
                extern static int __MR_C_add_int_MR_CSharp_StaticOpsRhsC(int _1, MR.CS.Misc._PassBy _2_pass_by, MR.CS.CSharp.StaticOpsRhsC._Underlying *_2);
                return __MR_C_add_int_MR_CSharp_StaticOpsRhsC(_1, _2.PassByMode, _2.Value is not null ? _2.Value._UnderlyingPtr : null);
            }

            // Fails to inject, becomes a free function.
            /// Generated from function `MR::CSharp::operator+`.
            public static int Add(MR.CS.CSharp.StaticOpsEnum _1, int _2)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_add_MR_CSharp_StaticOpsEnum_int", ExactSpelling = true)]
                extern static int __MR_C_add_MR_CSharp_StaticOpsEnum_int(MR.CS.CSharp.StaticOpsEnum _1, int _2);
                return __MR_C_add_MR_CSharp_StaticOpsEnum_int(_1, _2);
            }

            /// Generated from function `MR::CSharp::test_class_convtrivial`.
            /// Parameter `b` defaults to `{}`.
            public static unsafe MR.CS.CSharp.ConvCtorTrivial TestClassConvtrivial(MR.CS.CSharp.ConstConvCtorTrivial a, MR.CS.CSharp.ConstConvCtorTrivial? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_class_convtrivial", ExactSpelling = true)]
                extern static MR.CS.CSharp.ConvCtorTrivial._Underlying *__MR_CSharp_test_class_convtrivial(MR.CS.CSharp.ConvCtorTrivial._Underlying *a, MR.CS.CSharp.ConvCtorTrivial._Underlying *b);
                return new(__MR_CSharp_test_class_convtrivial(a._UnderlyingPtr, b is not null ? b._UnderlyingPtr : null), is_owning: true);
            }

            /// Generated from function `MR::CSharp::test_class_convtrivial_ref`.
            /// Parameter `b` defaults to `default_convtrivial`.
            public static unsafe MR.CS.CSharp.ConvCtorTrivial TestClassConvtrivialRef(MR.CS.CSharp.ConvCtorTrivial a, MR.CS.CSharp.ConvCtorTrivial? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_class_convtrivial_ref", ExactSpelling = true)]
                extern static MR.CS.CSharp.ConvCtorTrivial._Underlying *__MR_CSharp_test_class_convtrivial_ref(MR.CS.CSharp.ConvCtorTrivial._Underlying *a, MR.CS.CSharp.ConvCtorTrivial._Underlying *b);
                return new(__MR_CSharp_test_class_convtrivial_ref(a._UnderlyingPtr, b is not null ? b._UnderlyingPtr : null), is_owning: false);
            }

            /// Generated from function `MR::CSharp::test_class_convtrivial_cref`.
            /// Parameter `b` defaults to `default_convtrivial`.
            public static unsafe MR.CS.CSharp.ConstConvCtorTrivial TestClassConvtrivialCref(MR.CS.CSharp.ConstConvCtorTrivial a, MR.CS.CSharp.ConstConvCtorTrivial? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_class_convtrivial_cref", ExactSpelling = true)]
                extern static MR.CS.CSharp.ConstConvCtorTrivial._Underlying *__MR_CSharp_test_class_convtrivial_cref(MR.CS.CSharp.ConstConvCtorTrivial._Underlying *a, MR.CS.CSharp.ConstConvCtorTrivial._Underlying *b);
                return new(__MR_CSharp_test_class_convtrivial_cref(a._UnderlyingPtr, b is not null ? b._UnderlyingPtr : null), is_owning: false);
            }

            /// Generated from function `MR::CSharp::test_class_convtrivial_ptr`.
            /// Parameter `c` defaults to `&default_convtrivial`.
            public static unsafe MR.CS.CSharp.ConvCtorTrivial? TestClassConvtrivialPtr(MR.CS.CSharp.ConvCtorTrivial? a, MR.CS.CSharp.ConvCtorTrivial? b = null, MR.CS.Misc.InOptMutClass<MR.CS.CSharp.ConvCtorTrivial>? c = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_class_convtrivial_ptr", ExactSpelling = true)]
                extern static MR.CS.CSharp.ConvCtorTrivial._Underlying *__MR_CSharp_test_class_convtrivial_ptr(MR.CS.CSharp.ConvCtorTrivial._Underlying *a, MR.CS.CSharp.ConvCtorTrivial._Underlying *b, MR.CS.CSharp.ConvCtorTrivial._Underlying **c);
                MR.CS.CSharp.ConvCtorTrivial._Underlying *__ptr_c = c is not null && c.Opt is not null ? c.Opt._UnderlyingPtr : null;
                var __ret = __MR_CSharp_test_class_convtrivial_ptr(a is not null ? a._UnderlyingPtr : null, b is not null ? b._UnderlyingPtr : null, c is not null ? &__ptr_c : null);
                return __ret is not null ? new MR.CS.CSharp.ConvCtorTrivial(__ret, is_owning: false) : null;
            }

            /// Generated from function `MR::CSharp::test_class_convtrivial_cptr`.
            /// Parameter `c` defaults to `&default_convtrivial`.
            public static unsafe MR.CS.CSharp.ConstConvCtorTrivial? TestClassConvtrivialCptr(MR.CS.CSharp.ConstConvCtorTrivial? a, MR.CS.CSharp.ConstConvCtorTrivial? b = null, MR.CS.CSharp.InOptConstConvCtorTrivial? c = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_class_convtrivial_cptr", ExactSpelling = true)]
                extern static MR.CS.CSharp.ConstConvCtorTrivial._Underlying *__MR_CSharp_test_class_convtrivial_cptr(MR.CS.CSharp.ConstConvCtorTrivial._Underlying *a, MR.CS.CSharp.ConstConvCtorTrivial._Underlying *b, MR.CS.CSharp.ConstConvCtorTrivial._Underlying **c);
                MR.CS.CSharp.ConstConvCtorTrivial._Underlying *__ptr_c = c is not null && c.Opt is not null ? c.Opt._UnderlyingPtr : null;
                var __ret = __MR_CSharp_test_class_convtrivial_cptr(a is not null ? a._UnderlyingPtr : null, b is not null ? b._UnderlyingPtr : null, c is not null ? &__ptr_c : null);
                return __ret is not null ? new MR.CS.CSharp.ConstConvCtorTrivial(__ret, is_owning: false) : null;
            }

            /// Generated from function `MR::CSharp::test_class_convnontrivial`.
            /// Parameter `b` defaults to `{}`.
            public static unsafe MR.CS.CSharp.ConvCtorNonTrivial TestClassConvnontrivial(MR.CS.CSharp.ByValueConvCtorNonTrivial a, MR.CS.CSharp.ByValueConvCtorNonTrivial? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_class_convnontrivial", ExactSpelling = true)]
                extern static MR.CS.CSharp.ConvCtorNonTrivial._Underlying *__MR_CSharp_test_class_convnontrivial(MR.CS.Misc._PassBy a_pass_by, MR.CS.CSharp.ConvCtorNonTrivial._Underlying *a, MR.CS.Misc._PassBy b_pass_by, MR.CS.CSharp.ConvCtorNonTrivial._Underlying *b);
                return new(__MR_CSharp_test_class_convnontrivial(a.PassByMode, a.Value is not null ? a.Value._UnderlyingPtr : null, b.HasValue ? b.Value.PassByMode : MR.CS.Misc._PassBy.default_arg, b.HasValue && b.Value.Value is not null ? b.Value.Value._UnderlyingPtr : null), is_owning: true);
            }

            /// Generated from function `MR::CSharp::test_class_convnontrivial_ref`.
            /// Parameter `b` defaults to `default_convnontrivial`.
            public static unsafe MR.CS.CSharp.ConvCtorNonTrivial TestClassConvnontrivialRef(MR.CS.CSharp.ConvCtorNonTrivial a, MR.CS.CSharp.ConvCtorNonTrivial? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_class_convnontrivial_ref", ExactSpelling = true)]
                extern static MR.CS.CSharp.ConvCtorNonTrivial._Underlying *__MR_CSharp_test_class_convnontrivial_ref(MR.CS.CSharp.ConvCtorNonTrivial._Underlying *a, MR.CS.CSharp.ConvCtorNonTrivial._Underlying *b);
                return new(__MR_CSharp_test_class_convnontrivial_ref(a._UnderlyingPtr, b is not null ? b._UnderlyingPtr : null), is_owning: false);
            }

            /// Generated from function `MR::CSharp::test_class_convnontrivial_cref`.
            /// Parameter `b` defaults to `default_convnontrivial`.
            public static unsafe MR.CS.CSharp.ConstConvCtorNonTrivial TestClassConvnontrivialCref(MR.CS.CSharp.ConstConvCtorNonTrivial a, MR.CS.CSharp.ConstConvCtorNonTrivial? b = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_class_convnontrivial_cref", ExactSpelling = true)]
                extern static MR.CS.CSharp.ConstConvCtorNonTrivial._Underlying *__MR_CSharp_test_class_convnontrivial_cref(MR.CS.CSharp.ConstConvCtorNonTrivial._Underlying *a, MR.CS.CSharp.ConstConvCtorNonTrivial._Underlying *b);
                return new(__MR_CSharp_test_class_convnontrivial_cref(a._UnderlyingPtr, b is not null ? b._UnderlyingPtr : null), is_owning: false);
            }

            /// Generated from function `MR::CSharp::test_class_convnontrivial_ptr`.
            /// Parameter `c` defaults to `&default_convnontrivial`.
            public static unsafe MR.CS.CSharp.ConvCtorNonTrivial? TestClassConvnontrivialPtr(MR.CS.CSharp.ConvCtorNonTrivial? a, MR.CS.CSharp.ConvCtorNonTrivial? b = null, MR.CS.Misc.InOptMutClass<MR.CS.CSharp.ConvCtorNonTrivial>? c = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_class_convnontrivial_ptr", ExactSpelling = true)]
                extern static MR.CS.CSharp.ConvCtorNonTrivial._Underlying *__MR_CSharp_test_class_convnontrivial_ptr(MR.CS.CSharp.ConvCtorNonTrivial._Underlying *a, MR.CS.CSharp.ConvCtorNonTrivial._Underlying *b, MR.CS.CSharp.ConvCtorNonTrivial._Underlying **c);
                MR.CS.CSharp.ConvCtorNonTrivial._Underlying *__ptr_c = c is not null && c.Opt is not null ? c.Opt._UnderlyingPtr : null;
                var __ret = __MR_CSharp_test_class_convnontrivial_ptr(a is not null ? a._UnderlyingPtr : null, b is not null ? b._UnderlyingPtr : null, c is not null ? &__ptr_c : null);
                return __ret is not null ? new MR.CS.CSharp.ConvCtorNonTrivial(__ret, is_owning: false) : null;
            }

            /// Generated from function `MR::CSharp::test_class_convnontrivial_cptr`.
            /// Parameter `c` defaults to `&default_convnontrivial`.
            public static unsafe MR.CS.CSharp.ConstConvCtorNonTrivial? TestClassConvnontrivialCptr(MR.CS.CSharp.ConstConvCtorNonTrivial? a, MR.CS.CSharp.ConstConvCtorNonTrivial? b = null, MR.CS.CSharp.InOptConstConvCtorNonTrivial? c = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_class_convnontrivial_cptr", ExactSpelling = true)]
                extern static MR.CS.CSharp.ConstConvCtorNonTrivial._Underlying *__MR_CSharp_test_class_convnontrivial_cptr(MR.CS.CSharp.ConstConvCtorNonTrivial._Underlying *a, MR.CS.CSharp.ConstConvCtorNonTrivial._Underlying *b, MR.CS.CSharp.ConstConvCtorNonTrivial._Underlying **c);
                MR.CS.CSharp.ConstConvCtorNonTrivial._Underlying *__ptr_c = c is not null && c.Opt is not null ? c.Opt._UnderlyingPtr : null;
                var __ret = __MR_CSharp_test_class_convnontrivial_cptr(a is not null ? a._UnderlyingPtr : null, b is not null ? b._UnderlyingPtr : null, c is not null ? &__ptr_c : null);
                return __ret is not null ? new MR.CS.CSharp.ConstConvCtorNonTrivial(__ret, is_owning: false) : null;
            }
        }
    }
}
