package mrbind_test.ffi.MR;

/** The downcall handles of the C bindings file `MR/test_matching_layout`. */
public final class test_matching_layout
{
    private test_matching_layout() {}

    public static final class H0
    {
        private H0() {}

        public static final java.lang.invoke.MethodHandle MR_MatchingLayout_foo = mrbind_test.Ffi.downcall("", "MR_MatchingLayout_foo", java.lang.foreign.FunctionDescriptor.of(mrbind_test.mr.matchinglayout.B.LAYOUT));
        public static final java.lang.invoke.MethodHandle MR_MatchingLayout_bar = mrbind_test.Ffi.downcall("", "MR_MatchingLayout_bar", java.lang.foreign.FunctionDescriptor.ofVoid(mrbind_test.mr.matchinglayout.B.LAYOUT));
        public static final java.lang.invoke.MethodHandle MR_MatchingLayout_baz = mrbind_test.Ffi.downcall("", "MR_MatchingLayout_baz", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_MatchingLayout_bleh = mrbind_test.Ffi.downcall("", "MR_MatchingLayout_bleh", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_MatchingLayout_A_Get_x = mrbind_test.Ffi.downcall("", "MR_MatchingLayout_A_Get_x", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_MatchingLayout_A_GetMutable_x = mrbind_test.Ffi.downcall("", "MR_MatchingLayout_A_GetMutable_x", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_MatchingLayout_A_Set_x = mrbind_test.Ffi.downcall("", "MR_MatchingLayout_A_Set_x", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.JAVA_INT));
        public static final java.lang.invoke.MethodHandle MR_MatchingLayout_B_DefaultConstruct = mrbind_test.Ffi.downcall("", "MR_MatchingLayout_B_DefaultConstruct", java.lang.foreign.FunctionDescriptor.of(mrbind_test.mr.matchinglayout.B.LAYOUT));
    }
}
