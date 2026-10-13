/// Generated from class `MR::MemberVars::A`.
///
/// Generated from class `MR::MemberVars::A`. Heap-allocated instances are held in `Owned<A>`.
#[repr(transparent)]
pub struct A(crate::ffi::MR_MemberVars_A);

unsafe impl crate::CppClass for A
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_MemberVars_A_Destroy(ptr as *const crate::ffi::MR_MemberVars_A)}
}

impl A
{
    /// Generated from constructor `MR::MemberVars::A::A`.
    ///
    /// Calls `MR_MemberVars_A_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::member_vars::A) -> crate::Owned<crate::mr::member_vars::A>
    {
        let __ret = unsafe {crate::ffi::MR_MemberVars_A_ConstructFromAnother(_other as *const crate::mr::member_vars::A as *const crate::ffi::MR_MemberVars_A)};
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::member_vars::A)}
    }

    /// Returns a pointer to a member variable of class `MR::MemberVars::A` named `z`.
    ///
    /// Calls `MR_MemberVars_A_Get_z()`.
    pub fn z() -> *const core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_MemberVars_A_Get_z()};
        __ret
    }

    /// Returns a mutable pointer to a member variable of class `MR::MemberVars::A` named `z`.
    ///
    /// Calls `MR_MemberVars_A_GetMutable_z()`.
    pub fn z_mut() -> *mut core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_MemberVars_A_GetMutable_z()};
        __ret
    }

    /// Modifies a member variable of class `MR::MemberVars::A` named `z`.
    ///
    /// Calls `MR_MemberVars_A_Set_z()`.
    pub fn set_z(value: core::ffi::c_int)
    {
        let __ret = unsafe {crate::ffi::MR_MemberVars_A_Set_z(value)};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::MemberVars::A` named `w`.
    ///
    /// Calls `MR_MemberVars_A_Get_w()`.
    pub fn w() -> *const core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_MemberVars_A_Get_w()};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::MemberVars::A` named `x`.
    ///
    /// Calls `MR_MemberVars_A_Get_x()`.
    /// The reference to this object might be preserved as the return value.
    pub fn x<'a>(&'a self) -> &'a core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_MemberVars_A_Get_x(self as *const Self as *const crate::ffi::MR_MemberVars_A)};
        unsafe {&*(__ret as *const core::ffi::c_int)}
    }

    /// Returns a mutable pointer to a member variable of class `MR::MemberVars::A` named `x`.
    ///
    /// Calls `MR_MemberVars_A_GetMutable_x()`.
    /// The reference to this object might be preserved as the return value.
    pub fn x_mut<'a>(&'a mut self) -> &'a mut core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_MemberVars_A_GetMutable_x(self as *mut Self as *mut crate::ffi::MR_MemberVars_A)};
        unsafe {&mut *(__ret as *mut core::ffi::c_int)}
    }

    /// Modifies a member variable of class `MR::MemberVars::A` named `x`.
    ///
    /// Calls `MR_MemberVars_A_Set_x()`.
    pub fn set_x(&mut self, value: core::ffi::c_int)
    {
        let __ret = unsafe {crate::ffi::MR_MemberVars_A_Set_x(self as *mut Self as *mut crate::ffi::MR_MemberVars_A, value)};
        __ret
    }

    /// Returns a pointer to a member variable of class `MR::MemberVars::A` named `y`.
    ///
    /// Calls `MR_MemberVars_A_Get_y()`.
    /// The reference to this object might be preserved as the return value.
    pub fn y<'a>(&'a self) -> &'a core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_MemberVars_A_Get_y(self as *const Self as *const crate::ffi::MR_MemberVars_A)};
        unsafe {&*(__ret as *const core::ffi::c_int)}
    }

    /// Those don't get setters, and also get only one (non-const-propagating) getter.
    /// Returns a pointer to a member variable of class `MR::MemberVars::A` named `ref`.
    ///
    /// Calls `MR_MemberVars_A_Get_ref()`.
    /// The reference to this object might be preserved as the return value.
    pub fn r#ref<'a>(&'a self) -> &'a mut core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_MemberVars_A_Get_ref(self as *const Self as *const crate::ffi::MR_MemberVars_A)};
        unsafe {&mut *(__ret as *mut core::ffi::c_int)}
    }

    /// Arrays don't get setters, because they aren't assignable. But they still get mutable getters
    /// Returns a pointer to a member variable of class `MR::MemberVars::A` named `arr`. This is a pointer to the first element of an array.
    ///
    /// Calls `MR_MemberVars_A_Get_arr()`.
    /// The reference to this object might be preserved as the return value.
    pub fn arr<'a>(&'a self) -> &'a core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_MemberVars_A_Get_arr(self as *const Self as *const crate::ffi::MR_MemberVars_A)};
        unsafe {&*(__ret as *const core::ffi::c_int)}
    }

    /// Arrays don't get setters, because they aren't assignable. But they still get mutable getters
    /// Returns a mutable pointer to a member variable of class `MR::MemberVars::A` named `arr`. This is a pointer to the first element of an array.
    ///
    /// Calls `MR_MemberVars_A_GetMutable_arr()`.
    /// The reference to this object might be preserved as the return value.
    pub fn arr_mut<'a>(&'a mut self) -> &'a mut core::ffi::c_int
    {
        let __ret = unsafe {crate::ffi::MR_MemberVars_A_GetMutable_arr(self as *mut Self as *mut crate::ffi::MR_MemberVars_A)};
        unsafe {&mut *(__ret as *mut core::ffi::c_int)}
    }

    /// Returns the size of the array member of class `MR::MemberVars::A` named `arr`. The size is `4`.
    ///
    /// Calls `MR_MemberVars_A_GetSize_arr()`.
    pub fn arr_size() -> usize
    {
        let __ret = unsafe {crate::ffi::MR_MemberVars_A_GetSize_arr()};
        __ret
    }

}

unsafe impl crate::CppCopy for A
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

