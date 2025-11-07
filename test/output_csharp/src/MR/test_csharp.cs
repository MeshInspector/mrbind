public static partial class MR
{
    public static partial class CSharp
    {
        /// Enum comment.
        public enum E1 : int
        {
            // A
            a = 10,
            // B
            b = 20,
            // C
            c = 30,
        }

        /// This enum is intended to be boolean.
        public enum E2 : byte
        {
            a = 0,
            b = 1,
        }

        /// The internal interface for class `A`, the const half.
        public interface __IConstA
        {
            public struct _Underlying; // Represents the underlying C type.
            internal unsafe _Underlying *_GetUnderlying_MR_CSharp_A(); // Returns the pointer to the underlying C object.

            /// Generated from method `MR::CSharp::A::bar`.
            public unsafe void bar(int _1, int _2)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_bar", ExactSpelling = true)]
                extern static void __MR_CSharp_A_bar(_Underlying *_this, int _1, int _2);
                __MR_CSharp_A_bar(_GetUnderlying_MR_CSharp_A(), _1, _2);
            }

            /// Generated from method `MR::CSharp::A::static_foo`.
            public static void static_foo()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_static_foo", ExactSpelling = true)]
                extern static void __MR_CSharp_A_static_foo();
                __MR_CSharp_A_static_foo();
            }

            /// Generated from method `MR::CSharp::A::static_bar`.
            public static void static_bar(int _1, int _2)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_static_bar", ExactSpelling = true)]
                extern static void __MR_CSharp_A_static_bar(int _1, int _2);
                __MR_CSharp_A_static_bar(_1, _2);
            }

            /// Generated from method `MR::CSharp::A::virtual_bar`.
            public virtual unsafe void virtual_bar(int _1, int _2)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_virtual_bar", ExactSpelling = true)]
                extern static void __MR_CSharp_A_virtual_bar(_Underlying *_this, int _1, int _2);
                __MR_CSharp_A_virtual_bar(_GetUnderlying_MR_CSharp_A(), _1, _2);
            }
        }

        /// Generated from class `MR::CSharp::A`.
        /// This is the const half of the class.
        public class ConstA : MR.Misc.Object, System.IDisposable, __IConstA
        {
            private unsafe __IConstA._Underlying *_UnderlyingPtr;
            public unsafe __IConstA._Underlying *_GetUnderlying_MR_CSharp_A() => _UnderlyingPtr;
            internal unsafe ConstA(__IConstA._Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

            protected virtual unsafe void Dispose(bool disposing)
            {
                if (_UnderlyingPtr == null)
                    return;
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_Destroy", ExactSpelling = true)]
                extern static void __MR_CSharp_A_Destroy(__IConstA._Underlying *_this);
                __MR_CSharp_A_Destroy(_GetUnderlying_MR_CSharp_A());
                _UnderlyingPtr = null;
            }
            public void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
            ~ConstA() {Dispose(false);}
        }

        /// The internal interface for class `A`, the non-const half.
        public interface __IA : MR.CSharp.__IConstA
        {
            /// Generated from method `MR::CSharp::A::foo`.
            public unsafe void foo()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_foo", ExactSpelling = true)]
                extern static void __MR_CSharp_A_foo(_Underlying *_this);
                __MR_CSharp_A_foo(_GetUnderlying_MR_CSharp_A());
            }

            /// Generated from method `MR::CSharp::A::virtual_foo`.
            public virtual unsafe void virtual_foo()
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_virtual_foo", ExactSpelling = true)]
                extern static void __MR_CSharp_A_virtual_foo(_Underlying *_this);
                __MR_CSharp_A_virtual_foo(_GetUnderlying_MR_CSharp_A());
            }

            /// Generated from method `MR::CSharp::A::refs`.
            public unsafe ref int refs(ref int x, ref int _2)
            {
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_A_refs", ExactSpelling = true)]
                extern static int *__MR_CSharp_A_refs(_Underlying *_this, int *x, int *_2);
                fixed (int *__ptr_x = &x) {
                    fixed (int *__ptr__2 = &_2) {
                        return ref *__MR_CSharp_A_refs(_GetUnderlying_MR_CSharp_A(), __ptr_x, __ptr__2);
                    } // fixed __ptr__2
                } // fixed __ptr_x
            }
        }

        /// Generated from class `MR::CSharp::A`.
        /// This is the non-const half of the class.
        public class A : MR.CSharp.ConstA, __IA
        {
            internal unsafe A(__IA._Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}
        }

        /// The internal interface for class `Trivial`, the const half.
        public interface __IConstTrivial
        {
            public struct _Underlying; // Represents the underlying C type.
            internal unsafe _Underlying *_GetUnderlying_MR_CSharp_Trivial(); // Returns the pointer to the underlying C object.
        }

        /// Generated from class `MR::CSharp::Trivial`.
        /// This is the const half of the class.
        public class ConstTrivial : MR.Misc.Object, System.IDisposable, __IConstTrivial
        {
            private unsafe __IConstTrivial._Underlying *_UnderlyingPtr;
            public unsafe __IConstTrivial._Underlying *_GetUnderlying_MR_CSharp_Trivial() => _UnderlyingPtr;
            internal unsafe ConstTrivial(__IConstTrivial._Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

            protected virtual unsafe void Dispose(bool disposing)
            {
                if (_UnderlyingPtr == null)
                    return;
                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_Trivial_Destroy", ExactSpelling = true)]
                extern static void __MR_CSharp_Trivial_Destroy(__IConstTrivial._Underlying *_this);
                __MR_CSharp_Trivial_Destroy(_GetUnderlying_MR_CSharp_Trivial());
                _UnderlyingPtr = null;
            }
            public void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
            ~ConstTrivial() {Dispose(false);}
        }

        /// The internal interface for class `Trivial`, the non-const half.
        public interface __ITrivial : MR.CSharp.__IConstTrivial
        {
        }

        /// Generated from class `MR::CSharp::Trivial`.
        /// This is the non-const half of the class.
        public class Trivial : MR.CSharp.ConstTrivial, __ITrivial
        {
            internal unsafe Trivial(__ITrivial._Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}
        }

        /// Generated from function `MR::CSharp::foo`.
        public static void foo()
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_foo", ExactSpelling = true)]
            extern static void __MR_CSharp_foo();
            __MR_CSharp_foo();
        }

        /// Generated from function `MR::CSharp::test_int`.
        /// Parameter `b` defaults to `42`.
        public static unsafe int test_int(int a, int? b = null)
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_int", ExactSpelling = true)]
            extern static int __MR_CSharp_test_int(int a, int *b);
            int __deref_b = b.GetValueOrDefault();
            return __MR_CSharp_test_int(a, b.HasValue ? &__deref_b : null);
        }

        /// Generated from function `MR::CSharp::test_bool`.
        /// Parameter `b` defaults to `true`.
        public static unsafe bool test_bool(bool a, bool? b = null)
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_bool", ExactSpelling = true)]
            extern static byte __MR_CSharp_test_bool(byte a, byte *b);
            byte __deref_b = b.GetValueOrDefault() ? (byte)1 : (byte)0;
            return __MR_CSharp_test_bool(a ? (byte)1 : (byte)0, b.HasValue ? &__deref_b : null) != 0;
        }

        /// Generated from function `MR::CSharp::test_bool_ref`.
        /// Parameter `b` defaults to `default_bool`.
        public static unsafe void test_bool_ref(ref bool a, MR.Misc.InOut<bool>? b = null)
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_bool_ref", ExactSpelling = true)]
            extern static void __MR_CSharp_test_bool_ref(bool *a, bool *b);
            fixed (bool *__ptr_a = &a) {
                bool __value_b = b != null ? b.Value : default(bool);
                __MR_CSharp_test_bool_ref(__ptr_a, b != null ? &__value_b : null);
                if (b != null) b.Value = __value_b;
            } // fixed __ptr_a
        }

        /// Generated from function `MR::CSharp::test_bool_ref2`.
        /// Parameter `b` defaults to `default_bool`.
        public static unsafe int test_bool_ref2(ref bool a, MR.Misc.InOut<bool>? b = null)
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_bool_ref2", ExactSpelling = true)]
            extern static int __MR_CSharp_test_bool_ref2(bool *a, bool *b);
            fixed (bool *__ptr_a = &a) {
                bool __value_b = b != null ? b.Value : default(bool);
                var __ret = __MR_CSharp_test_bool_ref2(__ptr_a, b != null ? &__value_b : null);
                if (b != null) b.Value = __value_b;
                return __ret;
            } // fixed __ptr_a
        }

        /// Generated from function `MR::CSharp::get_bool_ref`.
        public static unsafe ref bool get_bool_ref()
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_get_bool_ref", ExactSpelling = true)]
            extern static bool *__MR_CSharp_get_bool_ref();
            return ref *__MR_CSharp_get_bool_ref();
        }

        /// Generated from function `MR::CSharp::print_bool_ref`.
        public static void print_bool_ref()
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_print_bool_ref", ExactSpelling = true)]
            extern static void __MR_CSharp_print_bool_ref();
            __MR_CSharp_print_bool_ref();
        }

        /// Generated from function `MR::CSharp::test_bool_cref`.
        /// Parameter `_2` defaults to `default_bool`.
        public static unsafe bool test_bool_cref(bool _1, bool? _2 = null)
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_bool_cref", ExactSpelling = true)]
            extern static bool *__MR_CSharp_test_bool_cref(bool *_1, bool *_2);
            bool __deref__2 = _2.GetValueOrDefault();
            return *__MR_CSharp_test_bool_cref(&_1, _2.HasValue ? &__deref__2 : null);
        }

        /// Generated from function `MR::CSharp::test_int_ref`.
        /// Parameter `b` defaults to `default_int`.
        public static unsafe ref int test_int_ref(ref int a, MR.Misc.InOut<int>? b = null)
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_int_ref", ExactSpelling = true)]
            extern static int *__MR_CSharp_test_int_ref(int *a, int *b);
            fixed (int *__ptr_a = &a) {
                int __value_b = b != null ? b.Value : default(int);
                var __ret = __MR_CSharp_test_int_ref(__ptr_a, b != null ? &__value_b : null);
                if (b != null) b.Value = __value_b;
                return ref *__ret;
            } // fixed __ptr_a
        }

        /// Generated from function `MR::CSharp::test_int_cref`.
        /// Parameter `b` defaults to `default_int`.
        public static unsafe int test_int_cref(int a, int? b = null)
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_int_cref", ExactSpelling = true)]
            extern static int *__MR_CSharp_test_int_cref(int *a, int *b);
            int __deref_b = b.GetValueOrDefault();
            return *__MR_CSharp_test_int_cref(&a, b.HasValue ? &__deref_b : null);
        }

        /// Generated from function `MR::CSharp::test_int_ptr`.
        /// Parameter `c` defaults to `&default_int`.
        public static unsafe MR.Misc.Ref<int>? test_int_ptr(MR.Misc.InOut<int>? a, MR.Misc.InOut<int>? b = null, MR.Misc.InOutOpt<int>? c = null)
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_int_ptr", ExactSpelling = true)]
            extern static int *__MR_CSharp_test_int_ptr(int *a, int *b, int **c);
            int __value_a = a != null ? a.Value : default(int);
            int __value_b = b != null ? b.Value : default(int);
            int __value_c = c != null && c.Opt != null ? c.Opt.Value : default(int);
            int *__valueptr_c = c != null && c.Opt != null ? &__value_c : null;
            var __ret = __MR_CSharp_test_int_ptr(a != null ? &__value_a : null, b != null ? &__value_b : null, c != null ? &__valueptr_c : null);
            if (c != null && c.Opt != null) c.Opt.Value = __value_c;
            if (b != null) b.Value = __value_b;
            if (a != null) a.Value = __value_a;
            return __ret != null ? new MR.Misc.Ref<int>(__ret) : null;
        }

        /// Generated from function `MR::CSharp::test_int_cptr`.
        /// Parameter `c` defaults to `&default_int`.
        public static unsafe int? test_int_cptr(int? a, int? b = null, MR.Misc.InOpt<int>? c = null)
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_int_cptr", ExactSpelling = true)]
            extern static int *__MR_CSharp_test_int_cptr(int *a, int *b, int **c);
            int __deref_a = a.GetValueOrDefault();
            int __deref_b = b.GetValueOrDefault();
            int __value_c = c != null && c.Opt != null ? c.Opt.Value : default(int);
            int *__valueptr_c = c != null && c.Opt != null ? &__value_c : null;
            var __ret = __MR_CSharp_test_int_cptr(a.HasValue ? &__deref_a : null, b.HasValue ? &__deref_b : null, c != null ? &__valueptr_c : null);
            return __ret != null ? *__ret : null;
        }

        /// Generated from function `MR::CSharp::test_enum`.
        /// Parameter `b` defaults to `E1::b`.
        public static unsafe MR.CSharp.E1 test_enum(MR.CSharp.E1 a, MR.CSharp.E1? b = null)
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_enum", ExactSpelling = true)]
            extern static MR.CSharp.E1 __MR_CSharp_test_enum(MR.CSharp.E1 a, MR.CSharp.E1 *b);
            MR.CSharp.E1 __deref_b = b.GetValueOrDefault();
            return __MR_CSharp_test_enum(a, b.HasValue ? &__deref_b : null);
        }

        /// Generated from function `MR::CSharp::test_enum_ref`.
        /// Parameter `b` defaults to `default_e1`.
        public static unsafe ref MR.CSharp.E1 test_enum_ref(ref MR.CSharp.E1 a, MR.Misc.InOut<MR.CSharp.E1>? b = null)
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_enum_ref", ExactSpelling = true)]
            extern static MR.CSharp.E1 *__MR_CSharp_test_enum_ref(MR.CSharp.E1 *a, MR.CSharp.E1 *b);
            fixed (MR.CSharp.E1 *__ptr_a = &a) {
                MR.CSharp.E1 __value_b = b != null ? b.Value : default(MR.CSharp.E1);
                var __ret = __MR_CSharp_test_enum_ref(__ptr_a, b != null ? &__value_b : null);
                if (b != null) b.Value = __value_b;
                return ref *__ret;
            } // fixed __ptr_a
        }

        /// Generated from function `MR::CSharp::test_enum_cref`.
        /// Parameter `b` defaults to `default_e1`.
        public static unsafe MR.CSharp.E1 test_enum_cref(MR.CSharp.E1 a, MR.CSharp.E1? b = null)
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_enum_cref", ExactSpelling = true)]
            extern static MR.CSharp.E1 *__MR_CSharp_test_enum_cref(MR.CSharp.E1 *a, MR.CSharp.E1 *b);
            MR.CSharp.E1 __deref_b = b.GetValueOrDefault();
            return *__MR_CSharp_test_enum_cref(&a, b.HasValue ? &__deref_b : null);
        }

        /// Generated from function `MR::CSharp::test_enum_ptr`.
        /// Parameter `c` defaults to `&default_e1`.
        public static unsafe MR.Misc.Ref<MR.CSharp.E1>? test_enum_ptr(MR.Misc.InOut<MR.CSharp.E1>? a, MR.Misc.InOut<MR.CSharp.E1>? b = null, MR.Misc.InOutOpt<MR.CSharp.E1>? c = null)
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_enum_ptr", ExactSpelling = true)]
            extern static MR.CSharp.E1 *__MR_CSharp_test_enum_ptr(MR.CSharp.E1 *a, MR.CSharp.E1 *b, MR.CSharp.E1 **c);
            MR.CSharp.E1 __value_a = a != null ? a.Value : default(MR.CSharp.E1);
            MR.CSharp.E1 __value_b = b != null ? b.Value : default(MR.CSharp.E1);
            MR.CSharp.E1 __value_c = c != null && c.Opt != null ? c.Opt.Value : default(MR.CSharp.E1);
            MR.CSharp.E1 *__valueptr_c = c != null && c.Opt != null ? &__value_c : null;
            var __ret = __MR_CSharp_test_enum_ptr(a != null ? &__value_a : null, b != null ? &__value_b : null, c != null ? &__valueptr_c : null);
            if (c != null && c.Opt != null) c.Opt.Value = __value_c;
            if (b != null) b.Value = __value_b;
            if (a != null) a.Value = __value_a;
            return __ret != null ? new MR.Misc.Ref<MR.CSharp.E1>(__ret) : null;
        }

        /// Generated from function `MR::CSharp::test_enum_cptr`.
        /// Parameter `c` defaults to `&default_e1`.
        public static unsafe MR.CSharp.E1? test_enum_cptr(MR.CSharp.E1? a, MR.CSharp.E1? b = null, MR.Misc.InOpt<MR.CSharp.E1>? c = null)
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_enum_cptr", ExactSpelling = true)]
            extern static MR.CSharp.E1 *__MR_CSharp_test_enum_cptr(MR.CSharp.E1 *a, MR.CSharp.E1 *b, MR.CSharp.E1 **c);
            MR.CSharp.E1 __deref_a = a.GetValueOrDefault();
            MR.CSharp.E1 __deref_b = b.GetValueOrDefault();
            MR.CSharp.E1 __value_c = c != null && c.Opt != null ? c.Opt.Value : default(MR.CSharp.E1);
            MR.CSharp.E1 *__valueptr_c = c != null && c.Opt != null ? &__value_c : null;
            var __ret = __MR_CSharp_test_enum_cptr(a.HasValue ? &__deref_a : null, b.HasValue ? &__deref_b : null, c != null ? &__valueptr_c : null);
            return __ret != null ? *__ret : null;
        }

        /// Generated from function `MR::CSharp::test_bool_enum`.
        /// Parameter `b` defaults to `E2::b`.
        public static unsafe MR.CSharp.E2 test_bool_enum(MR.CSharp.E2 a, MR.CSharp.E2? b = null)
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_bool_enum", ExactSpelling = true)]
            extern static MR.CSharp.E2 __MR_CSharp_test_bool_enum(MR.CSharp.E2 a, MR.CSharp.E2 *b);
            if ((byte)a > 1) a = (MR.CSharp.E2)1;
            MR.CSharp.E2 __deref_b = b.GetValueOrDefault();
            if ((byte)__deref_b > 1) __deref_b = (MR.CSharp.E2)1;
            return __MR_CSharp_test_bool_enum(a, b.HasValue ? &__deref_b : null);
        }

        /// Generated from function `MR::CSharp::test_bool_enum_ref`.
        /// Parameter `b` defaults to `default_e2`.
        public static unsafe ref MR.CSharp.E2 test_bool_enum_ref(ref MR.CSharp.E2 a, MR.Misc.InOut<MR.CSharp.E2>? b = null)
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_bool_enum_ref", ExactSpelling = true)]
            extern static MR.CSharp.E2 *__MR_CSharp_test_bool_enum_ref(MR.CSharp.E2 *a, MR.CSharp.E2 *b);
            fixed (MR.CSharp.E2 *__ptr_a = &a) {
                if ((byte)a > 1) a = (MR.CSharp.E2)1;
                MR.CSharp.E2 __value_b = b != null ? b.Value : default(MR.CSharp.E2);
                if ((byte)__value_b > 1) __value_b = (MR.CSharp.E2)1;
                var __ret = __MR_CSharp_test_bool_enum_ref(__ptr_a, b != null ? &__value_b : null);
                if (b != null) b.Value = __value_b;
                return ref *__ret;
            } // fixed __ptr_a
        }

        /// Generated from function `MR::CSharp::test_bool_enum_cref`.
        /// Parameter `b` defaults to `default_e2`.
        public static unsafe MR.CSharp.E2 test_bool_enum_cref(MR.CSharp.E2 a, MR.CSharp.E2? b = null)
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_bool_enum_cref", ExactSpelling = true)]
            extern static MR.CSharp.E2 *__MR_CSharp_test_bool_enum_cref(MR.CSharp.E2 *a, MR.CSharp.E2 *b);
            if ((byte)a > 1) a = (MR.CSharp.E2)1;
            MR.CSharp.E2 __deref_b = b.GetValueOrDefault();
            if ((byte)__deref_b > 1) __deref_b = (MR.CSharp.E2)1;
            return *__MR_CSharp_test_bool_enum_cref(&a, b.HasValue ? &__deref_b : null);
        }

        /// Generated from function `MR::CSharp::test_bool_enum_ptr`.
        /// Parameter `c` defaults to `&default_e2`.
        public static unsafe MR.Misc.Ref<MR.CSharp.E2>? test_bool_enum_ptr(MR.Misc.InOut<MR.CSharp.E2>? a, MR.Misc.InOut<MR.CSharp.E2>? b = null, MR.Misc.InOutOpt<MR.CSharp.E2>? c = null)
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_bool_enum_ptr", ExactSpelling = true)]
            extern static MR.CSharp.E2 *__MR_CSharp_test_bool_enum_ptr(MR.CSharp.E2 *a, MR.CSharp.E2 *b, MR.CSharp.E2 **c);
            MR.CSharp.E2 __value_a = a != null ? a.Value : default(MR.CSharp.E2);
            if ((byte)__value_a > 1) __value_a = (MR.CSharp.E2)1;
            MR.CSharp.E2 __value_b = b != null ? b.Value : default(MR.CSharp.E2);
            if ((byte)__value_b > 1) __value_b = (MR.CSharp.E2)1;
            MR.CSharp.E2 __value_c = c != null && c.Opt != null ? c.Opt.Value : default(MR.CSharp.E2);
            MR.CSharp.E2 *__valueptr_c = c != null && c.Opt != null ? &__value_c : null;
            if ((byte)__value_c > 1) __value_c = (MR.CSharp.E2)1;
            var __ret = __MR_CSharp_test_bool_enum_ptr(a != null ? &__value_a : null, b != null ? &__value_b : null, c != null ? &__valueptr_c : null);
            if (c != null && c.Opt != null) c.Opt.Value = __value_c;
            if (b != null) b.Value = __value_b;
            if (a != null) a.Value = __value_a;
            return __ret != null ? new MR.Misc.Ref<MR.CSharp.E2>(__ret) : null;
        }

        /// Generated from function `MR::CSharp::test_bool_enum_cptr`.
        /// Parameter `c` defaults to `&default_e2`.
        public static unsafe MR.CSharp.E2? test_bool_enum_cptr(MR.CSharp.E2? a, MR.CSharp.E2? b = null, MR.Misc.InOpt<MR.CSharp.E2>? c = null)
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_bool_enum_cptr", ExactSpelling = true)]
            extern static MR.CSharp.E2 *__MR_CSharp_test_bool_enum_cptr(MR.CSharp.E2 *a, MR.CSharp.E2 *b, MR.CSharp.E2 **c);
            MR.CSharp.E2 __deref_a = a.GetValueOrDefault();
            if ((byte)__deref_a > 1) __deref_a = (MR.CSharp.E2)1;
            MR.CSharp.E2 __deref_b = b.GetValueOrDefault();
            if ((byte)__deref_b > 1) __deref_b = (MR.CSharp.E2)1;
            MR.CSharp.E2 __value_c = c != null && c.Opt != null ? c.Opt.Value : default(MR.CSharp.E2);
            MR.CSharp.E2 *__valueptr_c = c != null && c.Opt != null ? &__value_c : null;
            if ((byte)__value_c > 1) __value_c = (MR.CSharp.E2)1;
            var __ret = __MR_CSharp_test_bool_enum_cptr(a.HasValue ? &__deref_a : null, b.HasValue ? &__deref_b : null, c != null ? &__valueptr_c : null);
            return __ret != null ? *__ret : null;
        }

        /// Generated from function `MR::CSharp::test_class_trivial`.
        /// Parameter `b` defaults to `{}`.
        public static unsafe MR.CSharp.Trivial test_class_trivial(MR.CSharp.Trivial a, MR.CSharp.Trivial? b = null)
        {
            [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_CSharp_test_class_trivial", ExactSpelling = true)]
            extern static MR.CSharp.__ITrivial._Underlying *__MR_CSharp_test_class_trivial(MR.CSharp.__ITrivial._Underlying *a, MR.CSharp.__ITrivial._Underlying *b);
            return new(__MR_CSharp_test_class_trivial(a._GetUnderlying_MR_CSharp_Trivial(), b != null ? b._GetUnderlying_MR_CSharp_Trivial() : null), is_owning: true);
        }
    }
}
