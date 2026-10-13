package mrbind_test.ffi.MR;

/** The downcall handles of the C bindings file `MR/test_static_memberr`. */
public final class test_static_memberr
{
    private test_static_memberr() {}

    public static final class H0
    {
        private H0() {}

        public static final java.lang.invoke.MethodHandle MR_StaticFuncs_A_DefaultConstruct = mrbind_test.Ffi.downcall("", "MR_StaticFuncs_A_DefaultConstruct", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_StaticFuncs_A_ConstructFromAnother = mrbind_test.Ffi.downcall("", "MR_StaticFuncs_A_ConstructFromAnother", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_StaticFuncs_A_AssignFromAnother = mrbind_test.Ffi.downcall("", "MR_StaticFuncs_A_AssignFromAnother", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_StaticFuncs_A_blah = mrbind_test.Ffi.downcall("", "MR_StaticFuncs_A_blah", java.lang.foreign.FunctionDescriptor.ofVoid());
        public static final java.lang.invoke.MethodHandle MR_StaticFuncs_A_Get_x = mrbind_test.Ffi.downcall("", "MR_StaticFuncs_A_Get_x", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_StaticFuncs_A_GetMutable_x = mrbind_test.Ffi.downcall("", "MR_StaticFuncs_A_GetMutable_x", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_StaticFuncs_A_Set_x = mrbind_test.Ffi.downcall("", "MR_StaticFuncs_A_Set_x", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.JAVA_INT));
        public static final java.lang.invoke.MethodHandle MR_StaticFuncs_A_Destroy = mrbind_test.Ffi.downcall("", "MR_StaticFuncs_A_Destroy", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
    }
}
