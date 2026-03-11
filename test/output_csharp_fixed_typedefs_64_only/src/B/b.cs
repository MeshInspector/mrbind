public static partial class MR
{
    public static partial class CS
    {
        /// <summary>
        /// Generated from class `MR::SeparateB`.
        /// Base classes:
        ///   Direct: (non-virtual)
        ///     `MR::CommonBaseAB`
        /// This is the const half of the class.
        /// </summary>
        public class Const_SeparateB : MR.CS.Misc.SharedObject<Const_SeparateB>, System.IDisposable
        {
            internal struct _Underlying {} // Represents the underlying C++ type.
            internal struct _UnderlyingShared {} // Represents the underlying shared pointer C++ type.

            internal unsafe _UnderlyingShared *_UnderlyingSharedPtr;
            internal unsafe _Underlying *_UnderlyingPtr
            {
                get
                {
                    System.Diagnostics.Trace.Assert(_SharedPtrIsNotNull, "Internal error: This object holds a null shared pointer.");
                    [System.Runtime.InteropServices.DllImport("bleh_AB", EntryPoint = "MR_C_std_shared_ptr_MR_SeparateB_get", ExactSpelling = true)]
                    extern static _Underlying *__MR_C_std_shared_ptr_MR_SeparateB_get(_UnderlyingShared *_this);
                    return __MR_C_std_shared_ptr_MR_SeparateB_get(_UnderlyingSharedPtr);
                }
            }

            /// <summary>
            /// Check if the underlying shared pointer is owning or not.
            /// </summary>
            public override unsafe bool _IsOwning
            {
                get
                {
                    [System.Runtime.InteropServices.DllImport("bleh_AB", EntryPoint = "MR_C_std_shared_ptr_MR_SeparateB_use_count", ExactSpelling = true)]
                    extern static int __MR_C_std_shared_ptr_MR_SeparateB_use_count(_UnderlyingShared *_this);
                    return __MR_C_std_shared_ptr_MR_SeparateB_use_count(_UnderlyingSharedPtr) > 0;
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
                    [System.Runtime.InteropServices.DllImport("bleh_AB", EntryPoint = "MR_C_std_shared_ptr_MR_SeparateB_get", ExactSpelling = true)]
                    extern static void *__MR_C_std_shared_ptr_MR_SeparateB_get(_UnderlyingShared *_this);
                    return __MR_C_std_shared_ptr_MR_SeparateB_get(_UnderlyingSharedPtr) is not null;
                }
            }

            protected virtual unsafe void Dispose(bool disposing)
            {
                if (_UnderlyingSharedPtr is null || !_IsOwningVal)
                    return;
                [System.Runtime.InteropServices.DllImport("bleh_AB", EntryPoint = "MR_C_std_shared_ptr_MR_SeparateB_Destroy", ExactSpelling = true)]
                extern static void __MR_C_std_shared_ptr_MR_SeparateB_Destroy(_UnderlyingShared *_this);
                __MR_C_std_shared_ptr_MR_SeparateB_Destroy(_UnderlyingSharedPtr);
                _UnderlyingSharedPtr = null;
            }
            public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
            ~Const_SeparateB() {Dispose(false);}

            // Upcasts:
            public static unsafe implicit operator MR.CS.Const_CommonBaseAB(Const_SeparateB self)
            {
                [System.Runtime.InteropServices.DllImport("bleh_AB", EntryPoint = "MR_SeparateB_UpcastTo_MR_CommonBaseAB", ExactSpelling = true)]
                extern static MR.CS.Const_CommonBaseAB._Underlying *__MR_SeparateB_UpcastTo_MR_CommonBaseAB(_Underlying *_this);
                return MR.CS.Const_CommonBaseAB._MakeAliasing((MR.CS.Std.Const_SharedPtr_ConstVoid._Underlying *)self._UnderlyingSharedPtr, __MR_SeparateB_UpcastTo_MR_CommonBaseAB(self._UnderlyingPtr));
            }

            // Downcasts:
            public static unsafe explicit operator Const_SeparateB?(MR.CS.Const_CommonBaseAB parent)
            {
                [System.Runtime.InteropServices.DllImport("bleh_AB", EntryPoint = "MR_SeparateB_DynamicDowncastFrom_MR_CommonBaseAB", ExactSpelling = true)]
                extern static _Underlying *__MR_SeparateB_DynamicDowncastFrom_MR_CommonBaseAB(MR.CS.Const_CommonBaseAB._Underlying *_this);
                var ptr = __MR_SeparateB_DynamicDowncastFrom_MR_CommonBaseAB(parent._UnderlyingPtr);
                if (ptr is null) return null;
                return Const_SeparateB._MakeAliasing((MR.CS.Std.Const_SharedPtr_ConstVoid._Underlying *)parent._UnderlyingSharedPtr, ptr);
            }

            internal unsafe Const_SeparateB(_Underlying *ptr, bool is_owning) : base(true)
            {
                [System.Runtime.InteropServices.DllImport("bleh_AB", EntryPoint = "MR_C_std_shared_ptr_MR_SeparateB_Construct", ExactSpelling = true)]
                extern static _UnderlyingShared *__MR_C_std_shared_ptr_MR_SeparateB_Construct(_Underlying *other);
                [System.Runtime.InteropServices.DllImport("bleh_AB", EntryPoint = "MR_C_std_shared_ptr_MR_SeparateB_ConstructNonOwning", ExactSpelling = true)]
                extern static _UnderlyingShared *__MR_C_std_shared_ptr_MR_SeparateB_ConstructNonOwning(_Underlying *other);
                if (is_owning)
                    _UnderlyingSharedPtr = __MR_C_std_shared_ptr_MR_SeparateB_Construct(ptr);
                else
                    _UnderlyingSharedPtr = __MR_C_std_shared_ptr_MR_SeparateB_ConstructNonOwning(ptr);
            }

            internal unsafe Const_SeparateB(_UnderlyingShared *shared_ptr, bool is_owning) : base(is_owning) {_UnderlyingSharedPtr = shared_ptr;}

            internal static unsafe SeparateB _MakeAliasing(MR.CS.Std.Const_SharedPtr_ConstVoid._Underlying *ownership, _Underlying *ptr)
            {
                [System.Runtime.InteropServices.DllImport("bleh_AB", EntryPoint = "MR_C_std_shared_ptr_MR_SeparateB_ConstructAliasing", ExactSpelling = true)]
                extern static _UnderlyingShared *__MR_C_std_shared_ptr_MR_SeparateB_ConstructAliasing(MR.CS.Misc._PassBy ownership_pass_by, MR.CS.Std.Const_SharedPtr_ConstVoid._Underlying *ownership, _Underlying *ptr);
                return new(__MR_C_std_shared_ptr_MR_SeparateB_ConstructAliasing(MR.CS.Misc._PassBy.copy, ownership, ptr), is_owning: true);
            }

            private protected unsafe void _LateMakeShared(_Underlying *ptr)
            {
                System.Diagnostics.Trace.Assert(_IsOwningVal == true);
                System.Diagnostics.Trace.Assert(_UnderlyingSharedPtr is null);
                [System.Runtime.InteropServices.DllImport("bleh_AB", EntryPoint = "MR_C_std_shared_ptr_MR_SeparateB_Construct", ExactSpelling = true)]
                extern static _UnderlyingShared *__MR_C_std_shared_ptr_MR_SeparateB_Construct(_Underlying *other);
                _UnderlyingSharedPtr = __MR_C_std_shared_ptr_MR_SeparateB_Construct(ptr);
            }

            /// <summary>
            /// Generated from constructor `MR::SeparateB::SeparateB`.
            /// </summary>
            public unsafe Const_SeparateB(MR.CS._ByValue_SeparateB _other) : this(shared_ptr: null, is_owning: true)
            {
                [System.Runtime.InteropServices.DllImport("bleh_AB", EntryPoint = "MR_SeparateB_ConstructFromAnother", ExactSpelling = true)]
                extern static MR.CS.SeparateB._Underlying *__MR_SeparateB_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.SeparateB._Underlying *_other);
                _LateMakeShared(__MR_SeparateB_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null));
                if (_other.Value is not null) _KeepAlive(_other.Value);
            }

            /// <summary>
            /// Generated from constructor `MR::SeparateB::SeparateB`.
            /// </summary>
            public Const_SeparateB(Const_SeparateB _other) : this(new _ByValue_SeparateB(_other)) {}

            /// <summary>
            /// Generated from constructor `MR::SeparateB::SeparateB`.
            /// </summary>
            public Const_SeparateB(SeparateB _other) : this((Const_SeparateB)_other) {}
        }

        /// <summary>
        /// Generated from class `MR::SeparateB`.
        /// Base classes:
        ///   Direct: (non-virtual)
        ///     `MR::CommonBaseAB`
        /// This is the non-const half of the class.
        /// </summary>
        public class SeparateB : Const_SeparateB
        {
            // Upcasts:
            public static unsafe implicit operator MR.CS.CommonBaseAB(SeparateB self)
            {
                [System.Runtime.InteropServices.DllImport("bleh_AB", EntryPoint = "MR_SeparateB_UpcastTo_MR_CommonBaseAB", ExactSpelling = true)]
                extern static MR.CS.CommonBaseAB._Underlying *__MR_SeparateB_UpcastTo_MR_CommonBaseAB(_Underlying *_this);
                return MR.CS.CommonBaseAB._MakeAliasing((MR.CS.Std.Const_SharedPtr_ConstVoid._Underlying *)self._UnderlyingSharedPtr, __MR_SeparateB_UpcastTo_MR_CommonBaseAB(self._UnderlyingPtr));
            }

            // Downcasts:
            public static unsafe explicit operator SeparateB?(MR.CS.CommonBaseAB parent)
            {
                [System.Runtime.InteropServices.DllImport("bleh_AB", EntryPoint = "MR_SeparateB_DynamicDowncastFrom_MR_CommonBaseAB", ExactSpelling = true)]
                extern static _Underlying *__MR_SeparateB_DynamicDowncastFrom_MR_CommonBaseAB(MR.CS.CommonBaseAB._Underlying *_this);
                var ptr = __MR_SeparateB_DynamicDowncastFrom_MR_CommonBaseAB(parent._UnderlyingPtr);
                if (ptr is null) return null;
                return SeparateB._MakeAliasing((MR.CS.Std.Const_SharedPtr_ConstVoid._Underlying *)parent._UnderlyingSharedPtr, ptr);
            }

            internal unsafe SeparateB(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

            internal unsafe SeparateB(_UnderlyingShared *shared_ptr, bool is_owning) : base(shared_ptr, is_owning) {}

            /// <summary>
            /// Generated from constructor `MR::SeparateB::SeparateB`.
            /// </summary>
            public unsafe SeparateB(MR.CS._ByValue_SeparateB _other) : this(shared_ptr: null, is_owning: true)
            {
                [System.Runtime.InteropServices.DllImport("bleh_AB", EntryPoint = "MR_SeparateB_ConstructFromAnother", ExactSpelling = true)]
                extern static MR.CS.SeparateB._Underlying *__MR_SeparateB_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.SeparateB._Underlying *_other);
                _LateMakeShared(__MR_SeparateB_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null));
                if (_other.Value is not null) _KeepAlive(_other.Value);
            }

            /// <summary>
            /// Generated from constructor `MR::SeparateB::SeparateB`.
            /// </summary>
            public SeparateB(Const_SeparateB _other) : this(new _ByValue_SeparateB(_other)) {}

            /// <summary>
            /// Generated from constructor `MR::SeparateB::SeparateB`.
            /// </summary>
            public SeparateB(SeparateB _other) : this((Const_SeparateB)_other) {}

            /// <summary>
            /// Generated from method `MR::SeparateB::operator=`.
            /// </summary>
            public unsafe MR.CS.SeparateB assign(MR.CS._ByValue_SeparateB _other)
            {
                [System.Runtime.InteropServices.DllImport("bleh_AB", EntryPoint = "MR_SeparateB_AssignFromAnother", ExactSpelling = true)]
                extern static MR.CS.SeparateB._Underlying *__MR_SeparateB_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy _other_pass_by, MR.CS.SeparateB._Underlying *_other);
                _DiscardKeepAlive();
                if (_other.Value is not null) _KeepAlive(_other.Value);
                return new(__MR_SeparateB_AssignFromAnother(_UnderlyingPtr, _other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null), is_owning: false);
            }
        }

        /// <summary>
        /// This is used as a function parameter when the underlying function receives `SeparateB` by value.
        /// Usage:
        /// * Pass an instance of `SeparateB`/`Const_SeparateB` to copy it into the function.
        /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
        ///   Be careful if your input isn&apos;t a unique reference to this object.
        /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
        /// </summary>
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

        /// <summary>
        /// This is used as a function parameter when the underlying function receives `SeparateB` by value.
        /// Usage:
        /// * Pass `new()` to default-construct the instance.
        /// * Pass an instance of `SeparateB`/`Const_SeparateB` to copy it into the function.
        /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
        ///   Be careful if your input isn&apos;t a unique reference to this object.
        /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
        /// </summary>
        public class _ByValueShared_SeparateB
        {
            #pragma warning disable CS0649
            internal readonly Const_SeparateB? Value;
            #pragma warning restore CS0649
            internal readonly MR.CS.Misc._PassBy PassByMode;
            public _ByValueShared_SeparateB() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
            public _ByValueShared_SeparateB(Const_SeparateB new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
            public static implicit operator _ByValueShared_SeparateB(Const_SeparateB arg) {return new(arg);}
            public _ByValueShared_SeparateB(MR.CS.Misc._Moved<SeparateB> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
            public static implicit operator _ByValueShared_SeparateB(MR.CS.Misc._Moved<SeparateB> arg) {return new(arg);}
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
            [System.Runtime.InteropServices.DllImport("bleh_AB", EntryPoint = "MR_GetSeparateVecB", ExactSpelling = true)]
            extern static MR.CS.Std.Vector_MRSeparateB._Underlying *__MR_GetSeparateVecB();
            return MR.CS.Misc.Move(new MR.CS.Std.Vector_MRSeparateB(__MR_GetSeparateVecB(), is_owning: true));
        }
    }
}
