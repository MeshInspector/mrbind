package mrbind_test.ffi;

/** The downcall handles of the C bindings file `std_tuple_int`. */
public final class std_tuple_int
{
    private std_tuple_int() {}

    public static final class H0
    {
        private H0() {}

        public static final java.lang.invoke.MethodHandle MR_C_std_tuple_int_DefaultConstruct = mrbind_test.Ffi.downcall("", "MR_C_std_tuple_int_DefaultConstruct", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_tuple_int_ConstructFromAnother = mrbind_test.Ffi.downcall("", "MR_C_std_tuple_int_ConstructFromAnother", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_tuple_int_AssignFromAnother = mrbind_test.Ffi.downcall("", "MR_C_std_tuple_int_AssignFromAnother", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_tuple_int_Construct = mrbind_test.Ffi.downcall("", "MR_C_std_tuple_int_Construct", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_INT));
        public static final java.lang.invoke.MethodHandle MR_C_std_tuple_int_get_int = mrbind_test.Ffi.downcall("", "MR_C_std_tuple_int_get_int", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_tuple_int_get_int_mut = mrbind_test.Ffi.downcall("", "MR_C_std_tuple_int_get_int_mut", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_tuple_int_Destroy = mrbind_test.Ffi.downcall("", "MR_C_std_tuple_int_Destroy", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
    }
}
