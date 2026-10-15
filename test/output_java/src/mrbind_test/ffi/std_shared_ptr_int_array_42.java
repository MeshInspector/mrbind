package mrbind_test.ffi;

/** The downcall handles of the C bindings file `std_shared_ptr_int_array_42`. */
public final class std_shared_ptr_int_array_42
{
    private std_shared_ptr_int_array_42() {}

    public static final class H0
    {
        private H0() {}

        public static final java.lang.invoke.MethodHandle MR_C_std_shared_ptr_int_array_42_DefaultConstruct = mrbind_test.Ffi.downcall("", "MR_C_std_shared_ptr_int_array_42_DefaultConstruct", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_shared_ptr_int_array_42_ConstructFromAnother = mrbind_test.Ffi.downcall("", "MR_C_std_shared_ptr_int_array_42_ConstructFromAnother", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_INT, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_shared_ptr_int_array_42_AssignFromAnother = mrbind_test.Ffi.downcall("", "MR_C_std_shared_ptr_int_array_42_AssignFromAnother", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_INT, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_shared_ptr_int_array_42_get = mrbind_test.Ffi.downcall("", "MR_C_std_shared_ptr_int_array_42_get", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_shared_ptr_int_array_42_has_value = mrbind_test.Ffi.downcall("", "MR_C_std_shared_ptr_int_array_42_has_value", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.JAVA_BOOLEAN, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_shared_ptr_int_array_42_use_count = mrbind_test.Ffi.downcall("", "MR_C_std_shared_ptr_int_array_42_use_count", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.JAVA_INT, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_shared_ptr_int_array_42_reset = mrbind_test.Ffi.downcall("", "MR_C_std_shared_ptr_int_array_42_reset", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_shared_ptr_int_array_42_Construct = mrbind_test.Ffi.downcall("", "MR_C_std_shared_ptr_int_array_42_Construct", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_shared_ptr_int_array_42_Assign = mrbind_test.Ffi.downcall("", "MR_C_std_shared_ptr_int_array_42_Assign", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_shared_ptr_int_array_42_ConstructNonOwning = mrbind_test.Ffi.downcall("", "MR_C_std_shared_ptr_int_array_42_ConstructNonOwning", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_shared_ptr_int_array_42_AssignNonOwning = mrbind_test.Ffi.downcall("", "MR_C_std_shared_ptr_int_array_42_AssignNonOwning", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_shared_ptr_int_array_42_ConstructAliasing = mrbind_test.Ffi.downcall("", "MR_C_std_shared_ptr_int_array_42_ConstructAliasing", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_INT, java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_shared_ptr_int_array_42_AssignAliasing = mrbind_test.Ffi.downcall("", "MR_C_std_shared_ptr_int_array_42_AssignAliasing", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_INT, java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_shared_ptr_int_array_42_ConvertTo_MR_C_std_shared_ptr_void = mrbind_test.Ffi.downcall("", "MR_C_std_shared_ptr_int_array_42_ConvertTo_MR_C_std_shared_ptr_void", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_shared_ptr_int_array_42_AssignTo_MR_C_std_shared_ptr_void = mrbind_test.Ffi.downcall("", "MR_C_std_shared_ptr_int_array_42_AssignTo_MR_C_std_shared_ptr_void", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_shared_ptr_int_array_42_Destroy = mrbind_test.Ffi.downcall("", "MR_C_std_shared_ptr_int_array_42_Destroy", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
    }
}
