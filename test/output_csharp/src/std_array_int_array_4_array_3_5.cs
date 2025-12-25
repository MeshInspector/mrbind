public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// A fixed-size array of `int[3][4]` of size 5.
            /// This is the const reference to the struct.
            public class Const_Array_IntArray4Array3_5 : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                /// Get the underlying struct.
                public unsafe ref readonly Array_IntArray4Array3_5 UnderlyingStruct => ref *(Array_IntArray4Array3_5 *)_UnderlyingPtr;
                /// Make a copy of a struct. (Even though we initially pass `is_owning: false`, we then use the copy constructor to produce an owning instance.)
                public unsafe Const_Array_IntArray4Array3_5(Array_IntArray4Array3_5 other) : this(new Const_Array_IntArray4Array3_5((_Underlying *)&other, is_owning: false)) {}

                internal unsafe Const_Array_IntArray4Array3_5(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_array_int_array_4_array_3_5_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_array_int_array_4_array_3_5_Destroy(_Underlying *_this);
                    __MR_C_std_array_int_array_4_array_3_5_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Array_IntArray4Array3_5() {Dispose(false);}

                public ref readonly MR.CS.ArrayInt5_3_4 Elems => ref UnderlyingStruct.Elems;

                /// Generated default constructor.
                public unsafe Const_Array_IntArray4Array3_5() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_Alloc", ExactSpelling = true)]
                    extern static _Underlying *__MR_C_Alloc(nuint size);
                    _UnderlyingPtr = __MR_C_Alloc(240);
                    for (nuint _i = 0; _i < 240; _i++) ((byte *)_UnderlyingPtr)[_i] = 0;
                }

                /// Generated copy constructor.
                public unsafe Const_Array_IntArray4Array3_5(Const_Array_IntArray4Array3_5 _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_Alloc", ExactSpelling = true)]
                    extern static _Underlying *__MR_C_Alloc(nuint size);
                    _UnderlyingPtr = __MR_C_Alloc(240);
                    for (nuint _i = 0; _i < 240; _i++) ((byte *)_UnderlyingPtr)[_i] = ((byte *)_other._UnderlyingPtr)[_i];
                }
            }

            /// A fixed-size array of `int[3][4]` of size 5.
            /// This is the non-const reference to the struct.
            public class Mut_Array_IntArray4Array3_5 : Const_Array_IntArray4Array3_5
            {
                /// Get the underlying struct.
                public unsafe new ref Array_IntArray4Array3_5 UnderlyingStruct => ref *(Array_IntArray4Array3_5 *)_UnderlyingPtr;
                /// Make a copy of a struct. (Even though we initially pass `is_owning: false`, we then use the copy constructor to produce an owning instance.)
                public unsafe Mut_Array_IntArray4Array3_5(Array_IntArray4Array3_5 other) : this(new Const_Array_IntArray4Array3_5((_Underlying *)&other, is_owning: false)) {}

                internal unsafe Mut_Array_IntArray4Array3_5(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                public new ref MR.CS.ArrayInt5_3_4 Elems => ref UnderlyingStruct.Elems;

                /// Generated default constructor.
                public unsafe Mut_Array_IntArray4Array3_5() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_Alloc", ExactSpelling = true)]
                    extern static _Underlying *__MR_C_Alloc(nuint size);
                    _UnderlyingPtr = __MR_C_Alloc(240);
                    for (nuint _i = 0; _i < 240; _i++) ((byte *)_UnderlyingPtr)[_i] = 0;
                }

                /// Generated copy constructor.
                public unsafe Mut_Array_IntArray4Array3_5(Const_Array_IntArray4Array3_5 _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_Alloc", ExactSpelling = true)]
                    extern static _Underlying *__MR_C_Alloc(nuint size);
                    _UnderlyingPtr = __MR_C_Alloc(240);
                    for (nuint _i = 0; _i < 240; _i++) ((byte *)_UnderlyingPtr)[_i] = ((byte *)_other._UnderlyingPtr)[_i];
                }
            }

            /// A fixed-size array of `int[3][4]` of size 5.
            /// This is the by-value version of the struct.
            [System.Runtime.InteropServices.StructLayout(System.Runtime.InteropServices.LayoutKind.Explicit, Size = 240)]
            public struct Array_IntArray4Array3_5
            {
                /// Copy contents from a wrapper class to this struct.
                public static implicit operator Array_IntArray4Array3_5(Const_Array_IntArray4Array3_5 other) => other.UnderlyingStruct;

                [System.Runtime.InteropServices.FieldOffset(0)]
                public MR.CS.ArrayInt5_3_4 Elems;

                /// Generated copy constructor.
                public Array_IntArray4Array3_5(Array_IntArray4Array3_5 _other) {this = _other;}
            }

            /// This is used as a function parameter when passing `Mut_Array_IntArray4Array3_5` by value with a default argument, since trying to use `?` instead seems to prevent us from taking its address.
            /// Usage:
            /// * Pass an instance of `Mut_Array_IntArray4Array3_5`/`Const_Array_IntArray4Array3_5` to copy it into the function.
            /// * Pass `null` to use the default argument
            public readonly ref struct _InOpt_Array_IntArray4Array3_5
            {
                public readonly bool HasValue;
                internal readonly Array_IntArray4Array3_5 Object;
                public Array_IntArray4Array3_5 Value{
                    get
                    {
                        System.Diagnostics.Trace.Assert(HasValue);
                        return Object;
                    }
                }

                public _InOpt_Array_IntArray4Array3_5() {HasValue = false;}
                public _InOpt_Array_IntArray4Array3_5(Array_IntArray4Array3_5 new_value) {HasValue = true; Object = new_value;}
                public static implicit operator _InOpt_Array_IntArray4Array3_5(Array_IntArray4Array3_5 new_value) {return new(new_value);}
                public _InOpt_Array_IntArray4Array3_5(Const_Array_IntArray4Array3_5 new_value) {HasValue = true; Object = new_value.UnderlyingStruct;}
                public static implicit operator _InOpt_Array_IntArray4Array3_5(Const_Array_IntArray4Array3_5 new_value) {return new(new_value);}
            }

            /// This is used for optional parameters of class `Mut_Array_IntArray4Array3_5` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Array_IntArray4Array3_5`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Mut_Array_IntArray4Array3_5`/`Const_Array_IntArray4Array3_5` directly.
            /// * Pass `new(ref ...)` to pass a reference to `Array_IntArray4Array3_5`.
            public class _InOptMut_Array_IntArray4Array3_5
            {
                public Mut_Array_IntArray4Array3_5? Opt;

                public _InOptMut_Array_IntArray4Array3_5() {}
                public _InOptMut_Array_IntArray4Array3_5(Mut_Array_IntArray4Array3_5 value) {Opt = value;}
                public static implicit operator _InOptMut_Array_IntArray4Array3_5(Mut_Array_IntArray4Array3_5 value) {return new(value);}
                public unsafe _InOptMut_Array_IntArray4Array3_5(ref Array_IntArray4Array3_5 value)
                {
                    fixed (Array_IntArray4Array3_5 *value_ptr = &value)
                    {
                        Opt = new((Const_Array_IntArray4Array3_5._Underlying *)value_ptr, is_owning: false);
                    }
                }
            }

            /// This is used for optional parameters of class `Mut_Array_IntArray4Array3_5` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Array_IntArray4Array3_5`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Mut_Array_IntArray4Array3_5`/`Const_Array_IntArray4Array3_5` to pass it to the function.
            /// * Pass `new(ref ...)` to pass a reference to `Array_IntArray4Array3_5`.
            public class _InOptConst_Array_IntArray4Array3_5
            {
                public Const_Array_IntArray4Array3_5? Opt;

                public _InOptConst_Array_IntArray4Array3_5() {}
                public _InOptConst_Array_IntArray4Array3_5(Const_Array_IntArray4Array3_5 value) {Opt = value;}
                public static implicit operator _InOptConst_Array_IntArray4Array3_5(Const_Array_IntArray4Array3_5 value) {return new(value);}
                public unsafe _InOptConst_Array_IntArray4Array3_5(ref readonly Array_IntArray4Array3_5 value)
                {
                    fixed (Array_IntArray4Array3_5 *value_ptr = &value)
                    {
                        Opt = new((Const_Array_IntArray4Array3_5._Underlying *)value_ptr, is_owning: false);
                    }
                }
            }
        }
    }
}
