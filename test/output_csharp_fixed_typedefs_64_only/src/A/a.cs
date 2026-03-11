public static partial class MR
{
    public static partial class CS
    {
        /// <summary>
        /// Generated from class `MR::SeparateA`.
        /// Base classes:
        ///   Direct: (non-virtual)
        ///     `MR::CommonBaseAB`
        /// This is the const half of the class.
        /// </summary>
        public class Const_SeparateA : MR.CS.Misc.SharedObject<Const_SeparateA>, System.IDisposable
        {
            internal struct _Underlying {} // Represents the underlying C++ type.
            internal struct _UnderlyingShared {} // Represents the underlying shared pointer C++ type.

            internal unsafe _UnderlyingShared *_UnderlyingSharedPtr;
            internal unsafe _Underlying *_UnderlyingPtr
            {
                get
                {
                    System.Diagnostics.Trace.Assert(_SharedPtrIsNotNull, "Internal error: This object holds a null shared pointer.");
                    [System.Runtime.InteropServices.DllImport("bleh_AB", EntryPoint = "MR_C_std_shared_ptr_MR_SeparateA_get", ExactSpelling = true)]
                    extern static _Underlying *__MR_C_std_shared_ptr_MR_SeparateA_get(_UnderlyingShared *_this);
                    return __MR_C_std_shared_ptr_MR_SeparateA_get(_UnderlyingSharedPtr);
                }
            }

            /// <summary>
            /// Check if the underlying shared pointer is owning or not.
            /// </summary>
            public override unsafe bool _IsOwning
            {
                get
                {
                    [System.Runtime.InteropServices.DllImport("bleh_AB", EntryPoint = "MR_C_std_shared_ptr_MR_SeparateA_use_count", ExactSpelling = true)]
                    extern static int __MR_C_std_shared_ptr_MR_SeparateA_use_count(_UnderlyingShared *_this);
                    return __MR_C_std_shared_ptr_MR_SeparateA_use_count(_UnderlyingSharedPtr) > 0;
                }
            }

            /// <summary>
            /// Check if the underlying shared pointer is non-null.
            /// If this returns null, calling any member other than `.Assign()` on this object will assert.
            /// </summary>
            private unsafe bool _SharedPtrIsNotNull
            {
                get
                {
                    [System.Runtime.InteropServices.DllImport("bleh_AB", EntryPoint = "MR_C_std_shared_ptr_MR_SeparateA_get", ExactSpelling = true)]
                    extern static void *__MR_C_std_shared_ptr_MR_SeparateA_get(_UnderlyingShared *_this);
                    return __MR_C_std_shared_ptr_MR_SeparateA_get(_UnderlyingSharedPtr) is not null;
                }
            }

            protected virtual unsafe void Dispose(bool disposing)
            {
                if (_UnderlyingSharedPtr is null || !_IsOwningVal)
                    return;
                [System.Runtime.InteropServices.DllImport("bleh_AB", EntryPoint = "MR_C_std_shared_ptr_MR_SeparateA_Destroy", ExactSpelling = true)]
                extern static void __MR_C_std_shared_ptr_MR_SeparateA_Destroy(_UnderlyingShared *_this);
                __MR_C_std_shared_ptr_MR_SeparateA_Destroy(_UnderlyingSharedPtr);
                _UnderlyingSharedPtr = null;
            }
            public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
            ~Const_SeparateA() {Dispose(false);}

            // Upcasts:
            public static unsafe implicit operator MR.CS.Const_CommonBaseAB(Const_SeparateA self)
            {
                [System.Runtime.InteropServices.DllImport("bleh_AB", EntryPoint = "MR_SeparateA_UpcastTo_MR_CommonBaseAB", ExactSpelling = true)]
                extern static MR.CS.Const_CommonBaseAB._Underlying *__MR_SeparateA_UpcastTo_MR_CommonBaseAB(_Underlying *_this);
                return MR.CS.Const_CommonBaseAB._MakeAliasing((MR.CS.Std.Const_SharedPtr_ConstVoid._Underlying *)self._UnderlyingSharedPtr, __MR_SeparateA_UpcastTo_MR_CommonBaseAB(self._UnderlyingPtr));
            }

            // Downcasts:
            public static unsafe explicit operator Const_SeparateA?(MR.CS.Const_CommonBaseAB parent)
            {
                [System.Runtime.InteropServices.DllImport("bleh_AB", EntryPoint = "MR_SeparateA_DynamicDowncastFrom_MR_CommonBaseAB", ExactSpelling = true)]
                extern static _Underlying *__MR_SeparateA_DynamicDowncastFrom_MR_CommonBaseAB(MR.CS.Const_CommonBaseAB._Underlying *_this);
                var ptr = __MR_SeparateA_DynamicDowncastFrom_MR_CommonBaseAB(parent._UnderlyingPtr);
                if (ptr is null) return null;
                return Const_SeparateA._MakeAliasing((MR.CS.Std.Const_SharedPtr_ConstVoid._Underlying *)parent._UnderlyingSharedPtr, ptr);
            }

            internal unsafe Const_SeparateA(_Underlying *ptr, bool is_owning) : base(true)
            {
                [System.Runtime.InteropServices.DllImport("bleh_AB", EntryPoint = "MR_C_std_shared_ptr_MR_SeparateA_Construct", ExactSpelling = true)]
                extern static _UnderlyingShared *__MR_C_std_shared_ptr_MR_SeparateA_Construct(_Underlying *other);
                [System.Runtime.InteropServices.DllImport("bleh_AB", EntryPoint = "MR_C_std_shared_ptr_MR_SeparateA_ConstructNonOwning", ExactSpelling = true)]
                extern static _UnderlyingShared *__MR_C_std_shared_ptr_MR_SeparateA_ConstructNonOwning(_Underlying *other);
                if (is_owning)
                    _UnderlyingSharedPtr = __MR_C_std_shared_ptr_MR_SeparateA_Construct(ptr);
                else
                    _UnderlyingSharedPtr = __MR_C_std_shared_ptr_MR_SeparateA_ConstructNonOwning(ptr);
            }

            internal unsafe Const_SeparateA(_UnderlyingShared *shared_ptr, bool is_owning) : base(is_owning) {_UnderlyingSharedPtr = shared_ptr;}

            internal static unsafe SeparateA _MakeAliasing(MR.CS.Std.Const_SharedPtr_ConstVoid._Underlying *ownership, _Underlying *ptr)
            {
                [System.Runtime.InteropServices.DllImport("bleh_AB", EntryPoint = "MR_C_std_shared_ptr_MR_SeparateA_ConstructAliasing", ExactSpelling = true)]
                extern static _UnderlyingShared *__MR_C_std_shared_ptr_MR_SeparateA_ConstructAliasing(MR.CS.Misc._PassBy ownership_pass_by, MR.CS.Std.Const_SharedPtr_ConstVoid._Underlying *ownership, _Underlying *ptr);
                return new(__MR_C_std_shared_ptr_MR_SeparateA_ConstructAliasing(MR.CS.Misc._PassBy.copy, ownership, ptr), is_owning: true);
            }

            private protected unsafe void _LateMakeShared(_Underlying *ptr)
            {
                System.Diagnostics.Trace.Assert(_IsOwningVal == true);
                System.Diagnostics.Trace.Assert(_UnderlyingSharedPtr is null);
                [System.Runtime.InteropServices.DllImport("bleh_AB", EntryPoint = "MR_C_std_shared_ptr_MR_SeparateA_Construct", ExactSpelling = true)]
                extern static _UnderlyingShared *__MR_C_std_shared_ptr_MR_SeparateA_Construct(_Underlying *other);
                _UnderlyingSharedPtr = __MR_C_std_shared_ptr_MR_SeparateA_Construct(ptr);
            }

            /// <summary>
            /// Generated from constructor `MR::SeparateA::SeparateA`.
            /// </summary>
            public unsafe Const_SeparateA(MR.CS._ByValue_SeparateA _other) : this(shared_ptr: null, is_owning: true)
            {
                [System.Runtime.InteropServices.DllImport("bleh_AB", EntryPoint = "MR_SeparateA_ConstructFromAnother", ExactSpelling = true)]
                extern static MR.CS.SeparateA._Underlying *__MR_SeparateA_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.SeparateA._Underlying *_other);
                _LateMakeShared(__MR_SeparateA_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null));
                if (_other.Value is not null) _KeepAlive(_other.Value);
            }

            /// <summary>
            /// Generated from constructor `MR::SeparateA::SeparateA`.
            /// </summary>
            public Const_SeparateA(Const_SeparateA _other) : this(new _ByValue_SeparateA(_other)) {}

            /// <summary>
            /// Generated from constructor `MR::SeparateA::SeparateA`.
            /// </summary>
            public Const_SeparateA(SeparateA _other) : this((Const_SeparateA)_other) {}
        }

        /// <summary>
        /// Generated from class `MR::SeparateA`.
        /// Base classes:
        ///   Direct: (non-virtual)
        ///     `MR::CommonBaseAB`
        /// This is the non-const half of the class.
        /// </summary>
        public class SeparateA : Const_SeparateA
        {
            // Upcasts:
            public static unsafe implicit operator MR.CS.CommonBaseAB(SeparateA self)
            {
                [System.Runtime.InteropServices.DllImport("bleh_AB", EntryPoint = "MR_SeparateA_UpcastTo_MR_CommonBaseAB", ExactSpelling = true)]
                extern static MR.CS.CommonBaseAB._Underlying *__MR_SeparateA_UpcastTo_MR_CommonBaseAB(_Underlying *_this);
                return MR.CS.CommonBaseAB._MakeAliasing((MR.CS.Std.Const_SharedPtr_ConstVoid._Underlying *)self._UnderlyingSharedPtr, __MR_SeparateA_UpcastTo_MR_CommonBaseAB(self._UnderlyingPtr));
            }

            // Downcasts:
            public static unsafe explicit operator SeparateA?(MR.CS.CommonBaseAB parent)
            {
                [System.Runtime.InteropServices.DllImport("bleh_AB", EntryPoint = "MR_SeparateA_DynamicDowncastFrom_MR_CommonBaseAB", ExactSpelling = true)]
                extern static _Underlying *__MR_SeparateA_DynamicDowncastFrom_MR_CommonBaseAB(MR.CS.CommonBaseAB._Underlying *_this);
                var ptr = __MR_SeparateA_DynamicDowncastFrom_MR_CommonBaseAB(parent._UnderlyingPtr);
                if (ptr is null) return null;
                return SeparateA._MakeAliasing((MR.CS.Std.Const_SharedPtr_ConstVoid._Underlying *)parent._UnderlyingSharedPtr, ptr);
            }

            internal unsafe SeparateA(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

            internal unsafe SeparateA(_UnderlyingShared *shared_ptr, bool is_owning) : base(shared_ptr, is_owning) {}

            /// <summary>
            /// Generated from constructor `MR::SeparateA::SeparateA`.
            /// </summary>
            public unsafe SeparateA(MR.CS._ByValue_SeparateA _other) : this(shared_ptr: null, is_owning: true)
            {
                [System.Runtime.InteropServices.DllImport("bleh_AB", EntryPoint = "MR_SeparateA_ConstructFromAnother", ExactSpelling = true)]
                extern static MR.CS.SeparateA._Underlying *__MR_SeparateA_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.SeparateA._Underlying *_other);
                _LateMakeShared(__MR_SeparateA_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null));
                if (_other.Value is not null) _KeepAlive(_other.Value);
            }

            /// <summary>
            /// Generated from constructor `MR::SeparateA::SeparateA`.
            /// </summary>
            public SeparateA(Const_SeparateA _other) : this(new _ByValue_SeparateA(_other)) {}

            /// <summary>
            /// Generated from constructor `MR::SeparateA::SeparateA`.
            /// </summary>
            public SeparateA(SeparateA _other) : this((Const_SeparateA)_other) {}

            /// <summary>
            /// Generated from method `MR::SeparateA::operator=`.
            /// </summary>
            public unsafe MR.CS.SeparateA assign(MR.CS._ByValue_SeparateA _other)
            {
                [System.Runtime.InteropServices.DllImport("bleh_AB", EntryPoint = "MR_SeparateA_AssignFromAnother", ExactSpelling = true)]
                extern static MR.CS.SeparateA._Underlying *__MR_SeparateA_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.SeparateA._Underlying *_other);
                _DiscardKeepAlive();
                if (_other.Value is not null) _KeepAlive(_other.Value);
                return new(__MR_SeparateA_AssignFromAnother(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null), is_owning: false);
            }
        }

        /// <summary>
        /// This is used as a function parameter when the underlying function receives `SeparateA` by value.
        /// Usage:
        /// * Pass an instance of `SeparateA`/`Const_SeparateA` to copy it into the function.
        /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
        ///   Be careful if your input isn&apos;t a unique reference to this object.
        /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
        /// </summary>
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

        /// <summary>
        /// This is used as a function parameter when the underlying function receives `SeparateA` by value.
        /// Usage:
        /// * Pass `new()` to default-construct the instance.
        /// * Pass an instance of `SeparateA`/`Const_SeparateA` to copy it into the function.
        /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
        ///   Be careful if your input isn&apos;t a unique reference to this object.
        /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
        /// </summary>
        public class _ByValueShared_SeparateA
        {
            #pragma warning disable CS0649
            internal readonly Const_SeparateA? Value;
            #pragma warning restore CS0649
            internal readonly MR.CS.Misc._PassBy PassByMode;
            public _ByValueShared_SeparateA() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
            public _ByValueShared_SeparateA(Const_SeparateA new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
            public static implicit operator _ByValueShared_SeparateA(Const_SeparateA arg) {return new(arg);}
            public _ByValueShared_SeparateA(MR.CS.Misc._Moved<SeparateA> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
            public static implicit operator _ByValueShared_SeparateA(MR.CS.Misc._Moved<SeparateA> arg) {return new(arg);}
        }

        /// <summary>
        /// This is used for optional parameters of class `SeparateA` with default arguments.
        /// This is only used mutable parameters. For const ones we have `_InOptConst_SeparateA`.
        /// Usage:
        /// * Pass `null` to use the default argument.
        /// * Pass `new()` to pass no object.
        /// * Pass an instance of `SeparateA`/`Const_SeparateA` directly.
        /// </summary>
        public class _InOptMut_SeparateA
        {
            public SeparateA? Opt;

            public _InOptMut_SeparateA() {}
            public _InOptMut_SeparateA(SeparateA value) {Opt = value;}
            public static implicit operator _InOptMut_SeparateA(SeparateA value) {return new(value);}
        }

        /// <summary>
        /// This is used for optional parameters of class `SeparateA` with default arguments.
        /// This is only used const parameters. For non-const ones we have `_InOptMut_SeparateA`.
        /// Usage:
        /// * Pass `null` to use the default argument.
        /// * Pass `new()` to pass no object.
        /// * Pass an instance of `SeparateA`/`Const_SeparateA` to pass it to the function.
        /// </summary>
        public class _InOptConst_SeparateA
        {
            public Const_SeparateA? Opt;

            public _InOptConst_SeparateA() {}
            public _InOptConst_SeparateA(Const_SeparateA value) {Opt = value;}
            public static implicit operator _InOptConst_SeparateA(Const_SeparateA value) {return new(value);}
        }

        /// <summary>
        /// Generated from function `MR::GetSeparateVecA`.
        /// </summary>
        public static unsafe MR.CS.Misc._Moved<MR.CS.Std.Vector_MRSeparateA> getSeparateVecA()
        {
            [System.Runtime.InteropServices.DllImport("bleh_AB", EntryPoint = "MR_GetSeparateVecA", ExactSpelling = true)]
            extern static MR.CS.Std.Vector_MRSeparateA._Underlying *__MR_GetSeparateVecA();
            return MR.CS.Misc.Move(new MR.CS.Std.Vector_MRSeparateA(__MR_GetSeparateVecA(), is_owning: true));
        }
    }
}
