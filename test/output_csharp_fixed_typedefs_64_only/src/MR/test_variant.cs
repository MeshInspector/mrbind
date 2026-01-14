public static partial class MR
{
    public static partial class CS
    {
        public static partial class StdVariant
        {
            /// Generated from function `MR::StdVariant::foo`.
            public static unsafe MR.CS.Std.Variant_Int_Float foo()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdVariant_foo", ExactSpelling = true)]
                extern static MR.CS.Std.Variant_Int_Float._Underlying *__MR_StdVariant_foo();
                return new(__MR_StdVariant_foo(), is_owning: true);
            }

            /// Generated from function `MR::StdVariant::bar`.
            public static unsafe void bar(MR.CS.Std.Const_Variant_Int_Float_Float _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdVariant_bar", ExactSpelling = true)]
                extern static void __MR_StdVariant_bar(MR.CS.Std.Variant_Int_Float_Float._Underlying *_1);
                __MR_StdVariant_bar(_1._UnderlyingPtr);
            }

            /// Generated from function `MR::StdVariant::baz`.
            public static unsafe void baz(MR.CS.Std._ByValue_Variant_Int_Float_StdString _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdVariant_baz", ExactSpelling = true)]
                extern static void __MR_StdVariant_baz(MR.CS.Misc._PassBy _1_pass_by, MR.CS.Std.Variant_Int_Float_StdString._Underlying *_1);
                __MR_StdVariant_baz(_1.PassByMode, _1.Value is not null ? _1.Value._UnderlyingPtr : null);
            }

            /// Generated from function `MR::StdVariant::blah`.
            public static unsafe MR.CS.Std.Variant_StdMonostate_Int_Float blah()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_StdVariant_blah", ExactSpelling = true)]
                extern static MR.CS.Std.Variant_StdMonostate_Int_Float._Underlying *__MR_StdVariant_blah();
                return new(__MR_StdVariant_blah(), is_owning: true);
            }
        }
    }
}
