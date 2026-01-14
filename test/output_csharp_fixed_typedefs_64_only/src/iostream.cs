public static partial class MR
{
    public static partial class CS
    {
        public static partial class Std
        {
            /// This is the const half of the class.
            public class Const_Ostream : MR.CS.Misc.Object
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_Ostream(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}
            }

            /// This is the non-const half of the class.
            public class Ostream : Const_Ostream
            {
                internal unsafe Ostream(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Generated from function `MR::IOStream::operator<<`.
                public unsafe void lshift(MR.CS.IOStream.Const_A _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_print_MR_IOStream_A", ExactSpelling = true)]
                    extern static void __MR_C_print_MR_IOStream_A(_Underlying *_1, MR.CS.IOStream.Const_A._Underlying *_2);
                    __MR_C_print_MR_IOStream_A(_UnderlyingPtr, _2._UnderlyingPtr);
                }
            }

            /// This is used for optional parameters of class `Ostream` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Ostream`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Ostream`/`Const_Ostream` directly.
            public class _InOptMut_Ostream
            {
                public Ostream? Opt;

                public _InOptMut_Ostream() {}
                public _InOptMut_Ostream(Ostream value) {Opt = value;}
                public static implicit operator _InOptMut_Ostream(Ostream value) {return new(value);}
            }

            /// This is used for optional parameters of class `Ostream` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Ostream`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Ostream`/`Const_Ostream` to pass it to the function.
            public class _InOptConst_Ostream
            {
                public Const_Ostream? Opt;

                public _InOptConst_Ostream() {}
                public _InOptConst_Ostream(Const_Ostream value) {Opt = value;}
                public static implicit operator _InOptConst_Ostream(Const_Ostream value) {return new(value);}
            }

            /// This is the const half of the class.
            public class Const_Istream : MR.CS.Misc.Object
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_Istream(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}
            }

            /// This is the non-const half of the class.
            public class Istream : Const_Istream
            {
                internal unsafe Istream(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Generated from function `MR::IOStream::operator>>`.
                public unsafe void rshift(MR.CS.IOStream.A _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_input_MR_IOStream_A", ExactSpelling = true)]
                    extern static void __MR_C_input_MR_IOStream_A(_Underlying *_1, MR.CS.IOStream.A._Underlying *_2);
                    __MR_C_input_MR_IOStream_A(_UnderlyingPtr, _2._UnderlyingPtr);
                }
            }

            /// This is used for optional parameters of class `Istream` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_Istream`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Istream`/`Const_Istream` directly.
            public class _InOptMut_Istream
            {
                public Istream? Opt;

                public _InOptMut_Istream() {}
                public _InOptMut_Istream(Istream value) {Opt = value;}
                public static implicit operator _InOptMut_Istream(Istream value) {return new(value);}
            }

            /// This is used for optional parameters of class `Istream` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_Istream`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `Istream`/`Const_Istream` to pass it to the function.
            public class _InOptConst_Istream
            {
                public Const_Istream? Opt;

                public _InOptConst_Istream() {}
                public _InOptConst_Istream(Const_Istream value) {Opt = value;}
                public static implicit operator _InOptConst_Istream(Const_Istream value) {return new(value);}
            }
        }

        /// Returns the `stdout` stream.
        public static unsafe MR.CS.Std.Ostream getStdCout()
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_GetStdCout", ExactSpelling = true)]
            extern static MR.CS.Std.Ostream._Underlying *__MR_C_GetStdCout();
            return new(__MR_C_GetStdCout(), is_owning: false);
        }

        /// Returns the `stderr` stream, buffered.
        public static unsafe MR.CS.Std.Ostream getStdCerr()
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_GetStdCerr", ExactSpelling = true)]
            extern static MR.CS.Std.Ostream._Underlying *__MR_C_GetStdCerr();
            return new(__MR_C_GetStdCerr(), is_owning: false);
        }

        /// Returns the `stderr` stream, unbuffered.
        public static unsafe MR.CS.Std.Ostream getStdClog()
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_GetStdClog", ExactSpelling = true)]
            extern static MR.CS.Std.Ostream._Underlying *__MR_C_GetStdClog();
            return new(__MR_C_GetStdClog(), is_owning: false);
        }

        /// Returns the `stdin` stream.
        public static unsafe MR.CS.Std.Istream getStdCin()
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_GetStdCin", ExactSpelling = true)]
            extern static MR.CS.Std.Istream._Underlying *__MR_C_GetStdCin();
            return new(__MR_C_GetStdCin(), is_owning: false);
        }
    }
}
