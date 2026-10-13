/// Stores a functor of type: `MR::CSharp::E1(MR::CSharp::E1)`. Possibly stateful.
///
/// Generated from class `std::function<MR::CSharp::E1(MR::CSharp::E1)>`. Heap-allocated instances are held in `Owned<std_function_MR_CSharp_E1_from_MR_CSharp_E1>`.
#[repr(transparent)]
pub struct std_function_MR_CSharp_E1_from_MR_CSharp_E1(crate::ffi::MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1);

unsafe impl crate::CppClass for std_function_MR_CSharp_E1_from_MR_CSharp_E1
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_Destroy(ptr as *const crate::ffi::MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1)}
}

unsafe extern "C" fn __std_function_MR_CSharp_E1_from_MR_CSharp_E1_call<F: Fn(crate::mr::c_sharp::E1) -> crate::mr::c_sharp::E1>(_1: crate::ffi::MR_CSharp_E1, _userdata: *mut core::ffi::c_void, _cleanup_value: *mut *mut core::ffi::c_void) -> crate::ffi::MR_CSharp_E1
{
    let func = &*(_userdata as *const F);
    let __ret = func(_1);
    __ret
}

unsafe extern "C" fn __std_function_MR_CSharp_E1_from_MR_CSharp_E1_userdata<F>(_this_userdata: *mut *mut core::ffi::c_void, _other_userdata: *mut core::ffi::c_void)
{
    if !(*_this_userdata).is_null()
    {
        drop(std::sync::Arc::from_raw(*_this_userdata as *const F));
        *_this_userdata = core::ptr::null_mut();
    }
    if !_other_userdata.is_null()
    {
        std::sync::Arc::increment_strong_count(_other_userdata as *const F);
        *_this_userdata = _other_userdata;
    }
}

impl std_function_MR_CSharp_E1_from_MR_CSharp_E1
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_function_MR_CSharp_E1_from_MR_CSharp_E1>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_DefaultConstruct()};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_function_MR_CSharp_E1_from_MR_CSharp_E1)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_function_MR_CSharp_E1_from_MR_CSharp_E1) -> crate::Owned<crate::mr::cs::std_function_MR_CSharp_E1_from_MR_CSharp_E1>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_function_MR_CSharp_E1_from_MR_CSharp_E1 as *mut crate::ffi::MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_function_MR_CSharp_E1_from_MR_CSharp_E1)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_function_MR_CSharp_E1_from_MR_CSharp_E1)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1, crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_function_MR_CSharp_E1_from_MR_CSharp_E1 as *mut crate::ffi::MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1)};
        crate::__check_exception();
        __ret
    }

    /// Returns true if this instance stores a callable, as opposed to being null.
    ///
    /// Calls `MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_has_value()`.
    pub fn has_value(&self) -> bool
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_has_value(self as *const Self as *const crate::ffi::MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1)};
        crate::__check_exception();
        __ret
    }

    /// Destroys the stored callable, making this instance null.
    ///
    /// Calls `MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_reset()`.
    pub fn reset(&mut self)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_reset(self as *mut Self as *mut crate::ffi::MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1)};
        crate::__check_exception();
        __ret
    }

    /// Calls the stored callable.
    ///
    /// Calls `MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_call()`.
    pub fn call(&self, _1: crate::ffi::MR_CSharp_E1) -> crate::ffi::MR_CSharp_E1
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_call(self as *const Self as *const crate::ffi::MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1, _1)};
        crate::__check_exception();
        __ret
    }

    /// Constructs an instance holding a Rust closure. The copies of the instance share the closure.
    ///
    /// Calls `MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_ConstructEx()`.
    pub fn from_fn<F: Fn(crate::mr::c_sharp::E1) -> crate::mr::c_sharp::E1 + Send + Sync + 'static>(func: F) -> crate::Owned<crate::mr::cs::std_function_MR_CSharp_E1_from_MR_CSharp_E1>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_ConstructEx(Some(__std_function_MR_CSharp_E1_from_MR_CSharp_E1_call::<F>), std::sync::Arc::into_raw(std::sync::Arc::new(func)) as *mut core::ffi::c_void, None, Some(__std_function_MR_CSharp_E1_from_MR_CSharp_E1_userdata::<F>))};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_function_MR_CSharp_E1_from_MR_CSharp_E1)}
    }

    /// Replaces the stored callable with a Rust closure.
    ///
    /// Calls `MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_AssignEx()`.
    pub fn assign_fn<F: Fn(crate::mr::c_sharp::E1) -> crate::mr::c_sharp::E1 + Send + Sync + 'static>(&mut self, func: F)
    {
        unsafe {crate::ffi::MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1_AssignEx(self as *mut Self as *mut crate::ffi::MR_C_std_function_MR_CSharp_E1_from_MR_CSharp_E1, Some(__std_function_MR_CSharp_E1_from_MR_CSharp_E1_call::<F>), std::sync::Arc::into_raw(std::sync::Arc::new(func)) as *mut core::ffi::c_void, None, Some(__std_function_MR_CSharp_E1_from_MR_CSharp_E1_userdata::<F>))};
    }

}

unsafe impl crate::CppCopy for std_function_MR_CSharp_E1_from_MR_CSharp_E1
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

