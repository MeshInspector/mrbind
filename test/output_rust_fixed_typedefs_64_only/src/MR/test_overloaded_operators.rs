/// Member functions.
/// Generated from class `MR::OverloadedOps::A`.
///
/// Generated from class `MR::OverloadedOps::A`. Heap-allocated instances are held in `Owned<A>`.
#[repr(transparent)]
pub struct A(crate::ffi::MR_OverloadedOps_A);

unsafe impl crate::CppClass for A
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_OverloadedOps_A_Destroy(ptr as *const crate::ffi::MR_OverloadedOps_A)}
}

impl A
{
    /// Since we have a custom assignment, we also need a custom copy ctor to avoid the deprecation warning.
    /// Generated from constructor `MR::OverloadedOps::A::A`.
    ///
    /// Calls `MR_OverloadedOps_A_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::overloaded_ops::A) -> crate::Owned<crate::mr::overloaded_ops::A>
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_A_ConstructFromAnother(_other as *const crate::mr::overloaded_ops::A as *const crate::ffi::MR_OverloadedOps_A)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::overloaded_ops::A)}
    }

    /// Assign.
    /// Generated from method `MR::OverloadedOps::A::operator=`.
    ///
    /// Calls `MR_OverloadedOps_A_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::overloaded_ops::A) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_A_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_A, _other as *const crate::mr::overloaded_ops::A as *const crate::ffi::MR_OverloadedOps_A)};
        __ret
    }

    /// Unary plus.
    /// Generated from method `MR::OverloadedOps::A::operator+`.
    ///
    /// Calls `MR_C_pos_MR_OverloadedOps_A()`.
    pub fn op_pos(&mut self) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_C_pos_MR_OverloadedOps_A(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_A)};
        __ret
    }

    /// Binary plus.
    /// Generated from method `MR::OverloadedOps::A::operator+`.
    ///
    /// Calls `MR_C_add_MR_OverloadedOps_A()`.
    pub fn op_add(&mut self, _1: &crate::mr::overloaded_ops::A) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_C_add_MR_OverloadedOps_A(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_A, _1 as *const crate::mr::overloaded_ops::A as *const crate::ffi::MR_OverloadedOps_A)};
        __ret
    }

    /// Unary minus.
    /// Generated from method `MR::OverloadedOps::A::operator-`.
    ///
    /// Calls `MR_C_neg_MR_OverloadedOps_A()`.
    pub fn op_neg(&mut self) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_C_neg_MR_OverloadedOps_A(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_A)};
        __ret
    }

    /// Binary minus.
    /// Generated from method `MR::OverloadedOps::A::operator-`.
    ///
    /// Calls `MR_C_sub_MR_OverloadedOps_A()`.
    pub fn op_sub(&mut self, _1: &crate::mr::overloaded_ops::A) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_C_sub_MR_OverloadedOps_A(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_A, _1 as *const crate::mr::overloaded_ops::A as *const crate::ffi::MR_OverloadedOps_A)};
        __ret
    }

    /// Dereference (unary star).
    /// Generated from method `MR::OverloadedOps::A::operator*`.
    ///
    /// Calls `MR_C_deref_MR_OverloadedOps_A()`.
    pub fn op_deref(&mut self) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_C_deref_MR_OverloadedOps_A(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_A)};
        __ret
    }

    /// Multiply (binary star).
    /// Generated from method `MR::OverloadedOps::A::operator*`.
    ///
    /// Calls `MR_C_mul_MR_OverloadedOps_A()`.
    pub fn op_mul(&mut self, _1: &crate::mr::overloaded_ops::A) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_C_mul_MR_OverloadedOps_A(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_A, _1 as *const crate::mr::overloaded_ops::A as *const crate::ffi::MR_OverloadedOps_A)};
        __ret
    }

    /// Divide.
    /// Generated from method `MR::OverloadedOps::A::operator/`.
    ///
    /// Calls `MR_C_div_MR_OverloadedOps_A()`.
    pub fn op_div(&mut self, _1: &crate::mr::overloaded_ops::A) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_C_div_MR_OverloadedOps_A(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_A, _1 as *const crate::mr::overloaded_ops::A as *const crate::ffi::MR_OverloadedOps_A)};
        __ret
    }

    /// Modulo.
    /// Generated from method `MR::OverloadedOps::A::operator%`.
    ///
    /// Calls `MR_C_mod_MR_OverloadedOps_A()`.
    pub fn op_mod(&mut self, _1: &crate::mr::overloaded_ops::A) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_C_mod_MR_OverloadedOps_A(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_A, _1 as *const crate::mr::overloaded_ops::A as *const crate::ffi::MR_OverloadedOps_A)};
        __ret
    }

    /// Bit xor.
    /// Generated from method `MR::OverloadedOps::A::operator^`.
    ///
    /// Calls `MR_C_xor_MR_OverloadedOps_A()`.
    pub fn op_xor(&mut self, _1: &crate::mr::overloaded_ops::A) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_C_xor_MR_OverloadedOps_A(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_A, _1 as *const crate::mr::overloaded_ops::A as *const crate::ffi::MR_OverloadedOps_A)};
        __ret
    }

    /// Bit and.
    /// Generated from method `MR::OverloadedOps::A::operator&`.
    ///
    /// Calls `MR_C_bitand_MR_OverloadedOps_A()`.
    pub fn op_bitand(&mut self, _1: &crate::mr::overloaded_ops::A) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_C_bitand_MR_OverloadedOps_A(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_A, _1 as *const crate::mr::overloaded_ops::A as *const crate::ffi::MR_OverloadedOps_A)};
        __ret
    }

    /// Bit or.
    /// Generated from method `MR::OverloadedOps::A::operator|`.
    ///
    /// Calls `MR_C_bitor_MR_OverloadedOps_A()`.
    pub fn op_bitor(&mut self, _1: &crate::mr::overloaded_ops::A) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_C_bitor_MR_OverloadedOps_A(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_A, _1 as *const crate::mr::overloaded_ops::A as *const crate::ffi::MR_OverloadedOps_A)};
        __ret
    }

    /// Bit negate.
    /// Generated from method `MR::OverloadedOps::A::operator~`.
    ///
    /// Calls `MR_C_compl_MR_OverloadedOps_A()`.
    pub fn op_compl(&mut self) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_C_compl_MR_OverloadedOps_A(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_A)};
        __ret
    }

    /// Boolean negate.
    /// Generated from method `MR::OverloadedOps::A::operator!`.
    ///
    /// Calls `MR_C_not_MR_OverloadedOps_A()`.
    pub fn op_not(&mut self) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_C_not_MR_OverloadedOps_A(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_A)};
        __ret
    }

    /// Less.
    /// Generated from method `MR::OverloadedOps::A::operator<`.
    ///
    /// Calls `MR_C_less_MR_OverloadedOps_A()`.
    pub fn op_less(&mut self, _1: &crate::mr::overloaded_ops::A) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_C_less_MR_OverloadedOps_A(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_A, _1 as *const crate::mr::overloaded_ops::A as *const crate::ffi::MR_OverloadedOps_A)};
        __ret
    }

    /// Greater.
    /// Generated from method `MR::OverloadedOps::A::operator>`.
    ///
    /// Calls `MR_C_greater_MR_OverloadedOps_A()`.
    pub fn op_greater(&mut self, _1: &crate::mr::overloaded_ops::A) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_C_greater_MR_OverloadedOps_A(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_A, _1 as *const crate::mr::overloaded_ops::A as *const crate::ffi::MR_OverloadedOps_A)};
        __ret
    }

    /// Plus assign.
    /// Generated from method `MR::OverloadedOps::A::operator+=`.
    ///
    /// Calls `MR_OverloadedOps_A_add_assign()`.
    pub fn add_assign(&mut self, _1: &crate::mr::overloaded_ops::A) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_A_add_assign(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_A, _1 as *const crate::mr::overloaded_ops::A as *const crate::ffi::MR_OverloadedOps_A)};
        __ret
    }

    /// Minus assign.
    /// Generated from method `MR::OverloadedOps::A::operator-=`.
    ///
    /// Calls `MR_OverloadedOps_A_sub_assign()`.
    pub fn sub_assign(&mut self, _1: &crate::mr::overloaded_ops::A) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_A_sub_assign(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_A, _1 as *const crate::mr::overloaded_ops::A as *const crate::ffi::MR_OverloadedOps_A)};
        __ret
    }

    /// Multiply assign.
    /// Generated from method `MR::OverloadedOps::A::operator*=`.
    ///
    /// Calls `MR_OverloadedOps_A_mul_assign()`.
    pub fn mul_assign(&mut self, _1: &crate::mr::overloaded_ops::A) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_A_mul_assign(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_A, _1 as *const crate::mr::overloaded_ops::A as *const crate::ffi::MR_OverloadedOps_A)};
        __ret
    }

    /// Divide assign.
    /// Generated from method `MR::OverloadedOps::A::operator/=`.
    ///
    /// Calls `MR_OverloadedOps_A_div_assign()`.
    pub fn div_assign(&mut self, _1: &crate::mr::overloaded_ops::A) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_A_div_assign(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_A, _1 as *const crate::mr::overloaded_ops::A as *const crate::ffi::MR_OverloadedOps_A)};
        __ret
    }

    /// Modulo assign.
    /// Generated from method `MR::OverloadedOps::A::operator%=`.
    ///
    /// Calls `MR_OverloadedOps_A_mod_assign()`.
    pub fn mod_assign(&mut self, _1: &crate::mr::overloaded_ops::A) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_A_mod_assign(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_A, _1 as *const crate::mr::overloaded_ops::A as *const crate::ffi::MR_OverloadedOps_A)};
        __ret
    }

    /// Bit xor assign.
    /// Generated from method `MR::OverloadedOps::A::operator^=`.
    ///
    /// Calls `MR_OverloadedOps_A_xor_assign()`.
    pub fn xor_assign(&mut self, _1: &crate::mr::overloaded_ops::A) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_A_xor_assign(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_A, _1 as *const crate::mr::overloaded_ops::A as *const crate::ffi::MR_OverloadedOps_A)};
        __ret
    }

    /// Bit and assign.
    /// Generated from method `MR::OverloadedOps::A::operator&=`.
    ///
    /// Calls `MR_OverloadedOps_A_bitand_assign()`.
    pub fn bitand_assign(&mut self, _1: &crate::mr::overloaded_ops::A) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_A_bitand_assign(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_A, _1 as *const crate::mr::overloaded_ops::A as *const crate::ffi::MR_OverloadedOps_A)};
        __ret
    }

    /// Bit or assign.
    /// Generated from method `MR::OverloadedOps::A::operator|=`.
    ///
    /// Calls `MR_OverloadedOps_A_bitor_assign()`.
    pub fn bitor_assign(&mut self, _1: &crate::mr::overloaded_ops::A) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_A_bitor_assign(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_A, _1 as *const crate::mr::overloaded_ops::A as *const crate::ffi::MR_OverloadedOps_A)};
        __ret
    }

    /// Left shift.
    /// Generated from method `MR::OverloadedOps::A::operator<<`.
    ///
    /// Calls `MR_C_lshift_MR_OverloadedOps_A()`.
    pub fn op_lshift(&mut self, _1: &crate::mr::overloaded_ops::A) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_C_lshift_MR_OverloadedOps_A(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_A, _1 as *const crate::mr::overloaded_ops::A as *const crate::ffi::MR_OverloadedOps_A)};
        __ret
    }

    /// Right shift.
    /// Generated from method `MR::OverloadedOps::A::operator>>`.
    ///
    /// Calls `MR_C_rshift_MR_OverloadedOps_A()`.
    pub fn op_rshift(&mut self, _1: &crate::mr::overloaded_ops::A) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_C_rshift_MR_OverloadedOps_A(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_A, _1 as *const crate::mr::overloaded_ops::A as *const crate::ffi::MR_OverloadedOps_A)};
        __ret
    }

    /// Left shift assign.
    /// Generated from method `MR::OverloadedOps::A::operator<<=`.
    ///
    /// Calls `MR_OverloadedOps_A_lshift_assign()`.
    pub fn lshift_assign(&mut self, _1: &crate::mr::overloaded_ops::A) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_A_lshift_assign(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_A, _1 as *const crate::mr::overloaded_ops::A as *const crate::ffi::MR_OverloadedOps_A)};
        __ret
    }

    /// Right shift assign.
    /// Generated from method `MR::OverloadedOps::A::operator>>=`.
    ///
    /// Calls `MR_OverloadedOps_A_rshift_assign()`.
    pub fn rshift_assign(&mut self, _1: &crate::mr::overloaded_ops::A) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_A_rshift_assign(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_A, _1 as *const crate::mr::overloaded_ops::A as *const crate::ffi::MR_OverloadedOps_A)};
        __ret
    }

    /// Equal.
    /// Generated from method `MR::OverloadedOps::A::operator==`.
    ///
    /// Calls `MR_C_equal_MR_OverloadedOps_A()`.
    pub fn op_equal(&mut self, _1: &crate::mr::overloaded_ops::A) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_C_equal_MR_OverloadedOps_A(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_A, _1 as *const crate::mr::overloaded_ops::A as *const crate::ffi::MR_OverloadedOps_A)};
        __ret
    }

    /// Not equal.
    /// Generated from method `MR::OverloadedOps::A::operator!=`.
    ///
    /// Calls `MR_C_not_equal_MR_OverloadedOps_A()`.
    pub fn op_not_equal(&mut self, _1: &crate::mr::overloaded_ops::A) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_C_not_equal_MR_OverloadedOps_A(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_A, _1 as *const crate::mr::overloaded_ops::A as *const crate::ffi::MR_OverloadedOps_A)};
        __ret
    }

    /// Less equal.
    /// Generated from method `MR::OverloadedOps::A::operator<=`.
    ///
    /// Calls `MR_C_less_equal_MR_OverloadedOps_A()`.
    pub fn op_less_equal(&mut self, _1: &crate::mr::overloaded_ops::A) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_C_less_equal_MR_OverloadedOps_A(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_A, _1 as *const crate::mr::overloaded_ops::A as *const crate::ffi::MR_OverloadedOps_A)};
        __ret
    }

    /// Greater equal.
    /// Generated from method `MR::OverloadedOps::A::operator>=`.
    ///
    /// Calls `MR_C_greater_equal_MR_OverloadedOps_A()`.
    pub fn op_greater_equal(&mut self, _1: &crate::mr::overloaded_ops::A) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_C_greater_equal_MR_OverloadedOps_A(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_A, _1 as *const crate::mr::overloaded_ops::A as *const crate::ffi::MR_OverloadedOps_A)};
        __ret
    }

    /// Compare three way.
    /// Generated from method `MR::OverloadedOps::A::operator<=>`.
    ///
    /// Calls `MR_C_compare_three_way_MR_OverloadedOps_A()`.
    pub fn op_compare_three_way(&mut self, _1: &crate::mr::overloaded_ops::A) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_C_compare_three_way_MR_OverloadedOps_A(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_A, _1 as *const crate::mr::overloaded_ops::A as *const crate::ffi::MR_OverloadedOps_A)};
        __ret
    }

    /// And.
    /// Generated from method `MR::OverloadedOps::A::operator&&`.
    ///
    /// Calls `MR_C_and_MR_OverloadedOps_A()`.
    pub fn op_and(&mut self, _1: &crate::mr::overloaded_ops::A) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_C_and_MR_OverloadedOps_A(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_A, _1 as *const crate::mr::overloaded_ops::A as *const crate::ffi::MR_OverloadedOps_A)};
        __ret
    }

    /// Or.
    /// Generated from method `MR::OverloadedOps::A::operator||`.
    ///
    /// Calls `MR_C_or_MR_OverloadedOps_A()`.
    pub fn op_or(&mut self, _1: &crate::mr::overloaded_ops::A) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_C_or_MR_OverloadedOps_A(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_A, _1 as *const crate::mr::overloaded_ops::A as *const crate::ffi::MR_OverloadedOps_A)};
        __ret
    }

    /// Pre-increment.
    /// Generated from method `MR::OverloadedOps::A::operator++`.
    ///
    /// Calls `MR_C_incr_MR_OverloadedOps_A()`.
    pub fn op_incr(&mut self) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_C_incr_MR_OverloadedOps_A(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_A)};
        __ret
    }

    /// Post-increment.
    /// Generated from method `MR::OverloadedOps::A::operator++`.
    ///
    /// Calls `MR_C_post_incr_MR_OverloadedOps_A()`.
    pub fn op_post_incr(&mut self) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_C_post_incr_MR_OverloadedOps_A(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_A)};
        __ret
    }

    /// Pre-decrement.
    /// Generated from method `MR::OverloadedOps::A::operator--`.
    ///
    /// Calls `MR_C_decr_MR_OverloadedOps_A()`.
    pub fn op_decr(&mut self) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_C_decr_MR_OverloadedOps_A(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_A)};
        __ret
    }

    /// Post-decrement.
    /// Generated from method `MR::OverloadedOps::A::operator--`.
    ///
    /// Calls `MR_C_post_decr_MR_OverloadedOps_A()`.
    pub fn op_post_decr(&mut self) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_C_post_decr_MR_OverloadedOps_A(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_A)};
        __ret
    }

    /// Comma.
    /// Generated from method `MR::OverloadedOps::A::operator,`.
    ///
    /// Calls `MR_C_comma_MR_OverloadedOps_A()`.
    pub fn op_comma(&mut self, _1: &crate::mr::overloaded_ops::A) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_C_comma_MR_OverloadedOps_A(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_A, _1 as *const crate::mr::overloaded_ops::A as *const crate::ffi::MR_OverloadedOps_A)};
        __ret
    }

    /// Arrow star.
    /// Generated from method `MR::OverloadedOps::A::operator->*`.
    ///
    /// Calls `MR_OverloadedOps_A_arrow_star()`.
    pub fn arrow_star(&mut self, _1: &crate::mr::overloaded_ops::A) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_A_arrow_star(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_A, _1 as *const crate::mr::overloaded_ops::A as *const crate::ffi::MR_OverloadedOps_A)};
        __ret
    }

    /// Arrow.
    /// Generated from method `MR::OverloadedOps::A::operator->`.
    ///
    /// Calls `MR_OverloadedOps_A_arrow()`.
    pub fn arrow(&mut self) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_A_arrow(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_A)};
        __ret
    }

    /// Function call.
    /// Generated from method `MR::OverloadedOps::A::operator()`.
    ///
    /// Calls `MR_OverloadedOps_A_call()`.
    pub fn call(&mut self, _1: &crate::mr::overloaded_ops::A) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_A_call(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_A, _1 as *const crate::mr::overloaded_ops::A as *const crate::ffi::MR_OverloadedOps_A)};
        __ret
    }

    /// Indexing.
    /// Generated from method `MR::OverloadedOps::A::operator[]`.
    ///
    /// Calls `MR_OverloadedOps_A_index()`.
    pub fn index(&mut self, _1: &crate::mr::overloaded_ops::A) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_A_index(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_A, _1 as *const crate::mr::overloaded_ops::A as *const crate::ffi::MR_OverloadedOps_A)};
        __ret
    }

}

