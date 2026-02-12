public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// Stores 1 object: `int`.
            /// This is the const half of the class.
            public class Const_Tuple_Int : MR.CS.Misc.Object<Const_Tuple_Int>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_int_Destroy", ExactSpelling = true)]
                    extern static void __MR_C_std_tuple_int_Destroy(_Underlying *_this);
                    __MR_C_std_tuple_int_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_Tuple_Int() {Dispose(false);}

                internal unsafe Const_Tuple_Int(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_Tuple_Int() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_int_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_Int._Underlying *__MR_C_std_tuple_int_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_tuple_int_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Const_Tuple_Int(MR.CS.Std.Const_Tuple_Int other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_int_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_Int._Underlying *__MR_C_std_tuple_int_ConstructFromAnother(MR.CS.Std.Tuple_Int._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_tuple_int_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// Constructs a copy of another instance. The source remains alive.
                public Const_Tuple_Int(Tuple_Int other) : this((Const_Tuple_Int)other) {}

                /// Constructs the tuple elementwise.
                public unsafe Const_Tuple_Int(int _0) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_int_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_Int._Underlying *__MR_C_std_tuple_int_Construct(int _0);
                    _UnderlyingPtr = __MR_C_std_tuple_int_Construct(_0);
                }

                /// Constructs the tuple elementwise.
                public static unsafe implicit operator Const_Tuple_Int(int _0) {return new(_0);}

                /// The element 0, of type `int`, read-only.
                public unsafe int GetInt()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_int_get_int", ExactSpelling = true)]
                    extern static int *__MR_C_std_tuple_int_get_int(_Underlying *_this);
                    return *__MR_C_std_tuple_int_get_int(_UnderlyingPtr);
                }
            }

            /// Stores 1 object: `int`.
            /// This is the non-const half of the class.
            public class Tuple_Int : Const_Tuple_Int
            {
                internal unsafe Tuple_Int(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Tuple_Int() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_int_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_Int._Underlying *__MR_C_std_tuple_int_DefaultConstruct();
                    _UnderlyingPtr = __MR_C_std_tuple_int_DefaultConstruct();
                }

                /// Constructs a copy of another instance. The source remains alive.
                public unsafe Tuple_Int(MR.CS.Std.Const_Tuple_Int other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_int_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_Int._Underlying *__MR_C_std_tuple_int_ConstructFromAnother(MR.CS.Std.Tuple_Int._Underlying *other);
                    _UnderlyingPtr = __MR_C_std_tuple_int_ConstructFromAnother(other._UnderlyingPtr);
                    _KeepAlive(other);
                }

                /// Constructs a copy of another instance. The source remains alive.
                public Tuple_Int(Tuple_Int other) : this((Const_Tuple_Int)other) {}

                /// Assigns the contents from another instance. Both objects remain alive after the call.
                public unsafe void Assign(MR.CS.Std.Const_Tuple_Int other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_int_AssignFromAnother", ExactSpelling = true)]
                    extern static void __MR_C_std_tuple_int_AssignFromAnother(_Underlying *_this, MR.CS.Std.Tuple_Int._Underlying *other);
                    _DiscardKeepAlive();
                    _KeepAlive(other);
                    __MR_C_std_tuple_int_AssignFromAnother(_UnderlyingPtr, other._UnderlyingPtr);
                }

                /// Constructs the tuple elementwise.
                public unsafe Tuple_Int(int _0) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_int_Construct", ExactSpelling = true)]
                    extern static MR.CS.Std.Tuple_Int._Underlying *__MR_C_std_tuple_int_Construct(int _0);
                    _UnderlyingPtr = __MR_C_std_tuple_int_Construct(_0);
                }

                /// Constructs the tuple elementwise.
                public static unsafe implicit operator Tuple_Int(int _0) {return new(_0);}

                /// The element 0, of type `int`, mutable.
                public unsafe new ref int GetInt()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_std_tuple_int_get_int_mut", ExactSpelling = true)]
                    extern static int *__MR_C_std_tuple_int_get_int_mut(_Underlying *_this);
                    return ref *__MR_C_std_tuple_int_get_int_mut(_UnderlyingPtr);
                }
            }

            /// This is used for optional parameters of class `Tuple_Int` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Tuple_Int`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Tuple_Int`/`Const_Tuple_Int` directly.
            public class _InOptMut_Tuple_Int
            {
                public Tuple_Int? Opt;

                public _InOptMut_Tuple_Int() {}
                public _InOptMut_Tuple_Int(Tuple_Int value) {Opt = value;}
                public static implicit operator _InOptMut_Tuple_Int(Tuple_Int value) {return new(value);}
            }

            /// This is used for optional parameters of class `Tuple_Int` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Tuple_Int`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Tuple_Int`/`Const_Tuple_Int` to pass it to the function.
            public class _InOptConst_Tuple_Int
            {
                public Const_Tuple_Int? Opt;

                public _InOptConst_Tuple_Int() {}
                public _InOptConst_Tuple_Int(Const_Tuple_Int value) {Opt = value;}
                public static implicit operator _InOptConst_Tuple_Int(Const_Tuple_Int value) {return new(value);}

                /// Constructs the tuple elementwise.
                public static unsafe implicit operator _InOptConst_Tuple_Int(int _0) {return new Const_Tuple_Int(_0);}
            }
        }
    }
}
