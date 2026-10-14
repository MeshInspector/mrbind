/// Stores one of 3 objects: `int32_t`, `float`, `std::string`.
///
/// Generated from class `std::variant<int32_t, float, std::string>`. Heap-allocated instances are held in `Owned<std_variant_int32_t_float_std_string>`.
#[repr(transparent)]
pub struct std_variant_int32_t_float_std_string(crate::ffi::MR_C_std_variant_int32_t_float_std_string);

unsafe impl crate::CppClass for std_variant_int32_t_float_std_string
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_variant_int32_t_float_std_string_Destroy(ptr as *const crate::ffi::MR_C_std_variant_int32_t_float_std_string)}
}

impl std_variant_int32_t_float_std_string
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_variant_int32_t_float_std_string_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_variant_int32_t_float_std_string>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_variant_int32_t_float_std_string_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_variant_int32_t_float_std_string)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_variant_int32_t_float_std_string_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_variant_int32_t_float_std_string) -> crate::Owned<crate::mr::cs::std_variant_int32_t_float_std_string>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_variant_int32_t_float_std_string_ConstructFromAnother(crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_variant_int32_t_float_std_string as *mut crate::ffi::MR_C_std_variant_int32_t_float_std_string)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_variant_int32_t_float_std_string)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_variant_int32_t_float_std_string_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_variant_int32_t_float_std_string)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_variant_int32_t_float_std_string_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_variant_int32_t_float_std_string, crate::ffi::MR_C_PassBy_Copy, other as *const crate::mr::cs::std_variant_int32_t_float_std_string as *mut crate::ffi::MR_C_std_variant_int32_t_float_std_string)};
        __ret
    }

    /// Returns the index of the stored element type. In rare cases may return -1 if this variant is "valueless by exception".
    ///
    /// Calls `MR_C_std_variant_int32_t_float_std_string_index()`.
    pub fn index(&self) -> usize
    {
        let __ret = unsafe {crate::ffi::MR_C_std_variant_int32_t_float_std_string_index(self as *const Self as *const crate::ffi::MR_C_std_variant_int32_t_float_std_string)};
        __ret
    }

    /// Constructs the variant storing the element 0, of type `int32_t`.
    ///
    /// Calls `MR_C_std_variant_int32_t_float_std_string_ConstructAs_int32_t()`.
    /// The reference to the parameter `value` might be preserved in the constructed object.
    pub fn construct_as_int32_t(value: i32) -> crate::Owned<crate::mr::cs::std_variant_int32_t_float_std_string>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_variant_int32_t_float_std_string_ConstructAs_int32_t(value)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_variant_int32_t_float_std_string)}
    }

    /// Constructs the variant storing the element 1, of type `float`.
    ///
    /// Calls `MR_C_std_variant_int32_t_float_std_string_ConstructAs_float()`.
    pub fn construct_as_float(value: f32) -> crate::Owned<crate::mr::cs::std_variant_int32_t_float_std_string>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_variant_int32_t_float_std_string_ConstructAs_float(value)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_variant_int32_t_float_std_string)}
    }

    /// Constructs the variant storing the element 2, of type `std::string`.
    ///
    /// Calls `MR_C_std_variant_int32_t_float_std_string_ConstructAs_std_string()`.
    /// The reference to the parameter `value` might be preserved in the constructed object.
    pub fn construct_as_std_string(value: &str) -> crate::Owned<crate::mr::cs::std_variant_int32_t_float_std_string>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_variant_int32_t_float_std_string_ConstructAs_std_string(value.as_ptr() as *const core::ffi::c_char, value.as_ptr().wrapping_add(value.len()) as *const core::ffi::c_char)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_variant_int32_t_float_std_string)}
    }

    /// Assigns to the variant, making it store the element 0, of type `int32_t`.
    ///
    /// Calls `MR_C_std_variant_int32_t_float_std_string_AssignAs_int32_t()`.
    /// The reference to the parameter `value` might be preserved in this object.
    pub fn assign_as_int32_t(&mut self, value: i32)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_variant_int32_t_float_std_string_AssignAs_int32_t(self as *mut Self as *mut crate::ffi::MR_C_std_variant_int32_t_float_std_string, value)};
        __ret
    }

    /// Assigns to the variant, making it store the element 1, of type `float`.
    ///
    /// Calls `MR_C_std_variant_int32_t_float_std_string_AssignAs_float()`.
    pub fn assign_as_float(&mut self, value: f32)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_variant_int32_t_float_std_string_AssignAs_float(self as *mut Self as *mut crate::ffi::MR_C_std_variant_int32_t_float_std_string, value)};
        __ret
    }

    /// Assigns to the variant, making it store the element 2, of type `std::string`.
    ///
    /// Calls `MR_C_std_variant_int32_t_float_std_string_AssignAs_std_string()`.
    /// The reference to the parameter `value` might be preserved in this object.
    pub fn assign_as_std_string(&mut self, value: &str)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_variant_int32_t_float_std_string_AssignAs_std_string(self as *mut Self as *mut crate::ffi::MR_C_std_variant_int32_t_float_std_string, value.as_ptr() as *const core::ffi::c_char, value.as_ptr().wrapping_add(value.len()) as *const core::ffi::c_char)};
        __ret
    }

    /// Returns the element 0, of type `int32_t`, read-only. If it's not the active element, returns null.
    ///
    /// Calls `MR_C_std_variant_int32_t_float_std_string_get_int32_t()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_int32_t<'a>(&'a self) -> Option<&'a i32>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_variant_int32_t_float_std_string_get_int32_t(self as *const Self as *const crate::ffi::MR_C_std_variant_int32_t_float_std_string)};
        unsafe {(__ret as *const i32).as_ref()}
    }

    /// Returns the element 0, of type `int32_t`, mutable. If it's not the active element, returns null.
    ///
    /// Calls `MR_C_std_variant_int32_t_float_std_string_get_int32_t_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_int32_t_mut<'a>(&'a mut self) -> Option<&'a mut i32>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_variant_int32_t_float_std_string_get_int32_t_mut(self as *mut Self as *mut crate::ffi::MR_C_std_variant_int32_t_float_std_string)};
        unsafe {(__ret as *mut i32).as_mut()}
    }

    /// Returns the element 1, of type `float`, read-only. If it's not the active element, returns null.
    ///
    /// Calls `MR_C_std_variant_int32_t_float_std_string_get_float()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_float<'a>(&'a self) -> Option<&'a f32>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_variant_int32_t_float_std_string_get_float(self as *const Self as *const crate::ffi::MR_C_std_variant_int32_t_float_std_string)};
        unsafe {(__ret as *const f32).as_ref()}
    }

    /// Returns the element 1, of type `float`, mutable. If it's not the active element, returns null.
    ///
    /// Calls `MR_C_std_variant_int32_t_float_std_string_get_float_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_float_mut<'a>(&'a mut self) -> Option<&'a mut f32>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_variant_int32_t_float_std_string_get_float_mut(self as *mut Self as *mut crate::ffi::MR_C_std_variant_int32_t_float_std_string)};
        unsafe {(__ret as *mut f32).as_mut()}
    }

    /// Returns the element 2, of type `std::string`, read-only. If it's not the active element, returns null.
    ///
    /// Calls `MR_C_std_variant_int32_t_float_std_string_get_std_string()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_std_string<'a>(&'a self) -> Option<&'a crate::mr::cs::std_string>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_variant_int32_t_float_std_string_get_std_string(self as *const Self as *const crate::ffi::MR_C_std_variant_int32_t_float_std_string)};
        unsafe {(__ret as *const crate::mr::cs::std_string).as_ref()}
    }

    /// Returns the element 2, of type `std::string`, mutable. If it's not the active element, returns null.
    ///
    /// Calls `MR_C_std_variant_int32_t_float_std_string_get_std_string_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_std_string_mut<'a>(&'a mut self) -> Option<&'a mut crate::mr::cs::std_string>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_variant_int32_t_float_std_string_get_std_string_mut(self as *mut Self as *mut crate::ffi::MR_C_std_variant_int32_t_float_std_string)};
        unsafe {(__ret as *mut crate::mr::cs::std_string).as_mut()}
    }

}

unsafe impl crate::CppCopy for std_variant_int32_t_float_std_string
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