unsafe impl crate::CppCopy for A
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Free functions.
/// Generated from class `MR::OverloadedOps::B`.
///
/// Generated from class `MR::OverloadedOps::B`. Heap-allocated instances are held in `Owned<B>`.
#[repr(transparent)]
pub struct B(crate::ffi::MR_OverloadedOps_B);

unsafe impl crate::CppClass for B
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_OverloadedOps_B_Destroy(ptr as *const crate::ffi::MR_OverloadedOps_B)}
}

impl B
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_OverloadedOps_B_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::overloaded_ops::B>
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_B_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::overloaded_ops::B)}
    }

    /// Generated from constructor `MR::OverloadedOps::B::B`.
    ///
    /// Calls `MR_OverloadedOps_B_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::overloaded_ops::B) -> crate::Owned<crate::mr::overloaded_ops::B>
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_B_ConstructFromAnother(_other as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::overloaded_ops::B)}
    }

    /// Generated from method `MR::OverloadedOps::B::operator=`.
    ///
    /// Calls `MR_OverloadedOps_B_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::overloaded_ops::B) -> &mut crate::mr::overloaded_ops::B
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_B_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_B, _other as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B)};
        unsafe {&mut *(__ret as *mut crate::mr::overloaded_ops::B)}
    }

}

unsafe impl crate::CppCopy for B
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Test how the names are generated.
/// Generated from class `MR::OverloadedOps::C`.
///
/// Generated from class `MR::OverloadedOps::C`. Heap-allocated instances are held in `Owned<C>`.
#[repr(transparent)]
pub struct C(crate::ffi::MR_OverloadedOps_C);

