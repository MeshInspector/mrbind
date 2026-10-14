/// Stores two objects: `int32_t` and `int32_t`.
///
/// Generated from class `std::pair<int32_t, float>`. Heap-allocated instances are held in `Owned<std_pair_int32_t_float>`.
#[repr(transparent)]
pub struct std_pair_int32_t_float(crate::ffi::MR_C_std_pair_int32_t_float);

unsafe impl crate::CppClass for std_pair_int32_t_float
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_C_std_pair_int32_t_float_Destroy(ptr as *const crate::ffi::MR_C_std_pair_int32_t_float)}
}

impl std_pair_int32_t_float
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_C_std_pair_int32_t_float_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::cs::std_pair_int32_t_float>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_pair_int32_t_float_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_pair_int32_t_float)}
    }

    /// Constructs a copy of another instance. The source remains alive.
    ///
    /// Calls `MR_C_std_pair_int32_t_float_ConstructFromAnother()`.
    /// The reference to the parameter `other` might be preserved in the constructed object.
    pub fn construct_from_another(other: &crate::mr::cs::std_pair_int32_t_float) -> crate::Owned<crate::mr::cs::std_pair_int32_t_float>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_pair_int32_t_float_ConstructFromAnother(other as *const crate::mr::cs::std_pair_int32_t_float as *const crate::ffi::MR_C_std_pair_int32_t_float)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_pair_int32_t_float)}
    }

    /// Assigns the contents from another instance. Both objects remain alive after the call.
    ///
    /// Calls `MR_C_std_pair_int32_t_float_AssignFromAnother()`.
    /// The reference to the parameter `other` might be preserved in this object.
    pub fn assign_from_another(&mut self, other: &crate::mr::cs::std_pair_int32_t_float)
    {
        let __ret = unsafe {crate::ffi::MR_C_std_pair_int32_t_float_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_C_std_pair_int32_t_float, other as *const crate::mr::cs::std_pair_int32_t_float as *const crate::ffi::MR_C_std_pair_int32_t_float)};
        __ret
    }

    /// Constructs the pair elementwise.
    ///
    /// Calls `MR_C_std_pair_int32_t_float_Construct()`.
    /// The reference to the parameter `first` might be preserved in the constructed object.
    pub fn construct(first: i32, second: f32) -> crate::Owned<crate::mr::cs::std_pair_int32_t_float>
    {
        let __ret = unsafe {crate::ffi::MR_C_std_pair_int32_t_float_Construct(first, second)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::cs::std_pair_int32_t_float)}
    }

    /// The first of the two elements, read-only.
    ///
    /// Calls `MR_C_std_pair_int32_t_float_first()`.
    /// The reference to this object might be preserved as the return value.
    pub fn first<'a>(&'a self) -> &'a i32
    {
        let __ret = unsafe {crate::ffi::MR_C_std_pair_int32_t_float_first(self as *const Self as *const crate::ffi::MR_C_std_pair_int32_t_float)};
        unsafe {&*(__ret as *const i32)}
    }

    /// The first of the two elements, mutable.
    ///
    /// Calls `MR_C_std_pair_int32_t_float_first_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn first_mut<'a>(&'a mut self) -> &'a mut i32
    {
        let __ret = unsafe {crate::ffi::MR_C_std_pair_int32_t_float_first_mut(self as *mut Self as *mut crate::ffi::MR_C_std_pair_int32_t_float)};
        unsafe {&mut *(__ret as *mut i32)}
    }

    /// The second of the two elements, read-only.
    ///
    /// Calls `MR_C_std_pair_int32_t_float_second()`.
    /// The reference to this object might be preserved as the return value.
    pub fn second<'a>(&'a self) -> &'a f32
    {
        let __ret = unsafe {crate::ffi::MR_C_std_pair_int32_t_float_second(self as *const Self as *const crate::ffi::MR_C_std_pair_int32_t_float)};
        unsafe {&*(__ret as *const f32)}
    }

    /// The second of the two elements, mutable.
    ///
    /// Calls `MR_C_std_pair_int32_t_float_second_mut()`.
    /// The reference to this object might be preserved as the return value.
    pub fn second_mut<'a>(&'a mut self) -> &'a mut f32
    {
        let __ret = unsafe {crate::ffi::MR_C_std_pair_int32_t_float_second_mut(self as *mut Self as *mut crate::ffi::MR_C_std_pair_int32_t_float)};
        unsafe {&mut *(__ret as *mut f32)}
    }

}

unsafe impl crate::CppCopy for std_pair_int32_t_float
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

