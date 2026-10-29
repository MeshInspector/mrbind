package mrbind_test.ffi;

/** The downcall handles of the C bindings file `std_list_int`. */
public final class std_list_int
{
    private std_list_int() {}

    public static final class H0
    {
        private H0() {}

        public static final java.lang.invoke.MethodHandle MR_C_equal_MR_C_std_list_int_const_iterator = mrbind_test.Ffi.downcall("", "MR_C_equal_MR_C_std_list_int_const_iterator", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.JAVA_BOOLEAN, java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_list_int_DefaultConstruct = mrbind_test.Ffi.downcall("", "MR_C_std_list_int_DefaultConstruct", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_list_int_ConstructFromAnother = mrbind_test.Ffi.downcall("", "MR_C_std_list_int_ConstructFromAnother", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_INT, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_list_int_AssignFromAnother = mrbind_test.Ffi.downcall("", "MR_C_std_list_int_AssignFromAnother", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_INT, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_list_int_size = mrbind_test.Ffi.downcall("", "MR_C_std_list_int_size", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.JAVA_LONG, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_list_int_empty = mrbind_test.Ffi.downcall("", "MR_C_std_list_int_empty", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.JAVA_BOOLEAN, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_list_int_resize = mrbind_test.Ffi.downcall("", "MR_C_std_list_int_resize", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_LONG));
        public static final java.lang.invoke.MethodHandle MR_C_std_list_int_clear = mrbind_test.Ffi.downcall("", "MR_C_std_list_int_clear", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_list_int_front = mrbind_test.Ffi.downcall("", "MR_C_std_list_int_front", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_list_int_front_mut = mrbind_test.Ffi.downcall("", "MR_C_std_list_int_front_mut", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_list_int_back = mrbind_test.Ffi.downcall("", "MR_C_std_list_int_back", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_list_int_back_mut = mrbind_test.Ffi.downcall("", "MR_C_std_list_int_back_mut", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_list_int_push_back = mrbind_test.Ffi.downcall("", "MR_C_std_list_int_push_back", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_INT));
        public static final java.lang.invoke.MethodHandle MR_C_std_list_int_pop_back = mrbind_test.Ffi.downcall("", "MR_C_std_list_int_pop_back", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_list_int_push_front = mrbind_test.Ffi.downcall("", "MR_C_std_list_int_push_front", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_INT));
        public static final java.lang.invoke.MethodHandle MR_C_std_list_int_pop_front = mrbind_test.Ffi.downcall("", "MR_C_std_list_int_pop_front", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_list_int_begin = mrbind_test.Ffi.downcall("", "MR_C_std_list_int_begin", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_list_int_end = mrbind_test.Ffi.downcall("", "MR_C_std_list_int_end", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_list_int_is_end = mrbind_test.Ffi.downcall("", "MR_C_std_list_int_is_end", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.JAVA_BOOLEAN, java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_list_int_Destroy = mrbind_test.Ffi.downcall("", "MR_C_std_list_int_Destroy", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_list_int_const_iterator_DefaultConstruct = mrbind_test.Ffi.downcall("", "MR_C_std_list_int_const_iterator_DefaultConstruct", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_list_int_const_iterator_ConstructFromAnother = mrbind_test.Ffi.downcall("", "MR_C_std_list_int_const_iterator_ConstructFromAnother", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_list_int_const_iterator_AssignFromAnother = mrbind_test.Ffi.downcall("", "MR_C_std_list_int_const_iterator_AssignFromAnother", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_list_int_const_iterator_deref = mrbind_test.Ffi.downcall("", "MR_C_std_list_int_const_iterator_deref", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_list_int_const_iterator_incr = mrbind_test.Ffi.downcall("", "MR_C_std_list_int_const_iterator_incr", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_list_int_const_iterator_Destroy = mrbind_test.Ffi.downcall("", "MR_C_std_list_int_const_iterator_Destroy", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
    }
}
