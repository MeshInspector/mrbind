package mrbind_test.ffi.MR;

/** The downcall handles of the C bindings file `MR/test_includes_for_enum_constants`. */
public final class test_includes_for_enum_constants
{
    private test_includes_for_enum_constants() {}

    public static final class H0
    {
        private H0() {}

        public static final java.lang.invoke.MethodHandle MR_IncludesForEnumConstants_foo = mrbind_test.Ffi.downcall("", "MR_IncludesForEnumConstants_foo", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS));
    }
}
