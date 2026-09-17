public static partial class MR
{
    public static partial class CS
    {
        public static partial class Deprecation
        {
            /// Generated from function `MR::Deprecation::foo`.
            [Obsolete]
            public static void Foo()
            {
                MR.CS.Misc._Exceptions.Prepare();
                MR.CS.Misc._Exceptions.ThrowIfNeeded();
                __MR_Deprecation_foo();
            }

            /// Generated from function `MR::Deprecation::bar`.
            [Obsolete("Some \\message\n")]
            public static void Bar()
            {
                MR.CS.Misc._Exceptions.Prepare();
                MR.CS.Misc._Exceptions.ThrowIfNeeded();
                __MR_Deprecation_bar();
            }

            // DllImport:

            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Deprecation_bar", ExactSpelling = true)]
            extern static void __MR_Deprecation_bar();

            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Deprecation_foo", ExactSpelling = true)]
            extern static void __MR_Deprecation_foo();
        }
    }
}
