public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// A fixed-size array of `int32_t[3][4]` of size 5.
            /// This is the const reference to the struct.
            /// </summary>
            public class ConstBox_Array_Int32TArray4Array3_5 : MR.CS.Misc.Object<ConstBox_Array_Int32TArray4Array3_5>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                /// <summary>
                /// Get the underlying struct.
                /// </summary>
                public unsafe ref readonly Array_Int32TArray4Array3_5 _Ref => ref *(Array_Int32TArray4Array3_5 *)_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    MR.CS.Misc._Free((void *)_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~ConstBox_Array_Int32TArray4Array3_5() {Dispose(false);}

                public ref readonly MR.CS.ArrayInt32T5_3_4 elems => ref _Ref.elems;

                /// <summary>
                /// Make a copy of a struct. (Even though we initially pass `is_owning: false`, we then use the copy constructor to produce an owning instance.)
                /// </summary>
                public unsafe ConstBox_Array_Int32TArray4Array3_5(Array_Int32TArray4Array3_5 other) : this(new ConstBox_Array_Int32TArray4Array3_5((_Underlying *)&other, is_owning: false)) {}
                /// <summary>
                /// Convert from a struct by copying it. Note that only `ConstBox_Array_Int32TArray4Array3_5` has this conversion, `Box_Array_Int32TArray4Array3_5` intentionally doesn't.
                /// </summary>
                public static implicit operator ConstBox_Array_Int32TArray4Array3_5(Array_Int32TArray4Array3_5 other) {return new(other);}

                internal unsafe ConstBox_Array_Int32TArray4Array3_5(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Generated default constructor.
                /// </summary>
                public unsafe ConstBox_Array_Int32TArray4Array3_5() : this(null, is_owning: true)
                {
                    _UnderlyingPtr = (_Underlying *)MR.CS.Misc._Alloc(240);
                    System.Runtime.InteropServices.NativeMemory.Fill(_UnderlyingPtr, 240, 0);
                }

                /// <summary>
                /// Generated copy constructor.
                /// </summary>
                public unsafe ConstBox_Array_Int32TArray4Array3_5(ConstBox_Array_Int32TArray4Array3_5 _other) : this(null, is_owning: true)
                {
                    _UnderlyingPtr = (_Underlying *)MR.CS.Misc._Alloc(240);
                    *(MR.CS.Std.Array_Int32TArray4Array3_5 *)_UnderlyingPtr = *(MR.CS.Std.Array_Int32TArray4Array3_5 *)_other._UnderlyingPtr;
                }
            }

            /// <summary>
            /// A fixed-size array of `int32_t[3][4]` of size 5.
            /// This is the non-const reference to the struct.
            /// </summary>
            public class Box_Array_Int32TArray4Array3_5 : ConstBox_Array_Int32TArray4Array3_5
            {
                /// <summary>
                /// Get the underlying struct.
                /// </summary>
                public unsafe new ref Array_Int32TArray4Array3_5 _Ref => ref *(Array_Int32TArray4Array3_5 *)_UnderlyingPtr;

                public new ref MR.CS.ArrayInt32T5_3_4 elems => ref _Ref.elems;

                /// <summary>
                /// Make a copy of a struct. (Even though we initially pass `is_owning: false`, we then use the copy constructor to produce an owning instance.)
                /// </summary>
                public unsafe Box_Array_Int32TArray4Array3_5(Array_Int32TArray4Array3_5 other) : this(new ConstBox_Array_Int32TArray4Array3_5((_Underlying *)&other, is_owning: false)) {}

                internal unsafe Box_Array_Int32TArray4Array3_5(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Generated default constructor.
                /// </summary>
                public unsafe Box_Array_Int32TArray4Array3_5() : this(null, is_owning: true)
                {
                    _UnderlyingPtr = (_Underlying *)MR.CS.Misc._Alloc(240);
                    System.Runtime.InteropServices.NativeMemory.Fill(_UnderlyingPtr, 240, 0);
                }

                /// <summary>
                /// Generated copy constructor.
                /// </summary>
                public unsafe Box_Array_Int32TArray4Array3_5(ConstBox_Array_Int32TArray4Array3_5 _other) : this(null, is_owning: true)
                {
                    _UnderlyingPtr = (_Underlying *)MR.CS.Misc._Alloc(240);
                    *(MR.CS.Std.Array_Int32TArray4Array3_5 *)_UnderlyingPtr = *(MR.CS.Std.Array_Int32TArray4Array3_5 *)_other._UnderlyingPtr;
                }

                /// <summary>
                /// Generated copy assignment.
                /// </summary>
                public void Assign(ConstBox_Array_Int32TArray4Array3_5 _other) {_Ref = _other._Ref;}
            }

            /// <summary>
            /// A fixed-size array of `int32_t[3][4]` of size 5.
            /// This is the by-value version of the struct.
            /// </summary>
            [System.Runtime.InteropServices.StructLayout(System.Runtime.InteropServices.LayoutKind.Explicit, Size = 240)]
            public struct Array_Int32TArray4Array3_5
            {
                [System.Runtime.InteropServices.FieldOffset(0)]
                public MR.CS.ArrayInt32T5_3_4 elems;

                /// <summary>
                /// Copy contents from a wrapper class to this struct.
                /// </summary>
                public static implicit operator Array_Int32TArray4Array3_5(ConstBox_Array_Int32TArray4Array3_5 other) => other._Ref;

                /// <summary>
                /// Generated copy constructor.
                /// </summary>
                public Array_Int32TArray4Array3_5(Array_Int32TArray4Array3_5 _other) {this = _other;}
            }

            /// <summary>
            /// This is used as a function parameter when passing `Box_Array_Int32TArray4Array3_5` by value with a default argument, since trying to use `?` instead seems to prevent us from taking its address.
            /// Usage:
            /// * Pass an instance of `Box_Array_Int32TArray4Array3_5`/`ConstBox_Array_Int32TArray4Array3_5` to copy it into the function.
            /// * Pass `null` to use the default argument
            /// </summary>
            public readonly ref struct _InOpt_Array_Int32TArray4Array3_5
            {
                public readonly bool HasValue;
                internal readonly Array_Int32TArray4Array3_5 Object;
                public Array_Int32TArray4Array3_5 Value{
                    get
                    {
                        System.Diagnostics.Trace.Assert(HasValue);
                        return Object;
                    }
                }

                public _InOpt_Array_Int32TArray4Array3_5() {HasValue = false;}
                public _InOpt_Array_Int32TArray4Array3_5(Array_Int32TArray4Array3_5 new_value) {HasValue = true; Object = new_value;}
                public static implicit operator _InOpt_Array_Int32TArray4Array3_5(Array_Int32TArray4Array3_5 new_value) {return new(new_value);}
                public _InOpt_Array_Int32TArray4Array3_5(ConstBox_Array_Int32TArray4Array3_5 new_value) {HasValue = true; Object = new_value._Ref;}
                public static implicit operator _InOpt_Array_Int32TArray4Array3_5(ConstBox_Array_Int32TArray4Array3_5 new_value) {return new(new_value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Box_Array_Int32TArray4Array3_5` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Array_Int32TArray4Array3_5`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Box_Array_Int32TArray4Array3_5`/`ConstBox_Array_Int32TArray4Array3_5` directly.
            /// * Pass `new(ref ...)` to pass a reference to `Array_Int32TArray4Array3_5`.
            /// </summary>
            public class _InOptMut_Array_Int32TArray4Array3_5
            {
                public Box_Array_Int32TArray4Array3_5? Opt;

                public _InOptMut_Array_Int32TArray4Array3_5() {}
                public _InOptMut_Array_Int32TArray4Array3_5(Box_Array_Int32TArray4Array3_5 value) {Opt = value;}
                public static implicit operator _InOptMut_Array_Int32TArray4Array3_5(Box_Array_Int32TArray4Array3_5 value) {return new(value);}
                public unsafe _InOptMut_Array_Int32TArray4Array3_5(ref Array_Int32TArray4Array3_5 value)
                {
                    fixed (Array_Int32TArray4Array3_5 *value_ptr = &value)
                    {
                        Opt = new((ConstBox_Array_Int32TArray4Array3_5._Underlying *)value_ptr, is_owning: false);
                    }
                }
            }

            /// <summary>
            /// This is used for optional parameters of class `Box_Array_Int32TArray4Array3_5` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Array_Int32TArray4Array3_5`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Box_Array_Int32TArray4Array3_5`/`ConstBox_Array_Int32TArray4Array3_5` to pass it to the function.
            /// * Pass `new(ref ...)` to pass a reference to `Array_Int32TArray4Array3_5`.
            /// </summary>
            public class _InOptConst_Array_Int32TArray4Array3_5
            {
                public ConstBox_Array_Int32TArray4Array3_5? Opt;

                public _InOptConst_Array_Int32TArray4Array3_5() {}
                public _InOptConst_Array_Int32TArray4Array3_5(ConstBox_Array_Int32TArray4Array3_5 value) {Opt = value;}
                public static implicit operator _InOptConst_Array_Int32TArray4Array3_5(ConstBox_Array_Int32TArray4Array3_5 value) {return new(value);}
                public unsafe _InOptConst_Array_Int32TArray4Array3_5(ref readonly Array_Int32TArray4Array3_5 value)
                {
                    fixed (Array_Int32TArray4Array3_5 *value_ptr = &value)
                    {
                        Opt = new((ConstBox_Array_Int32TArray4Array3_5._Underlying *)value_ptr, is_owning: false);
                    }
                }
            }
        }
    }
}
