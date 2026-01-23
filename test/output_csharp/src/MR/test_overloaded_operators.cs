public static partial class MR
{
    public static partial class CS
    {
        public static partial class OverloadedOps
        {
            // Member functions.
            /// Generated from class `MR::OverloadedOps::A`.
            /// This is the const half of the class.
            public class Const_A : MR.CS.Misc.Object<Const_A>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_A(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_A_Destroy", ExactSpelling = true)]
                    extern static void __MR_OverloadedOps_A_Destroy(_Underlying *_this);
                    __MR_OverloadedOps_A_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_A() {Dispose(false);}

                // Since we have a custom assignment, we also need a custom copy ctor to avoid the deprecation warning.
                /// Generated from constructor `MR::OverloadedOps::A::A`.
                public unsafe Const_A(MR.CS.OverloadedOps.Const_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.OverloadedOps.A._Underlying *__MR_OverloadedOps_A_ConstructFromAnother(MR.CS.OverloadedOps.A._Underlying *_other);
                    _UnderlyingPtr = __MR_OverloadedOps_A_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                // Pre-increment.
                /// Generated from method `MR::OverloadedOps::A::operator++`.
                public static unsafe A operator++(MR.CS.OverloadedOps.Const_A _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_incr_MR_OverloadedOps_A", ExactSpelling = true)]
                    extern static int __MR_C_incr_MR_OverloadedOps_A(MR.CS.OverloadedOps.Const_A._Underlying *_this);
                    A __this_copy = new(_this);
                    int __ret = __MR_C_incr_MR_OverloadedOps_A(__this_copy._UnderlyingPtr);
                    return __this_copy;
                }

                // Pre-decrement.
                /// Generated from method `MR::OverloadedOps::A::operator--`.
                public static unsafe A operator--(MR.CS.OverloadedOps.Const_A _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_decr_MR_OverloadedOps_A", ExactSpelling = true)]
                    extern static int __MR_C_decr_MR_OverloadedOps_A(MR.CS.OverloadedOps.Const_A._Underlying *_this);
                    A __this_copy = new(_this);
                    int __ret = __MR_C_decr_MR_OverloadedOps_A(__this_copy._UnderlyingPtr);
                    return __this_copy;
                }
            }

            // Member functions.
            /// Generated from class `MR::OverloadedOps::A`.
            /// This is the non-const half of the class.
            public class A : Const_A
            {
                internal unsafe A(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                // Since we have a custom assignment, we also need a custom copy ctor to avoid the deprecation warning.
                /// Generated from constructor `MR::OverloadedOps::A::A`.
                public unsafe A(MR.CS.OverloadedOps.Const_A _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_A_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.OverloadedOps.A._Underlying *__MR_OverloadedOps_A_ConstructFromAnother(MR.CS.OverloadedOps.A._Underlying *_other);
                    _UnderlyingPtr = __MR_OverloadedOps_A_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                // Assign.
                /// Generated from method `MR::OverloadedOps::A::operator=`.
                public unsafe int Assign(MR.CS.OverloadedOps.Const_A _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_A_AssignFromAnother", ExactSpelling = true)]
                    extern static int __MR_OverloadedOps_A_AssignFromAnother(_Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_other);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return __MR_OverloadedOps_A_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr);
                }

                // Unary plus.
                /// Generated from method `MR::OverloadedOps::A::operator+`.
                public static unsafe int operator+(MR.CS.OverloadedOps.A _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_pos_MR_OverloadedOps_A", ExactSpelling = true)]
                    extern static int __MR_C_pos_MR_OverloadedOps_A(MR.CS.OverloadedOps.A._Underlying *_this);
                    return __MR_C_pos_MR_OverloadedOps_A(_this._UnderlyingPtr);
                }

                // Binary plus.
                /// Generated from method `MR::OverloadedOps::A::operator+`.
                public static unsafe int operator+(MR.CS.OverloadedOps.A _this, MR.CS.OverloadedOps.Const_A _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_add_MR_OverloadedOps_A", ExactSpelling = true)]
                    extern static int __MR_C_add_MR_OverloadedOps_A(MR.CS.OverloadedOps.A._Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);
                    return __MR_C_add_MR_OverloadedOps_A(_this._UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Unary minus.
                /// Generated from method `MR::OverloadedOps::A::operator-`.
                public static unsafe int operator-(MR.CS.OverloadedOps.A _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_neg_MR_OverloadedOps_A", ExactSpelling = true)]
                    extern static int __MR_C_neg_MR_OverloadedOps_A(MR.CS.OverloadedOps.A._Underlying *_this);
                    return __MR_C_neg_MR_OverloadedOps_A(_this._UnderlyingPtr);
                }

                // Binary minus.
                /// Generated from method `MR::OverloadedOps::A::operator-`.
                public static unsafe int operator-(MR.CS.OverloadedOps.A _this, MR.CS.OverloadedOps.Const_A _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_sub_MR_OverloadedOps_A", ExactSpelling = true)]
                    extern static int __MR_C_sub_MR_OverloadedOps_A(MR.CS.OverloadedOps.A._Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);
                    return __MR_C_sub_MR_OverloadedOps_A(_this._UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Dereference (unary star).
                /// Generated from method `MR::OverloadedOps::A::operator*`.
                public unsafe int Deref()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_deref_MR_OverloadedOps_A", ExactSpelling = true)]
                    extern static int __MR_C_deref_MR_OverloadedOps_A(_Underlying *_this);
                    return __MR_C_deref_MR_OverloadedOps_A(_UnderlyingPtr);
                }

                // Multiply (binary star).
                /// Generated from method `MR::OverloadedOps::A::operator*`.
                public static unsafe int operator*(MR.CS.OverloadedOps.A _this, MR.CS.OverloadedOps.Const_A _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_mul_MR_OverloadedOps_A", ExactSpelling = true)]
                    extern static int __MR_C_mul_MR_OverloadedOps_A(MR.CS.OverloadedOps.A._Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);
                    return __MR_C_mul_MR_OverloadedOps_A(_this._UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Divide.
                /// Generated from method `MR::OverloadedOps::A::operator/`.
                public static unsafe int operator/(MR.CS.OverloadedOps.A _this, MR.CS.OverloadedOps.Const_A _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_div_MR_OverloadedOps_A", ExactSpelling = true)]
                    extern static int __MR_C_div_MR_OverloadedOps_A(MR.CS.OverloadedOps.A._Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);
                    return __MR_C_div_MR_OverloadedOps_A(_this._UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Modulo.
                /// Generated from method `MR::OverloadedOps::A::operator%`.
                public static unsafe int operator%(MR.CS.OverloadedOps.A _this, MR.CS.OverloadedOps.Const_A _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_mod_MR_OverloadedOps_A", ExactSpelling = true)]
                    extern static int __MR_C_mod_MR_OverloadedOps_A(MR.CS.OverloadedOps.A._Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);
                    return __MR_C_mod_MR_OverloadedOps_A(_this._UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Bit xor.
                /// Generated from method `MR::OverloadedOps::A::operator^`.
                public static unsafe int operator^(MR.CS.OverloadedOps.A _this, MR.CS.OverloadedOps.Const_A _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_xor_MR_OverloadedOps_A", ExactSpelling = true)]
                    extern static int __MR_C_xor_MR_OverloadedOps_A(MR.CS.OverloadedOps.A._Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);
                    return __MR_C_xor_MR_OverloadedOps_A(_this._UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Bit and.
                /// Generated from method `MR::OverloadedOps::A::operator&`.
                public static unsafe int operator&(MR.CS.OverloadedOps.A _this, MR.CS.OverloadedOps.Const_A _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_bitand_MR_OverloadedOps_A", ExactSpelling = true)]
                    extern static int __MR_C_bitand_MR_OverloadedOps_A(MR.CS.OverloadedOps.A._Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);
                    return __MR_C_bitand_MR_OverloadedOps_A(_this._UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Bit or.
                /// Generated from method `MR::OverloadedOps::A::operator|`.
                public static unsafe int operator|(MR.CS.OverloadedOps.A _this, MR.CS.OverloadedOps.Const_A _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_bitor_MR_OverloadedOps_A", ExactSpelling = true)]
                    extern static int __MR_C_bitor_MR_OverloadedOps_A(MR.CS.OverloadedOps.A._Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);
                    return __MR_C_bitor_MR_OverloadedOps_A(_this._UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Bit negate.
                /// Generated from method `MR::OverloadedOps::A::operator~`.
                public static unsafe int operator~(MR.CS.OverloadedOps.A _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_compl_MR_OverloadedOps_A", ExactSpelling = true)]
                    extern static int __MR_C_compl_MR_OverloadedOps_A(MR.CS.OverloadedOps.A._Underlying *_this);
                    return __MR_C_compl_MR_OverloadedOps_A(_this._UnderlyingPtr);
                }

                // Boolean negate.
                /// Generated from method `MR::OverloadedOps::A::operator!`.
                public static unsafe int operator!(MR.CS.OverloadedOps.A _this)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_not_MR_OverloadedOps_A", ExactSpelling = true)]
                    extern static int __MR_C_not_MR_OverloadedOps_A(MR.CS.OverloadedOps.A._Underlying *_this);
                    return __MR_C_not_MR_OverloadedOps_A(_this._UnderlyingPtr);
                }

                // Less.
                /// Generated from method `MR::OverloadedOps::A::operator<`.
                public unsafe int Less(MR.CS.OverloadedOps.Const_A _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_less_MR_OverloadedOps_A", ExactSpelling = true)]
                    extern static int __MR_C_less_MR_OverloadedOps_A(_Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);
                    return __MR_C_less_MR_OverloadedOps_A(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Greater.
                /// Generated from method `MR::OverloadedOps::A::operator>`.
                public unsafe int Greater(MR.CS.OverloadedOps.Const_A _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_greater_MR_OverloadedOps_A", ExactSpelling = true)]
                    extern static int __MR_C_greater_MR_OverloadedOps_A(_Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);
                    return __MR_C_greater_MR_OverloadedOps_A(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Plus assign.
                /// Generated from method `MR::OverloadedOps::A::operator+=`.
                public unsafe int AddAssign(MR.CS.OverloadedOps.Const_A _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_A_add_assign", ExactSpelling = true)]
                    extern static int __MR_OverloadedOps_A_add_assign(_Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);
                    return __MR_OverloadedOps_A_add_assign(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Minus assign.
                /// Generated from method `MR::OverloadedOps::A::operator-=`.
                public unsafe int SubAssign(MR.CS.OverloadedOps.Const_A _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_A_sub_assign", ExactSpelling = true)]
                    extern static int __MR_OverloadedOps_A_sub_assign(_Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);
                    return __MR_OverloadedOps_A_sub_assign(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Multiply assign.
                /// Generated from method `MR::OverloadedOps::A::operator*=`.
                public unsafe int MulAssign(MR.CS.OverloadedOps.Const_A _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_A_mul_assign", ExactSpelling = true)]
                    extern static int __MR_OverloadedOps_A_mul_assign(_Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);
                    return __MR_OverloadedOps_A_mul_assign(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Divide assign.
                /// Generated from method `MR::OverloadedOps::A::operator/=`.
                public unsafe int DivAssign(MR.CS.OverloadedOps.Const_A _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_A_div_assign", ExactSpelling = true)]
                    extern static int __MR_OverloadedOps_A_div_assign(_Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);
                    return __MR_OverloadedOps_A_div_assign(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Modulo assign.
                /// Generated from method `MR::OverloadedOps::A::operator%=`.
                public unsafe int ModAssign(MR.CS.OverloadedOps.Const_A _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_A_mod_assign", ExactSpelling = true)]
                    extern static int __MR_OverloadedOps_A_mod_assign(_Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);
                    return __MR_OverloadedOps_A_mod_assign(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Bit xor assign.
                /// Generated from method `MR::OverloadedOps::A::operator^=`.
                public unsafe int XorAssign(MR.CS.OverloadedOps.Const_A _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_A_xor_assign", ExactSpelling = true)]
                    extern static int __MR_OverloadedOps_A_xor_assign(_Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);
                    return __MR_OverloadedOps_A_xor_assign(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Bit and assign.
                /// Generated from method `MR::OverloadedOps::A::operator&=`.
                public unsafe int BitandAssign(MR.CS.OverloadedOps.Const_A _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_A_bitand_assign", ExactSpelling = true)]
                    extern static int __MR_OverloadedOps_A_bitand_assign(_Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);
                    return __MR_OverloadedOps_A_bitand_assign(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Bit or assign.
                /// Generated from method `MR::OverloadedOps::A::operator|=`.
                public unsafe int BitorAssign(MR.CS.OverloadedOps.Const_A _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_A_bitor_assign", ExactSpelling = true)]
                    extern static int __MR_OverloadedOps_A_bitor_assign(_Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);
                    return __MR_OverloadedOps_A_bitor_assign(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Left shift.
                /// Generated from method `MR::OverloadedOps::A::operator<<`.
                public static unsafe int operator<<(MR.CS.OverloadedOps.A _this, MR.CS.OverloadedOps.Const_A _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_lshift_MR_OverloadedOps_A", ExactSpelling = true)]
                    extern static int __MR_C_lshift_MR_OverloadedOps_A(MR.CS.OverloadedOps.A._Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);
                    return __MR_C_lshift_MR_OverloadedOps_A(_this._UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Right shift.
                /// Generated from method `MR::OverloadedOps::A::operator>>`.
                public static unsafe int operator>>(MR.CS.OverloadedOps.A _this, MR.CS.OverloadedOps.Const_A _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_rshift_MR_OverloadedOps_A", ExactSpelling = true)]
                    extern static int __MR_C_rshift_MR_OverloadedOps_A(MR.CS.OverloadedOps.A._Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);
                    return __MR_C_rshift_MR_OverloadedOps_A(_this._UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Left shift assign.
                /// Generated from method `MR::OverloadedOps::A::operator<<=`.
                public unsafe int LshiftAssign(MR.CS.OverloadedOps.Const_A _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_A_lshift_assign", ExactSpelling = true)]
                    extern static int __MR_OverloadedOps_A_lshift_assign(_Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);
                    return __MR_OverloadedOps_A_lshift_assign(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Right shift assign.
                /// Generated from method `MR::OverloadedOps::A::operator>>=`.
                public unsafe int RshiftAssign(MR.CS.OverloadedOps.Const_A _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_A_rshift_assign", ExactSpelling = true)]
                    extern static int __MR_OverloadedOps_A_rshift_assign(_Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);
                    return __MR_OverloadedOps_A_rshift_assign(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Equal.
                /// Generated from method `MR::OverloadedOps::A::operator==`.
                public unsafe int Equal(MR.CS.OverloadedOps.Const_A _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_equal_MR_OverloadedOps_A", ExactSpelling = true)]
                    extern static int __MR_C_equal_MR_OverloadedOps_A(_Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);
                    return __MR_C_equal_MR_OverloadedOps_A(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Not equal.
                /// Generated from method `MR::OverloadedOps::A::operator!=`.
                public unsafe int NotEqual(MR.CS.OverloadedOps.Const_A _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_not_equal_MR_OverloadedOps_A", ExactSpelling = true)]
                    extern static int __MR_C_not_equal_MR_OverloadedOps_A(_Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);
                    return __MR_C_not_equal_MR_OverloadedOps_A(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Less equal.
                /// Generated from method `MR::OverloadedOps::A::operator<=`.
                public unsafe int LessEqual(MR.CS.OverloadedOps.Const_A _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_less_equal_MR_OverloadedOps_A", ExactSpelling = true)]
                    extern static int __MR_C_less_equal_MR_OverloadedOps_A(_Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);
                    return __MR_C_less_equal_MR_OverloadedOps_A(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Greater equal.
                /// Generated from method `MR::OverloadedOps::A::operator>=`.
                public unsafe int GreaterEqual(MR.CS.OverloadedOps.Const_A _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_greater_equal_MR_OverloadedOps_A", ExactSpelling = true)]
                    extern static int __MR_C_greater_equal_MR_OverloadedOps_A(_Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);
                    return __MR_C_greater_equal_MR_OverloadedOps_A(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Compare three way.
                /// Generated from method `MR::OverloadedOps::A::operator<=>`.
                public unsafe int CompareThreeWay(MR.CS.OverloadedOps.Const_A _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_compare_three_way_MR_OverloadedOps_A", ExactSpelling = true)]
                    extern static int __MR_C_compare_three_way_MR_OverloadedOps_A(_Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);
                    return __MR_C_compare_three_way_MR_OverloadedOps_A(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                // And.
                /// Generated from method `MR::OverloadedOps::A::operator&&`.
                public unsafe int And(MR.CS.OverloadedOps.Const_A _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_and_MR_OverloadedOps_A", ExactSpelling = true)]
                    extern static int __MR_C_and_MR_OverloadedOps_A(_Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);
                    return __MR_C_and_MR_OverloadedOps_A(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Or.
                /// Generated from method `MR::OverloadedOps::A::operator||`.
                public unsafe int Or(MR.CS.OverloadedOps.Const_A _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_or_MR_OverloadedOps_A", ExactSpelling = true)]
                    extern static int __MR_C_or_MR_OverloadedOps_A(_Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);
                    return __MR_C_or_MR_OverloadedOps_A(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Pre-increment.
                /// Generated from method `MR::OverloadedOps::A::operator++`.
                public unsafe void Incr()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_incr_MR_OverloadedOps_A", ExactSpelling = true)]
                    extern static int __MR_C_incr_MR_OverloadedOps_A(_Underlying *_this);
                    int __ret = __MR_C_incr_MR_OverloadedOps_A(_UnderlyingPtr);
                }

                // Pre-decrement.
                /// Generated from method `MR::OverloadedOps::A::operator--`.
                public unsafe void Decr()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_decr_MR_OverloadedOps_A", ExactSpelling = true)]
                    extern static int __MR_C_decr_MR_OverloadedOps_A(_Underlying *_this);
                    int __ret = __MR_C_decr_MR_OverloadedOps_A(_UnderlyingPtr);
                }

                // Comma.
                /// Generated from method `MR::OverloadedOps::A::operator,`.
                public unsafe int Comma(MR.CS.OverloadedOps.Const_A _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_comma_MR_OverloadedOps_A", ExactSpelling = true)]
                    extern static int __MR_C_comma_MR_OverloadedOps_A(_Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);
                    return __MR_C_comma_MR_OverloadedOps_A(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Arrow star.
                /// Generated from method `MR::OverloadedOps::A::operator->*`.
                public unsafe int ArrowStar(MR.CS.OverloadedOps.Const_A _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_A_arrow_star", ExactSpelling = true)]
                    extern static int __MR_OverloadedOps_A_arrow_star(_Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);
                    return __MR_OverloadedOps_A_arrow_star(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Arrow.
                /// Generated from method `MR::OverloadedOps::A::operator->`.
                public unsafe int Arrow()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_A_arrow", ExactSpelling = true)]
                    extern static int __MR_OverloadedOps_A_arrow(_Underlying *_this);
                    return __MR_OverloadedOps_A_arrow(_UnderlyingPtr);
                }

                // Function call.
                /// Generated from method `MR::OverloadedOps::A::operator()`.
                public unsafe int Call(MR.CS.OverloadedOps.Const_A _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_A_call", ExactSpelling = true)]
                    extern static int __MR_OverloadedOps_A_call(_Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);
                    return __MR_OverloadedOps_A_call(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Indexing.
                /// Generated from method `MR::OverloadedOps::A::operator[]`.
                public unsafe int this[MR.CS.OverloadedOps.Const_A _1]
                {
                    get
                    {
                        [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_A_index", ExactSpelling = true)]
                        extern static int __MR_OverloadedOps_A_index(_Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);
                        return __MR_OverloadedOps_A_index(_UnderlyingPtr, _1._UnderlyingPtr);
                    }
                }
            }

            /// This is used for optional parameters of class `A` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_A`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `A`/`Const_A` directly.
            public class _InOptMut_A
            {
                public A? Opt;

                public _InOptMut_A() {}
                public _InOptMut_A(A value) {Opt = value;}
                public static implicit operator _InOptMut_A(A value) {return new(value);}
            }

            /// This is used for optional parameters of class `A` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_A`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `A`/`Const_A` to pass it to the function.
            public class _InOptConst_A
            {
                public Const_A? Opt;

                public _InOptConst_A() {}
                public _InOptConst_A(Const_A value) {Opt = value;}
                public static implicit operator _InOptConst_A(Const_A value) {return new(value);}
            }

            // Free functions.
            /// Generated from class `MR::OverloadedOps::B`.
            /// This is the const half of the class.
            public class Const_B : MR.CS.Misc.Object<Const_B>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_B(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_B_Destroy", ExactSpelling = true)]
                    extern static void __MR_OverloadedOps_B_Destroy(_Underlying *_this);
                    __MR_OverloadedOps_B_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_B() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_B() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_B_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.OverloadedOps.B._Underlying *__MR_OverloadedOps_B_DefaultConstruct();
                    _UnderlyingPtr = __MR_OverloadedOps_B_DefaultConstruct();
                }

                /// Generated from constructor `MR::OverloadedOps::B::B`.
                public unsafe Const_B(MR.CS.OverloadedOps.Const_B _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_B_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.OverloadedOps.B._Underlying *__MR_OverloadedOps_B_ConstructFromAnother(MR.CS.OverloadedOps.B._Underlying *_other);
                    _UnderlyingPtr = __MR_OverloadedOps_B_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                // Unary plus.
                /// Generated from function `MR::OverloadedOps::operator+`.
                public static unsafe int operator+(Const_B _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_pos_MR_OverloadedOps_B", ExactSpelling = true)]
                    extern static int __MR_C_pos_MR_OverloadedOps_B(MR.CS.OverloadedOps.B._Underlying *_1);
                    return __MR_C_pos_MR_OverloadedOps_B(_1._UnderlyingPtr);
                }

                // Binary plus.
                /// Generated from function `MR::OverloadedOps::operator+`.
                public static unsafe int operator+(Const_B _1, MR.CS.OverloadedOps.Const_B _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_add_MR_OverloadedOps_B", ExactSpelling = true)]
                    extern static int __MR_C_add_MR_OverloadedOps_B(MR.CS.OverloadedOps.B._Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);
                    return __MR_C_add_MR_OverloadedOps_B(_1._UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Unary minus.
                /// Generated from function `MR::OverloadedOps::operator-`.
                public static unsafe int operator-(Const_B _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_neg_MR_OverloadedOps_B", ExactSpelling = true)]
                    extern static int __MR_C_neg_MR_OverloadedOps_B(MR.CS.OverloadedOps.B._Underlying *_1);
                    return __MR_C_neg_MR_OverloadedOps_B(_1._UnderlyingPtr);
                }

                // Binary minus.
                /// Generated from function `MR::OverloadedOps::operator-`.
                public static unsafe int operator-(Const_B _1, MR.CS.OverloadedOps.Const_B _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_sub_MR_OverloadedOps_B", ExactSpelling = true)]
                    extern static int __MR_C_sub_MR_OverloadedOps_B(MR.CS.OverloadedOps.B._Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);
                    return __MR_C_sub_MR_OverloadedOps_B(_1._UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Dereference (unary star).
                /// Generated from function `MR::OverloadedOps::operator*`.
                public unsafe int Deref()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_deref_MR_OverloadedOps_B", ExactSpelling = true)]
                    extern static int __MR_C_deref_MR_OverloadedOps_B(_Underlying *_1);
                    return __MR_C_deref_MR_OverloadedOps_B(_UnderlyingPtr);
                }

                // Multiply (binary star).
                /// Generated from function `MR::OverloadedOps::operator*`.
                public static unsafe int operator*(Const_B _1, MR.CS.OverloadedOps.Const_B _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_mul_MR_OverloadedOps_B", ExactSpelling = true)]
                    extern static int __MR_C_mul_MR_OverloadedOps_B(MR.CS.OverloadedOps.B._Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);
                    return __MR_C_mul_MR_OverloadedOps_B(_1._UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Divide.
                /// Generated from function `MR::OverloadedOps::operator/`.
                public static unsafe int operator/(Const_B _1, MR.CS.OverloadedOps.Const_B _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_div_MR_OverloadedOps_B", ExactSpelling = true)]
                    extern static int __MR_C_div_MR_OverloadedOps_B(MR.CS.OverloadedOps.B._Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);
                    return __MR_C_div_MR_OverloadedOps_B(_1._UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Modulo.
                /// Generated from function `MR::OverloadedOps::operator%`.
                public static unsafe int operator%(Const_B _1, MR.CS.OverloadedOps.Const_B _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_mod_MR_OverloadedOps_B", ExactSpelling = true)]
                    extern static int __MR_C_mod_MR_OverloadedOps_B(MR.CS.OverloadedOps.B._Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);
                    return __MR_C_mod_MR_OverloadedOps_B(_1._UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Bit xor.
                /// Generated from function `MR::OverloadedOps::operator^`.
                public static unsafe int operator^(Const_B _1, MR.CS.OverloadedOps.Const_B _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_xor_MR_OverloadedOps_B", ExactSpelling = true)]
                    extern static int __MR_C_xor_MR_OverloadedOps_B(MR.CS.OverloadedOps.B._Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);
                    return __MR_C_xor_MR_OverloadedOps_B(_1._UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Bit and.
                /// Generated from function `MR::OverloadedOps::operator&`.
                public static unsafe int operator&(Const_B _1, MR.CS.OverloadedOps.Const_B _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_bitand_MR_OverloadedOps_B", ExactSpelling = true)]
                    extern static int __MR_C_bitand_MR_OverloadedOps_B(MR.CS.OverloadedOps.B._Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);
                    return __MR_C_bitand_MR_OverloadedOps_B(_1._UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Bit or.
                /// Generated from function `MR::OverloadedOps::operator|`.
                public static unsafe int operator|(Const_B _1, MR.CS.OverloadedOps.Const_B _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_bitor_MR_OverloadedOps_B", ExactSpelling = true)]
                    extern static int __MR_C_bitor_MR_OverloadedOps_B(MR.CS.OverloadedOps.B._Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);
                    return __MR_C_bitor_MR_OverloadedOps_B(_1._UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Bit negate.
                /// Generated from function `MR::OverloadedOps::operator~`.
                public static unsafe int operator~(Const_B _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_compl_MR_OverloadedOps_B", ExactSpelling = true)]
                    extern static int __MR_C_compl_MR_OverloadedOps_B(MR.CS.OverloadedOps.B._Underlying *_1);
                    return __MR_C_compl_MR_OverloadedOps_B(_1._UnderlyingPtr);
                }

                // Boolean negate.
                /// Generated from function `MR::OverloadedOps::operator!`.
                public static unsafe int operator!(Const_B _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_not_MR_OverloadedOps_B", ExactSpelling = true)]
                    extern static int __MR_C_not_MR_OverloadedOps_B(MR.CS.OverloadedOps.B._Underlying *_1);
                    return __MR_C_not_MR_OverloadedOps_B(_1._UnderlyingPtr);
                }

                // Assign.
                // friend int operator=(B, B); // Can't be a free function.
                // Less.
                /// Generated from function `MR::OverloadedOps::operator<`.
                public unsafe int Less(MR.CS.OverloadedOps.Const_B _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_less_MR_OverloadedOps_B", ExactSpelling = true)]
                    extern static int __MR_C_less_MR_OverloadedOps_B(_Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);
                    return __MR_C_less_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Greater.
                /// Generated from function `MR::OverloadedOps::operator>`.
                public unsafe int Greater(MR.CS.OverloadedOps.Const_B _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_greater_MR_OverloadedOps_B", ExactSpelling = true)]
                    extern static int __MR_C_greater_MR_OverloadedOps_B(_Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);
                    return __MR_C_greater_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Plus assign.
                /// Generated from function `MR::OverloadedOps::operator+=`.
                public unsafe int AddAssign(MR.CS.OverloadedOps.Const_B _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_add_assign_MR_OverloadedOps_B", ExactSpelling = true)]
                    extern static int __MR_C_add_assign_MR_OverloadedOps_B(_Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);
                    return __MR_C_add_assign_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Minus assign.
                /// Generated from function `MR::OverloadedOps::operator-=`.
                public unsafe int SubAssign(MR.CS.OverloadedOps.Const_B _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_sub_assign_MR_OverloadedOps_B", ExactSpelling = true)]
                    extern static int __MR_C_sub_assign_MR_OverloadedOps_B(_Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);
                    return __MR_C_sub_assign_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Multiply assign.
                /// Generated from function `MR::OverloadedOps::operator*=`.
                public unsafe int MulAssign(MR.CS.OverloadedOps.Const_B _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_mul_assign_MR_OverloadedOps_B", ExactSpelling = true)]
                    extern static int __MR_C_mul_assign_MR_OverloadedOps_B(_Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);
                    return __MR_C_mul_assign_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Divide assign.
                /// Generated from function `MR::OverloadedOps::operator/=`.
                public unsafe int DivAssign(MR.CS.OverloadedOps.Const_B _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_div_assign_MR_OverloadedOps_B", ExactSpelling = true)]
                    extern static int __MR_C_div_assign_MR_OverloadedOps_B(_Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);
                    return __MR_C_div_assign_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Modulo assign.
                /// Generated from function `MR::OverloadedOps::operator%=`.
                public unsafe int ModAssign(MR.CS.OverloadedOps.Const_B _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_mod_assign_MR_OverloadedOps_B", ExactSpelling = true)]
                    extern static int __MR_C_mod_assign_MR_OverloadedOps_B(_Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);
                    return __MR_C_mod_assign_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Bit xor assign.
                /// Generated from function `MR::OverloadedOps::operator^=`.
                public unsafe int XorAssign(MR.CS.OverloadedOps.Const_B _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_xor_assign_MR_OverloadedOps_B", ExactSpelling = true)]
                    extern static int __MR_C_xor_assign_MR_OverloadedOps_B(_Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);
                    return __MR_C_xor_assign_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Bit and assign.
                /// Generated from function `MR::OverloadedOps::operator&=`.
                public unsafe int BitandAssign(MR.CS.OverloadedOps.Const_B _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_bitand_assign_MR_OverloadedOps_B", ExactSpelling = true)]
                    extern static int __MR_C_bitand_assign_MR_OverloadedOps_B(_Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);
                    return __MR_C_bitand_assign_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Bit or assign.
                /// Generated from function `MR::OverloadedOps::operator|=`.
                public unsafe int BitorAssign(MR.CS.OverloadedOps.Const_B _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_bitor_assign_MR_OverloadedOps_B", ExactSpelling = true)]
                    extern static int __MR_C_bitor_assign_MR_OverloadedOps_B(_Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);
                    return __MR_C_bitor_assign_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Left shift.
                /// Generated from function `MR::OverloadedOps::operator<<`.
                public static unsafe int operator<<(Const_B _1, MR.CS.OverloadedOps.Const_B _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_lshift_MR_OverloadedOps_B", ExactSpelling = true)]
                    extern static int __MR_C_lshift_MR_OverloadedOps_B(MR.CS.OverloadedOps.B._Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);
                    return __MR_C_lshift_MR_OverloadedOps_B(_1._UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Right shift.
                /// Generated from function `MR::OverloadedOps::operator>>`.
                public static unsafe int operator>>(Const_B _1, MR.CS.OverloadedOps.Const_B _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_rshift_MR_OverloadedOps_B", ExactSpelling = true)]
                    extern static int __MR_C_rshift_MR_OverloadedOps_B(MR.CS.OverloadedOps.B._Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);
                    return __MR_C_rshift_MR_OverloadedOps_B(_1._UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Left shift assign.
                /// Generated from function `MR::OverloadedOps::operator<<=`.
                public unsafe int LshiftAssign(MR.CS.OverloadedOps.Const_B _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_lshift_assign_MR_OverloadedOps_B", ExactSpelling = true)]
                    extern static int __MR_C_lshift_assign_MR_OverloadedOps_B(_Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);
                    return __MR_C_lshift_assign_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Right shift assign.
                /// Generated from function `MR::OverloadedOps::operator>>=`.
                public unsafe int RshiftAssign(MR.CS.OverloadedOps.Const_B _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_rshift_assign_MR_OverloadedOps_B", ExactSpelling = true)]
                    extern static int __MR_C_rshift_assign_MR_OverloadedOps_B(_Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);
                    return __MR_C_rshift_assign_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Equal.
                /// Generated from function `MR::OverloadedOps::operator==`.
                public unsafe int Equal(MR.CS.OverloadedOps.Const_B _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_equal_MR_OverloadedOps_B", ExactSpelling = true)]
                    extern static int __MR_C_equal_MR_OverloadedOps_B(_Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);
                    return __MR_C_equal_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Not equal.
                /// Generated from function `MR::OverloadedOps::operator!=`.
                public unsafe int NotEqual(MR.CS.OverloadedOps.Const_B _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_not_equal_MR_OverloadedOps_B", ExactSpelling = true)]
                    extern static int __MR_C_not_equal_MR_OverloadedOps_B(_Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);
                    return __MR_C_not_equal_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Less equal.
                /// Generated from function `MR::OverloadedOps::operator<=`.
                public unsafe int LessEqual(MR.CS.OverloadedOps.Const_B _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_less_equal_MR_OverloadedOps_B", ExactSpelling = true)]
                    extern static int __MR_C_less_equal_MR_OverloadedOps_B(_Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);
                    return __MR_C_less_equal_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Greater equal.
                /// Generated from function `MR::OverloadedOps::operator>=`.
                public unsafe int GreaterEqual(MR.CS.OverloadedOps.Const_B _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_greater_equal_MR_OverloadedOps_B", ExactSpelling = true)]
                    extern static int __MR_C_greater_equal_MR_OverloadedOps_B(_Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);
                    return __MR_C_greater_equal_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Compare three way.
                /// Generated from function `MR::OverloadedOps::operator<=>`.
                public unsafe int CompareThreeWay(MR.CS.OverloadedOps.Const_B _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_compare_three_way_MR_OverloadedOps_B", ExactSpelling = true)]
                    extern static int __MR_C_compare_three_way_MR_OverloadedOps_B(_Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);
                    return __MR_C_compare_three_way_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                }

                // And.
                /// Generated from function `MR::OverloadedOps::operator&&`.
                public unsafe int And(MR.CS.OverloadedOps.Const_B _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_and_MR_OverloadedOps_B", ExactSpelling = true)]
                    extern static int __MR_C_and_MR_OverloadedOps_B(_Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);
                    return __MR_C_and_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Or.
                /// Generated from function `MR::OverloadedOps::operator||`.
                public unsafe int Or(MR.CS.OverloadedOps.Const_B _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_or_MR_OverloadedOps_B", ExactSpelling = true)]
                    extern static int __MR_C_or_MR_OverloadedOps_B(_Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);
                    return __MR_C_or_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Pre-increment.
                /// Generated from function `MR::OverloadedOps::operator++`.
                public unsafe void Incr()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_incr_MR_OverloadedOps_B", ExactSpelling = true)]
                    extern static int __MR_C_incr_MR_OverloadedOps_B(_Underlying *_1);
                    int __ret = __MR_C_incr_MR_OverloadedOps_B(_UnderlyingPtr);
                }

                // Pre-increment.
                /// Generated from function `MR::OverloadedOps::operator++`.
                public static unsafe B operator++(MR.CS.OverloadedOps.Const_B _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_incr_MR_OverloadedOps_B", ExactSpelling = true)]
                    extern static int __MR_C_incr_MR_OverloadedOps_B(MR.CS.OverloadedOps.Const_B._Underlying *_1);
                    B __this_copy = new(_1);
                    int __ret = __MR_C_incr_MR_OverloadedOps_B(__this_copy._UnderlyingPtr);
                    return __this_copy;
                }

                // Pre-decrement.
                /// Generated from function `MR::OverloadedOps::operator--`.
                public unsafe void Decr()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_decr_MR_OverloadedOps_B", ExactSpelling = true)]
                    extern static int __MR_C_decr_MR_OverloadedOps_B(_Underlying *_1);
                    int __ret = __MR_C_decr_MR_OverloadedOps_B(_UnderlyingPtr);
                }

                // Pre-decrement.
                /// Generated from function `MR::OverloadedOps::operator--`.
                public static unsafe B operator--(MR.CS.OverloadedOps.Const_B _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_decr_MR_OverloadedOps_B", ExactSpelling = true)]
                    extern static int __MR_C_decr_MR_OverloadedOps_B(MR.CS.OverloadedOps.Const_B._Underlying *_1);
                    B __this_copy = new(_1);
                    int __ret = __MR_C_decr_MR_OverloadedOps_B(__this_copy._UnderlyingPtr);
                    return __this_copy;
                }

                // Comma.
                /// Generated from function `MR::OverloadedOps::operator,`.
                public unsafe int Comma(MR.CS.OverloadedOps.Const_B _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_comma_MR_OverloadedOps_B", ExactSpelling = true)]
                    extern static int __MR_C_comma_MR_OverloadedOps_B(_Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);
                    return __MR_C_comma_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Arrow star.
                /// Generated from function `MR::OverloadedOps::operator->*`.
                public unsafe int ArrowStar(MR.CS.OverloadedOps.Const_B _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_arrow_star_MR_OverloadedOps_B", ExactSpelling = true)]
                    extern static int __MR_C_arrow_star_MR_OverloadedOps_B(_Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);
                    return __MR_C_arrow_star_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                }
            }

            // Free functions.
            /// Generated from class `MR::OverloadedOps::B`.
            /// This is the non-const half of the class.
            public class B : Const_B
            {
                internal unsafe B(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe B() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_B_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.OverloadedOps.B._Underlying *__MR_OverloadedOps_B_DefaultConstruct();
                    _UnderlyingPtr = __MR_OverloadedOps_B_DefaultConstruct();
                }

                /// Generated from constructor `MR::OverloadedOps::B::B`.
                public unsafe B(MR.CS.OverloadedOps.Const_B _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_B_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.OverloadedOps.B._Underlying *__MR_OverloadedOps_B_ConstructFromAnother(MR.CS.OverloadedOps.B._Underlying *_other);
                    _UnderlyingPtr = __MR_OverloadedOps_B_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// Generated from method `MR::OverloadedOps::B::operator=`.
                public unsafe MR.CS.OverloadedOps.B Assign(MR.CS.OverloadedOps.Const_B _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_B_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.OverloadedOps.B._Underlying *__MR_OverloadedOps_B_AssignFromAnother(_Underlying *_this, MR.CS.OverloadedOps.B._Underlying *_other);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_OverloadedOps_B_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }
            }

            /// This is used for optional parameters of class `B` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_B`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `B`/`Const_B` directly.
            public class _InOptMut_B
            {
                public B? Opt;

                public _InOptMut_B() {}
                public _InOptMut_B(B value) {Opt = value;}
                public static implicit operator _InOptMut_B(B value) {return new(value);}
            }

            /// This is used for optional parameters of class `B` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_B`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `B`/`Const_B` to pass it to the function.
            public class _InOptConst_B
            {
                public Const_B? Opt;

                public _InOptConst_B() {}
                public _InOptConst_B(Const_B value) {Opt = value;}
                public static implicit operator _InOptConst_B(Const_B value) {return new(value);}
            }

            // Test how the names are generated.
            /// Generated from class `MR::OverloadedOps::C`.
            /// This is the const half of the class.
            public class Const_C : MR.CS.Misc.Object<Const_C>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_C(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_C_Destroy", ExactSpelling = true)]
                    extern static void __MR_OverloadedOps_C_Destroy(_Underlying *_this);
                    __MR_OverloadedOps_C_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_C() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_C() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_C_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.OverloadedOps.C._Underlying *__MR_OverloadedOps_C_DefaultConstruct();
                    _UnderlyingPtr = __MR_OverloadedOps_C_DefaultConstruct();
                }

                /// Generated from constructor `MR::OverloadedOps::C::C`.
                public unsafe Const_C(MR.CS.OverloadedOps.Const_C _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_C_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.OverloadedOps.C._Underlying *__MR_OverloadedOps_C_ConstructFromAnother(MR.CS.OverloadedOps.C._Underlying *_other);
                    _UnderlyingPtr = __MR_OverloadedOps_C_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                // If rhs type is same as the lhs one (ignoring cvref), it's not emitted.
                /// Generated from function `MR::OverloadedOps::operator+`.
                public unsafe void Add(MR.CS.OverloadedOps.Const_C _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_add_MR_OverloadedOps_C", ExactSpelling = true)]
                    extern static void __MR_C_add_MR_OverloadedOps_C(_Underlying *_1, MR.CS.OverloadedOps.C._Underlying *_2);
                    __MR_C_add_MR_OverloadedOps_C(_UnderlyingPtr, _2._UnderlyingPtr);
                }

                // But different types are printed.
                /// Generated from function `MR::OverloadedOps::operator+`.
                public unsafe void Add(MR.CS.OverloadedOps.Const_B _2)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_add_MR_OverloadedOps_C_MR_OverloadedOps_B", ExactSpelling = true)]
                    extern static void __MR_C_add_MR_OverloadedOps_C_MR_OverloadedOps_B(_Underlying *_1, MR.CS.OverloadedOps.Const_B._Underlying *_2);
                    __MR_C_add_MR_OverloadedOps_C_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                }
            }

            // Test how the names are generated.
            /// Generated from class `MR::OverloadedOps::C`.
            /// This is the non-const half of the class.
            public class C : Const_C
            {
                internal unsafe C(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe C() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_C_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.OverloadedOps.C._Underlying *__MR_OverloadedOps_C_DefaultConstruct();
                    _UnderlyingPtr = __MR_OverloadedOps_C_DefaultConstruct();
                }

                /// Generated from constructor `MR::OverloadedOps::C::C`.
                public unsafe C(MR.CS.OverloadedOps.Const_C _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_C_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.OverloadedOps.C._Underlying *__MR_OverloadedOps_C_ConstructFromAnother(MR.CS.OverloadedOps.C._Underlying *_other);
                    _UnderlyingPtr = __MR_OverloadedOps_C_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// Generated from method `MR::OverloadedOps::C::operator=`.
                public unsafe MR.CS.OverloadedOps.C Assign(MR.CS.OverloadedOps.Const_C _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_C_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.OverloadedOps.C._Underlying *__MR_OverloadedOps_C_AssignFromAnother(_Underlying *_this, MR.CS.OverloadedOps.C._Underlying *_other);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_OverloadedOps_C_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }
            }

            /// This is used for optional parameters of class `C` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_C`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `C`/`Const_C` directly.
            public class _InOptMut_C
            {
                public C? Opt;

                public _InOptMut_C() {}
                public _InOptMut_C(C value) {Opt = value;}
                public static implicit operator _InOptMut_C(C value) {return new(value);}
            }

            /// This is used for optional parameters of class `C` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_C`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `C`/`Const_C` to pass it to the function.
            public class _InOptConst_C
            {
                public Const_C? Opt;

                public _InOptConst_C() {}
                public _InOptConst_C(Const_C value) {Opt = value;}
                public static implicit operator _InOptConst_C(Const_C value) {return new(value);}
            }

            /// Generated from class `MR::OverloadedOps::D`.
            /// This is the const half of the class.
            public class Const_D : MR.CS.Misc.Object<Const_D>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                internal unsafe Const_D(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_D_Destroy", ExactSpelling = true)]
                    extern static void __MR_OverloadedOps_D_Destroy(_Underlying *_this);
                    __MR_OverloadedOps_D_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_D() {Dispose(false);}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_D() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_D_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.OverloadedOps.D._Underlying *__MR_OverloadedOps_D_DefaultConstruct();
                    _UnderlyingPtr = __MR_OverloadedOps_D_DefaultConstruct();
                }

                /// Generated from constructor `MR::OverloadedOps::D::D`.
                public unsafe Const_D(MR.CS.OverloadedOps.Const_D _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_D_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.OverloadedOps.D._Underlying *__MR_OverloadedOps_D_ConstructFromAnother(MR.CS.OverloadedOps.D._Underlying *_other);
                    _UnderlyingPtr = __MR_OverloadedOps_D_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// Generated from method `MR::OverloadedOps::D::operator*`.
                public unsafe int Deref()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_deref_const_MR_OverloadedOps_D_ref", ExactSpelling = true)]
                    extern static int __MR_C_deref_const_MR_OverloadedOps_D_ref(_Underlying *_this);
                    return __MR_C_deref_const_MR_OverloadedOps_D_ref(_UnderlyingPtr);
                }

                /// Generated from function `MR::OverloadedOps::operator+`.
                public static unsafe int operator+(MR.CS.OverloadedOps.Const_D _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_pos_const_MR_OverloadedOps_D_ref", ExactSpelling = true)]
                    extern static int __MR_C_pos_const_MR_OverloadedOps_D_ref(MR.CS.OverloadedOps.Const_D._Underlying *_1);
                    return __MR_C_pos_const_MR_OverloadedOps_D_ref(_1._UnderlyingPtr);
                }
            }

            /// Generated from class `MR::OverloadedOps::D`.
            /// This is the non-const half of the class.
            public class D : Const_D
            {
                internal unsafe D(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe D() : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_D_DefaultConstruct", ExactSpelling = true)]
                    extern static MR.CS.OverloadedOps.D._Underlying *__MR_OverloadedOps_D_DefaultConstruct();
                    _UnderlyingPtr = __MR_OverloadedOps_D_DefaultConstruct();
                }

                /// Generated from constructor `MR::OverloadedOps::D::D`.
                public unsafe D(MR.CS.OverloadedOps.Const_D _other) : this(null, is_owning: true)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_D_ConstructFromAnother", ExactSpelling = true)]
                    extern static MR.CS.OverloadedOps.D._Underlying *__MR_OverloadedOps_D_ConstructFromAnother(MR.CS.OverloadedOps.D._Underlying *_other);
                    _UnderlyingPtr = __MR_OverloadedOps_D_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// Generated from method `MR::OverloadedOps::D::operator=`.
                public unsafe MR.CS.OverloadedOps.D Assign(MR.CS.OverloadedOps.Const_D _other)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_D_AssignFromAnother", ExactSpelling = true)]
                    extern static MR.CS.OverloadedOps.D._Underlying *__MR_OverloadedOps_D_AssignFromAnother(_Underlying *_this, MR.CS.OverloadedOps.D._Underlying *_other);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_OverloadedOps_D_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }

                // Disambiguating the names.
                /// Generated from method `MR::OverloadedOps::D::operator*`.
                public unsafe new int Deref()
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_deref_MR_OverloadedOps_D_ref", ExactSpelling = true)]
                    extern static int __MR_C_deref_MR_OverloadedOps_D_ref(_Underlying *_this);
                    return __MR_C_deref_MR_OverloadedOps_D_ref(_UnderlyingPtr);
                }

                /// Generated from function `MR::OverloadedOps::operator+`.
                public static unsafe int operator+(MR.CS.OverloadedOps.D _1)
                {
                    [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_pos_MR_OverloadedOps_D_ref", ExactSpelling = true)]
                    extern static int __MR_C_pos_MR_OverloadedOps_D_ref(MR.CS.OverloadedOps.D._Underlying *_1);
                    return __MR_C_pos_MR_OverloadedOps_D_ref(_1._UnderlyingPtr);
                }
            }

            /// This is used for optional parameters of class `D` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_D`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `D`/`Const_D` directly.
            public class _InOptMut_D
            {
                public D? Opt;

                public _InOptMut_D() {}
                public _InOptMut_D(D value) {Opt = value;}
                public static implicit operator _InOptMut_D(D value) {return new(value);}
            }

            /// This is used for optional parameters of class `D` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_D`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `D`/`Const_D` to pass it to the function.
            public class _InOptConst_D
            {
                public Const_D? Opt;

                public _InOptConst_D() {}
                public _InOptConst_D(Const_D value) {Opt = value;}
                public static implicit operator _InOptConst_D(Const_D value) {return new(value);}
            }
        }
    }
}
