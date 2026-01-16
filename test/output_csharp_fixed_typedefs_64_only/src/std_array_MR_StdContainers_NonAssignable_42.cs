public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// A fixed-size array of `MR::StdContainers::NonAssignable` of size 42.
            /// This is the const half of the class.
            /// </summary>
            public class Const_Array_MRStdContainersNonAssignable_42 : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_Array_MRStdContainersNonAssignable_42(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_array_MR_StdContainers_NonAssignable_42_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_array_MR_StdContainers_NonAssignable_42_Destroy(_Underlying *_this);
                    __MR_C_std_array_MR_StdContainers_NonAssignable_42_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Array_MRStdContainersNonAssignable_42() {Dispose(false);}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_Array_MRStdContainersNonAssignable_42() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_array_MR_StdContainers_NonAssignable_42_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Array_MRStdContainersNonAssignable_42._Underlying *__MR_C_std_array_MR_StdContainers_NonAssignable_42_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_array_MR_StdContainers_NonAssignable_42_DefaultConstruct();
                }

                /// <summary>
                /// The element at a specific index, read-only.
                /// </summary>
                public unsafe MR.CS.StdContainers.Const_NonAssignable at(ulong i)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_array_MR_StdContainers_NonAssignable_42_At", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.Const_NonAssignable._Underlying *__MR_C_std_array_MR_StdContainers_NonAssignable_42_At(_Underlying *_this, ulong i);
                    return new(__MR_C_std_array_MR_StdContainers_NonAssignable_42_At(_UnderlyingPtr, i), is_owning: false);
                }

                /// <summary>
                /// Returns a pointer to the continuous storage that holds all elements, read-only.
                /// </summary>
                public unsafe MR.CS.StdContainers.ConstPtrNonAssignable? data()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_array_MR_StdContainers_NonAssignable_42_Data", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.Const_NonAssignable._Underlying *__MR_C_std_array_MR_StdContainers_NonAssignable_42_Data(_Underlying *_this);
                    var __ret = __MR_C_std_array_MR_StdContainers_NonAssignable_42_Data(_UnderlyingPtr);
                    return new(__ret);
                }
            }

            /// <summary>
            /// A fixed-size array of `MR::StdContainers::NonAssignable` of size 42.
            /// This is the non-const half of the class.
            /// </summary>
            public class Array_MRStdContainersNonAssignable_42 : Const_Array_MRStdContainersNonAssignable_42
            {
                internal unsafe Array_MRStdContainersNonAssignable_42(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Array_MRStdContainersNonAssignable_42() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_array_MR_StdContainers_NonAssignable_42_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Array_MRStdContainersNonAssignable_42._Underlying *__MR_C_std_array_MR_StdContainers_NonAssignable_42_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_array_MR_StdContainers_NonAssignable_42_DefaultConstruct();
                }

                /// <summary>
                /// The element at a specific index, mutable.
                /// </summary>
                public unsafe new MR.CS.StdContainers.NonAssignable at(ulong i)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_array_MR_StdContainers_NonAssignable_42_MutableAt", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.NonAssignable._Underlying *__MR_C_std_array_MR_StdContainers_NonAssignable_42_MutableAt(_Underlying *_this, ulong i);
                    return new(__MR_C_std_array_MR_StdContainers_NonAssignable_42_MutableAt(_UnderlyingPtr, i), is_owning: false);
                }

                /// <summary>
                /// Returns a pointer to the continuous storage that holds all elements, mutable.
                /// </summary>
                public unsafe new MR.CS.StdContainers.PtrNonAssignable? data()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_array_MR_StdContainers_NonAssignable_42_MutableData", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.NonAssignable._Underlying *__MR_C_std_array_MR_StdContainers_NonAssignable_42_MutableData(_Underlying *_this);
                    var __ret = __MR_C_std_array_MR_StdContainers_NonAssignable_42_MutableData(_UnderlyingPtr);
                    return new(__ret);
                }
            }

            /// <summary>
            /// This is used as a function parameter when the underlying function receives `Array_MRStdContainersNonAssignable_42` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `Array_MRStdContainersNonAssignable_42`/`Const_Array_MRStdContainersNonAssignable_42` to copy it into the function.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            /// </summary>
            public class _ByValue_Array_MRStdContainersNonAssignable_42
            {
                internal readonly Const_Array_MRStdContainersNonAssignable_42? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_Array_MRStdContainersNonAssignable_42() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_Array_MRStdContainersNonAssignable_42(Const_Array_MRStdContainersNonAssignable_42 new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_Array_MRStdContainersNonAssignable_42(Const_Array_MRStdContainersNonAssignable_42 arg) {return new(arg);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Array_MRStdContainersNonAssignable_42` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Array_MRStdContainersNonAssignable_42`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Array_MRStdContainersNonAssignable_42`/`Const_Array_MRStdContainersNonAssignable_42` directly.
            /// </summary>
            public class _InOptMut_Array_MRStdContainersNonAssignable_42
            {
                public Array_MRStdContainersNonAssignable_42? Opt;

                public _InOptMut_Array_MRStdContainersNonAssignable_42() {}
                public _InOptMut_Array_MRStdContainersNonAssignable_42(Array_MRStdContainersNonAssignable_42 value) {Opt = value;}
                public static implicit operator _InOptMut_Array_MRStdContainersNonAssignable_42(Array_MRStdContainersNonAssignable_42 value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Array_MRStdContainersNonAssignable_42` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Array_MRStdContainersNonAssignable_42`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Array_MRStdContainersNonAssignable_42`/`Const_Array_MRStdContainersNonAssignable_42` to pass it to the function.
            /// </summary>
            public class _InOptConst_Array_MRStdContainersNonAssignable_42
            {
                public Const_Array_MRStdContainersNonAssignable_42? Opt;

                public _InOptConst_Array_MRStdContainersNonAssignable_42() {}
                public _InOptConst_Array_MRStdContainersNonAssignable_42(Const_Array_MRStdContainersNonAssignable_42 value) {Opt = value;}
                public static implicit operator _InOptConst_Array_MRStdContainersNonAssignable_42(Const_Array_MRStdContainersNonAssignable_42 value) {return new(value);}
            }
        }
    }
}
