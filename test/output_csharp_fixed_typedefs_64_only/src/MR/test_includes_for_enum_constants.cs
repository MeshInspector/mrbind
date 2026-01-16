public static partial class MR
{
    public static partial class CS
    {
        public static partial class IncludesForEnumConstants
        {
            // Make sure that the `.cpp` implementation file includes the header for `E` correctly.
            /// <summary>
            /// Generated from function `MR::IncludesForEnumConstants::foo`.
            /// </summary>
            public static unsafe MR.CS.IncludesForEnumConstants.A_MRIncludesForEnumConstantsEE1 foo()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_IncludesForEnumConstants_foo", ExactSpelling = true)]
                extern static MR.CS.IncludesForEnumConstants.A_MRIncludesForEnumConstantsEE1._Underlying *__MR_IncludesForEnumConstants_foo();
                return new(__MR_IncludesForEnumConstants_foo(), is_owning: true);
            }
        }
    }
}
