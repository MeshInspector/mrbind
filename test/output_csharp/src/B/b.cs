public static partial class MR
{
    public static partial class CS
    {
        /// Generated from class `MR::SeparateB`.
        /// Base classes:
        ///   Direct: (non-virtual)
        ///     `MR::CommonBaseAB`
        /// This is the const half of the class.
        public class Const_SeparateB : MR.CS.Misc.Object<Const_SeparateB>, System.IDisposable
        {
            internal struct _Underlying {} // Represents the underlying C++ type.

            internal unsafe _Underlying *_UnderlyingPtr;

            protected virtual unsafe void Dispose(bool disposing)
            {
                if (_UnderlyingPtr is null || !_IsOwningVal)
                    return;
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_SeparateB_Destroy", ExactSpelling = true)]
                extern static void __MR_SeparateB_Destroy(_Underlying *_this);
                __MR_SeparateB_Destroy(_UnderlyingPtr);
                _UnderlyingPtr = null;
            }
            public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
            ~Const_SeparateB() {Dispose(false);}

            // Upcasts:
            public static unsafe implicit operator MR.CS.Const_CommonBaseAB(Const_SeparateB self)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_SeparateB_UpcastTo_MR_CommonBaseAB", ExactSpelling = true)]
                extern static MR.CS.Const_CommonBaseAB._Underlying *__MR_SeparateB_UpcastTo_MR_CommonBaseAB(_Underlying *_this);
                MR.CS.Const_CommonBaseAB ret = new(__MR_SeparateB_UpcastTo_MR_CommonBaseAB(self._UnderlyingPtr), is_owning: false);
                ret._KeepAliveEnclosingObject = self;
                return ret;
            }

            // Downcasts:
            public static unsafe explicit operator Const_SeparateB?(MR.CS.Const_CommonBaseAB parent)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_SeparateB_DynamicDowncastFrom_MR_CommonBaseAB", ExactSpelling = true)]
                extern static _Underlying *__MR_SeparateB_DynamicDowncastFrom_MR_CommonBaseAB(MR.CS.Const_CommonBaseAB._Underlying *_this);
                var ptr = __MR_SeparateB_DynamicDowncastFrom_MR_CommonBaseAB(parent._UnderlyingPtr);
                if (ptr is null) return null;
                Const_SeparateB ret = new(ptr, is_owning: false);
                ret._KeepAliveEnclosingObject = parent;
                return ret;
            }

            internal unsafe Const_SeparateB(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

            /// Generated from constructor `MR::SeparateB::SeparateB`.
            public unsafe Const_SeparateB(MR.CS._ByValue_SeparateB _other) : this(null, is_owning: true)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_SeparateB_ConstructFromAnother", ExactSpelling = true)]
                extern static MR.CS.SeparateB._Underlying *__MR_SeparateB_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.SeparateB._Underlying *_other);
                _UnderlyingPtr = __MR_SeparateB_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                if (_other.Value is not null) _KeepAlive(_other.Value);
            }

            /// Generated from constructor `MR::SeparateB::SeparateB`.
            public Const_SeparateB(Const_SeparateB _other) : this(new _ByValue_SeparateB(_other)) {}

            /// Generated from constructor `MR::SeparateB::SeparateB`.
            public Const_SeparateB(SeparateB _other) : this((Const_SeparateB)_other) {}
        }

        /// Generated from class `MR::SeparateB`.
        /// Base classes:
        ///   Direct: (non-virtual)
        ///     `MR::CommonBaseAB`
        /// This is the non-const half of the class.
        public class SeparateB : Const_SeparateB
        {
            // Upcasts:
            public static unsafe implicit operator MR.CS.CommonBaseAB(SeparateB self)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_SeparateB_UpcastTo_MR_CommonBaseAB", ExactSpelling = true)]
                extern static MR.CS.CommonBaseAB._Underlying *__MR_SeparateB_UpcastTo_MR_CommonBaseAB(_Underlying *_this);
                MR.CS.CommonBaseAB ret = new(__MR_SeparateB_UpcastTo_MR_CommonBaseAB(self._UnderlyingPtr), is_owning: false);
                ret._KeepAliveEnclosingObject = self;
                return ret;
            }

            // Downcasts:
            public static unsafe explicit operator SeparateB?(MR.CS.CommonBaseAB parent)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_SeparateB_DynamicDowncastFrom_MR_CommonBaseAB", ExactSpelling = true)]
                extern static _Underlying *__MR_SeparateB_DynamicDowncastFrom_MR_CommonBaseAB(MR.CS.CommonBaseAB._Underlying *_this);
                var ptr = __MR_SeparateB_DynamicDowncastFrom_MR_CommonBaseAB(parent._UnderlyingPtr);
                if (ptr is null) return null;
                SeparateB ret = new(ptr, is_owning: false);
                ret._KeepAliveEnclosingObject = parent;
                return ret;
            }

            internal unsafe SeparateB(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

            /// Generated from constructor `MR::SeparateB::SeparateB`.
            public unsafe SeparateB(MR.CS._ByValue_SeparateB _other) : this(null, is_owning: true)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_SeparateB_ConstructFromAnother", ExactSpelling = true)]
                extern static MR.CS.SeparateB._Underlying *__MR_SeparateB_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.SeparateB._Underlying *_other);
                _UnderlyingPtr = __MR_SeparateB_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                if (_other.Value is not null) _KeepAlive(_other.Value);
            }

            /// Generated from constructor `MR::SeparateB::SeparateB`.
            public SeparateB(Const_SeparateB _other) : this(new _ByValue_SeparateB(_other)) {}

            /// Generated from constructor `MR::SeparateB::SeparateB`.
            public SeparateB(SeparateB _other) : this((Const_SeparateB)_other) {}

            /// Generated from method `MR::SeparateB::operator=`.
            public unsafe MR.CS.SeparateB Assign(MR.CS._ByValue_SeparateB _other)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_SeparateB_AssignFromAnother", ExactSpelling = true)]
                extern static MR.CS.SeparateB._Underlying *__MR_SeparateB_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.SeparateB._Underlying *_other);
                _DiscardKeepAlive();
                if (_other.Value is not null) _KeepAlive(_other.Value);
                return new(__MR_SeparateB_AssignFromAnother(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null), is_owning: false);
            }
        }

        /// This is used as a function parameter when the underlying function receives `SeparateB` by value.
        /// Usage:
        /// * Pass an instance of `SeparateB`/`Const_SeparateB` to copy it into the function.
        /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
        ///   Be careful if your input isn't a unique reference to this object.
        /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
        public class _ByValue_SeparateB
        {
            #pragma warning disable CS0649
            internal readonly Const_SeparateB? Value;
            #pragma warning restore CS0649
            internal readonly MR.CS.Misc._PassBy PassByMode;
            public _ByValue_SeparateB(Const_SeparateB new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
            public static implicit operator _ByValue_SeparateB(Const_SeparateB arg) {return new(arg);}
            public _ByValue_SeparateB(MR.CS.Misc._Moved<SeparateB> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
            public static implicit operator _ByValue_SeparateB(MR.CS.Misc._Moved<SeparateB> arg) {return new(arg);}
        }

        /// This is used for optional parameters of class `SeparateB` with default arguments.
        /// This is only used mutable parameters. For const ones we have `_InOptConst_SeparateB`.
        /// Usage:
        /// * Pass `null` to use the default argument.
        /// * Pass `new()` to pass no object.
        /// * Pass an instance of `SeparateB`/`Const_SeparateB` directly.
        public class _InOptMut_SeparateB
        {
            public SeparateB? Opt;

            public _InOptMut_SeparateB() {}
            public _InOptMut_SeparateB(SeparateB value) {Opt = value;}
            public static implicit operator _InOptMut_SeparateB(SeparateB value) {return new(value);}
        }

        /// This is used for optional parameters of class `SeparateB` with default arguments.
        /// This is only used const parameters. For non-const ones we have `_InOptMut_SeparateB`.
        /// Usage:
        /// * Pass `null` to use the default argument.
        /// * Pass `new()` to pass no object.
        /// * Pass an instance of `SeparateB`/`Const_SeparateB` to pass it to the function.
        public class _InOptConst_SeparateB
        {
            public Const_SeparateB? Opt;

            public _InOptConst_SeparateB() {}
            public _InOptConst_SeparateB(Const_SeparateB value) {Opt = value;}
            public static implicit operator _InOptConst_SeparateB(Const_SeparateB value) {return new(value);}
        }

        /// Generated from function `MR::GetSeparateVecB`.
        public static unsafe MR.CS.Std.Vector_MRSeparateB GetSeparateVecB()
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_GetSeparateVecB", ExactSpelling = true)]
            extern static MR.CS.Std.Vector_MRSeparateB._Underlying *__MR_GetSeparateVecB();
            return new(__MR_GetSeparateVecB(), is_owning: true);
        }
    }
}
