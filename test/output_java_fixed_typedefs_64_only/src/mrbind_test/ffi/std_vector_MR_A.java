package mrbind_test.ffi;

/** The downcall handles of the C bindings file `std_vector_MR_A`. */
public final class std_vector_MR_A
{
    private std_vector_MR_A() {}

    public static final class H0
    {
        private H0() {}

        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_A_DefaultConstruct = mrbind_test.Ffi.downcall("", "MR_C_std_vector_MR_A_DefaultConstruct", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_A_ConstructFromAnother = mrbind_test.Ffi.downcall("", "MR_C_std_vector_MR_A_ConstructFromAnother", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_INT, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_A_AssignFromAnother = mrbind_test.Ffi.downcall("", "MR_C_std_vector_MR_A_AssignFromAnother", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_INT, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_A_size = mrbind_test.Ffi.downcall("", "MR_C_std_vector_MR_A_size", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.JAVA_LONG, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_A_empty = mrbind_test.Ffi.downcall("", "MR_C_std_vector_MR_A_empty", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.JAVA_BOOLEAN, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_A_resize = mrbind_test.Ffi.downcall("", "MR_C_std_vector_MR_A_resize", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_LONG));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_A_clear = mrbind_test.Ffi.downcall("", "MR_C_std_vector_MR_A_clear", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_A_reserve = mrbind_test.Ffi.downcall("", "MR_C_std_vector_MR_A_reserve", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_LONG));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_A_at = mrbind_test.Ffi.downcall("", "MR_C_std_vector_MR_A_at", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_LONG));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_A_at_mut = mrbind_test.Ffi.downcall("", "MR_C_std_vector_MR_A_at_mut", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_LONG));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_A_front = mrbind_test.Ffi.downcall("", "MR_C_std_vector_MR_A_front", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_A_front_mut = mrbind_test.Ffi.downcall("", "MR_C_std_vector_MR_A_front_mut", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_A_back = mrbind_test.Ffi.downcall("", "MR_C_std_vector_MR_A_back", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_A_back_mut = mrbind_test.Ffi.downcall("", "MR_C_std_vector_MR_A_back_mut", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_A_push_back = mrbind_test.Ffi.downcall("", "MR_C_std_vector_MR_A_push_back", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_INT, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_A_pop_back = mrbind_test.Ffi.downcall("", "MR_C_std_vector_MR_A_pop_back", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_A_insert = mrbind_test.Ffi.downcall("", "MR_C_std_vector_MR_A_insert", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_LONG, java.lang.foreign.ValueLayout.JAVA_INT, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_A_erase = mrbind_test.Ffi.downcall("", "MR_C_std_vector_MR_A_erase", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_LONG));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_A_Destroy = mrbind_test.Ffi.downcall("", "MR_C_std_vector_MR_A_Destroy", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
    }
}
