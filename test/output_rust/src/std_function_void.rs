/// Stores a functor of type: `void(void)`. Possibly stateful.
///
/// Generated from class `std::function<void(void)>`. Heap-allocated instances are held in `Owned<std_function_void>`.
#[repr(transparent)]
pub struct std_function_void(crate::ffi::MR_C_std_function_void);

unsafe impl crate::CppClass for std_function_void
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_function_void_Destroy(ptr as *const crate::ffi::MR_C_std_function_void)}
}

unsafe extern "C" fn __std_function_void_call<F: Fn() -> ()>(_userdata: *mut core::ffi::c_void, _cleanup_value: *mut *mut core::ffi::c_void)
{
    let func = &*(_userdata as *const F);
    let __ret = func();
    __ret
}

unsafe extern "C" fn __std_function_void_userdata<F>(_this_userdata: *mut *mut core::ffi::c_void, _other_userdata: *mut core::ffi::c_void)
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

impl std_function_void
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_function_void_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_function_void>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_function_void_DefaultConstruct()};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_function_void)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_function_void_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_function_void) -> crate::Owned<crate::mr::cs::std_function_void>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_function_void_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_function_void as *mut crate::ffi::MR_C_std_function_void)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_function_void)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_function_void_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_function_void)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_function_void_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_function_void, crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_function_void as *mut crate::ffi::MR_C_std_function_void)};
        crate::__check_exception();
        __ret
    }

    /// Returns true if this instance stores a callable, as opposed to being null.
    ///
    /// Calls `MR_C_std_function_void_has_value()`.
    pub fn has_value(&self) -> bool
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_function_void_has_value(self as *const Self as *const crate::ffi::MR_C_std_function_void)};
        crate::__check_exception();
        __ret
    }

    /// Destroys the stored callable, making this instance null.
    ///
    /// Calls `MR_C_std_function_void_reset()`.
    pub fn reset(&mut self)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_function_void_reset(self as *mut Self as *mut crate::ffi::MR_C_std_function_void)};
        crate::__check_exception();
        __ret
    }

    /// Calls the stored callable.
    ///
    /// Calls `MR_C_std_function_void_call()`.
    pub fn call(&self)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_function_void_call(self as *const Self as *const crate::ffi::MR_C_std_function_void)};
        crate::__check_exception();
        __ret
    }

    /// Constructs an instance holding a Rust closure. The copies of the instance share the closure.
    ///
    /// Calls `MR_C_std_function_void_ConstructEx()`.
    pub fn from_fn<F: Fn() -> () + Send + Sync + 'static>(func: F) -> crate::Owned<crate::mr::cs::std_function_void>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_function_void_ConstructEx(Some(__std_function_void_call::<F>), std::sync::Arc::into_raw(std::sync::Arc::new(func)) as *mut core::ffi::c_void, None, Some(__std_function_void_userdata::<F>))};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_function_void)}
    }

    /// Replaces the stored callable with a Rust closure.
    ///
    /// Calls `MR_C_std_function_void_AssignEx()`.
    pub fn assign_fn<F: Fn() -> () + Send + Sync + 'static>(&mut self, func: F)
    {
        unsafe {crate::ffi::MR_C_std_function_void_AssignEx(self as *mut Self as *mut crate::ffi::MR_C_std_function_void, Some(__std_function_void_call::<F>), std::sync::Arc::into_raw(std::sync::Arc::new(func)) as *mut core::ffi::c_void, None, Some(__std_function_void_userdata::<F>))};
    }

}

unsafe impl crate::CppCopy for std_function_void
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

