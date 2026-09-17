public static partial class MR
{
    public static partial class CS
    {
        public static partial class Tags
        {
            /// Generated from function `MR::Tags::foo`.
            public static void Foo(MR.CS.Std.Less_Int _1)
            {
                MR.CS.Misc._Exceptions.Prepare();
                MR.CS.Misc._Exceptions.ThrowIfNeeded();
                __MR_Tags_foo_1_std_less_int();
            }

            /// Generated from function `MR::Tags::foo`.
            public static void Foo(MR.CS.Std.Less_Void _1)
            {
                MR.CS.Misc._Exceptions.Prepare();
                MR.CS.Misc._Exceptions.ThrowIfNeeded();
                __MR_Tags_foo_1_std_less_void();
            }

            /// Generated from function `MR::Tags::foo`.
            public static void Foo(MR.CS.Std.Greater_Int _1)
            {
                MR.CS.Misc._Exceptions.Prepare();
                MR.CS.Misc._Exceptions.ThrowIfNeeded();
                __MR_Tags_foo_1_std_greater_int();
            }

            /// Generated from function `MR::Tags::foo`.
            public static void Foo(MR.CS.Std.Greater_Void _1)
            {
                MR.CS.Misc._Exceptions.Prepare();
                MR.CS.Misc._Exceptions.ThrowIfNeeded();
                __MR_Tags_foo_1_std_greater_void();
            }

            /// Generated from function `MR::Tags::foo`.
            public static MR.CS.Std.Less_Int Foo()
            {
                MR.CS.Misc._Exceptions.Prepare();
                MR.CS.Misc._Exceptions.ThrowIfNeeded();
                __MR_Tags_foo_0();
                return new();
            }

            // DllImport:

            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Tags_foo_0", ExactSpelling = true)]
            extern static void __MR_Tags_foo_0();

            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Tags_foo_1_std_greater_int", ExactSpelling = true)]
            extern static void __MR_Tags_foo_1_std_greater_int();

            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Tags_foo_1_std_greater_void", ExactSpelling = true)]
            extern static void __MR_Tags_foo_1_std_greater_void();

            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Tags_foo_1_std_less_int", ExactSpelling = true)]
            extern static void __MR_Tags_foo_1_std_less_int();

            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Tags_foo_1_std_less_void", ExactSpelling = true)]
            extern static void __MR_Tags_foo_1_std_less_void();
        }
    }
}
