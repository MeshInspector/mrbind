public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// Stores 2 objects: `MR::CSharp::ExposedLayout`, `const MR::CSharp::ExposedLayout`.
            /// This is the const half of the class.
            public class Const_Tuple_MRCSharpExposedLayout_ConstMRCSharpExposedLayout : MR.CS.Misc.Object<Const_Tuple_MRCSharpExposedLayout_ConstMRCSharpExposedLayout>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_Destroy(_Underlying *_this);
                    __MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Tuple_MRCSharpExposedLayout_ConstMRCSharpExposedLayout() {Dispose(false);}

                internal unsafe Const_Tuple_MRCSharpExposedLayout_ConstMRCSharpExposedLayout(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_Tuple_MRCSharpExposedLayout_ConstMRCSharpExposedLayout() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_MRCSharpExposedLayout_ConstMRCSharpExposedLayout._Underlying *__MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Const_Tuple_MRCSharpExposedLayout_ConstMRCSharpExposedLayout(MR.CS.Std.Const_Tuple_MRCSharpExposedLayout_ConstMRCSharpExposedLayout other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_MRCSharpExposedLayout_ConstMRCSharpExposedLayout._Underlying *__MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_ConstructFromAnother(MR.CS.Std.Tuple_MRCSharpExposedLayout_ConstMRCSharpExposedLayout._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// Constructs a copy of another instance. The source remains alive.
                public Const_Tuple_MRCSharpExposedLayout_ConstMRCSharpExposedLayout(Tuple_MRCSharpExposedLayout_ConstMRCSharpExposedLayout other) : this((Const_Tuple_MRCSharpExposedLayout_ConstMRCSharpExposedLayout)other) {}

                /// Constructs the tuple elementwise.
                public unsafe Const_Tuple_MRCSharpExposedLayout_ConstMRCSharpExposedLayout(MR.CS.CSharp.ExposedLayout _0, MR.CS.CSharp.ExposedLayout _1) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_MRCSharpExposedLayout_ConstMRCSharpExposedLayout._Underlying *__MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_Construct(MR.CS.CSharp.ExposedLayout _0, MR.CS.CSharp.ExposedLayout _1);
                    _UnderlyingPtr = __MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_Construct(_0, _1);
                }

                /// The element 0, of type `MR::CSharp::ExposedLayout`, read-only.
                public unsafe ref readonly MR.CS.CSharp.ExposedLayout GetMRCSharpExposedLayout()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_get_MR_CSharp_ExposedLayout", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ExposedLayout *__MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_get_MR_CSharp_ExposedLayout(_Underlying *_this);
                    return ref *__MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_get_MR_CSharp_ExposedLayout(_UnderlyingPtr);
                }

                /// The element 1, of type `const MR::CSharp::ExposedLayout`, read-only.
                public unsafe ref readonly MR.CS.CSharp.ExposedLayout GetConstMRCSharpExposedLayout()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_get_const_MR_CSharp_ExposedLayout", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ExposedLayout *__MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_get_const_MR_CSharp_ExposedLayout(_Underlying *_this);
                    return ref *__MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_get_const_MR_CSharp_ExposedLayout(_UnderlyingPtr);
                }

                // Custom extras:

                public void Deconstruct(out MR.CS.Misc.ConstRef<MR.CS.CSharp.ExposedLayout> _1, out MR.CS.Misc.ConstRef<MR.CS.CSharp.ExposedLayout> _2)
                {
                    _1 = new(in GetMRCSharpExposedLayout());
                    _2 = new(in GetConstMRCSharpExposedLayout());
                }
            }

            /// Stores 2 objects: `MR::CSharp::ExposedLayout`, `const MR::CSharp::ExposedLayout`.
            /// This is the non-const half of the class.
            public class Tuple_MRCSharpExposedLayout_ConstMRCSharpExposedLayout : Const_Tuple_MRCSharpExposedLayout_ConstMRCSharpExposedLayout
            {
                internal unsafe Tuple_MRCSharpExposedLayout_ConstMRCSharpExposedLayout(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Tuple_MRCSharpExposedLayout_ConstMRCSharpExposedLayout() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_MRCSharpExposedLayout_ConstMRCSharpExposedLayout._Underlying *__MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Tuple_MRCSharpExposedLayout_ConstMRCSharpExposedLayout(MR.CS.Std.Const_Tuple_MRCSharpExposedLayout_ConstMRCSharpExposedLayout other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_MRCSharpExposedLayout_ConstMRCSharpExposedLayout._Underlying *__MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_ConstructFromAnother(MR.CS.Std.Tuple_MRCSharpExposedLayout_ConstMRCSharpExposedLayout._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// Constructs a copy of another instance. The source remains alive.
                public Tuple_MRCSharpExposedLayout_ConstMRCSharpExposedLayout(Tuple_MRCSharpExposedLayout_ConstMRCSharpExposedLayout other) : this((Const_Tuple_MRCSharpExposedLayout_ConstMRCSharpExposedLayout)other) {}

                /// Constructs the tuple elementwise.
                public unsafe Tuple_MRCSharpExposedLayout_ConstMRCSharpExposedLayout(MR.CS.CSharp.ExposedLayout _0, MR.CS.CSharp.ExposedLayout _1) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_MRCSharpExposedLayout_ConstMRCSharpExposedLayout._Underlying *__MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_Construct(MR.CS.CSharp.ExposedLayout _0, MR.CS.CSharp.ExposedLayout _1);
                    _UnderlyingPtr = __MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_Construct(_0, _1);
                }

                /// The element 0, of type `MR::CSharp::ExposedLayout`, mutable.
                public unsafe new ref MR.CS.CSharp.ExposedLayout GetMRCSharpExposedLayout()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_get_MR_CSharp_ExposedLayout_mut", ExactSpelling = true)]
                    extern static MR.CS.CSharp.ExposedLayout *__MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_get_MR_CSharp_ExposedLayout_mut(_Underlying *_this);
                    return ref *__MR_C_std_tuple_MR_CSharp_ExposedLayout_const_MR_CSharp_ExposedLayout_get_MR_CSharp_ExposedLayout_mut(_UnderlyingPtr);
                }

                // Custom extras:

                public void Deconstruct(out MR.CS.Misc.Ref<MR.CS.CSharp.ExposedLayout> _1, out MR.CS.Misc.ConstRef<MR.CS.CSharp.ExposedLayout> _2)
                {
                    _1 = new(ref GetMRCSharpExposedLayout());
                    _2 = new(in GetConstMRCSharpExposedLayout());
                }
            }

            /// This is used for optional parameters of class `Tuple_MRCSharpExposedLayout_ConstMRCSharpExposedLayout` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Tuple_MRCSharpExposedLayout_ConstMRCSharpExposedLayout`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Tuple_MRCSharpExposedLayout_ConstMRCSharpExposedLayout`/`Const_Tuple_MRCSharpExposedLayout_ConstMRCSharpExposedLayout` directly.
            public class _InOptMut_Tuple_MRCSharpExposedLayout_ConstMRCSharpExposedLayout
            {
                public Tuple_MRCSharpExposedLayout_ConstMRCSharpExposedLayout? Opt;

                public _InOptMut_Tuple_MRCSharpExposedLayout_ConstMRCSharpExposedLayout() {}
                public _InOptMut_Tuple_MRCSharpExposedLayout_ConstMRCSharpExposedLayout(Tuple_MRCSharpExposedLayout_ConstMRCSharpExposedLayout value) {Opt = value;}
                public static implicit operator _InOptMut_Tuple_MRCSharpExposedLayout_ConstMRCSharpExposedLayout(Tuple_MRCSharpExposedLayout_ConstMRCSharpExposedLayout value) {return new(value);}
            }

            /// This is used for optional parameters of class `Tuple_MRCSharpExposedLayout_ConstMRCSharpExposedLayout` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Tuple_MRCSharpExposedLayout_ConstMRCSharpExposedLayout`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Tuple_MRCSharpExposedLayout_ConstMRCSharpExposedLayout`/`Const_Tuple_MRCSharpExposedLayout_ConstMRCSharpExposedLayout` to pass it to the function.
            public class _InOptConst_Tuple_MRCSharpExposedLayout_ConstMRCSharpExposedLayout
            {
                public Const_Tuple_MRCSharpExposedLayout_ConstMRCSharpExposedLayout? Opt;

                public _InOptConst_Tuple_MRCSharpExposedLayout_ConstMRCSharpExposedLayout() {}
                public _InOptConst_Tuple_MRCSharpExposedLayout_ConstMRCSharpExposedLayout(Const_Tuple_MRCSharpExposedLayout_ConstMRCSharpExposedLayout value) {Opt = value;}
                public static implicit operator _InOptConst_Tuple_MRCSharpExposedLayout_ConstMRCSharpExposedLayout(Const_Tuple_MRCSharpExposedLayout_ConstMRCSharpExposedLayout value) {return new(value);}
            }
        }
    }
}
