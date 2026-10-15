package mrbind_test.ffi.MR;

/** The downcall handles of the C bindings file `MR/test_custom_preferred_names`. */
public final class test_custom_preferred_names
{
    private test_custom_preferred_names() {}

    public static final class H0
    {
        private H0() {}

        public static final java.lang.invoke.MethodHandle MR_CustomPrefNames_blah = mrbind_test.Ffi.downcall("", "MR_CustomPrefNames_blah", java.lang.foreign.FunctionDescriptor.ofVoid());
        public static final java.lang.invoke.MethodHandle MR_CustomPrefNames_Af_DefaultConstruct = mrbind_test.Ffi.downcall("", "MR_CustomPrefNames_Af_DefaultConstruct", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_CustomPrefNames_Af_ConstructFromAnother = mrbind_test.Ffi.downcall("", "MR_CustomPrefNames_Af_ConstructFromAnother", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_CustomPrefNames_Af_AssignFromAnother = mrbind_test.Ffi.downcall("", "MR_CustomPrefNames_Af_AssignFromAnother", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_CustomPrefNames_Af_Destroy = mrbind_test.Ffi.downcall("", "MR_CustomPrefNames_Af_Destroy", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_CustomPrefNames_Ai_DefaultConstruct = mrbind_test.Ffi.downcall("", "MR_CustomPrefNames_Ai_DefaultConstruct", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_CustomPrefNames_Ai_ConstructFromAnother = mrbind_test.Ffi.downcall("", "MR_CustomPrefNames_Ai_ConstructFromAnother", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_CustomPrefNames_Ai_AssignFromAnother = mrbind_test.Ffi.downcall("", "MR_CustomPrefNames_Ai_AssignFromAnother", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_CustomPrefNames_Ai_Destroy = mrbind_test.Ffi.downcall("", "MR_CustomPrefNames_Ai_Destroy", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
    }
}
