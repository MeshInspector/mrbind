/// Stores 10 objects: `const int`, `const float`, `int &`, `float &`, `const int &`, `const float &`, `int &&`, `float &&`, `const int &&`, `const float &&`.
///
/// Generated from class `std::tuple<const int, const float, int &, float &, const int &, const float &, int &&, float &&, const int &&, const float &&>`. Heap-allocated instances are held in `Owned<std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref>`.
#[repr(transparent)]
pub struct std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref(crate::ffi::MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref);

unsafe impl crate::CppClass for std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Destroy(ptr as *const crate::ffi::MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref)}
}

impl std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref
{
    /// Constructs the tuple elementwise.
    ///
    /// Calls `MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Construct()`.
    /// The reference to the parameter `_2` might be preserved in the constructed object.
    /// The reference to the parameter `_3` might be preserved in the constructed object.
    /// The reference to the parameter `_4` might be preserved in the constructed object.
    /// The reference to the parameter `_5` might be preserved in the constructed object.
    /// The reference to the parameter `_6` might be preserved in the constructed object.
    /// The reference to the parameter `_7` might be preserved in the constructed object.
    /// The reference to the parameter `_8` might be preserved in the constructed object.
    /// The reference to the parameter `_9` might be preserved in the constructed object.
    pub fn construct(_0: core::ffi::c_int, _1: f32, _2: &mut core::ffi::c_int, _3: &mut f32, _4: &core::ffi::c_int, _5: &f32, _6: &mut core::ffi::c_int, _7: &mut f32, _8: &core::ffi::c_int, _9: &f32) -> crate::Owned<crate::mr::cs::std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_Construct(_0, _1, _2 as *mut core::ffi::c_int as *mut core::ffi::c_int, _3 as *mut f32 as *mut f32, _4 as *const core::ffi::c_int as *const core::ffi::c_int, _5 as *const f32 as *const f32, _6 as *mut core::ffi::c_int as *mut core::ffi::c_int, _7 as *mut f32 as *mut f32, _8 as *const core::ffi::c_int as *const core::ffi::c_int, _9 as *const f32 as *const f32)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref)}
    }

    /// The element 0, of type `const int`, read-only.
    ///
    /// Calls `MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_int()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_const_int<'a>(&'a self) -> &'a core::ffi::c_int
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_int(self as *const Self as *const crate::ffi::MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref)};
        crate::__check_exception();
        unsafe {&*(__ret as *const core::ffi::c_int)}
    }

    /// The element 1, of type `const float`, read-only.
    ///
    /// Calls `MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_float()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_const_float<'a>(&'a self) -> &'a f32
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_float(self as *const Self as *const crate::ffi::MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref)};
        crate::__check_exception();
        unsafe {&*(__ret as *const f32)}
    }

    /// The element 2, of type `int &`, read-only.
    ///
    /// Calls `MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_int_ref()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_int_ref<'a>(&'a self) -> &'a mut core::ffi::c_int
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_int_ref(self as *const Self as *const crate::ffi::MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref)};
        crate::__check_exception();
        unsafe {&mut *(__ret as *mut core::ffi::c_int)}
    }

    /// The element 3, of type `float &`, read-only.
    ///
    /// Calls `MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_float_ref()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_float_ref<'a>(&'a self) -> &'a mut f32
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_float_ref(self as *const Self as *const crate::ffi::MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref)};
        crate::__check_exception();
        unsafe {&mut *(__ret as *mut f32)}
    }

    /// The element 4, of type `const int &`, read-only.
    ///
    /// Calls `MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_int_ref()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_const_int_ref<'a>(&'a self) -> &'a core::ffi::c_int
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_int_ref(self as *const Self as *const crate::ffi::MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref)};
        crate::__check_exception();
        unsafe {&*(__ret as *const core::ffi::c_int)}
    }

    /// The element 5, of type `const float &`, read-only.
    ///
    /// Calls `MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_float_ref()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_const_float_ref<'a>(&'a self) -> &'a f32
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_float_ref(self as *const Self as *const crate::ffi::MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref)};
        crate::__check_exception();
        unsafe {&*(__ret as *const f32)}
    }

    /// The element 6, of type `int &&`, read-only.
    ///
    /// Calls `MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_int_rvalue_ref()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_int_rvalue_ref<'a>(&'a self) -> &'a mut core::ffi::c_int
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_int_rvalue_ref(self as *const Self as *const crate::ffi::MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref)};
        crate::__check_exception();
        unsafe {&mut *(__ret as *mut core::ffi::c_int)}
    }

    /// The element 7, of type `float &&`, read-only.
    ///
    /// Calls `MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_float_rvalue_ref()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_float_rvalue_ref<'a>(&'a self) -> &'a mut f32
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_float_rvalue_ref(self as *const Self as *const crate::ffi::MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref)};
        crate::__check_exception();
        unsafe {&mut *(__ret as *mut f32)}
    }

    /// The element 8, of type `const int &&`, read-only.
    ///
    /// Calls `MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_int_rvalue_ref()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_const_int_rvalue_ref<'a>(&'a self) -> &'a core::ffi::c_int
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_int_rvalue_ref(self as *const Self as *const crate::ffi::MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref)};
        crate::__check_exception();
        unsafe {&*(__ret as *const core::ffi::c_int)}
    }

    /// The element 9, of type `const float &&`, read-only.
    ///
    /// Calls `MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_float_rvalue_ref()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_const_float_rvalue_ref<'a>(&'a self) -> &'a f32
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref_get_const_float_rvalue_ref(self as *const Self as *const crate::ffi::MR_C_std_tuple_const_int_const_float_int_ref_float_ref_const_int_ref_const_float_ref_int_rvalue_ref_float_rvalue_ref_const_int_rvalue_ref_const_float_rvalue_ref)};
        crate::__check_exception();
        unsafe {&*(__ret as *const f32)}
    }

}

