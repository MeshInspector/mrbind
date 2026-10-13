package mrbind_test.ffi.MR;

/** The downcall handles of the C bindings file `MR/test_deprecation`. */
public final class test_deprecation
{
    private test_deprecation() {}

    public static final class H0
    {
        private H0() {}

        public static final java.lang.invoke.MethodHandle MR_Deprecation_foo = mrbind_test.Ffi.downcall("", "MR_Deprecation_foo", java.lang.foreign.FunctionDescriptor.ofVoid());
        public static final java.lang.invoke.MethodHandle MR_Deprecation_bar = mrbind_test.Ffi.downcall("", "MR_Deprecation_bar", java.lang.foreign.FunctionDescriptor.ofVoid());
    }
}
