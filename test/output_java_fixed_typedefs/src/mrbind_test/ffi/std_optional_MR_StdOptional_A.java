package mrbind_test.ffi;

/** The downcall handles of the C bindings file `std_optional_MR_StdOptional_A`. */
public final class std_optional_MR_StdOptional_A
{
    private std_optional_MR_StdOptional_A() {}

    public static final class H0
    {
        private H0() {}

        public static final java.lang.invoke.MethodHandle MR_C_std_optional_MR_StdOptional_A_DefaultConstruct = mrbind_test.Ffi.downcall("", "MR_C_std_optional_MR_StdOptional_A_DefaultConstruct", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_optional_MR_StdOptional_A_ConstructFromAnother = mrbind_test.Ffi.downcall("", "MR_C_std_optional_MR_StdOptional_A_ConstructFromAnother", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_optional_MR_StdOptional_A_ConstructFrom = mrbind_test.Ffi.downcall("", "MR_C_std_optional_MR_StdOptional_A_ConstructFrom", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_optional_MR_StdOptional_A_AssignFromAnother = mrbind_test.Ffi.downcall("", "MR_C_std_optional_MR_StdOptional_A_AssignFromAnother", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_optional_MR_StdOptional_A_AssignFrom = mrbind_test.Ffi.downcall("", "MR_C_std_optional_MR_StdOptional_A_AssignFrom", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_optional_MR_StdOptional_A_has_value = mrbind_test.Ffi.downcall("", "MR_C_std_optional_MR_StdOptional_A_has_value", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.JAVA_BOOLEAN, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_optional_MR_StdOptional_A_value = mrbind_test.Ffi.downcall("", "MR_C_std_optional_MR_StdOptional_A_value", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_optional_MR_StdOptional_A_value_mut = mrbind_test.Ffi.downcall("", "MR_C_std_optional_MR_StdOptional_A_value_mut", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_optional_MR_StdOptional_A_Destroy = mrbind_test.Ffi.downcall("", "MR_C_std_optional_MR_StdOptional_A_Destroy", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
    }
}