unsafe impl crate::CppClass for C
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_OverloadedOps_C_Destroy(ptr as *const crate::ffi::MR_OverloadedOps_C)}
}

impl C
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_OverloadedOps_C_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::overloaded_ops::C>
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_C_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::overloaded_ops::C)}
    }

    /// Generated from constructor `MR::OverloadedOps::C::C`.
    ///
    /// Calls `MR_OverloadedOps_C_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::overloaded_ops::C) -> crate::Owned<crate::mr::overloaded_ops::C>
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_C_ConstructFromAnother(_other as *const crate::mr::overloaded_ops::C as *const crate::ffi::MR_OverloadedOps_C)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::overloaded_ops::C)}
    }

    /// Generated from method `MR::OverloadedOps::C::operator=`.
    ///
    /// Calls `MR_OverloadedOps_C_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::overloaded_ops::C) -> &mut crate::mr::overloaded_ops::C
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_C_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_C, _other as *const crate::mr::overloaded_ops::C as *const crate::ffi::MR_OverloadedOps_C)};
        unsafe {&mut *(__ret as *mut crate::mr::overloaded_ops::C)}
    }

}

unsafe impl crate::CppCopy for C
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::OverloadedOps::D`.
///
/// Generated from class `MR::OverloadedOps::D`. Heap-allocated instances are held in `Owned<D>`.
#[repr(transparent)]
pub struct D(crate::ffi::MR_OverloadedOps_D);

unsafe impl crate::CppClass for D
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_OverloadedOps_D_Destroy(ptr as *const crate::ffi::MR_OverloadedOps_D)}
}

impl D
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_OverloadedOps_D_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::overloaded_ops::D>
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_D_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::overloaded_ops::D)}
    }

    /// Generated from constructor `MR::OverloadedOps::D::D`.
    ///
    /// Calls `MR_OverloadedOps_D_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::overloaded_ops::D) -> crate::Owned<crate::mr::overloaded_ops::D>
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_D_ConstructFromAnother(_other as *const crate::mr::overloaded_ops::D as *const crate::ffi::MR_OverloadedOps_D)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::overloaded_ops::D)}
    }

    /// Generated from method `MR::OverloadedOps::D::operator=`.
    ///
    /// Calls `MR_OverloadedOps_D_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::overloaded_ops::D) -> &mut crate::mr::overloaded_ops::D
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_D_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_D, _other as *const crate::mr::overloaded_ops::D as *const crate::ffi::MR_OverloadedOps_D)};
        unsafe {&mut *(__ret as *mut crate::mr::overloaded_ops::D)}
    }

    /// Disambiguating the names.
    /// Generated from method `MR::OverloadedOps::D::operator*`.
    ///
    /// Calls `MR_C_deref_MR_OverloadedOps_D_ref()`.
    pub fn op_deref_ref(&mut self) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_C_deref_MR_OverloadedOps_D_ref(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_D)};
        __ret
    }

    /// Generated from method `MR::OverloadedOps::D::operator*`.
    ///
    /// Calls `MR_C_deref_const_MR_OverloadedOps_D_ref()`.
    pub fn op_deref_const_ref(&self) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_C_deref_const_MR_OverloadedOps_D_ref(self as *const Self as *const crate::ffi::MR_OverloadedOps_D)};
        __ret
    }

}

