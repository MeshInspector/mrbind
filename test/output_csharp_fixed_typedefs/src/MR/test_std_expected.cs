public static partial class MR
{
    public static partial class CS
    {
        public static partial class StdExpected
        {
            /// <summary>
            /// Generated from function `MR::StdExpected::GetExp`.
            /// </summary>
            public static unsafe MR.CS.Misc._Moved<MR.CS.Expected_Int32T_StdString> getExp()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdExpected_GetExp", ExactSpelling = true)]
                extern static MR.CS.Expected_Int32T_StdString._Underlying *__MR_StdExpected_GetExp();
                return MR.CS.Misc.Move(new MR.CS.Expected_Int32T_StdString(__MR_StdExpected_GetExp(), is_owning: true));
            }

            /// <summary>
            /// Generated from function `MR::StdExpected::SetExp`.
            /// </summary>
            public static unsafe void setExp(MR.CS._ByValue_Expected_Int32T_StdString _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdExpected_SetExp", ExactSpelling = true)]
                extern static void __MR_StdExpected_SetExp(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Expected_Int32T_StdString._Underlying *_1);
                __MR_StdExpected_SetExp(_1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// <summary>
            /// Generated from function `MR::StdExpected::SetExpConstRef`.
            /// </summary>
            public static unsafe void setExpConstRef(MR.CS.Const_Expected_Int32T_StdString _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdExpected_SetExpConstRef", ExactSpelling = true)]
                extern static void __MR_StdExpected_SetExpConstRef(MR.CS.Const_Expected_Int32T_StdString._Underlying *_1);
                __MR_StdExpected_SetExpConstRef(_1._UnderlyingPtr);
            }

            /// <summary>
            /// Generated from function `MR::StdExpected::SetExpDefTrivial`.
            /// Parameter `_1` defaults to `{}`.
            /// </summary>
            public static unsafe void setExpDefTrivial(MR.CS._ByValue_Expected_Int32T_StdString? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdExpected_SetExpDefTrivial", ExactSpelling = true)]
                extern static void __MR_StdExpected_SetExpDefTrivial(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Expected_Int32T_StdString._Underlying *_1);
                __MR_StdExpected_SetExpDefTrivial(_1 is not null ? _1.PassByMode : MR.CS.Misc._PassBy.default_arg, _1 is not null && _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// <summary>
            /// Generated from function `MR::StdExpected::SetExpDef`.
            /// Parameter `_1` defaults to `42`.
            /// </summary>
            public static unsafe void setExpDef(MR.CS._ByValue_Expected_Int32T_StdString? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdExpected_SetExpDef", ExactSpelling = true)]
                extern static void __MR_StdExpected_SetExpDef(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Expected_Int32T_StdString._Underlying *_1);
                __MR_StdExpected_SetExpDef(_1 is not null ? _1.PassByMode : MR.CS.Misc._PassBy.default_arg, _1 is not null && _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// <summary>
            /// Generated from function `MR::StdExpected::GetExpVoid`.
            /// </summary>
            public static unsafe MR.CS.Expected_Void_Float getExpVoid()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdExpected_GetExpVoid", ExactSpelling = true)]
                extern static MR.CS.Expected_Void_Float._Underlying *__MR_StdExpected_GetExpVoid();
                return new(__MR_StdExpected_GetExpVoid(), is_owning: true);
            }

            /// <summary>
            /// Generated from function `MR::StdExpected::SetExpVoid`.
            /// </summary>
            public static unsafe void setExpVoid(MR.CS.Const_Expected_Void_Float _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdExpected_SetExpVoid", ExactSpelling = true)]
                extern static void __MR_StdExpected_SetExpVoid(MR.CS.Expected_Void_Float._Underlying *_1);
                __MR_StdExpected_SetExpVoid(_1._UnderlyingPtr);
            }

            /// <summary>
            /// Generated from function `MR::StdExpected::SetExpVoidConstRef`.
            /// </summary>
            public static unsafe void setExpVoidConstRef(MR.CS.Const_Expected_Void_Float _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdExpected_SetExpVoidConstRef", ExactSpelling = true)]
                extern static void __MR_StdExpected_SetExpVoidConstRef(MR.CS.Const_Expected_Void_Float._Underlying *_1);
                __MR_StdExpected_SetExpVoidConstRef(_1._UnderlyingPtr);
            }

            /// <summary>
            /// Generated from function `MR::StdExpected::SetExpVoidDefTrivial`.
            /// Parameter `_1` defaults to `{}`.
            /// </summary>
            public static unsafe void setExpVoidDefTrivial(MR.CS.Const_Expected_Void_Float? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdExpected_SetExpVoidDefTrivial", ExactSpelling = true)]
                extern static void __MR_StdExpected_SetExpVoidDefTrivial(MR.CS.Expected_Void_Float._Underlying *_1);
                __MR_StdExpected_SetExpVoidDefTrivial(_1 is not null ? _1._UnderlyingPtr : null);
            }

            /// <summary>
            /// Generated from function `MR::StdExpected::SetExpVoidDef`.
            /// Parameter `_1` defaults to `expected<void, float>{}`.
            /// </summary>
            public static unsafe void setExpVoidDef(MR.CS.Const_Expected_Void_Float? _1 = null)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdExpected_SetExpVoidDef", ExactSpelling = true)]
                extern static void __MR_StdExpected_SetExpVoidDef(MR.CS.Expected_Void_Float._Underlying *_1);
                __MR_StdExpected_SetExpVoidDef(_1 is not null ? _1._UnderlyingPtr : null);
            }

            /// <summary>
            /// Generated from function `MR::StdExpected::GetExpVec`.
            /// </summary>
            public static unsafe MR.CS.Misc._Moved<MR.CS.Std.Vector_ExpectedInt32TStdString> getExpVec()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdExpected_GetExpVec", ExactSpelling = true)]
                extern static MR.CS.Std.Vector_ExpectedInt32TStdString._Underlying *__MR_StdExpected_GetExpVec();
                return MR.CS.Misc.Move(new MR.CS.Std.Vector_ExpectedInt32TStdString(__MR_StdExpected_GetExpVec(), is_owning: true));
            }
        }
    }
}
