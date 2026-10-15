package mrbind_test.ffi;

/** The downcall handles of the C bindings file `std_pair_int_ref_float_ref`. */
public final class std_pair_int_ref_float_ref
{
    private std_pair_int_ref_float_ref() {}

    public static final class H0
    {
        private H0() {}

        public static final java.lang.invoke.MethodHandle MR_C_std_pair_int_ref_float_ref_Construct = mrbind_test.Ffi.downcall("", "MR_C_std_pair_int_ref_float_ref_Construct", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_pair_int_ref_float_ref_first = mrbind_test.Ffi.downcall("", "MR_C_std_pair_int_ref_float_ref_first", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_pair_int_ref_float_ref_second = mrbind_test.Ffi.downcall("", "MR_C_std_pair_int_ref_float_ref_second", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_C_std_pair_int_ref_float_ref_Destroy = mrbind_test.Ffi.downcall("", "MR_C_std_pair_int_ref_float_ref_Destroy", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
    }
}
