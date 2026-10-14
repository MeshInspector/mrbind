/// Generated from class `std::variant<std::monostate, int, float, float>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_variant_std_monostate_int_float_float
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_C_std_variant_std_monostate_int_float_float_DefaultConstruct() -> *mut crate::ffi::MR_C_std_variant_std_monostate_int_float_float;
    pub fn MR_C_std_variant_std_monostate_int_float_float_ConstructFromAnother(other: *const crate::ffi::MR_C_std_variant_std_monostate_int_float_float) -> *mut crate::ffi::MR_C_std_variant_std_monostate_int_float_float;
    pub fn MR_C_std_variant_std_monostate_int_float_float_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_variant_std_monostate_int_float_float, other: *const crate::ffi::MR_C_std_variant_std_monostate_int_float_float);
    pub fn MR_C_std_variant_std_monostate_int_float_float_index(_this: *const crate::ffi::MR_C_std_variant_std_monostate_int_float_float) -> usize;
    pub fn MR_C_std_variant_std_monostate_int_float_float_ConstructAs_std_monostate() -> *mut crate::ffi::MR_C_std_variant_std_monostate_int_float_float;
    pub fn MR_C_std_variant_std_monostate_int_float_float_ConstructAs_int(value: core::ffi::c_int) -> *mut crate::ffi::MR_C_std_variant_std_monostate_int_float_float;
    pub fn MR_C_std_variant_std_monostate_int_float_float_ConstructAs_float_2(value: f32) -> *mut crate::ffi::MR_C_std_variant_std_monostate_int_float_float;
    pub fn MR_C_std_variant_std_monostate_int_float_float_ConstructAs_float_3(value: f32) -> *mut crate::ffi::MR_C_std_variant_std_monostate_int_float_float;
    pub fn MR_C_std_variant_std_monostate_int_float_float_AssignAs_std_monostate(_this: *mut crate::ffi::MR_C_std_variant_std_monostate_int_float_float);
    pub fn MR_C_std_variant_std_monostate_int_float_float_AssignAs_int(_this: *mut crate::ffi::MR_C_std_variant_std_monostate_int_float_float, value: core::ffi::c_int);
    pub fn MR_C_std_variant_std_monostate_int_float_float_AssignAs_float_2(_this: *mut crate::ffi::MR_C_std_variant_std_monostate_int_float_float, value: f32);
    pub fn MR_C_std_variant_std_monostate_int_float_float_AssignAs_float_3(_this: *mut crate::ffi::MR_C_std_variant_std_monostate_int_float_float, value: f32);
    pub fn MR_C_std_variant_std_monostate_int_float_float_get_std_monostate(_this: *const crate::ffi::MR_C_std_variant_std_monostate_int_float_float) -> bool;
    pub fn MR_C_std_variant_std_monostate_int_float_float_get_int(_this: *const crate::ffi::MR_C_std_variant_std_monostate_int_float_float) -> *const core::ffi::c_int;
    pub fn MR_C_std_variant_std_monostate_int_float_float_get_int_mut(_this: *mut crate::ffi::MR_C_std_variant_std_monostate_int_float_float) -> *mut core::ffi::c_int;
    pub fn MR_C_std_variant_std_monostate_int_float_float_get_float_2(_this: *const crate::ffi::MR_C_std_variant_std_monostate_int_float_float) -> *const f32;
    pub fn MR_C_std_variant_std_monostate_int_float_float_get_float_2_mut(_this: *mut crate::ffi::MR_C_std_variant_std_monostate_int_float_float) -> *mut f32;
    pub fn MR_C_std_variant_std_monostate_int_float_float_get_float_3(_this: *const crate::ffi::MR_C_std_variant_std_monostate_int_float_float) -> *const f32;
    pub fn MR_C_std_variant_std_monostate_int_float_float_get_float_3_mut(_this: *mut crate::ffi::MR_C_std_variant_std_monostate_int_float_float) -> *mut f32;
    pub fn MR_C_std_variant_std_monostate_int_float_float_Destroy(_this: *const MR_C_std_variant_std_monostate_int_float_float);
}
