public static partial class MR
{
    public static partial class CS
    {
        public static partial class DeclOrder
        {
            // Here all classes are whitelisted using `--expose-as-struct`.
            /// Generated from class `MR::DeclOrder::A`.
            /// This is the const reference to the struct.
            public class Const_A : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                /// Get the underlying struct.
                public unsafe ref readonly A UnderlyingStruct => ref *(A *)_UnderlyingPtr;

                internal unsafe Const_A(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_DeclOrder_A_Destroy", ExactSpelling = true)]
                    extern static void __MR_DeclOrder_A_Destroy(_Underlying *_this);
                    __MR_DeclOrder_A_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_A() {Dispose(false);}

                public ref readonly int Blah => ref UnderlyingStruct.Blah;

                /// Generated default constructor.
                public unsafe Const_A() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_Alloc", ExactSpelling = true)]
                    extern static _Underlying *__MR_C_Alloc(nuint size);
                    _UnderlyingPtr = __MR_C_Alloc(4);
                    for (nuint _i = 0; _i < 4; _i++) ((byte *)_UnderlyingPtr)[_i] = 0;
                }

                /// Generated copy constructor.
                public unsafe Const_A(Const_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_Alloc", ExactSpelling = true)]
                    extern static _Underlying *__MR_C_Alloc(nuint size);
                    _UnderlyingPtr = __MR_C_Alloc(4);
                    for (nuint _i = 0; _i < 4; _i++) ((byte *)_UnderlyingPtr)[_i] = ((byte *)_other._UnderlyingPtr)[_i];
                }
            }

            // Here all classes are whitelisted using `--expose-as-struct`.
            /// Generated from class `MR::DeclOrder::A`.
            /// This is the non-const reference to the struct.
            public class Mut_A : Const_A
            {
                /// Get the underlying struct.
                public unsafe new ref A UnderlyingStruct => ref *(A *)_UnderlyingPtr;

                internal unsafe Mut_A(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                public new ref int Blah => ref UnderlyingStruct.Blah;

                /// Generated default constructor.
                public unsafe Mut_A() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_Alloc", ExactSpelling = true)]
                    extern static _Underlying *__MR_C_Alloc(nuint size);
                    _UnderlyingPtr = __MR_C_Alloc(4);
                    for (nuint _i = 0; _i < 4; _i++) ((byte *)_UnderlyingPtr)[_i] = 0;
                }

                /// Generated copy constructor.
                public unsafe Mut_A(Const_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_Alloc", ExactSpelling = true)]
                    extern static _Underlying *__MR_C_Alloc(nuint size);
                    _UnderlyingPtr = __MR_C_Alloc(4);
                    for (nuint _i = 0; _i < 4; _i++) ((byte *)_UnderlyingPtr)[_i] = ((byte *)_other._UnderlyingPtr)[_i];
                }

                /// Generated from method `MR::DeclOrder::A::c`.
                public unsafe MR.CS.DeclOrder.A.B C()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_DeclOrder_A_c", ExactSpelling = true)]
                    extern static MR.CS.DeclOrder.A.B __MR_DeclOrder_A_c(_Underlying *_this);
                    return __MR_DeclOrder_A_c(_UnderlyingPtr);
                }

