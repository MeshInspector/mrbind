public static partial class MR
{
    public static partial class CS
    {
        /// Generated from function `MR::GetCombinedVecAB`.
        public static unsafe MR.CS.Std.Vector_StdPairMRSeparateAMRSeparateB GetCombinedVecAB()
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_GetCombinedVecAB", ExactSpelling = true)]
            extern static MR.CS.Std.Vector_StdPairMRSeparateAMRSeparateB._Underlying *__MR_GetCombinedVecAB();
            return new(__MR_GetCombinedVecAB(), is_owning: true);
        }
    }
}
