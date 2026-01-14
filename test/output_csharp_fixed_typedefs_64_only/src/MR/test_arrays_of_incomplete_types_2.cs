public static partial class MR
{
    public static partial class CS
    {
        public static partial class IncompleteArrayElemType
        {
            // Can't use an opaque struct as an array element, because, well, it's opaque. But a enum should work.
            public enum E : int
            {
            }

            /// Generated from function `MR::IncompleteArrayElemType::bar`.
            public static unsafe void bar(MR.CS.IncompleteArrayElemType.ArrayE4 *_1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_IncompleteArrayElemType_bar", ExactSpelling = true)]
                extern static void __MR_IncompleteArrayElemType_bar(MR.CS.IncompleteArrayElemType.ArrayE4 *_1);
                __MR_IncompleteArrayElemType_bar(_1);
            }
        }
    }
}