unsafe impl crate::CppCopy for D
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::OverloadedOps::E`.
///
/// Generated from class `MR::OverloadedOps::E`. Heap-allocated instances are held in `Owned<E>`.
#[repr(transparent)]
pub struct E(crate::ffi::MR_OverloadedOps_E);

unsafe impl crate::CppClass for E
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_OverloadedOps_E_Destroy(ptr as *const crate::ffi::MR_OverloadedOps_E)}
}

impl E
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_OverloadedOps_E_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::overloaded_ops::E>
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_E_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::overloaded_ops::E)}
    }

    /// Constructs `MR::OverloadedOps::E` elementwise.
    ///
    /// Calls `MR_OverloadedOps_E_ConstructFrom()`.
    pub fn construct_from(x: core::ffi::c_int) -> crate::Owned<crate::mr::overloaded_ops::E>
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_E_ConstructFrom(x)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::overloaded_ops::E)}
    }

    /// Generated from constructor `MR::OverloadedOps::E::E`.
    ///
    /// Calls `MR_OverloadedOps_E_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::overloaded_ops::E) -> crate::Owned<crate::mr::overloaded_ops::E>
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_E_ConstructFromAnother(_other as *const crate::mr::overloaded_ops::E as *const crate::ffi::MR_OverloadedOps_E)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::overloaded_ops::E)}
    }

    /// Generated from method `MR::OverloadedOps::E::operator=`.
    ///
    /// Calls `MR_OverloadedOps_E_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::overloaded_ops::E) -> &mut crate::mr::overloaded_ops::E
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_E_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_E, _other as *const crate::mr::overloaded_ops::E as *const crate::ffi::MR_OverloadedOps_E)};
        unsafe {&mut *(__ret as *mut crate::mr::overloaded_ops::E)}
    }

    /// Implicitly declares a defaulted `operator==` too. That and the `<=>` give `!=`, `<`, `>`, `<=` and `>=`.
    /// Generated from method `MR::OverloadedOps::E::operator<=>`.
    ///
    /// Calls `MR_C_compare_three_way_MR_OverloadedOps_E()`.
    pub fn op_compare_three_way(&self, _1: &crate::mr::overloaded_ops::E) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_C_compare_three_way_MR_OverloadedOps_E(self as *const Self as *const crate::ffi::MR_OverloadedOps_E, _1 as *const crate::mr::overloaded_ops::E as *const crate::ffi::MR_OverloadedOps_E)};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::OverloadedOps::E` named `x`.
    ///
    /// Calls `MR_OverloadedOps_E_Get_x()`.
    /// The reference to this object might be preserved as the return value.
    pub fn x<'a>(&'a self) -> &'a core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_E_Get_x(self as *const Self as *const crate::ffi::MR_OverloadedOps_E)};
        unsafe {&*(__ret as *const core::ffi::c_int)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::OverloadedOps::E` named `x`.
    ///
    /// Calls `MR_OverloadedOps_E_GetMutable_x()`.
    /// The reference to this object might be preserved as the return value.
    pub fn x_mut<'a>(&'a mut self) -> &'a mut core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_E_GetMutable_x(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_E)};
        unsafe {&mut *(__ret as *mut core::ffi::c_int)}
    }

    /// Modifies a member variable of class `MR::OverloadedOps::E` named `x`.
    ///
    /// Calls `MR_OverloadedOps_E_Set_x()`.
    pub fn set_x(&mut self, value: core::ffi::c_int)
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_E_Set_x(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_E, value)};
        __ret
    }

}

unsafe impl crate::CppCopy for E
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::OverloadedOps::F`.
///
/// Generated from class `MR::OverloadedOps::F`. Heap-allocated instances are held in `Owned<F>`.
#[repr(transparent)]
pub struct F(crate::ffi::MR_OverloadedOps_F);

unsafe impl crate::CppClass for F
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_OverloadedOps_F_Destroy(ptr as *const crate::ffi::MR_OverloadedOps_F)}
}

impl F
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_OverloadedOps_F_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::overloaded_ops::F>
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_F_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::overloaded_ops::F)}
    }

    /// Constructs `MR::OverloadedOps::F` elementwise.
    ///
    /// Calls `MR_OverloadedOps_F_ConstructFrom()`.
    pub fn construct_from(x: core::ffi::c_int) -> crate::Owned<crate::mr::overloaded_ops::F>
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_F_ConstructFrom(x)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::overloaded_ops::F)}
    }

    /// Generated from constructor `MR::OverloadedOps::F::F`.
    ///
    /// Calls `MR_OverloadedOps_F_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::overloaded_ops::F) -> crate::Owned<crate::mr::overloaded_ops::F>
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_F_ConstructFromAnother(_other as *const crate::mr::overloaded_ops::F as *const crate::ffi::MR_OverloadedOps_F)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::overloaded_ops::F)}
    }

    /// Generated from method `MR::OverloadedOps::F::operator=`.
    ///
    /// Calls `MR_OverloadedOps_F_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::overloaded_ops::F) -> &mut crate::mr::overloaded_ops::F
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_F_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_F, _other as *const crate::mr::overloaded_ops::F as *const crate::ffi::MR_OverloadedOps_F)};
        unsafe {&mut *(__ret as *mut crate::mr::overloaded_ops::F)}
    }

    /// Generated from method `MR::OverloadedOps::F::operator<=>`.
    ///
    /// Calls `MR_C_compare_three_way_MR_OverloadedOps_F()`.
    pub fn op_compare_three_way(&self, _1: &crate::mr::overloaded_ops::F) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_C_compare_three_way_MR_OverloadedOps_F(self as *const Self as *const crate::ffi::MR_OverloadedOps_F, _1 as *const crate::mr::overloaded_ops::F as *const crate::ffi::MR_OverloadedOps_F)};
        __ret
    }

    /// Declared, so it isn't added once more.
    /// Generated from method `MR::OverloadedOps::F::operator<`.
    ///
    /// Calls `MR_C_less_MR_OverloadedOps_F()`.
    pub fn op_less(&self, _1: &crate::mr::overloaded_ops::F) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_less_MR_OverloadedOps_F(self as *const Self as *const crate::ffi::MR_OverloadedOps_F, _1 as *const crate::mr::overloaded_ops::F as *const crate::ffi::MR_OverloadedOps_F)};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::OverloadedOps::F` named `x`.
    ///
    /// Calls `MR_OverloadedOps_F_Get_x()`.
    /// The reference to this object might be preserved as the return value.
    pub fn x<'a>(&'a self) -> &'a core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_F_Get_x(self as *const Self as *const crate::ffi::MR_OverloadedOps_F)};
        unsafe {&*(__ret as *const core::ffi::c_int)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::OverloadedOps::F` named `x`.
    ///
    /// Calls `MR_OverloadedOps_F_GetMutable_x()`.
    /// The reference to this object might be preserved as the return value.
    pub fn x_mut<'a>(&'a mut self) -> &'a mut core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_F_GetMutable_x(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_F)};
        unsafe {&mut *(__ret as *mut core::ffi::c_int)}
    }

    /// Modifies a member variable of class `MR::OverloadedOps::F` named `x`.
    ///
    /// Calls `MR_OverloadedOps_F_Set_x()`.
    pub fn set_x(&mut self, value: core::ffi::c_int)
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_F_Set_x(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_F, value)};
        __ret
    }

}

