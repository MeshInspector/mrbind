/// Stores one of 3 objects: `int32_t`, `float`, `float`.
///
/// Generated from class `std::variant<int32_t, float, float>`. Heap-allocated instances are held in `Owned<std_variant_int32_t_float_float>`.
#[repr(transparent)]
pub struct std_variant_int32_t_float_float(crate::ffi::MR_C_std_variant_int32_t_float_float);

unsafe impl crate::CppClass for std_variant_int32_t_float_float
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_variant_int32_t_float_float_Destroy(ptr as *const crate::ffi::MR_C_std_variant_int32_t_float_float)}
}

impl std_variant_int32_t_float_float
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_variant_int32_t_float_float_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_variant_int32_t_float_float>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_variant_int32_t_float_float_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_variant_int32_t_float_float)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_variant_int32_t_float_float_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_variant_int32_t_float_float) -> crate::Owned<crate::mr::cs::std_variant_int32_t_float_float>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_variant_int32_t_float_float_ConstructFromAnother(other as *const crate::mr::cs::std_variant_int32_t_float_float as *const crate::ffi::MR_C_std_variant_int32_t_float_float)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_variant_int32_t_float_float)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_variant_int32_t_float_float_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_variant_int32_t_float_float)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_variant_int32_t_float_float_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_variant_int32_t_float_float, other as *const crate::mr::cs::std_variant_int32_t_float_float as *const crate::ffi::MR_C_std_variant_int32_t_float_float)};
        __ret
    }

    /// Returns the index of the stored element type. In rare cases may return -1 if this variant is "valueless by exception".
    ///
    /// Calls `MR_C_std_variant_int32_t_float_float_index()`.
    pub fn index(&self) -> usize
    {
        let __ret = unsafe {crate::ffi::MR_C_std_variant_int32_t_float_float_index(self as *const Self as *const crate::ffi::MR_C_std_variant_int32_t_float_float)};
        __ret
    }

    /// Constructs the variant storing the element 0, of type `int32_t`.
    ///
    /// Calls `MR_C_std_variant_int32_t_float_float_ConstructAs_int32_t()`.
    /// The reference to the parameter `value` might be preserved in the constructed object.
    pub fn construct_as_int32_t(value: i32) -> crate::Owned<crate::mr::cs::std_variant_int32_t_float_float>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_variant_int32_t_float_float_ConstructAs_int32_t(value)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_variant_int32_t_float_float)}
    }

    /// Constructs the variant storing the element 1, of type `float`.
    ///
    /// Calls `MR_C_std_variant_int32_t_float_float_ConstructAs_float_1()`.
    pub fn construct_as_float_1(value: f32) -> crate::Owned<crate::mr::cs::std_variant_int32_t_float_float>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_variant_int32_t_float_float_ConstructAs_float_1(value)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_variant_int32_t_float_float)}
    }

    /// Constructs the variant storing the element 2, of type `float`.
    ///
    /// Calls `MR_C_std_variant_int32_t_float_float_ConstructAs_float_2()`.
    pub fn construct_as_float_2(value: f32) -> crate::Owned<crate::mr::cs::std_variant_int32_t_float_float>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_variant_int32_t_float_float_ConstructAs_float_2(value)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_variant_int32_t_float_float)}
    }

    /// Assigns to the variant, making it store the element 0, of type `int32_t`.
    ///
    /// Calls `MR_C_std_variant_int32_t_float_float_AssignAs_int32_t()`.
    /// The reference to the parameter `value` might be preserved in this object.
    pub fn assign_as_int32_t(&mut self, value: i32)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_variant_int32_t_float_float_AssignAs_int32_t(self as *mut Self as *mut crate::ffi::MR_C_std_variant_int32_t_float_float, value)};
        __ret
    }

    /// Assigns to the variant, making it store the element 1, of type `float`.
    ///
    /// Calls `MR_C_std_variant_int32_t_float_float_AssignAs_float_1()`.
    pub fn assign_as_float_1(&mut self, value: f32)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_variant_int32_t_float_float_AssignAs_float_1(self as *mut Self as *mut crate::ffi::MR_C_std_variant_int32_t_float_float, value)};
        __ret
    }

    /// Assigns to the variant, making it store the element 2, of type `float`.
    ///
    /// Calls `MR_C_std_variant_int32_t_float_float_AssignAs_float_2()`.
    pub fn assign_as_float_2(&mut self, value: f32)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_variant_int32_t_float_float_AssignAs_float_2(self as *mut Self as *mut crate::ffi::MR_C_std_variant_int32_t_float_float, value)};
        __ret
    }

    /// Returns the element 0, of type `int32_t`, read-only. If it's not the active element, returns null.
    ///
    /// Calls `MR_C_std_variant_int32_t_float_float_get_int32_t()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_int32_t<'a>(&'a self) -> Option<&'a i32>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_variant_int32_t_float_float_get_int32_t(self as *const Self as *const crate::ffi::MR_C_std_variant_int32_t_float_float)};
        unsafe {(__ret as *const i32).as_ref()}
    }

    /// Returns the element 0, of type `int32_t`, mutable. If it's not the active element, returns null.
    ///
    /// Calls `MR_C_std_variant_int32_t_float_float_get_int32_t_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_int32_t_mut<'a>(&'a mut self) -> Option<&'a mut i32>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_variant_int32_t_float_float_get_int32_t_mut(self as *mut Self as *mut crate::ffi::MR_C_std_variant_int32_t_float_float)};
        unsafe {(__ret as *mut i32).as_mut()}
    }

    /// Returns the element 1, of type `float`, read-only. If it's not the active element, returns null.
    ///
    /// Calls `MR_C_std_variant_int32_t_float_float_get_float_1()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_float_1<'a>(&'a self) -> Option<&'a f32>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_variant_int32_t_float_float_get_float_1(self as *const Self as *const crate::ffi::MR_C_std_variant_int32_t_float_float)};
        unsafe {(__ret as *const f32).as_ref()}
    }

    /// Returns the element 1, of type `float`, mutable. If it's not the active element, returns null.
    ///
    /// Calls `MR_C_std_variant_int32_t_float_float_get_float_1_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_float_1_mut<'a>(&'a mut self) -> Option<&'a mut f32>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_variant_int32_t_float_float_get_float_1_mut(self as *mut Self as *mut crate::ffi::MR_C_std_variant_int32_t_float_float)};
        unsafe {(__ret as *mut f32).as_mut()}
    }

    /// Returns the element 2, of type `float`, read-only. If it's not the active element, returns null.
    ///
    /// Calls `MR_C_std_variant_int32_t_float_float_get_float_2()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_float_2<'a>(&'a self) -> Option<&'a f32>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_variant_int32_t_float_float_get_float_2(self as *const Self as *const crate::ffi::MR_C_std_variant_int32_t_float_float)};
        unsafe {(__ret as *const f32).as_ref()}
    }

    /// Returns the element 2, of type `float`, mutable. If it's not the active element, returns null.
    ///
    /// Calls `MR_C_std_variant_int32_t_float_float_get_float_2_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_float_2_mut<'a>(&'a mut self) -> Option<&'a mut f32>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_variant_int32_t_float_float_get_float_2_mut(self as *mut Self as *mut crate::ffi::MR_C_std_variant_int32_t_float_float)};
        unsafe {(__ret as *mut f32).as_mut()}
    }

}

unsafe impl crate::CppCopy for std_variant_int32_t_float_float
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

