public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// A fixed-size array of `int` of size 43.
            /// This is the const reference to the struct.
            public class Const_Array_Int_43 : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                /// Get the underlying struct.
                public unsafe ref readonly Array_Int_43 UnderlyingStruct => ref *(Array_Int_43 *)_UnderlyingPtr;
                /// Make a copy of a struct. (Even though we initially pass `is_owning: false`, we then use the copy constructor to produce an owning instance.)
                public unsafe Const_Array_Int_43(Array_Int_43 other) : this(new Const_Array_Int_43((_Underlying *)&other, is_owning: false)) {}
                /// Convert from a struct by copying it. Note that only `Const_Array_Int_43` has this conversion, `Mut_Array_Int_43` intentionally doesn't.
                public static implicit operator Const_Array_Int_43(Array_Int_43 other) {return new(other);}

                internal unsafe Const_Array_Int_43(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    MR.CS.Misc._Free((void *)_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Array_Int_43() {Dispose(false);}

                public ref readonly MR.CS.ArrayInt43 Elems => ref UnderlyingStruct.Elems;

                /// Generated default constructor.
                public unsafe Const_Array_Int_43() : this(null, is_owning: true)
                {
                    _UnderlyingPtr = (_Underlying *)MR.CS.Misc._Alloc(172);
                    System.Runtime.InteropServices.NativeMemory.Fill(_UnderlyingPtr, 172, 0);
                }

                /// Generated copy constructor.
                public unsafe Const_Array_Int_43(Const_Array_Int_43 _other) : this(null, is_owning: true)
                {
                    _UnderlyingPtr = (_Underlying *)MR.CS.Misc._Alloc(172);
                    System.Runtime.InteropServices.NativeMemory.Copy(_other._UnderlyingPtr, _UnderlyingPtr, 172);
                }
            }

            /// A fixed-size array of `int` of size 43.
            /// This is the non-const reference to the struct.
            public class Mut_Array_Int_43 : Const_Array_Int_43
            {
                /// Get the underlying struct.
                public unsafe new ref Array_Int_43 UnderlyingStruct => ref *(Array_Int_43 *)_UnderlyingPtr;
                /// Make a copy of a struct. (Even though we initially pass `is_owning: false`, we then use the copy constructor to produce an owning instance.)
                public unsafe Mut_Array_Int_43(Array_Int_43 other) : this(new Const_Array_Int_43((_Underlying *)&other, is_owning: false)) {}

                internal unsafe Mut_Array_Int_43(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                public new ref MR.CS.ArrayInt43 Elems => ref UnderlyingStruct.Elems;

                /// Generated default constructor.
                public unsafe Mut_Array_Int_43() : this(null, is_owning: true)
                {
                    _UnderlyingPtr = (_Underlying *)MR.CS.Misc._Alloc(172);
                    System.Runtime.InteropServices.NativeMemory.Fill(_UnderlyingPtr, 172, 0);
                }

                /// Generated copy constructor.
                public unsafe Mut_Array_Int_43(Const_Array_Int_43 _other) : this(null, is_owning: true)
                {
                    _UnderlyingPtr = (_Underlying *)MR.CS.Misc._Alloc(172);
                    System.Runtime.InteropServices.NativeMemory.Copy(_other._UnderlyingPtr, _UnderlyingPtr, 172);
                }
            }

            /// A fixed-size array of `int` of size 43.
            /// This is the by-value version of the struct.
            [System.Runtime.InteropServices.StructLayout(System.Runtime.InteropServices.LayoutKind.Explicit, Size = 172)]
            public struct Array_Int_43
            {
                /// Copy contents from a wrapper class to this struct.
                public static implicit operator Array_Int_43(Const_Array_Int_43 other) => other.UnderlyingStruct;

                [System.Runtime.InteropServices.FieldOffset(0)]
                public MR.CS.ArrayInt43 Elems;

                /// Generated copy constructor.
                public Array_Int_43(Array_Int_43 _other) {this = _other;}
            }

            /// This is used as a function parameter when passing `Mut_Array_Int_43` by value with a default argument, since trying to use `?` instead seems to prevent us from taking its address.
            /// Usage:
            /// * Pass an instance of `Mut_Array_Int_43`/`Const_Array_Int_43` to copy it into the function.
            /// * Pass `null` to use the default argument
            public readonly ref struct _InOpt_Array_Int_43
            {
                public readonly bool HasValue;
                internal readonly Array_Int_43 Object;
                public Array_Int_43 Value{
                    get
                    {
                        System.Diagnostics.Trace.Assert(HasValue);
                        return Object;
                    }
                }

                public _InOpt_Array_Int_43() {HasValue = false;}
                public _InOpt_Array_Int_43(Array_Int_43 new_value) {HasValue = true; Object = new_value;}
                public static implicit operator _InOpt_Array_Int_43(Array_Int_43 new_value) {return new(new_value);}
                public _InOpt_Array_Int_43(Const_Array_Int_43 new_value) {HasValue = true; Object = new_value.UnderlyingStruct;}
                public static implicit operator _InOpt_Array_Int_43(Const_Array_Int_43 new_value) {return new(new_value);}
            }

            /// This is used for optional parameters of class `Mut_Array_Int_43` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Array_Int_43`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Mut_Array_Int_43`/`Const_Array_Int_43` directly.
            /// * Pass `new(ref ...)` to pass a reference to `Array_Int_43`.
            public class _InOptMut_Array_Int_43
            {
                public Mut_Array_Int_43? Opt;

                public _InOptMut_Array_Int_43() {}
                public _InOptMut_Array_Int_43(Mut_Array_Int_43 value) {Opt = value;}
                public static implicit operator _InOptMut_Array_Int_43(Mut_Array_Int_43 value) {return new(value);}
                public unsafe _InOptMut_Array_Int_43(ref Array_Int_43 value)
                {
                    fixed (Array_Int_43 *value_ptr = &value)
                    {
                        Opt = new((Const_Array_Int_43._Underlying *)value_ptr, is_owning: false);
                    }
                }
            }

            /// This is used for optional parameters of class `Mut_Array_Int_43` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Array_Int_43`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Mut_Array_Int_43`/`Const_Array_Int_43` to pass it to the function.
            /// * Pass `new(ref ...)` to pass a reference to `Array_Int_43`.
            public class _InOptConst_Array_Int_43
            {
                public Const_Array_Int_43? Opt;

                public _InOptConst_Array_Int_43() {}
                public _InOptConst_Array_Int_43(Const_Array_Int_43 value) {Opt = value;}
                public static implicit operator _InOptConst_Array_Int_43(Const_Array_Int_43 value) {return new(value);}
                public unsafe _InOptConst_Array_Int_43(ref readonly Array_Int_43 value)
                {
                    fixed (Array_Int_43 *value_ptr = &value)
                    {
                        Opt = new((Const_Array_Int_43._Underlying *)value_ptr, is_owning: false);
                    }
                }
            }
        }
    }
}
