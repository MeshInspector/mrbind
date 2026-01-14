public static partial class MR
{
    public static partial class CS
    {
        public static partial class StdExpected
        {
            /// Generated from function `MR::StdExpected::GetExp`.
            public static unsafe MR.CS.Misc._Moved<MR.CS.Std.Expected_Int_StdString> getExp()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdExpected_GetExp", ExactSpelling = true)]
                extern static MR.CS.Std.Expected_Int_StdString._Underlying *__MR_StdExpected_GetExp();
                return MR.CS.Misc.Move(new MR.CS.Std.Expected_Int_StdString(__MR_StdExpected_GetExp(), is_owning: true));
            }

            /// Generated from function `MR::StdExpected::SetExp`.
            public static unsafe void setExp(MR.CS.Std._ByValue_Expected_Int_StdString _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdExpected_SetExp", ExactSpelling = true)]
                extern static void __MR_StdExpected_SetExp(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.Expected_Int_StdString._Underlying *_1);
                __MR_StdExpected_SetExp(_1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// Generated from function `MR::StdExpected::SetExpConstRef`.
            public static unsafe void setExpConstRef(MR.CS.Std.Const_Expected_Int_StdString _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdExpected_SetExpConstRef", ExactSpelling = true)]
                extern static void __MR_StdExpected_SetExpConstRef(MR.CS.Std.Const_Expected_Int_StdString._Underlying *_1);
                __MR_StdExpected_SetExpConstRef(_1._UnderlyingPtr);
            }

            /// Generated from function `MR::StdExpected::SetExpDefTrivial`.
            /// Parameter `_1` defaults to `{}`.
            public static unsafe void setExpDefTrivial(MR.CS.Std._ByValue_Expected_Int_StdString? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdExpected_SetExpDefTrivial", ExactSpelling = true)]
                extern static void __MR_StdExpected_SetExpDefTrivial(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.Expected_Int_StdString._Underlying *_1);
                __MR_StdExpected_SetExpDefTrivial(_1 is not null ? _1.PassByMode : MR.CS.Misc._PassBy.default_arg, _1 is not null && _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// Generated from function `MR::StdExpected::SetExpDef`.
            /// Parameter `_1` defaults to `42`.
            public static unsafe void setExpDef(MR.CS.Std._ByValue_Expected_Int_StdString? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdExpected_SetExpDef", ExactSpelling = true)]
                extern static void __MR_StdExpected_SetExpDef(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.Expected_Int_StdString._Underlying *_1);
                __MR_StdExpected_SetExpDef(_1 is not null ? _1.PassByMode : MR.CS.Misc._PassBy.default_arg, _1 is not null && _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// Generated from function `MR::StdExpected::GetExpVoid`.
            public static unsafe MR.CS.Std.Expected_Void_Float getExpVoid()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdExpected_GetExpVoid", ExactSpelling = true)]
                extern static MR.CS.Std.Expected_Void_Float._Underlying *__MR_StdExpected_GetExpVoid();
                return new(__MR_StdExpected_GetExpVoid(), is_owning: true);
            }

            /// Generated from function `MR::StdExpected::SetExpVoid`.
            public static unsafe void setExpVoid(MR.CS.Std.Const_Expected_Void_Float _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdExpected_SetExpVoid", ExactSpelling = true)]
                extern static void __MR_StdExpected_SetExpVoid(MR.CS.Std.Expected_Void_Float._Underlying *_1);
                __MR_StdExpected_SetExpVoid(_1._UnderlyingPtr);
            }

            /// Generated from function `MR::StdExpected::SetExpVoidConstRef`.
            public static unsafe void setExpVoidConstRef(MR.CS.Std.Const_Expected_Void_Float _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdExpected_SetExpVoidConstRef", ExactSpelling = true)]
                extern static void __MR_StdExpected_SetExpVoidConstRef(MR.CS.Std.Const_Expected_Void_Float._Underlying *_1);
                __MR_StdExpected_SetExpVoidConstRef(_1._UnderlyingPtr);
            }

            /// Generated from function `MR::StdExpected::SetExpVoidDefTrivial`.
            /// Parameter `_1` defaults to `{}`.
            public static unsafe void setExpVoidDefTrivial(MR.CS.Std.Const_Expected_Void_Float? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdExpected_SetExpVoidDefTrivial", ExactSpelling = true)]
                extern static void __MR_StdExpected_SetExpVoidDefTrivial(MR.CS.Std.Expected_Void_Float._Underlying *_1);
                __MR_StdExpected_SetExpVoidDefTrivial(_1 is not null ? _1._UnderlyingPtr : null);
            }

            /// Generated from function `MR::StdExpected::SetExpVoidDef`.
            /// Parameter `_1` defaults to `std::expected<void, float>{}`.
            public static unsafe void setExpVoidDef(MR.CS.Std.Const_Expected_Void_Float? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdExpected_SetExpVoidDef", ExactSpelling = true)]
                extern static void __MR_StdExpected_SetExpVoidDef(MR.CS.Std.Expected_Void_Float._Underlying *_1);
                __MR_StdExpected_SetExpVoidDef(_1 is not null ? _1._UnderlyingPtr : null);
            }

            /// Generated from function `MR::StdExpected::GetExpVec`.
            public static unsafe MR.CS.Misc._Moved<MR.CS.Std.Vector_StdExpectedIntStdString> getExpVec()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdExpected_GetExpVec", ExactSpelling = true)]
                extern static MR.CS.Std.Vector_StdExpectedIntStdString._Underlying *__MR_StdExpected_GetExpVec();
                return MR.CS.Misc.Move(new MR.CS.Std.Vector_StdExpectedIntStdString(__MR_StdExpected_GetExpVec(), is_owning: true));
            }
        }
    }
}
