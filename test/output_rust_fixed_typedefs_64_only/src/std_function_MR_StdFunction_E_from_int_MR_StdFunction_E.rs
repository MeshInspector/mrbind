/// Stores a functor of type: `MR::StdFunction::E(int, MR::StdFunction::E)`. Possibly stateful.
///
/// Generated from class `std::function<MR::StdFunction::E(int, MR::StdFunction::E)>`. Heap-allocated instances are held in `Owned<std_function_MR_StdFunction_E_from_int_MR_StdFunction_E>`.
#[repr(transparent)]
pub struct std_function_MR_StdFunction_E_from_int_MR_StdFunction_E(crate::ffi::MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E);

unsafe impl crate::CppClass for std_function_MR_StdFunction_E_from_int_MR_StdFunction_E
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E_Destroy(ptr as *const crate::ffi::MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E)}
}

unsafe extern "C" fn __std_function_MR_StdFunction_E_from_int_MR_StdFunction_E_call<F: Fn(core::ffi::c_int, crate::mr::std_function::E) -> crate::mr::std_function::E>(_1: core::ffi::c_int, _2: crate::ffi::MR_StdFunction_E, _userdata: *mut core::ffi::c_void, _cleanup_value: *mut *mut core::ffi::c_void) -> crate::ffi::MR_StdFunction_E
{
    let func = &*(_userdata as *const F);
    let __ret = func(_1, _2);
    __ret
}

unsafe extern "C" fn __std_function_MR_StdFunction_E_from_int_MR_StdFunction_E_userdata<F>(_this_userdata: *mut *mut core::ffi::c_void, _other_userdata: *mut core::ffi::c_void)
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

impl std_function_MR_StdFunction_E_from_int_MR_StdFunction_E
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_function_MR_StdFunction_E_from_int_MR_StdFunction_E>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_function_MR_StdFunction_E_from_int_MR_StdFunction_E)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_function_MR_StdFunction_E_from_int_MR_StdFunction_E) -> crate::Owned<crate::mr::cs::std_function_MR_StdFunction_E_from_int_MR_StdFunction_E>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_function_MR_StdFunction_E_from_int_MR_StdFunction_E as *mut crate::ffi::MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_function_MR_StdFunction_E_from_int_MR_StdFunction_E)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_function_MR_StdFunction_E_from_int_MR_StdFunction_E)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E, crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_function_MR_StdFunction_E_from_int_MR_StdFunction_E as *mut crate::ffi::MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E)};
        __ret
    }

    /// Returns true if this instance stores a callable, as opposed to being null.
    ///
    /// Calls `MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E_has_value()`.
    pub fn has_value(&self) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E_has_value(self as *const Self as *const crate::ffi::MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E)};
        __ret
    }

    /// Destroys the stored callable, making this instance null.
    ///
    /// Calls `MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E_reset()`.
    pub fn reset(&mut self)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E_reset(self as *mut Self as *mut crate::ffi::MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E)};
        __ret
    }

    /// Calls the stored callable.
    ///
    /// Calls `MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E_call()`.
    pub fn call(&self, _1: core::ffi::c_int, _2: crate::ffi::MR_StdFunction_E) -> crate::ffi::MR_StdFunction_E
    {
        let __ret = unsafe {crate::ffi::MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E_call(self as *const Self as *const crate::ffi::MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E, _1, _2)};
        __ret
    }

    /// Constructs an instance holding a Rust closure. The copies of the instance share the closure.
    ///
    /// Calls `MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E_ConstructEx()`.
    pub fn from_fn<F: Fn(core::ffi::c_int, crate::mr::std_function::E) -> crate::mr::std_function::E + Send + Sync + 'static>(func: F) -> crate::Owned<crate::mr::cs::std_function_MR_StdFunction_E_from_int_MR_StdFunction_E>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E_ConstructEx(Some(__std_function_MR_StdFunction_E_from_int_MR_StdFunction_E_call::<F>), std::sync::Arc::into_raw(std::sync::Arc::new(func)) as *mut core::ffi::c_void, None, Some(__std_function_MR_StdFunction_E_from_int_MR_StdFunction_E_userdata::<F>))};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_function_MR_StdFunction_E_from_int_MR_StdFunction_E)}
    }

    /// Replaces the stored callable with a Rust closure.
    ///
    /// Calls `MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E_AssignEx()`.
    pub fn assign_fn<F: Fn(core::ffi::c_int, crate::mr::std_function::E) -> crate::mr::std_function::E + Send + Sync + 'static>(&mut self, func: F)
    {
        unsafe {crate::ffi::MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E_AssignEx(self as *mut Self as *mut crate::ffi::MR_C_std_function_MR_StdFunction_E_from_int_MR_StdFunction_E, Some(__std_function_MR_StdFunction_E_from_int_MR_StdFunction_E_call::<F>), std::sync::Arc::into_raw(std::sync::Arc::new(func)) as *mut core::ffi::c_void, None, Some(__std_function_MR_StdFunction_E_from_int_MR_StdFunction_E_userdata::<F>))};
    }

}

unsafe impl crate::CppCopy for std_function_MR_StdFunction_E_from_int_MR_StdFunction_E
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

