/// Generated from class `MR::LifetimeInference::A`.
///
/// Generated from class `MR::LifetimeInference::A`. Heap-allocated instances are held in `Owned<A>`.
#[repr(transparent)]
pub struct A(crate::ffi::MR_LifetimeInference_A);

unsafe impl crate::CppClass for A
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_LifetimeInference_A_Destroy(ptr as *const crate::ffi::MR_LifetimeInference_A)}
}

impl A
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_LifetimeInference_A_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::lifetime_inference::A>
    {
        let __ret = unsafe {crate::ffi::MR_LifetimeInference_A_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::lifetime_inference::A)}
    }

    /// Constructs `MR::LifetimeInference::A` elementwise.
    ///
    /// Calls `MR_LifetimeInference_A_ConstructFrom()`.
    pub fn construct_from(x: core::ffi::c_int) -> crate::Owned<crate::mr::lifetime_inference::A>
    {
        let __ret = unsafe {crate::ffi::MR_LifetimeInference_A_ConstructFrom(x)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::lifetime_inference::A)}
    }

    /// Generated from constructor `MR::LifetimeInference::A::A`.
    ///
    /// Calls `MR_LifetimeInference_A_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::lifetime_inference::A) -> crate::Owned<crate::mr::lifetime_inference::A>
    {
        let __ret = unsafe {crate::ffi::MR_LifetimeInference_A_ConstructFromAnother(_other as *const crate::mr::lifetime_inference::A as *const crate::ffi::MR_LifetimeInference_A)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::lifetime_inference::A)}
    }

    /// Generated from method `MR::LifetimeInference::A::operator=`.
    ///
    /// Calls `MR_LifetimeInference_A_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::lifetime_inference::A) -> &mut crate::mr::lifetime_inference::A
    {
        let __ret = unsafe {crate::ffi::MR_LifetimeInference_A_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_LifetimeInference_A, _other as *const crate::mr::lifetime_inference::A as *const crate::ffi::MR_LifetimeInference_A)};
        unsafe {&mut *(__ret as *mut crate::mr::lifetime_inference::A)}
    }

    /// Generated from method `MR::LifetimeInference::A::begin`.
    ///
    /// Calls `MR_LifetimeInference_A_begin()`.
    pub fn begin(&mut self) -> Option<&mut core::ffi::c_int>
    {
        let __ret = unsafe {crate::ffi::MR_LifetimeInference_A_begin(self as *mut Self as *mut crate::ffi::MR_LifetimeInference_A)};
        unsafe {(__ret as *mut core::ffi::c_int).as_mut()}
    }

    /// Generated from method `MR::LifetimeInference::A::end`.
    ///
    /// Calls `MR_LifetimeInference_A_end()`.
    pub fn end(&mut self) -> Option<&mut core::ffi::c_int>
    {
        let __ret = unsafe {crate::ffi::MR_LifetimeInference_A_end(self as *mut Self as *mut crate::ffi::MR_LifetimeInference_A)};
        unsafe {(__ret as *mut core::ffi::c_int).as_mut()}
    }

    /// Returns a pointer to a member variable of class `MR::LifetimeInference::A` named `x`.
    ///
    /// Calls `MR_LifetimeInference_A_Get_x()`.
    /// The reference to this object might be preserved as the return value.
    pub fn x<'a>(&'a self) -> &'a core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_LifetimeInference_A_Get_x(self as *const Self as *const crate::ffi::MR_LifetimeInference_A)};
        unsafe {&*(__ret as *const core::ffi::c_int)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::LifetimeInference::A` named `x`.
    ///
    /// Calls `MR_LifetimeInference_A_GetMutable_x()`.
    /// The reference to this object might be preserved as the return value.
    pub fn x_mut<'a>(&'a mut self) -> &'a mut core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_LifetimeInference_A_GetMutable_x(self as *mut Self as *mut crate::ffi::MR_LifetimeInference_A)};
        unsafe {&mut *(__ret as *mut core::ffi::c_int)}
    }

    /// Modifies a member variable of class `MR::LifetimeInference::A` named `x`.
    ///
    /// Calls `MR_LifetimeInference_A_Set_x()`.
    pub fn set_x(&mut self, value: core::ffi::c_int)
    {
        let __ret = unsafe {crate::ffi::MR_LifetimeInference_A_Set_x(self as *mut Self as *mut crate::ffi::MR_LifetimeInference_A, value)};
        __ret
    }

}

unsafe impl crate::CppCopy for A
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::LifetimeInference::B`.
///
/// Generated from class `MR::LifetimeInference::B`. Heap-allocated instances are held in `Owned<B>`.
#[repr(transparent)]
pub struct B(crate::ffi::MR_LifetimeInference_B);

unsafe impl crate::CppClass for B
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_LifetimeInference_B_Destroy(ptr as *const crate::ffi::MR_LifetimeInference_B)}
}

