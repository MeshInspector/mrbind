package mrbind_test.ffi.MR;

/** The downcall handles of the C bindings file `MR/test_abstract_classes`. */
public final class test_abstract_classes
{
    private test_abstract_classes() {}

    public static final class H0
    {
        private H0() {}

        public static final java.lang.invoke.MethodHandle MR_AbstractClasses_A_foo = mrbind_test.Ffi.downcall("", "MR_AbstractClasses_A_foo", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_AbstractClasses_B_foo = mrbind_test.Ffi.downcall("", "MR_AbstractClasses_B_foo", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_AbstractClasses_B_Destroy = mrbind_test.Ffi.downcall("", "MR_AbstractClasses_B_Destroy", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_AbstractClasses_C_foo = mrbind_test.Ffi.downcall("", "MR_AbstractClasses_C_foo", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_AbstractClasses_C_Destroy = mrbind_test.Ffi.downcall("", "MR_AbstractClasses_C_Destroy", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_AbstractClasses_C_MutableUpcastTo_MR_AbstractClasses_B = mrbind_test.Ffi.downcall("", "MR_AbstractClasses_C_MutableUpcastTo_MR_AbstractClasses_B", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_AbstractClasses_C_MutableStaticDowncastFrom_MR_AbstractClasses_B = mrbind_test.Ffi.downcall("", "MR_AbstractClasses_C_MutableStaticDowncastFrom_MR_AbstractClasses_B", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_AbstractClasses_C_MutableDynamicDowncastFrom_MR_AbstractClasses_B = mrbind_test.Ffi.downcall("", "MR_AbstractClasses_C_MutableDynamicDowncastFrom_MR_AbstractClasses_B", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
    }
}
