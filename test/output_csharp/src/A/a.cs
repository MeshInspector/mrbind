public static partial class MR
{
    public static partial class CS
    {
        /// Generated from class `MR::SeparateA`.
        /// Base classes:
        ///   Direct: (non-virtual)
        ///     `MR::CommonBaseAB`
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

            // Upcasts:
            public static unsafe implicit operator MR.CS.Const_CommonBaseAB(Const_SeparateA self)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_SeparateA_UpcastTo_MR_CommonBaseAB", ExactSpelling = true)]
                extern static MR.CS.Const_CommonBaseAB._Underlying *__MR_SeparateA_UpcastTo_MR_CommonBaseAB(_Underlying *_this);
                MR.CS.Const_CommonBaseAB ret = new(__MR_SeparateA_UpcastTo_MR_CommonBaseAB(self._UnderlyingPtr), is_owning: false);
                ret._KeepAliveEnclosingObject = self;
                return ret;
            }

            // Downcasts:
            public static unsafe explicit operator Const_SeparateA?(MR.CS.Const_CommonBaseAB parent)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_SeparateA_DynamicDowncastFrom_MR_CommonBaseAB", ExactSpelling = true)]
                extern static _Underlying *__MR_SeparateA_DynamicDowncastFrom_MR_CommonBaseAB(MR.CS.Const_CommonBaseAB._Underlying *_this);
                var ptr = __MR_SeparateA_DynamicDowncastFrom_MR_CommonBaseAB(parent._UnderlyingPtr);
                if (ptr is null) return null;
                Const_SeparateA ret = new(ptr, is_owning: false);
                ret._KeepAliveEnclosingObject = parent;
                return ret;
            }

            internal unsafe Const_SeparateA(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

            /// Generated from constructor `MR::SeparateA::SeparateA`.
            public unsafe Const_SeparateA(MR.CS._ByValue_SeparateA _other) : this(null, is_owning: true)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_SeparateA_ConstructFromAnother", ExactSpelling = true)]
                extern static MR.CS.SeparateA._Underlying *__MR_SeparateA_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.SeparateA._Underlying *_other);
                _UnderlyingPtr = __MR_SeparateA_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                if (_other.Value is not null) _KeepAlive(_other.Value);
            }

            /// Generated from constructor `MR::SeparateA::SeparateA`.
            public Const_SeparateA(Const_SeparateA _other) : this(new _ByValue_SeparateA(_other)) {}

            /// Generated from constructor `MR::SeparateA::SeparateA`.
            public Const_SeparateA(SeparateA _other) : this((Const_SeparateA)_other) {}
        }

        /// Generated from class `MR::SeparateA`.
        /// Base classes:
        ///   Direct: (non-virtual)
        ///     `MR::CommonBaseAB`
        /// This is the non-const half of the class.
        public class SeparateA : Const_SeparateA
        {
            // Upcasts:
            public static unsafe implicit operator MR.CS.CommonBaseAB(SeparateA self)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_SeparateA_UpcastTo_MR_CommonBaseAB", ExactSpelling = true)]
                extern static MR.CS.CommonBaseAB._Underlying *__MR_SeparateA_UpcastTo_MR_CommonBaseAB(_Underlying *_this);
                MR.CS.CommonBaseAB ret = new(__MR_SeparateA_UpcastTo_MR_CommonBaseAB(self._UnderlyingPtr), is_owning: false);
                ret._KeepAliveEnclosingObject = self;
                return ret;
            }

            // Downcasts:
            public static unsafe explicit operator SeparateA?(MR.CS.CommonBaseAB parent)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_SeparateA_DynamicDowncastFrom_MR_CommonBaseAB", ExactSpelling = true)]
                extern static _Underlying *__MR_SeparateA_DynamicDowncastFrom_MR_CommonBaseAB(MR.CS.CommonBaseAB._Underlying *_this);
                var ptr = __MR_SeparateA_DynamicDowncastFrom_MR_CommonBaseAB(parent._UnderlyingPtr);
                if (ptr is null) return null;
                SeparateA ret = new(ptr, is_owning: false);
                ret._KeepAliveEnclosingObject = parent;
                return ret;
            }

            internal unsafe SeparateA(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

            /// Generated from constructor `MR::SeparateA::SeparateA`.
            public unsafe SeparateA(MR.CS._ByValue_SeparateA _other) : this(null, is_owning: true)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_SeparateA_ConstructFromAnother", ExactSpelling = true)]
                extern static MR.CS.SeparateA._Underlying *__MR_SeparateA_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.SeparateA._Underlying *_other);
                _UnderlyingPtr = __MR_SeparateA_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null);
                if (_other.Value is not null) _KeepAlive(_other.Value);
            }

            /// Generated from constructor `MR::SeparateA::SeparateA`.
            public SeparateA(Const_SeparateA _other) : this(new _ByValue_SeparateA(_other)) {}

            /// Generated from constructor `MR::SeparateA::SeparateA`.
            public SeparateA(SeparateA _other) : this((Const_SeparateA)_other) {}

            /// Generated from method `MR::SeparateA::operator=`.
            public unsafe MR.CS.SeparateA Assign(MR.CS._ByValue_SeparateA _other)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_SeparateA_AssignFromAnother", ExactSpelling = true)]
                extern static MR.CS.SeparateA._Underlying *__MR_SeparateA_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.SeparateA._Underlying *_other);
                _DiscardKeepAlive();
                if (_other.Value is not null) _KeepAlive(_other.Value);
                return new(__MR_SeparateA_AssignFromAnother(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null), is_owning: false);
            }
        }

        /// This is used as a function parameter when the underlying function receives `SeparateA` by value.
        /// Usage:
        /// * Pass an instance of `SeparateA`/`Const_SeparateA` to copy it into the function.
        /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
        ///   Be careful if your input isn't a unique reference to this object.
        /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
        public class _ByValue_SeparateA
        {
            #pragma warning disable CS0649
            internal readonly Const_SeparateA? Value;
            #pragma warning restore CS0649
            internal readonly MR.CS.Misc._PassBy PassByMode;
            public _ByValue_SeparateA(Const_SeparateA new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
            public static implicit operator _ByValue_SeparateA(Const_SeparateA arg) {return new(arg);}
            public _ByValue_SeparateA(MR.CS.Misc._Moved<SeparateA> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
            public static implicit operator _ByValue_SeparateA(MR.CS.Misc._Moved<SeparateA> arg) {return new(arg);}
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
