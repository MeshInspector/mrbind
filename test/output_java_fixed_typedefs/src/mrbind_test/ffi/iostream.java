package mrbind_test.ffi;

/** The downcall handles of the C bindings file `iostream`. */
public final class iostream
{
    private iostream() {}

    public static final class H0
    {
        private H0() {}

        public static final java.lang.invoke.MethodHandle MR_C_GetStdCout = mrbind_test.Ffi.downcall("", "MR_C_GetStdCout", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_GetStdCerr = mrbind_test.Ffi.downcall("", "MR_C_GetStdCerr", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_GetStdClog = mrbind_test.Ffi.downcall("", "MR_C_GetStdClog", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_GetStdCin = mrbind_test.Ffi.downcall("", "MR_C_GetStdCin", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS));
    }
}
