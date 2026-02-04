public static partial class MR
{
    public static partial class CS
    {
        public static partial class Overloads
        {
            /// <summary>
            /// Generated from function `MR::Overloads::a`.
            /// </summary>
            public static void a(int _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Overloads_a_1", ExactSpelling = true)]
                extern static void __MR_Overloads_a_1(int _1);
                __MR_Overloads_a_1(_1);
            }

            /// <summary>
            /// Generated from function `MR::Overloads::a`.
            /// </summary>
            public static void a(int _1, int _2)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Overloads_a_2", ExactSpelling = true)]
                extern static void __MR_Overloads_a_2(int _1, int _2);
                __MR_Overloads_a_2(_1, _2);
            }

            /// <summary>
            /// Generated from function `MR::Overloads::b<int32_t>`.
            /// </summary>
            public static void b_Int32T()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Overloads_b_int32_t", ExactSpelling = true)]
                extern static void __MR_Overloads_b_int32_t();
                __MR_Overloads_b_int32_t();
            }

            /// <summary>
            /// Generated from function `MR::Overloads::b<float>`.
            /// </summary>
            public static void b_Float()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Overloads_b_float", ExactSpelling = true)]
                extern static void __MR_Overloads_b_float();
                __MR_Overloads_b_float();
            }

            /// <summary>
            /// Generated from function `MR::Overloads::c`.
            /// </summary>
            public static void c(int _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Overloads_c_int32_t", ExactSpelling = true)]
                extern static void __MR_Overloads_c_int32_t(int _1);
                __MR_Overloads_c_int32_t(_1);
            }

            /// <summary>
            /// Generated from function `MR::Overloads::c`.
            /// </summary>
            public static void c(float _1)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Overloads_c_float", ExactSpelling = true)]
                extern static void __MR_Overloads_c_float(float _1);
                __MR_Overloads_c_float(_1);
            }

            /// <summary>
            /// Generated from function `MR::Overloads::d`.
            /// </summary>
            public static void d(byte _1, int _2, byte _3)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Overloads_d_int32_t", ExactSpelling = true)]
                extern static void __MR_Overloads_d_int32_t(byte _1, int _2, byte _3);
                __MR_Overloads_d_int32_t(_1, _2, _3);
            }

            /// <summary>
            /// Generated from function `MR::Overloads::d`.
            /// </summary>
            public static void d(byte _1, float _2, byte _3)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Overloads_d_float", ExactSpelling = true)]
                extern static void __MR_Overloads_d_float(byte _1, float _2, byte _3);
                __MR_Overloads_d_float(_1, _2, _3);
            }

            /// <summary>
            /// Generated from function `MR::Overloads::e`.
            /// </summary>
            public static unsafe void e(int _1, MR.CS.Misc._MoveRef _move__2, int _2)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Overloads_e_const_int32_t_ref", ExactSpelling = true)]
                extern static void __MR_Overloads_e_const_int32_t_ref(int *_1, int *_2);
                __MR_Overloads_e_const_int32_t_ref(&_1, &_2);
            }

            /// <summary>
            /// Generated from function `MR::Overloads::e`.
            /// </summary>
            public static unsafe void e(MR.CS.Misc._MoveRef _move__1, int _1, MR.CS.Misc._MoveRef _move__2, int _2)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Overloads_e_int32_t_rvalue_ref_int32_t", ExactSpelling = true)]
                extern static void __MR_Overloads_e_int32_t_rvalue_ref_int32_t(int *_1, int *_2);
                __MR_Overloads_e_int32_t_rvalue_ref_int32_t(&_1, &_2);
            }

            /// <summary>
            /// Generated from function `MR::Overloads::e`.
            /// </summary>
            public static unsafe void e(MR.CS.Misc._MoveRef _move__1, int _1, MR.CS.Misc._MoveRef _move__2, float _2)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Overloads_e_int32_t_rvalue_ref_float", ExactSpelling = true)]
                extern static void __MR_Overloads_e_int32_t_rvalue_ref_float(int *_1, float *_2);
                __MR_Overloads_e_int32_t_rvalue_ref_float(&_1, &_2);
            }

            // This is a fun testcase. Here we must not omit cvref on the first parameter, even if it partially helps with disambiguation,
            //   because that ultimately leads to an ambiguity.
            // So we can only omit cvref if each function has cvref in that parameter).
            /// <summary>
            /// Generated from function `MR::Overloads::f`.
            /// </summary>
            public static void f(float _1, int _2)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Overloads_f_float", ExactSpelling = true)]
                extern static void __MR_Overloads_f_float(float _1, int _2);
                __MR_Overloads_f_float(_1, _2);
            }

            /// <summary>
            /// Generated from function `MR::Overloads::f`.
            /// </summary>
            public static unsafe void f(MR.CS.Misc._MoveRef _move__1, int _1, float _2)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Overloads_f_int32_t_rvalue_ref", ExactSpelling = true)]
                extern static void __MR_Overloads_f_int32_t_rvalue_ref(int *_1, float _2);
                __MR_Overloads_f_int32_t_rvalue_ref(&_1, _2);
            }

            /// <summary>
            /// Generated from function `MR::Overloads::f`.
            /// </summary>
            public static unsafe void f(int _1, float _2)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_Overloads_f_const_int32_t_ref", ExactSpelling = true)]
                extern static void __MR_Overloads_f_const_int32_t_ref(int *_1, float _2);
                __MR_Overloads_f_const_int32_t_ref(&_1, _2);
            }
        }
    }
}
