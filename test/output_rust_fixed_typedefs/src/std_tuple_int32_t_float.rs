/// Stores 2 objects: `int32_t`, `float`.
///
/// Generated from class `std::tuple<int32_t, float>`. Heap-allocated instances are held in `Owned<std_tuple_int32_t_float>`.
#[repr(transparent)]
pub struct std_tuple_int32_t_float(crate::ffi::MR_C_std_tuple_int32_t_float);

unsafe impl crate::CppClass for std_tuple_int32_t_float
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_tuple_int32_t_float_Destroy(ptr as *const crate::ffi::MR_C_std_tuple_int32_t_float)}
}

impl std_tuple_int32_t_float
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_tuple_int32_t_float_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_tuple_int32_t_float>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_int32_t_float_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_tuple_int32_t_float)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_tuple_int32_t_float_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_tuple_int32_t_float) -> crate::Owned<crate::mr::cs::std_tuple_int32_t_float>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_int32_t_float_ConstructFromAnother(other as *const crate::mr::cs::std_tuple_int32_t_float as *const crate::ffi::MR_C_std_tuple_int32_t_float)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_tuple_int32_t_float)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_tuple_int32_t_float_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_tuple_int32_t_float)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_int32_t_float_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_tuple_int32_t_float, other as *const crate::mr::cs::std_tuple_int32_t_float as *const crate::ffi::MR_C_std_tuple_int32_t_float)};
        __ret
    }

    /// Constructs the tuple elementwise.
    ///
    /// Calls `MR_C_std_tuple_int32_t_float_Construct()`.
    /// The reference to the parameter `_0` might be preserved in the constructed object.
    pub fn construct(_0: i32, _1: f32) -> crate::Owned<crate::mr::cs::std_tuple_int32_t_float>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_int32_t_float_Construct(_0, _1)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_tuple_int32_t_float)}
    }

    /// The element 0, of type `int32_t`, read-only.
    ///
    /// Calls `MR_C_std_tuple_int32_t_float_get_int32_t()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_int32_t<'a>(&'a self) -> &'a i32
    {
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_int32_t_float_get_int32_t(self as *const Self as *const crate::ffi::MR_C_std_tuple_int32_t_float)};
        unsafe {&*(__ret as *const i32)}
    }

    /// The element 0, of type `int32_t`, mutable.
    ///
    /// Calls `MR_C_std_tuple_int32_t_float_get_int32_t_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_int32_t_mut<'a>(&'a mut self) -> &'a mut i32
    {
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_int32_t_float_get_int32_t_mut(self as *mut Self as *mut crate::ffi::MR_C_std_tuple_int32_t_float)};
        unsafe {&mut *(__ret as *mut i32)}
    }

    /// The element 1, of type `float`, read-only.
    ///
    /// Calls `MR_C_std_tuple_int32_t_float_get_float()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_float<'a>(&'a self) -> &'a f32
    {
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_int32_t_float_get_float(self as *const Self as *const crate::ffi::MR_C_std_tuple_int32_t_float)};
        unsafe {&*(__ret as *const f32)}
    }

    /// The element 1, of type `float`, mutable.
    ///
    /// Calls `MR_C_std_tuple_int32_t_float_get_float_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_float_mut<'a>(&'a mut self) -> &'a mut f32
    {
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_int32_t_float_get_float_mut(self as *mut Self as *mut crate::ffi::MR_C_std_tuple_int32_t_float)};
        unsafe {&mut *(__ret as *mut f32)}
    }

}

unsafe impl crate::CppCopy for std_tuple_int32_t_float
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

