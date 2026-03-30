public static partial class MR
{
    public static partial class CS
    {
        /// Generated from function `MR::GetCombinedVecAB`.
        public static unsafe MR.CS.Std.Vector_StdPairMRSeparateAMRSeparateB GetCombinedVecAB()
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_GetCombinedVecAB", ExactSpelling = true)]
            extern static MR.CS.Std.Vector_StdPairMRSeparateAMRSeparateB._Underlying *__MR_GetCombinedVecAB();
            MR.CS.Misc._Exceptions.Prepare();
            var __c_ret = __MR_GetCombinedVecAB();
            MR.CS.Misc._Exceptions.ThrowIfNeeded();
            return new(__c_ret, is_owning: true);
        }
    }
}
