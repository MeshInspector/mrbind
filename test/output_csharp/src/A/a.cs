public static partial class MR
{
    public static partial class CS
    {
        /// Generated from class `MR::SeparateA`.
        /// This is the const half of the class.
        public class Const_SeparateA : MR.CS.Misc.Object<Const_SeparateA>, System.IDisposable
        {
            internal struct _Underlying {} // Represents the underlying C++ type.

            internal unsafe _Underlying *_UnderlyingPtr;

            protected virtual unsafe void Dispose(bool disposing)
            {
                if (_UnderlyingPtr is null || !_IsOwningVal)
                    return;
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_SeparateA_Destroy", ExactSpelling = true)]
                extern static void __MR_SeparateA_Destroy(_Underlying *_this);
                __MR_SeparateA_Destroy(_UnderlyingPtr);
                _UnderlyingPtr = null;
            }
            public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
            ~Const_SeparateA() {Dispose(false);}

            internal unsafe Const_SeparateA(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

            /// Constructs an empty (default-constructed) instance.
            public unsafe Const_SeparateA() : this(null, is_owning: true)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_SeparateA_DefaultConstruct", ExactSpelling = true)]
                extern static MR.CS.SeparateA._Underlying *__MR_SeparateA_DefaultConstruct();
                _UnderlyingPtr = __MR_SeparateA_DefaultConstruct();
            }

            /// Generated from constructor `MR::SeparateA::SeparateA`.
            public unsafe Const_SeparateA(MR.CS.Const_SeparateA _other) : this(null, is_owning: true)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_SeparateA_ConstructFromAnother", ExactSpelling = true)]
                extern static MR.CS.SeparateA._Underlying *__MR_SeparateA_ConstructFromAnother(MR.CS.SeparateA._Underlying *_other);
                _UnderlyingPtr = __MR_SeparateA_ConstructFromAnother(_other._UnderlyingPtr);
                _KeepAlive(_other);
            }

            /// Generated from constructor `MR::SeparateA::SeparateA`.
            public Const_SeparateA(SeparateA _other) : this((Const_SeparateA)_other) {}
        }

        /// Generated from class `MR::SeparateA`.
        /// This is the non-const half of the class.
        public class SeparateA : Const_SeparateA
        {
            internal unsafe SeparateA(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

            /// Constructs an empty (default-constructed) instance.
            public unsafe SeparateA() : this(null, is_owning: true)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_SeparateA_DefaultConstruct", ExactSpelling = true)]
                extern static MR.CS.SeparateA._Underlying *__MR_SeparateA_DefaultConstruct();
                _UnderlyingPtr = __MR_SeparateA_DefaultConstruct();
            }

            /// Generated from constructor `MR::SeparateA::SeparateA`.
            public unsafe SeparateA(MR.CS.Const_SeparateA _other) : this(null, is_owning: true)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_SeparateA_ConstructFromAnother", ExactSpelling = true)]
                extern static MR.CS.SeparateA._Underlying *__MR_SeparateA_ConstructFromAnother(MR.CS.SeparateA._Underlying *_other);
                _UnderlyingPtr = __MR_SeparateA_ConstructFromAnother(_other._UnderlyingPtr);
                _KeepAlive(_other);
            }

            /// Generated from constructor `MR::SeparateA::SeparateA`.
            public SeparateA(SeparateA _other) : this((Const_SeparateA)_other) {}

            /// Generated from method `MR::SeparateA::operator=`.
            public unsafe MR.CS.SeparateA Assign(MR.CS.Const_SeparateA _other)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_SeparateA_AssignFromAnother", ExactSpelling = true)]
                extern static MR.CS.SeparateA._Underlying *__MR_SeparateA_AssignFromAnother(_Underlying *_this, MR.CS.SeparateA._Underlying *_other);
                _DiscardKeepAlive();
                _KeepAlive(_other);
                return new(__MR_SeparateA_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
            }
        }

        /// This is used for optional parameters of class `SeparateA` with default arguments.
        /// This is only used mutable parameters. For const ones we have `_InOptConst_SeparateA`.
        /// Usage:
        /// * Pass `null` to use the default argument.
        /// * Pass `new()` to pass no object.
        /// * Pass an instance of `SeparateA`/`Const_SeparateA` directly.
        public class _InOptMut_SeparateA
        {
            public SeparateA? Opt;

            public _InOptMut_SeparateA() {}
            public _InOptMut_SeparateA(SeparateA value) {Opt = value;}
            public static implicit operator _InOptMut_SeparateA(SeparateA value) {return new(value);}
        }

        /// This is used for optional parameters of class `SeparateA` with default arguments.
        /// This is only used const parameters. For non-const ones we have `_InOptMut_SeparateA`.
        /// Usage:
        /// * Pass `null` to use the default argument.
        /// * Pass `new()` to pass no object.
        /// * Pass an instance of `SeparateA`/`Const_SeparateA` to pass it to the function.
        public class _InOptConst_SeparateA
        {
            public Const_SeparateA? Opt;

            public _InOptConst_SeparateA() {}
            public _InOptConst_SeparateA(Const_SeparateA value) {Opt = value;}
            public static implicit operator _InOptConst_SeparateA(Const_SeparateA value) {return new(value);}
        }

        /// Generated from function `MR::GetSeparateVecA`.
        public static unsafe MR.CS.Std.Vector_MRSeparateA GetSeparateVecA()
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_GetSeparateVecA", ExactSpelling = true)]
            extern static MR.CS.Std.Vector_MRSeparateA._Underlying *__MR_GetSeparateVecA();
            return new(__MR_GetSeparateVecA(), is_owning: true);
        }
    }
}
