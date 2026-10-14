/// Generated from class `MR::IOStream::A`.
///
/// Generated from class `MR::IOStream::A`. Heap-allocated instances are held in `Owned<A>`.
#[repr(transparent)]
pub struct A(crate::ffi::MR_IOStream_A);

unsafe impl crate::CppClass for A
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_IOStream_A_Destroy(ptr as *const crate::ffi::MR_IOStream_A)}
}

impl A
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_IOStream_A_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::io_stream::A>
    {
        let __ret = unsafe {crate::ffi::MR_IOStream_A_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::io_stream::A)}
    }

    /// Generated from constructor `MR::IOStream::A::A`.
    ///
    /// Calls `MR_IOStream_A_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::io_stream::A) -> crate::Owned<crate::mr::io_stream::A>
    {
        let __ret = unsafe {crate::ffi::MR_IOStream_A_ConstructFromAnother(_other as *const crate::mr::io_stream::A as *const crate::ffi::MR_IOStream_A)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::io_stream::A)}
    }

    /// Generated from method `MR::IOStream::A::operator=`.
    ///
    /// Calls `MR_IOStream_A_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::io_stream::A) -> &mut crate::mr::io_stream::A
    {
        let __ret = unsafe {crate::ffi::MR_IOStream_A_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_IOStream_A, _other as *const crate::mr::io_stream::A as *const crate::ffi::MR_IOStream_A)};
        unsafe {&mut *(__ret as *mut crate::mr::io_stream::A)}
    }

}

unsafe impl crate::CppCopy for A
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from function `MR::IOStream::operator<<`.
///
/// Calls `MR_C_print_MR_IOStream_A()`.
pub fn op_print_mr_io_stream_a(_1: &mut crate::mr::cs::std_ostream, _2: &crate::mr::io_stream::A)
{
    let __ret = unsafe {crate::ffi::MR_C_print_MR_IOStream_A(_1 as *mut crate::mr::cs::std_ostream as *mut crate::ffi::MR_C_std_ostream, _2 as *const crate::mr::io_stream::A as *const crate::ffi::MR_IOStream_A)};
    __ret
}

/// Generated from function `MR::IOStream::operator>>`.
///
/// Calls `MR_C_input_MR_IOStream_A()`.
pub fn op_input_mr_io_stream_a(_1: &mut crate::mr::cs::std_istream, _2: &mut crate::mr::io_stream::A)
{
    let __ret = unsafe {crate::ffi::MR_C_input_MR_IOStream_A(_1 as *mut crate::mr::cs::std_istream as *mut crate::ffi::MR_C_std_istream, _2 as *mut crate::mr::io_stream::A as *mut crate::ffi::MR_IOStream_A)};
    __ret
}

