/// Stores 10 objects: `const int32_t`, `const float`, `int32_t &`, `float &`, `const int32_t &`, `const float &`, `int32_t &&`, `float &&`, `const int32_t &&`, `const float &&`.
///
/// Generated from class `std::tuple<const int32_t, const float, int32_t &, float &, const int32_t &, const float &, int32_t &&, float &&, const int32_t &&, const float &&>`. Heap-allocated instances are held in `Owned<std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref>`.
#[repr(transparent)]
pub struct std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref(crate::ffi::MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref);

unsafe impl crate::CppClass for std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_Destroy(ptr as *const crate::ffi::MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref)}
}

impl std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref
{
    /// Constructs the tuple elementwise.
    ///
    /// Calls `MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_Construct()`.
    /// The reference to the parameter `_0` might be preserved in the constructed object.
    /// The reference to the parameter `_2` might be preserved in the constructed object.
    /// The reference to the parameter `_3` might be preserved in the constructed object.
    /// The reference to the parameter `_4` might be preserved in the constructed object.
    /// The reference to the parameter `_5` might be preserved in the constructed object.
    /// The reference to the parameter `_6` might be preserved in the constructed object.
    /// The reference to the parameter `_7` might be preserved in the constructed object.
    /// The reference to the parameter `_8` might be preserved in the constructed object.
    /// The reference to the parameter `_9` might be preserved in the constructed object.
    pub fn construct(_0: i32, _1: f32, _2: &mut i32, _3: &mut f32, _4: &i32, _5: &f32, _6: &mut i32, _7: &mut f32, _8: &i32, _9: &f32) -> crate::Owned<crate::mr::cs::std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_Construct(_0, _1, _2 as *mut i32 as *mut i32, _3 as *mut f32 as *mut f32, _4 as *const i32 as *const i32, _5 as *const f32 as *const f32, _6 as *mut i32 as *mut i32, _7 as *mut f32 as *mut f32, _8 as *const i32 as *const i32, _9 as *const f32 as *const f32)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref)}
    }

    /// The element 0, of type `const int32_t`, read-only.
    ///
    /// Calls `MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_get_const_int32_t()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_const_int32_t<'a>(&'a self) -> &'a i32
    {
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_get_const_int32_t(self as *const Self as *const crate::ffi::MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref)};
        unsafe {&*(__ret as *const i32)}
    }

    /// The element 1, of type `const float`, read-only.
    ///
    /// Calls `MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_get_const_float()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_const_float<'a>(&'a self) -> &'a f32
    {
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_get_const_float(self as *const Self as *const crate::ffi::MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref)};
        unsafe {&*(__ret as *const f32)}
    }

    /// The element 2, of type `int32_t &`, read-only.
    ///
    /// Calls `MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_get_int32_t_ref()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_int32_t_ref<'a>(&'a self) -> &'a mut i32
    {
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_get_int32_t_ref(self as *const Self as *const crate::ffi::MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref)};
        unsafe {&mut *(__ret as *mut i32)}
    }

    /// The element 3, of type `float &`, read-only.
    ///
    /// Calls `MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_get_float_ref()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_float_ref<'a>(&'a self) -> &'a mut f32
    {
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_get_float_ref(self as *const Self as *const crate::ffi::MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref)};
        unsafe {&mut *(__ret as *mut f32)}
    }

    /// The element 4, of type `const int32_t &`, read-only.
    ///
    /// Calls `MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_get_const_int32_t_ref()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_const_int32_t_ref<'a>(&'a self) -> &'a i32
    {
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_get_const_int32_t_ref(self as *const Self as *const crate::ffi::MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref)};
        unsafe {&*(__ret as *const i32)}
    }

    /// The element 5, of type `const float &`, read-only.
    ///
    /// Calls `MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_get_const_float_ref()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_const_float_ref<'a>(&'a self) -> &'a f32
    {
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_get_const_float_ref(self as *const Self as *const crate::ffi::MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref)};
        unsafe {&*(__ret as *const f32)}
    }

    /// The element 6, of type `int32_t &&`, read-only.
    ///
    /// Calls `MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_get_int32_t_rvalue_ref()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_int32_t_rvalue_ref<'a>(&'a self) -> &'a mut i32
    {
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_get_int32_t_rvalue_ref(self as *const Self as *const crate::ffi::MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref)};
        unsafe {&mut *(__ret as *mut i32)}
    }

    /// The element 7, of type `float &&`, read-only.
    ///
    /// Calls `MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_get_float_rvalue_ref()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_float_rvalue_ref<'a>(&'a self) -> &'a mut f32
    {
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_get_float_rvalue_ref(self as *const Self as *const crate::ffi::MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref)};
        unsafe {&mut *(__ret as *mut f32)}
    }

    /// The element 8, of type `const int32_t &&`, read-only.
    ///
    /// Calls `MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_get_const_int32_t_rvalue_ref()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_const_int32_t_rvalue_ref<'a>(&'a self) -> &'a i32
    {
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_get_const_int32_t_rvalue_ref(self as *const Self as *const crate::ffi::MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref)};
        unsafe {&*(__ret as *const i32)}
    }

    /// The element 9, of type `const float &&`, read-only.
    ///
    /// Calls `MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_get_const_float_rvalue_ref()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_const_float_rvalue_ref<'a>(&'a self) -> &'a f32
    {
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref_get_const_float_rvalue_ref(self as *const Self as *const crate::ffi::MR_C_std_tuple_const_int32_t_const_float_int32_t_ref_float_ref_const_int32_t_ref_const_float_ref_int32_t_rvalue_ref_float_rvalue_ref_const_int32_t_rvalue_ref_const_float_rvalue_ref)};
        unsafe {&*(__ret as *const f32)}
    }

}

