/// Stores a functor of type: `void(int32_t, int32_t)`. Possibly stateful.
///
/// Generated from class `std::function<void(int32_t, int32_t)>`. Heap-allocated instances are held in `Owned<std_function_void_from_int32_t_int32_t>`.
#[repr(transparent)]
pub struct std_function_void_from_int32_t_int32_t(crate::ffi::MR_C_std_function_void_from_int32_t_int32_t);

unsafe impl crate::CppClass for std_function_void_from_int32_t_int32_t
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_function_void_from_int32_t_int32_t_Destroy(ptr as *const crate::ffi::MR_C_std_function_void_from_int32_t_int32_t)}
}

unsafe extern "C" fn __std_function_void_from_int32_t_int32_t_call<F: Fn(i32, i32) -> ()>(_1: i32, _2: i32, _userdata: *mut core::ffi::c_void, _cleanup_value: *mut *mut core::ffi::c_void)
{
    let func = &*(_userdata as *const F);
    let __ret = func(_1, _2);
    __ret
}

unsafe extern "C" fn __std_function_void_from_int32_t_int32_t_userdata<F>(_this_userdata: *mut *mut core::ffi::c_void, _other_userdata: *mut core::ffi::c_void)
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

impl std_function_void_from_int32_t_int32_t
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_function_void_from_int32_t_int32_t_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_function_void_from_int32_t_int32_t>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_function_void_from_int32_t_int32_t_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_function_void_from_int32_t_int32_t)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_function_void_from_int32_t_int32_t_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_function_void_from_int32_t_int32_t) -> crate::Owned<crate::mr::cs::std_function_void_from_int32_t_int32_t>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_function_void_from_int32_t_int32_t_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_function_void_from_int32_t_int32_t as *mut crate::ffi::MR_C_std_function_void_from_int32_t_int32_t)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_function_void_from_int32_t_int32_t)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_function_void_from_int32_t_int32_t_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_function_void_from_int32_t_int32_t)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_function_void_from_int32_t_int32_t_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_function_void_from_int32_t_int32_t, crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_function_void_from_int32_t_int32_t as *mut crate::ffi::MR_C_std_function_void_from_int32_t_int32_t)};
        __ret
    }

    /// Returns true if this instance stores a callable, as opposed to being null.
    ///
    /// Calls `MR_C_std_function_void_from_int32_t_int32_t_has_value()`.
    pub fn has_value(&self) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_std_function_void_from_int32_t_int32_t_has_value(self as *const Self as *const crate::ffi::MR_C_std_function_void_from_int32_t_int32_t)};
        __ret
    }

    /// Destroys the stored callable, making this instance null.
    ///
    /// Calls `MR_C_std_function_void_from_int32_t_int32_t_reset()`.
    pub fn reset(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_function_void_from_int32_t_int32_t_reset(self as *mut Self as *mut crate::ffi::MR_C_std_function_void_from_int32_t_int32_t)};
        __ret
    }

    /// Calls the stored callable.
    ///
    /// Calls `MR_C_std_function_void_from_int32_t_int32_t_call()`.
    pub fn call(&self, _1: i32, _2: i32)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_function_void_from_int32_t_int32_t_call(self as *const Self as *const crate::ffi::MR_C_std_function_void_from_int32_t_int32_t, _1, _2)};
        __ret
    }

    /// Constructs an instance holding a Rust closure. The copies of the instance share the closure.
    ///
    /// Calls `MR_C_std_function_void_from_int32_t_int32_t_ConstructEx()`.
    pub fn from_fn<F: Fn(i32, i32) -> () + Send + Sync + 'static>(func: F) -> crate::Owned<crate::mr::cs::std_function_void_from_int32_t_int32_t>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_function_void_from_int32_t_int32_t_ConstructEx(Some(__std_function_void_from_int32_t_int32_t_call::<F>), std::sync::Arc::into_raw(std::sync::Arc::new(func)) as *mut core::ffi::c_void, None, Some(__std_function_void_from_int32_t_int32_t_userdata::<F>))};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_function_void_from_int32_t_int32_t)}
    }

    /// Replaces the stored callable with a Rust closure.
    ///
    /// Calls `MR_C_std_function_void_from_int32_t_int32_t_AssignEx()`.
    pub fn assign_fn<F: Fn(i32, i32) -> () + Send + Sync + 'static>(&mut self, func: F)
    {
        unsafe {crate::ffi::MR_C_std_function_void_from_int32_t_int32_t_AssignEx(self as *mut Self as *mut crate::ffi::MR_C_std_function_void_from_int32_t_int32_t, Some(__std_function_void_from_int32_t_int32_t_call::<F>), std::sync::Arc::into_raw(std::sync::Arc::new(func)) as *mut core::ffi::c_void, None, Some(__std_function_void_from_int32_t_int32_t_userdata::<F>))};
    }

}

unsafe impl crate::CppCopy for std_function_void_from_int32_t_int32_t
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

