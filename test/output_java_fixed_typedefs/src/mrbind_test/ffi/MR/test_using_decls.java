package mrbind_test.ffi.MR;

/** The downcall handles of the C bindings file `MR/test_using_decls`. */
public final class test_using_decls
{
    private test_using_decls() {}

    public static final class H0
    {
        private H0() {}

        public static final java.lang.invoke.MethodHandle MR_UsingDecls_A_ConstructFromAnother = mrbind_test.Ffi.downcall("", "MR_UsingDecls_A_ConstructFromAnother", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_UsingDecls_A_Construct = mrbind_test.Ffi.downcall("", "MR_UsingDecls_A_Construct", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_INT));
        public static final java.lang.invoke.MethodHandle MR_UsingDecls_A_ConvertTo_int32_t = mrbind_test.Ffi.downcall("", "MR_UsingDecls_A_ConvertTo_int32_t", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.JAVA_INT, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_UsingDecls_A_AssignFromAnother = mrbind_test.Ffi.downcall("", "MR_UsingDecls_A_AssignFromAnother", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_UsingDecls_A_assign = mrbind_test.Ffi.downcall("", "MR_UsingDecls_A_assign", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_INT));
        public static final java.lang.invoke.MethodHandle MR_UsingDecls_A_Method = mrbind_test.Ffi.downcall("", "MR_UsingDecls_A_Method", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_UsingDecls_A_StaticFunc = mrbind_test.Ffi.downcall("", "MR_UsingDecls_A_StaticFunc", java.lang.foreign.FunctionDescriptor.ofVoid());
        public static final java.lang.invoke.MethodHandle MR_UsingDecls_A_Get_StaticVar = mrbind_test.Ffi.downcall("", "MR_UsingDecls_A_Get_StaticVar", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_UsingDecls_A_GetMutable_StaticVar = mrbind_test.Ffi.downcall("", "MR_UsingDecls_A_GetMutable_StaticVar", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_UsingDecls_A_Set_StaticVar = mrbind_test.Ffi.downcall("", "MR_UsingDecls_A_Set_StaticVar", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.JAVA_INT));
        public static final java.lang.invoke.MethodHandle MR_UsingDecls_A_Get_Field = mrbind_test.Ffi.downcall("", "MR_UsingDecls_A_Get_Field", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_UsingDecls_A_GetMutable_Field = mrbind_test.Ffi.downcall("", "MR_UsingDecls_A_GetMutable_Field", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_UsingDecls_A_Set_Field = mrbind_test.Ffi.downcall("", "MR_UsingDecls_A_Set_Field", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.JAVA_INT));
        public static final java.lang.invoke.MethodHandle MR_UsingDecls_A_Destroy = mrbind_test.Ffi.downcall("", "MR_UsingDecls_A_Destroy", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_UsingDecls_B_ConstructFromAnother = mrbind_test.Ffi.downcall("", "MR_UsingDecls_B_ConstructFromAnother", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_UsingDecls_B_AssignFromAnother = mrbind_test.Ffi.downcall("", "MR_UsingDecls_B_AssignFromAnother", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_UsingDecls_B_Destroy = mrbind_test.Ffi.downcall("", "MR_UsingDecls_B_Destroy", java.lang.foreign.FunctionDescriptor.ofVoid(java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_UsingDecls_B_MutableUpcastTo_MR_UsingDecls_A = mrbind_test.Ffi.downcall("", "MR_UsingDecls_B_MutableUpcastTo_MR_UsingDecls_A", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
        public static final java.lang.invoke.MethodHandle MR_UsingDecls_B_MutableStaticDowncastFrom_MR_UsingDecls_A = mrbind_test.Ffi.downcall("", "MR_UsingDecls_B_MutableStaticDowncastFrom_MR_UsingDecls_A", java.lang.foreign.FunctionDescriptor.of(java.lang.foreign.ValueLayout.ADDRESS, java.lang.foreign.ValueLayout.ADDRESS));
    }
}
