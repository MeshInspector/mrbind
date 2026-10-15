package mrbind_test.ffi;

/** The downcall handles of the C bindings file `std_optional_int`. */
public final class std_optional_int
{
    private std_optional_int() {}

    public static final class H0
    {
        private H0() {}

        public static final java.lang.invoke.MethodHandle MR_C_std_optional_int_DefaultConstruct = mrbind_test.Ffi.downcall("", "MR_C_std_optional_int_DefaultConstruct", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_optional_int_ConstructFromAnother = mrbind_test.Ffi.downcall("", "MR_C_std_optional_int_ConstructFromAnother", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_optional_int_ConstructFrom = mrbind_test.Ffi.downcall("", "MR_C_std_optional_int_ConstructFrom", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_optional_int_AssignFromAnother = mrbind_test.Ffi.downcall("", "MR_C_std_optional_int_AssignFromAnother", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_optional_int_AssignFrom = mrbind_test.Ffi.downcall("", "MR_C_std_optional_int_AssignFrom", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_optional_int_has_value = mrbind_test.Ffi.downcall("", "MR_C_std_optional_int_has_value", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.JAVA_BOOLEAN, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_optional_int_value = mrbind_test.Ffi.downcall("", "MR_C_std_optional_int_value", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_optional_int_value_mut = mrbind_test.Ffi.downcall("", "MR_C_std_optional_int_value_mut", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_optional_int_Destroy = mrbind_test.Ffi.downcall("", "MR_C_std_optional_int_Destroy", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
    }
}
