/// Stores 1 object: `int32_t`.
///
/// Generated from class `std::tuple<int32_t>`. Heap-allocated instances are held in `Owned<std_tuple_int32_t>`.
#[repr(transparent)]
pub struct std_tuple_int32_t(crate::ffi::MR_C_std_tuple_int32_t);

unsafe impl crate::CppClass for std_tuple_int32_t
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_tuple_int32_t_Destroy(ptr as *const crate::ffi::MR_C_std_tuple_int32_t)}
}

impl std_tuple_int32_t
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_tuple_int32_t_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_tuple_int32_t>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_int32_t_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_tuple_int32_t)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_tuple_int32_t_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_tuple_int32_t) -> crate::Owned<crate::mr::cs::std_tuple_int32_t>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_int32_t_ConstructFromAnother(other as *const crate::mr::cs::std_tuple_int32_t as *const crate::ffi::MR_C_std_tuple_int32_t)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_tuple_int32_t)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_tuple_int32_t_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_tuple_int32_t)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_int32_t_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_tuple_int32_t, other as *const crate::mr::cs::std_tuple_int32_t as *const crate::ffi::MR_C_std_tuple_int32_t)};
        __ret
    }

    /// Constructs the tuple elementwise.
    ///
    /// Calls `MR_C_std_tuple_int32_t_Construct()`.
    /// The reference to the parameter `_0` might be preserved in the constructed object.
    pub fn construct(_0: i32) -> crate::Owned<crate::mr::cs::std_tuple_int32_t>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_int32_t_Construct(_0)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_tuple_int32_t)}
    }

    /// The element 0, of type `int32_t`, read-only.
    ///
    /// Calls `MR_C_std_tuple_int32_t_get_int32_t()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_int32_t<'a>(&'a self) -> &'a i32
    {
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_int32_t_get_int32_t(self as *const Self as *const crate::ffi::MR_C_std_tuple_int32_t)};
        unsafe {&*(__ret as *const i32)}
    }

    /// The element 0, of type `int32_t`, mutable.
    ///
    /// Calls `MR_C_std_tuple_int32_t_get_int32_t_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn get_int32_t_mut<'a>(&'a mut self) -> &'a mut i32
    {
        let __ret = unsafe {crate::ffi::MR_C_std_tuple_int32_t_get_int32_t_mut(self as *mut Self as *mut crate::ffi::MR_C_std_tuple_int32_t)};
        unsafe {&mut *(__ret as *mut i32)}
    }

}

unsafe impl crate::CppCopy for std_tuple_int32_t
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

