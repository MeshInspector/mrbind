public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// <summary>
            /// Stores 0 objects.
            /// This is the const half of the class.
            /// </summary>
            public class Const_Tuple : MR.CS.Misc.Object<Const_Tuple>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_tuple_Destroy(_Underlying *_this);
                    __MR_C_std_tuple_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Tuple() {Dispose(false);}

                internal unsafe Const_Tuple(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_Tuple() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple._Underlying *__MR_C_std_tuple_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_tuple_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Const_Tuple(MR.CS.Std.Const_Tuple other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple._Underlying *__MR_C_std_tuple_ConstructFromAnother(MR.CS.Std.Tuple._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_tuple_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }
            }

            /// <summary>
            /// Stores 0 objects.
            /// This is the non-const half of the class.
            /// </summary>
            public class Tuple : Const_Tuple
            {
                internal unsafe Tuple(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Tuple() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple._Underlying *__MR_C_std_tuple_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_tuple_DefaultConstruct();
                }

                /// <summary>
                /// Constructs a copy of another instance. The source remains alive.
                /// </summary>
                public unsafe Tuple(MR.CS.Std.Const_Tuple other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple._Underlying *__MR_C_std_tuple_ConstructFromAnother(MR.CS.Std.Tuple._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_tuple_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// <summary>
                /// Assigns the contents from another instance. Both objects remain alive after the call.
                /// </summary>
                public unsafe void assign(MR.CS.Std.Const_Tuple other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_tuple_AssignFromAnother(_Underlying *_this, MR.CS.Std.Tuple._Underlying *other);
                    _DiscardKeepAlive();
                    _KeepAlive(other);
                    __MR_C_std_tuple_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                }
            }

            /// <summary>
            /// This is used for optional parameters of class `Tuple` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Tuple`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Tuple`/`Const_Tuple` directly.
            /// </summary>
            public class _InOptMut_Tuple
            {
                public Tuple? Opt;

                public _InOptMut_Tuple() {}
                public _InOptMut_Tuple(Tuple value) {Opt = value;}
                public static implicit operator _InOptMut_Tuple(Tuple value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `Tuple` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Tuple`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Tuple`/`Const_Tuple` to pass it to the function.
            /// </summary>
            public class _InOptConst_Tuple
            {
                public Const_Tuple? Opt;

                public _InOptConst_Tuple() {}
                public _InOptConst_Tuple(Const_Tuple value) {Opt = value;}
                public static implicit operator _InOptConst_Tuple(Const_Tuple value) {return new(value);}
            }
        }
    }
}
