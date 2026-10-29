package mrbind_test.ffi.AB.common;

/** The downcall handles of the C bindings file `AB/common/std_vector_MR_SeparateA`. */
public final class std_vector_MR_SeparateA
{
    private std_vector_MR_SeparateA() {}

    public static final class H0
    {
        private H0() {}

        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_SeparateA_DefaultConstruct = mrbind_test.Ffi.downcall("MR_AB_", "MR_C_std_vector_MR_SeparateA_DefaultConstruct", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_SeparateA_ConstructFromAnother = mrbind_test.Ffi.downcall("MR_AB_", "MR_C_std_vector_MR_SeparateA_ConstructFromAnother", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_INT, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_SeparateA_AssignFromAnother = mrbind_test.Ffi.downcall("MR_AB_", "MR_C_std_vector_MR_SeparateA_AssignFromAnother", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_INT, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_SeparateA_size = mrbind_test.Ffi.downcall("MR_AB_", "MR_C_std_vector_MR_SeparateA_size", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.JAVA_LONG, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_SeparateA_empty = mrbind_test.Ffi.downcall("MR_AB_", "MR_C_std_vector_MR_SeparateA_empty", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.JAVA_BOOLEAN, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_SeparateA_clear = mrbind_test.Ffi.downcall("MR_AB_", "MR_C_std_vector_MR_SeparateA_clear", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_SeparateA_reserve = mrbind_test.Ffi.downcall("MR_AB_", "MR_C_std_vector_MR_SeparateA_reserve", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_LONG));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_SeparateA_at = mrbind_test.Ffi.downcall("MR_AB_", "MR_C_std_vector_MR_SeparateA_at", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_LONG));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_SeparateA_at_mut = mrbind_test.Ffi.downcall("MR_AB_", "MR_C_std_vector_MR_SeparateA_at_mut", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_LONG));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_SeparateA_front = mrbind_test.Ffi.downcall("MR_AB_", "MR_C_std_vector_MR_SeparateA_front", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_SeparateA_front_mut = mrbind_test.Ffi.downcall("MR_AB_", "MR_C_std_vector_MR_SeparateA_front_mut", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_SeparateA_back = mrbind_test.Ffi.downcall("MR_AB_", "MR_C_std_vector_MR_SeparateA_back", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_SeparateA_back_mut = mrbind_test.Ffi.downcall("MR_AB_", "MR_C_std_vector_MR_SeparateA_back_mut", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_SeparateA_push_back = mrbind_test.Ffi.downcall("MR_AB_", "MR_C_std_vector_MR_SeparateA_push_back", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_INT, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_SeparateA_pop_back = mrbind_test.Ffi.downcall("MR_AB_", "MR_C_std_vector_MR_SeparateA_pop_back", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_SeparateA_insert = mrbind_test.Ffi.downcall("MR_AB_", "MR_C_std_vector_MR_SeparateA_insert", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_LONG, java.lang.foreign.ValueLayout.JAVA_INT, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_SeparateA_erase = mrbind_test.Ffi.downcall("MR_AB_", "MR_C_std_vector_MR_SeparateA_erase", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_LONG));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_SeparateA_Destroy = mrbind_test.Ffi.downcall("MR_AB_", "MR_C_std_vector_MR_SeparateA_Destroy", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
    }
}
