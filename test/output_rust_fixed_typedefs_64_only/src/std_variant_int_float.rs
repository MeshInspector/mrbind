/// Stores one of 2 objects: `int`, `float`.
///
/// Generated from class `std::variant<int, float>`. Heap-allocated instances are held in `Owned<std_variant_int_float>`.
#[repr(transparent)]
pub struct std_variant_int_float(crate::ffi::MR_C_std_variant_int_float);

unsafe impl crate::CppClass for std_variant_int_float
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_variant_int_float_Destroy(ptr as *const crate::ffi::MR_C_std_variant_int_float)}
}

impl std_variant_int_float
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_variant_int_float_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_variant_int_float>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_variant_int_float_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_variant_int_float)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_variant_int_float_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_variant_int_float) -> crate::Owned<crate::mr::cs::std_variant_int_float>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_variant_int_float_ConstructFromAnother(other as *const crate::mr::cs::std_variant_int_float as *const crate::ffi::MR_C_std_variant_int_float)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_variant_int_float)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_variant_int_float_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_variant_int_float)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_variant_int_float_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_variant_int_float, other as *const crate::mr::cs::std_variant_int_float as *const crate::ffi::MR_C_std_variant_int_float)};
        __ret
    }

    /// Returns the index of the stored element type. In rare cases may return -1 if this variant is "valueless by exception".
    ///
    /// Calls `MR_C_std_variant_int_float_index()`.
    pub fn index(&self) -> usize
    {
        let __ret = unsafe {crate::ffi::MR_C_std_variant_int_float_index(self as *const Self as *const crate::ffi::MR_C_std_variant_int_float)};
        __ret
    }

    /// Constructs the variant storing the element 0, of type `int`.
    ///
    /// Calls `MR_C_std_variant_int_float_ConstructAs_int()`.
    pub fn construct_as_int(value: core::ffi::c_int) -> crate::Owned<crate::mr::cs::std_variant_int_float>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_variant_int_float_ConstructAs_int(value)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_variant_int_float)}
    }

    /// Constructs the variant storing the element 1, of type `float`.
    ///
    /// Calls `MR_C_std_variant_int_float_ConstructAs_float()`.
    pub fn construct_as_float(value: f32) -> crate::Owned<crate::mr::cs::std_variant_int_float>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_variant_int_float_ConstructAs_float(value)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_variant_int_float)}
    }

    /// Assigns to the variant, making it store the element 0, of type `int`.
    ///
    /// Calls `MR_C_std_variant_int_float_AssignAs_int()`.
    pub fn assign_as_int(&mut self, value: core::ffi::c_int)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_variant_int_float_AssignAs_int(self as *mut Self as *mut crate::ffi::MR_C_std_variant_int_float, value)};
        __ret
    }

    /// Assigns to the variant, making it store the element 1, of type `float`.
    ///
    /// Calls `MR_C_std_variant_int_float_AssignAs_float()`.
    pub fn assign_as_float(&mut self, value: f32)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_variant_int_float_AssignAs_float(self as *mut Self as *mut crate::ffi::MR_C_std_variant_int_float, value)};
        __ret
    }

    /// Returns the element 0, of type `int`, read-only. If it's not the active element, returns null.
    ///
    /// Calls `MR_C_std_variant_int_float_get_int()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_int<'a>(&'a self) -> Option<&'a core::ffi::c_int>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_variant_int_float_get_int(self as *const Self as *const crate::ffi::MR_C_std_variant_int_float)};
        unsafe {(__ret as *const core::ffi::c_int).as_ref()}
    }

    /// Returns the element 0, of type `int`, mutable. If it's not the active element, returns null.
    ///
    /// Calls `MR_C_std_variant_int_float_get_int_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_int_mut<'a>(&'a mut self) -> Option<&'a mut core::ffi::c_int>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_variant_int_float_get_int_mut(self as *mut Self as *mut crate::ffi::MR_C_std_variant_int_float)};
        unsafe {(__ret as *mut core::ffi::c_int).as_mut()}
    }

    /// Returns the element 1, of type `float`, read-only. If it's not the active element, returns null.
    ///
    /// Calls `MR_C_std_variant_int_float_get_float()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_float<'a>(&'a self) -> Option<&'a f32>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_variant_int_float_get_float(self as *const Self as *const crate::ffi::MR_C_std_variant_int_float)};
        unsafe {(__ret as *const f32).as_ref()}
    }

    /// Returns the element 1, of type `float`, mutable. If it's not the active element, returns null.
    ///
    /// Calls `MR_C_std_variant_int_float_get_float_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_float_mut<'a>(&'a mut self) -> Option<&'a mut f32>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_variant_int_float_get_float_mut(self as *mut Self as *mut crate::ffi::MR_C_std_variant_int_float)};
        unsafe {(__ret as *mut f32).as_mut()}
    }

}

unsafe impl crate::CppCopy for std_variant_int_float
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

