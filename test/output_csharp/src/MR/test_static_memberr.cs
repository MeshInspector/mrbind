public static partial class MR
{
    public static partial class CS
    {
        public static partial class StaticFuncs
        {
            /// Generated from class `MR::StaticFuncs::A`.
            /// This is the const half of the class.
            public class Const_A : MR.CS.Misc.Object<Const_A>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StaticFuncs_A_Destroy", ExactSpelling = true)]
                    extern static void __MR_StaticFuncs_A_Destroy(_Underlying *_this);
                    __MR_StaticFuncs_A_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_A() {Dispose(false);}

                public static unsafe ref int X
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StaticFuncs_A_GetMutable_x", ExactSpelling = true)]
                        extern static int *__MR_StaticFuncs_A_GetMutable_x();
                        return ref *__MR_StaticFuncs_A_GetMutable_x();
                    }
                }

                internal unsafe Const_A(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_A() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StaticFuncs_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.StaticFuncs.A._Underlying *__MR_StaticFuncs_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_StaticFuncs_A_DefaultConstruct();
                }

                /// Generated from constructor `MR::StaticFuncs::A::A`.
                public unsafe Const_A(MR.CS.StaticFuncs.Const_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StaticFuncs_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.StaticFuncs.A._Underlying *__MR_StaticFuncs_A_ConstructFromAnother(MR.CS.StaticFuncs.A._Underlying *_other);
                    _UnderlyingPtr = __MR_StaticFuncs_A_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// Generated from method `MR::StaticFuncs::A::blah`.
                public static void Blah()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StaticFuncs_A_blah", ExactSpelling = true)]
                    extern static void __MR_StaticFuncs_A_blah();
                    __MR_StaticFuncs_A_blah();
                }
            }

            /// Generated from class `MR::StaticFuncs::A`.
            /// This is the non-const half of the class.
            public class A : Const_A
            {
                internal unsafe A(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe A() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StaticFuncs_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.StaticFuncs.A._Underlying *__MR_StaticFuncs_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_StaticFuncs_A_DefaultConstruct();
                }

                /// Generated from constructor `MR::StaticFuncs::A::A`.
                public unsafe A(MR.CS.StaticFuncs.Const_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StaticFuncs_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.StaticFuncs.A._Underlying *__MR_StaticFuncs_A_ConstructFromAnother(MR.CS.StaticFuncs.A._Underlying *_other);
                    _UnderlyingPtr = __MR_StaticFuncs_A_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// Generated from method `MR::StaticFuncs::A::operator=`.
                public unsafe MR.CS.StaticFuncs.A Assign(MR.CS.StaticFuncs.Const_A _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StaticFuncs_A_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.StaticFuncs.A._Underlying *__MR_StaticFuncs_A_AssignFromAnother(_Underlying *_this, MR.CS.StaticFuncs.A._Underlying *_other);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_StaticFuncs_A_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
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
