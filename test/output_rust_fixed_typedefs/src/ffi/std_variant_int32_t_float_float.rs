/// Generated from class `std::variant<int32_t, float, float>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_variant_int32_t_float_float
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_C_std_variant_int32_t_float_float_DefaultConstruct() -> *mut crate::ffi::MR_C_std_variant_int32_t_float_float;
    pub fn MR_C_std_variant_int32_t_float_float_ConstructFromAnother(other: *const crate::ffi::MR_C_std_variant_int32_t_float_float) -> *mut crate::ffi::MR_C_std_variant_int32_t_float_float;
    pub fn MR_C_std_variant_int32_t_float_float_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_variant_int32_t_float_float, other: *const crate::ffi::MR_C_std_variant_int32_t_float_float);
    pub fn MR_C_std_variant_int32_t_float_float_index(_this: *const crate::ffi::MR_C_std_variant_int32_t_float_float) -> usize;
    pub fn MR_C_std_variant_int32_t_float_float_ConstructAs_int32_t(value: i32) -> *mut crate::ffi::MR_C_std_variant_int32_t_float_float;
    pub fn MR_C_std_variant_int32_t_float_float_ConstructAs_float_1(value: f32) -> *mut crate::ffi::MR_C_std_variant_int32_t_float_float;
    pub fn MR_C_std_variant_int32_t_float_float_ConstructAs_float_2(value: f32) -> *mut crate::ffi::MR_C_std_variant_int32_t_float_float;
    pub fn MR_C_std_variant_int32_t_float_float_AssignAs_int32_t(_this: *mut crate::ffi::MR_C_std_variant_int32_t_float_float, value: i32);
    pub fn MR_C_std_variant_int32_t_float_float_AssignAs_float_1(_this: *mut crate::ffi::MR_C_std_variant_int32_t_float_float, value: f32);
    pub fn MR_C_std_variant_int32_t_float_float_AssignAs_float_2(_this: *mut crate::ffi::MR_C_std_variant_int32_t_float_float, value: f32);
    pub fn MR_C_std_variant_int32_t_float_float_get_int32_t(_this: *const crate::ffi::MR_C_std_variant_int32_t_float_float) -> *const i32;
    pub fn MR_C_std_variant_int32_t_float_float_get_int32_t_mut(_this: *mut crate::ffi::MR_C_std_variant_int32_t_float_float) -> *mut i32;
    pub fn MR_C_std_variant_int32_t_float_float_get_float_1(_this: *const crate::ffi::MR_C_std_variant_int32_t_float_float) -> *const f32;
    pub fn MR_C_std_variant_int32_t_float_float_get_float_1_mut(_this: *mut crate::ffi::MR_C_std_variant_int32_t_float_float) -> *mut f32;
    pub fn MR_C_std_variant_int32_t_float_float_get_float_2(_this: *const crate::ffi::MR_C_std_variant_int32_t_float_float) -> *const f32;
    pub fn MR_C_std_variant_int32_t_float_float_get_float_2_mut(_this: *mut crate::ffi::MR_C_std_variant_int32_t_float_float) -> *mut f32;
    pub fn MR_C_std_variant_int32_t_float_float_Destroy(_this: *const MR_C_std_variant_int32_t_float_float);
}
