public static partial class MR
{
    public static partial class CS
    {
        public static partial class IOStream
        {
            /// Generated from class `MR::IOStream::A`.
            /// This is the const half of the class.
            public class Const_A : MR.CS.Misc.Object, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_A(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_IOStream_A_Destroy", ExactSpelling = true)]
                    extern static void __MR_IOStream_A_Destroy(_Underlying *_this);
                    __MR_IOStream_A_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_A() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_A() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_IOStream_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.IOStream.A._Underlying *__MR_IOStream_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_IOStream_A_DefaultConstruct();
                }

                /// Generated from constructor `MR::IOStream::A::A`.
                public unsafe Const_A(MR.CS.IOStream.Const_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_IOStream_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.IOStream.A._Underlying *__MR_IOStream_A_ConstructFromAnother(MR.CS.IOStream.A._Underlying *_other);
                    _UnderlyingPtr = __MR_IOStream_A_ConstructFromAnother(_other._UnderlyingPtr);
                }
            }

            /// Generated from class `MR::IOStream::A`.
            /// This is the non-const half of the class.
            public class A : Const_A
            {
                internal unsafe A(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe A() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_IOStream_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.IOStream.A._Underlying *__MR_IOStream_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_IOStream_A_DefaultConstruct();
                }

                /// Generated from constructor `MR::IOStream::A::A`.
                public unsafe A(MR.CS.IOStream.Const_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_IOStream_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.IOStream.A._Underlying *__MR_IOStream_A_ConstructFromAnother(MR.CS.IOStream.A._Underlying *_other);
                    _UnderlyingPtr = __MR_IOStream_A_ConstructFromAnother(_other._UnderlyingPtr);
                }

                /// Generated from method `MR::IOStream::A::operator=`.
                public unsafe MR.CS.IOStream.A Assign(MR.CS.IOStream.Const_A _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_IOStream_A_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.IOStream.A._Underlying *__MR_IOStream_A_AssignFromAnother(_Underlying *_this, MR.CS.IOStream.A._Underlying *_other);
                    return new(__MR_IOStream_A_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
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
