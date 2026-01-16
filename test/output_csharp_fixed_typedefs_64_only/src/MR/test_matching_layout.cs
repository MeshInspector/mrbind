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
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                /// Get the underlying struct.
                public unsafe ref readonly A _Ref => ref *(A *)_UnderlyingPtr;
                /// Make a copy of a struct. (Even though we initially pass `is_owning: false`, we then use the copy constructor to produce an owning instance.)
                public unsafe Const_A(A other) : this(new Const_A((_Underlying *)&other, is_owning: false)) {}
                /// Convert from a struct by copying it. Note that only `Const_A` has this conversion, `Mut_A` intentionally doesn't.
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

                // first
                public ref readonly int a => ref _Ref.a;

                // second
                public ref readonly short b => ref _Ref.b;

                // third
                public ref readonly float c => ref _Ref.c;

                public ref readonly long ll => ref _Ref.ll;

                public ref readonly MR.CS.ArrayInt3 arr => ref _Ref.arr;

                public ref readonly MR.CS.ArrayInt4_5 arr2d => ref _Ref.arr2d;

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
                    _UnderlyingPtr = (_Underlying *)MR.CS.Misc._Alloc(120);
                    System.Runtime.InteropServices.NativeMemory.Fill(_UnderlyingPtr, 120, 0);
                }

                /// Generated copy constructor.
                public unsafe Const_A(Const_A _other) : this(null, is_owning: true)
                {
                    _UnderlyingPtr = (_Underlying *)MR.CS.Misc._Alloc(120);
                    System.Runtime.InteropServices.NativeMemory.Copy(_other._UnderlyingPtr, _UnderlyingPtr, 120);
                }
            }

            /// Generated from class `MR::MatchingLayout::A`.
            /// This is the non-const reference to the struct.
            public class Mut_A : Const_A
            {
                /// Get the underlying struct.
                public unsafe new ref A _Ref => ref *(A *)_UnderlyingPtr;
                /// Make a copy of a struct. (Even though we initially pass `is_owning: false`, we then use the copy constructor to produce an owning instance.)
                public unsafe Mut_A(A other) : this(new Const_A((_Underlying *)&other, is_owning: false)) {}

                internal unsafe Mut_A(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                // first
                public new ref int a => ref _Ref.a;

                // second
                public new ref short b => ref _Ref.b;

                // third
                public new ref float c => ref _Ref.c;

                public new ref long ll => ref _Ref.ll;

                public new ref MR.CS.ArrayInt3 arr => ref _Ref.arr;

                public new ref MR.CS.ArrayInt4_5 arr2d => ref _Ref.arr2d;

                /// Generated default constructor.
                public unsafe Mut_A() : this(null, is_owning: true)
                {
                    _UnderlyingPtr = (_Underlying *)MR.CS.Misc._Alloc(120);
                    System.Runtime.InteropServices.NativeMemory.Fill(_UnderlyingPtr, 120, 0);
                }

                /// Generated copy constructor.
                public unsafe Mut_A(Const_A _other) : this(null, is_owning: true)
                {
                    _UnderlyingPtr = (_Underlying *)MR.CS.Misc._Alloc(120);
                    System.Runtime.InteropServices.NativeMemory.Copy(_other._UnderlyingPtr, _UnderlyingPtr, 120);
                }

                /// Generated copy assignment.
                public void Assign(Const_A _other) {_Ref = _other._Ref;}
            }

            /// Generated from class `MR::MatchingLayout::A`.
            /// This is the by-value version of the struct.
            [System.Runtime.InteropServices.StructLayout(System.Runtime.InteropServices.LayoutKind.Explicit, Size = 120)]
            public struct A
            {
                /// Copy contents from a wrapper class to this struct.
                public static implicit operator A(Const_A other) => other._Ref;

                // first
                [System.Runtime.InteropServices.FieldOffset(0)]
                public int a;

                // second
                [System.Runtime.InteropServices.FieldOffset(4)]
                public short b;

                // third
                [System.Runtime.InteropServices.FieldOffset(8)]
                public float c;

                [System.Runtime.InteropServices.FieldOffset(16)]
                public long ll;

                [System.Runtime.InteropServices.FieldOffset(24)]
                public MR.CS.ArrayInt3 arr;

                [System.Runtime.InteropServices.FieldOffset(36)]
                public MR.CS.ArrayInt4_5 arr2d;

                /// Generated copy constructor.
                public A(A _other) {this = _other;}
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
                public _InOpt_A(Const_A new_value) {HasValue = true; Object = new_value._Ref;}
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
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                /// Get the underlying struct.
                public unsafe ref readonly B _Ref => ref *(B *)_UnderlyingPtr;
                /// Make a copy of a struct. (Even though we initially pass `is_owning: false`, we then use the copy constructor to produce an owning instance.)
                public unsafe Const_B(B other) : this(new Const_B((_Underlying *)&other, is_owning: false)) {}
                /// Convert from a struct by copying it. Note that only `Const_B` has this conversion, `Mut_B` intentionally doesn't.
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

                public ref readonly short x => ref _Ref.x;

                public ref readonly MR.CS.MatchingLayout.A a => ref _Ref.a;

                public ref readonly byte y => ref _Ref.y;

                /// Generated copy constructor.
                public unsafe Const_B(Const_B _other) : this(null, is_owning: true)
                {
                    _UnderlyingPtr = (_Underlying *)MR.CS.Misc._Alloc(136);
                    System.Runtime.InteropServices.NativeMemory.Copy(_other._UnderlyingPtr, _UnderlyingPtr, 136);
                }

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_B() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_MatchingLayout_B_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.MatchingLayout.B __MR_MatchingLayout_B_DefaultConstruct();
                    _UnderlyingPtr = (_Underlying *)MR.CS.Misc._Alloc(136);
                    MR.CS.MatchingLayout.B _ctor_result = __MR_MatchingLayout_B_DefaultConstruct();
                    System.Runtime.InteropServices.NativeMemory.Copy(&_ctor_result, _UnderlyingPtr, 136);
                }
            }

            /// Generated from class `MR::MatchingLayout::B`.
            /// This is the non-const reference to the struct.
            public class Mut_B : Const_B
            {
                /// Get the underlying struct.
                public unsafe new ref B _Ref => ref *(B *)_UnderlyingPtr;
                /// Make a copy of a struct. (Even though we initially pass `is_owning: false`, we then use the copy constructor to produce an owning instance.)
                public unsafe Mut_B(B other) : this(new Const_B((_Underlying *)&other, is_owning: false)) {}

                internal unsafe Mut_B(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                public new ref short x => ref _Ref.x;

                public new ref MR.CS.MatchingLayout.A a => ref _Ref.a;

                public new ref byte y => ref _Ref.y;

                /// Generated copy constructor.
                public unsafe Mut_B(Const_B _other) : this(null, is_owning: true)
                {
                    _UnderlyingPtr = (_Underlying *)MR.CS.Misc._Alloc(136);
                    System.Runtime.InteropServices.NativeMemory.Copy(_other._UnderlyingPtr, _UnderlyingPtr, 136);
                }

                /// Generated copy assignment.
                public void Assign(Const_B _other) {_Ref = _other._Ref;}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Mut_B() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_MatchingLayout_B_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.MatchingLayout.B __MR_MatchingLayout_B_DefaultConstruct();
                    _UnderlyingPtr = (_Underlying *)MR.CS.Misc._Alloc(136);
                    MR.CS.MatchingLayout.B _ctor_result = __MR_MatchingLayout_B_DefaultConstruct();
                    System.Runtime.InteropServices.NativeMemory.Copy(&_ctor_result, _UnderlyingPtr, 136);
                }
            }

            /// Generated from class `MR::MatchingLayout::B`.
            /// This is the by-value version of the struct.
            [System.Runtime.InteropServices.StructLayout(System.Runtime.InteropServices.LayoutKind.Explicit, Size = 136)]
            public struct B
            {
                /// Copy contents from a wrapper class to this struct.
                public static implicit operator B(Const_B other) => other._Ref;

                [System.Runtime.InteropServices.FieldOffset(0)]
                public short x;

                [System.Runtime.InteropServices.FieldOffset(8)]
                public MR.CS.MatchingLayout.A a;

                [System.Runtime.InteropServices.FieldOffset(128)]
                public byte y;

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
                public _InOpt_B(Const_B new_value) {HasValue = true; Object = new_value._Ref;}
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
            public static MR.CS.MatchingLayout.B foo()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_MatchingLayout_foo", ExactSpelling = true)]
                extern static MR.CS.MatchingLayout.B __MR_MatchingLayout_foo();
                return __MR_MatchingLayout_foo();
            }

            /// Generated from function `MR::MatchingLayout::bar`.
            public static void bar(MR.CS.MatchingLayout.B _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_MatchingLayout_bar", ExactSpelling = true)]
                extern static void __MR_MatchingLayout_bar(MR.CS.MatchingLayout.B _1);
                __MR_MatchingLayout_bar(_1);
            }

            /// Generated from function `MR::MatchingLayout::baz`.
            /// Parameter `_1` defaults to `MR::MatchingLayout::B{}`.
            public static unsafe void baz(MR.CS.MatchingLayout._InOpt_B _1 = default)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_MatchingLayout_baz", ExactSpelling = true)]
                extern static void __MR_MatchingLayout_baz(MR.CS.MatchingLayout.B *_1);
                __MR_MatchingLayout_baz(_1.HasValue ? &_1.Object : null);
            }

            /// Generated from function `MR::MatchingLayout::bleh`.
            public static unsafe MR.CS.Misc.Ref<MR.CS.MatchingLayout.B>? bleh(MR.CS.Misc.InOut<MR.CS.MatchingLayout.B>? _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_MatchingLayout_bleh", ExactSpelling = true)]
                extern static MR.CS.MatchingLayout.B *__MR_MatchingLayout_bleh(MR.CS.MatchingLayout.B *_1);
                MR.CS.MatchingLayout.B __value__1 = _1 is not null ? _1.Value : default(MR.CS.MatchingLayout.B);
                var __ret = __MR_MatchingLayout_bleh(_1 is not null ? &__value__1 : null);
                if (_1 is not null) _1.Value = __value__1;
                return __ret is not null ? new MR.CS.Misc.Ref<MR.CS.MatchingLayout.B>(__ret) : null;
            }
        }
    }
}
