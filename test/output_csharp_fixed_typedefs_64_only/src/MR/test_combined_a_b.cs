public static partial class MR
{
    public static partial class CS
    {
        /// <summary>
        /// Generated from function `MR::GetCombinedVecAB`.
        /// </summary>
        public static unsafe MR.CS.Misc._Moved<MR.CS.Std.Vector_StdPairMRSeparateAMRSeparateB> getCombinedVecAB()
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_GetCombinedVecAB", ExactSpelling = true)]
            extern static MR.CS.Std.Vector_StdPairMRSeparateAMRSeparateB._Underlying *__MR_GetCombinedVecAB();
            return MR.CS.Misc.Move(new MR.CS.Std.Vector_StdPairMRSeparateAMRSeparateB(__MR_GetCombinedVecAB(), is_owning: true));
        }
    }
}
