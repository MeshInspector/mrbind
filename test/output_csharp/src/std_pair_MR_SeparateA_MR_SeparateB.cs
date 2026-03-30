public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// Stores two objects: `MR::SeparateA` and `MR::SeparateA`.
            /// This is the const half of the class.
            public class Const_Pair_MRSeparateA_MRSeparateB : MR.CS.Misc.Object<Const_Pair_MRSeparateA_MRSeparateB>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_MR_SeparateA_MR_SeparateB_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_pair_MR_SeparateA_MR_SeparateB_Destroy(_Underlying *_this);
                    __MR_C_std_pair_MR_SeparateA_MR_SeparateB_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Pair_MRSeparateA_MRSeparateB() {Dispose(false);}

                internal unsafe Const_Pair_MRSeparateA_MRSeparateB(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Const_Pair_MRSeparateA_MRSeparateB(MR.CS.Std._ByValue_Pair_MRSeparateA_MRSeparateB other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_MR_SeparateA_MR_SeparateB_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Pair_MRSeparateA_MRSeparateB._Underlying *__MR_C_std_pair_MR_SeparateA_MR_SeparateB_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Pair_MRSeparateA_MRSeparateB._Underlying *other);
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_C_std_pair_MR_SeparateA_MR_SeparateB_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public Const_Pair_MRSeparateA_MRSeparateB(Const_Pair_MRSeparateA_MRSeparateB other) : this(new _ByValue_Pair_MRSeparateA_MRSeparateB(other)) {}

                /// Constructs a copy of another instance. The source remains alive.
                public Const_Pair_MRSeparateA_MRSeparateB(Pair_MRSeparateA_MRSeparateB other) : this((Const_Pair_MRSeparateA_MRSeparateB)other) {}

                /// Constructs the pair elementwise.
                public unsafe Const_Pair_MRSeparateA_MRSeparateB(MR.CS._ByValue_SeparateA first, MR.CS._ByValue_SeparateB second) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_MR_SeparateA_MR_SeparateB_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.Pair_MRSeparateA_MRSeparateB._Underlying *__MR_C_std_pair_MR_SeparateA_MR_SeparateB_Construct(MR.CS.Misc._PassBy first_pass_by, MR.CS.SeparateA._Underlying *first, MR.CS.Misc._PassBy second_pass_by, MR.CS.SeparateB._Underlying *second);
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_C_std_pair_MR_SeparateA_MR_SeparateB_Construct(first.PassByMode, first.Value is not null ? first.Value._UnderlyingPtr : null, second.PassByMode, second.Value is not null ? second.Value._UnderlyingPtr : null);
                    if (first.Value is not null) _KeepAlive(first.Value);
                    if (second.Value is not null) _KeepAlive(second.Value);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// The first of the two elements, read-only.
                public unsafe MR.CS.Const_SeparateA First()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_MR_SeparateA_MR_SeparateB_first", ExactSpelling = true)]
                    extern static MR.CS.Const_SeparateA._Underlying *__MR_C_std_pair_MR_SeparateA_MR_SeparateB_first(_Underlying *_this);
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_std_pair_MR_SeparateA_MR_SeparateB_first(_UnderlyingPtr);
                    MR.CS.Const_SeparateA __ret;
                    __ret = new(__c_ret, is_owning: false);
                    __ret._KeepAliveEnclosingObject = this;
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __ret;
                }

                /// The second of the two elements, read-only.
                public unsafe MR.CS.Const_SeparateB Second()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_MR_SeparateA_MR_SeparateB_second", ExactSpelling = true)]
                    extern static MR.CS.Const_SeparateB._Underlying *__MR_C_std_pair_MR_SeparateA_MR_SeparateB_second(_Underlying *_this);
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_std_pair_MR_SeparateA_MR_SeparateB_second(_UnderlyingPtr);
                    MR.CS.Const_SeparateB __ret;
                    __ret = new(__c_ret, is_owning: false);
                    __ret._KeepAliveEnclosingObject = this;
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __ret;
                }

                // Custom extras:

                public void Deconstruct(out MR.CS.Const_SeparateA _1, out MR.CS.Const_SeparateB _2)
                {
                    _1 = First();
                    _2 = Second();
                }
            }

            /// Stores two objects: `MR::SeparateA` and `MR::SeparateA`.
            /// This is the non-const half of the class.
            public class Pair_MRSeparateA_MRSeparateB : Const_Pair_MRSeparateA_MRSeparateB
            {
                internal unsafe Pair_MRSeparateA_MRSeparateB(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Pair_MRSeparateA_MRSeparateB(MR.CS.Std._ByValue_Pair_MRSeparateA_MRSeparateB other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_MR_SeparateA_MR_SeparateB_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Pair_MRSeparateA_MRSeparateB._Underlying *__MR_C_std_pair_MR_SeparateA_MR_SeparateB_ConstructFromAnother(MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Pair_MRSeparateA_MRSeparateB._Underlying *other);
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_C_std_pair_MR_SeparateA_MR_SeparateB_ConstructFromAnother(other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                    if (other.Value is not null) _KeepAlive(other.Value);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public Pair_MRSeparateA_MRSeparateB(Const_Pair_MRSeparateA_MRSeparateB other) : this(new _ByValue_Pair_MRSeparateA_MRSeparateB(other)) {}

                /// Constructs a copy of another instance. The source remains alive.
                public Pair_MRSeparateA_MRSeparateB(Pair_MRSeparateA_MRSeparateB other) : this((Const_Pair_MRSeparateA_MRSeparateB)other) {}

                /// Assigns the contents from another instance. Both objects remain alive after the call.
                public unsafe void Assign(MR.CS.Std._ByValue_Pair_MRSeparateA_MRSeparateB other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_MR_SeparateA_MR_SeparateB_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_pair_MR_SeparateA_MR_SeparateB_AssignFromAnother(_Underlying *_this, MR.CS.Misc._PassBy other_pass_by, MR.CS.Std.Pair_MRSeparateA_MRSeparateB._Underlying *other);
                    MR.CS.Misc._Exceptions.Prepare();
                    _DiscardKeepAlive();
                    if (other.Value is not null) _KeepAlive(other.Value);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    __MR_C_std_pair_MR_SeparateA_MR_SeparateB_AssignFromAnother(_UnderlyingPtr, other.PassByMode, other.Value is not null ? other.Value._UnderlyingPtr : null);
                }

                /// Constructs the pair elementwise.
                public unsafe Pair_MRSeparateA_MRSeparateB(MR.CS._ByValue_SeparateA first, MR.CS._ByValue_SeparateB second) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_MR_SeparateA_MR_SeparateB_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.Pair_MRSeparateA_MRSeparateB._Underlying *__MR_C_std_pair_MR_SeparateA_MR_SeparateB_Construct(MR.CS.Misc._PassBy first_pass_by, MR.CS.SeparateA._Underlying *first, MR.CS.Misc._PassBy second_pass_by, MR.CS.SeparateB._Underlying *second);
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_C_std_pair_MR_SeparateA_MR_SeparateB_Construct(first.PassByMode, first.Value is not null ? first.Value._UnderlyingPtr : null, second.PassByMode, second.Value is not null ? second.Value._UnderlyingPtr : null);
                    if (first.Value is not null) _KeepAlive(first.Value);
                    if (second.Value is not null) _KeepAlive(second.Value);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// The first of the two elements, mutable.
                public unsafe new MR.CS.SeparateA First()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_MR_SeparateA_MR_SeparateB_first_mut", ExactSpelling = true)]
                    extern static MR.CS.SeparateA._Underlying *__MR_C_std_pair_MR_SeparateA_MR_SeparateB_first_mut(_Underlying *_this);
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_std_pair_MR_SeparateA_MR_SeparateB_first_mut(_UnderlyingPtr);
                    MR.CS.SeparateA __ret;
                    __ret = new(__c_ret, is_owning: false);
                    __ret._KeepAliveEnclosingObject = this;
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __ret;
                }

                /// The second of the two elements, mutable.
                public unsafe new MR.CS.SeparateB Second()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_pair_MR_SeparateA_MR_SeparateB_second_mut", ExactSpelling = true)]
                    extern static MR.CS.SeparateB._Underlying *__MR_C_std_pair_MR_SeparateA_MR_SeparateB_second_mut(_Underlying *_this);
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_std_pair_MR_SeparateA_MR_SeparateB_second_mut(_UnderlyingPtr);
                    MR.CS.SeparateB __ret;
                    __ret = new(__c_ret, is_owning: false);
                    __ret._KeepAliveEnclosingObject = this;
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __ret;
                }

                // Custom extras:

                public void Deconstruct(out MR.CS.SeparateA _1, out MR.CS.SeparateB _2)
                {
                    _1 = First();
                    _2 = Second();
                }
            }

            /// This is used as a function parameter when the underlying function receives `Pair_MRSeparateA_MRSeparateB` by value.
            /// Usage:
            /// * Pass an instance of `Pair_MRSeparateA_MRSeparateB`/`Const_Pair_MRSeparateA_MRSeparateB` to copy it into the function.
            /// * Pass `Move(instance)` to move it into the function. This is a more efficient form of copying that might invalidate the input object.
            ///   Be careful if your input isn't a unique reference to this object.
            /// * Pass `null` to use the default argument, assuming the parameter has a default argument (has `?` in the type).
            public class _ByValue_Pair_MRSeparateA_MRSeparateB
            {
                #pragma warning disable CS0649
                internal readonly Const_Pair_MRSeparateA_MRSeparateB? Value;
                #pragma warning restore CS0649
                internal readonly MR.CS.Misc._PassBy PassByMode;
                public _ByValue_Pair_MRSeparateA_MRSeparateB(Const_Pair_MRSeparateA_MRSeparateB new_value) {Value = new_value; PassByMode = MR.CS.Misc._PassBy.copy;}
                public static implicit operator _ByValue_Pair_MRSeparateA_MRSeparateB(Const_Pair_MRSeparateA_MRSeparateB arg) {return new(arg);}
                public _ByValue_Pair_MRSeparateA_MRSeparateB(MR.CS.Misc._Moved<Pair_MRSeparateA_MRSeparateB> moved) {Value = moved.Value; PassByMode = MR.CS.Misc._PassBy.move;}
                public static implicit operator _ByValue_Pair_MRSeparateA_MRSeparateB(MR.CS.Misc._Moved<Pair_MRSeparateA_MRSeparateB> arg) {return new(arg);}
            }

            /// This is used for optional parameters of class `Pair_MRSeparateA_MRSeparateB` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Pair_MRSeparateA_MRSeparateB`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Pair_MRSeparateA_MRSeparateB`/`Const_Pair_MRSeparateA_MRSeparateB` directly.
            public class _InOptMut_Pair_MRSeparateA_MRSeparateB
            {
                public Pair_MRSeparateA_MRSeparateB? Opt;

                public _InOptMut_Pair_MRSeparateA_MRSeparateB() {}
                public _InOptMut_Pair_MRSeparateA_MRSeparateB(Pair_MRSeparateA_MRSeparateB value) {Opt = value;}
                public static implicit operator _InOptMut_Pair_MRSeparateA_MRSeparateB(Pair_MRSeparateA_MRSeparateB value) {return new(value);}
            }

            /// This is used for optional parameters of class `Pair_MRSeparateA_MRSeparateB` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Pair_MRSeparateA_MRSeparateB`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Pair_MRSeparateA_MRSeparateB`/`Const_Pair_MRSeparateA_MRSeparateB` to pass it to the function.
            public class _InOptConst_Pair_MRSeparateA_MRSeparateB
            {
                public Const_Pair_MRSeparateA_MRSeparateB? Opt;

                public _InOptConst_Pair_MRSeparateA_MRSeparateB() {}
                public _InOptConst_Pair_MRSeparateA_MRSeparateB(Const_Pair_MRSeparateA_MRSeparateB value) {Opt = value;}
                public static implicit operator _InOptConst_Pair_MRSeparateA_MRSeparateB(Const_Pair_MRSeparateA_MRSeparateB value) {return new(value);}
            }
        }
    }
}
