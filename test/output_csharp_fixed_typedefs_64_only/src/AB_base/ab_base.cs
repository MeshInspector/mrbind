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
        public class Const_CommonBaseAB : MR.CS.Misc.SharedObject<Const_CommonBaseAB>, System.IDisposable
        {
            internal struct _Underlying {} // Represents the underlying C++ type.
            internal struct _UnderlyingShared {} // Represents the underlying shared pointer C++ type.

            internal unsafe _UnderlyingShared *_UnderlyingSharedPtr;
            internal unsafe _Underlying *_UnderlyingPtr
            {
                get
                {
                    System.Diagnostics.Trace.Assert(_SharedPtrIsNotNull, "Internal error: This object holds a null shared pointer.");
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CommonBaseAB_get", ExactSpelling = true)]
                    extern static _Underlying *__MR_C_std_shared_ptr_MR_CommonBaseAB_get(_UnderlyingShared *_this);
                    return __MR_C_std_shared_ptr_MR_CommonBaseAB_get(_UnderlyingSharedPtr);
                }
            }

            /// <summary>
            /// Check if the underlying shared pointer is owning or not.
            /// </summary>
            public override unsafe bool _IsOwning
            {
                get
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CommonBaseAB_use_count", ExactSpelling = true)]
                    extern static int __MR_C_std_shared_ptr_MR_CommonBaseAB_use_count(_UnderlyingShared *_this);
                    return __MR_C_std_shared_ptr_MR_CommonBaseAB_use_count(_UnderlyingSharedPtr) > 0;
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
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CommonBaseAB_get", ExactSpelling = true)]
                    extern static void *__MR_C_std_shared_ptr_MR_CommonBaseAB_get(_UnderlyingShared *_this);
                    return __MR_C_std_shared_ptr_MR_CommonBaseAB_get(_UnderlyingSharedPtr) is not null;
                }
            }

            protected virtual unsafe void Dispose(bool disposing)
            {
                if (_UnderlyingSharedPtr is null || !_IsOwningVal)
                    return;
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CommonBaseAB_Destroy", ExactSpelling = true)]
                extern static void __MR_C_std_shared_ptr_MR_CommonBaseAB_Destroy(_UnderlyingShared *_this);
                __MR_C_std_shared_ptr_MR_CommonBaseAB_Destroy(_UnderlyingSharedPtr);
                _UnderlyingSharedPtr = null;
            }
            public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
            ~Const_CommonBaseAB() {Dispose(false);}

            internal unsafe Const_CommonBaseAB(_Underlying *ptr, bool is_owning) : base(true)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CommonBaseAB_Construct", ExactSpelling = true)]
                extern static _UnderlyingShared *__MR_C_std_shared_ptr_MR_CommonBaseAB_Construct(_Underlying *other);
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CommonBaseAB_ConstructNonOwning", ExactSpelling = true)]
                extern static _UnderlyingShared *__MR_C_std_shared_ptr_MR_CommonBaseAB_ConstructNonOwning(_Underlying *other);
                if (is_owning)
                    _UnderlyingSharedPtr = __MR_C_std_shared_ptr_MR_CommonBaseAB_Construct(ptr);
                else
                    _UnderlyingSharedPtr = __MR_C_std_shared_ptr_MR_CommonBaseAB_ConstructNonOwning(ptr);
            }

            internal unsafe Const_CommonBaseAB(_UnderlyingShared *shared_ptr, bool is_owning) : base(is_owning) {_UnderlyingSharedPtr = shared_ptr;}

            internal static unsafe CommonBaseAB _MakeAliasing(MR.CS.Std.Const_SharedPtr_ConstVoid._Underlying *ownership, _Underlying *ptr)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CommonBaseAB_ConstructAliasing", ExactSpelling = true)]
                extern static _UnderlyingShared *__MR_C_std_shared_ptr_MR_CommonBaseAB_ConstructAliasing(MR.CS.Misc._PassBy ownership_pass_by, MR.CS.Std.Const_SharedPtr_ConstVoid._Underlying *ownership, _Underlying *ptr);
                return new(__MR_C_std_shared_ptr_MR_CommonBaseAB_ConstructAliasing(MR.CS.Misc._PassBy.copy, ownership, ptr), is_owning: true);
            }

            private protected unsafe void _LateMakeShared(_Underlying *ptr)
            {
                System.Diagnostics.Trace.Assert(_IsOwningVal == true);
                System.Diagnostics.Trace.Assert(_UnderlyingSharedPtr is null);
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_shared_ptr_MR_CommonBaseAB_Construct", ExactSpelling = true)]
                extern static _UnderlyingShared *__MR_C_std_shared_ptr_MR_CommonBaseAB_Construct(_Underlying *other);
                _UnderlyingSharedPtr = __MR_C_std_shared_ptr_MR_CommonBaseAB_Construct(ptr);
            }

            /// <summary>
            /// Generated from constructor `MR::CommonBaseAB::CommonBaseAB`.
            /// </summary>
            public unsafe Const_CommonBaseAB(MR.CS._ByValue_CommonBaseAB _other) : this(shared_ptr: null, is_owning: true)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CommonBaseAB_ConstructFromAnother", ExactSpelling = true)]
                extern static MR.CS.CommonBaseAB._Underlying *__MR_CommonBaseAB_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CommonBaseAB._Underlying *_other);
                _LateMakeShared(__MR_CommonBaseAB_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null));
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

            internal unsafe CommonBaseAB(_UnderlyingShared *shared_ptr, bool is_owning) : base(shared_ptr, is_owning) {}

            /// <summary>
            /// Generated from constructor `MR::CommonBaseAB::CommonBaseAB`.
            /// </summary>
            public unsafe CommonBaseAB(MR.CS._ByValue_CommonBaseAB _other) : this(shared_ptr: null, is_owning: true)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CommonBaseAB_ConstructFromAnother", ExactSpelling = true)]
                extern static MR.CS.CommonBaseAB._Underlying *__MR_CommonBaseAB_ConstructFromAnother(MR.CS.Misc._PassBy _other_pass_by, MR.CS.CommonBaseAB._Underlying *_other);
                _LateMakeShared(__MR_CommonBaseAB_ConstructFromAnother(_other.PassByMode, _other.Value is not null ? _other.Value._UnderlyingPtr : null));
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
        /// This is used as a function parameter when the underlying function receives `CommonBaseAB` by value.
        /// Usage:
        /// * Pass `new()` to default-construct the instance.
        /// * Pass an instance of `CommonBaseAB`/`Const_CommonBaseAB` to copy it into the function.
        /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
        ///   Be careful if your input isn&apos;t a unique reference to this object.
        /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
        /// </summary>
        public class _ByValueShared_CommonBaseAB
        {
            #pragma warning disable CS0649
            internal readonly Const_CommonBaseAB? Value;
            #pragma warning restore CS0649
            internal readonly MR.CS.Misc._PassBy PassByMode;
            public _ByValueShared_CommonBaseAB() {PassByMode = MR.CS.Misc._PassBy.default_construct;}
            public _ByValueShared_CommonBaseAB(Const_CommonBaseAB new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
            public static implicit operator _ByValueShared_CommonBaseAB(Const_CommonBaseAB arg) {return new(arg);}
            public _ByValueShared_CommonBaseAB(MR.CS.Misc._Moved<CommonBaseAB> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
            public static implicit operator _ByValueShared_CommonBaseAB(MR.CS.Misc._Moved<CommonBaseAB> arg) {return new(arg);}
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

        // Generate a `shared_ptr` for this as well, to test how that gets separated.
        /// <summary>
        /// Generated from function `MR::mark_shared_common_base_ab`.
        /// </summary>
        public static unsafe MR.CS.Misc._Moved<MR.CS.CommonBaseAB> markSharedCommonBaseAb()
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_mark_shared_common_base_ab", ExactSpelling = true)]
            extern static MR.CS.CommonBaseAB._UnderlyingShared *__MR_mark_shared_common_base_ab();
            return MR.CS.Misc.Move(new MR.CS.CommonBaseAB(__MR_mark_shared_common_base_ab(), is_owning: true));
        }
    }
}