impl B
{
    /// Constructs an empty (default-constructed) instance.
    ///
    /// Calls `MR_LifetimeInference_B_DefaultConstruct()`.
    pub fn new() -> crate::Owned<crate::mr::lifetime_inference::B>
    {
        let __ret = unsafe {crate::ffi::MR_LifetimeInference_B_DefaultConstruct()};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::lifetime_inference::B)}
    }

    /// Constructs `MR::LifetimeInference::B` elementwise.
    ///
    /// Calls `MR_LifetimeInference_B_ConstructFrom()`.
    pub fn construct_from(x: core::ffi::c_int) -> crate::Owned<crate::mr::lifetime_inference::B>
    {
        let __ret = unsafe {crate::ffi::MR_LifetimeInference_B_ConstructFrom(x)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::lifetime_inference::B)}
    }

    /// Generated from constructor `MR::LifetimeInference::B::B`.
    ///
    /// Calls `MR_LifetimeInference_B_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::lifetime_inference::B) -> crate::Owned<crate::mr::lifetime_inference::B>
    {
        let __ret = unsafe {crate::ffi::MR_LifetimeInference_B_ConstructFromAnother(_other as *const crate::mr::lifetime_inference::B as *const crate::ffi::MR_LifetimeInference_B)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::lifetime_inference::B)}
    }

    /// Generated from method `MR::LifetimeInference::B::operator=`.
    ///
    /// Calls `MR_LifetimeInference_B_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::lifetime_inference::B) -> &mut crate::mr::lifetime_inference::B
    {
        let __ret = unsafe {crate::ffi::MR_LifetimeInference_B_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_LifetimeInference_B, _other as *const crate::mr::lifetime_inference::B as *const crate::ffi::MR_LifetimeInference_B)};
        unsafe {&mut *(__ret as *mut crate::mr::lifetime_inference::B)}
    }

    /// Returns a pointer to a member variable of class `MR::LifetimeInference::B` named `x`.
    ///
    /// Calls `MR_LifetimeInference_B_Get_x()`.
    /// The reference to this object might be preserved as the return value.
    pub fn x<'a>(&'a self) -> &'a core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_LifetimeInference_B_Get_x(self as *const Self as *const crate::ffi::MR_LifetimeInference_B)};
        unsafe {&*(__ret as *const core::ffi::c_int)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::LifetimeInference::B` named `x`.
    ///
    /// Calls `MR_LifetimeInference_B_GetMutable_x()`.
    /// The reference to this object might be preserved as the return value.
    pub fn x_mut<'a>(&'a mut self) -> &'a mut core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_LifetimeInference_B_GetMutable_x(self as *mut Self as *mut crate::ffi::MR_LifetimeInference_B)};
        unsafe {&mut *(__ret as *mut core::ffi::c_int)}
    }

    /// Modifies a member variable of class `MR::LifetimeInference::B` named `x`.
    ///
    /// Calls `MR_LifetimeInference_B_Set_x()`.
    pub fn set_x(&mut self, value: core::ffi::c_int)
    {
        let __ret = unsafe {crate::ffi::MR_LifetimeInference_B_Set_x(self as *mut Self as *mut crate::ffi::MR_LifetimeInference_B, value)};
        __ret
    }

}

unsafe impl crate::CppCopy for B
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::LifetimeInference::C`.
///
/// Generated from class `MR::LifetimeInference::C`. Heap-allocated instances are held in `Owned<C>`.
#[repr(transparent)]
pub struct C(crate::ffi::MR_LifetimeInference_C);

unsafe impl crate::CppClass for C
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_LifetimeInference_C_Destroy(ptr as *const crate::ffi::MR_LifetimeInference_C)}
}

