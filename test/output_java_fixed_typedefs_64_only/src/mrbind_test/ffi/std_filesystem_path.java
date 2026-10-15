package mrbind_test.ffi;

/** The downcall handles of the C bindings file `std_filesystem_path`. */
public final class std_filesystem_path
{
    private std_filesystem_path() {}

    public static final class H0
    {
        private H0() {}

        public static final java.lang.invoke.MethodHandle MR_C_std_filesystem_path_DefaultConstruct = mrbind_test.Ffi.downcall("", "MR_C_std_filesystem_path_DefaultConstruct", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_filesystem_path_ConstructFromAnother = mrbind_test.Ffi.downcall("", "MR_C_std_filesystem_path_ConstructFromAnother", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_INT, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_filesystem_path_ConstructFrom = mrbind_test.Ffi.downcall("", "MR_C_std_filesystem_path_ConstructFrom", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_filesystem_path_AssignFromAnother = mrbind_test.Ffi.downcall("", "MR_C_std_filesystem_path_AssignFromAnother", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_INT, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_filesystem_path_AssignFrom = mrbind_test.Ffi.downcall("", "MR_C_std_filesystem_path_AssignFrom", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_filesystem_path_string = mrbind_test.Ffi.downcall("", "MR_C_std_filesystem_path_string", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_filesystem_path_Destroy = mrbind_test.Ffi.downcall("", "MR_C_std_filesystem_path_Destroy", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
    }
}
