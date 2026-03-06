public static partial class MR
{
    public static partial class CS
    {
        /// <summary>
        /// Generated from class `MR::SeparateB`.
        /// This is the const half of the class.
        /// </summary>
        public class Const_SeparateB : MR.CS.Misc.Object<Const_SeparateB>, System.IDisposable
        {
            internal struct _Underlying {} // Represents the underlying C++ type.

            internal unsafe _Underlying *_UnderlyingPtr;

            protected virtual unsafe void Dispose(bool disposing)
            {
                if (_UnderlyingPtr is null || !_IsOwningVal)
                    return;
                [System.Runtime.InteropServices.DllImport("bleh_B", EntryPoint = "MR_SeparateB_Destroy", ExactSpelling = true)]
                extern static void __MR_SeparateB_Destroy(_Underlying *_this);
                __MR_SeparateB_Destroy(_UnderlyingPtr);
                _UnderlyingPtr = null;
            }
            public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
            ~Const_SeparateB() {Dispose(false);}

            internal unsafe Const_SeparateB(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

            /// <summary>
            /// Constructs an empty (default-constructed) instance.
            /// </summary>
            public unsafe Const_SeparateB() : this(null, is_owning: true)
            {
                [System.Runtime.InteropServices.DllImport("bleh_B", EntryPoint = "MR_SeparateB_DefaultConstruct", ExactSpelling = true)]
                extern static MR.CS.SeparateB._Underlying *__MR_SeparateB_DefaultConstruct();
                _UnderlyingPtr = __MR_SeparateB_DefaultConstruct();
            }

            /// <summary>
            /// Generated from constructor `MR::SeparateB::SeparateB`.
            /// </summary>
            public unsafe Const_SeparateB(MR.CS.Const_SeparateB _other) : this(null, is_owning: true)
            {
                [System.Runtime.InteropServices.DllImport("bleh_B", EntryPoint = "MR_SeparateB_ConstructFromAnother", ExactSpelling = true)]
                extern static MR.CS.SeparateB._Underlying *__MR_SeparateB_ConstructFromAnother(MR.CS.SeparateB._Underlying *_other);
                _UnderlyingPtr = __MR_SeparateB_ConstructFromAnother(_other._UnderlyingPtr);
                _KeepAlive(_other);
            }

            /// <summary>
            /// Generated from constructor `MR::SeparateB::SeparateB`.
            /// </summary>
            public Const_SeparateB(SeparateB _other) : this((Const_SeparateB)_other) {}
        }

        /// <summary>
        /// Generated from class `MR::SeparateB`.
        /// This is the non-const half of the class.
        /// </summary>
        public class SeparateB : Const_SeparateB
        {
            internal unsafe SeparateB(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

            /// <summary>
            /// Constructs an empty (default-constructed) instance.
            /// </summary>
            public unsafe SeparateB() : this(null, is_owning: true)
            {
                [System.Runtime.InteropServices.DllImport("bleh_B", EntryPoint = "MR_SeparateB_DefaultConstruct", ExactSpelling = true)]
                extern static MR.CS.SeparateB._Underlying *__MR_SeparateB_DefaultConstruct();
                _UnderlyingPtr = __MR_SeparateB_DefaultConstruct();
            }

            /// <summary>
            /// Generated from constructor `MR::SeparateB::SeparateB`.
            /// </summary>
            public unsafe SeparateB(MR.CS.Const_SeparateB _other) : this(null, is_owning: true)
            {
                [System.Runtime.InteropServices.DllImport("bleh_B", EntryPoint = "MR_SeparateB_ConstructFromAnother", ExactSpelling = true)]
                extern static MR.CS.SeparateB._Underlying *__MR_SeparateB_ConstructFromAnother(MR.CS.SeparateB._Underlying *_other);
                _UnderlyingPtr = __MR_SeparateB_ConstructFromAnother(_other._UnderlyingPtr);
                _KeepAlive(_other);
            }

            /// <summary>
            /// Generated from constructor `MR::SeparateB::SeparateB`.
            /// </summary>
            public SeparateB(SeparateB _other) : this((Const_SeparateB)_other) {}

            /// <summary>
            /// Generated from method `MR::SeparateB::operator=`.
            /// </summary>
            public unsafe MR.CS.SeparateB assign(MR.CS.Const_SeparateB _other)
            {
                [System.Runtime.InteropServices.DllImport("bleh_B", EntryPoint = "MR_SeparateB_AssignFromAnother", ExactSpelling = true)]
                extern static MR.CS.SeparateB._Underlying *__MR_SeparateB_AssignFromAnother(_Underlying *_this, MR.CS.SeparateB._Underlying *_other);
                _DiscardKeepAlive();
                _KeepAlive(_other);
                return new(__MR_SeparateB_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
            }
        }

        /// <summary>
        /// This is used for optional parameters of class `SeparateB` with default arguments.
        /// This is only used mutable parameters. For const ones we have `_InOptConst_SeparateB`.
        /// Usage:
        /// * Pass `null` to use the default argument.
        /// * Pass `new()` to pass no object.
        /// * Pass an instance of `SeparateB`/`Const_SeparateB` directly.
        /// </summary>
        public class _InOptMut_SeparateB
        {
            public SeparateB? Opt;

            public _InOptMut_SeparateB() {}
            public _InOptMut_SeparateB(SeparateB value) {Opt = value;}
            public static implicit operator _InOptMut_SeparateB(SeparateB value) {return new(value);}
        }

        /// <summary>
        /// This is used for optional parameters of class `SeparateB` with default arguments.
        /// This is only used const parameters. For non-const ones we have `_InOptMut_SeparateB`.
        /// Usage:
        /// * Pass `null` to use the default argument.
        /// * Pass `new()` to pass no object.
        /// * Pass an instance of `SeparateB`/`Const_SeparateB` to pass it to the function.
        /// </summary>
        public class _InOptConst_SeparateB
        {
            public Const_SeparateB? Opt;

            public _InOptConst_SeparateB() {}
            public _InOptConst_SeparateB(Const_SeparateB value) {Opt = value;}
            public static implicit operator _InOptConst_SeparateB(Const_SeparateB value) {return new(value);}
        }

        /// <summary>
        /// Generated from function `MR::GetSeparateVecB`.
        /// </summary>
        public static unsafe MR.CS.Misc._Moved<MR.CS.Std.Vector_MRSeparateB> getSeparateVecB()
        {
            [System.Runtime.InteropServices.DllImport("bleh_B", EntryPoint = "MR_GetSeparateVecB", ExactSpelling = true)]
            extern static MR.CS.Std.Vector_MRSeparateB._Underlying *__MR_GetSeparateVecB();
            return MR.CS.Misc.Move(new MR.CS.Std.Vector_MRSeparateB(__MR_GetSeparateVecB(), is_owning: true));
        }
    }
}
