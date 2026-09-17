public static partial class MR
{
    public static partial class CS
    {
        public static partial class StdTupleLike
        {
            /// <summary>
            /// Generated from function `MR::StdTupleLike::SetPair`.
            /// </summary>
            public static unsafe void setPair(MR.CS.Std.Const_Pair_Int32T_Float _1)
            {
                __MR_StdTupleLike_SetPair(_1._UnderlyingPtr);
            }

            /// <summary>
            /// Generated from function `MR::StdTupleLike::GetPair`.
            /// </summary>
            public static unsafe MR.CS.Std.Pair_Int32T_Float getPair()
            {
                return new(__MR_StdTupleLike_GetPair(), is_owning: true);
            }

            /// <summary>
            /// Generated from function `MR::StdTupleLike::GetPair2`.
            /// </summary>
            public static unsafe MR.CS.Std.Pair_ConstInt32T_Float getPair2()
            {
                return new(__MR_StdTupleLike_GetPair2(), is_owning: true);
            }

            /// <summary>
            /// Generated from function `MR::StdTupleLike::GetPair3`.
            /// </summary>
            public static unsafe MR.CS.Std.Pair_Int32TRef_FloatRef getPair3()
            {
                return new(__MR_StdTupleLike_GetPair3(), is_owning: true);
            }

            /// <summary>
            /// Generated from function `MR::StdTupleLike::GetPair4`.
            /// </summary>
            public static unsafe MR.CS.Std.Pair_ConstInt32TRef_ConstFloatRef getPair4()
            {
                return new(__MR_StdTupleLike_GetPair4(), is_owning: true);
            }

            /// <summary>
            /// Generated from function `MR::StdTupleLike::GetPair5`.
            /// </summary>
            public static unsafe MR.CS.Std.Pair_Int32TRvalueRef_FloatRvalueRef getPair5()
            {
                return new(__MR_StdTupleLike_GetPair5(), is_owning: true);
            }

            /// <summary>
            /// Generated from function `MR::StdTupleLike::GetPair6`.
            /// </summary>
            public static unsafe MR.CS.Std.Pair_ConstInt32TRvalueRef_ConstFloatRvalueRef getPair6()
            {
                return new(__MR_StdTupleLike_GetPair6(), is_owning: true);
            }

            /// <summary>
            /// Generated from function `MR::StdTupleLike::SetTuple`.
            /// </summary>
            public static unsafe void setTuple(MR.CS.Std.Const_Tuple_Int32T_Float _1)
            {
                __MR_StdTupleLike_SetTuple(_1._UnderlyingPtr);
            }

            /// <summary>
            /// Generated from function `MR::StdTupleLike::GetTuple`.
            /// </summary>
            public static unsafe MR.CS.Std.Tuple_Int32T_Float getTuple()
            {
                return new(__MR_StdTupleLike_GetTuple(), is_owning: true);
            }

            // Three separate tuples to avoid generating file paths that are too long, as those cause issues on some filesystems apparently.
            /// <summary>
            /// Generated from function `MR::StdTupleLike::GetTuple2`.
            /// </summary>
            public static unsafe MR.CS.Std.Tuple_ConstInt32T_ConstFloat_Int32TRef_FloatRef_ConstInt32TRef_ConstFloatRef_Int32TRvalueRef_FloatRvalueRef_ConstInt32TRvalueRef_ConstFloatRvalueRef getTuple2()
            {
                return new(__MR_StdTupleLike_GetTuple2(), is_owning: true);
            }

            /// <summary>
            /// Generated from function `MR::StdTupleLike::GetTuple7`.
            /// </summary>
            public static unsafe MR.CS.Std.Tuple getTuple7()
            {
                return new(__MR_StdTupleLike_GetTuple7(), is_owning: true);
            }

            /// <summary>
            /// Generated from function `MR::StdTupleLike::GetTuple8`.
            /// </summary>
            public static unsafe MR.CS.Std.Tuple_Float_Double_Int32T_Int32T getTuple8()
            {
                return new(__MR_StdTupleLike_GetTuple8(), is_owning: true);
            }

            // DllImport:

            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdTupleLike_GetPair", ExactSpelling = true)]
            extern static unsafe MR.CS.Std.Pair_Int32T_Float._Underlying *__MR_StdTupleLike_GetPair();

            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdTupleLike_GetPair2", ExactSpelling = true)]
            extern static unsafe MR.CS.Std.Pair_ConstInt32T_Float._Underlying *__MR_StdTupleLike_GetPair2();

            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdTupleLike_GetPair3", ExactSpelling = true)]
            extern static unsafe MR.CS.Std.Pair_Int32TRef_FloatRef._Underlying *__MR_StdTupleLike_GetPair3();

            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdTupleLike_GetPair4", ExactSpelling = true)]
            extern static unsafe MR.CS.Std.Pair_ConstInt32TRef_ConstFloatRef._Underlying *__MR_StdTupleLike_GetPair4();

            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdTupleLike_GetPair5", ExactSpelling = true)]
            extern static unsafe MR.CS.Std.Pair_Int32TRvalueRef_FloatRvalueRef._Underlying *__MR_StdTupleLike_GetPair5();

            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdTupleLike_GetPair6", ExactSpelling = true)]
            extern static unsafe MR.CS.Std.Pair_ConstInt32TRvalueRef_ConstFloatRvalueRef._Underlying *__MR_StdTupleLike_GetPair6();

            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdTupleLike_GetTuple", ExactSpelling = true)]
            extern static unsafe MR.CS.Std.Tuple_Int32T_Float._Underlying *__MR_StdTupleLike_GetTuple();

            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdTupleLike_GetTuple2", ExactSpelling = true)]
            extern static unsafe MR.CS.Std.Tuple_ConstInt32T_ConstFloat_Int32TRef_FloatRef_ConstInt32TRef_ConstFloatRef_Int32TRvalueRef_FloatRvalueRef_ConstInt32TRvalueRef_ConstFloatRvalueRef._Underlying *__MR_StdTupleLike_GetTuple2();

            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdTupleLike_GetTuple7", ExactSpelling = true)]
            extern static unsafe MR.CS.Std.Tuple._Underlying *__MR_StdTupleLike_GetTuple7();

            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdTupleLike_GetTuple8", ExactSpelling = true)]
            extern static unsafe MR.CS.Std.Tuple_Float_Double_Int32T_Int32T._Underlying *__MR_StdTupleLike_GetTuple8();

            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdTupleLike_SetPair", ExactSpelling = true)]
            extern static unsafe void __MR_StdTupleLike_SetPair(MR.CS.Std.Pair_Int32T_Float._Underlying *_1);

            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdTupleLike_SetTuple", ExactSpelling = true)]
            extern static unsafe void __MR_StdTupleLike_SetTuple(MR.CS.Std.Tuple_Int32T_Float._Underlying *_1);
        }
    }
}
