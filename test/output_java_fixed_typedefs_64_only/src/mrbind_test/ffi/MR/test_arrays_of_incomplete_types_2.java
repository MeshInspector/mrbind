package mrbind_test.ffi.MR;

/** The downcall handles of the C bindings file `MR/test_arrays_of_incomplete_types_2`. */
public final class test_arrays_of_incomplete_types_2
{
    private test_arrays_of_incomplete_types_2() {}

    public static final class H0
    {
        private H0() {}

        public static final java.lang.invoke.MethodHandle MR_IncompleteArrayElemType_bar = mrbind_test.Ffi.downcall("", "MR_IncompleteArrayElemType_bar", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
    }
}
