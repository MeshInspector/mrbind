package mrbind_test.ffi.MR;

/** The downcall handles of the C bindings file `MR/test_std_expected`. */
public final class test_std_expected
{
    private test_std_expected() {}

    public static final class H0
    {
        private H0() {}

        public static final java.lang.invoke.MethodHandle MR_StdExpected_GetExp = mrbind_test.Ffi.downcall("", "MR_StdExpected_GetExp", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_StdExpected_SetExp = mrbind_test.Ffi.downcall("", "MR_StdExpected_SetExp", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.JAVA_INT, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_StdExpected_SetExpConstRef = mrbind_test.Ffi.downcall("", "MR_StdExpected_SetExpConstRef", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_StdExpected_SetExpDefTrivial = mrbind_test.Ffi.downcall("", "MR_StdExpected_SetExpDefTrivial", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.JAVA_INT, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_StdExpected_SetExpDef = mrbind_test.Ffi.downcall("", "MR_StdExpected_SetExpDef", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.JAVA_INT, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_StdExpected_GetExpVoid = mrbind_test.Ffi.downcall("", "MR_StdExpected_GetExpVoid", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_StdExpected_SetExpVoid = mrbind_test.Ffi.downcall("", "MR_StdExpected_SetExpVoid", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_StdExpected_SetExpVoidConstRef = mrbind_test.Ffi.downcall("", "MR_StdExpected_SetExpVoidConstRef", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_StdExpected_SetExpVoidDefTrivial = mrbind_test.Ffi.downcall("", "MR_StdExpected_SetExpVoidDefTrivial", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_StdExpected_SetExpVoidDef = mrbind_test.Ffi.downcall("", "MR_StdExpected_SetExpVoidDef", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_StdExpected_GetExpVec = mrbind_test.Ffi.downcall("", "MR_StdExpected_GetExpVec", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS));
    }
}
