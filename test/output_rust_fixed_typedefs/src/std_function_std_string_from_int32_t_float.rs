/// Stores a functor of type: `std::string(int32_t, float)`. Possibly stateful.
///
/// Generated from class `std::function<std::string(int32_t, float)>`. Heap-allocated instances are held in `Owned<std_function_std_string_from_int32_t_float>`.
#[repr(transparent)]
pub struct std_function_std_string_from_int32_t_float(crate::ffi::MR_C_std_function_std_string_from_int32_t_float);

unsafe impl crate::CppClass for std_function_std_string_from_int32_t_float
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_function_std_string_from_int32_t_float_Destroy(ptr as *const crate::ffi::MR_C_std_function_std_string_from_int32_t_float)}
}

unsafe extern "C" fn __std_function_std_string_from_int32_t_float_call<F: Fn(i32, f32) -> crate::Owned<crate::mr::cs::std_string>>(_return_pass_by: *mut crate::ffi::MR_C_PassBy, _1: i32, _2: f32, _userdata: *mut core::ffi::c_void, _cleanup_value: *mut *mut core::ffi::c_void) -> *mut crate::ffi::MR_C_std_string
{
    let func = &*(_userdata as *const F);
    let __ret = func(_1, _2);
    *_return_pass_by = crate::ffi::MR_C_PassBy_MoveAndDestroy;
    __ret.into_raw() as *mut crate::ffi::MR_C_std_string
}

unsafe extern "C" fn __std_function_std_string_from_int32_t_float_userdata<F>(_this_userdata: *mut *mut core::ffi::c_void, _other_userdata: *mut core::ffi::c_void)
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

impl std_function_std_string_from_int32_t_float
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_function_std_string_from_int32_t_float_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_function_std_string_from_int32_t_float>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_function_std_string_from_int32_t_float_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_function_std_string_from_int32_t_float)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_function_std_string_from_int32_t_float_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_function_std_string_from_int32_t_float) -> crate::Owned<crate::mr::cs::std_function_std_string_from_int32_t_float>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_function_std_string_from_int32_t_float_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_function_std_string_from_int32_t_float as *mut crate::ffi::MR_C_std_function_std_string_from_int32_t_float)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_function_std_string_from_int32_t_float)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_function_std_string_from_int32_t_float_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_function_std_string_from_int32_t_float)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_function_std_string_from_int32_t_float_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_function_std_string_from_int32_t_float, crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_function_std_string_from_int32_t_float as *mut crate::ffi::MR_C_std_function_std_string_from_int32_t_float)};
        __ret
    }

    /// Returns true if this instance stores a callable, as opposed to being null.
    ///
    /// Calls `MR_C_std_function_std_string_from_int32_t_float_has_value()`.
    pub fn has_value(&self) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_std_function_std_string_from_int32_t_float_has_value(self as *const Self as *const crate::ffi::MR_C_std_function_std_string_from_int32_t_float)};
        __ret
    }

    /// Destroys the stored callable, making this instance null.
    ///
    /// Calls `MR_C_std_function_std_string_from_int32_t_float_reset()`.
    pub fn reset(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_function_std_string_from_int32_t_float_reset(self as *mut Self as *mut crate::ffi::MR_C_std_function_std_string_from_int32_t_float)};
        __ret
    }

    /// Calls the stored callable.
    ///
    /// Calls `MR_C_std_function_std_string_from_int32_t_float_call()`.
    pub fn call(&self, _1: i32, _2: f32) -> crate::Owned<crate::mr::cs::std_string>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_function_std_string_from_int32_t_float_call(self as *const Self as *const crate::ffi::MR_C_std_function_std_string_from_int32_t_float, _1, _2)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_string)}
    }

    /// Constructs an instance holding a Rust closure. The copies of the instance share the closure.
    ///
    /// Calls `MR_C_std_function_std_string_from_int32_t_float_ConstructEx()`.
    pub fn from_fn<F: Fn(i32, f32) -> crate::Owned<crate::mr::cs::std_string> + Send + Sync + 'static>(func: F) -> crate::Owned<crate::mr::cs::std_function_std_string_from_int32_t_float>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_function_std_string_from_int32_t_float_ConstructEx(Some(__std_function_std_string_from_int32_t_float_call::<F>), std::sync::Arc::into_raw(std::sync::Arc::new(func)) as *mut core::ffi::c_void, None, Some(__std_function_std_string_from_int32_t_float_userdata::<F>))};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_function_std_string_from_int32_t_float)}
    }

    /// Replaces the stored callable with a Rust closure.
    ///
    /// Calls `MR_C_std_function_std_string_from_int32_t_float_AssignEx()`.
    pub fn assign_fn<F: Fn(i32, f32) -> crate::Owned<crate::mr::cs::std_string> + Send + Sync + 'static>(&mut self, func: F)
    {
        unsafe {crate::ffi::MR_C_std_function_std_string_from_int32_t_float_AssignEx(self as *mut Self as *mut crate::ffi::MR_C_std_function_std_string_from_int32_t_float, Some(__std_function_std_string_from_int32_t_float_call::<F>), std::sync::Arc::into_raw(std::sync::Arc::new(func)) as *mut core::ffi::c_void, None, Some(__std_function_std_string_from_int32_t_float_userdata::<F>))};
    }

}

unsafe impl crate::CppCopy for std_function_std_string_from_int32_t_float
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

