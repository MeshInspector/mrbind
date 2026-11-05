public static partial class MR
{
    public static partial class CS
    {
        // A sub-library that nothing else uses. `make_csharp.sh` skips it in one of the C# variants (`--skip-split-lib`).
        /// Generated from class `MR::SeparateABC`.
        /// This is the const half of the class.
        public class Const_SeparateABC : MR.CS.Misc.Object<Const_SeparateABC>, System.IDisposable
        {
            internal struct _Underlying {} // Represents the underlying C++ type.

            internal unsafe _Underlying *_UnderlyingPtr;

            protected virtual unsafe void Dispose(bool disposing)
            {
                if (_UnderlyingPtr is null || !_IsOwningVal)
                    return;
                __MR_SeparateABC_Destroy(_UnderlyingPtr);
                _UnderlyingPtr = null;
            }
            public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
            ~Const_SeparateABC() {Dispose(false);}

            internal unsafe Const_SeparateABC(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

            /// Constructs an empty (default-constructed) instance.
            public unsafe Const_SeparateABC() : this(null, is_owning: true)
            {
                MR.CS.Misc._Exceptions.Prepare();
                _UnderlyingPtr = __MR_SeparateABC_DefaultConstruct();
                MR.CS.Misc._Exceptions.ThrowIfNeeded();
            }

            /// Generated from constructor `MR::SeparateABC::SeparateABC`.
            public unsafe Const_SeparateABC(MR.CS.Const_SeparateABC _other) : this(null, is_owning: true)
            {
                MR.CS.Misc._Exceptions.Prepare();
                _UnderlyingPtr = __MR_SeparateABC_ConstructFromAnother(_other._UnderlyingPtr);
                _KeepAlive(_other);
                MR.CS.Misc._Exceptions.ThrowIfNeeded();
            }

            /// Generated from constructor `MR::SeparateABC::SeparateABC`.
            public Const_SeparateABC(SeparateABC _other) : this((Const_SeparateABC)_other) {}

            // DllImport:

            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_SeparateABC_ConstructFromAnother", ExactSpelling = true)]
            extern static unsafe MR.CS.SeparateABC._Underlying *__MR_SeparateABC_ConstructFromAnother(MR.CS.SeparateABC._Underlying *_other);

            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_SeparateABC_DefaultConstruct", ExactSpelling = true)]
            extern static unsafe MR.CS.SeparateABC._Underlying *__MR_SeparateABC_DefaultConstruct();

            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_SeparateABC_Destroy", ExactSpelling = true)]
            extern static unsafe void __MR_SeparateABC_Destroy(_Underlying *_this);
        }

        // A sub-library that nothing else uses. `make_csharp.sh` skips it in one of the C# variants (`--skip-split-lib`).
        /// Generated from class `MR::SeparateABC`.
        /// This is the non-const half of the class.
        public class SeparateABC : Const_SeparateABC
        {
            internal unsafe SeparateABC(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

            /// Constructs an empty (default-constructed) instance.
            public unsafe SeparateABC() : this(null, is_owning: true)
            {
                MR.CS.Misc._Exceptions.Prepare();
                _UnderlyingPtr = __MR_SeparateABC_DefaultConstruct();
                MR.CS.Misc._Exceptions.ThrowIfNeeded();
            }

            /// Generated from constructor `MR::SeparateABC::SeparateABC`.
            public unsafe SeparateABC(MR.CS.Const_SeparateABC _other) : this(null, is_owning: true)
            {
                MR.CS.Misc._Exceptions.Prepare();
                _UnderlyingPtr = __MR_SeparateABC_ConstructFromAnother(_other._UnderlyingPtr);
                _KeepAlive(_other);
                MR.CS.Misc._Exceptions.ThrowIfNeeded();
            }

            /// Generated from constructor `MR::SeparateABC::SeparateABC`.
            public SeparateABC(SeparateABC _other) : this((Const_SeparateABC)_other) {}

            /// Generated from method `MR::SeparateABC::operator=`.
            public unsafe MR.CS.SeparateABC Assign(MR.CS.Const_SeparateABC _other)
            {
                MR.CS.Misc._Exceptions.Prepare();
                var __c_ret = __MR_SeparateABC_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr);
                _DiscardKeepAlive();
                _KeepAlive(_other);
                MR.CS.Misc._Exceptions.ThrowIfNeeded();
                return new(__c_ret, is_owning: false);
            }

            // DllImport:

            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_SeparateABC_AssignFromAnother", ExactSpelling = true)]
            extern static unsafe MR.CS.SeparateABC._Underlying *__MR_SeparateABC_AssignFromAnother(_Underlying *_this, MR.CS.SeparateABC._Underlying *_other);

            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_SeparateABC_ConstructFromAnother", ExactSpelling = true)]
            extern static unsafe MR.CS.SeparateABC._Underlying *__MR_SeparateABC_ConstructFromAnother(MR.CS.SeparateABC._Underlying *_other);

            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_SeparateABC_DefaultConstruct", ExactSpelling = true)]
            extern static unsafe MR.CS.SeparateABC._Underlying *__MR_SeparateABC_DefaultConstruct();
        }

        /// This is used for optional parameters of class `SeparateABC` with default arguments.
        /// This is only used mutable parameters. For const ones we have `_InOptConst_SeparateABC`.
        /// Usage:
        /// * Pass `null` to use the default argument.
        /// * Pass `new()` to pass no object.
        /// * Pass an instance of `SeparateABC`/`Const_SeparateABC` directly.
        public class _InOptMut_SeparateABC
        {
            public SeparateABC? Opt;

            public _InOptMut_SeparateABC() {}
            public _InOptMut_SeparateABC(SeparateABC value) {Opt = value;}
            public static implicit operator _InOptMut_SeparateABC(SeparateABC value) {return new(value);}
        }

        /// This is used for optional parameters of class `SeparateABC` with default arguments.
        /// This is only used const parameters. For non-const ones we have `_InOptMut_SeparateABC`.
        /// Usage:
        /// * Pass `null` to use the default argument.
        /// * Pass `new()` to pass no object.
        /// * Pass an instance of `SeparateABC`/`Const_SeparateABC` to pass it to the function.
        public class _InOptConst_SeparateABC
        {
            public Const_SeparateABC? Opt;

            public _InOptConst_SeparateABC() {}
            public _InOptConst_SeparateABC(Const_SeparateABC value) {Opt = value;}
            public static implicit operator _InOptConst_SeparateABC(Const_SeparateABC value) {return new(value);}
        }

        /// Generated from function `MR::GetSeparateVecABC`.
        public static unsafe MR.CS.Std.Vector_MRSeparateABC GetSeparateVecABC()
        {
            MR.CS.Misc._Exceptions.Prepare();
            var __c_ret = __MR_GetSeparateVecABC();
            MR.CS.Misc._Exceptions.ThrowIfNeeded();
            return new(__c_ret, is_owning: true);
        }

        // DllImport:

        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_GetSeparateVecABC", ExactSpelling = true)]
        extern static unsafe MR.CS.Std.Vector_MRSeparateABC._Underlying *__MR_GetSeparateVecABC();
    }
}
