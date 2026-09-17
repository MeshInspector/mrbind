public static partial class MR
{
    public static partial class CS
    {
        public static partial class IncludesForEnumConstants
        {
            // Make sure that the `.cpp` implementation file includes the header for `E` correctly.
            /// Generated from function `MR::IncludesForEnumConstants::foo`.
            public static unsafe MR.CS.IncludesForEnumConstants.A_MRIncludesForEnumConstantsEE1 Foo()
            {
                MR.CS.Misc._Exceptions.Prepare();
                var __c_ret = __MR_IncludesForEnumConstants_foo();
                MR.CS.Misc._Exceptions.ThrowIfNeeded();
                return new(__c_ret, is_owning: true);
            }

            // DllImport:

            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_IncludesForEnumConstants_foo", ExactSpelling = true)]
            extern static unsafe MR.CS.IncludesForEnumConstants.A_MRIncludesForEnumConstantsEE1._Underlying *__MR_IncludesForEnumConstants_foo();
        }
    }
}
