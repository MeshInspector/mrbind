/// Generated from class `std::tuple<float, double, int, int>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_tuple_float_double_int_int
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_C_std_tuple_float_double_int_int_DefaultConstruct() -> *mut crate::ffi::MR_C_std_tuple_float_double_int_int;
    pub fn MR_C_std_tuple_float_double_int_int_ConstructFromAnother(other: *const crate::ffi::MR_C_std_tuple_float_double_int_int) -> *mut crate::ffi::MR_C_std_tuple_float_double_int_int;
    pub fn MR_C_std_tuple_float_double_int_int_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_tuple_float_double_int_int, other: *const crate::ffi::MR_C_std_tuple_float_double_int_int);
    pub fn MR_C_std_tuple_float_double_int_int_Construct(_0: f32, _1: f64, _2: core::ffi::c_int, _3: core::ffi::c_int) -> *mut crate::ffi::MR_C_std_tuple_float_double_int_int;
    pub fn MR_C_std_tuple_float_double_int_int_get_float(_this: *const crate::ffi::MR_C_std_tuple_float_double_int_int) -> *const f32;
    pub fn MR_C_std_tuple_float_double_int_int_get_float_mut(_this: *mut crate::ffi::MR_C_std_tuple_float_double_int_int) -> *mut f32;
    pub fn MR_C_std_tuple_float_double_int_int_get_double(_this: *const crate::ffi::MR_C_std_tuple_float_double_int_int) -> *const f64;
    pub fn MR_C_std_tuple_float_double_int_int_get_double_mut(_this: *mut crate::ffi::MR_C_std_tuple_float_double_int_int) -> *mut f64;
    pub fn MR_C_std_tuple_float_double_int_int_get_int_2(_this: *const crate::ffi::MR_C_std_tuple_float_double_int_int) -> *const core::ffi::c_int;
    pub fn MR_C_std_tuple_float_double_int_int_get_int_2_mut(_this: *mut crate::ffi::MR_C_std_tuple_float_double_int_int) -> *mut core::ffi::c_int;
    pub fn MR_C_std_tuple_float_double_int_int_get_int_3(_this: *const crate::ffi::MR_C_std_tuple_float_double_int_int) -> *const core::ffi::c_int;
    pub fn MR_C_std_tuple_float_double_int_int_get_int_3_mut(_this: *mut crate::ffi::MR_C_std_tuple_float_double_int_int) -> *mut core::ffi::c_int;
    pub fn MR_C_std_tuple_float_double_int_int_Destroy(_this: *const MR_C_std_tuple_float_double_int_int);
}
