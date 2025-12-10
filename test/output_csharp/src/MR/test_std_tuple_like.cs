public static partial class MR
{
    public static partial class CS
    {
        public static partial class StdTupleLike
        {
            /// Generated from function `MR::StdTupleLike::SetPair`.
            public static unsafe void SetPair(MR.CS.Std.Const_Pair_Int_Float _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdTupleLike_SetPair", ExactSpelling = true)]
                extern static void __MR_StdTupleLike_SetPair(MR.CS.Std.Pair_Int_Float._Underlying *_1);
                __MR_StdTupleLike_SetPair(_1._UnderlyingPtr);
            }

            /// Generated from function `MR::StdTupleLike::GetPair`.
            public static unsafe MR.CS.Std.Pair_Int_Float GetPair()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdTupleLike_GetPair", ExactSpelling = true)]
                extern static MR.CS.Std.Pair_Int_Float._Underlying *__MR_StdTupleLike_GetPair();
                return new(__MR_StdTupleLike_GetPair(), is_owning: true);
            }

            /// Generated from function `MR::StdTupleLike::GetPair2`.
            public static unsafe MR.CS.Std.Pair_ConstInt_Float GetPair2()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdTupleLike_GetPair2", ExactSpelling = true)]
                extern static MR.CS.Std.Pair_ConstInt_Float._Underlying *__MR_StdTupleLike_GetPair2();
                return new(__MR_StdTupleLike_GetPair2(), is_owning: true);
            }

            /// Generated from function `MR::StdTupleLike::GetPair3`.
            public static unsafe MR.CS.Std.Pair_IntRef_FloatRef GetPair3()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdTupleLike_GetPair3", ExactSpelling = true)]
                extern static MR.CS.Std.Pair_IntRef_FloatRef._Underlying *__MR_StdTupleLike_GetPair3();
                return new(__MR_StdTupleLike_GetPair3(), is_owning: true);
            }

            /// Generated from function `MR::StdTupleLike::GetPair4`.
            public static unsafe MR.CS.Std.Pair_ConstIntRef_ConstFloatRef GetPair4()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdTupleLike_GetPair4", ExactSpelling = true)]
                extern static MR.CS.Std.Pair_ConstIntRef_ConstFloatRef._Underlying *__MR_StdTupleLike_GetPair4();
                return new(__MR_StdTupleLike_GetPair4(), is_owning: true);
            }

            /// Generated from function `MR::StdTupleLike::GetPair5`.
            public static unsafe MR.CS.Std.Pair_IntRvalueRef_FloatRvalueRef GetPair5()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdTupleLike_GetPair5", ExactSpelling = true)]
                extern static MR.CS.Std.Pair_IntRvalueRef_FloatRvalueRef._Underlying *__MR_StdTupleLike_GetPair5();
                return new(__MR_StdTupleLike_GetPair5(), is_owning: true);
            }

            /// Generated from function `MR::StdTupleLike::GetPair6`.
            public static unsafe MR.CS.Std.Pair_ConstIntRvalueRef_ConstFloatRvalueRef GetPair6()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdTupleLike_GetPair6", ExactSpelling = true)]
                extern static MR.CS.Std.Pair_ConstIntRvalueRef_ConstFloatRvalueRef._Underlying *__MR_StdTupleLike_GetPair6();
                return new(__MR_StdTupleLike_GetPair6(), is_owning: true);
            }

            /// Generated from function `MR::StdTupleLike::SetTuple`.
            public static unsafe void SetTuple(MR.CS.Std.Const_Tuple_Int_Float _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdTupleLike_SetTuple", ExactSpelling = true)]
                extern static void __MR_StdTupleLike_SetTuple(MR.CS.Std.Tuple_Int_Float._Underlying *_1);
                __MR_StdTupleLike_SetTuple(_1._UnderlyingPtr);
            }

            /// Generated from function `MR::StdTupleLike::GetTuple`.
            public static unsafe MR.CS.Std.Tuple_Int_Float GetTuple()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdTupleLike_GetTuple", ExactSpelling = true)]
                extern static MR.CS.Std.Tuple_Int_Float._Underlying *__MR_StdTupleLike_GetTuple();
                return new(__MR_StdTupleLike_GetTuple(), is_owning: true);
            }

            // Three separate tuples to avoid generating file paths that are too long, as those cause issues on some filesystems apparently.
            /// Generated from function `MR::StdTupleLike::GetTuple2`.
            public static unsafe MR.CS.Std.Tuple_ConstInt_ConstFloat_IntRef_FloatRef_ConstIntRef_ConstFloatRef_IntRvalueRef_FloatRvalueRef_ConstIntRvalueRef_ConstFloatRvalueRef GetTuple2()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdTupleLike_GetTuple2", ExactSpelling = true)]
                extern static MR.CS.Std.Tuple_ConstInt_ConstFloat_IntRef_FloatRef_ConstIntRef_ConstFloatRef_IntRvalueRef_FloatRvalueRef_ConstIntRvalueRef_ConstFloatRvalueRef._Underlying *__MR_StdTupleLike_GetTuple2();
                return new(__MR_StdTupleLike_GetTuple2(), is_owning: true);
            }

            /// Generated from function `MR::StdTupleLike::GetTuple7`.
            public static unsafe MR.CS.Std.Tuple GetTuple7()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdTupleLike_GetTuple7", ExactSpelling = true)]
                extern static MR.CS.Std.Tuple._Underlying *__MR_StdTupleLike_GetTuple7();
                return new(__MR_StdTupleLike_GetTuple7(), is_owning: true);
            }

            /// Generated from function `MR::StdTupleLike::GetTuple8`.
            public static unsafe MR.CS.Std.Tuple_Float_Double_Int_Int GetTuple8()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdTupleLike_GetTuple8", ExactSpelling = true)]
                extern static MR.CS.Std.Tuple_Float_Double_Int_Int._Underlying *__MR_StdTupleLike_GetTuple8();
                return new(__MR_StdTupleLike_GetTuple8(), is_owning: true);
            }
        }
    }
}
