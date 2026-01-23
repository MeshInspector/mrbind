public static partial class MR
{
    public static partial class CS
    {
        public static partial class DeclOrder
        {
            // Here all classes are whitelisted using `--expose-as-struct`.
            /// <summary>
            /// Generated from class `MR::DeclOrder::A`.
            /// This is the const reference to the struct.
            /// </summary>
            public class Const_A : MR.CS.Misc.Object<Const_A>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                /// <summary>
                /// Get the underlying struct.
                /// </summary>
                public unsafe ref readonly A _Ref => ref *(A *)_UnderlyingPtr;

                /// <summary>
                /// Make a copy of a struct. (Even though we initially pass `is_owning: false`, we then use the copy constructor to produce an owning instance.)
                /// </summary>
                public unsafe Const_A(A other) : this(new Const_A((_Underlying *)&other, is_owning: false)) {}
                /// <summary>
                /// Convert from a struct by copying it. Note that only `Const_A` has this conversion, `Mut_A` intentionally doesn't.
                /// </summary>
                public static implicit operator Const_A(A other) {return new(other);}

                internal unsafe Const_A(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    MR.CS.Misc._Free((void *)_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_A() {Dispose(false);}

                public ref readonly int blah => ref _Ref.blah;

                /// <summary>
                /// Generated default constructor.
                /// </summary>
                public unsafe Const_A() : this(null, is_owning: true)
                {
                    _UnderlyingPtr = (_Underlying *)MR.CS.Misc._Alloc(4);
                    System.Runtime.InteropServices.NativeMemory.Fill(_UnderlyingPtr, 4, 0);
                }

                /// <summary>
                /// Generated copy constructor.
                /// </summary>
                public unsafe Const_A(Const_A _other) : this(null, is_owning: true)
                {
                    _UnderlyingPtr = (_Underlying *)MR.CS.Misc._Alloc(4);
                    System.Runtime.InteropServices.NativeMemory.Copy(_other._UnderlyingPtr, _UnderlyingPtr, 4);
                }
            }

            // Here all classes are whitelisted using `--expose-as-struct`.
            /// <summary>
            /// Generated from class `MR::DeclOrder::A`.
            /// This is the non-const reference to the struct.
            /// </summary>
            public class Mut_A : Const_A
            {
                /// <summary>
                /// Get the underlying struct.
                /// </summary>
                public unsafe new ref A _Ref => ref *(A *)_UnderlyingPtr;

                /// <summary>
                /// Make a copy of a struct. (Even though we initially pass `is_owning: false`, we then use the copy constructor to produce an owning instance.)
                /// </summary>
                public unsafe Mut_A(A other) : this(new Const_A((_Underlying *)&other, is_owning: false)) {}

                internal unsafe Mut_A(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                public new ref int blah => ref _Ref.blah;

                /// <summary>
                /// Generated default constructor.
                /// </summary>
                public unsafe Mut_A() : this(null, is_owning: true)
                {
                    _UnderlyingPtr = (_Underlying *)MR.CS.Misc._Alloc(4);
                    System.Runtime.InteropServices.NativeMemory.Fill(_UnderlyingPtr, 4, 0);
                }

                /// <summary>
                /// Generated copy constructor.
                /// </summary>
                public unsafe Mut_A(Const_A _other) : this(null, is_owning: true)
                {
                    _UnderlyingPtr = (_Underlying *)MR.CS.Misc._Alloc(4);
                    System.Runtime.InteropServices.NativeMemory.Copy(_other._UnderlyingPtr, _UnderlyingPtr, 4);
                }

                /// <summary>
                /// Generated copy assignment.
                /// </summary>
                public void Assign(Const_A _other) {_Ref = _other._Ref;}

                /// <summary>
                /// Generated from method `MR::DeclOrder::A::c`.
                /// </summary>
                public unsafe MR.CS.DeclOrder.A.B c()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_DeclOrder_A_c", ExactSpelling = true)]
                    extern static MR.CS.DeclOrder.A.B __MR_DeclOrder_A_c(_Underlying *_this);
                    return __MR_DeclOrder_A_c(_UnderlyingPtr);
                }

                /// <summary>
                /// Generated from method `MR::DeclOrder::A::d`.
                /// </summary>
                public unsafe MR.CS.DeclOrder.A.E d()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_DeclOrder_A_d", ExactSpelling = true)]
                    extern static MR.CS.DeclOrder.A.E __MR_DeclOrder_A_d(_Underlying *_this);
                    return __MR_DeclOrder_A_d(_UnderlyingPtr);
                }
            }

            // Here all classes are whitelisted using `--expose-as-struct`.
            /// <summary>
            /// Generated from class `MR::DeclOrder::A`.
            /// This is the by-value version of the struct.
            /// </summary>
            [System.Runtime.InteropServices.StructLayout(System.Runtime.InteropServices.LayoutKind.Explicit, Size = 4)]
            public struct A
            {
                /// <summary>
                /// Copy contents from a wrapper class to this struct.
                /// </summary>
                public static implicit operator A(Const_A other) => other._Ref;

                [System.Runtime.InteropServices.FieldOffset(0)]
                public int blah;

                /// <summary>
                /// Generated copy constructor.
                /// </summary>
                public A(A _other) {this = _other;}

                /// <summary>
                /// Generated from method `MR::DeclOrder::A::c`.
                /// </summary>
                public unsafe MR.CS.DeclOrder.A.B c()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_DeclOrder_A_c", ExactSpelling = true)]
                    extern static MR.CS.DeclOrder.A.B __MR_DeclOrder_A_c(MR.CS.DeclOrder.A *_this);
                    fixed (MR.CS.DeclOrder.A *__ptr__this = &this)
                    {
                        return __MR_DeclOrder_A_c(__ptr__this);
                    }
                }

                /// <summary>
                /// Generated from method `MR::DeclOrder::A::d`.
                /// </summary>
                public unsafe MR.CS.DeclOrder.A.E d()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_DeclOrder_A_d", ExactSpelling = true)]
                    extern static MR.CS.DeclOrder.A.E __MR_DeclOrder_A_d(MR.CS.DeclOrder.A *_this);
                    fixed (MR.CS.DeclOrder.A *__ptr__this = &this)
                    {
                        return __MR_DeclOrder_A_d(__ptr__this);
                    }
                }

                /// <summary>
                /// Generated from class `MR::DeclOrder::A::B`.
                /// This is the const reference to the struct.
                /// </summary>
                public class Const_B : MR.CS.Misc.Object<Const_B>, System.IDisposable
                {
                    internal struct _Underlying {} // Represents the underlying C++ type.

                    internal unsafe _Underlying *_UnderlyingPtr;

                    /// <summary>
                    /// Get the underlying struct.
                    /// </summary>
                    public unsafe ref readonly B _Ref => ref *(B *)_UnderlyingPtr;

                    /// <summary>
                    /// Make a copy of a struct. (Even though we initially pass `is_owning: false`, we then use the copy constructor to produce an owning instance.)
                    /// </summary>
                    public unsafe Const_B(B other) : this(new Const_B((_Underlying *)&other, is_owning: false)) {}
                    /// <summary>
                    /// Convert from a struct by copying it. Note that only `Const_B` has this conversion, `Mut_B` intentionally doesn't.
                    /// </summary>
                    public static implicit operator Const_B(B other) {return new(other);}

                    internal unsafe Const_B(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                    protected virtual unsafe void Dispose(bool disposing)
                    {
                        if (_UnderlyingPtr is null || !_IsOwningVal)
                            return;
                        MR.CS.Misc._Free((void *)_UnderlyingPtr);
                        _UnderlyingPtr = null;
                    }
                    public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                    ~Const_B() {Dispose(false);}

                    public ref readonly int bleh => ref _Ref.bleh;

                    /// <summary>
                    /// Generated default constructor.
                    /// </summary>
                    public unsafe Const_B() : this(null, is_owning: true)
                    {
                        _UnderlyingPtr = (_Underlying *)MR.CS.Misc._Alloc(4);
                        System.Runtime.InteropServices.NativeMemory.Fill(_UnderlyingPtr, 4, 0);
                    }

                    /// <summary>
                    /// Generated copy constructor.
                    /// </summary>
                    public unsafe Const_B(Const_B _other) : this(null, is_owning: true)
                    {
                        _UnderlyingPtr = (_Underlying *)MR.CS.Misc._Alloc(4);
                        System.Runtime.InteropServices.NativeMemory.Copy(_other._UnderlyingPtr, _UnderlyingPtr, 4);
                    }
                }

                /// <summary>
                /// Generated from class `MR::DeclOrder::A::B`.
                /// This is the non-const reference to the struct.
                /// </summary>
                public class Mut_B : Const_B
                {
                    /// <summary>
                    /// Get the underlying struct.
                    /// </summary>
                    public unsafe new ref B _Ref => ref *(B *)_UnderlyingPtr;

                    /// <summary>
                    /// Make a copy of a struct. (Even though we initially pass `is_owning: false`, we then use the copy constructor to produce an owning instance.)
                    /// </summary>
                    public unsafe Mut_B(B other) : this(new Const_B((_Underlying *)&other, is_owning: false)) {}

                    internal unsafe Mut_B(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                    public new ref int bleh => ref _Ref.bleh;

                    /// <summary>
                    /// Generated default constructor.
                    /// </summary>
                    public unsafe Mut_B() : this(null, is_owning: true)
                    {
                        _UnderlyingPtr = (_Underlying *)MR.CS.Misc._Alloc(4);
                        System.Runtime.InteropServices.NativeMemory.Fill(_UnderlyingPtr, 4, 0);
                    }

                    /// <summary>
                    /// Generated copy constructor.
                    /// </summary>
                    public unsafe Mut_B(Const_B _other) : this(null, is_owning: true)
                    {
                        _UnderlyingPtr = (_Underlying *)MR.CS.Misc._Alloc(4);
                        System.Runtime.InteropServices.NativeMemory.Copy(_other._UnderlyingPtr, _UnderlyingPtr, 4);
                    }

                    /// <summary>
                    /// Generated copy assignment.
                    /// </summary>
                    public void Assign(Const_B _other) {_Ref = _other._Ref;}

                    /// <summary>
                    /// Generated from method `MR::DeclOrder::A::B::a`.
                    /// </summary>
                    public unsafe MR.CS.DeclOrder.A a()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_DeclOrder_A_B_a", ExactSpelling = true)]
                        extern static MR.CS.DeclOrder.A __MR_DeclOrder_A_B_a(_Underlying *_this);
                        return __MR_DeclOrder_A_B_a(_UnderlyingPtr);
                    }

                    /// <summary>
                    /// Generated from method `MR::DeclOrder::A::B::b`.
                    /// </summary>
                    public unsafe MR.CS.DeclOrder.A.E b()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_DeclOrder_A_B_b", ExactSpelling = true)]
                        extern static MR.CS.DeclOrder.A.E __MR_DeclOrder_A_B_b(_Underlying *_this);
                        return __MR_DeclOrder_A_B_b(_UnderlyingPtr);
                    }
                }

                /// <summary>
                /// Generated from class `MR::DeclOrder::A::B`.
                /// This is the by-value version of the struct.
                /// </summary>
                [System.Runtime.InteropServices.StructLayout(System.Runtime.InteropServices.LayoutKind.Explicit, Size = 4)]
                public struct B
                {
                    /// <summary>
                    /// Copy contents from a wrapper class to this struct.
                    /// </summary>
                    public static implicit operator B(Const_B other) => other._Ref;

                    [System.Runtime.InteropServices.FieldOffset(0)]
                    public int bleh;

                    /// <summary>
                    /// Generated copy constructor.
                    /// </summary>
                    public B(B _other) {this = _other;}

                    /// <summary>
                    /// Generated from method `MR::DeclOrder::A::B::a`.
                    /// </summary>
                    public unsafe MR.CS.DeclOrder.A a()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_DeclOrder_A_B_a", ExactSpelling = true)]
                        extern static MR.CS.DeclOrder.A __MR_DeclOrder_A_B_a(MR.CS.DeclOrder.A.B *_this);
                        fixed (MR.CS.DeclOrder.A.B *__ptr__this = &this)
                        {
                            return __MR_DeclOrder_A_B_a(__ptr__this);
                        }
                    }

                    /// <summary>
                    /// Generated from method `MR::DeclOrder::A::B::b`.
                    /// </summary>
                    public unsafe MR.CS.DeclOrder.A.E b()
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_DeclOrder_A_B_b", ExactSpelling = true)]
                        extern static MR.CS.DeclOrder.A.E __MR_DeclOrder_A_B_b(MR.CS.DeclOrder.A.B *_this);
                        fixed (MR.CS.DeclOrder.A.B *__ptr__this = &this)
                        {
                            return __MR_DeclOrder_A_B_b(__ptr__this);
                        }
                    }
                }

                /// <summary>
                /// This is used as a function parameter when passing `Mut_B` by value with a default argument, since trying to use `?` instead seems to prevent us from taking its address.
                /// Usage:
                /// * Pass an instance of `Mut_B`/`Const_B` to copy it into the function.
                /// * Pass `null` to use the default argument
                /// </summary>
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
                    public _InOpt_B(Const_B new_value) {HasValue = true; Object = new_value._Ref;}
                    public static implicit operator _InOpt_B(Const_B new_value) {return new(new_value);}
                }

                /// <summary>
                /// This is used for optional parameters of class `Mut_B` with default arguments.
                /// This is only used mutable parameters. For const ones we have `_InOptConst_B`.
                /// Usage:
                /// * Pass `null` to use the default argument.
                /// * Pass `new()` to pass no object.
                /// * Pass an instance of `Mut_B`/`Const_B` directly.
                /// * Pass `new(ref ...)` to pass a reference to `B`.
                /// </summary>
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

                /// <summary>
                /// This is used for optional parameters of class `Mut_B` with default arguments.
                /// This is only used const parameters. For non-const ones we have `_InOptMut_B`.
                /// Usage:
                /// * Pass `null` to use the default argument.
                /// * Pass `new()` to pass no object.
                /// * Pass an instance of `Mut_B`/`Const_B` to pass it to the function.
                /// * Pass `new(ref ...)` to pass a reference to `B`.
                /// </summary>
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

            /// <summary>
            /// This is used as a function parameter when passing `Mut_A` by value with a default argument, since trying to use `?` instead seems to prevent us from taking its address.
            /// Usage:
            /// * Pass an instance of `Mut_A`/`Const_A` to copy it into the function.
            /// * Pass `null` to use the default argument
            /// </summary>
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
                public _InOpt_A(Const_A new_value) {HasValue = true; Object = new_value._Ref;}
                public static implicit operator _InOpt_A(Const_A new_value) {return new(new_value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Mut_A` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_A`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Mut_A`/`Const_A` directly.
            /// * Pass `new(ref ...)` to pass a reference to `A`.
            /// </summary>
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

            /// <summary>
            /// This is used for optional parameters of class `Mut_A` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_A`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Mut_A`/`Const_A` to pass it to the function.
            /// * Pass `new(ref ...)` to pass a reference to `A`.
            /// </summary>
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

            /// <summary>
            /// Generated from class `MR::DeclOrder::C<false>`.
            /// This is the const reference to the struct.
            /// </summary>
            public class Const_C_False : MR.CS.Misc.Object<Const_C_False>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                /// <summary>
                /// Get the underlying struct.
                /// </summary>
                public unsafe ref readonly C_False _Ref => ref *(C_False *)_UnderlyingPtr;

                /// <summary>
                /// Make a copy of a struct. (Even though we initially pass `is_owning: false`, we then use the copy constructor to produce an owning instance.)
                /// </summary>
                public unsafe Const_C_False(C_False other) : this(new Const_C_False((_Underlying *)&other, is_owning: false)) {}
                /// <summary>
                /// Convert from a struct by copying it. Note that only `Const_C_False` has this conversion, `Mut_C_False` intentionally doesn't.
                /// </summary>
                public static implicit operator Const_C_False(C_False other) {return new(other);}

                internal unsafe Const_C_False(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    MR.CS.Misc._Free((void *)_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_C_False() {Dispose(false);}

                public ref readonly int bleh => ref _Ref.bleh;

                /// <summary>
                /// Generated default constructor.
                /// </summary>
                public unsafe Const_C_False() : this(null, is_owning: true)
                {
                    _UnderlyingPtr = (_Underlying *)MR.CS.Misc._Alloc(4);
                    System.Runtime.InteropServices.NativeMemory.Fill(_UnderlyingPtr, 4, 0);
                }

                /// <summary>
                /// Generated copy constructor.
                /// </summary>
                public unsafe Const_C_False(Const_C_False _other) : this(null, is_owning: true)
                {
                    _UnderlyingPtr = (_Underlying *)MR.CS.Misc._Alloc(4);
                    System.Runtime.InteropServices.NativeMemory.Copy(_other._UnderlyingPtr, _UnderlyingPtr, 4);
                }
            }

            /// <summary>
            /// Generated from class `MR::DeclOrder::C<false>`.
            /// This is the non-const reference to the struct.
            /// </summary>
            public class Mut_C_False : Const_C_False
            {
                /// <summary>
                /// Get the underlying struct.
                /// </summary>
                public unsafe new ref C_False _Ref => ref *(C_False *)_UnderlyingPtr;

                /// <summary>
                /// Make a copy of a struct. (Even though we initially pass `is_owning: false`, we then use the copy constructor to produce an owning instance.)
                /// </summary>
                public unsafe Mut_C_False(C_False other) : this(new Const_C_False((_Underlying *)&other, is_owning: false)) {}

                internal unsafe Mut_C_False(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                public new ref int bleh => ref _Ref.bleh;

                /// <summary>
                /// Generated default constructor.
                /// </summary>
                public unsafe Mut_C_False() : this(null, is_owning: true)
                {
                    _UnderlyingPtr = (_Underlying *)MR.CS.Misc._Alloc(4);
                    System.Runtime.InteropServices.NativeMemory.Fill(_UnderlyingPtr, 4, 0);
                }

                /// <summary>
                /// Generated copy constructor.
                /// </summary>
                public unsafe Mut_C_False(Const_C_False _other) : this(null, is_owning: true)
                {
                    _UnderlyingPtr = (_Underlying *)MR.CS.Misc._Alloc(4);
                    System.Runtime.InteropServices.NativeMemory.Copy(_other._UnderlyingPtr, _UnderlyingPtr, 4);
                }

                /// <summary>
                /// Generated copy assignment.
                /// </summary>
                public void Assign(Const_C_False _other) {_Ref = _other._Ref;}

                /// <summary>
                /// Generated from method `MR::DeclOrder::C<false>::blah`.
                /// </summary>
                public unsafe MR.CS.DeclOrder.C_True blah()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_DeclOrder_C_false_blah", ExactSpelling = true)]
                    extern static MR.CS.DeclOrder.C_True __MR_DeclOrder_C_false_blah(_Underlying *_this);
                    return __MR_DeclOrder_C_false_blah(_UnderlyingPtr);
                }
            }

            /// <summary>
            /// Generated from class `MR::DeclOrder::C<false>`.
            /// This is the by-value version of the struct.
            /// </summary>
            [System.Runtime.InteropServices.StructLayout(System.Runtime.InteropServices.LayoutKind.Explicit, Size = 4)]
            public struct C_False
            {
                /// <summary>
                /// Copy contents from a wrapper class to this struct.
                /// </summary>
                public static implicit operator C_False(Const_C_False other) => other._Ref;

                [System.Runtime.InteropServices.FieldOffset(0)]
                public int bleh;

                /// <summary>
                /// Generated copy constructor.
                /// </summary>
                public C_False(C_False _other) {this = _other;}

                /// <summary>
                /// Generated from method `MR::DeclOrder::C<false>::blah`.
                /// </summary>
                public unsafe MR.CS.DeclOrder.C_True blah()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_DeclOrder_C_false_blah", ExactSpelling = true)]
                    extern static MR.CS.DeclOrder.C_True __MR_DeclOrder_C_false_blah(MR.CS.DeclOrder.C_False *_this);
                    fixed (MR.CS.DeclOrder.C_False *__ptr__this = &this)
                    {
                        return __MR_DeclOrder_C_false_blah(__ptr__this);
                    }
                }
            }

            /// <summary>
            /// This is used as a function parameter when passing `Mut_C_False` by value with a default argument, since trying to use `?` instead seems to prevent us from taking its address.
            /// Usage:
            /// * Pass an instance of `Mut_C_False`/`Const_C_False` to copy it into the function.
            /// * Pass `null` to use the default argument
            /// </summary>
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
                public _InOpt_C_False(Const_C_False new_value) {HasValue = true; Object = new_value._Ref;}
                public static implicit operator _InOpt_C_False(Const_C_False new_value) {return new(new_value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Mut_C_False` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_C_False`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Mut_C_False`/`Const_C_False` directly.
            /// * Pass `new(ref ...)` to pass a reference to `C_False`.
            /// </summary>
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

            /// <summary>
            /// This is used for optional parameters of class `Mut_C_False` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_C_False`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Mut_C_False`/`Const_C_False` to pass it to the function.
            /// * Pass `new(ref ...)` to pass a reference to `C_False`.
            /// </summary>
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

            /// <summary>
            /// Generated from class `MR::DeclOrder::C<true>`.
            /// This is the const reference to the struct.
            /// </summary>
            public class Const_C_True : MR.CS.Misc.Object<Const_C_True>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                /// <summary>
                /// Get the underlying struct.
                /// </summary>
                public unsafe ref readonly C_True _Ref => ref *(C_True *)_UnderlyingPtr;

                /// <summary>
                /// Make a copy of a struct. (Even though we initially pass `is_owning: false`, we then use the copy constructor to produce an owning instance.)
                /// </summary>
                public unsafe Const_C_True(C_True other) : this(new Const_C_True((_Underlying *)&other, is_owning: false)) {}
                /// <summary>
                /// Convert from a struct by copying it. Note that only `Const_C_True` has this conversion, `Mut_C_True` intentionally doesn't.
                /// </summary>
                public static implicit operator Const_C_True(C_True other) {return new(other);}

                internal unsafe Const_C_True(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    MR.CS.Misc._Free((void *)_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_C_True() {Dispose(false);}

                public ref readonly int bleh => ref _Ref.bleh;

                /// <summary>
                /// Generated default constructor.
                /// </summary>
                public unsafe Const_C_True() : this(null, is_owning: true)
                {
                    _UnderlyingPtr = (_Underlying *)MR.CS.Misc._Alloc(4);
                    System.Runtime.InteropServices.NativeMemory.Fill(_UnderlyingPtr, 4, 0);
                }

                /// <summary>
                /// Generated copy constructor.
                /// </summary>
                public unsafe Const_C_True(Const_C_True _other) : this(null, is_owning: true)
                {
                    _UnderlyingPtr = (_Underlying *)MR.CS.Misc._Alloc(4);
                    System.Runtime.InteropServices.NativeMemory.Copy(_other._UnderlyingPtr, _UnderlyingPtr, 4);
                }
            }

            /// <summary>
            /// Generated from class `MR::DeclOrder::C<true>`.
            /// This is the non-const reference to the struct.
            /// </summary>
            public class Mut_C_True : Const_C_True
            {
                /// <summary>
                /// Get the underlying struct.
                /// </summary>
                public unsafe new ref C_True _Ref => ref *(C_True *)_UnderlyingPtr;

                /// <summary>
                /// Make a copy of a struct. (Even though we initially pass `is_owning: false`, we then use the copy constructor to produce an owning instance.)
                /// </summary>
                public unsafe Mut_C_True(C_True other) : this(new Const_C_True((_Underlying *)&other, is_owning: false)) {}

                internal unsafe Mut_C_True(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                public new ref int bleh => ref _Ref.bleh;

                /// <summary>
                /// Generated default constructor.
                /// </summary>
                public unsafe Mut_C_True() : this(null, is_owning: true)
                {
                    _UnderlyingPtr = (_Underlying *)MR.CS.Misc._Alloc(4);
                    System.Runtime.InteropServices.NativeMemory.Fill(_UnderlyingPtr, 4, 0);
                }

                /// <summary>
                /// Generated copy constructor.
                /// </summary>
                public unsafe Mut_C_True(Const_C_True _other) : this(null, is_owning: true)
                {
                    _UnderlyingPtr = (_Underlying *)MR.CS.Misc._Alloc(4);
                    System.Runtime.InteropServices.NativeMemory.Copy(_other._UnderlyingPtr, _UnderlyingPtr, 4);
                }

                /// <summary>
                /// Generated copy assignment.
                /// </summary>
                public void Assign(Const_C_True _other) {_Ref = _other._Ref;}

                /// <summary>
                /// Generated from method `MR::DeclOrder::C<true>::blah`.
                /// </summary>
                public unsafe MR.CS.DeclOrder.C_False blah()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_DeclOrder_C_true_blah", ExactSpelling = true)]
                    extern static MR.CS.DeclOrder.C_False __MR_DeclOrder_C_true_blah(_Underlying *_this);
                    return __MR_DeclOrder_C_true_blah(_UnderlyingPtr);
                }
            }

            /// <summary>
            /// Generated from class `MR::DeclOrder::C<true>`.
            /// This is the by-value version of the struct.
            /// </summary>
            [System.Runtime.InteropServices.StructLayout(System.Runtime.InteropServices.LayoutKind.Explicit, Size = 4)]
            public struct C_True
            {
                /// <summary>
                /// Copy contents from a wrapper class to this struct.
                /// </summary>
                public static implicit operator C_True(Const_C_True other) => other._Ref;

                [System.Runtime.InteropServices.FieldOffset(0)]
                public int bleh;

                /// <summary>
                /// Generated copy constructor.
                /// </summary>
                public C_True(C_True _other) {this = _other;}

                /// <summary>
                /// Generated from method `MR::DeclOrder::C<true>::blah`.
                /// </summary>
                public unsafe MR.CS.DeclOrder.C_False blah()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_DeclOrder_C_true_blah", ExactSpelling = true)]
                    extern static MR.CS.DeclOrder.C_False __MR_DeclOrder_C_true_blah(MR.CS.DeclOrder.C_True *_this);
                    fixed (MR.CS.DeclOrder.C_True *__ptr__this = &this)
                    {
                        return __MR_DeclOrder_C_true_blah(__ptr__this);
                    }
                }
            }

            /// <summary>
            /// This is used as a function parameter when passing `Mut_C_True` by value with a default argument, since trying to use `?` instead seems to prevent us from taking its address.
            /// Usage:
            /// * Pass an instance of `Mut_C_True`/`Const_C_True` to copy it into the function.
            /// * Pass `null` to use the default argument
            /// </summary>
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
                public _InOpt_C_True(Const_C_True new_value) {HasValue = true; Object = new_value._Ref;}
                public static implicit operator _InOpt_C_True(Const_C_True new_value) {return new(new_value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Mut_C_True` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_C_True`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Mut_C_True`/`Const_C_True` directly.
            /// * Pass `new(ref ...)` to pass a reference to `C_True`.
            /// </summary>
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

            /// <summary>
            /// This is used for optional parameters of class `Mut_C_True` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_C_True`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Mut_C_True`/`Const_C_True` to pass it to the function.
            /// * Pass `new(ref ...)` to pass a reference to `C_True`.
            /// </summary>
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
