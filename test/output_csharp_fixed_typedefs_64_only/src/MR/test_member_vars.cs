public static partial class MR
{
    public static partial class CS
    {
        public static partial class MemberVars
        {
            /// Generated from class `MR::MemberVars::A`.
            /// This is the const half of the class.
            public class Const_A : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying; // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_A(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

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

                public static unsafe ref int Z
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_MemberVars_A_GetMutable_z", ExactSpelling = true)]
                        extern static int *__MR_MemberVars_A_GetMutable_z();
                        return ref *__MR_MemberVars_A_GetMutable_z();
                    }
                }

                public static unsafe int W
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_MemberVars_A_Get_w", ExactSpelling = true)]
                        extern static int *__MR_MemberVars_A_Get_w();
                        return *__MR_MemberVars_A_Get_w();
                    }
                }

                public unsafe int X
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_MemberVars_A_Get_x", ExactSpelling = true)]
                        extern static int *__MR_MemberVars_A_Get_x(_Underlying *_this);
                        return *__MR_MemberVars_A_Get_x(_UnderlyingPtr);
                    }
                }

                public unsafe int Y
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_MemberVars_A_Get_y", ExactSpelling = true)]
                        extern static int *__MR_MemberVars_A_Get_y(_Underlying *_this);
                        return *__MR_MemberVars_A_Get_y(_UnderlyingPtr);
                    }
                }

                // Those don't get setters, and also get only one (non-const-propagating) getter.
                public unsafe ref int Ref
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_MemberVars_A_Get_ref", ExactSpelling = true)]
                        extern static int *__MR_MemberVars_A_Get_ref(_Underlying *_this);
                        return ref *__MR_MemberVars_A_Get_ref(_UnderlyingPtr);
                    }
                }

                // Arrays don't get setters, because they aren't assignable. But they still get mutable getters
                public unsafe ref MR.CS.ArrayInt4 Arr
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_MemberVars_A_Get_arr", ExactSpelling = true)]
                        extern static MR.CS.ArrayInt4 *__MR_MemberVars_A_Get_arr(_Underlying *_this);
                        return ref *(__MR_MemberVars_A_Get_arr(_UnderlyingPtr));
                    }
                }

                /// Generated from constructor `MR::MemberVars::A::A`.
                public unsafe Const_A(MR.CS.MemberVars.Const_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_MemberVars_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.MemberVars.A._Underlying *__MR_MemberVars_A_ConstructFromAnother(MR.CS.MemberVars.A._Underlying *_other);
                    _UnderlyingPtr = __MR_MemberVars_A_ConstructFromAnother(_other._UnderlyingPtr);
                }
            }

            /// Generated from class `MR::MemberVars::A`.
            /// This is the non-const half of the class.
            public class A : Const_A
            {
                internal unsafe A(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                public new unsafe ref int X
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_MemberVars_A_GetMutable_x", ExactSpelling = true)]
                        extern static int *__MR_MemberVars_A_GetMutable_x(_Underlying *_this);
                        return ref *__MR_MemberVars_A_GetMutable_x(_UnderlyingPtr);
                    }
                }

                // Arrays don't get setters, because they aren't assignable. But they still get mutable getters
                new public unsafe ref MR.CS.ArrayInt4 Arr
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_MemberVars_A_GetMutable_arr", ExactSpelling = true)]
                        extern static MR.CS.ArrayInt4 *__MR_MemberVars_A_GetMutable_arr(_Underlying *_this);
                        return ref *(__MR_MemberVars_A_GetMutable_arr(_UnderlyingPtr));
                    }
                }

                /// Generated from constructor `MR::MemberVars::A::A`.
                public unsafe A(MR.CS.MemberVars.Const_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_MemberVars_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.MemberVars.A._Underlying *__MR_MemberVars_A_ConstructFromAnother(MR.CS.MemberVars.A._Underlying *_other);
                    _UnderlyingPtr = __MR_MemberVars_A_ConstructFromAnother(_other._UnderlyingPtr);
                }
            }

            /// This is used for optional parameters of class `A` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_A`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `A`/`Const_A` directly.
            public class _InOptMut_A
            {
                public A? Opt;

                public _InOptMut_A() {}
                public _InOptMut_A(A value) {Opt = value;}
                public static implicit operator _InOptMut_A(A value) {return new(value);}
            }

            /// This is used for optional parameters of class `A` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_A`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `A`/`Const_A` to pass it to the function.
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
