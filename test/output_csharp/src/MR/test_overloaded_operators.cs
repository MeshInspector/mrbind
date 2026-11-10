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

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    __MR_OverloadedOps_A_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_A() {Dispose(false);}

                internal unsafe Const_A(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                // Since we have a custom assignment, we also need a custom copy ctor to avoid the deprecation warning.
                /// Generated from constructor `MR::OverloadedOps::A::A`.
                public unsafe Const_A(MR.CS.OverloadedOps.Const_A _other) : this(null, is_owning: true)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_OverloadedOps_A_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                // Since we have a custom assignment, we also need a custom copy ctor to avoid the deprecation warning.
                /// Generated from constructor `MR::OverloadedOps::A::A`.
                public Const_A(A _other) : this((Const_A)_other) {}

                // Pre-increment.
                /// Generated from method `MR::OverloadedOps::A::operator++`.
                public static unsafe A operator++(MR.CS.OverloadedOps.Const_A _this)
                {
                    A __this_copy = new(_this);
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_incr_MR_OverloadedOps_A(__this_copy._UnderlyingPtr);
                    int __ret = __c_ret;
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __this_copy;
                }

                // Pre-decrement.
                /// Generated from method `MR::OverloadedOps::A::operator--`.
                public static unsafe A operator--(MR.CS.OverloadedOps.Const_A _this)
                {
                    A __this_copy = new(_this);
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_decr_MR_OverloadedOps_A(__this_copy._UnderlyingPtr);
                    int __ret = __c_ret;
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __this_copy;
                }

                // DllImport:

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_decr_MR_OverloadedOps_A", ExactSpelling = true)]
                extern static unsafe int __MR_C_decr_MR_OverloadedOps_A(MR.CS.OverloadedOps.Const_A._Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_incr_MR_OverloadedOps_A", ExactSpelling = true)]
                extern static unsafe int __MR_C_incr_MR_OverloadedOps_A(MR.CS.OverloadedOps.Const_A._Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_A_ConstructFromAnother", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.A._Underlying *__MR_OverloadedOps_A_ConstructFromAnother(MR.CS.OverloadedOps.A._Underlying *_other);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_A_Destroy", ExactSpelling = true)]
                extern static unsafe void __MR_OverloadedOps_A_Destroy(_Underlying *_this);
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
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_OverloadedOps_A_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                // Since we have a custom assignment, we also need a custom copy ctor to avoid the deprecation warning.
                /// Generated from constructor `MR::OverloadedOps::A::A`.
                public A(A _other) : this((Const_A)_other) {}

                // Assign.
                /// Generated from method `MR::OverloadedOps::A::operator=`.
                public unsafe int Assign(MR.CS.OverloadedOps.Const_A _other)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_OverloadedOps_A_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Unary plus.
                /// Generated from method `MR::OverloadedOps::A::operator+`.
                public static unsafe int operator+(MR.CS.OverloadedOps.A _this)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_pos_MR_OverloadedOps_A(_this._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Binary plus.
                /// Generated from method `MR::OverloadedOps::A::operator+`.
                public static unsafe int operator+(MR.CS.OverloadedOps.A _this, MR.CS.OverloadedOps.Const_A _1)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_add_MR_OverloadedOps_A(_this._UnderlyingPtr, _1._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Unary minus.
                /// Generated from method `MR::OverloadedOps::A::operator-`.
                public static unsafe int operator-(MR.CS.OverloadedOps.A _this)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_neg_MR_OverloadedOps_A(_this._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Binary minus.
                /// Generated from method `MR::OverloadedOps::A::operator-`.
                public static unsafe int operator-(MR.CS.OverloadedOps.A _this, MR.CS.OverloadedOps.Const_A _1)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_sub_MR_OverloadedOps_A(_this._UnderlyingPtr, _1._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Dereference (unary star).
                /// Generated from method `MR::OverloadedOps::A::operator*`.
                public unsafe int Deref()
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_deref_MR_OverloadedOps_A(_UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Multiply (binary star).
                /// Generated from method `MR::OverloadedOps::A::operator*`.
                public static unsafe int operator*(MR.CS.OverloadedOps.A _this, MR.CS.OverloadedOps.Const_A _1)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_mul_MR_OverloadedOps_A(_this._UnderlyingPtr, _1._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Divide.
                /// Generated from method `MR::OverloadedOps::A::operator/`.
                public static unsafe int operator/(MR.CS.OverloadedOps.A _this, MR.CS.OverloadedOps.Const_A _1)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_div_MR_OverloadedOps_A(_this._UnderlyingPtr, _1._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Modulo.
                /// Generated from method `MR::OverloadedOps::A::operator%`.
                public static unsafe int operator%(MR.CS.OverloadedOps.A _this, MR.CS.OverloadedOps.Const_A _1)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_mod_MR_OverloadedOps_A(_this._UnderlyingPtr, _1._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Bit xor.
                /// Generated from method `MR::OverloadedOps::A::operator^`.
                public static unsafe int operator^(MR.CS.OverloadedOps.A _this, MR.CS.OverloadedOps.Const_A _1)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_xor_MR_OverloadedOps_A(_this._UnderlyingPtr, _1._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Bit and.
                /// Generated from method `MR::OverloadedOps::A::operator&`.
                public static unsafe int operator&(MR.CS.OverloadedOps.A _this, MR.CS.OverloadedOps.Const_A _1)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_bitand_MR_OverloadedOps_A(_this._UnderlyingPtr, _1._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Bit or.
                /// Generated from method `MR::OverloadedOps::A::operator|`.
                public static unsafe int operator|(MR.CS.OverloadedOps.A _this, MR.CS.OverloadedOps.Const_A _1)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_bitor_MR_OverloadedOps_A(_this._UnderlyingPtr, _1._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Bit negate.
                /// Generated from method `MR::OverloadedOps::A::operator~`.
                public static unsafe int operator~(MR.CS.OverloadedOps.A _this)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_compl_MR_OverloadedOps_A(_this._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Boolean negate.
                /// Generated from method `MR::OverloadedOps::A::operator!`.
                public static unsafe int operator!(MR.CS.OverloadedOps.A _this)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_not_MR_OverloadedOps_A(_this._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Less.
                /// Generated from method `MR::OverloadedOps::A::operator<`.
                public unsafe int Less(MR.CS.OverloadedOps.Const_A _1)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_less_MR_OverloadedOps_A(_UnderlyingPtr, _1._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Greater.
                /// Generated from method `MR::OverloadedOps::A::operator>`.
                public unsafe int Greater(MR.CS.OverloadedOps.Const_A _1)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_greater_MR_OverloadedOps_A(_UnderlyingPtr, _1._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Plus assign.
                /// Generated from method `MR::OverloadedOps::A::operator+=`.
                public unsafe int AddAssign(MR.CS.OverloadedOps.Const_A _1)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_OverloadedOps_A_add_assign(_UnderlyingPtr, _1._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Minus assign.
                /// Generated from method `MR::OverloadedOps::A::operator-=`.
                public unsafe int SubAssign(MR.CS.OverloadedOps.Const_A _1)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_OverloadedOps_A_sub_assign(_UnderlyingPtr, _1._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Multiply assign.
                /// Generated from method `MR::OverloadedOps::A::operator*=`.
                public unsafe int MulAssign(MR.CS.OverloadedOps.Const_A _1)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_OverloadedOps_A_mul_assign(_UnderlyingPtr, _1._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Divide assign.
                /// Generated from method `MR::OverloadedOps::A::operator/=`.
                public unsafe int DivAssign(MR.CS.OverloadedOps.Const_A _1)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_OverloadedOps_A_div_assign(_UnderlyingPtr, _1._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Modulo assign.
                /// Generated from method `MR::OverloadedOps::A::operator%=`.
                public unsafe int ModAssign(MR.CS.OverloadedOps.Const_A _1)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_OverloadedOps_A_mod_assign(_UnderlyingPtr, _1._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Bit xor assign.
                /// Generated from method `MR::OverloadedOps::A::operator^=`.
                public unsafe int XorAssign(MR.CS.OverloadedOps.Const_A _1)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_OverloadedOps_A_xor_assign(_UnderlyingPtr, _1._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Bit and assign.
                /// Generated from method `MR::OverloadedOps::A::operator&=`.
                public unsafe int BitandAssign(MR.CS.OverloadedOps.Const_A _1)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_OverloadedOps_A_bitand_assign(_UnderlyingPtr, _1._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Bit or assign.
                /// Generated from method `MR::OverloadedOps::A::operator|=`.
                public unsafe int BitorAssign(MR.CS.OverloadedOps.Const_A _1)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_OverloadedOps_A_bitor_assign(_UnderlyingPtr, _1._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Left shift.
                /// Generated from method `MR::OverloadedOps::A::operator<<`.
                public static unsafe int operator<<(MR.CS.OverloadedOps.A _this, MR.CS.OverloadedOps.Const_A _1)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_lshift_MR_OverloadedOps_A(_this._UnderlyingPtr, _1._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Right shift.
                /// Generated from method `MR::OverloadedOps::A::operator>>`.
                public static unsafe int operator>>(MR.CS.OverloadedOps.A _this, MR.CS.OverloadedOps.Const_A _1)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_rshift_MR_OverloadedOps_A(_this._UnderlyingPtr, _1._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Left shift assign.
                /// Generated from method `MR::OverloadedOps::A::operator<<=`.
                public unsafe int LshiftAssign(MR.CS.OverloadedOps.Const_A _1)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_OverloadedOps_A_lshift_assign(_UnderlyingPtr, _1._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Right shift assign.
                /// Generated from method `MR::OverloadedOps::A::operator>>=`.
                public unsafe int RshiftAssign(MR.CS.OverloadedOps.Const_A _1)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_OverloadedOps_A_rshift_assign(_UnderlyingPtr, _1._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Equal.
                /// Generated from method `MR::OverloadedOps::A::operator==`.
                public unsafe int Equal(MR.CS.OverloadedOps.Const_A _1)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_equal_MR_OverloadedOps_A(_UnderlyingPtr, _1._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Not equal.
                /// Generated from method `MR::OverloadedOps::A::operator!=`.
                public unsafe int NotEqual(MR.CS.OverloadedOps.Const_A _1)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_not_equal_MR_OverloadedOps_A(_UnderlyingPtr, _1._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Less equal.
                /// Generated from method `MR::OverloadedOps::A::operator<=`.
                public unsafe int LessEqual(MR.CS.OverloadedOps.Const_A _1)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_less_equal_MR_OverloadedOps_A(_UnderlyingPtr, _1._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Greater equal.
                /// Generated from method `MR::OverloadedOps::A::operator>=`.
                public unsafe int GreaterEqual(MR.CS.OverloadedOps.Const_A _1)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_greater_equal_MR_OverloadedOps_A(_UnderlyingPtr, _1._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Compare three way.
                /// Generated from method `MR::OverloadedOps::A::operator<=>`.
                public unsafe int CompareThreeWay(MR.CS.OverloadedOps.Const_A _1)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_compare_three_way_MR_OverloadedOps_A(_UnderlyingPtr, _1._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // And.
                /// Generated from method `MR::OverloadedOps::A::operator&&`.
                public unsafe int And(MR.CS.OverloadedOps.Const_A _1)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_and_MR_OverloadedOps_A(_UnderlyingPtr, _1._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Or.
                /// Generated from method `MR::OverloadedOps::A::operator||`.
                public unsafe int Or(MR.CS.OverloadedOps.Const_A _1)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_or_MR_OverloadedOps_A(_UnderlyingPtr, _1._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Pre-increment.
                /// Generated from method `MR::OverloadedOps::A::operator++`.
                public unsafe void Incr()
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_incr_MR_OverloadedOps_A(_UnderlyingPtr);
                    int __ret = __c_ret;
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                // Pre-decrement.
                /// Generated from method `MR::OverloadedOps::A::operator--`.
                public unsafe void Decr()
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_decr_MR_OverloadedOps_A(_UnderlyingPtr);
                    int __ret = __c_ret;
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                // Comma.
                /// Generated from method `MR::OverloadedOps::A::operator,`.
                public unsafe int Comma(MR.CS.OverloadedOps.Const_A _1)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_comma_MR_OverloadedOps_A(_UnderlyingPtr, _1._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Arrow star.
                /// Generated from method `MR::OverloadedOps::A::operator->*`.
                public unsafe int ArrowStar(MR.CS.OverloadedOps.Const_A _1)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_OverloadedOps_A_arrow_star(_UnderlyingPtr, _1._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Arrow.
                /// Generated from method `MR::OverloadedOps::A::operator->`.
                public unsafe int Arrow()
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_OverloadedOps_A_arrow(_UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Function call.
                /// Generated from method `MR::OverloadedOps::A::operator()`.
                public unsafe int Call(MR.CS.OverloadedOps.Const_A _1)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_OverloadedOps_A_call(_UnderlyingPtr, _1._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Indexing.
                /// Generated from method `MR::OverloadedOps::A::operator[]`.
                public unsafe int this[MR.CS.OverloadedOps.Const_A _1]
                {
                    get
                    {
                        MR.CS.Misc._Exceptions.Prepare();
                        var __c_ret = __MR_OverloadedOps_A_index(_UnderlyingPtr, _1._UnderlyingPtr);
                        MR.CS.Misc._Exceptions.ThrowIfNeeded();
                        return __c_ret;
                    }
                }

                // DllImport:

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_add_MR_OverloadedOps_A", ExactSpelling = true)]
                extern static unsafe int __MR_C_add_MR_OverloadedOps_A(MR.CS.OverloadedOps.A._Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_and_MR_OverloadedOps_A", ExactSpelling = true)]
                extern static unsafe int __MR_C_and_MR_OverloadedOps_A(_Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_bitand_MR_OverloadedOps_A", ExactSpelling = true)]
                extern static unsafe int __MR_C_bitand_MR_OverloadedOps_A(MR.CS.OverloadedOps.A._Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_bitor_MR_OverloadedOps_A", ExactSpelling = true)]
                extern static unsafe int __MR_C_bitor_MR_OverloadedOps_A(MR.CS.OverloadedOps.A._Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_comma_MR_OverloadedOps_A", ExactSpelling = true)]
                extern static unsafe int __MR_C_comma_MR_OverloadedOps_A(_Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_compare_three_way_MR_OverloadedOps_A", ExactSpelling = true)]
                extern static unsafe int __MR_C_compare_three_way_MR_OverloadedOps_A(_Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_compl_MR_OverloadedOps_A", ExactSpelling = true)]
                extern static unsafe int __MR_C_compl_MR_OverloadedOps_A(MR.CS.OverloadedOps.A._Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_decr_MR_OverloadedOps_A", ExactSpelling = true)]
                extern static unsafe int __MR_C_decr_MR_OverloadedOps_A(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_deref_MR_OverloadedOps_A", ExactSpelling = true)]
                extern static unsafe int __MR_C_deref_MR_OverloadedOps_A(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_div_MR_OverloadedOps_A", ExactSpelling = true)]
                extern static unsafe int __MR_C_div_MR_OverloadedOps_A(MR.CS.OverloadedOps.A._Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_equal_MR_OverloadedOps_A", ExactSpelling = true)]
                extern static unsafe int __MR_C_equal_MR_OverloadedOps_A(_Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_greater_MR_OverloadedOps_A", ExactSpelling = true)]
                extern static unsafe int __MR_C_greater_MR_OverloadedOps_A(_Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_greater_equal_MR_OverloadedOps_A", ExactSpelling = true)]
                extern static unsafe int __MR_C_greater_equal_MR_OverloadedOps_A(_Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_incr_MR_OverloadedOps_A", ExactSpelling = true)]
                extern static unsafe int __MR_C_incr_MR_OverloadedOps_A(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_less_MR_OverloadedOps_A", ExactSpelling = true)]
                extern static unsafe int __MR_C_less_MR_OverloadedOps_A(_Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_less_equal_MR_OverloadedOps_A", ExactSpelling = true)]
                extern static unsafe int __MR_C_less_equal_MR_OverloadedOps_A(_Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_lshift_MR_OverloadedOps_A", ExactSpelling = true)]
                extern static unsafe int __MR_C_lshift_MR_OverloadedOps_A(MR.CS.OverloadedOps.A._Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_mod_MR_OverloadedOps_A", ExactSpelling = true)]
                extern static unsafe int __MR_C_mod_MR_OverloadedOps_A(MR.CS.OverloadedOps.A._Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_mul_MR_OverloadedOps_A", ExactSpelling = true)]
                extern static unsafe int __MR_C_mul_MR_OverloadedOps_A(MR.CS.OverloadedOps.A._Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_neg_MR_OverloadedOps_A", ExactSpelling = true)]
                extern static unsafe int __MR_C_neg_MR_OverloadedOps_A(MR.CS.OverloadedOps.A._Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_not_MR_OverloadedOps_A", ExactSpelling = true)]
                extern static unsafe int __MR_C_not_MR_OverloadedOps_A(MR.CS.OverloadedOps.A._Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_not_equal_MR_OverloadedOps_A", ExactSpelling = true)]
                extern static unsafe int __MR_C_not_equal_MR_OverloadedOps_A(_Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_or_MR_OverloadedOps_A", ExactSpelling = true)]
                extern static unsafe int __MR_C_or_MR_OverloadedOps_A(_Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_pos_MR_OverloadedOps_A", ExactSpelling = true)]
                extern static unsafe int __MR_C_pos_MR_OverloadedOps_A(MR.CS.OverloadedOps.A._Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_rshift_MR_OverloadedOps_A", ExactSpelling = true)]
                extern static unsafe int __MR_C_rshift_MR_OverloadedOps_A(MR.CS.OverloadedOps.A._Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_sub_MR_OverloadedOps_A", ExactSpelling = true)]
                extern static unsafe int __MR_C_sub_MR_OverloadedOps_A(MR.CS.OverloadedOps.A._Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_xor_MR_OverloadedOps_A", ExactSpelling = true)]
                extern static unsafe int __MR_C_xor_MR_OverloadedOps_A(MR.CS.OverloadedOps.A._Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_A_AssignFromAnother", ExactSpelling = true)]
                extern static unsafe int __MR_OverloadedOps_A_AssignFromAnother(_Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_other);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_A_ConstructFromAnother", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.A._Underlying *__MR_OverloadedOps_A_ConstructFromAnother(MR.CS.OverloadedOps.A._Underlying *_other);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_A_add_assign", ExactSpelling = true)]
                extern static unsafe int __MR_OverloadedOps_A_add_assign(_Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_A_arrow", ExactSpelling = true)]
                extern static unsafe int __MR_OverloadedOps_A_arrow(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_A_arrow_star", ExactSpelling = true)]
                extern static unsafe int __MR_OverloadedOps_A_arrow_star(_Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_A_bitand_assign", ExactSpelling = true)]
                extern static unsafe int __MR_OverloadedOps_A_bitand_assign(_Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_A_bitor_assign", ExactSpelling = true)]
                extern static unsafe int __MR_OverloadedOps_A_bitor_assign(_Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_A_call", ExactSpelling = true)]
                extern static unsafe int __MR_OverloadedOps_A_call(_Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_A_div_assign", ExactSpelling = true)]
                extern static unsafe int __MR_OverloadedOps_A_div_assign(_Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_A_index", ExactSpelling = true)]
                extern static unsafe int __MR_OverloadedOps_A_index(_Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_A_lshift_assign", ExactSpelling = true)]
                extern static unsafe int __MR_OverloadedOps_A_lshift_assign(_Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_A_mod_assign", ExactSpelling = true)]
                extern static unsafe int __MR_OverloadedOps_A_mod_assign(_Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_A_mul_assign", ExactSpelling = true)]
                extern static unsafe int __MR_OverloadedOps_A_mul_assign(_Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_A_rshift_assign", ExactSpelling = true)]
                extern static unsafe int __MR_OverloadedOps_A_rshift_assign(_Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_A_sub_assign", ExactSpelling = true)]
                extern static unsafe int __MR_OverloadedOps_A_sub_assign(_Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_A_xor_assign", ExactSpelling = true)]
                extern static unsafe int __MR_OverloadedOps_A_xor_assign(_Underlying *_this, MR.CS.OverloadedOps.A._Underlying *_1);
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

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    __MR_OverloadedOps_B_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_B() {Dispose(false);}

                internal unsafe Const_B(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_B() : this(null, is_owning: true)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_OverloadedOps_B_DefaultConstruct();
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Generated from constructor `MR::OverloadedOps::B::B`.
                public unsafe Const_B(MR.CS.OverloadedOps.Const_B _other) : this(null, is_owning: true)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_OverloadedOps_B_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Generated from constructor `MR::OverloadedOps::B::B`.
                public Const_B(B _other) : this((Const_B)_other) {}

                // Unary plus.
                /// Generated from function `MR::OverloadedOps::operator+`.
                public static unsafe int operator+(Const_B _1)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_pos_MR_OverloadedOps_B(_1._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Binary plus.
                /// Generated from function `MR::OverloadedOps::operator+`.
                public static unsafe int operator+(Const_B _1, MR.CS.OverloadedOps.Const_B _2)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_add_MR_OverloadedOps_B(_1._UnderlyingPtr, _2._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Unary minus.
                /// Generated from function `MR::OverloadedOps::operator-`.
                public static unsafe int operator-(Const_B _1)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_neg_MR_OverloadedOps_B(_1._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Binary minus.
                /// Generated from function `MR::OverloadedOps::operator-`.
                public static unsafe int operator-(Const_B _1, MR.CS.OverloadedOps.Const_B _2)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_sub_MR_OverloadedOps_B(_1._UnderlyingPtr, _2._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Dereference (unary star).
                /// Generated from function `MR::OverloadedOps::operator*`.
                public unsafe int Deref()
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_deref_MR_OverloadedOps_B(_UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Multiply (binary star).
                /// Generated from function `MR::OverloadedOps::operator*`.
                public static unsafe int operator*(Const_B _1, MR.CS.OverloadedOps.Const_B _2)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_mul_MR_OverloadedOps_B(_1._UnderlyingPtr, _2._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Divide.
                /// Generated from function `MR::OverloadedOps::operator/`.
                public static unsafe int operator/(Const_B _1, MR.CS.OverloadedOps.Const_B _2)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_div_MR_OverloadedOps_B(_1._UnderlyingPtr, _2._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Modulo.
                /// Generated from function `MR::OverloadedOps::operator%`.
                public static unsafe int operator%(Const_B _1, MR.CS.OverloadedOps.Const_B _2)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_mod_MR_OverloadedOps_B(_1._UnderlyingPtr, _2._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Bit xor.
                /// Generated from function `MR::OverloadedOps::operator^`.
                public static unsafe int operator^(Const_B _1, MR.CS.OverloadedOps.Const_B _2)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_xor_MR_OverloadedOps_B(_1._UnderlyingPtr, _2._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Bit and.
                /// Generated from function `MR::OverloadedOps::operator&`.
                public static unsafe int operator&(Const_B _1, MR.CS.OverloadedOps.Const_B _2)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_bitand_MR_OverloadedOps_B(_1._UnderlyingPtr, _2._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Bit or.
                /// Generated from function `MR::OverloadedOps::operator|`.
                public static unsafe int operator|(Const_B _1, MR.CS.OverloadedOps.Const_B _2)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_bitor_MR_OverloadedOps_B(_1._UnderlyingPtr, _2._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Bit negate.
                /// Generated from function `MR::OverloadedOps::operator~`.
                public static unsafe int operator~(Const_B _1)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_compl_MR_OverloadedOps_B(_1._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Boolean negate.
                /// Generated from function `MR::OverloadedOps::operator!`.
                public static unsafe int operator!(Const_B _1)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_not_MR_OverloadedOps_B(_1._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Assign.
                // friend int operator=(B, B); // Can't be a free function.
                // Less.
                /// Generated from function `MR::OverloadedOps::operator<`.
                public unsafe int Less(MR.CS.OverloadedOps.Const_B _2)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_less_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Greater.
                /// Generated from function `MR::OverloadedOps::operator>`.
                public unsafe int Greater(MR.CS.OverloadedOps.Const_B _2)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_greater_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Plus assign.
                /// Generated from function `MR::OverloadedOps::operator+=`.
                public unsafe int AddAssign(MR.CS.OverloadedOps.Const_B _2)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_add_assign_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Minus assign.
                /// Generated from function `MR::OverloadedOps::operator-=`.
                public unsafe int SubAssign(MR.CS.OverloadedOps.Const_B _2)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_sub_assign_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Multiply assign.
                /// Generated from function `MR::OverloadedOps::operator*=`.
                public unsafe int MulAssign(MR.CS.OverloadedOps.Const_B _2)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_mul_assign_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Divide assign.
                /// Generated from function `MR::OverloadedOps::operator/=`.
                public unsafe int DivAssign(MR.CS.OverloadedOps.Const_B _2)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_div_assign_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Modulo assign.
                /// Generated from function `MR::OverloadedOps::operator%=`.
                public unsafe int ModAssign(MR.CS.OverloadedOps.Const_B _2)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_mod_assign_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Bit xor assign.
                /// Generated from function `MR::OverloadedOps::operator^=`.
                public unsafe int XorAssign(MR.CS.OverloadedOps.Const_B _2)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_xor_assign_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Bit and assign.
                /// Generated from function `MR::OverloadedOps::operator&=`.
                public unsafe int BitandAssign(MR.CS.OverloadedOps.Const_B _2)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_bitand_assign_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Bit or assign.
                /// Generated from function `MR::OverloadedOps::operator|=`.
                public unsafe int BitorAssign(MR.CS.OverloadedOps.Const_B _2)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_bitor_assign_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Left shift.
                /// Generated from function `MR::OverloadedOps::operator<<`.
                public static unsafe int operator<<(Const_B _1, MR.CS.OverloadedOps.Const_B _2)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_lshift_MR_OverloadedOps_B(_1._UnderlyingPtr, _2._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Right shift.
                /// Generated from function `MR::OverloadedOps::operator>>`.
                public static unsafe int operator>>(Const_B _1, MR.CS.OverloadedOps.Const_B _2)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_rshift_MR_OverloadedOps_B(_1._UnderlyingPtr, _2._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Left shift assign.
                /// Generated from function `MR::OverloadedOps::operator<<=`.
                public unsafe int LshiftAssign(MR.CS.OverloadedOps.Const_B _2)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_lshift_assign_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Right shift assign.
                /// Generated from function `MR::OverloadedOps::operator>>=`.
                public unsafe int RshiftAssign(MR.CS.OverloadedOps.Const_B _2)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_rshift_assign_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Equal.
                /// Generated from function `MR::OverloadedOps::operator==`.
                public unsafe int Equal(MR.CS.OverloadedOps.Const_B _2)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_equal_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Not equal.
                /// Generated from function `MR::OverloadedOps::operator!=`.
                public unsafe int NotEqual(MR.CS.OverloadedOps.Const_B _2)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_not_equal_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Less equal.
                /// Generated from function `MR::OverloadedOps::operator<=`.
                public unsafe int LessEqual(MR.CS.OverloadedOps.Const_B _2)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_less_equal_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Greater equal.
                /// Generated from function `MR::OverloadedOps::operator>=`.
                public unsafe int GreaterEqual(MR.CS.OverloadedOps.Const_B _2)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_greater_equal_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Compare three way.
                /// Generated from function `MR::OverloadedOps::operator<=>`.
                public unsafe int CompareThreeWay(MR.CS.OverloadedOps.Const_B _2)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_compare_three_way_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // And.
                /// Generated from function `MR::OverloadedOps::operator&&`.
                public unsafe int And(MR.CS.OverloadedOps.Const_B _2)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_and_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Or.
                /// Generated from function `MR::OverloadedOps::operator||`.
                public unsafe int Or(MR.CS.OverloadedOps.Const_B _2)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_or_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Pre-increment.
                /// Generated from function `MR::OverloadedOps::operator++`.
                public unsafe void Incr()
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_incr_MR_OverloadedOps_B(_UnderlyingPtr);
                    int __ret = __c_ret;
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                // Pre-increment.
                /// Generated from function `MR::OverloadedOps::operator++`.
                public static unsafe B operator++(MR.CS.OverloadedOps.Const_B _1)
                {
                    B __this_copy = new(_1);
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_incr_MR_OverloadedOps_B(__this_copy._UnderlyingPtr);
                    int __ret = __c_ret;
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __this_copy;
                }

                // Pre-decrement.
                /// Generated from function `MR::OverloadedOps::operator--`.
                public unsafe void Decr()
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_decr_MR_OverloadedOps_B(_UnderlyingPtr);
                    int __ret = __c_ret;
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                // Pre-decrement.
                /// Generated from function `MR::OverloadedOps::operator--`.
                public static unsafe B operator--(MR.CS.OverloadedOps.Const_B _1)
                {
                    B __this_copy = new(_1);
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_decr_MR_OverloadedOps_B(__this_copy._UnderlyingPtr);
                    int __ret = __c_ret;
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __this_copy;
                }

                // Comma.
                /// Generated from function `MR::OverloadedOps::operator,`.
                public unsafe int Comma(MR.CS.OverloadedOps.Const_B _2)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_comma_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Arrow star.
                /// Generated from function `MR::OverloadedOps::operator->*`.
                public unsafe int ArrowStar(MR.CS.OverloadedOps.Const_B _2)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_arrow_star_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // DllImport:

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_add_MR_OverloadedOps_B", ExactSpelling = true)]
                extern static unsafe int __MR_C_add_MR_OverloadedOps_B(MR.CS.OverloadedOps.B._Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_add_assign_MR_OverloadedOps_B", ExactSpelling = true)]
                extern static unsafe int __MR_C_add_assign_MR_OverloadedOps_B(_Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_and_MR_OverloadedOps_B", ExactSpelling = true)]
                extern static unsafe int __MR_C_and_MR_OverloadedOps_B(_Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_arrow_star_MR_OverloadedOps_B", ExactSpelling = true)]
                extern static unsafe int __MR_C_arrow_star_MR_OverloadedOps_B(_Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_bitand_MR_OverloadedOps_B", ExactSpelling = true)]
                extern static unsafe int __MR_C_bitand_MR_OverloadedOps_B(MR.CS.OverloadedOps.B._Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_bitand_assign_MR_OverloadedOps_B", ExactSpelling = true)]
                extern static unsafe int __MR_C_bitand_assign_MR_OverloadedOps_B(_Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_bitor_MR_OverloadedOps_B", ExactSpelling = true)]
                extern static unsafe int __MR_C_bitor_MR_OverloadedOps_B(MR.CS.OverloadedOps.B._Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_bitor_assign_MR_OverloadedOps_B", ExactSpelling = true)]
                extern static unsafe int __MR_C_bitor_assign_MR_OverloadedOps_B(_Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_comma_MR_OverloadedOps_B", ExactSpelling = true)]
                extern static unsafe int __MR_C_comma_MR_OverloadedOps_B(_Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_compare_three_way_MR_OverloadedOps_B", ExactSpelling = true)]
                extern static unsafe int __MR_C_compare_three_way_MR_OverloadedOps_B(_Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_compl_MR_OverloadedOps_B", ExactSpelling = true)]
                extern static unsafe int __MR_C_compl_MR_OverloadedOps_B(MR.CS.OverloadedOps.B._Underlying *_1);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_decr_MR_OverloadedOps_B", ExactSpelling = true)]
                extern static unsafe int __MR_C_decr_MR_OverloadedOps_B(_Underlying *_1);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_deref_MR_OverloadedOps_B", ExactSpelling = true)]
                extern static unsafe int __MR_C_deref_MR_OverloadedOps_B(_Underlying *_1);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_div_MR_OverloadedOps_B", ExactSpelling = true)]
                extern static unsafe int __MR_C_div_MR_OverloadedOps_B(MR.CS.OverloadedOps.B._Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_div_assign_MR_OverloadedOps_B", ExactSpelling = true)]
                extern static unsafe int __MR_C_div_assign_MR_OverloadedOps_B(_Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_equal_MR_OverloadedOps_B", ExactSpelling = true)]
                extern static unsafe int __MR_C_equal_MR_OverloadedOps_B(_Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_greater_MR_OverloadedOps_B", ExactSpelling = true)]
                extern static unsafe int __MR_C_greater_MR_OverloadedOps_B(_Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_greater_equal_MR_OverloadedOps_B", ExactSpelling = true)]
                extern static unsafe int __MR_C_greater_equal_MR_OverloadedOps_B(_Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_incr_MR_OverloadedOps_B", ExactSpelling = true)]
                extern static unsafe int __MR_C_incr_MR_OverloadedOps_B(_Underlying *_1);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_less_MR_OverloadedOps_B", ExactSpelling = true)]
                extern static unsafe int __MR_C_less_MR_OverloadedOps_B(_Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_less_equal_MR_OverloadedOps_B", ExactSpelling = true)]
                extern static unsafe int __MR_C_less_equal_MR_OverloadedOps_B(_Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_lshift_MR_OverloadedOps_B", ExactSpelling = true)]
                extern static unsafe int __MR_C_lshift_MR_OverloadedOps_B(MR.CS.OverloadedOps.B._Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_lshift_assign_MR_OverloadedOps_B", ExactSpelling = true)]
                extern static unsafe int __MR_C_lshift_assign_MR_OverloadedOps_B(_Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_mod_MR_OverloadedOps_B", ExactSpelling = true)]
                extern static unsafe int __MR_C_mod_MR_OverloadedOps_B(MR.CS.OverloadedOps.B._Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_mod_assign_MR_OverloadedOps_B", ExactSpelling = true)]
                extern static unsafe int __MR_C_mod_assign_MR_OverloadedOps_B(_Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_mul_MR_OverloadedOps_B", ExactSpelling = true)]
                extern static unsafe int __MR_C_mul_MR_OverloadedOps_B(MR.CS.OverloadedOps.B._Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_mul_assign_MR_OverloadedOps_B", ExactSpelling = true)]
                extern static unsafe int __MR_C_mul_assign_MR_OverloadedOps_B(_Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_neg_MR_OverloadedOps_B", ExactSpelling = true)]
                extern static unsafe int __MR_C_neg_MR_OverloadedOps_B(MR.CS.OverloadedOps.B._Underlying *_1);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_not_MR_OverloadedOps_B", ExactSpelling = true)]
                extern static unsafe int __MR_C_not_MR_OverloadedOps_B(MR.CS.OverloadedOps.B._Underlying *_1);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_not_equal_MR_OverloadedOps_B", ExactSpelling = true)]
                extern static unsafe int __MR_C_not_equal_MR_OverloadedOps_B(_Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_or_MR_OverloadedOps_B", ExactSpelling = true)]
                extern static unsafe int __MR_C_or_MR_OverloadedOps_B(_Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_pos_MR_OverloadedOps_B", ExactSpelling = true)]
                extern static unsafe int __MR_C_pos_MR_OverloadedOps_B(MR.CS.OverloadedOps.B._Underlying *_1);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_rshift_MR_OverloadedOps_B", ExactSpelling = true)]
                extern static unsafe int __MR_C_rshift_MR_OverloadedOps_B(MR.CS.OverloadedOps.B._Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_rshift_assign_MR_OverloadedOps_B", ExactSpelling = true)]
                extern static unsafe int __MR_C_rshift_assign_MR_OverloadedOps_B(_Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_sub_MR_OverloadedOps_B", ExactSpelling = true)]
                extern static unsafe int __MR_C_sub_MR_OverloadedOps_B(MR.CS.OverloadedOps.B._Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_sub_assign_MR_OverloadedOps_B", ExactSpelling = true)]
                extern static unsafe int __MR_C_sub_assign_MR_OverloadedOps_B(_Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_xor_MR_OverloadedOps_B", ExactSpelling = true)]
                extern static unsafe int __MR_C_xor_MR_OverloadedOps_B(MR.CS.OverloadedOps.B._Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_xor_assign_MR_OverloadedOps_B", ExactSpelling = true)]
                extern static unsafe int __MR_C_xor_assign_MR_OverloadedOps_B(_Underlying *_1, MR.CS.OverloadedOps.B._Underlying *_2);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_B_ConstructFromAnother", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.B._Underlying *__MR_OverloadedOps_B_ConstructFromAnother(MR.CS.OverloadedOps.B._Underlying *_other);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_B_DefaultConstruct", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.B._Underlying *__MR_OverloadedOps_B_DefaultConstruct();

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_B_Destroy", ExactSpelling = true)]
                extern static unsafe void __MR_OverloadedOps_B_Destroy(_Underlying *_this);
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
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_OverloadedOps_B_DefaultConstruct();
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Generated from constructor `MR::OverloadedOps::B::B`.
                public unsafe B(MR.CS.OverloadedOps.Const_B _other) : this(null, is_owning: true)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_OverloadedOps_B_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Generated from constructor `MR::OverloadedOps::B::B`.
                public B(B _other) : this((Const_B)_other) {}

                /// Generated from method `MR::OverloadedOps::B::operator=`.
                public unsafe MR.CS.OverloadedOps.B Assign(MR.CS.OverloadedOps.Const_B _other)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_OverloadedOps_B_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return new(__c_ret, is_owning: false);
                }

                // DllImport:

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_B_AssignFromAnother", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.B._Underlying *__MR_OverloadedOps_B_AssignFromAnother(_Underlying *_this, MR.CS.OverloadedOps.B._Underlying *_other);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_B_ConstructFromAnother", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.B._Underlying *__MR_OverloadedOps_B_ConstructFromAnother(MR.CS.OverloadedOps.B._Underlying *_other);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_B_DefaultConstruct", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.B._Underlying *__MR_OverloadedOps_B_DefaultConstruct();
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

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    __MR_OverloadedOps_C_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_C() {Dispose(false);}

                internal unsafe Const_C(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_C() : this(null, is_owning: true)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_OverloadedOps_C_DefaultConstruct();
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Generated from constructor `MR::OverloadedOps::C::C`.
                public unsafe Const_C(MR.CS.OverloadedOps.Const_C _other) : this(null, is_owning: true)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_OverloadedOps_C_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Generated from constructor `MR::OverloadedOps::C::C`.
                public Const_C(C _other) : this((Const_C)_other) {}

                // If rhs type is same as the lhs one (ignoring cvref), it's not emitted.
                /// Generated from function `MR::OverloadedOps::operator+`.
                public unsafe void Add(MR.CS.OverloadedOps.Const_C _2)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    __MR_C_add_MR_OverloadedOps_C(_UnderlyingPtr, _2._UnderlyingPtr);
                }

                // But different types are printed.
                /// Generated from function `MR::OverloadedOps::operator+`.
                public unsafe void Add(MR.CS.OverloadedOps.Const_B _2)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    __MR_C_add_MR_OverloadedOps_C_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                }

                // DllImport:

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_add_MR_OverloadedOps_C", ExactSpelling = true)]
                extern static unsafe void __MR_C_add_MR_OverloadedOps_C(_Underlying *_1, MR.CS.OverloadedOps.C._Underlying *_2);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_add_MR_OverloadedOps_C_MR_OverloadedOps_B", ExactSpelling = true)]
                extern static unsafe void __MR_C_add_MR_OverloadedOps_C_MR_OverloadedOps_B(_Underlying *_1, MR.CS.OverloadedOps.Const_B._Underlying *_2);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_C_ConstructFromAnother", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.C._Underlying *__MR_OverloadedOps_C_ConstructFromAnother(MR.CS.OverloadedOps.C._Underlying *_other);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_C_DefaultConstruct", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.C._Underlying *__MR_OverloadedOps_C_DefaultConstruct();

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_C_Destroy", ExactSpelling = true)]
                extern static unsafe void __MR_OverloadedOps_C_Destroy(_Underlying *_this);
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
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_OverloadedOps_C_DefaultConstruct();
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Generated from constructor `MR::OverloadedOps::C::C`.
                public unsafe C(MR.CS.OverloadedOps.Const_C _other) : this(null, is_owning: true)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_OverloadedOps_C_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Generated from constructor `MR::OverloadedOps::C::C`.
                public C(C _other) : this((Const_C)_other) {}

                /// Generated from method `MR::OverloadedOps::C::operator=`.
                public unsafe MR.CS.OverloadedOps.C Assign(MR.CS.OverloadedOps.Const_C _other)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_OverloadedOps_C_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return new(__c_ret, is_owning: false);
                }

                // DllImport:

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_C_AssignFromAnother", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.C._Underlying *__MR_OverloadedOps_C_AssignFromAnother(_Underlying *_this, MR.CS.OverloadedOps.C._Underlying *_other);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_C_ConstructFromAnother", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.C._Underlying *__MR_OverloadedOps_C_ConstructFromAnother(MR.CS.OverloadedOps.C._Underlying *_other);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_C_DefaultConstruct", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.C._Underlying *__MR_OverloadedOps_C_DefaultConstruct();
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

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    __MR_OverloadedOps_D_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_D() {Dispose(false);}

                internal unsafe Const_D(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_D() : this(null, is_owning: true)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_OverloadedOps_D_DefaultConstruct();
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Generated from constructor `MR::OverloadedOps::D::D`.
                public unsafe Const_D(MR.CS.OverloadedOps.Const_D _other) : this(null, is_owning: true)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_OverloadedOps_D_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Generated from constructor `MR::OverloadedOps::D::D`.
                public Const_D(D _other) : this((Const_D)_other) {}

                /// Generated from method `MR::OverloadedOps::D::operator*`.
                public unsafe int Deref()
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_deref_const_MR_OverloadedOps_D_ref(_UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                /// Generated from function `MR::OverloadedOps::operator+`.
                public static unsafe int operator+(MR.CS.OverloadedOps.Const_D _1)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_pos_const_MR_OverloadedOps_D_ref(_1._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // DllImport:

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_deref_const_MR_OverloadedOps_D_ref", ExactSpelling = true)]
                extern static unsafe int __MR_C_deref_const_MR_OverloadedOps_D_ref(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_pos_const_MR_OverloadedOps_D_ref", ExactSpelling = true)]
                extern static unsafe int __MR_C_pos_const_MR_OverloadedOps_D_ref(MR.CS.OverloadedOps.Const_D._Underlying *_1);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_D_ConstructFromAnother", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.D._Underlying *__MR_OverloadedOps_D_ConstructFromAnother(MR.CS.OverloadedOps.D._Underlying *_other);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_D_DefaultConstruct", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.D._Underlying *__MR_OverloadedOps_D_DefaultConstruct();

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_D_Destroy", ExactSpelling = true)]
                extern static unsafe void __MR_OverloadedOps_D_Destroy(_Underlying *_this);
            }

            /// Generated from class `MR::OverloadedOps::D`.
            /// This is the non-const half of the class.
            public class D : Const_D
            {
                internal unsafe D(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe D() : this(null, is_owning: true)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_OverloadedOps_D_DefaultConstruct();
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Generated from constructor `MR::OverloadedOps::D::D`.
                public unsafe D(MR.CS.OverloadedOps.Const_D _other) : this(null, is_owning: true)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_OverloadedOps_D_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Generated from constructor `MR::OverloadedOps::D::D`.
                public D(D _other) : this((Const_D)_other) {}

                /// Generated from method `MR::OverloadedOps::D::operator=`.
                public unsafe MR.CS.OverloadedOps.D Assign(MR.CS.OverloadedOps.Const_D _other)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_OverloadedOps_D_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return new(__c_ret, is_owning: false);
                }

                // Disambiguating the names.
                /// Generated from method `MR::OverloadedOps::D::operator*`.
                public unsafe new int Deref()
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_deref_MR_OverloadedOps_D_ref(_UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                /// Generated from function `MR::OverloadedOps::operator+`.
                public static unsafe int operator+(MR.CS.OverloadedOps.D _1)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_pos_MR_OverloadedOps_D_ref(_1._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // DllImport:

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_deref_MR_OverloadedOps_D_ref", ExactSpelling = true)]
                extern static unsafe int __MR_C_deref_MR_OverloadedOps_D_ref(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_pos_MR_OverloadedOps_D_ref", ExactSpelling = true)]
                extern static unsafe int __MR_C_pos_MR_OverloadedOps_D_ref(MR.CS.OverloadedOps.D._Underlying *_1);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_D_AssignFromAnother", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.D._Underlying *__MR_OverloadedOps_D_AssignFromAnother(_Underlying *_this, MR.CS.OverloadedOps.D._Underlying *_other);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_D_ConstructFromAnother", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.D._Underlying *__MR_OverloadedOps_D_ConstructFromAnother(MR.CS.OverloadedOps.D._Underlying *_other);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_D_DefaultConstruct", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.D._Underlying *__MR_OverloadedOps_D_DefaultConstruct();
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

            /// Generated from class `MR::OverloadedOps::E`.
            /// This is the const half of the class.
            public class Const_E : MR.CS.Misc.Object<Const_E>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    __MR_OverloadedOps_E_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_E() {Dispose(false);}

                public unsafe int x
                {
                    get
                    {
                        return *__MR_OverloadedOps_E_Get_x(_UnderlyingPtr);
                    }
                }

                internal unsafe Const_E(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_E() : this(null, is_owning: true)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_OverloadedOps_E_DefaultConstruct();
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Constructs `MR::OverloadedOps::E` elementwise.
                public unsafe Const_E(int x) : this(null, is_owning: true)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_OverloadedOps_E_ConstructFrom(x);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Generated from constructor `MR::OverloadedOps::E::E`.
                public unsafe Const_E(MR.CS.OverloadedOps.Const_E _other) : this(null, is_owning: true)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_OverloadedOps_E_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Generated from constructor `MR::OverloadedOps::E::E`.
                public Const_E(E _other) : this((Const_E)_other) {}

                // Implicitly declares a defaulted `operator==` too. That and the `<=>` give `!=`, `<`, `>`, `<=` and `>=`.
                /// Generated from method `MR::OverloadedOps::E::operator<=>`.
                public unsafe int CompareThreeWay(MR.CS.OverloadedOps.Const_E _1)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_compare_three_way_MR_OverloadedOps_E(_UnderlyingPtr, _1._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // DllImport:

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_compare_three_way_MR_OverloadedOps_E", ExactSpelling = true)]
                extern static unsafe int __MR_C_compare_three_way_MR_OverloadedOps_E(_Underlying *_this, MR.CS.OverloadedOps.Const_E._Underlying *_1);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_E_ConstructFrom", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.E._Underlying *__MR_OverloadedOps_E_ConstructFrom(int x);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_E_ConstructFromAnother", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.E._Underlying *__MR_OverloadedOps_E_ConstructFromAnother(MR.CS.OverloadedOps.E._Underlying *_other);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_E_DefaultConstruct", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.E._Underlying *__MR_OverloadedOps_E_DefaultConstruct();

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_E_Destroy", ExactSpelling = true)]
                extern static unsafe void __MR_OverloadedOps_E_Destroy(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_E_Get_x", ExactSpelling = true)]
                extern static unsafe int *__MR_OverloadedOps_E_Get_x(_Underlying *_this);
            }

            /// Generated from class `MR::OverloadedOps::E`.
            /// This is the non-const half of the class.
            public class E : Const_E
            {
                public new unsafe ref int x
                {
                    get
                    {
                        return ref *__MR_OverloadedOps_E_GetMutable_x(_UnderlyingPtr);
                    }
                }

                internal unsafe E(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe E() : this(null, is_owning: true)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_OverloadedOps_E_DefaultConstruct();
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Constructs `MR::OverloadedOps::E` elementwise.
                public unsafe E(int x) : this(null, is_owning: true)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_OverloadedOps_E_ConstructFrom(x);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Generated from constructor `MR::OverloadedOps::E::E`.
                public unsafe E(MR.CS.OverloadedOps.Const_E _other) : this(null, is_owning: true)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_OverloadedOps_E_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Generated from constructor `MR::OverloadedOps::E::E`.
                public E(E _other) : this((Const_E)_other) {}

                /// Generated from method `MR::OverloadedOps::E::operator=`.
                public unsafe MR.CS.OverloadedOps.E Assign(MR.CS.OverloadedOps.Const_E _other)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_OverloadedOps_E_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return new(__c_ret, is_owning: false);
                }

                // DllImport:

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_E_AssignFromAnother", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.E._Underlying *__MR_OverloadedOps_E_AssignFromAnother(_Underlying *_this, MR.CS.OverloadedOps.E._Underlying *_other);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_E_ConstructFrom", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.E._Underlying *__MR_OverloadedOps_E_ConstructFrom(int x);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_E_ConstructFromAnother", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.E._Underlying *__MR_OverloadedOps_E_ConstructFromAnother(MR.CS.OverloadedOps.E._Underlying *_other);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_E_DefaultConstruct", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.E._Underlying *__MR_OverloadedOps_E_DefaultConstruct();

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_E_GetMutable_x", ExactSpelling = true)]
                extern static unsafe int *__MR_OverloadedOps_E_GetMutable_x(_Underlying *_this);
            }

            /// This is used for optional parameters of class `E` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_E`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `E`/`Const_E` directly.
            public class _InOptMut_E
            {
                public E? Opt;

                public _InOptMut_E() {}
                public _InOptMut_E(E value) {Opt = value;}
                public static implicit operator _InOptMut_E(E value) {return new(value);}
            }

            /// This is used for optional parameters of class `E` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_E`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `E`/`Const_E` to pass it to the function.
            public class _InOptConst_E
            {
                public Const_E? Opt;

                public _InOptConst_E() {}
                public _InOptConst_E(Const_E value) {Opt = value;}
                public static implicit operator _InOptConst_E(Const_E value) {return new(value);}
            }

            /// Generated from class `MR::OverloadedOps::F`.
            /// This is the const half of the class.
            public class Const_F : MR.CS.Misc.Object<Const_F>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    __MR_OverloadedOps_F_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_F() {Dispose(false);}

                public unsafe int x
                {
                    get
                    {
                        return *__MR_OverloadedOps_F_Get_x(_UnderlyingPtr);
                    }
                }

                internal unsafe Const_F(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_F() : this(null, is_owning: true)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_OverloadedOps_F_DefaultConstruct();
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Constructs `MR::OverloadedOps::F` elementwise.
                public unsafe Const_F(int x) : this(null, is_owning: true)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_OverloadedOps_F_ConstructFrom(x);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Generated from constructor `MR::OverloadedOps::F::F`.
                public unsafe Const_F(MR.CS.OverloadedOps.Const_F _other) : this(null, is_owning: true)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_OverloadedOps_F_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Generated from constructor `MR::OverloadedOps::F::F`.
                public Const_F(F _other) : this((Const_F)_other) {}

                /// Generated from method `MR::OverloadedOps::F::operator<=>`.
                public unsafe int CompareThreeWay(MR.CS.OverloadedOps.Const_F _1)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_compare_three_way_MR_OverloadedOps_F(_UnderlyingPtr, _1._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // Declared, so it isn't added once more.
                /// Generated from method `MR::OverloadedOps::F::operator<`.
                public static unsafe bool operator<(MR.CS.OverloadedOps.Const_F _this, MR.CS.OverloadedOps.Const_F _1)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_less_MR_OverloadedOps_F(_this._UnderlyingPtr, _1._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret != 0;
                }

                public static unsafe bool operator>(MR.CS.OverloadedOps.Const_F _this, MR.CS.OverloadedOps.Const_F _1)
                {
                    return _1 < _this;
                }

                public static unsafe bool operator<=(MR.CS.OverloadedOps.Const_F _this, MR.CS.OverloadedOps.Const_F _1)
                {
                    return !(_1 < _this);
                }

                public static unsafe bool operator>=(MR.CS.OverloadedOps.Const_F _this, MR.CS.OverloadedOps.Const_F _1)
                {
                    return !(_this < _1);
                }

                // DllImport:

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_compare_three_way_MR_OverloadedOps_F", ExactSpelling = true)]
                extern static unsafe int __MR_C_compare_three_way_MR_OverloadedOps_F(_Underlying *_this, MR.CS.OverloadedOps.Const_F._Underlying *_1);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_less_MR_OverloadedOps_F", ExactSpelling = true)]
                extern static unsafe byte __MR_C_less_MR_OverloadedOps_F(MR.CS.OverloadedOps.Const_F._Underlying *_this, MR.CS.OverloadedOps.Const_F._Underlying *_1);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_F_ConstructFrom", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.F._Underlying *__MR_OverloadedOps_F_ConstructFrom(int x);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_F_ConstructFromAnother", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.F._Underlying *__MR_OverloadedOps_F_ConstructFromAnother(MR.CS.OverloadedOps.F._Underlying *_other);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_F_DefaultConstruct", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.F._Underlying *__MR_OverloadedOps_F_DefaultConstruct();

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_F_Destroy", ExactSpelling = true)]
                extern static unsafe void __MR_OverloadedOps_F_Destroy(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_F_Get_x", ExactSpelling = true)]
                extern static unsafe int *__MR_OverloadedOps_F_Get_x(_Underlying *_this);
            }

            /// Generated from class `MR::OverloadedOps::F`.
            /// This is the non-const half of the class.
            public class F : Const_F
            {
                public new unsafe ref int x
                {
                    get
                    {
                        return ref *__MR_OverloadedOps_F_GetMutable_x(_UnderlyingPtr);
                    }
                }

                internal unsafe F(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe F() : this(null, is_owning: true)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_OverloadedOps_F_DefaultConstruct();
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Constructs `MR::OverloadedOps::F` elementwise.
                public unsafe F(int x) : this(null, is_owning: true)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_OverloadedOps_F_ConstructFrom(x);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Generated from constructor `MR::OverloadedOps::F::F`.
                public unsafe F(MR.CS.OverloadedOps.Const_F _other) : this(null, is_owning: true)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_OverloadedOps_F_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Generated from constructor `MR::OverloadedOps::F::F`.
                public F(F _other) : this((Const_F)_other) {}

                /// Generated from method `MR::OverloadedOps::F::operator=`.
                public unsafe MR.CS.OverloadedOps.F Assign(MR.CS.OverloadedOps.Const_F _other)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_OverloadedOps_F_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return new(__c_ret, is_owning: false);
                }

                // DllImport:

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_F_AssignFromAnother", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.F._Underlying *__MR_OverloadedOps_F_AssignFromAnother(_Underlying *_this, MR.CS.OverloadedOps.F._Underlying *_other);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_F_ConstructFrom", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.F._Underlying *__MR_OverloadedOps_F_ConstructFrom(int x);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_F_ConstructFromAnother", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.F._Underlying *__MR_OverloadedOps_F_ConstructFromAnother(MR.CS.OverloadedOps.F._Underlying *_other);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_F_DefaultConstruct", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.F._Underlying *__MR_OverloadedOps_F_DefaultConstruct();

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_F_GetMutable_x", ExactSpelling = true)]
                extern static unsafe int *__MR_OverloadedOps_F_GetMutable_x(_Underlying *_this);
            }

            /// This is used for optional parameters of class `F` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_F`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `F`/`Const_F` directly.
            public class _InOptMut_F
            {
                public F? Opt;

                public _InOptMut_F() {}
                public _InOptMut_F(F value) {Opt = value;}
                public static implicit operator _InOptMut_F(F value) {return new(value);}
            }

            /// This is used for optional parameters of class `F` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_F`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `F`/`Const_F` to pass it to the function.
            public class _InOptConst_F
            {
                public Const_F? Opt;

                public _InOptConst_F() {}
                public _InOptConst_F(Const_F value) {Opt = value;}
                public static implicit operator _InOptConst_F(Const_F value) {return new(value);}
            }

            /// Generated from class `MR::OverloadedOps::G`.
            /// This is the const half of the class.
            public class Const_G : MR.CS.Misc.Object<Const_G>, System.IDisposable
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    __MR_OverloadedOps_G_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_G() {Dispose(false);}

                public unsafe int x
                {
                    get
                    {
                        return *__MR_OverloadedOps_G_Get_x(_UnderlyingPtr);
                    }
                }

                internal unsafe Const_G(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_G() : this(null, is_owning: true)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_OverloadedOps_G_DefaultConstruct();
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Constructs `MR::OverloadedOps::G` elementwise.
                public unsafe Const_G(int x) : this(null, is_owning: true)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_OverloadedOps_G_ConstructFrom(x);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Generated from constructor `MR::OverloadedOps::G::G`.
                public unsafe Const_G(MR.CS.OverloadedOps.Const_G _other) : this(null, is_owning: true)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_OverloadedOps_G_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Generated from constructor `MR::OverloadedOps::G::G`.
                public Const_G(G _other) : this((Const_G)_other) {}

                // Not defaulted, so there is no `==`: gives only `<`, `>`, `<=` and `>=`.
                /// Generated from method `MR::OverloadedOps::G::operator<=>`.
                public unsafe int CompareThreeWay(MR.CS.OverloadedOps.Const_G _1)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_compare_three_way_MR_OverloadedOps_G(_UnderlyingPtr, _1._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret;
                }

                // DllImport:

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_compare_three_way_MR_OverloadedOps_G", ExactSpelling = true)]
                extern static unsafe int __MR_C_compare_three_way_MR_OverloadedOps_G(_Underlying *_this, MR.CS.OverloadedOps.Const_G._Underlying *_1);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_G_ConstructFrom", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.G._Underlying *__MR_OverloadedOps_G_ConstructFrom(int x);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_G_ConstructFromAnother", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.G._Underlying *__MR_OverloadedOps_G_ConstructFromAnother(MR.CS.OverloadedOps.G._Underlying *_other);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_G_DefaultConstruct", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.G._Underlying *__MR_OverloadedOps_G_DefaultConstruct();

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_G_Destroy", ExactSpelling = true)]
                extern static unsafe void __MR_OverloadedOps_G_Destroy(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_G_Get_x", ExactSpelling = true)]
                extern static unsafe int *__MR_OverloadedOps_G_Get_x(_Underlying *_this);
            }

            /// Generated from class `MR::OverloadedOps::G`.
            /// This is the non-const half of the class.
            public class G : Const_G
            {
                public new unsafe ref int x
                {
                    get
                    {
                        return ref *__MR_OverloadedOps_G_GetMutable_x(_UnderlyingPtr);
                    }
                }

                internal unsafe G(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe G() : this(null, is_owning: true)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_OverloadedOps_G_DefaultConstruct();
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Constructs `MR::OverloadedOps::G` elementwise.
                public unsafe G(int x) : this(null, is_owning: true)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_OverloadedOps_G_ConstructFrom(x);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Generated from constructor `MR::OverloadedOps::G::G`.
                public unsafe G(MR.CS.OverloadedOps.Const_G _other) : this(null, is_owning: true)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_OverloadedOps_G_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Generated from constructor `MR::OverloadedOps::G::G`.
                public G(G _other) : this((Const_G)_other) {}

                /// Generated from method `MR::OverloadedOps::G::operator=`.
                public unsafe MR.CS.OverloadedOps.G Assign(MR.CS.OverloadedOps.Const_G _other)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_OverloadedOps_G_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return new(__c_ret, is_owning: false);
                }

                // DllImport:

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_G_AssignFromAnother", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.G._Underlying *__MR_OverloadedOps_G_AssignFromAnother(_Underlying *_this, MR.CS.OverloadedOps.G._Underlying *_other);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_G_ConstructFrom", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.G._Underlying *__MR_OverloadedOps_G_ConstructFrom(int x);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_G_ConstructFromAnother", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.G._Underlying *__MR_OverloadedOps_G_ConstructFromAnother(MR.CS.OverloadedOps.G._Underlying *_other);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_G_DefaultConstruct", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.G._Underlying *__MR_OverloadedOps_G_DefaultConstruct();

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_G_GetMutable_x", ExactSpelling = true)]
                extern static unsafe int *__MR_OverloadedOps_G_GetMutable_x(_Underlying *_this);
            }

            /// This is used for optional parameters of class `G` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_G`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `G`/`Const_G` directly.
            public class _InOptMut_G
            {
                public G? Opt;

                public _InOptMut_G() {}
                public _InOptMut_G(G value) {Opt = value;}
                public static implicit operator _InOptMut_G(G value) {return new(value);}
            }

            /// This is used for optional parameters of class `G` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_G`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `G`/`Const_G` to pass it to the function.
            public class _InOptConst_G
            {
                public Const_G? Opt;

                public _InOptConst_G() {}
                public _InOptConst_G(Const_G value) {Opt = value;}
                public static implicit operator _InOptConst_G(Const_G value) {return new(value);}
            }

            /// Generated from class `MR::OverloadedOps::H`.
            /// This is the const half of the class.
            public class Const_H : MR.CS.Misc.Object<Const_H>, System.IDisposable, System.IEquatable<MR.CS.OverloadedOps.Const_H>
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    __MR_OverloadedOps_H_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_H() {Dispose(false);}

                internal unsafe Const_H(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_H() : this(null, is_owning: true)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_OverloadedOps_H_DefaultConstruct();
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Generated from constructor `MR::OverloadedOps::H::H`.
                public unsafe Const_H(MR.CS.OverloadedOps.Const_H _other) : this(null, is_owning: true)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_OverloadedOps_H_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Generated from constructor `MR::OverloadedOps::H::H`.
                public Const_H(H _other) : this((Const_H)_other) {}

                // Gives `!=`.
                /// Generated from method `MR::OverloadedOps::H::operator==`.
                public static unsafe bool operator==(MR.CS.OverloadedOps.Const_H _this, MR.CS.OverloadedOps.Const_H _1)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_equal_MR_OverloadedOps_H(_this._UnderlyingPtr, _1._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret != 0;
                }

                public static unsafe bool operator!=(MR.CS.OverloadedOps.Const_H _this, MR.CS.OverloadedOps.Const_H _1)
                {
                    return !(_this == _1);
                }

                // IEquatable:

                public bool Equals(MR.CS.OverloadedOps.Const_H? _1)
                {
                    if (_1 is null)
                        return false;
                    return this == _1;
                }

                public override bool Equals(object? other)
                {
                    if (other is null)
                        return false;
                    if (other is MR.CS.OverloadedOps.Const_H)
                        return this == (MR.CS.OverloadedOps.Const_H)other;
                    return false;
                }

                // DllImport:

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_equal_MR_OverloadedOps_H", ExactSpelling = true)]
                extern static unsafe byte __MR_C_equal_MR_OverloadedOps_H(MR.CS.OverloadedOps.Const_H._Underlying *_this, MR.CS.OverloadedOps.Const_H._Underlying *_1);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_H_ConstructFromAnother", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.H._Underlying *__MR_OverloadedOps_H_ConstructFromAnother(MR.CS.OverloadedOps.H._Underlying *_other);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_H_DefaultConstruct", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.H._Underlying *__MR_OverloadedOps_H_DefaultConstruct();

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_H_Destroy", ExactSpelling = true)]
                extern static unsafe void __MR_OverloadedOps_H_Destroy(_Underlying *_this);
            }

            /// Generated from class `MR::OverloadedOps::H`.
            /// This is the non-const half of the class.
            public class H : Const_H
            {
                internal unsafe H(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe H() : this(null, is_owning: true)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_OverloadedOps_H_DefaultConstruct();
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Generated from constructor `MR::OverloadedOps::H::H`.
                public unsafe H(MR.CS.OverloadedOps.Const_H _other) : this(null, is_owning: true)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_OverloadedOps_H_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Generated from constructor `MR::OverloadedOps::H::H`.
                public H(H _other) : this((Const_H)_other) {}

                /// Generated from method `MR::OverloadedOps::H::operator=`.
                public unsafe MR.CS.OverloadedOps.H Assign(MR.CS.OverloadedOps.Const_H _other)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_OverloadedOps_H_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return new(__c_ret, is_owning: false);
                }

                // DllImport:

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_H_AssignFromAnother", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.H._Underlying *__MR_OverloadedOps_H_AssignFromAnother(_Underlying *_this, MR.CS.OverloadedOps.H._Underlying *_other);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_H_ConstructFromAnother", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.H._Underlying *__MR_OverloadedOps_H_ConstructFromAnother(MR.CS.OverloadedOps.H._Underlying *_other);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_H_DefaultConstruct", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.H._Underlying *__MR_OverloadedOps_H_DefaultConstruct();
            }

            /// This is used for optional parameters of class `H` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_H`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `H`/`Const_H` directly.
            public class _InOptMut_H
            {
                public H? Opt;

                public _InOptMut_H() {}
                public _InOptMut_H(H value) {Opt = value;}
                public static implicit operator _InOptMut_H(H value) {return new(value);}
            }

            /// This is used for optional parameters of class `H` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_H`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `H`/`Const_H` to pass it to the function.
            public class _InOptConst_H
            {
                public Const_H? Opt;

                public _InOptConst_H() {}
                public _InOptConst_H(Const_H value) {Opt = value;}
                public static implicit operator _InOptConst_H(Const_H value) {return new(value);}
            }

            /// Generated from class `MR::OverloadedOps::I`.
            /// This is the const half of the class.
            public class Const_I : MR.CS.Misc.Object<Const_I>, System.IDisposable, System.IEquatable<MR.CS.OverloadedOps.Const_I>
            {
                internal struct _Underlying {} // Represents the underlying C++ type.

                internal unsafe _Underlying *_UnderlyingPtr;

                protected virtual unsafe void Dispose(bool disposing)
                {
                    if (_UnderlyingPtr is null || !_IsOwningVal)
                        return;
                    __MR_OverloadedOps_I_Destroy(_UnderlyingPtr);
                    _UnderlyingPtr = null;
                }
                public virtual void Dispose() {Dispose(true); GC.SuppressFinalize(this);}
                ~Const_I() {Dispose(false);}

                internal unsafe Const_I(_Underlying *ptr, bool is_owning) : base(is_owning) {_UnderlyingPtr = ptr;}

                /// Constructs an empty (default-constructed) instance.
                public unsafe Const_I() : this(null, is_owning: true)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_OverloadedOps_I_DefaultConstruct();
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Generated from constructor `MR::OverloadedOps::I::I`.
                public unsafe Const_I(MR.CS.OverloadedOps.Const_I _other) : this(null, is_owning: true)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_OverloadedOps_I_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Generated from constructor `MR::OverloadedOps::I::I`.
                public Const_I(I _other) : this((Const_I)_other) {}

                // Gives a free `!=`.
                /// Generated from function `MR::OverloadedOps::operator==`.
                public static unsafe bool operator==(MR.CS.OverloadedOps.Const_I _1, MR.CS.OverloadedOps.Const_I _2)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_C_equal_MR_OverloadedOps_I(_1._UnderlyingPtr, _2._UnderlyingPtr);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return __c_ret != 0;
                }

                public static unsafe bool operator!=(MR.CS.OverloadedOps.Const_I _1, MR.CS.OverloadedOps.Const_I _2)
                {
                    return !(_1 == _2);
                }

                // IEquatable:

                public bool Equals(MR.CS.OverloadedOps.Const_I? _2)
                {
                    if (_2 is null)
                        return false;
                    return this == _2;
                }

                public override bool Equals(object? other)
                {
                    if (other is null)
                        return false;
                    if (other is MR.CS.OverloadedOps.Const_I)
                        return this == (MR.CS.OverloadedOps.Const_I)other;
                    return false;
                }

                // DllImport:

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_equal_MR_OverloadedOps_I", ExactSpelling = true)]
                extern static unsafe byte __MR_C_equal_MR_OverloadedOps_I(MR.CS.OverloadedOps.Const_I._Underlying *_1, MR.CS.OverloadedOps.Const_I._Underlying *_2);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_I_ConstructFromAnother", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.I._Underlying *__MR_OverloadedOps_I_ConstructFromAnother(MR.CS.OverloadedOps.I._Underlying *_other);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_I_DefaultConstruct", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.I._Underlying *__MR_OverloadedOps_I_DefaultConstruct();

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_I_Destroy", ExactSpelling = true)]
                extern static unsafe void __MR_OverloadedOps_I_Destroy(_Underlying *_this);
            }

            /// Generated from class `MR::OverloadedOps::I`.
            /// This is the non-const half of the class.
            public class I : Const_I
            {
                internal unsafe I(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// Constructs an empty (default-constructed) instance.
                public unsafe I() : this(null, is_owning: true)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_OverloadedOps_I_DefaultConstruct();
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Generated from constructor `MR::OverloadedOps::I::I`.
                public unsafe I(MR.CS.OverloadedOps.Const_I _other) : this(null, is_owning: true)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    _UnderlyingPtr = __MR_OverloadedOps_I_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                }

                /// Generated from constructor `MR::OverloadedOps::I::I`.
                public I(I _other) : this((Const_I)_other) {}

                /// Generated from method `MR::OverloadedOps::I::operator=`.
                public unsafe MR.CS.OverloadedOps.I Assign(MR.CS.OverloadedOps.Const_I _other)
                {
                    MR.CS.Misc._Exceptions.Prepare();
                    var __c_ret = __MR_OverloadedOps_I_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr);
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    MR.CS.Misc._Exceptions.ThrowIfNeeded();
                    return new(__c_ret, is_owning: false);
                }

                // DllImport:

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_I_AssignFromAnother", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.I._Underlying *__MR_OverloadedOps_I_AssignFromAnother(_Underlying *_this, MR.CS.OverloadedOps.I._Underlying *_other);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_I_ConstructFromAnother", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.I._Underlying *__MR_OverloadedOps_I_ConstructFromAnother(MR.CS.OverloadedOps.I._Underlying *_other);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_I_DefaultConstruct", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.I._Underlying *__MR_OverloadedOps_I_DefaultConstruct();
            }

            /// This is used for optional parameters of class `I` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_I`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `I`/`Const_I` directly.
            public class _InOptMut_I
            {
                public I? Opt;

                public _InOptMut_I() {}
                public _InOptMut_I(I value) {Opt = value;}
                public static implicit operator _InOptMut_I(I value) {return new(value);}
            }

            /// This is used for optional parameters of class `I` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_I`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `I`/`Const_I` to pass it to the function.
            public class _InOptConst_I
            {
                public Const_I? Opt;

                public _InOptConst_I() {}
                public _InOptConst_I(Const_I value) {Opt = value;}
                public static implicit operator _InOptConst_I(Const_I value) {return new(value);}
            }
        }
    }
}
