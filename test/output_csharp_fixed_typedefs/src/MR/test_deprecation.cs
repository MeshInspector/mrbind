public static partial class MR
{
    public static partial class CS
    {
        public static partial class Deprecation
        {
            /// <summary>
            /// Generated from function `MR::Deprecation::foo`.
            /// </summary>
            [Obsolete]
            public static void foo()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Deprecation_foo", ExactSpelling = true)]
                extern static void __MR_Deprecation_foo();
                __MR_Deprecation_foo();
            }

            /// <summary>
            /// Generated from function `MR::Deprecation::bar`.
            /// </summary>
            [Obsolete("Some \\message\n")]
            public static void bar()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Deprecation_bar", ExactSpelling = true)]
                extern static void __MR_Deprecation_bar();
                __MR_Deprecation_bar();
            }
        }
    }
}
