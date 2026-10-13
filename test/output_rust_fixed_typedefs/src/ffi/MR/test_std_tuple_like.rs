#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_StdTupleLike_SetPair(_1: *const crate::ffi::MR_C_std_pair_int32_t_float);
    pub fn MR_StdTupleLike_GetPair() -> *mut crate::ffi::MR_C_std_pair_int32_t_float;
    pub fn MR_StdTupleLike_GetPair2() -> *mut crate::ffi::MR_C_std_pair_const_int32_t_float;
    pub fn MR_StdTupleLike_GetPair3() -> *mut crate::ffi::MR_C_std_pair_int32_t_ref_float_ref;
    pub fn MR_StdTupleLike_GetPair4() -> *mut crate::ffi::MR_C_std_pair_const_int32_t_ref_const_float_ref;
    pub fn MR_StdTupleLike_GetPair5() -> *mut crate::ffi::MR_C_std_pair_int32_t_rvalue_ref_float_rvalue_ref;
    pub fn MR_StdTupleLike_GetPair6() -> *mut crate::ffi::MR_C_std_pair_const_int32_t_rvalue_ref_const_float_rvalue_ref;
    pub fn MR_StdTupleLike_SetTuple(_1: *const crate::ffi::MR_C_std_tuple_int32_t_float);
    pub fn MR_StdTupleLike_GetTuple() -> *mut crate::ffi::MR_C_std_tuple_int32_t_float;
    pub fn MR_StdTupleLike_GetTuple2() -> *mut crate::ffi::MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref;
    pub fn MR_StdTupleLike_GetTuple7() -> *mut crate::ffi::MR_C_std_tuple;
    pub fn MR_StdTupleLike_GetTuple8() -> *mut crate::ffi::MR_C_std_tuple_float_double_int32_t_int32_t;
}
