/// Generated from class `MR::OmittingTargsAndQuals::A<float>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_OmittingTargsAndQuals_A_float
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

/// Generated from class `MR::OmittingTargsAndQuals::A<int>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_OmittingTargsAndQuals_A_int
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_OmittingTargsAndQuals_a_MR_OmittingTargsAndQuals_A_int(_1: *const crate::ffi::MR_OmittingTargsAndQuals_A_int);
    pub fn MR_OmittingTargsAndQuals_b(_1: *const crate::ffi::MR_OmittingTargsAndQuals_A_int, _2: *const crate::ffi::MR_OmittingTargsAndQuals_A_float);
    pub fn MR_OmittingTargsAndQuals_a_MR_OmittingTargsAndQuals_A_float(_1: *const crate::ffi::MR_OmittingTargsAndQuals_A_float);
    pub fn MR_C_deref_MR_OmittingTargsAndQuals_A_int(_1: *const crate::ffi::MR_OmittingTargsAndQuals_A_int);
    pub fn MR_C_compl_MR_OmittingTargsAndQuals_A_int(_1: *const crate::ffi::MR_OmittingTargsAndQuals_A_int);
    pub fn MR_OmittingTargsAndQuals_c(_1: *const crate::ffi::MR_OmittingTargsAndQuals_A_int);
    pub fn MR_OmittingTargsAndQuals_d(_1: *const crate::ffi::MR_OmittingTargsAndQuals_A_int);
    pub fn MR_OmittingTargsAndQuals_inst();
    pub fn MR_OmittingTargsAndQuals_A_float_DefaultConstruct() -> *mut crate::ffi::MR_OmittingTargsAndQuals_A_float;
    pub fn MR_OmittingTargsAndQuals_A_float_ConstructFromAnother(_other: *const crate::ffi::MR_OmittingTargsAndQuals_A_float) -> *mut crate::ffi::MR_OmittingTargsAndQuals_A_float;
    pub fn MR_OmittingTargsAndQuals_A_float_AssignFromAnother(_this: *mut crate::ffi::MR_OmittingTargsAndQuals_A_float, _other: *const crate::ffi::MR_OmittingTargsAndQuals_A_float) -> *mut crate::ffi::MR_OmittingTargsAndQuals_A_float;
    pub fn MR_C_pos_MR_OmittingTargsAndQuals_A_float(_this: *mut crate::ffi::MR_OmittingTargsAndQuals_A_float);
    pub fn MR_OmittingTargsAndQuals_A_float_Destroy(_this: *const MR_OmittingTargsAndQuals_A_float);
    pub fn MR_OmittingTargsAndQuals_A_int_DefaultConstruct() -> *mut crate::ffi::MR_OmittingTargsAndQuals_A_int;
    pub fn MR_OmittingTargsAndQuals_A_int_ConstructFromAnother(_other: *const crate::ffi::MR_OmittingTargsAndQuals_A_int) -> *mut crate::ffi::MR_OmittingTargsAndQuals_A_int;
    pub fn MR_OmittingTargsAndQuals_A_int_AssignFromAnother(_this: *mut crate::ffi::MR_OmittingTargsAndQuals_A_int, _other: *const crate::ffi::MR_OmittingTargsAndQuals_A_int) -> *mut crate::ffi::MR_OmittingTargsAndQuals_A_int;
    pub fn MR_C_pos_MR_OmittingTargsAndQuals_A_int(_this: *mut crate::ffi::MR_OmittingTargsAndQuals_A_int);
    pub fn MR_C_sub_MR_OmittingTargsAndQuals_A_int_MR_OmittingTargsAndQuals_A_float(_this: *mut crate::ffi::MR_OmittingTargsAndQuals_A_int, _1: *const crate::ffi::MR_OmittingTargsAndQuals_A_float);
    pub fn MR_OmittingTargsAndQuals_A_int_Destroy(_this: *const MR_OmittingTargsAndQuals_A_int);
}
