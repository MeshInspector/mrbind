public static partial class MR
{
    public static partial class CS
    {
        public static partial class ConvOps
        {
            /// <summary>
            /// Generated from class `MR::ConvOps::A`.
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
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_ConvOps_A_Destroy", ExactSpelling = true)]
                    extern static void __MR_ConvOps_A_Destroy(_Underlying *_this);
                    __MR_ConvOps_A_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_A() {Dispose(false);}

                internal unsafe Const_A(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_A() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_ConvOps_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.ConvOps.A._Underlying *__MR_ConvOps_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_ConvOps_A_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::ConvOps::A::A`.
                /// </summary>
                public unsafe Const_A(MR.CS.ConvOps.Const_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_ConvOps_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.ConvOps.A._Underlying *__MR_ConvOps_A_ConstructFromAnother(MR.CS.ConvOps.A._Underlying *_other);
                    _UnderlyingPtr = __MR_ConvOps_A_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// <summary>
                /// Generated from constructor `MR::ConvOps::A::A`.
                /// </summary>
                public Const_A(A _other) : this((Const_A)_other) {}

                /// <summary>
                /// Generated from conversion operator `MR::ConvOps::A::operator bool`.
                /// </summary>
                public static unsafe explicit operator bool(MR.CS.ConvOps.Const_A _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_ConvOps_A_ConvertTo_bool", ExactSpelling = true)]
                    extern static byte __MR_ConvOps_A_ConvertTo_bool(MR.CS.ConvOps.Const_A._Underlying *_this);
                    return __MR_ConvOps_A_ConvertTo_bool(_this._UnderlyingPtr) != 0;
                }
            }

            /// <summary>
            /// Generated from class `MR::ConvOps::A`.
            /// This is the non-const half of the class.
            /// </summary>
            public class A : Const_A
            {
                internal unsafe A(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe A() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_ConvOps_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.ConvOps.A._Underlying *__MR_ConvOps_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_ConvOps_A_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::ConvOps::A::A`.
                /// </summary>
                public unsafe A(MR.CS.ConvOps.Const_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_ConvOps_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.ConvOps.A._Underlying *__MR_ConvOps_A_ConstructFromAnother(MR.CS.ConvOps.A._Underlying *_other);
                    _UnderlyingPtr = __MR_ConvOps_A_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// <summary>
                /// Generated from constructor `MR::ConvOps::A::A`.
                /// </summary>
                public A(A _other) : this((Const_A)_other) {}

                /// <summary>
                /// Generated from method `MR::ConvOps::A::operator=`.
                /// </summary>
                public unsafe MR.CS.ConvOps.A assign(MR.CS.ConvOps.Const_A _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_ConvOps_A_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.ConvOps.A._Underlying *__MR_ConvOps_A_AssignFromAnother(_Underlying *_this, MR.CS.ConvOps.A._Underlying *_other);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_ConvOps_A_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
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
