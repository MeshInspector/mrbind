public static partial class MR
{
    public static partial class CS
    {
        public static partial class MatchingLayout
        {
            /// Generated from class `MR::MatchingLayout::A`.
            /// This is the const reference to the struct.
            public class Const_A : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                /// Get the underlying struct.
                public unsafe ref readonly A UnderlyingStruct => ref *(A *)_UnderlyingPtr;

                internal unsafe Const_A(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_MatchingLayout_A_Destroy", ExactSpelling = true)]
                    extern static void __MR_MatchingLayout_A_Destroy(_Underlying *_this);
                    __MR_MatchingLayout_A_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_A() {Dispose(false);}

                // first
                public ref readonly int A_ => ref UnderlyingStruct.A_;

                // second
                public ref readonly short B => ref UnderlyingStruct.B;

                // third
                public ref readonly float C => ref UnderlyingStruct.C;

                public ref readonly long Ll => ref UnderlyingStruct.Ll;

                public ref readonly MR.CS.ArrayInt3 Arr => ref UnderlyingStruct.Arr;

                public ref readonly MR.CS.ArrayInt4_5 Arr2d => ref UnderlyingStruct.Arr2d;

                // Having static fields is not an error! Those get their normal getters and setters.
                public static unsafe ref int X
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_MatchingLayout_A_GetMutable_x", ExactSpelling = true)]
                        extern static int *__MR_MatchingLayout_A_GetMutable_x();
                        return ref *__MR_MatchingLayout_A_GetMutable_x();
                    }
                }

                /// Generated default constructor.
                public unsafe Const_A() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_Alloc", ExactSpelling = true)]
                    extern static _Underlying *__MR_C_Alloc(nuint size);
                    _UnderlyingPtr = __MR_C_Alloc(120);
                    System.Runtime.InteropServices.NativeMemory.Fill(_UnderlyingPtr, 120, 0);
                }

                /// Generated copy constructor.
                public unsafe Const_A(Const_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_Alloc", ExactSpelling = true)]
                    extern static _Underlying *__MR_C_Alloc(nuint size);
                    _UnderlyingPtr = __MR_C_Alloc(120);
                    System.Runtime.InteropServices.NativeMemory.Copy(_other._UnderlyingPtr, _UnderlyingPtr, 120);
                }
            }

            /// Generated from class `MR::MatchingLayout::A`.
            /// This is the non-const reference to the struct.
            public class Mut_A : Const_A
            {
                /// Get the underlying struct.
                public unsafe new ref A UnderlyingStruct => ref *(A *)_UnderlyingPtr;

                internal unsafe Mut_A(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                // first
                public new ref int A_ => ref UnderlyingStruct.A_;

                // second
                public new ref short B => ref UnderlyingStruct.B;

                // third
                public new ref float C => ref UnderlyingStruct.C;

                public new ref long Ll => ref UnderlyingStruct.Ll;

                public new ref MR.CS.ArrayInt3 Arr => ref UnderlyingStruct.Arr;

                public new ref MR.CS.ArrayInt4_5 Arr2d => ref UnderlyingStruct.Arr2d;

                /// Generated default constructor.
                public unsafe Mut_A() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_Alloc", ExactSpelling = true)]
                    extern static _Underlying *__MR_C_Alloc(nuint size);
                    _UnderlyingPtr = __MR_C_Alloc(120);
                    System.Runtime.InteropServices.NativeMemory.Fill(_UnderlyingPtr, 120, 0);
                }

                /// Generated copy constructor.
                public unsafe Mut_A(Const_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_Alloc", ExactSpelling = true)]
                    extern static _Underlying *__MR_C_Alloc(nuint size);
                    _UnderlyingPtr = __MR_C_Alloc(120);
                    System.Runtime.InteropServices.NativeMemory.Copy(_other._UnderlyingPtr, _UnderlyingPtr, 120);
                }
            }

            /// Generated from class `MR::MatchingLayout::A`.
            /// This is the by-value version of the struct.
            [System.Runtime.InteropServices.StructLayout(System.Runtime.InteropServices.LayoutKind.Explicit, Size = 120)]
            public ref struct A
            {
                /// Copy contents from a wrapper class to this struct.
                public static implicit operator A(Const_A other) => other.UnderlyingStruct;
                /// Copy this struct into a wrapper class. (Even though we initially pass `is_owning: false`, we then use the copy constructor to produce an owning instance.)
                public unsafe static implicit operator Mut_A(A other) => new(new Mut_A((Mut_A._Underlying *)&other, is_owning: false));

                // first
                [System.Runtime.InteropServices.FieldOffset(0)]
                public int A_;

                // second
                [System.Runtime.InteropServices.FieldOffset(4)]
                public short B;

                // third
                [System.Runtime.InteropServices.FieldOffset(8)]
                public float C;

                [System.Runtime.InteropServices.FieldOffset(16)]
                public long Ll;

                [System.Runtime.InteropServices.FieldOffset(24)]
                public MR.CS.ArrayInt3 Arr;

                [System.Runtime.InteropServices.FieldOffset(36)]
                public MR.CS.ArrayInt4_5 Arr2d;

                /// Generated copy constructor.
                public A(A _other) {this = _other;}
            }

            /// This is used as a function parameter when passing `Mut_A` by value with a default argument, since `?` doesn't seem to work with `ref struct`.
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

            /// Generated from class `MR::MatchingLayout::B`.
            /// This is the const reference to the struct.
            public class Const_B : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                /// Get the underlying struct.
                public unsafe ref readonly B UnderlyingStruct => ref *(B *)_UnderlyingPtr;

                internal unsafe Const_B(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_MatchingLayout_B_Destroy", ExactSpelling = true)]
                    extern static void __MR_MatchingLayout_B_Destroy(_Underlying *_this);
                    __MR_MatchingLayout_B_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_B() {Dispose(false);}

                public ref readonly short X => ref UnderlyingStruct.X;

                public ref readonly MR.CS.MatchingLayout.A A => ref UnderlyingStruct.A;

                public ref readonly byte Y => ref UnderlyingStruct.Y;

                /// Generated copy constructor.
                public unsafe Const_B(Const_B _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_Alloc", ExactSpelling = true)]
                    extern static _Underlying *__MR_C_Alloc(nuint size);
                    _UnderlyingPtr = __MR_C_Alloc(136);
                    System.Runtime.InteropServices.NativeMemory.Copy(_other._UnderlyingPtr, _UnderlyingPtr, 136);
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_B() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_MatchingLayout_B_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.MatchingLayout.B __MR_MatchingLayout_B_DefaultConstruct();
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_Alloc", ExactSpelling = true)]
                    extern static _Underlying *__MR_C_Alloc(nuint size);
                    _UnderlyingPtr = __MR_C_Alloc(136);
                    MR.CS.MatchingLayout.B _ctor_result = __MR_MatchingLayout_B_DefaultConstruct();
                    System.Runtime.InteropServices.NativeMemory.Copy(&_ctor_result, _UnderlyingPtr, 136);
                }
            }

            /// Generated from class `MR::MatchingLayout::B`.
            /// This is the non-const reference to the struct.
            public class Mut_B : Const_B
            {
                /// Get the underlying struct.
                public unsafe new ref B UnderlyingStruct => ref *(B *)_UnderlyingPtr;

                internal unsafe Mut_B(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                public new ref short X => ref UnderlyingStruct.X;

                public new ref MR.CS.MatchingLayout.A A => ref UnderlyingStruct.A;

                public new ref byte Y => ref UnderlyingStruct.Y;

                /// Generated copy constructor.
                public unsafe Mut_B(Const_B _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_Alloc", ExactSpelling = true)]
                    extern static _Underlying *__MR_C_Alloc(nuint size);
                    _UnderlyingPtr = __MR_C_Alloc(136);
                    System.Runtime.InteropServices.NativeMemory.Copy(_other._UnderlyingPtr, _UnderlyingPtr, 136);
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe Mut_B() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_MatchingLayout_B_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.MatchingLayout.B __MR_MatchingLayout_B_DefaultConstruct();
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_Alloc", ExactSpelling = true)]
                    extern static _Underlying *__MR_C_Alloc(nuint size);
                    _UnderlyingPtr = __MR_C_Alloc(136);
                    MR.CS.MatchingLayout.B _ctor_result = __MR_MatchingLayout_B_DefaultConstruct();
                    System.Runtime.InteropServices.NativeMemory.Copy(&_ctor_result, _UnderlyingPtr, 136);
                }
            }

            /// Generated from class `MR::MatchingLayout::B`.
            /// This is the by-value version of the struct.
            [System.Runtime.InteropServices.StructLayout(System.Runtime.InteropServices.LayoutKind.Explicit, Size = 136)]
            public ref struct B
            {
                /// Copy contents from a wrapper class to this struct.
                public static implicit operator B(Const_B other) => other.UnderlyingStruct;
                /// Copy this struct into a wrapper class. (Even though we initially pass `is_owning: false`, we then use the copy constructor to produce an owning instance.)
                public unsafe static implicit operator Mut_B(B other) => new(new Mut_B((Mut_B._Underlying *)&other, is_owning: false));

                [System.Runtime.InteropServices.FieldOffset(0)]
                public short X;

                [System.Runtime.InteropServices.FieldOffset(8)]
                public MR.CS.MatchingLayout.A A;

                [System.Runtime.InteropServices.FieldOffset(128)]
                public byte Y;

                /// Generated copy constructor.
                public B(B _other) {this = _other;}

                /// Constructs an empty (default-constructed) instance.
                public unsafe B()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_MatchingLayout_B_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.MatchingLayout.B __MR_MatchingLayout_B_DefaultConstruct();
                    this = __MR_MatchingLayout_B_DefaultConstruct();
                }
            }

            /// This is used as a function parameter when passing `Mut_B` by value with a default argument, since `?` doesn't seem to work with `ref struct`.
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

            /// Generated from function `MR::MatchingLayout::foo`.
            public static MR.CS.MatchingLayout.B Foo()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_MatchingLayout_foo", ExactSpelling = true)]
                extern static MR.CS.MatchingLayout.B __MR_MatchingLayout_foo();
                return __MR_MatchingLayout_foo();
            }

            /// Generated from function `MR::MatchingLayout::bar`.
            public static void Bar(MR.CS.MatchingLayout.B _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_MatchingLayout_bar", ExactSpelling = true)]
                extern static void __MR_MatchingLayout_bar(MR.CS.MatchingLayout.B _1);
                __MR_MatchingLayout_bar(_1);
            }

            /// Generated from function `MR::MatchingLayout::baz`.
            /// Parameter `_1` defaults to `MR::MatchingLayout::B{}`.
            public static unsafe void Baz(MR.CS.MatchingLayout._InOpt_B _1 = default)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_MatchingLayout_baz", ExactSpelling = true)]
                extern static void __MR_MatchingLayout_baz(MR.CS.MatchingLayout.B *_1);
                __MR_MatchingLayout_baz(_1.HasValue ? &_1.Object : null);
            }

            /// Generated from function `MR::MatchingLayout::bleh`.
            public static unsafe MR.CS.MatchingLayout.Mut_B? Bleh(MR.CS.MatchingLayout.Mut_B? _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_MatchingLayout_bleh", ExactSpelling = true)]
                extern static MR.CS.MatchingLayout.Mut_B._Underlying *__MR_MatchingLayout_bleh(MR.CS.MatchingLayout.Mut_B._Underlying *_1);
                var __ret = __MR_MatchingLayout_bleh(_1 is not null ? _1._UnderlyingPtr : null);
                return __ret is not null ? new MR.CS.MatchingLayout.Mut_B(__ret, is_owning: false) : null;
            }
        }
    }
}
