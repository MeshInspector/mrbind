/// Generated from enum `std::partial_ordering`.
#[repr(transparent)]
#[derive(Clone, Copy, PartialEq, Eq, Hash, Debug)]
pub struct MR_C_std_partial_ordering(pub core::ffi::c_int);
impl MR_C_std_partial_ordering
{
    /// A < B
    pub const less: MR_C_std_partial_ordering = MR_C_std_partial_ordering(-1i64 as core::ffi::c_int);
    /// A == B
    pub const equivalent: MR_C_std_partial_ordering = MR_C_std_partial_ordering(0i64 as core::ffi::c_int);
    /// A > B
    pub const greater: MR_C_std_partial_ordering = MR_C_std_partial_ordering(1i64 as core::ffi::c_int);
    /// A is not comparable to B
    pub const unordered: MR_C_std_partial_ordering = MR_C_std_partial_ordering(2i64 as core::ffi::c_int);
}