impl C
{
    /// Generated from constructor `MR::LifetimeInference::C::C`.
    ///
    /// Calls `MR_LifetimeInference_C_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::lifetime_inference::C) -> crate::Owned<crate::mr::lifetime_inference::C>
    {
        let __ret = unsafe {crate::ffi::MR_LifetimeInference_C_ConstructFromAnother(_other as *const crate::mr::lifetime_inference::C as *const crate::ffi::MR_LifetimeInference_C)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::lifetime_inference::C)}
    }

    /// Generated from constructor `MR::LifetimeInference::C::C`.
    ///
    /// Calls `MR_LifetimeInference_C_Construct()`.
    pub fn construct(_1: &mut crate::mr::lifetime_inference::A, _2: &mut core::ffi::c_int, _3: core::ffi::c_int) -> crate::Owned<crate::mr::lifetime_inference::C>
    {
        let __ret = unsafe {crate::ffi::MR_LifetimeInference_C_Construct(_1 as *mut crate::mr::lifetime_inference::A as *mut crate::ffi::MR_LifetimeInference_A, _2 as *mut core::ffi::c_int as *mut core::ffi::c_int, _3)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::lifetime_inference::C)}
    }

    /// Generated from method `MR::LifetimeInference::C::operator=`.
    ///
    /// Calls `MR_LifetimeInference_C_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::lifetime_inference::C) -> &mut crate::mr::lifetime_inference::C
    {
        let __ret = unsafe {crate::ffi::MR_LifetimeInference_C_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_LifetimeInference_C, _other as *const crate::mr::lifetime_inference::C as *const crate::ffi::MR_LifetimeInference_C)};
        unsafe {&mut *(__ret as *mut crate::mr::lifetime_inference::C)}
    }

}

unsafe impl crate::CppCopy for C
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from function `MR::LifetimeInference::begin`.
///
/// Calls `MR_LifetimeInference_begin_MR_LifetimeInference_A()`.
pub fn begin_mr_lifetime_inference_a(a: &mut crate::mr::lifetime_inference::A) -> Option<&mut core::ffi::c_int>
{
    let __ret = unsafe {crate::ffi::MR_LifetimeInference_begin_MR_LifetimeInference_A(a as *mut crate::mr::lifetime_inference::A as *mut crate::ffi::MR_LifetimeInference_A)};
    unsafe {(__ret as *mut core::ffi::c_int).as_mut()}
}

/// Generated from function `MR::LifetimeInference::end`.
///
/// Calls `MR_LifetimeInference_end_MR_LifetimeInference_A()`.
pub fn end_mr_lifetime_inference_a(a: &mut crate::mr::lifetime_inference::A) -> Option<&mut core::ffi::c_int>
{
    let __ret = unsafe {crate::ffi::MR_LifetimeInference_end_MR_LifetimeInference_A(a as *mut crate::mr::lifetime_inference::A as *mut crate::ffi::MR_LifetimeInference_A)};
    unsafe {(__ret as *mut core::ffi::c_int).as_mut()}
}

/// Generated from function `MR::LifetimeInference::begin`.
///
/// Calls `MR_LifetimeInference_begin_MR_LifetimeInference_B()`.
pub fn begin_mr_lifetime_inference_b(b: &mut crate::mr::lifetime_inference::B) -> Option<&mut core::ffi::c_int>
{
    let __ret = unsafe {crate::ffi::MR_LifetimeInference_begin_MR_LifetimeInference_B(b as *mut crate::mr::lifetime_inference::B as *mut crate::ffi::MR_LifetimeInference_B)};
    unsafe {(__ret as *mut core::ffi::c_int).as_mut()}
}

/// Generated from function `MR::LifetimeInference::end`.
///
/// Calls `MR_LifetimeInference_end_MR_LifetimeInference_B()`.
pub fn end_mr_lifetime_inference_b(b: &mut crate::mr::lifetime_inference::B) -> Option<&mut core::ffi::c_int>
{
    let __ret = unsafe {crate::ffi::MR_LifetimeInference_end_MR_LifetimeInference_B(b as *mut crate::mr::lifetime_inference::B as *mut crate::ffi::MR_LifetimeInference_B)};
    unsafe {(__ret as *mut core::ffi::c_int).as_mut()}
}

