public static partial class MR
{
    public static partial class CS
    {
        public static partial class CustomPrefNames
        {
            /// Generated from class `MR::CustomPrefNames::Ai`.
            /// This is the const half of the class.
            public class Const_Ai : MR.CS.Misc.Object<Const_Ai>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CustomPrefNames_Ai_Destroy", ExactSpelling = true)]
                    extern static void __MR_CustomPrefNames_Ai_Destroy(_Underlying *_this);
                    __MR_CustomPrefNames_Ai_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Ai() {Dispose(false);}

                internal unsafe Const_Ai(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_Ai() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CustomPrefNames_Ai_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CustomPrefNames.Ai._Underlying *__MR_CustomPrefNames_Ai_DefaultConstruct();
                    _UnderlyingPtr = __MR_CustomPrefNames_Ai_DefaultConstruct();
                }

                /// Generated from constructor `MR::CustomPrefNames::Ai::Ai`.
                public unsafe Const_Ai(MR.CS.CustomPrefNames.Const_Ai _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CustomPrefNames_Ai_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CustomPrefNames.Ai._Underlying *__MR_CustomPrefNames_Ai_ConstructFromAnother(MR.CS.CustomPrefNames.Ai._Underlying *_other);
                    _UnderlyingPtr = __MR_CustomPrefNames_Ai_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// Generated from constructor `MR::CustomPrefNames::Ai::Ai`.
                public Const_Ai(Ai _other) : this((Const_Ai)_other) {}
            }

            /// Generated from class `MR::CustomPrefNames::Ai`.
            /// This is the non-const half of the class.
            public class Ai : Const_Ai
            {
                internal unsafe Ai(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Ai() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CustomPrefNames_Ai_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CustomPrefNames.Ai._Underlying *__MR_CustomPrefNames_Ai_DefaultConstruct();
                    _UnderlyingPtr = __MR_CustomPrefNames_Ai_DefaultConstruct();
                }

                /// Generated from constructor `MR::CustomPrefNames::Ai::Ai`.
                public unsafe Ai(MR.CS.CustomPrefNames.Const_Ai _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CustomPrefNames_Ai_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CustomPrefNames.Ai._Underlying *__MR_CustomPrefNames_Ai_ConstructFromAnother(MR.CS.CustomPrefNames.Ai._Underlying *_other);
                    _UnderlyingPtr = __MR_CustomPrefNames_Ai_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// Generated from constructor `MR::CustomPrefNames::Ai::Ai`.
                public Ai(Ai _other) : this((Const_Ai)_other) {}

                /// Generated from method `MR::CustomPrefNames::Ai::operator=`.
                public unsafe MR.CS.CustomPrefNames.Ai Assign(MR.CS.CustomPrefNames.Const_Ai _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CustomPrefNames_Ai_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CustomPrefNames.Ai._Underlying *__MR_CustomPrefNames_Ai_AssignFromAnother(_Underlying *_this, MR.CS.CustomPrefNames.Ai._Underlying *_other);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_CustomPrefNames_Ai_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }
            }

            /// This is used for optional parameters of class `Ai` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Ai`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Ai`/`Const_Ai` directly.
            public class _InOptMut_Ai
            {
                public Ai? Opt;

                public _InOptMut_Ai() {}
                public _InOptMut_Ai(Ai value) {Opt = value;}
                public static implicit operator _InOptMut_Ai(Ai value) {return new(value);}
            }

            /// This is used for optional parameters of class `Ai` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Ai`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Ai`/`Const_Ai` to pass it to the function.
            public class _InOptConst_Ai
            {
                public Const_Ai? Opt;

                public _InOptConst_Ai() {}
                public _InOptConst_Ai(Const_Ai value) {Opt = value;}
                public static implicit operator _InOptConst_Ai(Const_Ai value) {return new(value);}
            }

            /// Generated from class `MR::CustomPrefNames::Af`.
            /// This is the const half of the class.
            public class Const_Af : MR.CS.Misc.Object<Const_Af>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CustomPrefNames_Af_Destroy", ExactSpelling = true)]
                    extern static void __MR_CustomPrefNames_Af_Destroy(_Underlying *_this);
                    __MR_CustomPrefNames_Af_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Af() {Dispose(false);}

                internal unsafe Const_Af(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_Af() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CustomPrefNames_Af_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CustomPrefNames.Af._Underlying *__MR_CustomPrefNames_Af_DefaultConstruct();
                    _UnderlyingPtr = __MR_CustomPrefNames_Af_DefaultConstruct();
                }

                /// Generated from constructor `MR::CustomPrefNames::Af::Af`.
                public unsafe Const_Af(MR.CS.CustomPrefNames.Const_Af _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CustomPrefNames_Af_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CustomPrefNames.Af._Underlying *__MR_CustomPrefNames_Af_ConstructFromAnother(MR.CS.CustomPrefNames.Af._Underlying *_other);
                    _UnderlyingPtr = __MR_CustomPrefNames_Af_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// Generated from constructor `MR::CustomPrefNames::Af::Af`.
                public Const_Af(Af _other) : this((Const_Af)_other) {}
            }

            /// Generated from class `MR::CustomPrefNames::Af`.
            /// This is the non-const half of the class.
            public class Af : Const_Af
            {
                internal unsafe Af(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Af() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CustomPrefNames_Af_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.CustomPrefNames.Af._Underlying *__MR_CustomPrefNames_Af_DefaultConstruct();
                    _UnderlyingPtr = __MR_CustomPrefNames_Af_DefaultConstruct();
                }

                /// Generated from constructor `MR::CustomPrefNames::Af::Af`.
                public unsafe Af(MR.CS.CustomPrefNames.Const_Af _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CustomPrefNames_Af_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CustomPrefNames.Af._Underlying *__MR_CustomPrefNames_Af_ConstructFromAnother(MR.CS.CustomPrefNames.Af._Underlying *_other);
                    _UnderlyingPtr = __MR_CustomPrefNames_Af_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// Generated from constructor `MR::CustomPrefNames::Af::Af`.
                public Af(Af _other) : this((Const_Af)_other) {}

                /// Generated from method `MR::CustomPrefNames::Af::operator=`.
                public unsafe MR.CS.CustomPrefNames.Af Assign(MR.CS.CustomPrefNames.Const_Af _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CustomPrefNames_Af_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.CustomPrefNames.Af._Underlying *__MR_CustomPrefNames_Af_AssignFromAnother(_Underlying *_this, MR.CS.CustomPrefNames.Af._Underlying *_other);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_CustomPrefNames_Af_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }
            }

            /// This is used for optional parameters of class `Af` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Af`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Af`/`Const_Af` directly.
            public class _InOptMut_Af
            {
                public Af? Opt;

                public _InOptMut_Af() {}
                public _InOptMut_Af(Af value) {Opt = value;}
                public static implicit operator _InOptMut_Af(Af value) {return new(value);}
            }

            /// This is used for optional parameters of class `Af` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Af`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Af`/`Const_Af` to pass it to the function.
            public class _InOptConst_Af
            {
                public Const_Af? Opt;

                public _InOptConst_Af() {}
                public _InOptConst_Af(Const_Af value) {Opt = value;}
                public static implicit operator _InOptConst_Af(Const_Af value) {return new(value);}
            }

            /// Generated from function `MR::CustomPrefNames::blah`.
            public static void Blah()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CustomPrefNames_blah", ExactSpelling = true)]
                extern static void __MR_CustomPrefNames_blah();
                __MR_CustomPrefNames_blah();
            }
        }
    }
}
