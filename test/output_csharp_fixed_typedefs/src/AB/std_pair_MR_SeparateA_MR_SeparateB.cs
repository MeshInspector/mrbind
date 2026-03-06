public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// Stores two objects: `MR::SeparateA` and `MR::SeparateA`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_Pair_MRSeparateA_MRSeparateB : MR.CS.Misc.Object<Const_Pair_MRSeparateA_MRSeparateB>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh_AB", EntryPoint = "MR_C_std_pair_MR_SeparateA_MR_SeparateB_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_pair_MR_SeparateA_MR_SeparateB_Destroy(_Underlying *_this);
                    __MR_C_std_pair_MR_SeparateA_MR_SeparateB_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Pair_MRSeparateA_MRSeparateB() {Dispose(false);}

                internal unsafe Const_Pair_MRSeparateA_MRSeparateB(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_Pair_MRSeparateA_MRSeparateB() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh_AB", EntryPoint = "MR_C_std_pair_MR_SeparateA_MR_SeparateB_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Pair_MRSeparateA_MRSeparateB._Underlying *__MR_C_std_pair_MR_SeparateA_MR_SeparateB_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_pair_MR_SeparateA_MR_SeparateB_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Const_Pair_MRSeparateA_MRSeparateB(MR.CS.Std.Const_Pair_MRSeparateA_MRSeparateB other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh_AB", EntryPoint = "MR_C_std_pair_MR_SeparateA_MR_SeparateB_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Pair_MRSeparateA_MRSeparateB._Underlying *__MR_C_std_pair_MR_SeparateA_MR_SeparateB_ConstructFromAnother(MR.CS.Std.Pair_MRSeparateA_MRSeparateB._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_pair_MR_SeparateA_MR_SeparateB_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Const_Pair_MRSeparateA_MRSeparateB(Pair_MRSeparateA_MRSeparateB other) : this((Const_Pair_MRSeparateA_MRSeparateB)other) {}

                /// <summary>
                /// Constructs the pair elementwise.
                /// </summary>
                public unsafe Const_Pair_MRSeparateA_MRSeparateB(MR.CS.Const_SeparateA first, MR.CS.Const_SeparateB second) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh_AB", EntryPoint = "MR_C_std_pair_MR_SeparateA_MR_SeparateB_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.Pair_MRSeparateA_MRSeparateB._Underlying *__MR_C_std_pair_MR_SeparateA_MR_SeparateB_Construct(MR.CS.SeparateA._Underlying *first, MR.CS.SeparateB._Underlying *second);
                    _UnderlyingPtr = __MR_C_std_pair_MR_SeparateA_MR_SeparateB_Construct(first._UnderlyingPtr, second._UnderlyingPtr);
                    _KeepAlive(first);
                    _KeepAlive(second);
                }

                /// <summary>
                /// The first of the two elements, read-only.
                /// </summary>
                public unsafe MR.CS.Const_SeparateA first()
                {
                    [System.Runtime.InteropServices.DllImport("bleh_AB", EntryPoint = "MR_C_std_pair_MR_SeparateA_MR_SeparateB_first", ExactSpelling = true)]
                    extern static MR.CS.Const_SeparateA._Underlying *__MR_C_std_pair_MR_SeparateA_MR_SeparateB_first(_Underlying *_this);
                    MR.CS.Const_SeparateA __ret;
                    __ret = new(__MR_C_std_pair_MR_SeparateA_MR_SeparateB_first(_UnderlyingPtr), is_owning: false);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// The second of the two elements, read-only.
                /// </summary>
                public unsafe MR.CS.Const_SeparateB second()
                {
                    [System.Runtime.InteropServices.DllImport("bleh_AB", EntryPoint = "MR_C_std_pair_MR_SeparateA_MR_SeparateB_second", ExactSpelling = true)]
                    extern static MR.CS.Const_SeparateB._Underlying *__MR_C_std_pair_MR_SeparateA_MR_SeparateB_second(_Underlying *_this);
                    MR.CS.Const_SeparateB __ret;
                    __ret = new(__MR_C_std_pair_MR_SeparateA_MR_SeparateB_second(_UnderlyingPtr), is_owning: false);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                // Custom extras:

                public void Deconstruct(out MR.CS.Const_SeparateA _1, out MR.CS.Const_SeparateB _2)
                {
                    _1 = first();
                    _2 = second();
                }
            }

            /// <summary>
            /// Stores two objects: `MR::SeparateA` and `MR::SeparateA`.
            /// This is the non-const half of the class.
            /// </summary>
            public class Pair_MRSeparateA_MRSeparateB : Const_Pair_MRSeparateA_MRSeparateB
            {
                internal unsafe Pair_MRSeparateA_MRSeparateB(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Pair_MRSeparateA_MRSeparateB() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh_AB", EntryPoint = "MR_C_std_pair_MR_SeparateA_MR_SeparateB_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Pair_MRSeparateA_MRSeparateB._Underlying *__MR_C_std_pair_MR_SeparateA_MR_SeparateB_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_pair_MR_SeparateA_MR_SeparateB_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Pair_MRSeparateA_MRSeparateB(MR.CS.Std.Const_Pair_MRSeparateA_MRSeparateB other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh_AB", EntryPoint = "MR_C_std_pair_MR_SeparateA_MR_SeparateB_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Pair_MRSeparateA_MRSeparateB._Underlying *__MR_C_std_pair_MR_SeparateA_MR_SeparateB_ConstructFromAnother(MR.CS.Std.Pair_MRSeparateA_MRSeparateB._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_pair_MR_SeparateA_MR_SeparateB_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public Pair_MRSeparateA_MRSeparateB(Pair_MRSeparateA_MRSeparateB other) : this((Const_Pair_MRSeparateA_MRSeparateB)other) {}

                /// <summary>
                /// Assigns the contents from another instance. Both objects remain alive after the call.
                /// </summary>
                public unsafe void assign(MR.CS.Std.Const_Pair_MRSeparateA_MRSeparateB other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh_AB", EntryPoint = "MR_C_std_pair_MR_SeparateA_MR_SeparateB_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_pair_MR_SeparateA_MR_SeparateB_AssignFromAnother(_Underlying *_this, MR.CS.Std.Pair_MRSeparateA_MRSeparateB._Underlying *other);
                    _DiscardKeepAlive();
                    _KeepAlive(other);
                    __MR_C_std_pair_MR_SeparateA_MR_SeparateB_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                }

                /// <summary>
                /// Constructs the pair elementwise.
                /// </summary>
                public unsafe Pair_MRSeparateA_MRSeparateB(MR.CS.Const_SeparateA first, MR.CS.Const_SeparateB second) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh_AB", EntryPoint = "MR_C_std_pair_MR_SeparateA_MR_SeparateB_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.Pair_MRSeparateA_MRSeparateB._Underlying *__MR_C_std_pair_MR_SeparateA_MR_SeparateB_Construct(MR.CS.SeparateA._Underlying *first, MR.CS.SeparateB._Underlying *second);
                    _UnderlyingPtr = __MR_C_std_pair_MR_SeparateA_MR_SeparateB_Construct(first._UnderlyingPtr, second._UnderlyingPtr);
                    _KeepAlive(first);
                    _KeepAlive(second);
                }

                /// <summary>
                /// The first of the two elements, mutable.
                /// </summary>
                public unsafe new MR.CS.SeparateA first()
                {
                    [System.Runtime.InteropServices.DllImport("bleh_AB", EntryPoint = "MR_C_std_pair_MR_SeparateA_MR_SeparateB_first_mut", ExactSpelling = true)]
                    extern static MR.CS.SeparateA._Underlying *__MR_C_std_pair_MR_SeparateA_MR_SeparateB_first_mut(_Underlying *_this);
                    MR.CS.SeparateA __ret;
                    __ret = new(__MR_C_std_pair_MR_SeparateA_MR_SeparateB_first_mut(_UnderlyingPtr), is_owning: false);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                /// <summary>
                /// The second of the two elements, mutable.
                /// </summary>
                public unsafe new MR.CS.SeparateB second()
                {
                    [System.Runtime.InteropServices.DllImport("bleh_AB", EntryPoint = "MR_C_std_pair_MR_SeparateA_MR_SeparateB_second_mut", ExactSpelling = true)]
                    extern static MR.CS.SeparateB._Underlying *__MR_C_std_pair_MR_SeparateA_MR_SeparateB_second_mut(_Underlying *_this);
                    MR.CS.SeparateB __ret;
                    __ret = new(__MR_C_std_pair_MR_SeparateA_MR_SeparateB_second_mut(_UnderlyingPtr), is_owning: false);
                    __ret._KeepAliveEnclosingObject = this;
                    return __ret;
                }

                // Custom extras:

                public void Deconstruct(out MR.CS.SeparateA _1, out MR.CS.SeparateB _2)
                {
                    _1 = first();
                    _2 = second();
                }
            }

            /// <summary>
            /// This is used for optional parameters of class `Pair_MRSeparateA_MRSeparateB` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Pair_MRSeparateA_MRSeparateB`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Pair_MRSeparateA_MRSeparateB`/`Const_Pair_MRSeparateA_MRSeparateB` directly.
            /// </summary>
            public class _InOptMut_Pair_MRSeparateA_MRSeparateB
            {
                public Pair_MRSeparateA_MRSeparateB? Opt;

                public _InOptMut_Pair_MRSeparateA_MRSeparateB() {}
                public _InOptMut_Pair_MRSeparateA_MRSeparateB(Pair_MRSeparateA_MRSeparateB value) {Opt = value;}
                public static implicit operator _InOptMut_Pair_MRSeparateA_MRSeparateB(Pair_MRSeparateA_MRSeparateB value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Pair_MRSeparateA_MRSeparateB` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Pair_MRSeparateA_MRSeparateB`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Pair_MRSeparateA_MRSeparateB`/`Const_Pair_MRSeparateA_MRSeparateB` to pass it to the function.
            /// </summary>
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
