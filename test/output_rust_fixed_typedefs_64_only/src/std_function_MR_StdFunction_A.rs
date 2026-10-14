/// Stores a functor of type: `MR::StdFunction::A(void)`. Possibly stateful.
///
/// Generated from class `std::function<MR::StdFunction::A(void)>`. Heap-allocated instances are held in `Owned<std_function_MR_StdFunction_A>`.
#[repr(transparent)]
pub struct std_function_MR_StdFunction_A(crate::ffi::MR_C_std_function_MR_StdFunction_A);

unsafe impl crate::CppClass for std_function_MR_StdFunction_A
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_function_MR_StdFunction_A_Destroy(ptr as *const crate::ffi::MR_C_std_function_MR_StdFunction_A)}
}

unsafe extern "C" fn __std_function_MR_StdFunction_A_call<F: Fn() -> crate::Owned<crate::mr::std_function::A>>(_return_pass_by: *mut crate::ffi::MR_C_PassBy, _userdata: *mut core::ffi::c_void, _cleanup_value: *mut *mut core::ffi::c_void) -> *mut crate::ffi::MR_StdFunction_A
{
    let func = &*(_userdata as *const F);
    let __ret = func();
    *_return_pass_by = crate::ffi::MR_C_PassBy_MoveAndDestroy;
    __ret.into_raw() as *mut crate::ffi::MR_StdFunction_A
}

unsafe extern "C" fn __std_function_MR_StdFunction_A_userdata<F>(_this_userdata: *mut *mut core::ffi::c_void, _other_userdata: *mut core::ffi::c_void)
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

impl std_function_MR_StdFunction_A
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_function_MR_StdFunction_A_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_function_MR_StdFunction_A>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_function_MR_StdFunction_A_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_function_MR_StdFunction_A)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_function_MR_StdFunction_A_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_function_MR_StdFunction_A) -> crate::Owned<crate::mr::cs::std_function_MR_StdFunction_A>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_function_MR_StdFunction_A_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_function_MR_StdFunction_A as *mut crate::ffi::MR_C_std_function_MR_StdFunction_A)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_function_MR_StdFunction_A)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_function_MR_StdFunction_A_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_function_MR_StdFunction_A)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_function_MR_StdFunction_A_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_function_MR_StdFunction_A, crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_function_MR_StdFunction_A as *mut crate::ffi::MR_C_std_function_MR_StdFunction_A)};
        __ret
    }

    /// Returns true if this instance stores a callable, as opposed to being null.
    ///
    /// Calls `MR_C_std_function_MR_StdFunction_A_has_value()`.
    pub fn has_value(&self) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_std_function_MR_StdFunction_A_has_value(self as *const Self as *const crate::ffi::MR_C_std_function_MR_StdFunction_A)};
        __ret
    }

    /// Destroys the stored callable, making this instance null.
    ///
    /// Calls `MR_C_std_function_MR_StdFunction_A_reset()`.
    pub fn reset(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_function_MR_StdFunction_A_reset(self as *mut Self as *mut crate::ffi::MR_C_std_function_MR_StdFunction_A)};
        __ret
    }

    /// Calls the stored callable.
    ///
    /// Calls `MR_C_std_function_MR_StdFunction_A_call()`.
    pub fn call(&self) -> crate::Owned<crate::mr::std_function::A>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_function_MR_StdFunction_A_call(self as *const Self as *const crate::ffi::MR_C_std_function_MR_StdFunction_A)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::std_function::A)}
    }

    /// Constructs an instance holding a Rust closure. The copies of the instance share the closure.
    ///
    /// Calls `MR_C_std_function_MR_StdFunction_A_ConstructEx()`.
    pub fn from_fn<F: Fn() -> crate::Owned<crate::mr::std_function::A> + Send + Sync + 'static>(func: F) -> crate::Owned<crate::mr::cs::std_function_MR_StdFunction_A>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_function_MR_StdFunction_A_ConstructEx(Some(__std_function_MR_StdFunction_A_call::<F>), std::sync::Arc::into_raw(std::sync::Arc::new(func)) as *mut core::ffi::c_void, None, Some(__std_function_MR_StdFunction_A_userdata::<F>))};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_function_MR_StdFunction_A)}
    }

    /// Replaces the stored callable with a Rust closure.
    ///
    /// Calls `MR_C_std_function_MR_StdFunction_A_AssignEx()`.
    pub fn assign_fn<F: Fn() -> crate::Owned<crate::mr::std_function::A> + Send + Sync + 'static>(&mut self, func: F)
    {
        unsafe {crate::ffi::MR_C_std_function_MR_StdFunction_A_AssignEx(self as *mut Self as *mut crate::ffi::MR_C_std_function_MR_StdFunction_A, Some(__std_function_MR_StdFunction_A_call::<F>), std::sync::Arc::into_raw(std::sync::Arc::new(func)) as *mut core::ffi::c_void, None, Some(__std_function_MR_StdFunction_A_userdata::<F>))};
    }

}

unsafe impl crate::CppCopy for std_function_MR_StdFunction_A
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

