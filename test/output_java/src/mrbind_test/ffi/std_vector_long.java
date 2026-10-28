package mrbind_test.ffi;

/** The downcall handles of the C bindings file `std_vector_long`. */
public final class std_vector_long
{
    private std_vector_long() {}

    public static final class H0
    {
        private H0() {}

        public static final java.lang.invoke.MethodHandle MR_C_std_vector_long_DefaultConstruct = mrbind_test.Ffi.downcall("", "MR_C_std_vector_long_DefaultConstruct", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_long_ConstructFromAnother = mrbind_test.Ffi.downcall("", "MR_C_std_vector_long_ConstructFromAnother", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_INT, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_long_AssignFromAnother = mrbind_test.Ffi.downcall("", "MR_C_std_vector_long_AssignFromAnother", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_INT, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_long_ConstructFromRange = mrbind_test.Ffi.downcall("", "MR_C_std_vector_long_ConstructFromRange", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_LONG));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_long_AssignFromRange = mrbind_test.Ffi.downcall("", "MR_C_std_vector_long_AssignFromRange", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_LONG));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_long_size = mrbind_test.Ffi.downcall("", "MR_C_std_vector_long_size", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.JAVA_LONG, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_long_empty = mrbind_test.Ffi.downcall("", "MR_C_std_vector_long_empty", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.JAVA_BOOLEAN, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_long_resize = mrbind_test.Ffi.downcall("", "MR_C_std_vector_long_resize", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_LONG));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_long_resize_with_default_value = mrbind_test.Ffi.downcall("", "MR_C_std_vector_long_resize_with_default_value", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_LONG, mrbind_test.Ffi.C_LONG));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_long_clear = mrbind_test.Ffi.downcall("", "MR_C_std_vector_long_clear", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_long_capacity = mrbind_test.Ffi.downcall("", "MR_C_std_vector_long_capacity", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.JAVA_LONG, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_long_reserve = mrbind_test.Ffi.downcall("", "MR_C_std_vector_long_reserve", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_LONG));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_long_shrink_to_fit = mrbind_test.Ffi.downcall("", "MR_C_std_vector_long_shrink_to_fit", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_long_at = mrbind_test.Ffi.downcall("", "MR_C_std_vector_long_at", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_LONG));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_long_at_mut = mrbind_test.Ffi.downcall("", "MR_C_std_vector_long_at_mut", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_LONG));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_long_front = mrbind_test.Ffi.downcall("", "MR_C_std_vector_long_front", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_long_front_mut = mrbind_test.Ffi.downcall("", "MR_C_std_vector_long_front_mut", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_long_back = mrbind_test.Ffi.downcall("", "MR_C_std_vector_long_back", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_long_back_mut = mrbind_test.Ffi.downcall("", "MR_C_std_vector_long_back_mut", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_long_data = mrbind_test.Ffi.downcall("", "MR_C_std_vector_long_data", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_long_data_mut = mrbind_test.Ffi.downcall("", "MR_C_std_vector_long_data_mut", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_long_push_back = mrbind_test.Ffi.downcall("", "MR_C_std_vector_long_push_back", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, mrbind_test.Ffi.C_LONG));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_long_pop_back = mrbind_test.Ffi.downcall("", "MR_C_std_vector_long_pop_back", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_long_insert = mrbind_test.Ffi.downcall("", "MR_C_std_vector_long_insert", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_LONG, mrbind_test.Ffi.C_LONG));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_long_erase = mrbind_test.Ffi.downcall("", "MR_C_std_vector_long_erase", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_LONG));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_long_begin = mrbind_test.Ffi.downcall("", "MR_C_std_vector_long_begin", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_long_begin_mut = mrbind_test.Ffi.downcall("", "MR_C_std_vector_long_begin_mut", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_long_end = mrbind_test.Ffi.downcall("", "MR_C_std_vector_long_end", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_long_end_mut = mrbind_test.Ffi.downcall("", "MR_C_std_vector_long_end_mut", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_long_Destroy = mrbind_test.Ffi.downcall("", "MR_C_std_vector_long_Destroy", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
    }
}
