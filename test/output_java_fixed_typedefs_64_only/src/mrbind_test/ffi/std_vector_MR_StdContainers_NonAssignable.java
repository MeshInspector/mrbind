package mrbind_test.ffi;

/** The downcall handles of the C bindings file `std_vector_MR_StdContainers_NonAssignable`. */
public final class std_vector_MR_StdContainers_NonAssignable
{
    private std_vector_MR_StdContainers_NonAssignable() {}

    public static final class H0
    {
        private H0() {}

        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_StdContainers_NonAssignable_DefaultConstruct = mrbind_test.Ffi.downcall("", "MR_C_std_vector_MR_StdContainers_NonAssignable_DefaultConstruct", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_StdContainers_NonAssignable_ConstructFromAnother = mrbind_test.Ffi.downcall("", "MR_C_std_vector_MR_StdContainers_NonAssignable_ConstructFromAnother", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_INT, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_StdContainers_NonAssignable_AssignFromAnother = mrbind_test.Ffi.downcall("", "MR_C_std_vector_MR_StdContainers_NonAssignable_AssignFromAnother", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_INT, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_StdContainers_NonAssignable_size = mrbind_test.Ffi.downcall("", "MR_C_std_vector_MR_StdContainers_NonAssignable_size", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.JAVA_LONG, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_StdContainers_NonAssignable_empty = mrbind_test.Ffi.downcall("", "MR_C_std_vector_MR_StdContainers_NonAssignable_empty", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.JAVA_BOOLEAN, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_StdContainers_NonAssignable_resize = mrbind_test.Ffi.downcall("", "MR_C_std_vector_MR_StdContainers_NonAssignable_resize", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_LONG));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_StdContainers_NonAssignable_clear = mrbind_test.Ffi.downcall("", "MR_C_std_vector_MR_StdContainers_NonAssignable_clear", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_StdContainers_NonAssignable_reserve = mrbind_test.Ffi.downcall("", "MR_C_std_vector_MR_StdContainers_NonAssignable_reserve", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_LONG));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_StdContainers_NonAssignable_at = mrbind_test.Ffi.downcall("", "MR_C_std_vector_MR_StdContainers_NonAssignable_at", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_LONG));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_StdContainers_NonAssignable_at_mut = mrbind_test.Ffi.downcall("", "MR_C_std_vector_MR_StdContainers_NonAssignable_at_mut", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_LONG));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_StdContainers_NonAssignable_front = mrbind_test.Ffi.downcall("", "MR_C_std_vector_MR_StdContainers_NonAssignable_front", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_StdContainers_NonAssignable_front_mut = mrbind_test.Ffi.downcall("", "MR_C_std_vector_MR_StdContainers_NonAssignable_front_mut", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_StdContainers_NonAssignable_back = mrbind_test.Ffi.downcall("", "MR_C_std_vector_MR_StdContainers_NonAssignable_back", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_StdContainers_NonAssignable_back_mut = mrbind_test.Ffi.downcall("", "MR_C_std_vector_MR_StdContainers_NonAssignable_back_mut", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_StdContainers_NonAssignable_push_back = mrbind_test.Ffi.downcall("", "MR_C_std_vector_MR_StdContainers_NonAssignable_push_back", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_INT, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_StdContainers_NonAssignable_pop_back = mrbind_test.Ffi.downcall("", "MR_C_std_vector_MR_StdContainers_NonAssignable_pop_back", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_vector_MR_StdContainers_NonAssignable_Destroy = mrbind_test.Ffi.downcall("", "MR_C_std_vector_MR_StdContainers_NonAssignable_Destroy", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
    }
}
