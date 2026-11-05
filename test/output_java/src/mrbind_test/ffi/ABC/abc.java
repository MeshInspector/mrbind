package mrbind_test.ffi.ABC;

/** The downcall handles of the C bindings file `ABC/abc`. */
public final class abc
{
    private abc() {}

    public static final class H0
    {
        private H0() {}

        public static final java.lang.invoke.MethodHandle MR_GetSeparateVecABC = mrbind_test.Ffi.downcall("", "MR_GetSeparateVecABC", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_SeparateABC_DefaultConstruct = mrbind_test.Ffi.downcall("", "MR_SeparateABC_DefaultConstruct", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_SeparateABC_ConstructFromAnother = mrbind_test.Ffi.downcall("", "MR_SeparateABC_ConstructFromAnother", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_SeparateABC_AssignFromAnother = mrbind_test.Ffi.downcall("", "MR_SeparateABC_AssignFromAnother", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_SeparateABC_Destroy = mrbind_test.Ffi.downcall("", "MR_SeparateABC_Destroy", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
    }
}
