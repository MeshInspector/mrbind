package mrbind_test.ffi.AB_base;

/** The downcall handles of the C bindings file `AB_base/ab_base`. */
public final class ab_base
{
    private ab_base() {}

    public static final class H0
    {
        private H0() {}

        public static final java.lang.invoke.MethodHandle MR_mark_shared_common_base_ab = mrbind_test.Ffi.downcall("", "MR_mark_shared_common_base_ab", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_CommonBaseAB_ConstructFromAnother = mrbind_test.Ffi.downcall("", "MR_CommonBaseAB_ConstructFromAnother", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_INT, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_CommonBaseAB_AssignFromAnother = mrbind_test.Ffi.downcall("", "MR_CommonBaseAB_AssignFromAnother", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_INT, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_CommonBaseAB_Destroy = mrbind_test.Ffi.downcall("", "MR_CommonBaseAB_Destroy", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
    }
}
