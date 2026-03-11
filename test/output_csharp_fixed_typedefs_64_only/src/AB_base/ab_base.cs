public static partial class MR
{
    public static partial class CS
    {
        /// <summary>
        /// Generated from class `MR::CommonBaseAB`.
        /// Derived classes:
        ///   Direct: (non-virtual)
        ///     `MR::SeparateA`
        ///     `MR::SeparateB`
        /// This is the const half of the class.
        /// </summary>
        public class Const_CommonBaseAB : MR.CS.Misc.Object<Const_CommonBaseAB>, System.IDisposable
        {
            internal struct _Underlying {} // Represents the underlying C++ type.

            internal unsafe _Underlying *_UnderlyingPtr;

            protected virtual unsafe void Dispose(bool disposing)
            {
                if (_UnderlyingPtr is null || !_IsOwningVal)
                    return;
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CommonBaseAB_Destroy", ExactSpelling = true)]
                extern static void __MR_CommonBaseAB_Destroy(_Underlying *_this);
                __MR_CommonBaseAB_Destroy(_UnderlyingPtr);
                _UnderlyingPtr = null;
            }
            public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
            ~Const_CommonBaseAB() {Dispose(false);}

            internal unsafe Const_CommonBaseAB(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

            /// <summary>
            /// Generated from constructor `MR::CommonBaseAB::CommonBaseAB`.
            /// </summary>
            public unsafe Const_CommonBaseAB(MR.CS._ByValue_CommonBaseAB _other) : this(null, is_owning: true)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CommonBaseAB_ConstructFromAnother", ExactSpelling = true)]
                extern static MR.CS.CommonBaseAB._Underlying *__MR_CommonBaseAB_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CommonBaseAB._Underlying *_other);
                _UnderlyingPtr = __MR_CommonBaseAB_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                if (_other.Value is not null) _KeepAlive(_other.Value);
            }

            /// <summary>
            /// Generated from constructor `MR::CommonBaseAB::CommonBaseAB`.
            /// </summary>
            public Const_CommonBaseAB(Const_CommonBaseAB _other) : this(new _ByValue_CommonBaseAB(_other)) {}

            /// <summary>
            /// Generated from constructor `MR::CommonBaseAB::CommonBaseAB`.
            /// </summary>
            public Const_CommonBaseAB(CommonBaseAB _other) : this((Const_CommonBaseAB)_other) {}
        }

        /// <summary>
        /// Generated from class `MR::CommonBaseAB`.
        /// Derived classes:
        ///   Direct: (non-virtual)
        ///     `MR::SeparateA`
        ///     `MR::SeparateB`
        /// This is the non-const half of the class.
        /// </summary>
        public class CommonBaseAB : Const_CommonBaseAB
        {
            internal unsafe CommonBaseAB(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

            /// <summary>
            /// Generated from constructor `MR::CommonBaseAB::CommonBaseAB`.
            /// </summary>
            public unsafe CommonBaseAB(MR.CS._ByValue_CommonBaseAB _other) : this(null, is_owning: true)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CommonBaseAB_ConstructFromAnother", ExactSpelling = true)]
                extern static MR.CS.CommonBaseAB._Underlying *__MR_CommonBaseAB_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CommonBaseAB._Underlying *_other);
                _UnderlyingPtr = __MR_CommonBaseAB_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                if (_other.Value is not null) _KeepAlive(_other.Value);
            }

            /// <summary>
            /// Generated from constructor `MR::CommonBaseAB::CommonBaseAB`.
            /// </summary>
            public CommonBaseAB(Const_CommonBaseAB _other) : this(new _ByValue_CommonBaseAB(_other)) {}

            /// <summary>
            /// Generated from constructor `MR::CommonBaseAB::CommonBaseAB`.
            /// </summary>
            public CommonBaseAB(CommonBaseAB _other) : this((Const_CommonBaseAB)_other) {}

            /// <summary>
            /// Generated from method `MR::CommonBaseAB::operator=`.
            /// </summary>
            public unsafe MR.CS.CommonBaseAB assign(MR.CS._ByValue_CommonBaseAB _other)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CommonBaseAB_AssignFromAnother", ExactSpelling = true)]
                extern static MR.CS.CommonBaseAB._Underlying *__MR_CommonBaseAB_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.CommonBaseAB._Underlying *_other);
                MR.CS.CommonBaseAB __ret;
                __ret = new(__MR_CommonBaseAB_AssignFromAnother(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null), is_owning: false);
                _DiscardKeepAlive();
                if (_other.Value is not null) _KeepAlive(_other.Value);
                __ret._KeepAlive(this);
                return __ret;
            }
        }

        /// <summary>
        /// This is used as a function parameter when the underlying function receives `CommonBaseAB` by value.
        /// Usage:
        /// * Pass an instance of `CommonBaseAB`/`Const_CommonBaseAB` to copy it into the function.
        /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
        ///   Be careful if your input isn&apos;t a unique reference to this object.
        /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
        /// </summary>
        public class _ByValue_CommonBaseAB
        {
            #pragma warning disable CS0649
            internal readonly Const_CommonBaseAB? Value;
            #pragma warning restore CS0649
            internal readonly MR.CS.Misc._PassBy PassByMode;
            public _ByValue_CommonBaseAB(Const_CommonBaseAB new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
            public static implicit operator _ByValue_CommonBaseAB(Const_CommonBaseAB arg) {return new(arg);}
            public _ByValue_CommonBaseAB(MR.CS.Misc._Moved<CommonBaseAB> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
            public static implicit operator _ByValue_CommonBaseAB(MR.CS.Misc._Moved<CommonBaseAB> arg) {return new(arg);}
        }

        /// <summary>
        /// This is used for optional parameters of class `CommonBaseAB` with default arguments.
        /// This is only used mutable parameters. For const ones we have `_InOptConst_CommonBaseAB`.
        /// Usage:
        /// * Pass `null` to use the default argument.
        /// * Pass `new()` to pass no object.
        /// * Pass an instance of `CommonBaseAB`/`Const_CommonBaseAB` directly.
        /// </summary>
        public class _InOptMut_CommonBaseAB
        {
            public CommonBaseAB? Opt;

            public _InOptMut_CommonBaseAB() {}
            public _InOptMut_CommonBaseAB(CommonBaseAB value) {Opt = value;}
            public static implicit operator _InOptMut_CommonBaseAB(CommonBaseAB value) {return new(value);}
        }

        /// <summary>
        /// This is used for optional parameters of class `CommonBaseAB` with default arguments.
        /// This is only used const parameters. For non-const ones we have `_InOptMut_CommonBaseAB`.
        /// Usage:
        /// * Pass `null` to use the default argument.
        /// * Pass `new()` to pass no object.
        /// * Pass an instance of `CommonBaseAB`/`Const_CommonBaseAB` to pass it to the function.
        /// </summary>
        public class _InOptConst_CommonBaseAB
        {
            public Const_CommonBaseAB? Opt;

            public _InOptConst_CommonBaseAB() {}
            public _InOptConst_CommonBaseAB(Const_CommonBaseAB value) {Opt = value;}
            public static implicit operator _InOptConst_CommonBaseAB(Const_CommonBaseAB value) {return new(value);}
        }
    }
}
