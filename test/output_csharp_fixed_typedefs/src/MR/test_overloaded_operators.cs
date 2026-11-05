public static partial class MR
{
    public static partial class CS
    {
        public static partial class OverloadedOps
        {
            // Member functions.
            /// <summary>
            /// Generated from class `MR::OverloadedOps::A`.
            /// This is the const half of the class.
            /// </summary>
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
                /// <summary>
                /// Generated from constructor `MR::OverloadedOps::A::A`.
                /// </summary>
                public unsafe Const_A(MR.CS.OverloadedOps.Const_A _other) : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_OverloadedOps_A_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                // Since we have a custom assignment, we also need a custom copy ctor to avoid the deprecation warning.
                /// <summary>
                /// Generated from constructor `MR::OverloadedOps::A::A`.
                /// </summary>
                public Const_A(A _other) : this((Const_A)_other) {}

                // Pre-increment.
                /// <summary>
                /// Generated from method `MR::OverloadedOps::A::operator++`.
                /// </summary>
                public static unsafe A operator++(MR.CS.OverloadedOps.Const_A _this)
                {
                    A __this_copy = new(_this);
                    int __ret = __MR_C_incr_MR_OverloadedOps_A(__this_copy._UnderlyingPtr);
                    return __this_copy;
                }

                // Pre-decrement.
                /// <summary>
                /// Generated from method `MR::OverloadedOps::A::operator--`.
                /// </summary>
                public static unsafe A operator--(MR.CS.OverloadedOps.Const_A _this)
                {
                    A __this_copy = new(_this);
                    int __ret = __MR_C_decr_MR_OverloadedOps_A(__this_copy._UnderlyingPtr);
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
            /// <summary>
            /// Generated from class `MR::OverloadedOps::A`.
            /// This is the non-const half of the class.
            /// </summary>
            public class A : Const_A
            {
                internal unsafe A(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                // Since we have a custom assignment, we also need a custom copy ctor to avoid the deprecation warning.
                /// <summary>
                /// Generated from constructor `MR::OverloadedOps::A::A`.
                /// </summary>
                public unsafe A(MR.CS.OverloadedOps.Const_A _other) : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_OverloadedOps_A_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                // Since we have a custom assignment, we also need a custom copy ctor to avoid the deprecation warning.
                /// <summary>
                /// Generated from constructor `MR::OverloadedOps::A::A`.
                /// </summary>
                public A(A _other) : this((Const_A)_other) {}

                // Assign.
                /// <summary>
                /// Generated from method `MR::OverloadedOps::A::operator=`.
                /// </summary>
                public unsafe int assign(MR.CS.OverloadedOps.Const_A _other)
                {
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return __MR_OverloadedOps_A_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr);
                }

                // Unary plus.
                /// <summary>
                /// Generated from method `MR::OverloadedOps::A::operator+`.
                /// </summary>
                public static unsafe int operator+(MR.CS.OverloadedOps.A _this)
                {
                    return __MR_C_pos_MR_OverloadedOps_A(_this._UnderlyingPtr);
                }

                // Binary plus.
                /// <summary>
                /// Generated from method `MR::OverloadedOps::A::operator+`.
                /// </summary>
                public static unsafe int operator+(MR.CS.OverloadedOps.A _this, MR.CS.OverloadedOps.Const_A _1)
                {
                    return __MR_C_add_MR_OverloadedOps_A(_this._UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Unary minus.
                /// <summary>
                /// Generated from method `MR::OverloadedOps::A::operator-`.
                /// </summary>
                public static unsafe int operator-(MR.CS.OverloadedOps.A _this)
                {
                    return __MR_C_neg_MR_OverloadedOps_A(_this._UnderlyingPtr);
                }

                // Binary minus.
                /// <summary>
                /// Generated from method `MR::OverloadedOps::A::operator-`.
                /// </summary>
                public static unsafe int operator-(MR.CS.OverloadedOps.A _this, MR.CS.OverloadedOps.Const_A _1)
                {
                    return __MR_C_sub_MR_OverloadedOps_A(_this._UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Dereference (unary star).
                /// <summary>
                /// Generated from method `MR::OverloadedOps::A::operator*`.
                /// </summary>
                public unsafe int deref()
                {
                    return __MR_C_deref_MR_OverloadedOps_A(_UnderlyingPtr);
                }

                // Multiply (binary star).
                /// <summary>
                /// Generated from method `MR::OverloadedOps::A::operator*`.
                /// </summary>
                public static unsafe int operator*(MR.CS.OverloadedOps.A _this, MR.CS.OverloadedOps.Const_A _1)
                {
                    return __MR_C_mul_MR_OverloadedOps_A(_this._UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Divide.
                /// <summary>
                /// Generated from method `MR::OverloadedOps::A::operator/`.
                /// </summary>
                public static unsafe int operator/(MR.CS.OverloadedOps.A _this, MR.CS.OverloadedOps.Const_A _1)
                {
                    return __MR_C_div_MR_OverloadedOps_A(_this._UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Modulo.
                /// <summary>
                /// Generated from method `MR::OverloadedOps::A::operator%`.
                /// </summary>
                public static unsafe int operator%(MR.CS.OverloadedOps.A _this, MR.CS.OverloadedOps.Const_A _1)
                {
                    return __MR_C_mod_MR_OverloadedOps_A(_this._UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Bit xor.
                /// <summary>
                /// Generated from method `MR::OverloadedOps::A::operator^`.
                /// </summary>
                public static unsafe int operator^(MR.CS.OverloadedOps.A _this, MR.CS.OverloadedOps.Const_A _1)
                {
                    return __MR_C_xor_MR_OverloadedOps_A(_this._UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Bit and.
                /// <summary>
                /// Generated from method `MR::OverloadedOps::A::operator&amp;`.
                /// </summary>
                public static unsafe int operator&(MR.CS.OverloadedOps.A _this, MR.CS.OverloadedOps.Const_A _1)
                {
                    return __MR_C_bitand_MR_OverloadedOps_A(_this._UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Bit or.
                /// <summary>
                /// Generated from method `MR::OverloadedOps::A::operator|`.
                /// </summary>
                public static unsafe int operator|(MR.CS.OverloadedOps.A _this, MR.CS.OverloadedOps.Const_A _1)
                {
                    return __MR_C_bitor_MR_OverloadedOps_A(_this._UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Bit negate.
                /// <summary>
                /// Generated from method `MR::OverloadedOps::A::operator~`.
                /// </summary>
                public static unsafe int operator~(MR.CS.OverloadedOps.A _this)
                {
                    return __MR_C_compl_MR_OverloadedOps_A(_this._UnderlyingPtr);
                }

                // Boolean negate.
                /// <summary>
                /// Generated from method `MR::OverloadedOps::A::operator!`.
                /// </summary>
                public static unsafe int operator!(MR.CS.OverloadedOps.A _this)
                {
                    return __MR_C_not_MR_OverloadedOps_A(_this._UnderlyingPtr);
                }

                // Less.
                /// <summary>
                /// Generated from method `MR::OverloadedOps::A::operator&lt;`.
                /// </summary>
                public unsafe int less(MR.CS.OverloadedOps.Const_A _1)
                {
                    return __MR_C_less_MR_OverloadedOps_A(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Greater.
                /// <summary>
                /// Generated from method `MR::OverloadedOps::A::operator&gt;`.
                /// </summary>
                public unsafe int greater(MR.CS.OverloadedOps.Const_A _1)
                {
                    return __MR_C_greater_MR_OverloadedOps_A(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Plus assign.
                /// <summary>
                /// Generated from method `MR::OverloadedOps::A::operator+=`.
                /// </summary>
                public unsafe int addAssign(MR.CS.OverloadedOps.Const_A _1)
                {
                    return __MR_OverloadedOps_A_add_assign(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Minus assign.
                /// <summary>
                /// Generated from method `MR::OverloadedOps::A::operator-=`.
                /// </summary>
                public unsafe int subAssign(MR.CS.OverloadedOps.Const_A _1)
                {
                    return __MR_OverloadedOps_A_sub_assign(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Multiply assign.
                /// <summary>
                /// Generated from method `MR::OverloadedOps::A::operator*=`.
                /// </summary>
                public unsafe int mulAssign(MR.CS.OverloadedOps.Const_A _1)
                {
                    return __MR_OverloadedOps_A_mul_assign(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Divide assign.
                /// <summary>
                /// Generated from method `MR::OverloadedOps::A::operator/=`.
                /// </summary>
                public unsafe int divAssign(MR.CS.OverloadedOps.Const_A _1)
                {
                    return __MR_OverloadedOps_A_div_assign(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Modulo assign.
                /// <summary>
                /// Generated from method `MR::OverloadedOps::A::operator%=`.
                /// </summary>
                public unsafe int modAssign(MR.CS.OverloadedOps.Const_A _1)
                {
                    return __MR_OverloadedOps_A_mod_assign(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Bit xor assign.
                /// <summary>
                /// Generated from method `MR::OverloadedOps::A::operator^=`.
                /// </summary>
                public unsafe int xorAssign(MR.CS.OverloadedOps.Const_A _1)
                {
                    return __MR_OverloadedOps_A_xor_assign(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Bit and assign.
                /// <summary>
                /// Generated from method `MR::OverloadedOps::A::operator&amp;=`.
                /// </summary>
                public unsafe int bitandAssign(MR.CS.OverloadedOps.Const_A _1)
                {
                    return __MR_OverloadedOps_A_bitand_assign(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Bit or assign.
                /// <summary>
                /// Generated from method `MR::OverloadedOps::A::operator|=`.
                /// </summary>
                public unsafe int bitorAssign(MR.CS.OverloadedOps.Const_A _1)
                {
                    return __MR_OverloadedOps_A_bitor_assign(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Left shift.
                /// <summary>
                /// Generated from method `MR::OverloadedOps::A::operator&lt;&lt;`.
                /// </summary>
                public static unsafe int operator<<(MR.CS.OverloadedOps.A _this, MR.CS.OverloadedOps.Const_A _1)
                {
                    return __MR_C_lshift_MR_OverloadedOps_A(_this._UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Right shift.
                /// <summary>
                /// Generated from method `MR::OverloadedOps::A::operator&gt;&gt;`.
                /// </summary>
                public static unsafe int operator>>(MR.CS.OverloadedOps.A _this, MR.CS.OverloadedOps.Const_A _1)
                {
                    return __MR_C_rshift_MR_OverloadedOps_A(_this._UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Left shift assign.
                /// <summary>
                /// Generated from method `MR::OverloadedOps::A::operator&lt;&lt;=`.
                /// </summary>
                public unsafe int lshiftAssign(MR.CS.OverloadedOps.Const_A _1)
                {
                    return __MR_OverloadedOps_A_lshift_assign(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Right shift assign.
                /// <summary>
                /// Generated from method `MR::OverloadedOps::A::operator&gt;&gt;=`.
                /// </summary>
                public unsafe int rshiftAssign(MR.CS.OverloadedOps.Const_A _1)
                {
                    return __MR_OverloadedOps_A_rshift_assign(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Equal.
                /// <summary>
                /// Generated from method `MR::OverloadedOps::A::operator==`.
                /// </summary>
                public unsafe int equal(MR.CS.OverloadedOps.Const_A _1)
                {
                    return __MR_C_equal_MR_OverloadedOps_A(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Not equal.
                /// <summary>
                /// Generated from method `MR::OverloadedOps::A::operator!=`.
                /// </summary>
                public unsafe int notEqual(MR.CS.OverloadedOps.Const_A _1)
                {
                    return __MR_C_not_equal_MR_OverloadedOps_A(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Less equal.
                /// <summary>
                /// Generated from method `MR::OverloadedOps::A::operator&lt;=`.
                /// </summary>
                public unsafe int lessEqual(MR.CS.OverloadedOps.Const_A _1)
                {
                    return __MR_C_less_equal_MR_OverloadedOps_A(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Greater equal.
                /// <summary>
                /// Generated from method `MR::OverloadedOps::A::operator&gt;=`.
                /// </summary>
                public unsafe int greaterEqual(MR.CS.OverloadedOps.Const_A _1)
                {
                    return __MR_C_greater_equal_MR_OverloadedOps_A(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Compare three way.
                /// <summary>
                /// Generated from method `MR::OverloadedOps::A::operator&lt;=&gt;`.
                /// </summary>
                public unsafe int compareThreeWay(MR.CS.OverloadedOps.Const_A _1)
                {
                    return __MR_C_compare_three_way_MR_OverloadedOps_A(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                // And.
                /// <summary>
                /// Generated from method `MR::OverloadedOps::A::operator&amp;&amp;`.
                /// </summary>
                public unsafe int and(MR.CS.OverloadedOps.Const_A _1)
                {
                    return __MR_C_and_MR_OverloadedOps_A(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Or.
                /// <summary>
                /// Generated from method `MR::OverloadedOps::A::operator||`.
                /// </summary>
                public unsafe int or(MR.CS.OverloadedOps.Const_A _1)
                {
                    return __MR_C_or_MR_OverloadedOps_A(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Pre-increment.
                /// <summary>
                /// Generated from method `MR::OverloadedOps::A::operator++`.
                /// </summary>
                public unsafe void incr()
                {
                    int __ret = __MR_C_incr_MR_OverloadedOps_A(_UnderlyingPtr);
                }

                // Pre-decrement.
                /// <summary>
                /// Generated from method `MR::OverloadedOps::A::operator--`.
                /// </summary>
                public unsafe void decr()
                {
                    int __ret = __MR_C_decr_MR_OverloadedOps_A(_UnderlyingPtr);
                }

                // Comma.
                /// <summary>
                /// Generated from method `MR::OverloadedOps::A::operator,`.
                /// </summary>
                public unsafe int comma(MR.CS.OverloadedOps.Const_A _1)
                {
                    return __MR_C_comma_MR_OverloadedOps_A(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Arrow star.
                /// <summary>
                /// Generated from method `MR::OverloadedOps::A::operator-&gt;*`.
                /// </summary>
                public unsafe int arrowStar(MR.CS.OverloadedOps.Const_A _1)
                {
                    return __MR_OverloadedOps_A_arrow_star(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Arrow.
                /// <summary>
                /// Generated from method `MR::OverloadedOps::A::operator-&gt;`.
                /// </summary>
                public unsafe int arrow()
                {
                    return __MR_OverloadedOps_A_arrow(_UnderlyingPtr);
                }

                // Function call.
                /// <summary>
                /// Generated from method `MR::OverloadedOps::A::operator()`.
                /// </summary>
                public unsafe int call(MR.CS.OverloadedOps.Const_A _1)
                {
                    return __MR_OverloadedOps_A_call(_UnderlyingPtr, _1._UnderlyingPtr);
                }

                // Indexing.
                /// <summary>
                /// Generated from method `MR::OverloadedOps::A::operator[]`.
                /// </summary>
                public unsafe int this[MR.CS.OverloadedOps.Const_A _1]
                {
                    get
                    {
                        return __MR_OverloadedOps_A_index(_UnderlyingPtr, _1._UnderlyingPtr);
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

            /// <summary>
            /// This is used for optional parameters of class `A` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_A`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `A`/`Const_A` directly.
            /// </summary>
            public class _InOptMut_A
            {
                public A? Opt;

                public _InOptMut_A() {}
                public _InOptMut_A(A value) {Opt = value;}
                public static implicit operator _InOptMut_A(A value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `A` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_A`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `A`/`Const_A` to pass it to the function.
            /// </summary>
            public class _InOptConst_A
            {
                public Const_A? Opt;

                public _InOptConst_A() {}
                public _InOptConst_A(Const_A value) {Opt = value;}
                public static implicit operator _InOptConst_A(Const_A value) {return new(value);}
            }

            // Free functions.
            /// <summary>
            /// Generated from class `MR::OverloadedOps::B`.
            /// This is the const half of the class.
            /// </summary>
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

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_B() : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_OverloadedOps_B_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::OverloadedOps::B::B`.
                /// </summary>
                public unsafe Const_B(MR.CS.OverloadedOps.Const_B _other) : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_OverloadedOps_B_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// <summary>
                /// Generated from constructor `MR::OverloadedOps::B::B`.
                /// </summary>
                public Const_B(B _other) : this((Const_B)_other) {}

                // Unary plus.
                /// <summary>
                /// Generated from function `MR::OverloadedOps::operator+`.
                /// </summary>
                public static unsafe int operator+(Const_B _1)
                {
                    return __MR_C_pos_MR_OverloadedOps_B(_1._UnderlyingPtr);
                }

                // Binary plus.
                /// <summary>
                /// Generated from function `MR::OverloadedOps::operator+`.
                /// </summary>
                public static unsafe int operator+(Const_B _1, MR.CS.OverloadedOps.Const_B _2)
                {
                    return __MR_C_add_MR_OverloadedOps_B(_1._UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Unary minus.
                /// <summary>
                /// Generated from function `MR::OverloadedOps::operator-`.
                /// </summary>
                public static unsafe int operator-(Const_B _1)
                {
                    return __MR_C_neg_MR_OverloadedOps_B(_1._UnderlyingPtr);
                }

                // Binary minus.
                /// <summary>
                /// Generated from function `MR::OverloadedOps::operator-`.
                /// </summary>
                public static unsafe int operator-(Const_B _1, MR.CS.OverloadedOps.Const_B _2)
                {
                    return __MR_C_sub_MR_OverloadedOps_B(_1._UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Dereference (unary star).
                /// <summary>
                /// Generated from function `MR::OverloadedOps::operator*`.
                /// </summary>
                public unsafe int deref()
                {
                    return __MR_C_deref_MR_OverloadedOps_B(_UnderlyingPtr);
                }

                // Multiply (binary star).
                /// <summary>
                /// Generated from function `MR::OverloadedOps::operator*`.
                /// </summary>
                public static unsafe int operator*(Const_B _1, MR.CS.OverloadedOps.Const_B _2)
                {
                    return __MR_C_mul_MR_OverloadedOps_B(_1._UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Divide.
                /// <summary>
                /// Generated from function `MR::OverloadedOps::operator/`.
                /// </summary>
                public static unsafe int operator/(Const_B _1, MR.CS.OverloadedOps.Const_B _2)
                {
                    return __MR_C_div_MR_OverloadedOps_B(_1._UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Modulo.
                /// <summary>
                /// Generated from function `MR::OverloadedOps::operator%`.
                /// </summary>
                public static unsafe int operator%(Const_B _1, MR.CS.OverloadedOps.Const_B _2)
                {
                    return __MR_C_mod_MR_OverloadedOps_B(_1._UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Bit xor.
                /// <summary>
                /// Generated from function `MR::OverloadedOps::operator^`.
                /// </summary>
                public static unsafe int operator^(Const_B _1, MR.CS.OverloadedOps.Const_B _2)
                {
                    return __MR_C_xor_MR_OverloadedOps_B(_1._UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Bit and.
                /// <summary>
                /// Generated from function `MR::OverloadedOps::operator&amp;`.
                /// </summary>
                public static unsafe int operator&(Const_B _1, MR.CS.OverloadedOps.Const_B _2)
                {
                    return __MR_C_bitand_MR_OverloadedOps_B(_1._UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Bit or.
                /// <summary>
                /// Generated from function `MR::OverloadedOps::operator|`.
                /// </summary>
                public static unsafe int operator|(Const_B _1, MR.CS.OverloadedOps.Const_B _2)
                {
                    return __MR_C_bitor_MR_OverloadedOps_B(_1._UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Bit negate.
                /// <summary>
                /// Generated from function `MR::OverloadedOps::operator~`.
                /// </summary>
                public static unsafe int operator~(Const_B _1)
                {
                    return __MR_C_compl_MR_OverloadedOps_B(_1._UnderlyingPtr);
                }

                // Boolean negate.
                /// <summary>
                /// Generated from function `MR::OverloadedOps::operator!`.
                /// </summary>
                public static unsafe int operator!(Const_B _1)
                {
                    return __MR_C_not_MR_OverloadedOps_B(_1._UnderlyingPtr);
                }

                // Assign.
                // friend int operator=(B, B); // Can't be a free function.
                // Less.
                /// <summary>
                /// Generated from function `MR::OverloadedOps::operator&lt;`.
                /// </summary>
                public unsafe int less(MR.CS.OverloadedOps.Const_B _2)
                {
                    return __MR_C_less_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Greater.
                /// <summary>
                /// Generated from function `MR::OverloadedOps::operator&gt;`.
                /// </summary>
                public unsafe int greater(MR.CS.OverloadedOps.Const_B _2)
                {
                    return __MR_C_greater_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Plus assign.
                /// <summary>
                /// Generated from function `MR::OverloadedOps::operator+=`.
                /// </summary>
                public unsafe int addAssign(MR.CS.OverloadedOps.Const_B _2)
                {
                    return __MR_C_add_assign_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Minus assign.
                /// <summary>
                /// Generated from function `MR::OverloadedOps::operator-=`.
                /// </summary>
                public unsafe int subAssign(MR.CS.OverloadedOps.Const_B _2)
                {
                    return __MR_C_sub_assign_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Multiply assign.
                /// <summary>
                /// Generated from function `MR::OverloadedOps::operator*=`.
                /// </summary>
                public unsafe int mulAssign(MR.CS.OverloadedOps.Const_B _2)
                {
                    return __MR_C_mul_assign_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Divide assign.
                /// <summary>
                /// Generated from function `MR::OverloadedOps::operator/=`.
                /// </summary>
                public unsafe int divAssign(MR.CS.OverloadedOps.Const_B _2)
                {
                    return __MR_C_div_assign_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Modulo assign.
                /// <summary>
                /// Generated from function `MR::OverloadedOps::operator%=`.
                /// </summary>
                public unsafe int modAssign(MR.CS.OverloadedOps.Const_B _2)
                {
                    return __MR_C_mod_assign_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Bit xor assign.
                /// <summary>
                /// Generated from function `MR::OverloadedOps::operator^=`.
                /// </summary>
                public unsafe int xorAssign(MR.CS.OverloadedOps.Const_B _2)
                {
                    return __MR_C_xor_assign_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Bit and assign.
                /// <summary>
                /// Generated from function `MR::OverloadedOps::operator&amp;=`.
                /// </summary>
                public unsafe int bitandAssign(MR.CS.OverloadedOps.Const_B _2)
                {
                    return __MR_C_bitand_assign_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Bit or assign.
                /// <summary>
                /// Generated from function `MR::OverloadedOps::operator|=`.
                /// </summary>
                public unsafe int bitorAssign(MR.CS.OverloadedOps.Const_B _2)
                {
                    return __MR_C_bitor_assign_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Left shift.
                /// <summary>
                /// Generated from function `MR::OverloadedOps::operator&lt;&lt;`.
                /// </summary>
                public static unsafe int operator<<(Const_B _1, MR.CS.OverloadedOps.Const_B _2)
                {
                    return __MR_C_lshift_MR_OverloadedOps_B(_1._UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Right shift.
                /// <summary>
                /// Generated from function `MR::OverloadedOps::operator&gt;&gt;`.
                /// </summary>
                public static unsafe int operator>>(Const_B _1, MR.CS.OverloadedOps.Const_B _2)
                {
                    return __MR_C_rshift_MR_OverloadedOps_B(_1._UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Left shift assign.
                /// <summary>
                /// Generated from function `MR::OverloadedOps::operator&lt;&lt;=`.
                /// </summary>
                public unsafe int lshiftAssign(MR.CS.OverloadedOps.Const_B _2)
                {
                    return __MR_C_lshift_assign_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Right shift assign.
                /// <summary>
                /// Generated from function `MR::OverloadedOps::operator&gt;&gt;=`.
                /// </summary>
                public unsafe int rshiftAssign(MR.CS.OverloadedOps.Const_B _2)
                {
                    return __MR_C_rshift_assign_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Equal.
                /// <summary>
                /// Generated from function `MR::OverloadedOps::operator==`.
                /// </summary>
                public unsafe int equal(MR.CS.OverloadedOps.Const_B _2)
                {
                    return __MR_C_equal_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Not equal.
                /// <summary>
                /// Generated from function `MR::OverloadedOps::operator!=`.
                /// </summary>
                public unsafe int notEqual(MR.CS.OverloadedOps.Const_B _2)
                {
                    return __MR_C_not_equal_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Less equal.
                /// <summary>
                /// Generated from function `MR::OverloadedOps::operator&lt;=`.
                /// </summary>
                public unsafe int lessEqual(MR.CS.OverloadedOps.Const_B _2)
                {
                    return __MR_C_less_equal_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Greater equal.
                /// <summary>
                /// Generated from function `MR::OverloadedOps::operator&gt;=`.
                /// </summary>
                public unsafe int greaterEqual(MR.CS.OverloadedOps.Const_B _2)
                {
                    return __MR_C_greater_equal_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Compare three way.
                /// <summary>
                /// Generated from function `MR::OverloadedOps::operator&lt;=&gt;`.
                /// </summary>
                public unsafe int compareThreeWay(MR.CS.OverloadedOps.Const_B _2)
                {
                    return __MR_C_compare_three_way_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                }

                // And.
                /// <summary>
                /// Generated from function `MR::OverloadedOps::operator&amp;&amp;`.
                /// </summary>
                public unsafe int and(MR.CS.OverloadedOps.Const_B _2)
                {
                    return __MR_C_and_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Or.
                /// <summary>
                /// Generated from function `MR::OverloadedOps::operator||`.
                /// </summary>
                public unsafe int or(MR.CS.OverloadedOps.Const_B _2)
                {
                    return __MR_C_or_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Pre-increment.
                /// <summary>
                /// Generated from function `MR::OverloadedOps::operator++`.
                /// </summary>
                public unsafe void incr()
                {
                    int __ret = __MR_C_incr_MR_OverloadedOps_B(_UnderlyingPtr);
                }

                // Pre-increment.
                /// <summary>
                /// Generated from function `MR::OverloadedOps::operator++`.
                /// </summary>
                public static unsafe B operator++(MR.CS.OverloadedOps.Const_B _1)
                {
                    B __this_copy = new(_1);
                    int __ret = __MR_C_incr_MR_OverloadedOps_B(__this_copy._UnderlyingPtr);
                    return __this_copy;
                }

                // Pre-decrement.
                /// <summary>
                /// Generated from function `MR::OverloadedOps::operator--`.
                /// </summary>
                public unsafe void decr()
                {
                    int __ret = __MR_C_decr_MR_OverloadedOps_B(_UnderlyingPtr);
                }

                // Pre-decrement.
                /// <summary>
                /// Generated from function `MR::OverloadedOps::operator--`.
                /// </summary>
                public static unsafe B operator--(MR.CS.OverloadedOps.Const_B _1)
                {
                    B __this_copy = new(_1);
                    int __ret = __MR_C_decr_MR_OverloadedOps_B(__this_copy._UnderlyingPtr);
                    return __this_copy;
                }

                // Comma.
                /// <summary>
                /// Generated from function `MR::OverloadedOps::operator,`.
                /// </summary>
                public unsafe int comma(MR.CS.OverloadedOps.Const_B _2)
                {
                    return __MR_C_comma_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
                }

                // Arrow star.
                /// <summary>
                /// Generated from function `MR::OverloadedOps::operator-&gt;*`.
                /// </summary>
                public unsafe int arrowStar(MR.CS.OverloadedOps.Const_B _2)
                {
                    return __MR_C_arrow_star_MR_OverloadedOps_B(_UnderlyingPtr, _2._UnderlyingPtr);
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
            /// <summary>
            /// Generated from class `MR::OverloadedOps::B`.
            /// This is the non-const half of the class.
            /// </summary>
            public class B : Const_B
            {
                internal unsafe B(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe B() : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_OverloadedOps_B_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::OverloadedOps::B::B`.
                /// </summary>
                public unsafe B(MR.CS.OverloadedOps.Const_B _other) : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_OverloadedOps_B_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// <summary>
                /// Generated from constructor `MR::OverloadedOps::B::B`.
                /// </summary>
                public B(B _other) : this((Const_B)_other) {}

                /// <summary>
                /// Generated from method `MR::OverloadedOps::B::operator=`.
                /// </summary>
                public unsafe MR.CS.OverloadedOps.B assign(MR.CS.OverloadedOps.Const_B _other)
                {
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_OverloadedOps_B_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }

                // DllImport:

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_B_AssignFromAnother", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.B._Underlying *__MR_OverloadedOps_B_AssignFromAnother(_Underlying *_this, MR.CS.OverloadedOps.B._Underlying *_other);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_B_ConstructFromAnother", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.B._Underlying *__MR_OverloadedOps_B_ConstructFromAnother(MR.CS.OverloadedOps.B._Underlying *_other);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_B_DefaultConstruct", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.B._Underlying *__MR_OverloadedOps_B_DefaultConstruct();
            }

            /// <summary>
            /// This is used for optional parameters of class `B` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_B`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `B`/`Const_B` directly.
            /// </summary>
            public class _InOptMut_B
            {
                public B? Opt;

                public _InOptMut_B() {}
                public _InOptMut_B(B value) {Opt = value;}
                public static implicit operator _InOptMut_B(B value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `B` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_B`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `B`/`Const_B` to pass it to the function.
            /// </summary>
            public class _InOptConst_B
            {
                public Const_B? Opt;

                public _InOptConst_B() {}
                public _InOptConst_B(Const_B value) {Opt = value;}
                public static implicit operator _InOptConst_B(Const_B value) {return new(value);}
            }

            // Test how the names are generated.
            /// <summary>
            /// Generated from class `MR::OverloadedOps::C`.
            /// This is the const half of the class.
            /// </summary>
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

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_C() : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_OverloadedOps_C_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::OverloadedOps::C::C`.
                /// </summary>
                public unsafe Const_C(MR.CS.OverloadedOps.Const_C _other) : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_OverloadedOps_C_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// <summary>
                /// Generated from constructor `MR::OverloadedOps::C::C`.
                /// </summary>
                public Const_C(C _other) : this((Const_C)_other) {}

                // If rhs type is same as the lhs one (ignoring cvref), it's not emitted.
                /// <summary>
                /// Generated from function `MR::OverloadedOps::operator+`.
                /// </summary>
                public unsafe void add(MR.CS.OverloadedOps.Const_C _2)
                {
                    __MR_C_add_MR_OverloadedOps_C(_UnderlyingPtr, _2._UnderlyingPtr);
                }

                // But different types are printed.
                /// <summary>
                /// Generated from function `MR::OverloadedOps::operator+`.
                /// </summary>
                public unsafe void add(MR.CS.OverloadedOps.Const_B _2)
                {
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
            /// <summary>
            /// Generated from class `MR::OverloadedOps::C`.
            /// This is the non-const half of the class.
            /// </summary>
            public class C : Const_C
            {
                internal unsafe C(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe C() : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_OverloadedOps_C_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::OverloadedOps::C::C`.
                /// </summary>
                public unsafe C(MR.CS.OverloadedOps.Const_C _other) : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_OverloadedOps_C_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// <summary>
                /// Generated from constructor `MR::OverloadedOps::C::C`.
                /// </summary>
                public C(C _other) : this((Const_C)_other) {}

                /// <summary>
                /// Generated from method `MR::OverloadedOps::C::operator=`.
                /// </summary>
                public unsafe MR.CS.OverloadedOps.C assign(MR.CS.OverloadedOps.Const_C _other)
                {
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_OverloadedOps_C_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }

                // DllImport:

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_C_AssignFromAnother", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.C._Underlying *__MR_OverloadedOps_C_AssignFromAnother(_Underlying *_this, MR.CS.OverloadedOps.C._Underlying *_other);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_C_ConstructFromAnother", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.C._Underlying *__MR_OverloadedOps_C_ConstructFromAnother(MR.CS.OverloadedOps.C._Underlying *_other);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_C_DefaultConstruct", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.C._Underlying *__MR_OverloadedOps_C_DefaultConstruct();
            }

            /// <summary>
            /// This is used for optional parameters of class `C` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_C`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `C`/`Const_C` directly.
            /// </summary>
            public class _InOptMut_C
            {
                public C? Opt;

                public _InOptMut_C() {}
                public _InOptMut_C(C value) {Opt = value;}
                public static implicit operator _InOptMut_C(C value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `C` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_C`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `C`/`Const_C` to pass it to the function.
            /// </summary>
            public class _InOptConst_C
            {
                public Const_C? Opt;

                public _InOptConst_C() {}
                public _InOptConst_C(Const_C value) {Opt = value;}
                public static implicit operator _InOptConst_C(Const_C value) {return new(value);}
            }

            /// <summary>
            /// Generated from class `MR::OverloadedOps::D`.
            /// This is the const half of the class.
            /// </summary>
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

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_D() : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_OverloadedOps_D_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::OverloadedOps::D::D`.
                /// </summary>
                public unsafe Const_D(MR.CS.OverloadedOps.Const_D _other) : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_OverloadedOps_D_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// <summary>
                /// Generated from constructor `MR::OverloadedOps::D::D`.
                /// </summary>
                public Const_D(D _other) : this((Const_D)_other) {}

                /// <summary>
                /// Generated from method `MR::OverloadedOps::D::operator*`.
                /// </summary>
                public unsafe int deref()
                {
                    return __MR_C_deref_const_MR_OverloadedOps_D_ref(_UnderlyingPtr);
                }

                /// <summary>
                /// Generated from function `MR::OverloadedOps::operator+`.
                /// </summary>
                public static unsafe int operator+(MR.CS.OverloadedOps.Const_D _1)
                {
                    return __MR_C_pos_const_MR_OverloadedOps_D_ref(_1._UnderlyingPtr);
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

            /// <summary>
            /// Generated from class `MR::OverloadedOps::D`.
            /// This is the non-const half of the class.
            /// </summary>
            public class D : Const_D
            {
                internal unsafe D(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe D() : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_OverloadedOps_D_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::OverloadedOps::D::D`.
                /// </summary>
                public unsafe D(MR.CS.OverloadedOps.Const_D _other) : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_OverloadedOps_D_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// <summary>
                /// Generated from constructor `MR::OverloadedOps::D::D`.
                /// </summary>
                public D(D _other) : this((Const_D)_other) {}

                /// <summary>
                /// Generated from method `MR::OverloadedOps::D::operator=`.
                /// </summary>
                public unsafe MR.CS.OverloadedOps.D assign(MR.CS.OverloadedOps.Const_D _other)
                {
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_OverloadedOps_D_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }

                // Disambiguating the names.
                /// <summary>
                /// Generated from method `MR::OverloadedOps::D::operator*`.
                /// </summary>
                public unsafe new int deref()
                {
                    return __MR_C_deref_MR_OverloadedOps_D_ref(_UnderlyingPtr);
                }

                /// <summary>
                /// Generated from function `MR::OverloadedOps::operator+`.
                /// </summary>
                public static unsafe int operator+(MR.CS.OverloadedOps.D _1)
                {
                    return __MR_C_pos_MR_OverloadedOps_D_ref(_1._UnderlyingPtr);
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

            /// <summary>
            /// This is used for optional parameters of class `D` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_D`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `D`/`Const_D` directly.
            /// </summary>
            public class _InOptMut_D
            {
                public D? Opt;

                public _InOptMut_D() {}
                public _InOptMut_D(D value) {Opt = value;}
                public static implicit operator _InOptMut_D(D value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `D` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_D`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `D`/`Const_D` to pass it to the function.
            /// </summary>
            public class _InOptConst_D
            {
                public Const_D? Opt;

                public _InOptConst_D() {}
                public _InOptConst_D(Const_D value) {Opt = value;}
                public static implicit operator _InOptConst_D(Const_D value) {return new(value);}
            }

            /// <summary>
            /// Generated from class `MR::OverloadedOps::E`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_E : MR.CS.Misc.Object<Const_E>, System.IDisposable, System.IEquatable<MR.CS.OverloadedOps.Const_E>
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

                public unsafe int x => *__ref_storage_x;
                private protected unsafe int *__ref_storage_x;

                /// <summary>
                /// Constructors call this at the end to initialize class fields.
                /// </summary>
                protected unsafe void _FinalizeFields()
                {
                    { // x (ref)
                        this.__ref_storage_x = __MR_OverloadedOps_E_Get_x(_UnderlyingPtr);
                    }
                }

                // Don't warn about some fields remaining conditionally uninitialized. We initialize them later.
                #pragma warning disable CS8618
                internal unsafe Const_E(_Underlying *ptr, bool is_owning) : base(is_owning)
                {
                    _UnderlyingPtr = ptr;
                    if (ptr is not null)
                        _FinalizeFields();
                }
                #pragma warning restore CS8618

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_E() : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_OverloadedOps_E_DefaultConstruct();
                    _FinalizeFields();
                }

                /// <summary>
                /// Constructs `MR::OverloadedOps::E` elementwise.
                /// </summary>
                public unsafe Const_E(int x) : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_OverloadedOps_E_ConstructFrom(x);
                    _FinalizeFields();
                }

                /// <summary>
                /// Generated from constructor `MR::OverloadedOps::E::E`.
                /// </summary>
                public unsafe Const_E(MR.CS.OverloadedOps.Const_E _other) : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_OverloadedOps_E_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                    _FinalizeFields();
                }

                /// <summary>
                /// Generated from constructor `MR::OverloadedOps::E::E`.
                /// </summary>
                public Const_E(E _other) : this((Const_E)_other) {}

                /// <summary>
                /// Generated from method `MR::OverloadedOps::E::operator==`.
                /// </summary>
                public static unsafe bool operator==(MR.CS.OverloadedOps.Const_E _this, MR.CS.OverloadedOps.Const_E _1)
                {
                    return __MR_C_equal_MR_OverloadedOps_E(_this._UnderlyingPtr, _1._UnderlyingPtr) != 0;
                }

                public static unsafe bool operator!=(MR.CS.OverloadedOps.Const_E _this, MR.CS.OverloadedOps.Const_E _1)
                {
                    return !(_this == _1);
                }

                /// <summary>
                /// Generated from method `MR::OverloadedOps::E::operator&lt;`.
                /// </summary>
                public static unsafe bool operator<(MR.CS.OverloadedOps.Const_E _this, MR.CS.OverloadedOps.Const_E _1)
                {
                    return __MR_C_less_MR_OverloadedOps_E(_this._UnderlyingPtr, _1._UnderlyingPtr) != 0;
                }

                public static unsafe bool operator>(MR.CS.OverloadedOps.Const_E _this, MR.CS.OverloadedOps.Const_E _1)
                {
                    return _1 < _this;
                }

                public static unsafe bool operator<=(MR.CS.OverloadedOps.Const_E _this, MR.CS.OverloadedOps.Const_E _1)
                {
                    return !(_1 < _this);
                }

                public static unsafe bool operator>=(MR.CS.OverloadedOps.Const_E _this, MR.CS.OverloadedOps.Const_E _1)
                {
                    return !(_this < _1);
                }

                // IEquatable:

                public bool Equals(MR.CS.OverloadedOps.Const_E? _1)
                {
                    if (_1 is null)
                        return false;
                    return this == _1;
                }

                public override bool Equals(object? other)
                {
                    if (other is null)
                        return false;
                    if (other is MR.CS.OverloadedOps.Const_E)
                        return this == (MR.CS.OverloadedOps.Const_E)other;
                    return false;
                }

                // DllImport:

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_equal_MR_OverloadedOps_E", ExactSpelling = true)]
                extern static unsafe byte __MR_C_equal_MR_OverloadedOps_E(MR.CS.OverloadedOps.Const_E._Underlying *_this, MR.CS.OverloadedOps.Const_E._Underlying *_1);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_less_MR_OverloadedOps_E", ExactSpelling = true)]
                extern static unsafe byte __MR_C_less_MR_OverloadedOps_E(MR.CS.OverloadedOps.Const_E._Underlying *_this, MR.CS.OverloadedOps.Const_E._Underlying *_1);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_E_ConstructFrom", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.E._Underlying *__MR_OverloadedOps_E_ConstructFrom(int x);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_E_ConstructFromAnother", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.E._Underlying *__MR_OverloadedOps_E_ConstructFromAnother(MR.CS.OverloadedOps.E._Underlying *_other);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_E_DefaultConstruct", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.E._Underlying *__MR_OverloadedOps_E_DefaultConstruct();

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_E_Destroy", ExactSpelling = true)]
                extern static unsafe void __MR_OverloadedOps_E_Destroy(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_E_Get_x", ExactSpelling = true)]
                extern static unsafe int *__MR_OverloadedOps_E_Get_x(MR.CS.OverloadedOps.Const_E._Underlying *_this);
            }

            /// <summary>
            /// Generated from class `MR::OverloadedOps::E`.
            /// This is the non-const half of the class.
            /// </summary>
            public class E : Const_E
            {
                public new unsafe ref int x => ref *__ref_storage_x;

                // Don't warn about some fields remaining conditionally uninitialized. We initialize them later.
                #pragma warning disable CS8618
                internal unsafe E(_Underlying *ptr, bool is_owning) : base(ptr, is_owning)
                {
                    if (ptr is not null)
                        _FinalizeFields();
                }
                #pragma warning restore CS8618

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe E() : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_OverloadedOps_E_DefaultConstruct();
                    _FinalizeFields();
                }

                /// <summary>
                /// Constructs `MR::OverloadedOps::E` elementwise.
                /// </summary>
                public unsafe E(int x) : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_OverloadedOps_E_ConstructFrom(x);
                    _FinalizeFields();
                }

                /// <summary>
                /// Generated from constructor `MR::OverloadedOps::E::E`.
                /// </summary>
                public unsafe E(MR.CS.OverloadedOps.Const_E _other) : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_OverloadedOps_E_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                    _FinalizeFields();
                }

                /// <summary>
                /// Generated from constructor `MR::OverloadedOps::E::E`.
                /// </summary>
                public E(E _other) : this((Const_E)_other) {}

                /// <summary>
                /// Generated from method `MR::OverloadedOps::E::operator=`.
                /// </summary>
                public unsafe MR.CS.OverloadedOps.E assign(MR.CS.OverloadedOps.Const_E _other)
                {
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_OverloadedOps_E_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
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
            }

            /// <summary>
            /// This is used for optional parameters of class `E` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_E`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `E`/`Const_E` directly.
            /// </summary>
            public class _InOptMut_E
            {
                public E? Opt;

                public _InOptMut_E() {}
                public _InOptMut_E(E value) {Opt = value;}
                public static implicit operator _InOptMut_E(E value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `E` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_E`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `E`/`Const_E` to pass it to the function.
            /// </summary>
            public class _InOptConst_E
            {
                public Const_E? Opt;

                public _InOptConst_E() {}
                public _InOptConst_E(Const_E value) {Opt = value;}
                public static implicit operator _InOptConst_E(Const_E value) {return new(value);}
            }

            /// <summary>
            /// Generated from class `MR::OverloadedOps::F`.
            /// This is the const half of the class.
            /// </summary>
            public class Const_F : MR.CS.Misc.Object<Const_F>, System.IDisposable, System.IEquatable<MR.CS.OverloadedOps.Const_F>
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

                public unsafe int x => *__ref_storage_x;
                private protected unsafe int *__ref_storage_x;

                /// <summary>
                /// Constructors call this at the end to initialize class fields.
                /// </summary>
                protected unsafe void _FinalizeFields()
                {
                    { // x (ref)
                        this.__ref_storage_x = __MR_OverloadedOps_F_Get_x(_UnderlyingPtr);
                    }
                }

                // Don't warn about some fields remaining conditionally uninitialized. We initialize them later.
                #pragma warning disable CS8618
                internal unsafe Const_F(_Underlying *ptr, bool is_owning) : base(is_owning)
                {
                    _UnderlyingPtr = ptr;
                    if (ptr is not null)
                        _FinalizeFields();
                }
                #pragma warning restore CS8618

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_F() : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_OverloadedOps_F_DefaultConstruct();
                    _FinalizeFields();
                }

                /// <summary>
                /// Constructs `MR::OverloadedOps::F` elementwise.
                /// </summary>
                public unsafe Const_F(int x) : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_OverloadedOps_F_ConstructFrom(x);
                    _FinalizeFields();
                }

                /// <summary>
                /// Generated from constructor `MR::OverloadedOps::F::F`.
                /// </summary>
                public unsafe Const_F(MR.CS.OverloadedOps.Const_F _other) : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_OverloadedOps_F_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                    _FinalizeFields();
                }

                /// <summary>
                /// Generated from constructor `MR::OverloadedOps::F::F`.
                /// </summary>
                public Const_F(F _other) : this((Const_F)_other) {}

                /// <summary>
                /// Generated from method `MR::OverloadedOps::F::operator==`.
                /// </summary>
                public static unsafe bool operator==(MR.CS.OverloadedOps.Const_F _this, MR.CS.OverloadedOps.Const_F _1)
                {
                    return __MR_C_equal_MR_OverloadedOps_F(_this._UnderlyingPtr, _1._UnderlyingPtr) != 0;
                }

                public static unsafe bool operator!=(MR.CS.OverloadedOps.Const_F _this, MR.CS.OverloadedOps.Const_F _1)
                {
                    return !(_this == _1);
                }

                // Declared, so it isn't added once more.
                /// <summary>
                /// Generated from method `MR::OverloadedOps::F::operator&lt;`.
                /// </summary>
                public static unsafe bool operator<(MR.CS.OverloadedOps.Const_F _this, MR.CS.OverloadedOps.Const_F _1)
                {
                    return __MR_C_less_MR_OverloadedOps_F(_this._UnderlyingPtr, _1._UnderlyingPtr) != 0;
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

                // IEquatable:

                public bool Equals(MR.CS.OverloadedOps.Const_F? _1)
                {
                    if (_1 is null)
                        return false;
                    return this == _1;
                }

                public override bool Equals(object? other)
                {
                    if (other is null)
                        return false;
                    if (other is MR.CS.OverloadedOps.Const_F)
                        return this == (MR.CS.OverloadedOps.Const_F)other;
                    return false;
                }

                // DllImport:

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_equal_MR_OverloadedOps_F", ExactSpelling = true)]
                extern static unsafe byte __MR_C_equal_MR_OverloadedOps_F(MR.CS.OverloadedOps.Const_F._Underlying *_this, MR.CS.OverloadedOps.Const_F._Underlying *_1);

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
                extern static unsafe int *__MR_OverloadedOps_F_Get_x(MR.CS.OverloadedOps.Const_F._Underlying *_this);
            }

            /// <summary>
            /// Generated from class `MR::OverloadedOps::F`.
            /// This is the non-const half of the class.
            /// </summary>
            public class F : Const_F
            {
                public new unsafe ref int x => ref *__ref_storage_x;

                // Don't warn about some fields remaining conditionally uninitialized. We initialize them later.
                #pragma warning disable CS8618
                internal unsafe F(_Underlying *ptr, bool is_owning) : base(ptr, is_owning)
                {
                    if (ptr is not null)
                        _FinalizeFields();
                }
                #pragma warning restore CS8618

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe F() : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_OverloadedOps_F_DefaultConstruct();
                    _FinalizeFields();
                }

                /// <summary>
                /// Constructs `MR::OverloadedOps::F` elementwise.
                /// </summary>
                public unsafe F(int x) : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_OverloadedOps_F_ConstructFrom(x);
                    _FinalizeFields();
                }

                /// <summary>
                /// Generated from constructor `MR::OverloadedOps::F::F`.
                /// </summary>
                public unsafe F(MR.CS.OverloadedOps.Const_F _other) : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_OverloadedOps_F_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                    _FinalizeFields();
                }

                /// <summary>
                /// Generated from constructor `MR::OverloadedOps::F::F`.
                /// </summary>
                public F(F _other) : this((Const_F)_other) {}

                /// <summary>
                /// Generated from method `MR::OverloadedOps::F::operator=`.
                /// </summary>
                public unsafe MR.CS.OverloadedOps.F assign(MR.CS.OverloadedOps.Const_F _other)
                {
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_OverloadedOps_F_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
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
            }

            /// <summary>
            /// This is used for optional parameters of class `F` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_F`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `F`/`Const_F` directly.
            /// </summary>
            public class _InOptMut_F
            {
                public F? Opt;

                public _InOptMut_F() {}
                public _InOptMut_F(F value) {Opt = value;}
                public static implicit operator _InOptMut_F(F value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `F` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_F`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `F`/`Const_F` to pass it to the function.
            /// </summary>
            public class _InOptConst_F
            {
                public Const_F? Opt;

                public _InOptConst_F() {}
                public _InOptConst_F(Const_F value) {Opt = value;}
                public static implicit operator _InOptConst_F(Const_F value) {return new(value);}
            }

            /// <summary>
            /// Generated from class `MR::OverloadedOps::G`.
            /// This is the const half of the class.
            /// </summary>
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

                public unsafe int x => *__ref_storage_x;
                private protected unsafe int *__ref_storage_x;

                /// <summary>
                /// Constructors call this at the end to initialize class fields.
                /// </summary>
                protected unsafe void _FinalizeFields()
                {
                    { // x (ref)
                        this.__ref_storage_x = __MR_OverloadedOps_G_Get_x(_UnderlyingPtr);
                    }
                }

                // Don't warn about some fields remaining conditionally uninitialized. We initialize them later.
                #pragma warning disable CS8618
                internal unsafe Const_G(_Underlying *ptr, bool is_owning) : base(is_owning)
                {
                    _UnderlyingPtr = ptr;
                    if (ptr is not null)
                        _FinalizeFields();
                }
                #pragma warning restore CS8618

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_G() : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_OverloadedOps_G_DefaultConstruct();
                    _FinalizeFields();
                }

                /// <summary>
                /// Constructs `MR::OverloadedOps::G` elementwise.
                /// </summary>
                public unsafe Const_G(int x) : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_OverloadedOps_G_ConstructFrom(x);
                    _FinalizeFields();
                }

                /// <summary>
                /// Generated from constructor `MR::OverloadedOps::G::G`.
                /// </summary>
                public unsafe Const_G(MR.CS.OverloadedOps.Const_G _other) : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_OverloadedOps_G_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                    _FinalizeFields();
                }

                /// <summary>
                /// Generated from constructor `MR::OverloadedOps::G::G`.
                /// </summary>
                public Const_G(G _other) : this((Const_G)_other) {}

                /// <summary>
                /// Generated from method `MR::OverloadedOps::G::operator&lt;`.
                /// </summary>
                public static unsafe bool operator<(MR.CS.OverloadedOps.Const_G _this, MR.CS.OverloadedOps.Const_G _1)
                {
                    return __MR_C_less_MR_OverloadedOps_G(_this._UnderlyingPtr, _1._UnderlyingPtr) != 0;
                }

                public static unsafe bool operator>(MR.CS.OverloadedOps.Const_G _this, MR.CS.OverloadedOps.Const_G _1)
                {
                    return _1 < _this;
                }

                public static unsafe bool operator<=(MR.CS.OverloadedOps.Const_G _this, MR.CS.OverloadedOps.Const_G _1)
                {
                    return !(_1 < _this);
                }

                public static unsafe bool operator>=(MR.CS.OverloadedOps.Const_G _this, MR.CS.OverloadedOps.Const_G _1)
                {
                    return !(_this < _1);
                }

                // DllImport:

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_C_less_MR_OverloadedOps_G", ExactSpelling = true)]
                extern static unsafe byte __MR_C_less_MR_OverloadedOps_G(MR.CS.OverloadedOps.Const_G._Underlying *_this, MR.CS.OverloadedOps.Const_G._Underlying *_1);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_G_ConstructFrom", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.G._Underlying *__MR_OverloadedOps_G_ConstructFrom(int x);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_G_ConstructFromAnother", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.G._Underlying *__MR_OverloadedOps_G_ConstructFromAnother(MR.CS.OverloadedOps.G._Underlying *_other);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_G_DefaultConstruct", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.G._Underlying *__MR_OverloadedOps_G_DefaultConstruct();

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_G_Destroy", ExactSpelling = true)]
                extern static unsafe void __MR_OverloadedOps_G_Destroy(_Underlying *_this);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_G_Get_x", ExactSpelling = true)]
                extern static unsafe int *__MR_OverloadedOps_G_Get_x(MR.CS.OverloadedOps.Const_G._Underlying *_this);
            }

            /// <summary>
            /// Generated from class `MR::OverloadedOps::G`.
            /// This is the non-const half of the class.
            /// </summary>
            public class G : Const_G
            {
                public new unsafe ref int x => ref *__ref_storage_x;

                // Don't warn about some fields remaining conditionally uninitialized. We initialize them later.
                #pragma warning disable CS8618
                internal unsafe G(_Underlying *ptr, bool is_owning) : base(ptr, is_owning)
                {
                    if (ptr is not null)
                        _FinalizeFields();
                }
                #pragma warning restore CS8618

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe G() : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_OverloadedOps_G_DefaultConstruct();
                    _FinalizeFields();
                }

                /// <summary>
                /// Constructs `MR::OverloadedOps::G` elementwise.
                /// </summary>
                public unsafe G(int x) : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_OverloadedOps_G_ConstructFrom(x);
                    _FinalizeFields();
                }

                /// <summary>
                /// Generated from constructor `MR::OverloadedOps::G::G`.
                /// </summary>
                public unsafe G(MR.CS.OverloadedOps.Const_G _other) : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_OverloadedOps_G_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                    _FinalizeFields();
                }

                /// <summary>
                /// Generated from constructor `MR::OverloadedOps::G::G`.
                /// </summary>
                public G(G _other) : this((Const_G)_other) {}

                /// <summary>
                /// Generated from method `MR::OverloadedOps::G::operator=`.
                /// </summary>
                public unsafe MR.CS.OverloadedOps.G assign(MR.CS.OverloadedOps.Const_G _other)
                {
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_OverloadedOps_G_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
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
            }

            /// <summary>
            /// This is used for optional parameters of class `G` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_G`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `G`/`Const_G` directly.
            /// </summary>
            public class _InOptMut_G
            {
                public G? Opt;

                public _InOptMut_G() {}
                public _InOptMut_G(G value) {Opt = value;}
                public static implicit operator _InOptMut_G(G value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `G` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_G`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `G`/`Const_G` to pass it to the function.
            /// </summary>
            public class _InOptConst_G
            {
                public Const_G? Opt;

                public _InOptConst_G() {}
                public _InOptConst_G(Const_G value) {Opt = value;}
                public static implicit operator _InOptConst_G(Const_G value) {return new(value);}
            }

            /// <summary>
            /// Generated from class `MR::OverloadedOps::H`.
            /// This is the const half of the class.
            /// </summary>
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

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_H() : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_OverloadedOps_H_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::OverloadedOps::H::H`.
                /// </summary>
                public unsafe Const_H(MR.CS.OverloadedOps.Const_H _other) : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_OverloadedOps_H_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// <summary>
                /// Generated from constructor `MR::OverloadedOps::H::H`.
                /// </summary>
                public Const_H(H _other) : this((Const_H)_other) {}

                // Gives `!=`.
                /// <summary>
                /// Generated from method `MR::OverloadedOps::H::operator==`.
                /// </summary>
                public static unsafe bool operator==(MR.CS.OverloadedOps.Const_H _this, MR.CS.OverloadedOps.Const_H _1)
                {
                    return __MR_C_equal_MR_OverloadedOps_H(_this._UnderlyingPtr, _1._UnderlyingPtr) != 0;
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

            /// <summary>
            /// Generated from class `MR::OverloadedOps::H`.
            /// This is the non-const half of the class.
            /// </summary>
            public class H : Const_H
            {
                internal unsafe H(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe H() : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_OverloadedOps_H_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::OverloadedOps::H::H`.
                /// </summary>
                public unsafe H(MR.CS.OverloadedOps.Const_H _other) : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_OverloadedOps_H_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// <summary>
                /// Generated from constructor `MR::OverloadedOps::H::H`.
                /// </summary>
                public H(H _other) : this((Const_H)_other) {}

                /// <summary>
                /// Generated from method `MR::OverloadedOps::H::operator=`.
                /// </summary>
                public unsafe MR.CS.OverloadedOps.H assign(MR.CS.OverloadedOps.Const_H _other)
                {
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_OverloadedOps_H_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }

                // DllImport:

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_H_AssignFromAnother", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.H._Underlying *__MR_OverloadedOps_H_AssignFromAnother(_Underlying *_this, MR.CS.OverloadedOps.H._Underlying *_other);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_H_ConstructFromAnother", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.H._Underlying *__MR_OverloadedOps_H_ConstructFromAnother(MR.CS.OverloadedOps.H._Underlying *_other);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_H_DefaultConstruct", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.H._Underlying *__MR_OverloadedOps_H_DefaultConstruct();
            }

            /// <summary>
            /// This is used for optional parameters of class `H` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_H`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `H`/`Const_H` directly.
            /// </summary>
            public class _InOptMut_H
            {
                public H? Opt;

                public _InOptMut_H() {}
                public _InOptMut_H(H value) {Opt = value;}
                public static implicit operator _InOptMut_H(H value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `H` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_H`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `H`/`Const_H` to pass it to the function.
            /// </summary>
            public class _InOptConst_H
            {
                public Const_H? Opt;

                public _InOptConst_H() {}
                public _InOptConst_H(Const_H value) {Opt = value;}
                public static implicit operator _InOptConst_H(Const_H value) {return new(value);}
            }

            /// <summary>
            /// Generated from class `MR::OverloadedOps::I`.
            /// This is the const half of the class.
            /// </summary>
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

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe Const_I() : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_OverloadedOps_I_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::OverloadedOps::I::I`.
                /// </summary>
                public unsafe Const_I(MR.CS.OverloadedOps.Const_I _other) : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_OverloadedOps_I_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// <summary>
                /// Generated from constructor `MR::OverloadedOps::I::I`.
                /// </summary>
                public Const_I(I _other) : this((Const_I)_other) {}

                // Gives a free `!=`.
                /// <summary>
                /// Generated from function `MR::OverloadedOps::operator==`.
                /// </summary>
                public static unsafe bool operator==(MR.CS.OverloadedOps.Const_I _1, MR.CS.OverloadedOps.Const_I _2)
                {
                    return __MR_C_equal_MR_OverloadedOps_I(_1._UnderlyingPtr, _2._UnderlyingPtr) != 0;
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

            /// <summary>
            /// Generated from class `MR::OverloadedOps::I`.
            /// This is the non-const half of the class.
            /// </summary>
            public class I : Const_I
            {
                internal unsafe I(_Underlying *ptr, bool is_owning) : base(ptr, is_owning) {}

                /// <summary>
                /// Constructs an empty (default-constructed) instance.
                /// </summary>
                public unsafe I() : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_OverloadedOps_I_DefaultConstruct();
                }

                /// <summary>
                /// Generated from constructor `MR::OverloadedOps::I::I`.
                /// </summary>
                public unsafe I(MR.CS.OverloadedOps.Const_I _other) : this(null, is_owning: true)
                {
                    _UnderlyingPtr = __MR_OverloadedOps_I_ConstructFromAnother(_other._UnderlyingPtr);
                    _KeepAlive(_other);
                }

                /// <summary>
                /// Generated from constructor `MR::OverloadedOps::I::I`.
                /// </summary>
                public I(I _other) : this((Const_I)_other) {}

                /// <summary>
                /// Generated from method `MR::OverloadedOps::I::operator=`.
                /// </summary>
                public unsafe MR.CS.OverloadedOps.I assign(MR.CS.OverloadedOps.Const_I _other)
                {
                    _DiscardKeepAlive();
                    _KeepAlive(_other);
                    return new(__MR_OverloadedOps_I_AssignFromAnother(_UnderlyingPtr, _other._UnderlyingPtr), is_owning: false);
                }

                // DllImport:

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_I_AssignFromAnother", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.I._Underlying *__MR_OverloadedOps_I_AssignFromAnother(_Underlying *_this, MR.CS.OverloadedOps.I._Underlying *_other);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_I_ConstructFromAnother", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.I._Underlying *__MR_OverloadedOps_I_ConstructFromAnother(MR.CS.OverloadedOps.I._Underlying *_other);

                [System.Runtime.InteropServices.DllImport("bleh", EntryPoint = "MR_OverloadedOps_I_DefaultConstruct", ExactSpelling = true)]
                extern static unsafe MR.CS.OverloadedOps.I._Underlying *__MR_OverloadedOps_I_DefaultConstruct();
            }

            /// <summary>
            /// This is used for optional parameters of class `I` with default arguments.
            /// This is only used mutable parameters. For const ones we have `_InOptConst_I`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `I`/`Const_I` directly.
            /// </summary>
            public class _InOptMut_I
            {
                public I? Opt;

                public _InOptMut_I() {}
                public _InOptMut_I(I value) {Opt = value;}
                public static implicit operator _InOptMut_I(I value) {return new(value);}
            }

            /// <summary>
            /// This is used for optional parameters of class `I` with default arguments.
            /// This is only used const parameters. For non-const ones we have `_InOptMut_I`.
            /// Usage:
            /// * Pass `null` to use the default argument.
            /// * Pass `new()` to pass no object.
            /// * Pass an instance of `I`/`Const_I` to pass it to the function.
            /// </summary>
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
