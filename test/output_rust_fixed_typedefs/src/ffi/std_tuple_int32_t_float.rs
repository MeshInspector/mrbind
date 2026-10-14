/// Generated from class `std::tuple<int32_t, float>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_tuple_int32_t_float
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_C_std_tuple_int32_t_float_DefaultConstruct() -> *mut crate::ffi::MR_C_std_tuple_int32_t_float;
    pub fn MR_C_std_tuple_int32_t_float_ConstructFromAnother(other: *const crate::ffi::MR_C_std_tuple_int32_t_float) -> *mut crate::ffi::MR_C_std_tuple_int32_t_float;
    pub fn MR_C_std_tuple_int32_t_float_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_tuple_int32_t_float, other: *const crate::ffi::MR_C_std_tuple_int32_t_float);
    pub fn MR_C_std_tuple_int32_t_float_Construct(_0: i32, _1: f32) -> *mut crate::ffi::MR_C_std_tuple_int32_t_float;
    pub fn MR_C_std_tuple_int32_t_float_get_int32_t(_this: *const crate::ffi::MR_C_std_tuple_int32_t_float) -> *const i32;
    pub fn MR_C_std_tuple_int32_t_float_get_int32_t_mut(_this: *mut crate::ffi::MR_C_std_tuple_int32_t_float) -> *mut i32;
    pub fn MR_C_std_tuple_int32_t_float_get_float(_this: *const crate::ffi::MR_C_std_tuple_int32_t_float) -> *const f32;
    pub fn MR_C_std_tuple_int32_t_float_get_float_mut(_this: *mut crate::ffi::MR_C_std_tuple_int32_t_float) -> *mut f32;
    pub fn MR_C_std_tuple_int32_t_float_Destroy(_this: *const MR_C_std_tuple_int32_t_float);
}
