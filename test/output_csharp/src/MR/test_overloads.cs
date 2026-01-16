public static partial class MR
{
    public static partial class CS
    {
        public static partial class Overloads
        {
            /// Generated from function `MR::Overloads::a`.
            public static void A(int _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Overloads_a_1", ExactSpelling = true)]
                extern static void __MR_Overloads_a_1(int _1);
                __MR_Overloads_a_1(_1);
            }

            /// Generated from function `MR::Overloads::a`.
            public static void A(int _1, int _2)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Overloads_a_2", ExactSpelling = true)]
                extern static void __MR_Overloads_a_2(int _1, int _2);
                __MR_Overloads_a_2(_1, _2);
            }

            /// Generated from function `MR::Overloads::b<int>`.
            public static void B_Int()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Overloads_b_int", ExactSpelling = true)]
                extern static void __MR_Overloads_b_int();
                __MR_Overloads_b_int();
            }

            /// Generated from function `MR::Overloads::b<float>`.
            public static void B_Float()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Overloads_b_float", ExactSpelling = true)]
                extern static void __MR_Overloads_b_float();
                __MR_Overloads_b_float();
            }

            /// Generated from function `MR::Overloads::c`.
            public static void C(int _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Overloads_c_int", ExactSpelling = true)]
                extern static void __MR_Overloads_c_int(int _1);
                __MR_Overloads_c_int(_1);
            }

            /// Generated from function `MR::Overloads::c`.
            public static void C(float _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Overloads_c_float", ExactSpelling = true)]
                extern static void __MR_Overloads_c_float(float _1);
                __MR_Overloads_c_float(_1);
            }

            /// Generated from function `MR::Overloads::d`.
            public static void D(byte _1, int _2, byte _3)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Overloads_d_int", ExactSpelling = true)]
                extern static void __MR_Overloads_d_int(byte _1, int _2, byte _3);
                __MR_Overloads_d_int(_1, _2, _3);
            }

            /// Generated from function `MR::Overloads::d`.
            public static void D(byte _1, float _2, byte _3)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Overloads_d_float", ExactSpelling = true)]
                extern static void __MR_Overloads_d_float(byte _1, float _2, byte _3);
                __MR_Overloads_d_float(_1, _2, _3);
            }

            /// Generated from function `MR::Overloads::e`.
            public static unsafe void E(int _1, MR.CS.Misc._MoveRef _move__2, int _2)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Overloads_e_const_int_ref", ExactSpelling = true)]
                extern static void __MR_Overloads_e_const_int_ref(int *_1, int *_2);
                __MR_Overloads_e_const_int_ref(&_1, &_2);
            }

            /// Generated from function `MR::Overloads::e`.
            public static unsafe void E(MR.CS.Misc._MoveRef _move__1, int _1, MR.CS.Misc._MoveRef _move__2, int _2)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Overloads_e_int_rvalue_ref_int", ExactSpelling = true)]
                extern static void __MR_Overloads_e_int_rvalue_ref_int(int *_1, int *_2);
                __MR_Overloads_e_int_rvalue_ref_int(&_1, &_2);
            }

            /// Generated from function `MR::Overloads::e`.
            public static unsafe void E(MR.CS.Misc._MoveRef _move__1, int _1, MR.CS.Misc._MoveRef _move__2, float _2)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Overloads_e_int_rvalue_ref_float", ExactSpelling = true)]
                extern static void __MR_Overloads_e_int_rvalue_ref_float(int *_1, float *_2);
                __MR_Overloads_e_int_rvalue_ref_float(&_1, &_2);
            }

            // This is a fun testcase. Here we must not omit cvref on the first parameter, even if it partially helps with disambiguation,
            //   because that ultimately leads to an ambiguity.
            // So we can only omit cvref if each function has cvref in that parameter).
            /// Generated from function `MR::Overloads::f`.
            public static void F(float _1, int _2)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Overloads_f_float", ExactSpelling = true)]
                extern static void __MR_Overloads_f_float(float _1, int _2);
                __MR_Overloads_f_float(_1, _2);
            }

            /// Generated from function `MR::Overloads::f`.
            public static unsafe void F(MR.CS.Misc._MoveRef _move__1, int _1, float _2)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Overloads_f_int_rvalue_ref", ExactSpelling = true)]
                extern static void __MR_Overloads_f_int_rvalue_ref(int *_1, float _2);
                __MR_Overloads_f_int_rvalue_ref(&_1, _2);
            }

            /// Generated from function `MR::Overloads::f`.
            public static unsafe void F(int _1, float _2)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Overloads_f_const_int_ref", ExactSpelling = true)]
                extern static void __MR_Overloads_f_const_int_ref(int *_1, float _2);
                __MR_Overloads_f_const_int_ref(&_1, _2);
            }
        }
    }
}
