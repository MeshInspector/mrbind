public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// Stores 2 objects: `MR::CSharp::ExposedLayout &&`, `const MR::CSharp::ExposedLayout &&`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_Tuple_MRCSharpExposedLayoutRvalueRef_ConstMRCSharpExposedLayoutRvalueRef : MR.CS.Misc.Object<Const_Tuple_MRCSharpExposedLayoutRvalueRef_ConstMRCSharpExposedLayoutRvalueRef>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref_Destroy(_Underlying *_this);
                    __MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Tuple_MRCSharpExposedLayoutRvalueRef_ConstMRCSharpExposedLayoutRvalueRef() {Dispose(false);}

                internal unsafe Const_Tuple_MRCSharpExposedLayoutRvalueRef_ConstMRCSharpExposedLayoutRvalueRef(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Const_Tuple_MRCSharpExposedLayoutRvalueRef_ConstMRCSharpExposedLayoutRvalueRef(MR.CS.Std.Const_Tuple_MRCSharpExposedLayoutRvalueRef_ConstMRCSharpExposedLayoutRvalueRef other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_MRCSharpExposedLayoutRvalueRef_ConstMRCSharpExposedLayoutRvalueRef._Underlying *__MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref_ConstructFromAnother(MR.CS.Std.Tuple_MRCSharpExposedLayoutRvalueRef_ConstMRCSharpExposedLayoutRvalueRef._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// <summary>
                /// Constructs the tuple elementwise.
                /// </summary>
                public unsafe Const_Tuple_MRCSharpExposedLayoutRvalueRef_ConstMRCSharpExposedLayoutRvalueRef(MR.CS.Misc._MoveRef _move__0, in MR.CS.CSharp.ExposedLayout _0, MR.CS.Misc._MoveRef _move__1, in MR.CS.CSharp.ExposedLayout _1) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_MRCSharpExposedLayoutRvalueRef_ConstMRCSharpExposedLayoutRvalueRef._Underlying *__MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref_Construct(MR.CS.CSharp.ExposedLayout *_0, MR.CS.CSharp.ExposedLayout *_1);
                    fixed (MR.CS.CSharp.ExposedLayout *__ptr__0 = &_0)
                    {
                        fixed (MR.CS.CSharp.ExposedLayout *__ptr__1 = &_1)
                        {
                            _UnderlyingPtr = __MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref_Construct(__ptr__0, __ptr__1);
                        }
                    }
                }

                /// <summary>
                /// The element 0, of type `MR::CSharp::ExposedLayout &&`, read-only.
                /// </summary>
                public unsafe ref readonly MR.CS.CSharp.ExposedLayout getMRCSharpExposedLayoutRvalueRef()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref_get_MR_CSharp_ExposedLayout_rvalue_ref", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ExposedLayout *__MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref_get_MR_CSharp_ExposedLayout_rvalue_ref(_Underlying *_this);
                    return ref *__MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref_get_MR_CSharp_ExposedLayout_rvalue_ref(_UnderlyingPtr);
                }

                /// <summary>
                /// The element 1, of type `const MR::CSharp::ExposedLayout &&`, read-only.
                /// </summary>
                public unsafe ref readonly MR.CS.CSharp.ExposedLayout getConstMRCSharpExposedLayoutRvalueRef()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref_get_const_MR_CSharp_ExposedLayout_rvalue_ref", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ExposedLayout *__MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref_get_const_MR_CSharp_ExposedLayout_rvalue_ref(_Underlying *_this);
                    return ref *__MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref_get_const_MR_CSharp_ExposedLayout_rvalue_ref(_UnderlyingPtr);
                }

                // Custom extras:

                public void Deconstruct(out MR.CS.Misc.ConstRef<MR.CS.CSharp.ExposedLayout> _1, out MR.CS.Misc.ConstRef<MR.CS.CSharp.ExposedLayout> _2)
                {
                    _1 = new(in getMRCSharpExposedLayoutRvalueRef());
                    _2 = new(in getConstMRCSharpExposedLayoutRvalueRef());
                }
            }

            /// <summary>
            /// Stores 2 objects: `MR::CSharp::ExposedLayout &&`, `const MR::CSharp::ExposedLayout &&`.
            /// This is the non-const half of the class.
            /// </summary>
            public class Tuple_MRCSharpExposedLayoutRvalueRef_ConstMRCSharpExposedLayoutRvalueRef : Const_Tuple_MRCSharpExposedLayoutRvalueRef_ConstMRCSharpExposedLayoutRvalueRef
            {
                internal unsafe Tuple_MRCSharpExposedLayoutRvalueRef_ConstMRCSharpExposedLayoutRvalueRef(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Tuple_MRCSharpExposedLayoutRvalueRef_ConstMRCSharpExposedLayoutRvalueRef(MR.CS.Std.Const_Tuple_MRCSharpExposedLayoutRvalueRef_ConstMRCSharpExposedLayoutRvalueRef other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_MRCSharpExposedLayoutRvalueRef_ConstMRCSharpExposedLayoutRvalueRef._Underlying *__MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref_ConstructFromAnother(MR.CS.Std.Tuple_MRCSharpExposedLayoutRvalueRef_ConstMRCSharpExposedLayoutRvalueRef._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// <summary>
                /// Constructs the tuple elementwise.
                /// </summary>
                public unsafe Tuple_MRCSharpExposedLayoutRvalueRef_ConstMRCSharpExposedLayoutRvalueRef(MR.CS.Misc._MoveRef _move__0, in MR.CS.CSharp.ExposedLayout _0, MR.CS.Misc._MoveRef _move__1, in MR.CS.CSharp.ExposedLayout _1) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_MRCSharpExposedLayoutRvalueRef_ConstMRCSharpExposedLayoutRvalueRef._Underlying *__MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref_Construct(MR.CS.CSharp.ExposedLayout *_0, MR.CS.CSharp.ExposedLayout *_1);
                    fixed (MR.CS.CSharp.ExposedLayout *__ptr__0 = &_0)
                    {
                        fixed (MR.CS.CSharp.ExposedLayout *__ptr__1 = &_1)
                        {
                            _UnderlyingPtr = __MR_C_std_tuple_MR_CSharp_ExposedLayout_rvalue_ref_const_MR_CSharp_ExposedLayout_rvalue_ref_Construct(__ptr__0, __ptr__1);
                        }
                    }
                }
            }

            /// <summary>
            /// This is used for optional parameters of class `Tuple_MRCSharpExposedLayoutRvalueRef_ConstMRCSharpExposedLayoutRvalueRef` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Tuple_MRCSharpExposedLayoutRvalueRef_ConstMRCSharpExposedLayoutRvalueRef`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Tuple_MRCSharpExposedLayoutRvalueRef_ConstMRCSharpExposedLayoutRvalueRef`/`Const_Tuple_MRCSharpExposedLayoutRvalueRef_ConstMRCSharpExposedLayoutRvalueRef` directly.
            /// </summary>
            public class _InOptMut_Tuple_MRCSharpExposedLayoutRvalueRef_ConstMRCSharpExposedLayoutRvalueRef
            {
                public Tuple_MRCSharpExposedLayoutRvalueRef_ConstMRCSharpExposedLayoutRvalueRef? Opt;

                public _InOptMut_Tuple_MRCSharpExposedLayoutRvalueRef_ConstMRCSharpExposedLayoutRvalueRef() {}
                public _InOptMut_Tuple_MRCSharpExposedLayoutRvalueRef_ConstMRCSharpExposedLayoutRvalueRef(Tuple_MRCSharpExposedLayoutRvalueRef_ConstMRCSharpExposedLayoutRvalueRef value) {Opt = value;}
                public static implicit operator _InOptMut_Tuple_MRCSharpExposedLayoutRvalueRef_ConstMRCSharpExposedLayoutRvalueRef(Tuple_MRCSharpExposedLayoutRvalueRef_ConstMRCSharpExposedLayoutRvalueRef value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Tuple_MRCSharpExposedLayoutRvalueRef_ConstMRCSharpExposedLayoutRvalueRef` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Tuple_MRCSharpExposedLayoutRvalueRef_ConstMRCSharpExposedLayoutRvalueRef`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Tuple_MRCSharpExposedLayoutRvalueRef_ConstMRCSharpExposedLayoutRvalueRef`/`Const_Tuple_MRCSharpExposedLayoutRvalueRef_ConstMRCSharpExposedLayoutRvalueRef` to pass it to the function.
            /// </summary>
            public class _InOptConst_Tuple_MRCSharpExposedLayoutRvalueRef_ConstMRCSharpExposedLayoutRvalueRef
            {
                public Const_Tuple_MRCSharpExposedLayoutRvalueRef_ConstMRCSharpExposedLayoutRvalueRef? Opt;

                public _InOptConst_Tuple_MRCSharpExposedLayoutRvalueRef_ConstMRCSharpExposedLayoutRvalueRef() {}
                public _InOptConst_Tuple_MRCSharpExposedLayoutRvalueRef_ConstMRCSharpExposedLayoutRvalueRef(Const_Tuple_MRCSharpExposedLayoutRvalueRef_ConstMRCSharpExposedLayoutRvalueRef value) {Opt = value;}
                public static implicit operator _InOptConst_Tuple_MRCSharpExposedLayoutRvalueRef_ConstMRCSharpExposedLayoutRvalueRef(Const_Tuple_MRCSharpExposedLayoutRvalueRef_ConstMRCSharpExposedLayoutRvalueRef value) {return new(value);}
            }
        }
    }
}
