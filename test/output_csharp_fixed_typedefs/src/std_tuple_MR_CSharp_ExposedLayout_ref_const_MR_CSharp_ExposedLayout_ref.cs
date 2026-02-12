public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// Stores 2 objects: `MR::CSharp::ExposedLayout &`, `const MR::CSharp::ExposedLayout &`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_Tuple_MRCSharpExposedLayoutRef_ConstMRCSharpExposedLayoutRef : MR.CS.Misc.Object<Const_Tuple_MRCSharpExposedLayoutRef_ConstMRCSharpExposedLayoutRef>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref_Destroy(_Underlying *_this);
                    __MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Tuple_MRCSharpExposedLayoutRef_ConstMRCSharpExposedLayoutRef() {Dispose(false);}

                internal unsafe Const_Tuple_MRCSharpExposedLayoutRef_ConstMRCSharpExposedLayoutRef(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Constructs the tuple elementwise.
                /// </summary>
                public unsafe Const_Tuple_MRCSharpExposedLayoutRef_ConstMRCSharpExposedLayoutRef(ref MR.CS.CSharp.ExposedLayout _0, in MR.CS.CSharp.ExposedLayout _1) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_MRCSharpExposedLayoutRef_ConstMRCSharpExposedLayoutRef._Underlying *__MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref_Construct(MR.CS.CSharp.ExposedLayout *_0, MR.CS.CSharp.ExposedLayout *_1);
                    fixed (MR.CS.CSharp.ExposedLayout *__ptr__0 = &_0)
                    {
                        fixed (MR.CS.CSharp.ExposedLayout *__ptr__1 = &_1)
                        {
                            _UnderlyingPtr = __MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref_Construct(__ptr__0, __ptr__1);
                        }
                    }
                }

                /// <summary>
                /// The element 0, of type `MR::CSharp::ExposedLayout &`, read-only.
                /// </summary>
                public unsafe ref MR.CS.CSharp.ExposedLayout getMRCSharpExposedLayoutRef()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref_get_MR_CSharp_ExposedLayout_ref", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ExposedLayout *__MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref_get_MR_CSharp_ExposedLayout_ref(_Underlying *_this);
                    return ref *__MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref_get_MR_CSharp_ExposedLayout_ref(_UnderlyingPtr);
                }

                /// <summary>
                /// The element 1, of type `const MR::CSharp::ExposedLayout &`, read-only.
                /// </summary>
                public unsafe ref readonly MR.CS.CSharp.ExposedLayout getConstMRCSharpExposedLayoutRef()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref_get_const_MR_CSharp_ExposedLayout_ref", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ExposedLayout *__MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref_get_const_MR_CSharp_ExposedLayout_ref(_Underlying *_this);
                    return ref *__MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref_get_const_MR_CSharp_ExposedLayout_ref(_UnderlyingPtr);
                }

                // Custom extras:

                public void Deconstruct(out MR.CS.Misc.Ref<MR.CS.CSharp.ExposedLayout> _1, out MR.CS.Misc.ConstRef<MR.CS.CSharp.ExposedLayout> _2)
                {
                    _1 = new(ref getMRCSharpExposedLayoutRef());
                    _2 = new(in getConstMRCSharpExposedLayoutRef());
                }
            }

            /// <summary>
            /// Stores 2 objects: `MR::CSharp::ExposedLayout &`, `const MR::CSharp::ExposedLayout &`.
            /// This is the non-const half of the class.
            /// </summary>
            public class Tuple_MRCSharpExposedLayoutRef_ConstMRCSharpExposedLayoutRef : Const_Tuple_MRCSharpExposedLayoutRef_ConstMRCSharpExposedLayoutRef
            {
                internal unsafe Tuple_MRCSharpExposedLayoutRef_ConstMRCSharpExposedLayoutRef(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs the tuple elementwise.
                /// </summary>
                public unsafe Tuple_MRCSharpExposedLayoutRef_ConstMRCSharpExposedLayoutRef(ref MR.CS.CSharp.ExposedLayout _0, in MR.CS.CSharp.ExposedLayout _1) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_MRCSharpExposedLayoutRef_ConstMRCSharpExposedLayoutRef._Underlying *__MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref_Construct(MR.CS.CSharp.ExposedLayout *_0, MR.CS.CSharp.ExposedLayout *_1);
                    fixed (MR.CS.CSharp.ExposedLayout *__ptr__0 = &_0)
                    {
                        fixed (MR.CS.CSharp.ExposedLayout *__ptr__1 = &_1)
                        {
                            _UnderlyingPtr = __MR_C_std_tuple_MR_CSharp_ExposedLayout_ref_const_MR_CSharp_ExposedLayout_ref_Construct(__ptr__0, __ptr__1);
                        }
                    }
                }
            }

            /// <summary>
            /// This is used for optional parameters of class `Tuple_MRCSharpExposedLayoutRef_ConstMRCSharpExposedLayoutRef` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Tuple_MRCSharpExposedLayoutRef_ConstMRCSharpExposedLayoutRef`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Tuple_MRCSharpExposedLayoutRef_ConstMRCSharpExposedLayoutRef`/`Const_Tuple_MRCSharpExposedLayoutRef_ConstMRCSharpExposedLayoutRef` directly.
            /// </summary>
            public class _InOptMut_Tuple_MRCSharpExposedLayoutRef_ConstMRCSharpExposedLayoutRef
            {
                public Tuple_MRCSharpExposedLayoutRef_ConstMRCSharpExposedLayoutRef? Opt;

                public _InOptMut_Tuple_MRCSharpExposedLayoutRef_ConstMRCSharpExposedLayoutRef() {}
                public _InOptMut_Tuple_MRCSharpExposedLayoutRef_ConstMRCSharpExposedLayoutRef(Tuple_MRCSharpExposedLayoutRef_ConstMRCSharpExposedLayoutRef value) {Opt = value;}
                public static implicit operator _InOptMut_Tuple_MRCSharpExposedLayoutRef_ConstMRCSharpExposedLayoutRef(Tuple_MRCSharpExposedLayoutRef_ConstMRCSharpExposedLayoutRef value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Tuple_MRCSharpExposedLayoutRef_ConstMRCSharpExposedLayoutRef` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Tuple_MRCSharpExposedLayoutRef_ConstMRCSharpExposedLayoutRef`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Tuple_MRCSharpExposedLayoutRef_ConstMRCSharpExposedLayoutRef`/`Const_Tuple_MRCSharpExposedLayoutRef_ConstMRCSharpExposedLayoutRef` to pass it to the function.
            /// </summary>
            public class _InOptConst_Tuple_MRCSharpExposedLayoutRef_ConstMRCSharpExposedLayoutRef
            {
                public Const_Tuple_MRCSharpExposedLayoutRef_ConstMRCSharpExposedLayoutRef? Opt;

                public _InOptConst_Tuple_MRCSharpExposedLayoutRef_ConstMRCSharpExposedLayoutRef() {}
                public _InOptConst_Tuple_MRCSharpExposedLayoutRef_ConstMRCSharpExposedLayoutRef(Const_Tuple_MRCSharpExposedLayoutRef_ConstMRCSharpExposedLayoutRef value) {Opt = value;}
                public static implicit operator _InOptConst_Tuple_MRCSharpExposedLayoutRef_ConstMRCSharpExposedLayoutRef(Const_Tuple_MRCSharpExposedLayoutRef_ConstMRCSharpExposedLayoutRef value) {return new(value);}
            }
        }
    }
}
