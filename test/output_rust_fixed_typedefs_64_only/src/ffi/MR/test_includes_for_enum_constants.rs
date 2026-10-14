#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_IncludesForEnumConstants_foo() -> *mut crate::ffi::MR_IncludesForEnumConstants_A_MR_IncludesForEnumConstants_E_e1;
}
