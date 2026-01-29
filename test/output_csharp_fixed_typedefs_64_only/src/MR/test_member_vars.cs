public static partial class MR
{
    public static partial class CS
    {
        public static partial class MemberVars
        {
            /// <summary>
            /// Generated from class `MR::MemberVars::A`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_A : MR.CS.Misc.Object<Const_A>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_MemberVars_A_Destroy", ExactSpelling = true)]
                    extern static void __MR_MemberVars_A_Destroy(_Underlying *_this);
                    __MR_MemberVars_A_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_A() {Dispose(false);}

                public static unsafe ref int Z => ref *__ref_storage_Z;
                private protected static unsafe int *__ref_storage_Z;

                public static unsafe int W => *__ref_storage_W;
                private protected static unsafe int *__ref_storage_W;

                public unsafe int x => *__ref_storage_x;
                private protected unsafe int *__ref_storage_x;

                public unsafe int y => *__ref_storage_y;
                private protected unsafe int *__ref_storage_y;

                // Those don't get setters, and also get only one (non-const-propagating) getter.
                public unsafe ref int ref_ => ref *__ref_storage_ref_;
                private protected unsafe int *__ref_storage_ref_;

                // Arrays don't get setters, because they aren't assignable. But they still get mutable getters
                public unsafe ref MR.CS.ArrayInt4 arr => ref *(__array_storage_arr);
                private protected unsafe MR.CS.ArrayInt4 *__array_storage_arr;

                unsafe static Const_A()
                {
                    { // Z (ref)
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_MemberVars_A_GetMutable_z", ExactSpelling = true)]
                        extern static int *__MR_MemberVars_A_GetMutable_z();
                        Const_A.__ref_storage_Z = __MR_MemberVars_A_GetMutable_z();
                    }

                    { // W (ref)
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_MemberVars_A_Get_w", ExactSpelling = true)]
                        extern static int *__MR_MemberVars_A_Get_w();
                        Const_A.__ref_storage_W = __MR_MemberVars_A_Get_w();
                    }
                }

                /// <summary>
                /// Constructors call this at the end to initialize class fields.
                /// </summary>
                protected unsafe void _FinalizeFields()
                {
                    { // x (ref)
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_MemberVars_A_Get_x", ExactSpelling = true)]
                        extern static int *__MR_MemberVars_A_Get_x(MR.CS.MemberVars.Const_A._Underlying *_this);
                        this.__ref_storage_x = __MR_MemberVars_A_Get_x(_UnderlyingPtr);
                    }

                    { // y (ref)
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_MemberVars_A_Get_y", ExactSpelling = true)]
                        extern static int *__MR_MemberVars_A_Get_y(MR.CS.MemberVars.Const_A._Underlying *_this);
                        this.__ref_storage_y = __MR_MemberVars_A_Get_y(_UnderlyingPtr);
                    }

                    { // ref_ (ref)
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_MemberVars_A_Get_ref", ExactSpelling = true)]
                        extern static int *__MR_MemberVars_A_Get_ref(MR.CS.MemberVars.Const_A._Underlying *_this);
                        this.__ref_storage_ref_ = __MR_MemberVars_A_Get_ref(_UnderlyingPtr);
                    }

                    { // arr (ref array)
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_MemberVars_A_Get_arr", ExactSpelling = true)]
                        extern static MR.CS.ArrayInt4 *__MR_MemberVars_A_Get_arr(_Underlying *_this);
                        this.__array_storage_arr = __MR_MemberVars_A_Get_arr(_UnderlyingPtr);
                    }
                }

                // Don't warn about some fields remaining conditionally uninitialized. We initialize them later.
                #pragma warning disable CS8618
                internal unsafe Const_A(_Underlying *ptr, bool is_owning) : base(is_owning)
                {
                    _UnderlyingPtr = ptr;
                    if (ptr is not null)
                        _FinalizeFields();
                }
                #pragma warning restore CS8618

                /// <summary>
                /// Generated from constructor `MR::MemberVars::A::A`.
                /// </summary>
                public unsafe Const_A(MR.CS.MemberVars.Const_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_MemberVars_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.MemberVars.A._Underlying *__MR_MemberVars_A_ConstructFromAnother(MR.CS.MemberVars.A._Underlying *_other);
                    _UnderlyingPtr = __MR_MemberVars_A_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                    _FinalizeFields();
                }
            }

            /// <summary>
            /// Generated from class `MR::MemberVars::A`.
            /// This is the non-const half of the class.
            /// </summary>
            public class A : Const_A
            {
                public new unsafe ref int x => ref *__ref_storage_x;

                // Arrays don't get setters, because they aren't assignable. But they still get mutable getters
                new public unsafe ref MR.CS.ArrayInt4 arr => ref *(__array_storage_arr);

                // Don't warn about some fields remaining conditionally uninitialized. We initialize them later.
                #pragma warning disable CS8618
                internal unsafe A(_Underlying *ptr, bool is_owning) : base(ptr, is_owning)
                {
                    if (ptr is not null)
                        _FinalizeFields();
                }
                #pragma warning restore CS8618

                /// <summary>
                /// Generated from constructor `MR::MemberVars::A::A`.
                /// </summary>
                public unsafe A(MR.CS.MemberVars.Const_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_MemberVars_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.MemberVars.A._Underlying *__MR_MemberVars_A_ConstructFromAnother(MR.CS.MemberVars.A._Underlying *_other);
                    _UnderlyingPtr = __MR_MemberVars_A_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                    _FinalizeFields();
                }
            }

            /// <summary>
            /// This is used for optional parameters of class `A` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_A`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `A`/`Const_A` directly.
            /// </summary>
            public class _InOptMut_A
            {
                public A? Opt;

                public _InOptMut_A() {}
                public _InOptMut_A(A value) {Opt = value;}
                public static implicit operator _InOptMut_A(A value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `A` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_A`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `A`/`Const_A` to pass it to the function.
            /// </summary>
            public class _InOptConst_A
            {
                public Const_A? Opt;

                public _InOptConst_A() {}
                public _InOptConst_A(Const_A value) {Opt = value;}
                public static implicit operator _InOptConst_A(Const_A value) {return new(value);}
            }
        }
    }
}
