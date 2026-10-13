/// Generated from function `MR::GetCombinedVecAB`.
///
/// Calls `MR_GetCombinedVecAB()`.
pub fn get_combined_vec_ab() -> crate::Owned<crate::mr::cs::std_vector_std_pair_MR_SeparateA_MR_SeparateB>
{
    let __ret = unsafe {crate::ffi::MR_GetCombinedVecAB()};
    unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_vector_std_pair_MR_SeparateA_MR_SeparateB)}
}

