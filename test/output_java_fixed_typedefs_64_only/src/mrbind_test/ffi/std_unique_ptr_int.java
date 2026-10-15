package mrbind_test.ffi;

/** The downcall handles of the C bindings file `std_unique_ptr_int`. */
public final class std_unique_ptr_int
{
    private std_unique_ptr_int() {}

    public static final class H0
    {
        private H0() {}

        public static final java.lang.invoke.MethodHandle MR_C_std_unique_ptr_int_DefaultConstruct = mrbind_test.Ffi.downcall("", "MR_C_std_unique_ptr_int_DefaultConstruct", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_unique_ptr_int_ConstructFromAnother = mrbind_test.Ffi.downcall("", "MR_C_std_unique_ptr_int_ConstructFromAnother", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_unique_ptr_int_ConstructFrom = mrbind_test.Ffi.downcall("", "MR_C_std_unique_ptr_int_ConstructFrom", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_unique_ptr_int_AssignFromAnother = mrbind_test.Ffi.downcall("", "MR_C_std_unique_ptr_int_AssignFromAnother", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_unique_ptr_int_AssignFrom = mrbind_test.Ffi.downcall("", "MR_C_std_unique_ptr_int_AssignFrom", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_unique_ptr_int_get = mrbind_test.Ffi.downcall("", "MR_C_std_unique_ptr_int_get", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_unique_ptr_int_release = mrbind_test.Ffi.downcall("", "MR_C_std_unique_ptr_int_release", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_unique_ptr_int_Destroy = mrbind_test.Ffi.downcall("", "MR_C_std_unique_ptr_int_Destroy", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
    }
}
