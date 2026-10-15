package mrbind_test.ffi;

/** The downcall handles of the C bindings file `expected_int32_t_std_string`. */
public final class expected_int32_t_std_string
{
    private expected_int32_t_std_string() {}

    public static final class H0
    {
        private H0() {}

        public static final java.lang.invoke.MethodHandle MR_C_expected_int32_t_std_string_DefaultConstruct = mrbind_test.Ffi.downcall("", "MR_C_expected_int32_t_std_string_DefaultConstruct", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_expected_int32_t_std_string_ConstructFromAnother = mrbind_test.Ffi.downcall("", "MR_C_expected_int32_t_std_string_ConstructFromAnother", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_INT, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_expected_int32_t_std_string_AssignFromAnother = mrbind_test.Ffi.downcall("", "MR_C_expected_int32_t_std_string_AssignFromAnother", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_INT, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_expected_int32_t_std_string_success = mrbind_test.Ffi.downcall("", "MR_C_expected_int32_t_std_string_success", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.JAVA_BOOLEAN, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_expected_int32_t_std_string_value = mrbind_test.Ffi.downcall("", "MR_C_expected_int32_t_std_string_value", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_expected_int32_t_std_string_error = mrbind_test.Ffi.downcall("", "MR_C_expected_int32_t_std_string_error", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_expected_int32_t_std_string_value_mut = mrbind_test.Ffi.downcall("", "MR_C_expected_int32_t_std_string_value_mut", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_expected_int32_t_std_string_error_mut = mrbind_test.Ffi.downcall("", "MR_C_expected_int32_t_std_string_error_mut", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_expected_int32_t_std_string_Destroy = mrbind_test.Ffi.downcall("", "MR_C_expected_int32_t_std_string_Destroy", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
    }
}