unsafe impl crate::CppCopy for F
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::OverloadedOps::G`.
///
/// Generated from class `MR::OverloadedOps::G`. Heap-allocated instances are held in `Owned<G>`.
#[repr(transparent)]
pub struct G(crate::ffi::MR_OverloadedOps_G);

unsafe impl crate::CppClass for G
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_OverloadedOps_G_Destroy(ptr as *const crate::ffi::MR_OverloadedOps_G)}
}

impl G
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_OverloadedOps_G_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::overloaded_ops::G>
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_G_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::overloaded_ops::G)}
    }

    /// Constructs `MR::OverloadedOps::G` elementwise.
    ///
    /// Calls `MR_OverloadedOps_G_ConstructFrom()`.
    pub fn construct_from(x: core::ffi::c_int) -> crate::Owned<crate::mr::overloaded_ops::G>
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_G_ConstructFrom(x)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::overloaded_ops::G)}
    }

    /// Generated from constructor `MR::OverloadedOps::G::G`.
    ///
    /// Calls `MR_OverloadedOps_G_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::overloaded_ops::G) -> crate::Owned<crate::mr::overloaded_ops::G>
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_G_ConstructFromAnother(_other as *const crate::mr::overloaded_ops::G as *const crate::ffi::MR_OverloadedOps_G)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::overloaded_ops::G)}
    }

    /// Generated from method `MR::OverloadedOps::G::operator=`.
    ///
    /// Calls `MR_OverloadedOps_G_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::overloaded_ops::G) -> &mut crate::mr::overloaded_ops::G
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_G_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_G, _other as *const crate::mr::overloaded_ops::G as *const crate::ffi::MR_OverloadedOps_G)};
        unsafe {&mut *(__ret as *mut crate::mr::overloaded_ops::G)}
    }

    /// Not defaulted, so there is no `==`: gives only `<`, `>`, `<=` and `>=`.
    /// Generated from method `MR::OverloadedOps::G::operator<=>`.
    ///
    /// Calls `MR_C_compare_three_way_MR_OverloadedOps_G()`.
    pub fn op_compare_three_way(&self, _1: &crate::mr::overloaded_ops::G) -> core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_C_compare_three_way_MR_OverloadedOps_G(self as *const Self as *const crate::ffi::MR_OverloadedOps_G, _1 as *const crate::mr::overloaded_ops::G as *const crate::ffi::MR_OverloadedOps_G)};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::OverloadedOps::G` named `x`.
    ///
    /// Calls `MR_OverloadedOps_G_Get_x()`.
    /// The reference to this object might be preserved as the return value.
    pub fn x<'a>(&'a self) -> &'a core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_G_Get_x(self as *const Self as *const crate::ffi::MR_OverloadedOps_G)};
        unsafe {&*(__ret as *const core::ffi::c_int)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::OverloadedOps::G` named `x`.
    ///
    /// Calls `MR_OverloadedOps_G_GetMutable_x()`.
    /// The reference to this object might be preserved as the return value.
    pub fn x_mut<'a>(&'a mut self) -> &'a mut core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_G_GetMutable_x(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_G)};
        unsafe {&mut *(__ret as *mut core::ffi::c_int)}
    }

    /// Modifies a member variable of class `MR::OverloadedOps::G` named `x`.
    ///
    /// Calls `MR_OverloadedOps_G_Set_x()`.
    pub fn set_x(&mut self, value: core::ffi::c_int)
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_G_Set_x(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_G, value)};
        __ret
    }

}

unsafe impl crate::CppCopy for G
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::OverloadedOps::H`.
///
/// Generated from class `MR::OverloadedOps::H`. Heap-allocated instances are held in `Owned<H>`.
#[repr(transparent)]
pub struct H(crate::ffi::MR_OverloadedOps_H);

unsafe impl crate::CppClass for H
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_OverloadedOps_H_Destroy(ptr as *const crate::ffi::MR_OverloadedOps_H)}
}

impl H
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_OverloadedOps_H_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::overloaded_ops::H>
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_H_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::overloaded_ops::H)}
    }

    /// Generated from constructor `MR::OverloadedOps::H::H`.
    ///
    /// Calls `MR_OverloadedOps_H_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::overloaded_ops::H) -> crate::Owned<crate::mr::overloaded_ops::H>
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_H_ConstructFromAnother(_other as *const crate::mr::overloaded_ops::H as *const crate::ffi::MR_OverloadedOps_H)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::overloaded_ops::H)}
    }

    /// Generated from method `MR::OverloadedOps::H::operator=`.
    ///
    /// Calls `MR_OverloadedOps_H_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::overloaded_ops::H) -> &mut crate::mr::overloaded_ops::H
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_H_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_H, _other as *const crate::mr::overloaded_ops::H as *const crate::ffi::MR_OverloadedOps_H)};
        unsafe {&mut *(__ret as *mut crate::mr::overloaded_ops::H)}
    }

    /// Gives `!=`.
    /// Generated from method `MR::OverloadedOps::H::operator==`.
    ///
    /// Calls `MR_C_equal_MR_OverloadedOps_H()`.
    pub fn op_equal(&self, _1: &crate::mr::overloaded_ops::H) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_equal_MR_OverloadedOps_H(self as *const Self as *const crate::ffi::MR_OverloadedOps_H, _1 as *const crate::mr::overloaded_ops::H as *const crate::ffi::MR_OverloadedOps_H)};
        __ret
    }

}

unsafe impl crate::CppCopy for H
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::OverloadedOps::I`.
///
/// Generated from class `MR::OverloadedOps::I`. Heap-allocated instances are held in `Owned<I>`.
#[repr(transparent)]
pub struct I(crate::ffi::MR_OverloadedOps_I);

unsafe impl crate::CppClass for I
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_OverloadedOps_I_Destroy(ptr as *const crate::ffi::MR_OverloadedOps_I)}
}

impl I
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_OverloadedOps_I_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::overloaded_ops::I>
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_I_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::overloaded_ops::I)}
    }

    /// Generated from constructor `MR::OverloadedOps::I::I`.
    ///
    /// Calls `MR_OverloadedOps_I_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::overloaded_ops::I) -> crate::Owned<crate::mr::overloaded_ops::I>
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_I_ConstructFromAnother(_other as *const crate::mr::overloaded_ops::I as *const crate::ffi::MR_OverloadedOps_I)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::overloaded_ops::I)}
    }

    /// Generated from method `MR::OverloadedOps::I::operator=`.
    ///
    /// Calls `MR_OverloadedOps_I_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::overloaded_ops::I) -> &mut crate::mr::overloaded_ops::I
    {
        let __ret = unsafe {crate::ffi::MR_OverloadedOps_I_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_OverloadedOps_I, _other as *const crate::mr::overloaded_ops::I as *const crate::ffi::MR_OverloadedOps_I)};
        unsafe {&mut *(__ret as *mut crate::mr::overloaded_ops::I)}
    }

}

