#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_IncompleteArrayElemType_foo(_1: *mut [crate::ffi::MR_IncompleteArrayElemType_E; 4]);
}
