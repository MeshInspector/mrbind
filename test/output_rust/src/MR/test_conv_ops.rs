/// Generated from class `MR::ConvOps::A`.
///
/// Generated from class `MR::ConvOps::A`. Heap-allocated instances are held in `Owned<A>`.
#[repr(transparent)]
pub struct A(crate::ffi::MR_ConvOps_A);

unsafe impl crate::CppClass for A
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_ConvOps_A_Destroy(ptr as *const crate::ffi::MR_ConvOps_A)}
}

impl A
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_ConvOps_A_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::conv_ops::A>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_ConvOps_A_DefaultConstruct()};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::conv_ops::A)}
    }

    /// Generated from constructor `MR::ConvOps::A::A`.
    ///
    /// Calls `MR_ConvOps_A_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::conv_ops::A) -> crate::Owned<crate::mr::conv_ops::A>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_ConvOps_A_ConstructFromAnother(_other as *const crate::mr::conv_ops::A as *const crate::ffi::MR_ConvOps_A)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::conv_ops::A)}
    }

    /// Generated from conversion operator `MR::ConvOps::A::operator bool`.
    ///
    /// Calls `MR_ConvOps_A_ConvertTo_bool()`.
    pub fn convert_to_bool(&self) -> bool
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_ConvOps_A_ConvertTo_bool(self as *const Self as *const crate::ffi::MR_ConvOps_A)};
        crate::__check_exception();
        __ret
    }

    /// Generated from method `MR::ConvOps::A::operator=`.
    ///
    /// Calls `MR_ConvOps_A_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::conv_ops::A) -> &mut crate::mr::conv_ops::A
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_ConvOps_A_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_ConvOps_A, _other as *const crate::mr::conv_ops::A as *const crate::ffi::MR_ConvOps_A)};
        crate::__check_exception();
        unsafe {&mut *(__ret as *mut crate::mr::conv_ops::A)}
    }

}

unsafe impl crate::CppCopy for A
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

