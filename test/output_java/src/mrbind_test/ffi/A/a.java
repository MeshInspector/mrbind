package mrbind_test.ffi.A;

/** The downcall handles of the C bindings file `A/a`. */
public final class a
{
    private a() {}

    public static final class H0
    {
        private H0() {}

        public static final java.lang.invoke.MethodHandle MR_GetSeparateVecA = mrbind_test.Ffi.downcall("", "MR_GetSeparateVecA", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_SeparateA_ConstructFromAnother = mrbind_test.Ffi.downcall("", "MR_SeparateA_ConstructFromAnother", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_INT, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_SeparateA_AssignFromAnother = mrbind_test.Ffi.downcall("", "MR_SeparateA_AssignFromAnother", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_INT, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_SeparateA_Destroy = mrbind_test.Ffi.downcall("", "MR_SeparateA_Destroy", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_SeparateA_MutableUpcastTo_MR_CommonBaseAB = mrbind_test.Ffi.downcall("", "MR_SeparateA_MutableUpcastTo_MR_CommonBaseAB", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_SeparateA_MutableStaticDowncastFrom_MR_CommonBaseAB = mrbind_test.Ffi.downcall("", "MR_SeparateA_MutableStaticDowncastFrom_MR_CommonBaseAB", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_SeparateA_MutableDynamicDowncastFrom_MR_CommonBaseAB = mrbind_test.Ffi.downcall("", "MR_SeparateA_MutableDynamicDowncastFrom_MR_CommonBaseAB", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
    }
}
