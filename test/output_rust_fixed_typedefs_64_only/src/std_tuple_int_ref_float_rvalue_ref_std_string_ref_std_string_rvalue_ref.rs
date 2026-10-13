/// Stores 4 objects: `int &`, `float &&`, `std::string &`, `std::string &&`.
///
/// Generated from class `std::tuple<int &, float &&, std::string &, std::string &&>`. Heap-allocated instances are held in `Owned<std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref>`.
#[repr(transparent)]
pub struct std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref(crate::ffi::MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref);

unsafe impl crate::CppClass for std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_Destroy(ptr as *const crate::ffi::MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref)}
}

impl std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref
{
    /// Constructs the tuple elementwise.
    ///
    /// Calls `MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_Construct()`.
    /// The reference to the parameter `_0` might be preserved in the constructed object.
    /// The reference to the parameter `_1` might be preserved in the constructed object.
    /// The reference to the parameter `_2` might be preserved in the constructed object.
    /// The reference to the parameter `_3` might be preserved in the constructed object.
    pub fn construct(_0: &mut core::ffi::c_int, _1: &mut f32, _2: &mut crate::mr::cs::std_string, _3: &str) -> crate::Owned<crate::mr::cs::std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_Construct(_0 as *mut core::ffi::c_int as *mut core::ffi::c_int, _1 as *mut f32 as *mut f32, _2 as *mut crate::mr::cs::std_string as *mut crate::ffi::MR_C_std_string, _3.as_ptr() as *const core::ffi::c_char, _3.as_ptr().wrapping_add(_3.len()) as *const core::ffi::c_char)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref)}
    }

    /// The element 0, of type `int &`, read-only.
    ///
    /// Calls `MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_get_int_ref()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_int_ref<'a>(&'a self) -> &'a mut core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_get_int_ref(self as *const Self as *const crate::ffi::MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref)};
        unsafe {&mut *(__ret as *mut core::ffi::c_int)}
    }

    /// The element 1, of type `float &&`, read-only.
    ///
    /// Calls `MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_get_float_rvalue_ref()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_float_rvalue_ref<'a>(&'a self) -> &'a mut f32
    {
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_get_float_rvalue_ref(self as *const Self as *const crate::ffi::MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref)};
        unsafe {&mut *(__ret as *mut f32)}
    }

    /// The element 2, of type `std::string &`, read-only.
    ///
    /// Calls `MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_get_std_string_ref()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_std_string_ref<'a>(&'a self) -> &'a mut crate::mr::cs::std_string
    {
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_get_std_string_ref(self as *const Self as *const crate::ffi::MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref)};
        unsafe {&mut *(__ret as *mut crate::mr::cs::std_string)}
    }

    /// The element 3, of type `std::string &&`, read-only.
    ///
    /// Calls `MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_get_std_string_rvalue_ref()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_std_string_rvalue_ref<'a>(&'a self) -> &'a mut crate::mr::cs::std_string
    {
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref_get_std_string_rvalue_ref(self as *const Self as *const crate::ffi::MR_C_std_tuple_int_ref_float_rvalue_ref_std_string_ref_std_string_rvalue_ref)};
        unsafe {&mut *(__ret as *mut crate::mr::cs::std_string)}
    }

}

