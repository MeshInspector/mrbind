/// Stores either a `MR::CSharp::ExposedLayoutSh` that represents success or a `float` that represents an error.
///
/// Generated from class `expected<MR::CSharp::ExposedLayoutSh, float>`. Heap-allocated instances are held in `Owned<expected_MR_CSharp_ExposedLayoutSh_float>`.
#[repr(transparent)]
pub struct expected_MR_CSharp_ExposedLayoutSh_float(crate::ffi::MR_C_expected_MR_CSharp_ExposedLayoutSh_float);

unsafe impl crate::CppClass for expected_MR_CSharp_ExposedLayoutSh_float
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_expected_MR_CSharp_ExposedLayoutSh_float_Destroy(ptr as *const crate::ffi::MR_C_expected_MR_CSharp_ExposedLayoutSh_float)}
}

impl expected_MR_CSharp_ExposedLayoutSh_float
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_expected_MR_CSharp_ExposedLayoutSh_float_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::expected_MR_CSharp_ExposedLayoutSh_float>
    {
        let __ret = unsafe {crate::ffi::MR_C_expected_MR_CSharp_ExposedLayoutSh_float_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::expected_MR_CSharp_ExposedLayoutSh_float)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_expected_MR_CSharp_ExposedLayoutSh_float_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::expected_MR_CSharp_ExposedLayoutSh_float) -> crate::Owned<crate::mr::cs::expected_MR_CSharp_ExposedLayoutSh_float>
    {
        let __ret = unsafe {crate::ffi::MR_C_expected_MR_CSharp_ExposedLayoutSh_float_ConstructFromAnother(other as *const crate::mr::cs::expected_MR_CSharp_ExposedLayoutSh_float as *const crate::ffi::MR_C_expected_MR_CSharp_ExposedLayoutSh_float)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::expected_MR_CSharp_ExposedLayoutSh_float)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_expected_MR_CSharp_ExposedLayoutSh_float_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::expected_MR_CSharp_ExposedLayoutSh_float)
    {
        let __ret = unsafe {crate::ffi::MR_C_expected_MR_CSharp_ExposedLayoutSh_float_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_expected_MR_CSharp_ExposedLayoutSh_float, other as *const crate::mr::cs::expected_MR_CSharp_ExposedLayoutSh_float as *const crate::ffi::MR_C_expected_MR_CSharp_ExposedLayoutSh_float)};
        __ret
    }

    /// Returns true if this instance represents success, or false if it represents an error.
    ///
    /// Calls `MR_C_expected_MR_CSharp_ExposedLayoutSh_float_success()`.
    pub fn success(&self) -> bool
    {
        let __ret = unsafe {crate::ffi::MR_C_expected_MR_CSharp_ExposedLayoutSh_float_success(self as *const Self as *const crate::ffi::MR_C_expected_MR_CSharp_ExposedLayoutSh_float)};
        __ret
    }

    /// If this instance represents success, returns the stored `MR::CSharp::ExposedLayoutSh`. Otherwise null.
    ///
    /// Calls `MR_C_expected_MR_CSharp_ExposedLayoutSh_float_value()`.
    /// The reference to this object might be preserved as the return value.
    pub fn value<'a>(&'a self) -> Option<&'a crate::ffi::MR_CSharp_ExposedLayoutSh>
    {
        let __ret = unsafe {crate::ffi::MR_C_expected_MR_CSharp_ExposedLayoutSh_float_value(self as *const Self as *const crate::ffi::MR_C_expected_MR_CSharp_ExposedLayoutSh_float)};
        unsafe {(__ret as *const crate::ffi::MR_CSharp_ExposedLayoutSh).as_ref()}
    }

    /// If this instance represents an error, returns the stored `float`. Otherwise null.
    ///
    /// Calls `MR_C_expected_MR_CSharp_ExposedLayoutSh_float_error()`.
    /// The reference to this object might be preserved as the return value.
    pub fn error<'a>(&'a self) -> Option<&'a f32>
    {
        let __ret = unsafe {crate::ffi::MR_C_expected_MR_CSharp_ExposedLayoutSh_float_error(self as *const Self as *const crate::ffi::MR_C_expected_MR_CSharp_ExposedLayoutSh_float)};
        unsafe {(__ret as *const f32).as_ref()}
    }

    /// If this instance represents success, returns the stored `MR::CSharp::ExposedLayoutSh`. Otherwise null. This version returns a mutable pointer.
    ///
    /// Calls `MR_C_expected_MR_CSharp_ExposedLayoutSh_float_value_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn value_mut<'a>(&'a mut self) -> Option<&'a mut crate::ffi::MR_CSharp_ExposedLayoutSh>
    {
        let __ret = unsafe {crate::ffi::MR_C_expected_MR_CSharp_ExposedLayoutSh_float_value_mut(self as *mut Self as *mut crate::ffi::MR_C_expected_MR_CSharp_ExposedLayoutSh_float)};
        unsafe {(__ret as *mut crate::ffi::MR_CSharp_ExposedLayoutSh).as_mut()}
    }

    /// If this instance represents an error, returns the stored `float`. Otherwise null. This version returns a mutable pointer.
    ///
    /// Calls `MR_C_expected_MR_CSharp_ExposedLayoutSh_float_error_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn error_mut<'a>(&'a mut self) -> Option<&'a mut f32>
    {
        let __ret = unsafe {crate::ffi::MR_C_expected_MR_CSharp_ExposedLayoutSh_float_error_mut(self as *mut Self as *mut crate::ffi::MR_C_expected_MR_CSharp_ExposedLayoutSh_float)};
        unsafe {(__ret as *mut f32).as_mut()}
    }

    /// The value as `Ok`, or the error as `Err`.
    pub fn as_result<'a>(&'a self) -> Result<&'a crate::ffi::MR_CSharp_ExposedLayoutSh, &'a f32>
    {
        let __this = self as *const Self as *const crate::ffi::MR_C_expected_MR_CSharp_ExposedLayoutSh_float;
        unsafe {match (crate::ffi::MR_C_expected_MR_CSharp_ExposedLayoutSh_float_value(__this) as *const crate::ffi::MR_CSharp_ExposedLayoutSh).as_ref() {Some(x) => Ok(x), None => Err(&*(crate::ffi::MR_C_expected_MR_CSharp_ExposedLayoutSh_float_error(__this) as *const f32))}}
    }

    /// The value as `Ok`, or the error as `Err`, as mutable references.
    pub fn as_result_mut<'a>(&'a mut self) -> Result<&'a mut crate::ffi::MR_CSharp_ExposedLayoutSh, &'a mut f32>
    {
        let __this = self as *mut Self as *mut crate::ffi::MR_C_expected_MR_CSharp_ExposedLayoutSh_float;
        unsafe {match (crate::ffi::MR_C_expected_MR_CSharp_ExposedLayoutSh_float_value_mut(__this) as *mut crate::ffi::MR_CSharp_ExposedLayoutSh).as_mut() {Some(x) => Ok(x), None => Err(&mut *(crate::ffi::MR_C_expected_MR_CSharp_ExposedLayoutSh_float_error_mut(__this) as *mut f32))}}
    }

}

impl crate::Owned<expected_MR_CSharp_ExposedLayoutSh_float>
{
    /// Converts to a Rust `Result`, taking the value or the error out, so `?` works on the return values: `let mesh = mesh_load(...).into_result()?;`.
    pub fn into_result(mut self) -> Result<crate::ffi::MR_CSharp_ExposedLayoutSh, f32>
    {
        match self.as_result_mut() {Ok(x) => Ok(*x), Err(x) => Err(*x)}
    }
}

unsafe impl crate::CppCopy for expected_MR_CSharp_ExposedLayoutSh_float
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