unsafe impl crate::CppCopy for I
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Unary plus.
/// Generated from function `MR::OverloadedOps::operator+`.
///
/// Calls `MR_C_pos_MR_OverloadedOps_B()`.
pub fn op_pos_mr_overloaded_ops_b(_1: &crate::mr::overloaded_ops::B) -> core::ffi::c_int
{
    let __ret = unsafe {crate::ffi::MR_C_pos_MR_OverloadedOps_B(_1 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B)};
    __ret
}

/// Binary plus.
/// Generated from function `MR::OverloadedOps::operator+`.
///
/// Calls `MR_C_add_MR_OverloadedOps_B()`.
pub fn op_add_mr_overloaded_ops_b(_1: &crate::mr::overloaded_ops::B, _2: &crate::mr::overloaded_ops::B) -> core::ffi::c_int
{
    let __ret = unsafe {crate::ffi::MR_C_add_MR_OverloadedOps_B(_1 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B, _2 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B)};
    __ret
}

/// Unary minus.
/// Generated from function `MR::OverloadedOps::operator-`.
///
/// Calls `MR_C_neg_MR_OverloadedOps_B()`.
pub fn op_neg_mr_overloaded_ops_b(_1: &crate::mr::overloaded_ops::B) -> core::ffi::c_int
{
    let __ret = unsafe {crate::ffi::MR_C_neg_MR_OverloadedOps_B(_1 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B)};
    __ret
}

/// Binary minus.
/// Generated from function `MR::OverloadedOps::operator-`.
///
/// Calls `MR_C_sub_MR_OverloadedOps_B()`.
pub fn op_sub_mr_overloaded_ops_b(_1: &crate::mr::overloaded_ops::B, _2: &crate::mr::overloaded_ops::B) -> core::ffi::c_int
{
    let __ret = unsafe {crate::ffi::MR_C_sub_MR_OverloadedOps_B(_1 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B, _2 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B)};
    __ret
}

/// Dereference (unary star).
/// Generated from function `MR::OverloadedOps::operator*`.
///
/// Calls `MR_C_deref_MR_OverloadedOps_B()`.
pub fn op_deref_mr_overloaded_ops_b(_1: &crate::mr::overloaded_ops::B) -> core::ffi::c_int
{
    let __ret = unsafe {crate::ffi::MR_C_deref_MR_OverloadedOps_B(_1 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B)};
    __ret
}

/// Multiply (binary star).
/// Generated from function `MR::OverloadedOps::operator*`.
///
/// Calls `MR_C_mul_MR_OverloadedOps_B()`.
pub fn op_mul_mr_overloaded_ops_b(_1: &crate::mr::overloaded_ops::B, _2: &crate::mr::overloaded_ops::B) -> core::ffi::c_int
{
    let __ret = unsafe {crate::ffi::MR_C_mul_MR_OverloadedOps_B(_1 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B, _2 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B)};
    __ret
}

/// Divide.
/// Generated from function `MR::OverloadedOps::operator/`.
///
/// Calls `MR_C_div_MR_OverloadedOps_B()`.
pub fn op_div_mr_overloaded_ops_b(_1: &crate::mr::overloaded_ops::B, _2: &crate::mr::overloaded_ops::B) -> core::ffi::c_int
{
    let __ret = unsafe {crate::ffi::MR_C_div_MR_OverloadedOps_B(_1 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B, _2 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B)};
    __ret
}

/// Modulo.
/// Generated from function `MR::OverloadedOps::operator%`.
///
/// Calls `MR_C_mod_MR_OverloadedOps_B()`.
pub fn op_mod_mr_overloaded_ops_b(_1: &crate::mr::overloaded_ops::B, _2: &crate::mr::overloaded_ops::B) -> core::ffi::c_int
{
    let __ret = unsafe {crate::ffi::MR_C_mod_MR_OverloadedOps_B(_1 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B, _2 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B)};
    __ret
}

/// Bit xor.
/// Generated from function `MR::OverloadedOps::operator^`.
///
/// Calls `MR_C_xor_MR_OverloadedOps_B()`.
pub fn op_xor_mr_overloaded_ops_b(_1: &crate::mr::overloaded_ops::B, _2: &crate::mr::overloaded_ops::B) -> core::ffi::c_int
{
    let __ret = unsafe {crate::ffi::MR_C_xor_MR_OverloadedOps_B(_1 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B, _2 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B)};
    __ret
}

/// Bit and.
/// Generated from function `MR::OverloadedOps::operator&`.
///
/// Calls `MR_C_bitand_MR_OverloadedOps_B()`.
pub fn op_bitand_mr_overloaded_ops_b(_1: &crate::mr::overloaded_ops::B, _2: &crate::mr::overloaded_ops::B) -> core::ffi::c_int
{
    let __ret = unsafe {crate::ffi::MR_C_bitand_MR_OverloadedOps_B(_1 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B, _2 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B)};
    __ret
}

/// Bit or.
/// Generated from function `MR::OverloadedOps::operator|`.
///
/// Calls `MR_C_bitor_MR_OverloadedOps_B()`.
pub fn op_bitor_mr_overloaded_ops_b(_1: &crate::mr::overloaded_ops::B, _2: &crate::mr::overloaded_ops::B) -> core::ffi::c_int
{
    let __ret = unsafe {crate::ffi::MR_C_bitor_MR_OverloadedOps_B(_1 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B, _2 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B)};
    __ret
}

/// Bit negate.
/// Generated from function `MR::OverloadedOps::operator~`.
///
/// Calls `MR_C_compl_MR_OverloadedOps_B()`.
pub fn op_compl_mr_overloaded_ops_b(_1: &crate::mr::overloaded_ops::B) -> core::ffi::c_int
{
    let __ret = unsafe {crate::ffi::MR_C_compl_MR_OverloadedOps_B(_1 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B)};
    __ret
}

/// Boolean negate.
/// Generated from function `MR::OverloadedOps::operator!`.
///
/// Calls `MR_C_not_MR_OverloadedOps_B()`.
pub fn op_not_mr_overloaded_ops_b(_1: &crate::mr::overloaded_ops::B) -> core::ffi::c_int
{
    let __ret = unsafe {crate::ffi::MR_C_not_MR_OverloadedOps_B(_1 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B)};
    __ret
}

/// Assign.
/// friend int operator=(B, B); // Can't be a free function.
/// Less.
/// Generated from function `MR::OverloadedOps::operator<`.
///
/// Calls `MR_C_less_MR_OverloadedOps_B()`.
pub fn op_less_mr_overloaded_ops_b(_1: &crate::mr::overloaded_ops::B, _2: &crate::mr::overloaded_ops::B) -> core::ffi::c_int
{
    let __ret = unsafe {crate::ffi::MR_C_less_MR_OverloadedOps_B(_1 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B, _2 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B)};
    __ret
}

/// Greater.
/// Generated from function `MR::OverloadedOps::operator>`.
///
/// Calls `MR_C_greater_MR_OverloadedOps_B()`.
pub fn op_greater_mr_overloaded_ops_b(_1: &crate::mr::overloaded_ops::B, _2: &crate::mr::overloaded_ops::B) -> core::ffi::c_int
{
    let __ret = unsafe {crate::ffi::MR_C_greater_MR_OverloadedOps_B(_1 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B, _2 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B)};
    __ret
}

/// Plus assign.
/// Generated from function `MR::OverloadedOps::operator+=`.
///
/// Calls `MR_C_add_assign_MR_OverloadedOps_B()`.
pub fn op_add_assign_mr_overloaded_ops_b(_1: &crate::mr::overloaded_ops::B, _2: &crate::mr::overloaded_ops::B) -> core::ffi::c_int
{
    let __ret = unsafe {crate::ffi::MR_C_add_assign_MR_OverloadedOps_B(_1 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B, _2 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B)};
    __ret
}

