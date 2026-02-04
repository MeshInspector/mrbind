public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// Stores two objects: `const MR::StdContainers::NonAssignable` and `const MR::StdContainers::NonAssignable`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_Pair_ConstMRStdContainersNonAssignable_Float : MR.CS.Misc.Object<Const_Pair_ConstMRStdContainersNonAssignable_Float>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_Destroy(_Underlying *_this);
                    __MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Pair_ConstMRStdContainersNonAssignable_Float() {Dispose(false);}

                internal unsafe Const_Pair_ConstMRStdContainersNonAssignable_Float(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_Pair_ConstMRStdContainersNonAssignable_Float() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Pair_ConstMRStdContainersNonAssignable_Float._Underlying *__MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_DefaultConstruct();
                }

                /// <summary>
                /// Constructs the pair elementwise.
                /// </summary>
                public unsafe Const_Pair_ConstMRStdContainersNonAssignable_Float(MR.CS.StdContainers._ByValue_NonAssignable first, float second) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.Pair_ConstMRStdContainersNonAssignable_Float._Underlying *__MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_Construct(MR.CS.Misc._PassBy first_pass_by, MR.CS.StdContainers.NonAssignable._Underlying *first, float second);
                    _UnderlyingPtr = __MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_Construct(first.PassByMode, first.Value is not null ? first.Value._UnderlyingPtr : null, second);
                    if (first.Value is not null) _KeepAlive(first.Value);
                }

                /// <summary>
                /// The first of the two elements, read-only.
                /// </summary>
                public unsafe MR.CS.StdContainers.Const_NonAssignable first()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_first", ExactSpelling = true)]
                    extern static MR.CS.StdContainers.Const_NonAssignable._Underlying *__MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_first(_Underlying *_this);
                    MR.CS.StdContainers.Const_NonAssignable __ret;
                    __ret = new(__MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_first(_UnderlyingPtr), is_owning: false);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// The second of the two elements, read-only.
                /// </summary>
                public unsafe float second()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_second", ExactSpelling = true)]
                    extern static float *__MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_second(_Underlying *_this);
                    return *__MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_second(_UnderlyingPtr);
                }
            }

            /// <summary>
            /// Stores two objects: `const MR::StdContainers::NonAssignable` and `const MR::StdContainers::NonAssignable`.
            /// This is the non-const half of the class.
            /// </summary>
            public class Pair_ConstMRStdContainersNonAssignable_Float : Const_Pair_ConstMRStdContainersNonAssignable_Float
            {
                internal unsafe Pair_ConstMRStdContainersNonAssignable_Float(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Pair_ConstMRStdContainersNonAssignable_Float() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Pair_ConstMRStdContainersNonAssignable_Float._Underlying *__MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_DefaultConstruct();
                }

                /// <summary>
                /// Constructs the pair elementwise.
                /// </summary>
                public unsafe Pair_ConstMRStdContainersNonAssignable_Float(MR.CS.StdContainers._ByValue_NonAssignable first, float second) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.Pair_ConstMRStdContainersNonAssignable_Float._Underlying *__MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_Construct(MR.CS.Misc._PassBy first_pass_by, MR.CS.StdContainers.NonAssignable._Underlying *first, float second);
                    _UnderlyingPtr = __MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_Construct(first.PassByMode, first.Value is not null ? first.Value._UnderlyingPtr : null, second);
                    if (first.Value is not null) _KeepAlive(first.Value);
                }

                /// <summary>
                /// The second of the two elements, mutable.
                /// </summary>
                public unsafe new ref float second()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_second_mut", ExactSpelling = true)]
                    extern static float *__MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_second_mut(_Underlying *_this);
                    return ref *__MR_C_std_pair_const_MR_StdContainers_NonAssignable_float_second_mut(_UnderlyingPtr);
                }
            }

            /// <summary>
            /// This is used as a function parameter when the underlying function receives `Pair_ConstMRStdContainersNonAssignable_Float` by value.
            /// Usage:
            /// * Pass `new()` to default-construct the instance.
            /// * Pass an instance of `Pair_ConstMRStdContainersNonAssignable_Float`/`Const_Pair_ConstMRStdContainersNonAssignable_Float` to copy it into the function.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            /// </summary>
            public class _ByValue_Pair_ConstMRStdContainersNonAssignable_Float
            {
                internal readonly Const_Pair_ConstMRStdContainersNonAssignable_Float? Value;
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_Pair_ConstMRStdContainersNonAssignable_Float() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
                public _ByValue_Pair_ConstMRStdContainersNonAssignable_Float(Const_Pair_ConstMRStdContainersNonAssignable_Float new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_Pair_ConstMRStdContainersNonAssignable_Float(Const_Pair_ConstMRStdContainersNonAssignable_Float arg) {return new(arg);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Pair_ConstMRStdContainersNonAssignable_Float` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Pair_ConstMRStdContainersNonAssignable_Float`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Pair_ConstMRStdContainersNonAssignable_Float`/`Const_Pair_ConstMRStdContainersNonAssignable_Float` directly.
            /// </summary>
            public class _InOptMut_Pair_ConstMRStdContainersNonAssignable_Float
            {
                public Pair_ConstMRStdContainersNonAssignable_Float? Opt;

                public _InOptMut_Pair_ConstMRStdContainersNonAssignable_Float() {}
                public _InOptMut_Pair_ConstMRStdContainersNonAssignable_Float(Pair_ConstMRStdContainersNonAssignable_Float value) {Opt = value;}
                public static implicit operator _InOptMut_Pair_ConstMRStdContainersNonAssignable_Float(Pair_ConstMRStdContainersNonAssignable_Float value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Pair_ConstMRStdContainersNonAssignable_Float` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Pair_ConstMRStdContainersNonAssignable_Float`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Pair_ConstMRStdContainersNonAssignable_Float`/`Const_Pair_ConstMRStdContainersNonAssignable_Float` to pass it to the function.
            /// </summary>
            public class _InOptConst_Pair_ConstMRStdContainersNonAssignable_Float
            {
                public Const_Pair_ConstMRStdContainersNonAssignable_Float? Opt;

                public _InOptConst_Pair_ConstMRStdContainersNonAssignable_Float() {}
                public _InOptConst_Pair_ConstMRStdContainersNonAssignable_Float(Const_Pair_ConstMRStdContainersNonAssignable_Float value) {Opt = value;}
                public static implicit operator _InOptConst_Pair_ConstMRStdContainersNonAssignable_Float(Const_Pair_ConstMRStdContainersNonAssignable_Float value) {return new(value);}
            }
        }
    }
}
