public static partial class MR
{
    public static partial class CS
    {
        public static partial class StdExpected
        {
            /// Generated from function `MR::StdExpected::GetExp`.
            public static unsafe int GetExp()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdExpected_GetExp", ExactSpelling = true)]
                extern static MR.CS.Std.Expected_Int_StdString._Underlying *__MR_StdExpected_GetExp();
                MR.CS.Std.Expected_Int_StdString __expected_ret;
                __expected_ret = new(__MR_StdExpected_GetExp(), is_owning: true);
                if (__expected_ret.Error() is var __expected_error and not null) throw new MR.CS.Misc.UnexpectedResultException($"{__expected_error}");
                return __expected_ret.Value()!;
            }

            /// Generated from function `MR::StdExpected::SetExp`.
            public static unsafe void SetExp(MR.CS.Std._ByValue_Expected_Int_StdString _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdExpected_SetExp", ExactSpelling = true)]
                extern static void __MR_StdExpected_SetExp(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.Expected_Int_StdString._Underlying *_1);
                __MR_StdExpected_SetExp(_1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// Generated from function `MR::StdExpected::SetExpConstRef`.
            public static unsafe void SetExpConstRef(MR.CS.Std.Const_Expected_Int_StdString _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdExpected_SetExpConstRef", ExactSpelling = true)]
                extern static void __MR_StdExpected_SetExpConstRef(MR.CS.Std.Const_Expected_Int_StdString._Underlying *_1);
                __MR_StdExpected_SetExpConstRef(_1._UnderlyingPtr);
            }

            /// Generated from function `MR::StdExpected::SetExpDefTrivial`.
            /// Parameter `_1` defaults to `{}`.
            public static unsafe void SetExpDefTrivial(MR.CS.Std._ByValue_Expected_Int_StdString? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdExpected_SetExpDefTrivial", ExactSpelling = true)]
                extern static void __MR_StdExpected_SetExpDefTrivial(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.Expected_Int_StdString._Underlying *_1);
                __MR_StdExpected_SetExpDefTrivial(_1 is not null ? _1.PassByMode : MR.CS.Misc._PassBy.default_arg, _1 is not null && _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// Generated from function `MR::StdExpected::SetExpDef`.
            /// Parameter `_1` defaults to `42`.
            public static unsafe void SetExpDef(MR.CS.Std._ByValue_Expected_Int_StdString? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdExpected_SetExpDef", ExactSpelling = true)]
                extern static void __MR_StdExpected_SetExpDef(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.Expected_Int_StdString._Underlying *_1);
                __MR_StdExpected_SetExpDef(_1 is not null ? _1.PassByMode : MR.CS.Misc._PassBy.default_arg, _1 is not null && _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// Generated from function `MR::StdExpected::GetExpVoid`.
            public static unsafe void GetExpVoid()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdExpected_GetExpVoid", ExactSpelling = true)]
                extern static MR.CS.Std.Expected_Void_Float._Underlying *__MR_StdExpected_GetExpVoid();
                MR.CS.Std.Expected_Void_Float __expected_ret;
                __expected_ret = new(__MR_StdExpected_GetExpVoid(), is_owning: true);
                if (__expected_ret.Error() is var __expected_error and not null) throw new MR.CS.Misc.UnexpectedResultException($"{__expected_error}");
            }

            /// Generated from function `MR::StdExpected::SetExpVoid`.
            public static unsafe void SetExpVoid(MR.CS.Std.Const_Expected_Void_Float _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdExpected_SetExpVoid", ExactSpelling = true)]
                extern static void __MR_StdExpected_SetExpVoid(MR.CS.Std.Expected_Void_Float._Underlying *_1);
                __MR_StdExpected_SetExpVoid(_1._UnderlyingPtr);
            }

            /// Generated from function `MR::StdExpected::SetExpVoidConstRef`.
            public static unsafe void SetExpVoidConstRef(MR.CS.Std.Const_Expected_Void_Float _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdExpected_SetExpVoidConstRef", ExactSpelling = true)]
                extern static void __MR_StdExpected_SetExpVoidConstRef(MR.CS.Std.Const_Expected_Void_Float._Underlying *_1);
                __MR_StdExpected_SetExpVoidConstRef(_1._UnderlyingPtr);
            }

            /// Generated from function `MR::StdExpected::SetExpVoidDefTrivial`.
            /// Parameter `_1` defaults to `{}`.
            public static unsafe void SetExpVoidDefTrivial(MR.CS.Std.Const_Expected_Void_Float? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdExpected_SetExpVoidDefTrivial", ExactSpelling = true)]
                extern static void __MR_StdExpected_SetExpVoidDefTrivial(MR.CS.Std.Expected_Void_Float._Underlying *_1);
                __MR_StdExpected_SetExpVoidDefTrivial(_1 is not null ? _1._UnderlyingPtr : null);
            }

            /// Generated from function `MR::StdExpected::SetExpVoidDef`.
            /// Parameter `_1` defaults to `std::expected<void, float>{}`.
            public static unsafe void SetExpVoidDef(MR.CS.Std.Const_Expected_Void_Float? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdExpected_SetExpVoidDef", ExactSpelling = true)]
                extern static void __MR_StdExpected_SetExpVoidDef(MR.CS.Std.Expected_Void_Float._Underlying *_1);
                __MR_StdExpected_SetExpVoidDef(_1 is not null ? _1._UnderlyingPtr : null);
            }

            /// Generated from function `MR::StdExpected::GetExpVec`.
            public static unsafe MR.CS.Std.Vector_StdExpectedIntStdString GetExpVec()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdExpected_GetExpVec", ExactSpelling = true)]
                extern static MR.CS.Std.Vector_StdExpectedIntStdString._Underlying *__MR_StdExpected_GetExpVec();
                return new(__MR_StdExpected_GetExpVec(), is_owning: true);
            }
        }
    }
}
