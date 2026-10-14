/// Generated from class `std::variant<int, float, std::string>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_variant_int_float_std_string
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_C_std_variant_int_float_std_string_DefaultConstruct() -> *mut crate::ffi::MR_C_std_variant_int_float_std_string;
    pub fn MR_C_std_variant_int_float_std_string_ConstructFromAnother(other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_variant_int_float_std_string) -> *mut crate::ffi::MR_C_std_variant_int_float_std_string;
    pub fn MR_C_std_variant_int_float_std_string_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_variant_int_float_std_string, other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_variant_int_float_std_string);
    pub fn MR_C_std_variant_int_float_std_string_index(_this: *const crate::ffi::MR_C_std_variant_int_float_std_string) -> usize;
    pub fn MR_C_std_variant_int_float_std_string_ConstructAs_int(value: core::ffi::c_int) -> *mut crate::ffi::MR_C_std_variant_int_float_std_string;
    pub fn MR_C_std_variant_int_float_std_string_ConstructAs_float(value: f32) -> *mut crate::ffi::MR_C_std_variant_int_float_std_string;
    pub fn MR_C_std_variant_int_float_std_string_ConstructAs_std_string(value: *const core::ffi::c_char, value_end: *const core::ffi::c_char) -> *mut crate::ffi::MR_C_std_variant_int_float_std_string;
    pub fn MR_C_std_variant_int_float_std_string_AssignAs_int(_this: *mut crate::ffi::MR_C_std_variant_int_float_std_string, value: core::ffi::c_int);
    pub fn MR_C_std_variant_int_float_std_string_AssignAs_float(_this: *mut crate::ffi::MR_C_std_variant_int_float_std_string, value: f32);
    pub fn MR_C_std_variant_int_float_std_string_AssignAs_std_string(_this: *mut crate::ffi::MR_C_std_variant_int_float_std_string, value: *const core::ffi::c_char, value_end: *const core::ffi::c_char);
    pub fn MR_C_std_variant_int_float_std_string_get_int(_this: *const crate::ffi::MR_C_std_variant_int_float_std_string) -> *const core::ffi::c_int;
    pub fn MR_C_std_variant_int_float_std_string_get_int_mut(_this: *mut crate::ffi::MR_C_std_variant_int_float_std_string) -> *mut core::ffi::c_int;
    pub fn MR_C_std_variant_int_float_std_string_get_float(_this: *const crate::ffi::MR_C_std_variant_int_float_std_string) -> *const f32;
    pub fn MR_C_std_variant_int_float_std_string_get_float_mut(_this: *mut crate::ffi::MR_C_std_variant_int_float_std_string) -> *mut f32;
    pub fn MR_C_std_variant_int_float_std_string_get_std_string(_this: *const crate::ffi::MR_C_std_variant_int_float_std_string) -> *const crate::ffi::MR_C_std_string;
    pub fn MR_C_std_variant_int_float_std_string_get_std_string_mut(_this: *mut crate::ffi::MR_C_std_variant_int_float_std_string) -> *mut crate::ffi::MR_C_std_string;
    pub fn MR_C_std_variant_int_float_std_string_Destroy(_this: *const MR_C_std_variant_int_float_std_string);
}