/// Minus assign.
/// Generated from function `MR::OverloadedOps::operator-=`.
///
/// Calls `MR_C_sub_assign_MR_OverloadedOps_B()`.
pub fn op_sub_assign_mr_overloaded_ops_b(_1: &crate::mr::overloaded_ops::B, _2: &crate::mr::overloaded_ops::B) -> core::ffi::c_int
{
    let __ret = unsafe {crate::ffi::MR_C_sub_assign_MR_OverloadedOps_B(_1 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B, _2 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B)};
    __ret
}

/// Multiply assign.
/// Generated from function `MR::OverloadedOps::operator*=`.
///
/// Calls `MR_C_mul_assign_MR_OverloadedOps_B()`.
pub fn op_mul_assign_mr_overloaded_ops_b(_1: &crate::mr::overloaded_ops::B, _2: &crate::mr::overloaded_ops::B) -> core::ffi::c_int
{
    let __ret = unsafe {crate::ffi::MR_C_mul_assign_MR_OverloadedOps_B(_1 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B, _2 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B)};
    __ret
}

/// Divide assign.
/// Generated from function `MR::OverloadedOps::operator/=`.
///
/// Calls `MR_C_div_assign_MR_OverloadedOps_B()`.
pub fn op_div_assign_mr_overloaded_ops_b(_1: &crate::mr::overloaded_ops::B, _2: &crate::mr::overloaded_ops::B) -> core::ffi::c_int
{
    let __ret = unsafe {crate::ffi::MR_C_div_assign_MR_OverloadedOps_B(_1 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B, _2 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B)};
    __ret
}

/// Modulo assign.
/// Generated from function `MR::OverloadedOps::operator%=`.
///
/// Calls `MR_C_mod_assign_MR_OverloadedOps_B()`.
pub fn op_mod_assign_mr_overloaded_ops_b(_1: &crate::mr::overloaded_ops::B, _2: &crate::mr::overloaded_ops::B) -> core::ffi::c_int
{
    let __ret = unsafe {crate::ffi::MR_C_mod_assign_MR_OverloadedOps_B(_1 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B, _2 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B)};
    __ret
}

/// Bit xor assign.
/// Generated from function `MR::OverloadedOps::operator^=`.
///
/// Calls `MR_C_xor_assign_MR_OverloadedOps_B()`.
pub fn op_xor_assign_mr_overloaded_ops_b(_1: &crate::mr::overloaded_ops::B, _2: &crate::mr::overloaded_ops::B) -> core::ffi::c_int
{
    let __ret = unsafe {crate::ffi::MR_C_xor_assign_MR_OverloadedOps_B(_1 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B, _2 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B)};
    __ret
}

/// Bit and assign.
/// Generated from function `MR::OverloadedOps::operator&=`.
///
/// Calls `MR_C_bitand_assign_MR_OverloadedOps_B()`.
pub fn op_bitand_assign_mr_overloaded_ops_b(_1: &crate::mr::overloaded_ops::B, _2: &crate::mr::overloaded_ops::B) -> core::ffi::c_int
{
    let __ret = unsafe {crate::ffi::MR_C_bitand_assign_MR_OverloadedOps_B(_1 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B, _2 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B)};
    __ret
}

/// Bit or assign.
/// Generated from function `MR::OverloadedOps::operator|=`.
///
/// Calls `MR_C_bitor_assign_MR_OverloadedOps_B()`.
pub fn op_bitor_assign_mr_overloaded_ops_b(_1: &crate::mr::overloaded_ops::B, _2: &crate::mr::overloaded_ops::B) -> core::ffi::c_int
{
    let __ret = unsafe {crate::ffi::MR_C_bitor_assign_MR_OverloadedOps_B(_1 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B, _2 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B)};
    __ret
}

/// Left shift.
/// Generated from function `MR::OverloadedOps::operator<<`.
///
/// Calls `MR_C_lshift_MR_OverloadedOps_B()`.
pub fn op_lshift_mr_overloaded_ops_b(_1: &crate::mr::overloaded_ops::B, _2: &crate::mr::overloaded_ops::B) -> core::ffi::c_int
{
    let __ret = unsafe {crate::ffi::MR_C_lshift_MR_OverloadedOps_B(_1 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B, _2 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B)};
    __ret
}

/// Right shift.
/// Generated from function `MR::OverloadedOps::operator>>`.
///
/// Calls `MR_C_rshift_MR_OverloadedOps_B()`.
pub fn op_rshift_mr_overloaded_ops_b(_1: &crate::mr::overloaded_ops::B, _2: &crate::mr::overloaded_ops::B) -> core::ffi::c_int
{
    let __ret = unsafe {crate::ffi::MR_C_rshift_MR_OverloadedOps_B(_1 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B, _2 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B)};
    __ret
}

/// Left shift assign.
/// Generated from function `MR::OverloadedOps::operator<<=`.
///
/// Calls `MR_C_lshift_assign_MR_OverloadedOps_B()`.
pub fn op_lshift_assign_mr_overloaded_ops_b(_1: &crate::mr::overloaded_ops::B, _2: &crate::mr::overloaded_ops::B) -> core::ffi::c_int
{
    let __ret = unsafe {crate::ffi::MR_C_lshift_assign_MR_OverloadedOps_B(_1 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B, _2 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B)};
    __ret
}

/// Right shift assign.
/// Generated from function `MR::OverloadedOps::operator>>=`.
///
/// Calls `MR_C_rshift_assign_MR_OverloadedOps_B()`.
pub fn op_rshift_assign_mr_overloaded_ops_b(_1: &crate::mr::overloaded_ops::B, _2: &crate::mr::overloaded_ops::B) -> core::ffi::c_int
{
    let __ret = unsafe {crate::ffi::MR_C_rshift_assign_MR_OverloadedOps_B(_1 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B, _2 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B)};
    __ret
}

/// Equal.
/// Generated from function `MR::OverloadedOps::operator==`.
///
/// Calls `MR_C_equal_MR_OverloadedOps_B()`.
pub fn op_equal_mr_overloaded_ops_b(_1: &crate::mr::overloaded_ops::B, _2: &crate::mr::overloaded_ops::B) -> core::ffi::c_int
{
    let __ret = unsafe {crate::ffi::MR_C_equal_MR_OverloadedOps_B(_1 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B, _2 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B)};
    __ret
}

/// Not equal.
/// Generated from function `MR::OverloadedOps::operator!=`.
///
/// Calls `MR_C_not_equal_MR_OverloadedOps_B()`.
pub fn op_not_equal_mr_overloaded_ops_b(_1: &crate::mr::overloaded_ops::B, _2: &crate::mr::overloaded_ops::B) -> core::ffi::c_int
{
    let __ret = unsafe {crate::ffi::MR_C_not_equal_MR_OverloadedOps_B(_1 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B, _2 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B)};
    __ret
}

/// Less equal.
/// Generated from function `MR::OverloadedOps::operator<=`.
///
/// Calls `MR_C_less_equal_MR_OverloadedOps_B()`.
pub fn op_less_equal_mr_overloaded_ops_b(_1: &crate::mr::overloaded_ops::B, _2: &crate::mr::overloaded_ops::B) -> core::ffi::c_int
{
    let __ret = unsafe {crate::ffi::MR_C_less_equal_MR_OverloadedOps_B(_1 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B, _2 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B)};
    __ret
}

/// Greater equal.
/// Generated from function `MR::OverloadedOps::operator>=`.
///
/// Calls `MR_C_greater_equal_MR_OverloadedOps_B()`.
pub fn op_greater_equal_mr_overloaded_ops_b(_1: &crate::mr::overloaded_ops::B, _2: &crate::mr::overloaded_ops::B) -> core::ffi::c_int
{
    let __ret = unsafe {crate::ffi::MR_C_greater_equal_MR_OverloadedOps_B(_1 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B, _2 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B)};
    __ret
}

