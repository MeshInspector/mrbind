public static partial class MR
{
    public static partial class CS
    {
        public static partial class AdjustingNames
        {
            // And test that `uint64_t` is correctly adjusted in some other kinds of names.
            // Though here we don't really test that each of them brings its own includes.
            /// <summary>
            /// Generated from class `MR::AdjustingNames::A`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_A : MR.CS.Misc.Object<Const_A>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_AdjustingNames_A_Destroy", ExactSpelling = true)]
                    extern static void __MR_AdjustingNames_A_Destroy(_Underlying *_this);
                    __MR_AdjustingNames_A_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_A() {Dispose(false);}

                public static unsafe ref ulong Var_MRCUint64T => ref *__ref_storage_Var_MRCUint64T;
                private protected static unsafe ulong *__ref_storage_Var_MRCUint64T;

                unsafe static Const_A()
                {
                    { // Var_MRCUint64T (ref)
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_AdjustingNames_A_GetMutable_var_uint64_t", ExactSpelling = true)]
                        extern static ulong *__MR_AdjustingNames_A_GetMutable_var_uint64_t();
                        Const_A.__ref_storage_Var_MRCUint64T = __MR_AdjustingNames_A_GetMutable_var_uint64_t();
                    }
                }

                internal unsafe Const_A(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_A() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_AdjustingNames_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.AdjustingNames.A._Underlying *__MR_AdjustingNames_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_AdjustingNames_A_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::AdjustingNames::A::A`.
                /// </summary>
                public unsafe Const_A(MR.CS.AdjustingNames.Const_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_AdjustingNames_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.AdjustingNames.A._Underlying *__MR_AdjustingNames_A_ConstructFromAnother(MR.CS.AdjustingNames.A._Underlying *_other);
                    _UnderlyingPtr = __MR_AdjustingNames_A_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }
            }

            // And test that `uint64_t` is correctly adjusted in some other kinds of names.
            // Though here we don't really test that each of them brings its own includes.
            /// <summary>
            /// Generated from class `MR::AdjustingNames::A`.
            /// This is the non-const half of the class.
            /// </summary>
            public class A : Const_A
            {
                internal unsafe A(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe A() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_AdjustingNames_A_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.AdjustingNames.A._Underlying *__MR_AdjustingNames_A_DefaultConstruct();
                    _UnderlyingPtr = __MR_AdjustingNames_A_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::AdjustingNames::A::A`.
                /// </summary>
                public unsafe A(MR.CS.AdjustingNames.Const_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_AdjustingNames_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.AdjustingNames.A._Underlying *__MR_AdjustingNames_A_ConstructFromAnother(MR.CS.AdjustingNames.A._Underlying *_other);
                    _UnderlyingPtr = __MR_AdjustingNames_A_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// <summary>
                /// Generated from conversion operator `MR::AdjustingNames::A::operator MR_C_uint64_t`.
                /// </summary>
                public static unsafe implicit operator ulong(MR.CS.AdjustingNames.A _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_AdjustingNames_A_ConvertTo_uint64_t", ExactSpelling = true)]
                    extern static ulong __MR_AdjustingNames_A_ConvertTo_uint64_t(MR.CS.AdjustingNames.A._Underlying *_this);
                    return __MR_AdjustingNames_A_ConvertTo_uint64_t(_this._UnderlyingPtr);
                }

                /// <summary>
                /// Generated from method `MR::AdjustingNames::A::operator=`.
                /// </summary>
                public unsafe MR.CS.AdjustingNames.A assign(MR.CS.AdjustingNames.Const_A _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_AdjustingNames_A_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.AdjustingNames.A._Underlying *__MR_AdjustingNames_A_AssignFromAnother(_Underlying *_this, MR.CS.AdjustingNames.A._Underlying *_other);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_AdjustingNames_A_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }

                /// <summary>
                /// Generated from method `MR::AdjustingNames::A::foo<MR_C_uint64_t>`.
                /// </summary>
                public unsafe void foo()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_AdjustingNames_A_foo", ExactSpelling = true)]
                    extern static void __MR_AdjustingNames_A_foo(_Underlying *_this);
                    __MR_AdjustingNames_A_foo(_UnderlyingPtr);
                }

                /// <summary>
                /// Generated from method `MR::AdjustingNames::A::bar`.
                /// </summary>
                public unsafe void bar()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_AdjustingNames_A_bar", ExactSpelling = true)]
                    extern static void __MR_AdjustingNames_A_bar(_Underlying *_this);
                    __MR_AdjustingNames_A_bar(_UnderlyingPtr);
                }
            }

            /// <summary>
            /// This is used for optional parameters of class `A` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_A`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `A`/`Const_A` directly.
            /// </summary>
            public class _InOptMut_A
            {
                public A? Opt;

                public _InOptMut_A() {}
                public _InOptMut_A(A value) {Opt = value;}
                public static implicit operator _InOptMut_A(A value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `A` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_A`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `A`/`Const_A` to pass it to the function.
            /// </summary>
            public class _InOptConst_A
            {
                public Const_A? Opt;

                public _InOptConst_A() {}
                public _InOptConst_A(Const_A value) {Opt = value;}
                public static implicit operator _InOptConst_A(Const_A value) {return new(value);}
            }

            // When we're gonna call `foo<MR_C_uint64_t>()` in the source file, we must include the header for our typedef (and for the template arguments in general).
            // And we must make sure that the typedef gets applied to the name correctly.
            /// <summary>
            /// Generated from function `MR::AdjustingNames::foo<MR_C_uint64_t>`.
            /// </summary>
            public static void foo()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_AdjustingNames_foo", ExactSpelling = true)]
                extern static void __MR_AdjustingNames_foo();
                __MR_AdjustingNames_foo();
            }

            /// <summary>
            /// Generated from function `MR::AdjustingNames::bar`.
            /// </summary>
            public static void bar()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_AdjustingNames_bar", ExactSpelling = true)]
                extern static void __MR_AdjustingNames_bar();
                __MR_AdjustingNames_bar();
            }
        }
    }
}
