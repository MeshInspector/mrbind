package mrbind_test.ffi;

/** The downcall handles of the C bindings file `std_variant_int_float`. */
public final class std_variant_int_float
{
    private std_variant_int_float() {}

    public static final class H0
    {
        private H0() {}

        public static final java.lang.invoke.MethodHandle MR_C_std_variant_int_float_DefaultConstruct = mrbind_test.Ffi.downcall("", "MR_C_std_variant_int_float_DefaultConstruct", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_variant_int_float_ConstructFromAnother = mrbind_test.Ffi.downcall("", "MR_C_std_variant_int_float_ConstructFromAnother", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_variant_int_float_AssignFromAnother = mrbind_test.Ffi.downcall("", "MR_C_std_variant_int_float_AssignFromAnother", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_variant_int_float_index = mrbind_test.Ffi.downcall("", "MR_C_std_variant_int_float_index", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.JAVA_LONG, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_variant_int_float_ConstructAs_int = mrbind_test.Ffi.downcall("", "MR_C_std_variant_int_float_ConstructAs_int", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_INT));
        public static final java.lang.invoke.MethodHandle MR_C_std_variant_int_float_ConstructAs_float = mrbind_test.Ffi.downcall("", "MR_C_std_variant_int_float_ConstructAs_float", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_FLOAT));
        public static final java.lang.invoke.MethodHandle MR_C_std_variant_int_float_AssignAs_int = mrbind_test.Ffi.downcall("", "MR_C_std_variant_int_float_AssignAs_int", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_INT));
        public static final java.lang.invoke.MethodHandle MR_C_std_variant_int_float_AssignAs_float = mrbind_test.Ffi.downcall("", "MR_C_std_variant_int_float_AssignAs_float", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_FLOAT));
        public static final java.lang.invoke.MethodHandle MR_C_std_variant_int_float_get_int = mrbind_test.Ffi.downcall("", "MR_C_std_variant_int_float_get_int", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_variant_int_float_get_int_mut = mrbind_test.Ffi.downcall("", "MR_C_std_variant_int_float_get_int_mut", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_variant_int_float_get_float = mrbind_test.Ffi.downcall("", "MR_C_std_variant_int_float_get_float", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_variant_int_float_get_float_mut = mrbind_test.Ffi.downcall("", "MR_C_std_variant_int_float_get_float_mut", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_variant_int_float_Destroy = mrbind_test.Ffi.downcall("", "MR_C_std_variant_int_float_Destroy", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
    }
}
