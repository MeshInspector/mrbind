/// Generated from class `std::shared_ptr<MR::CSharp::SB>`. Opaque, only used behind pointers.
#[repr(C)]
pub struct MR_C_std_shared_ptr_MR_CSharp_SB
{
    _data: [u8; 0],
    _marker: core::marker::PhantomData<(*mut u8, core::marker::PhantomPinned)>,
}

#[cfg_attr(windows, link(name = "bleh", kind = "raw-dylib"))]
#[cfg_attr(not(windows), link(name = "bleh"))]
unsafe extern "C"
{
    pub fn MR_C_std_shared_ptr_MR_CSharp_SB_DefaultConstruct() -> *mut crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SB;
    pub fn MR_C_std_shared_ptr_MR_CSharp_SB_ConstructFromAnother(other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SB) -> *mut crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SB;
    pub fn MR_C_std_shared_ptr_MR_CSharp_SB_AssignFromAnother(_this: *mut crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SB, other_pass_by: crate::ffi::MR_C_PassBy, other: *mut crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SB);
    pub fn MR_C_std_shared_ptr_MR_CSharp_SB_get(_this: *const crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SB) -> *mut crate::ffi::MR_CSharp_SB;
    pub fn MR_C_std_shared_ptr_MR_CSharp_SB_has_value(_this: *const crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SB) -> bool;
    pub fn MR_C_std_shared_ptr_MR_CSharp_SB_use_count(_this: *const crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SB) -> core::ffi::c_int;
    pub fn MR_C_std_shared_ptr_MR_CSharp_SB_reset(_this: *mut crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SB);
    pub fn MR_C_std_shared_ptr_MR_CSharp_SB_ConstructFromValue(value_pass_by: crate::ffi::MR_C_PassBy, value: *mut crate::ffi::MR_CSharp_SB) -> *mut crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SB;
    pub fn MR_C_std_shared_ptr_MR_CSharp_SB_Construct(ptr: *mut crate::ffi::MR_CSharp_SB) -> *mut crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SB;
    pub fn MR_C_std_shared_ptr_MR_CSharp_SB_Assign(_this: *mut crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SB, ptr: *mut crate::ffi::MR_CSharp_SB);
    pub fn MR_C_std_shared_ptr_MR_CSharp_SB_ConstructNonOwning(ptr: *mut crate::ffi::MR_CSharp_SB) -> *mut crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SB;
    pub fn MR_C_std_shared_ptr_MR_CSharp_SB_AssignNonOwning(_this: *mut crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SB, ptr: *mut crate::ffi::MR_CSharp_SB);
    pub fn MR_C_std_shared_ptr_MR_CSharp_SB_ConstructAliasing(ownership_pass_by: crate::ffi::MR_C_PassBy, ownership: *mut crate::ffi::MR_C_std_shared_ptr_const_void, ptr: *mut crate::ffi::MR_CSharp_SB) -> *mut crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SB;
    pub fn MR_C_std_shared_ptr_MR_CSharp_SB_AssignAliasing(_this: *mut crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SB, ownership_pass_by: crate::ffi::MR_C_PassBy, ownership: *mut crate::ffi::MR_C_std_shared_ptr_const_void, ptr: *mut crate::ffi::MR_CSharp_SB);
    pub fn MR_C_std_shared_ptr_MR_CSharp_SB_ConvertTo_MR_C_std_shared_ptr_void(_this: *const crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SB) -> *mut crate::ffi::MR_C_std_shared_ptr_void;
    pub fn MR_C_std_shared_ptr_MR_CSharp_SB_AssignTo_MR_C_std_shared_ptr_void(_this: *const crate::ffi::MR_C_std_shared_ptr_MR_CSharp_SB, _target: *mut crate::ffi::MR_C_std_shared_ptr_void);
    pub fn MR_C_std_shared_ptr_MR_CSharp_SB_Destroy(_this: *const MR_C_std_shared_ptr_MR_CSharp_SB);
}
