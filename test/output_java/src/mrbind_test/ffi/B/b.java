package mrbind_test.ffi.B;

/** The downcall handles of the C bindings file `B/b`. */
public final class b
{
    private b() {}

    public static final class H0
    {
        private H0() {}

        public static final java.lang.invoke.MethodHandle MR_GetSeparateVecB = mrbind_test.Ffi.downcall("", "MR_GetSeparateVecB", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_SeparateB_ConstructFromAnother = mrbind_test.Ffi.downcall("", "MR_SeparateB_ConstructFromAnother", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_INT, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_SeparateB_AssignFromAnother = mrbind_test.Ffi.downcall("", "MR_SeparateB_AssignFromAnother", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_INT, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_SeparateB_Destroy = mrbind_test.Ffi.downcall("", "MR_SeparateB_Destroy", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_SeparateB_MutableUpcastTo_MR_CommonBaseAB = mrbind_test.Ffi.downcall("", "MR_SeparateB_MutableUpcastTo_MR_CommonBaseAB", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_SeparateB_MutableStaticDowncastFrom_MR_CommonBaseAB = mrbind_test.Ffi.downcall("", "MR_SeparateB_MutableStaticDowncastFrom_MR_CommonBaseAB", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_SeparateB_MutableDynamicDowncastFrom_MR_CommonBaseAB = mrbind_test.Ffi.downcall("", "MR_SeparateB_MutableDynamicDowncastFrom_MR_CommonBaseAB", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
    }
}