/// Compare three way.
/// Generated from function `MR::OverloadedOps::operator<=>`.
///
/// Calls `MR_C_compare_three_way_MR_OverloadedOps_B()`.
pub fn op_compare_three_way_mr_overloaded_ops_b(_1: &crate::mr::overloaded_ops::B, _2: &crate::mr::overloaded_ops::B) -> core::ffi::c_int
{
    let __ret = unsafe {crate::ffi::MR_C_compare_three_way_MR_OverloadedOps_B(_1 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B, _2 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B)};
    __ret
}

/// And.
/// Generated from function `MR::OverloadedOps::operator&&`.
///
/// Calls `MR_C_and_MR_OverloadedOps_B()`.
pub fn op_and_mr_overloaded_ops_b(_1: &crate::mr::overloaded_ops::B, _2: &crate::mr::overloaded_ops::B) -> core::ffi::c_int
{
    let __ret = unsafe {crate::ffi::MR_C_and_MR_OverloadedOps_B(_1 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B, _2 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B)};
    __ret
}

/// Or.
/// Generated from function `MR::OverloadedOps::operator||`.
///
/// Calls `MR_C_or_MR_OverloadedOps_B()`.
pub fn op_or_mr_overloaded_ops_b(_1: &crate::mr::overloaded_ops::B, _2: &crate::mr::overloaded_ops::B) -> core::ffi::c_int
{
    let __ret = unsafe {crate::ffi::MR_C_or_MR_OverloadedOps_B(_1 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B, _2 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B)};
    __ret
}

/// Pre-increment.
/// Generated from function `MR::OverloadedOps::operator++`.
///
/// Calls `MR_C_incr_MR_OverloadedOps_B()`.
pub fn op_incr_mr_overloaded_ops_b(_1: &crate::mr::overloaded_ops::B) -> core::ffi::c_int
{
    let __ret = unsafe {crate::ffi::MR_C_incr_MR_OverloadedOps_B(_1 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B)};
    __ret
}

/// Post-increment.
/// Generated from function `MR::OverloadedOps::operator++`.
///
/// Calls `MR_C_post_incr_MR_OverloadedOps_B()`.
pub fn op_post_incr_mr_overloaded_ops_b(_1: &crate::mr::overloaded_ops::B) -> core::ffi::c_int
{
    let __ret = unsafe {crate::ffi::MR_C_post_incr_MR_OverloadedOps_B(_1 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B)};
    __ret
}

/// Pre-decrement.
/// Generated from function `MR::OverloadedOps::operator--`.
///
/// Calls `MR_C_decr_MR_OverloadedOps_B()`.
pub fn op_decr_mr_overloaded_ops_b(_1: &crate::mr::overloaded_ops::B) -> core::ffi::c_int
{
    let __ret = unsafe {crate::ffi::MR_C_decr_MR_OverloadedOps_B(_1 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B)};
    __ret
}

/// Post-decrement.
/// Generated from function `MR::OverloadedOps::operator--`.
///
/// Calls `MR_C_post_decr_MR_OverloadedOps_B()`.
pub fn op_post_decr_mr_overloaded_ops_b(_1: &crate::mr::overloaded_ops::B) -> core::ffi::c_int
{
    let __ret = unsafe {crate::ffi::MR_C_post_decr_MR_OverloadedOps_B(_1 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B)};
    __ret
}

/// Comma.
/// Generated from function `MR::OverloadedOps::operator,`.
///
/// Calls `MR_C_comma_MR_OverloadedOps_B()`.
pub fn op_comma_mr_overloaded_ops_b(_1: &crate::mr::overloaded_ops::B, _2: &crate::mr::overloaded_ops::B) -> core::ffi::c_int
{
    let __ret = unsafe {crate::ffi::MR_C_comma_MR_OverloadedOps_B(_1 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B, _2 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B)};
    __ret
}

/// Arrow star.
/// Generated from function `MR::OverloadedOps::operator->*`.
///
/// Calls `MR_C_arrow_star_MR_OverloadedOps_B()`.
pub fn op_arrow_star_mr_overloaded_ops_b(_1: &crate::mr::overloaded_ops::B, _2: &crate::mr::overloaded_ops::B) -> core::ffi::c_int
{
    let __ret = unsafe {crate::ffi::MR_C_arrow_star_MR_OverloadedOps_B(_1 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B, _2 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B)};
    __ret
}

/// If rhs type is same as the lhs one (ignoring cvref), it's not emitted.
/// Generated from function `MR::OverloadedOps::operator+`.
///
/// Calls `MR_C_add_MR_OverloadedOps_C()`.
pub fn op_add_mr_overloaded_ops_c(_1: &crate::mr::overloaded_ops::C, _2: &crate::mr::overloaded_ops::C)
{
    let __ret = unsafe {crate::ffi::MR_C_add_MR_OverloadedOps_C(_1 as *const crate::mr::overloaded_ops::C as *const crate::ffi::MR_OverloadedOps_C, _2 as *const crate::mr::overloaded_ops::C as *const crate::ffi::MR_OverloadedOps_C)};
    __ret
}

/// But different types are printed.
/// Generated from function `MR::OverloadedOps::operator+`.
///
/// Calls `MR_C_add_MR_OverloadedOps_C_MR_OverloadedOps_B()`.
pub fn op_add_mr_overloaded_ops_c_mr_overloaded_ops_b(_1: &crate::mr::overloaded_ops::C, _2: &crate::mr::overloaded_ops::B)
{
    let __ret = unsafe {crate::ffi::MR_C_add_MR_OverloadedOps_C_MR_OverloadedOps_B(_1 as *const crate::mr::overloaded_ops::C as *const crate::ffi::MR_OverloadedOps_C, _2 as *const crate::mr::overloaded_ops::B as *const crate::ffi::MR_OverloadedOps_B)};
    __ret
}

/// Generated from function `MR::OverloadedOps::operator+`.
///
/// Calls `MR_C_pos_MR_OverloadedOps_D_ref()`.
pub fn op_pos_mr_overloaded_ops_d_ref(_1: &mut crate::mr::overloaded_ops::D) -> core::ffi::c_int
{
    let __ret = unsafe {crate::ffi::MR_C_pos_MR_OverloadedOps_D_ref(_1 as *mut crate::mr::overloaded_ops::D as *mut crate::ffi::MR_OverloadedOps_D)};
    __ret
}

/// Generated from function `MR::OverloadedOps::operator+`.
///
/// Calls `MR_C_pos_const_MR_OverloadedOps_D_ref()`.
pub fn op_pos_const_mr_overloaded_ops_d_ref(_1: &crate::mr::overloaded_ops::D) -> core::ffi::c_int
{
    let __ret = unsafe {crate::ffi::MR_C_pos_const_MR_OverloadedOps_D_ref(_1 as *const crate::mr::overloaded_ops::D as *const crate::ffi::MR_OverloadedOps_D)};
    __ret
}

/// Gives a free `!=`.
/// Generated from function `MR::OverloadedOps::operator==`.
///
/// Calls `MR_C_equal_MR_OverloadedOps_I()`.
pub fn op_equal_mr_overloaded_ops_i(_1: &crate::mr::overloaded_ops::I, _2: &crate::mr::overloaded_ops::I) -> bool
{
    let __ret = unsafe {crate::ffi::MR_C_equal_MR_OverloadedOps_I(_1 as *const crate::mr::overloaded_ops::I as *const crate::ffi::MR_OverloadedOps_I, _2 as *const crate::mr::overloaded_ops::I as *const crate::ffi::MR_OverloadedOps_I)};
    __ret
}

