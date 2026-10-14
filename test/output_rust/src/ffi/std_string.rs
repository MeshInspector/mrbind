/// Generated from class `std::string`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_string
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_C_std_string_DefaultConstruct() -> *mut crate::ffi::MR_C_std_string;
    pub fn MR_C_std_string_ConstructFromAnother(other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_string) -> *mut crate::ffi::MR_C_std_string;
    pub fn MR_C_std_string_ConstructFrom(other: *const core::ffi::c_char, other_end: *const core::ffi::c_char) -> *mut crate::ffi::MR_C_std_string;
    pub fn MR_C_std_string_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_string, other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_string);
    pub fn MR_C_std_string_AssignFrom(_this: *mut crate::ffi::MR_C_std_string, other: *const core::ffi::c_char, other_end: *const core::ffi::c_char);
    pub fn MR_C_std_string_size(_this: *const crate::ffi::MR_C_std_string) -> usize;
    pub fn MR_C_std_string_data(_this: *const crate::ffi::MR_C_std_string) -> *const core::ffi::c_char;
    pub fn MR_C_std_string_data_mut(_this: *mut crate::ffi::MR_C_std_string) -> *const core::ffi::c_char;
    pub fn MR_C_std_string_data_end(_this: *const crate::ffi::MR_C_std_string) -> *const core::ffi::c_char;
    pub fn MR_C_std_string_data_end_mut(_this: *mut crate::ffi::MR_C_std_string) -> *mut core::ffi::c_char;
    pub fn MR_C_std_string_Destroy(_this: *const MR_C_std_string);
}
