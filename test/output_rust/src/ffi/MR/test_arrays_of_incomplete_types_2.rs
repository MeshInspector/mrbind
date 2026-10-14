/// Generated from enum `MR::IncompleteArrayElemType::E`.
#[repr(transparent)]
#[derive(Clone, Copy, PartialEq, Eq, Hash, Debug)]
pub struct MR_IncompleteArrayElemType_E(pub core::ffi::c_int);

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_IncompleteArrayElemType_bar(_1: *mut [crate::ffi::MR_IncompleteArrayElemType_E; 4]);
}
