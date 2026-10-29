package mrbind_test.ffi.AB.common;

/** The downcall handles of the C bindings file `AB/common/std_vector_MR_SeparateB`. */
public final class std_vector_MR_SeparateB
{
    private std_vector_MR_SeparateB() {}

    public static final class H0
    {
        private H0() {}

        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_SeparateB_DefaultConstruct = mrbind_test.Ffi.downcall("MR_AB_", "MR_C_std_vector_MR_SeparateB_DefaultConstruct", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_SeparateB_ConstructFromAnother = mrbind_test.Ffi.downcall("MR_AB_", "MR_C_std_vector_MR_SeparateB_ConstructFromAnother", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_INT, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_SeparateB_AssignFromAnother = mrbind_test.Ffi.downcall("MR_AB_", "MR_C_std_vector_MR_SeparateB_AssignFromAnother", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_INT, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_SeparateB_size = mrbind_test.Ffi.downcall("MR_AB_", "MR_C_std_vector_MR_SeparateB_size", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.JAVA_LONG, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_SeparateB_empty = mrbind_test.Ffi.downcall("MR_AB_", "MR_C_std_vector_MR_SeparateB_empty", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.JAVA_BOOLEAN, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_SeparateB_clear = mrbind_test.Ffi.downcall("MR_AB_", "MR_C_std_vector_MR_SeparateB_clear", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_SeparateB_reserve = mrbind_test.Ffi.downcall("MR_AB_", "MR_C_std_vector_MR_SeparateB_reserve", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_LONG));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_SeparateB_at = mrbind_test.Ffi.downcall("MR_AB_", "MR_C_std_vector_MR_SeparateB_at", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_LONG));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_SeparateB_at_mut = mrbind_test.Ffi.downcall("MR_AB_", "MR_C_std_vector_MR_SeparateB_at_mut", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_LONG));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_SeparateB_front = mrbind_test.Ffi.downcall("MR_AB_", "MR_C_std_vector_MR_SeparateB_front", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_SeparateB_front_mut = mrbind_test.Ffi.downcall("MR_AB_", "MR_C_std_vector_MR_SeparateB_front_mut", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_SeparateB_back = mrbind_test.Ffi.downcall("MR_AB_", "MR_C_std_vector_MR_SeparateB_back", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_SeparateB_back_mut = mrbind_test.Ffi.downcall("MR_AB_", "MR_C_std_vector_MR_SeparateB_back_mut", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_SeparateB_push_back = mrbind_test.Ffi.downcall("MR_AB_", "MR_C_std_vector_MR_SeparateB_push_back", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_INT, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_SeparateB_pop_back = mrbind_test.Ffi.downcall("MR_AB_", "MR_C_std_vector_MR_SeparateB_pop_back", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_SeparateB_insert = mrbind_test.Ffi.downcall("MR_AB_", "MR_C_std_vector_MR_SeparateB_insert", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_LONG, java.lang.foreign.ValueLayout.JAVA_INT, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_SeparateB_erase = mrbind_test.Ffi.downcall("MR_AB_", "MR_C_std_vector_MR_SeparateB_erase", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_LONG));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_SeparateB_Destroy = mrbind_test.Ffi.downcall("MR_AB_", "MR_C_std_vector_MR_SeparateB_Destroy", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
    }
}