                /// Generated from method `MR::DeclOrder::A::d`.
                public unsafe MR.CS.DeclOrder.A.E D()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_DeclOrder_A_d", ExactSpelling = true)]
                    extern static MR.CS.DeclOrder.A.E __MR_DeclOrder_A_d(_Underlying *_this);
                    return __MR_DeclOrder_A_d(_UnderlyingPtr);
                }
            }

            // Here all classes are whitelisted using `--expose-as-struct`.
            /// Generated from class `MR::DeclOrder::A`.
            /// This is the by-value version of the struct.
            [System.Runtime.InteropServices.StructLayout(System.Runtime.InteropServices.LayoutKind.Explicit, Size = 4)]
            public struct A
            {
                /// Copy contents from a wrapper class to this struct.
                public static implicit operator A(Const_A other) => other.UnderlyingStruct;
                /// Copy this struct into a wrapper class. (Even though we initially pass `is_owning: false`, we then use the copy constructor to produce an owning instance.)
                public unsafe static implicit operator Mut_A(A other) => new(new Const_A((Mut_A._Underlying *)&other, is_owning: false));

                [System.Runtime.InteropServices.FieldOffset(0)]
                public int Blah;

                /// Generated copy constructor.
                public A(A _other) {this = _other;}

                /// Generated from method `MR::DeclOrder::A::c`.
                public unsafe MR.CS.DeclOrder.A.B C()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_DeclOrder_A_c", ExactSpelling = true)]
                    extern static MR.CS.DeclOrder.A.B __MR_DeclOrder_A_c(MR.CS.DeclOrder.A *_this);
                    fixed (MR.CS.DeclOrder.A *__ptr__this = &this)
                    {
                        return __MR_DeclOrder_A_c(__ptr__this);
                    }
                }

                /// Generated from method `MR::DeclOrder::A::d`.
                public unsafe MR.CS.DeclOrder.A.E D()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_DeclOrder_A_d", ExactSpelling = true)]
                    extern static MR.CS.DeclOrder.A.E __MR_DeclOrder_A_d(MR.CS.DeclOrder.A *_this);
                    fixed (MR.CS.DeclOrder.A *__ptr__this = &this)
                    {
                        return __MR_DeclOrder_A_d(__ptr__this);
                    }
                }

                /// Generated from class `MR::DeclOrder::A::B`.
                /// This is the const reference to the struct.
                public class Const_B : MR.CS.Misc.Object, System.IDisposable
                {
                    internal struct _Underlying {} // Represents the underlying C++ type.

                    internal unsafe _Underlying *_UnderlyingPtr;

                    /// Get the underlying struct.
                    public unsafe ref readonly B UnderlyingStruct => ref *(B *)_UnderlyingPtr;

                    internal unsafe Const_B(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                    protected virtual unsafe void Dispose(bool disposing)
                    {
                        if (_UnderlyingPtr is null || !_IsOwningVal)
                            return;
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_DeclOrder_A_B_Destroy", ExactSpelling = true)]
                        extern static void __MR_DeclOrder_A_B_Destroy(_Underlying *_this);
                        __MR_DeclOrder_A_B_Destroy(_UnderlyingPtr);
                        _UnderlyingPtr = null;
                    }
                    public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                    ~Const_B() {Dispose(false);}

                    public ref readonly int Bleh => ref UnderlyingStruct.Bleh;

                    /// Generated default constructor.
                    public unsafe Const_B() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_Alloc", ExactSpelling = true)]
                        extern static _Underlying *__MR_C_Alloc(nuint size);
                        _UnderlyingPtr = __MR_C_Alloc(4);
                        for (nuint _i = 0; _i < 4; _i++) ((byte *)_UnderlyingPtr)[_i] = 0;
                    }

                    /// Generated copy constructor.
                    public unsafe Const_B(Const_B _other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_Alloc", ExactSpelling = true)]
                        extern static _Underlying *__MR_C_Alloc(nuint size);
                        _UnderlyingPtr = __MR_C_Alloc(4);
                        for (nuint _i = 0; _i < 4; _i++) ((byte *)_UnderlyingPtr)[_i] = ((byte *)_other._UnderlyingPtr)[_i];
                    }
                }

                /// Generated from class `MR::DeclOrder::A::B`.
                /// This is the non-const reference to the struct.
                public class Mut_B : Const_B
                {
                    /// Get the underlying struct.
                    public unsafe new ref B UnderlyingStruct => ref *(B *)_UnderlyingPtr;

                    internal unsafe Mut_B(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                    public new ref int Bleh => ref UnderlyingStruct.Bleh;

                    /// Generated default constructor.
                    public unsafe Mut_B() : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_Alloc", ExactSpelling = true)]
                        extern static _Underlying *__MR_C_Alloc(nuint size);
                        _UnderlyingPtr = __MR_C_Alloc(4);
                        for (nuint _i = 0; _i < 4; _i++) ((byte *)_UnderlyingPtr)[_i] = 0;
                    }

                    /// Generated copy constructor.
                    public unsafe Mut_B(Const_B _other) : this(null, is_owning: true)
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_Alloc", ExactSpelling = true)]
                        extern static _Underlying *__MR_C_Alloc(nuint size);
                        _UnderlyingPtr = __MR_C_Alloc(4);
                        for (nuint _i = 0; _i < 4; _i++) ((byte *)_UnderlyingPtr)[_i] = ((byte *)_other._UnderlyingPtr)[_i];
                    }

                    /// Generated from method `MR::DeclOrder::A::B::a`.
                    public unsafe MR.CS.DeclOrder.A A()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_DeclOrder_A_B_a", ExactSpelling = true)]
                        extern static MR.CS.DeclOrder.A __MR_DeclOrder_A_B_a(_Underlying *_this);
                        return __MR_DeclOrder_A_B_a(_UnderlyingPtr);
                    }

                    /// Generated from method `MR::DeclOrder::A::B::b`.
                    public unsafe MR.CS.DeclOrder.A.E B_()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_DeclOrder_A_B_b", ExactSpelling = true)]
                        extern static MR.CS.DeclOrder.A.E __MR_DeclOrder_A_B_b(_Underlying *_this);
                        return __MR_DeclOrder_A_B_b(_UnderlyingPtr);
                    }
                }

                /// Generated from class `MR::DeclOrder::A::B`.
                /// This is the by-value version of the struct.
                [System.Runtime.InteropServices.StructLayout(System.Runtime.InteropServices.LayoutKind.Explicit, Size = 4)]
                public struct B
                {
                    /// Copy contents from a wrapper class to this struct.
                    public static implicit operator B(Const_B other) => other.UnderlyingStruct;
                    /// Copy this struct into a wrapper class. (Even though we initially pass `is_owning: false`, we then use the copy constructor to produce an owning instance.)
                    public unsafe static implicit operator Mut_B(B other) => new(new Const_B((Mut_B._Underlying *)&other, is_owning: false));

                    [System.Runtime.InteropServices.FieldOffset(0)]
                    public int Bleh;

                    /// Generated copy constructor.
                    public B(B _other) {this = _other;}

                    /// Generated from method `MR::DeclOrder::A::B::a`.
                    public unsafe MR.CS.DeclOrder.A A()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_DeclOrder_A_B_a", ExactSpelling = true)]
                        extern static MR.CS.DeclOrder.A __MR_DeclOrder_A_B_a(MR.CS.DeclOrder.A.B *_this);
                        fixed (MR.CS.DeclOrder.A.B *__ptr__this = &this)
                        {
                            return __MR_DeclOrder_A_B_a(__ptr__this);
                        }
                    }

                    /// Generated from method `MR::DeclOrder::A::B::b`.
                    public unsafe MR.CS.DeclOrder.A.E B_()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_DeclOrder_A_B_b", ExactSpelling = true)]
                        extern static MR.CS.DeclOrder.A.E __MR_DeclOrder_A_B_b(MR.CS.DeclOrder.A.B *_this);
                        fixed (MR.CS.DeclOrder.A.B *__ptr__this = &this)
                        {
                            return __MR_DeclOrder_A_B_b(__ptr__this);
                        }
                    }
                }

                /// This is used as a function parameter when passing `Mut_B` by value with a default argument, since trying to use `?` instead seems to prevent us from taking its address.
                /// Usage:
                /// * Pass an instance of `Mut_B`/`Const_B` to copy it into the function.
                /// * Pass `null` to use the default argument
                public readonly ref struct _InOpt_B
                {
                    public readonly bool HasValue;
                    internal readonly B Object;
                    public B Value{
                        get
                        {
                            System.Diagnostics.Trace.Assert(HasValue);
                            return Object;
                        }
                    }

                    public _InOpt_B() {HasValue = false;}
                    public _InOpt_B(B new_value) {HasValue = true; Object = new_value;}
                    public static implicit operator _InOpt_B(B new_value) {return new(new_value);}
                    public _InOpt_B(Const_B new_value) {HasValue = true; Object = new_value.UnderlyingStruct;}
                    public static implicit operator _InOpt_B(Const_B new_value) {return new(new_value);}
                }

                /// This is used for optional parameters of class `Mut_B` with default arguments.
                /// This is only used mutable parameters. For const ones we have `_InOptConst_B`.
                /// Usage:
                /// * Pass `null` to use the default argument.
                /// * Pass `new()` to pass no object.
                /// * Pass an instance of `Mut_B`/`Const_B` directly.
                /// * Pass `new(ref ...)` to pass a reference to `B`.
                public class _InOptMut_B
                {
                    public Mut_B? Opt;

                    public _InOptMut_B() {}
                    public _InOptMut_B(Mut_B value) {Opt = value;}
                    public static implicit operator _InOptMut_B(Mut_B value) {return new(value);}
                    public unsafe _InOptMut_B(ref B value)
                    {
                        fixed (B *value_ptr = &value)
                        {
                            Opt = new((Const_B._Underlying *)value_ptr, is_owning: false);
                        }
                    }
                }

                /// This is used for optional parameters of class `Mut_B` with default arguments.
                /// This is only used const parameters. For non-const ones we have `_InOptMut_B`.
                /// Usage:
                /// * Pass `null` to use the default argument.
                /// * Pass `new()` to pass no object.
                /// * Pass an instance of `Mut_B`/`Const_B` to pass it to the function.
                /// * Pass `new(ref ...)` to pass a reference to `B`.
                public class _InOptConst_B
                {
                    public Const_B? Opt;

                    public _InOptConst_B() {}
                    public _InOptConst_B(Const_B value) {Opt = value;}
                    public static implicit operator _InOptConst_B(Const_B value) {return new(value);}
                    public unsafe _InOptConst_B(ref readonly B value)
                    {
                        fixed (B *value_ptr = &value)
                        {
                            Opt = new((Const_B._Underlying *)value_ptr, is_owning: false);
                        }
                    }
                }

                public enum E : int
                {
                }
            }

            /// This is used as a function parameter when passing `Mut_A` by value with a default argument, since trying to use `?` instead seems to prevent us from taking its address.
            /// Usage:
            /// * Pass an instance of `Mut_A`/`Const_A` to copy it into the function.
            /// * Pass `null` to use the default argument
            public readonly ref struct _InOpt_A
            {
                public readonly bool HasValue;
                internal readonly A Object;
                public A Value{
                    get
                    {
                        System.Diagnostics.Trace.Assert(HasValue);
                        return Object;
                    }
                }

                public _InOpt_A() {HasValue = false;}
                public _InOpt_A(A new_value) {HasValue = true; Object = new_value;}
                public static implicit operator _InOpt_A(A new_value) {return new(new_value);}
                public _InOpt_A(Const_A new_value) {HasValue = true; Object = new_value.UnderlyingStruct;}
                public static implicit operator _InOpt_A(Const_A new_value) {return new(new_value);}
            }

            /// This is used for optional parameters of class `Mut_A` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_A`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Mut_A`/`Const_A` directly.
            /// * Pass `new(ref ...)` to pass a reference to `A`.
            public class _InOptMut_A
            {
                public Mut_A? Opt;

                public _InOptMut_A() {}
                public _InOptMut_A(Mut_A value) {Opt = value;}
                public static implicit operator _InOptMut_A(Mut_A value) {return new(value);}
                public unsafe _InOptMut_A(ref A value)
                {
                    fixed (A *value_ptr = &value)
                    {
                        Opt = new((Const_A._Underlying *)value_ptr, is_owning: false);
                    }
                }
            }

            /// This is used for optional parameters of class `Mut_A` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_A`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Mut_A`/`Const_A` to pass it to the function.
            /// * Pass `new(ref ...)` to pass a reference to `A`.
            public class _InOptConst_A
            {
                public Const_A? Opt;

                public _InOptConst_A() {}
                public _InOptConst_A(Const_A value) {Opt = value;}
                public static implicit operator _InOptConst_A(Const_A value) {return new(value);}
                public unsafe _InOptConst_A(ref readonly A value)
                {
                    fixed (A *value_ptr = &value)
                    {
                        Opt = new((Const_A._Underlying *)value_ptr, is_owning: false);
                    }
                }
            }

            /// Generated from class `MR::DeclOrder::C<false>`.
            /// This is the const reference to the struct.
            public class Const_C_False : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                /// Get the underlying struct.
                public unsafe ref readonly C_False UnderlyingStruct => ref *(C_False *)_UnderlyingPtr;

                internal unsafe Const_C_False(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_DeclOrder_C_false_Destroy", ExactSpelling = true)]
                    extern static void __MR_DeclOrder_C_false_Destroy(_Underlying *_this);
                    __MR_DeclOrder_C_false_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_C_False() {Dispose(false);}

                public ref readonly int Bleh => ref UnderlyingStruct.Bleh;

                /// Generated default constructor.
                public unsafe Const_C_False() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_Alloc", ExactSpelling = true)]
                    extern static _Underlying *__MR_C_Alloc(nuint size);
                    _UnderlyingPtr = __MR_C_Alloc(4);
                    for (nuint _i = 0; _i < 4; _i++) ((byte *)_UnderlyingPtr)[_i] = 0;
                }

                /// Generated copy constructor.
                public unsafe Const_C_False(Const_C_False _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_Alloc", ExactSpelling = true)]
                    extern static _Underlying *__MR_C_Alloc(nuint size);
                    _UnderlyingPtr = __MR_C_Alloc(4);
                    for (nuint _i = 0; _i < 4; _i++) ((byte *)_UnderlyingPtr)[_i] = ((byte *)_other._UnderlyingPtr)[_i];
                }
            }

            /// Generated from class `MR::DeclOrder::C<false>`.
            /// This is the non-const reference to the struct.
            public class Mut_C_False : Const_C_False
            {
                /// Get the underlying struct.
                public unsafe new ref C_False UnderlyingStruct => ref *(C_False *)_UnderlyingPtr;

                internal unsafe Mut_C_False(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                public new ref int Bleh => ref UnderlyingStruct.Bleh;

                /// Generated default constructor.
                public unsafe Mut_C_False() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_Alloc", ExactSpelling = true)]
                    extern static _Underlying *__MR_C_Alloc(nuint size);
                    _UnderlyingPtr = __MR_C_Alloc(4);
                    for (nuint _i = 0; _i < 4; _i++) ((byte *)_UnderlyingPtr)[_i] = 0;
                }

                /// Generated copy constructor.
                public unsafe Mut_C_False(Const_C_False _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_Alloc", ExactSpelling = true)]
                    extern static _Underlying *__MR_C_Alloc(nuint size);
                    _UnderlyingPtr = __MR_C_Alloc(4);
                    for (nuint _i = 0; _i < 4; _i++) ((byte *)_UnderlyingPtr)[_i] = ((byte *)_other._UnderlyingPtr)[_i];
                }

                /// Generated from method `MR::DeclOrder::C<false>::blah`.
                public unsafe MR.CS.DeclOrder.C_True Blah()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_DeclOrder_C_false_blah", ExactSpelling = true)]
                    extern static MR.CS.DeclOrder.C_True __MR_DeclOrder_C_false_blah(_Underlying *_this);
                    return __MR_DeclOrder_C_false_blah(_UnderlyingPtr);
                }
            }

            /// Generated from class `MR::DeclOrder::C<false>`.
            /// This is the by-value version of the struct.
            [System.Runtime.InteropServices.StructLayout(System.Runtime.InteropServices.LayoutKind.Explicit, Size = 4)]
            public struct C_False
            {
                /// Copy contents from a wrapper class to this struct.
                public static implicit operator C_False(Const_C_False other) => other.UnderlyingStruct;
                /// Copy this struct into a wrapper class. (Even though we initially pass `is_owning: false`, we then use the copy constructor to produce an owning instance.)
                public unsafe static implicit operator Mut_C_False(C_False other) => new(new Const_C_False((Mut_C_False._Underlying *)&other, is_owning: false));

                [System.Runtime.InteropServices.FieldOffset(0)]
                public int Bleh;

                /// Generated copy constructor.
                public C_False(C_False _other) {this = _other;}

                /// Generated from method `MR::DeclOrder::C<false>::blah`.
                public unsafe MR.CS.DeclOrder.C_True Blah()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_DeclOrder_C_false_blah", ExactSpelling = true)]
                    extern static MR.CS.DeclOrder.C_True __MR_DeclOrder_C_false_blah(MR.CS.DeclOrder.C_False *_this);
                    fixed (MR.CS.DeclOrder.C_False *__ptr__this = &this)
                    {
                        return __MR_DeclOrder_C_false_blah(__ptr__this);
                    }
                }
            }

            /// This is used as a function parameter when passing `Mut_C_False` by value with a default argument, since trying to use `?` instead seems to prevent us from taking its address.
            /// Usage:
            /// * Pass an instance of `Mut_C_False`/`Const_C_False` to copy it into the function.
            /// * Pass `null` to use the default argument
            public readonly ref struct _InOpt_C_False
            {
                public readonly bool HasValue;
                internal readonly C_False Object;
                public C_False Value{
                    get
                    {
                        System.Diagnostics.Trace.Assert(HasValue);
                        return Object;
                    }
                }

                public _InOpt_C_False() {HasValue = false;}
                public _InOpt_C_False(C_False new_value) {HasValue = true; Object = new_value;}
                public static implicit operator _InOpt_C_False(C_False new_value) {return new(new_value);}
                public _InOpt_C_False(Const_C_False new_value) {HasValue = true; Object = new_value.UnderlyingStruct;}
                public static implicit operator _InOpt_C_False(Const_C_False new_value) {return new(new_value);}
            }

            /// This is used for optional parameters of class `Mut_C_False` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_C_False`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Mut_C_False`/`Const_C_False` directly.
            /// * Pass `new(ref ...)` to pass a reference to `C_False`.
            public class _InOptMut_C_False
            {
                public Mut_C_False? Opt;

                public _InOptMut_C_False() {}
                public _InOptMut_C_False(Mut_C_False value) {Opt = value;}
                public static implicit operator _InOptMut_C_False(Mut_C_False value) {return new(value);}
                public unsafe _InOptMut_C_False(ref C_False value)
                {
                    fixed (C_False *value_ptr = &value)
                    {
                        Opt = new((Const_C_False._Underlying *)value_ptr, is_owning: false);
                    }
                }
            }

            /// This is used for optional parameters of class `Mut_C_False` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_C_False`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Mut_C_False`/`Const_C_False` to pass it to the function.
            /// * Pass `new(ref ...)` to pass a reference to `C_False`.
            public class _InOptConst_C_False
            {
                public Const_C_False? Opt;

                public _InOptConst_C_False() {}
                public _InOptConst_C_False(Const_C_False value) {Opt = value;}
                public static implicit operator _InOptConst_C_False(Const_C_False value) {return new(value);}
                public unsafe _InOptConst_C_False(ref readonly C_False value)
                {
                    fixed (C_False *value_ptr = &value)
                    {
                        Opt = new((Const_C_False._Underlying *)value_ptr, is_owning: false);
                    }
                }
            }

            /// Generated from class `MR::DeclOrder::C<true>`.
            /// This is the const reference to the struct.
            public class Const_C_True : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                /// Get the underlying struct.
                public unsafe ref readonly C_True UnderlyingStruct => ref *(C_True *)_UnderlyingPtr;

                internal unsafe Const_C_True(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_DeclOrder_C_true_Destroy", ExactSpelling = true)]
                    extern static void __MR_DeclOrder_C_true_Destroy(_Underlying *_this);
                    __MR_DeclOrder_C_true_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_C_True() {Dispose(false);}

                public ref readonly int Bleh => ref UnderlyingStruct.Bleh;

                /// Generated default constructor.
                public unsafe Const_C_True() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_Alloc", ExactSpelling = true)]
                    extern static _Underlying *__MR_C_Alloc(nuint size);
                    _UnderlyingPtr = __MR_C_Alloc(4);
                    for (nuint _i = 0; _i < 4; _i++) ((byte *)_UnderlyingPtr)[_i] = 0;
                }

                /// Generated copy constructor.
                public unsafe Const_C_True(Const_C_True _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_Alloc", ExactSpelling = true)]
                    extern static _Underlying *__MR_C_Alloc(nuint size);
                    _UnderlyingPtr = __MR_C_Alloc(4);
                    for (nuint _i = 0; _i < 4; _i++) ((byte *)_UnderlyingPtr)[_i] = ((byte *)_other._UnderlyingPtr)[_i];
                }
            }

            /// Generated from class `MR::DeclOrder::C<true>`.
            /// This is the non-const reference to the struct.
            public class Mut_C_True : Const_C_True
            {
                /// Get the underlying struct.
                public unsafe new ref C_True UnderlyingStruct => ref *(C_True *)_UnderlyingPtr;

                internal unsafe Mut_C_True(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                public new ref int Bleh => ref UnderlyingStruct.Bleh;

                /// Generated default constructor.
                public unsafe Mut_C_True() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_Alloc", ExactSpelling = true)]
                    extern static _Underlying *__MR_C_Alloc(nuint size);
                    _UnderlyingPtr = __MR_C_Alloc(4);
                    for (nuint _i = 0; _i < 4; _i++) ((byte *)_UnderlyingPtr)[_i] = 0;
                }

                /// Generated copy constructor.
                public unsafe Mut_C_True(Const_C_True _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_Alloc", ExactSpelling = true)]
                    extern static _Underlying *__MR_C_Alloc(nuint size);
                    _UnderlyingPtr = __MR_C_Alloc(4);
                    for (nuint _i = 0; _i < 4; _i++) ((byte *)_UnderlyingPtr)[_i] = ((byte *)_other._UnderlyingPtr)[_i];
                }

                /// Generated from method `MR::DeclOrder::C<true>::blah`.
                public unsafe MR.CS.DeclOrder.C_False Blah()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_DeclOrder_C_true_blah", ExactSpelling = true)]
                    extern static MR.CS.DeclOrder.C_False __MR_DeclOrder_C_true_blah(_Underlying *_this);
                    return __MR_DeclOrder_C_true_blah(_UnderlyingPtr);
                }
            }

            /// Generated from class `MR::DeclOrder::C<true>`.
            /// This is the by-value version of the struct.
            [System.Runtime.InteropServices.StructLayout(System.Runtime.InteropServices.LayoutKind.Explicit, Size = 4)]
            public struct C_True
            {
                /// Copy contents from a wrapper class to this struct.
                public static implicit operator C_True(Const_C_True other) => other.UnderlyingStruct;
                /// Copy this struct into a wrapper class. (Even though we initially pass `is_owning: false`, we then use the copy constructor to produce an owning instance.)
                public unsafe static implicit operator Mut_C_True(C_True other) => new(new Const_C_True((Mut_C_True._Underlying *)&other, is_owning: false));

                [System.Runtime.InteropServices.FieldOffset(0)]
                public int Bleh;

                /// Generated copy constructor.
                public C_True(C_True _other) {this = _other;}

                /// Generated from method `MR::DeclOrder::C<true>::blah`.
                public unsafe MR.CS.DeclOrder.C_False Blah()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_DeclOrder_C_true_blah", ExactSpelling = true)]
                    extern static MR.CS.DeclOrder.C_False __MR_DeclOrder_C_true_blah(MR.CS.DeclOrder.C_True *_this);
                    fixed (MR.CS.DeclOrder.C_True *__ptr__this = &this)
                    {
                        return __MR_DeclOrder_C_true_blah(__ptr__this);
                    }
                }
            }

            /// This is used as a function parameter when passing `Mut_C_True` by value with a default argument, since trying to use `?` instead seems to prevent us from taking its address.
            /// Usage:
            /// * Pass an instance of `Mut_C_True`/`Const_C_True` to copy it into the function.
            /// * Pass `null` to use the default argument
            public readonly ref struct _InOpt_C_True
            {
                public readonly bool HasValue;
                internal readonly C_True Object;
                public C_True Value{
                    get
                    {
                        System.Diagnostics.Trace.Assert(HasValue);
                        return Object;
                    }
                }

                public _InOpt_C_True() {HasValue = false;}
                public _InOpt_C_True(C_True new_value) {HasValue = true; Object = new_value;}
                public static implicit operator _InOpt_C_True(C_True new_value) {return new(new_value);}
                public _InOpt_C_True(Const_C_True new_value) {HasValue = true; Object = new_value.UnderlyingStruct;}
                public static implicit operator _InOpt_C_True(Const_C_True new_value) {return new(new_value);}
            }

            /// This is used for optional parameters of class `Mut_C_True` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_C_True`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Mut_C_True`/`Const_C_True` directly.
            /// * Pass `new(ref ...)` to pass a reference to `C_True`.
            public class _InOptMut_C_True
            {
                public Mut_C_True? Opt;

                public _InOptMut_C_True() {}
                public _InOptMut_C_True(Mut_C_True value) {Opt = value;}
                public static implicit operator _InOptMut_C_True(Mut_C_True value) {return new(value);}
                public unsafe _InOptMut_C_True(ref C_True value)
                {
                    fixed (C_True *value_ptr = &value)
                    {
                        Opt = new((Const_C_True._Underlying *)value_ptr, is_owning: false);
                    }
                }
            }

            /// This is used for optional parameters of class `Mut_C_True` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_C_True`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Mut_C_True`/`Const_C_True` to pass it to the function.
            /// * Pass `new(ref ...)` to pass a reference to `C_True`.
            public class _InOptConst_C_True
            {
                public Const_C_True? Opt;

                public _InOptConst_C_True() {}
                public _InOptConst_C_True(Const_C_True value) {Opt = value;}
                public static implicit operator _InOptConst_C_True(Const_C_True value) {return new(value);}
                public unsafe _InOptConst_C_True(ref readonly C_True value)
                {
                    fixed (C_True *value_ptr = &value)
                    {
                        Opt = new((Const_C_True._Underlying *)value_ptr, is_owning: false);
                    }
                }
            }
        }
    }
}
