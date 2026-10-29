/// Generated from class `MR::OverloadSuffix::A`.
///
/// Generated from class `MR::OverloadSuffix::A`. Heap-allocated instances are held in `Owned<A>`.
#[repr(transparent)]
pub struct A(crate::ffi::MR_OverloadSuffix_A);

unsafe impl crate::CppClass for A
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_OverloadSuffix_A_Destroy(ptr as *const crate::ffi::MR_OverloadSuffix_A)}
}

impl A
{
    /// Generated from constructor `MR::OverloadSuffix::A::A`.
    ///
    /// Calls `MR_OverloadSuffix_A_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::overload_suffix::A) -> crate::Owned<crate::mr::overload_suffix::A>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_OverloadSuffix_A_ConstructFromAnother(_other as *const crate::mr::overload_suffix::A as *const crate::ffi::MR_OverloadSuffix_A)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::overload_suffix::A)}
    }

    /// Generated from constructor `MR::OverloadSuffix::A::A`.
    ///
    /// Calls `MR_OverloadSuffix_A_Construct_1_int()`.
    pub fn construct_1_int(_1: core::ffi::c_int) -> crate::Owned<crate::mr::overload_suffix::A>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_OverloadSuffix_A_Construct_1_int(_1)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::overload_suffix::A)}
    }

    /// Generated from constructor `MR::OverloadSuffix::A::A`.
    ///
    /// Calls `MR_OverloadSuffix_A_Construct_1_float()`.
    pub fn construct_1_float(_1: f32) -> crate::Owned<crate::mr::overload_suffix::A>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_OverloadSuffix_A_Construct_1_float(_1)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::overload_suffix::A)}
    }

    /// Generated from constructor `MR::OverloadSuffix::A::A`.
    ///
    /// Calls `MR_OverloadSuffix_A_Construct_2()`.
    pub fn construct_2(_1: core::ffi::c_int, _2: core::ffi::c_int) -> crate::Owned<crate::mr::overload_suffix::A>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_OverloadSuffix_A_Construct_2(_1, _2)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::overload_suffix::A)}
    }

    /// Generated from method `MR::OverloadSuffix::A::operator=`.
    ///
    /// Calls `MR_OverloadSuffix_A_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::overload_suffix::A) -> &mut crate::mr::overload_suffix::A
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_OverloadSuffix_A_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_OverloadSuffix_A, _other as *const crate::mr::overload_suffix::A as *const crate::ffi::MR_OverloadSuffix_A)};
        crate::__check_exception();
        unsafe {&mut *(__ret as *mut crate::mr::overload_suffix::A)}
    }

    /// Generated from method `MR::OverloadSuffix::A::foo`.
    ///
    /// Calls `MR_OverloadSuffix_A_foo_1_int()`.
    pub fn foo_1_int(&mut self, _1: core::ffi::c_int)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_OverloadSuffix_A_foo_1_int(self as *mut Self as *mut crate::ffi::MR_OverloadSuffix_A, _1)};
        crate::__check_exception();
        __ret
    }

    /// Generated from method `MR::OverloadSuffix::A::foo`.
    ///
    /// Calls `MR_OverloadSuffix_A_foo_1_float()`.
    pub fn foo_1_float(&mut self, _1: f32)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_OverloadSuffix_A_foo_1_float(self as *mut Self as *mut crate::ffi::MR_OverloadSuffix_A, _1)};
        crate::__check_exception();
        __ret
    }

    /// Generated from method `MR::OverloadSuffix::A::foo`.
    ///
    /// Calls `MR_OverloadSuffix_A_foo_2()`.
    pub fn foo_2(&mut self, _1: core::ffi::c_int, _2: core::ffi::c_int)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_OverloadSuffix_A_foo_2(self as *mut Self as *mut crate::ffi::MR_OverloadSuffix_A, _1, _2)};
        crate::__check_exception();
        __ret
    }

    /// Generated from method `MR::OverloadSuffix::A::operator-`.
    ///
    /// Calls `MR_C_sub_MR_OverloadSuffix_A_int()`.
    pub fn op_sub_int(&mut self, _1: core::ffi::c_int)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_sub_MR_OverloadSuffix_A_int(self as *mut Self as *mut crate::ffi::MR_OverloadSuffix_A, _1)};
        crate::__check_exception();
        __ret
    }

    /// Generated from method `MR::OverloadSuffix::A::operator-`.
    ///
    /// Calls `MR_C_sub_MR_OverloadSuffix_A_float()`.
    pub fn op_sub_float(&mut self, _1: f32)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_sub_MR_OverloadSuffix_A_float(self as *mut Self as *mut crate::ffi::MR_OverloadSuffix_A, _1)};
        crate::__check_exception();
        __ret
    }

    /// Generated from method `MR::OverloadSuffix::A::operator[]`.
    ///
    /// Calls `MR_OverloadSuffix_A_index_int()`.
    pub fn index_int(&mut self, _1: core::ffi::c_int)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_OverloadSuffix_A_index_int(self as *mut Self as *mut crate::ffi::MR_OverloadSuffix_A, _1)};
        crate::__check_exception();
        __ret
    }

    /// Generated from method `MR::OverloadSuffix::A::operator[]`.
    ///
    /// Calls `MR_OverloadSuffix_A_index_float()`.
    pub fn index_float(&mut self, _1: f32)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_OverloadSuffix_A_index_float(self as *mut Self as *mut crate::ffi::MR_OverloadSuffix_A, _1)};
        crate::__check_exception();
        __ret
    }

}

unsafe impl crate::CppCopy for A
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::OverloadSuffix::B`.
///
/// Generated from class `MR::OverloadSuffix::B`. Heap-allocated instances are held in `Owned<B>`.
#[repr(transparent)]
pub struct B(crate::ffi::MR_OverloadSuffix_B);

unsafe impl crate::CppClass for B
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_OverloadSuffix_B_Destroy(ptr as *const crate::ffi::MR_OverloadSuffix_B)}
}

impl B
{
    /// Generated from constructor `MR::OverloadSuffix::B::B`.
    ///
    /// Calls `MR_OverloadSuffix_B_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::overload_suffix::B) -> crate::Owned<crate::mr::overload_suffix::B>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_OverloadSuffix_B_ConstructFromAnother(_other as *const crate::mr::overload_suffix::B as *const crate::ffi::MR_OverloadSuffix_B)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::overload_suffix::B)}
    }

    /// Generated from constructor `MR::OverloadSuffix::B::B`.
    ///
    /// Calls `MR_OverloadSuffix_B_Construct()`.
    pub fn construct(_1: core::ffi::c_int) -> crate::Owned<crate::mr::overload_suffix::B>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_OverloadSuffix_B_Construct(_1)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::overload_suffix::B)}
    }

    /// Generated from constructor `MR::OverloadSuffix::B::B`.
    ///
    /// Calls `MR_OverloadSuffix_B_Construct_1()`.
    pub fn construct_1(_1: f32) -> crate::Owned<crate::mr::overload_suffix::B>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_OverloadSuffix_B_Construct_1(_1)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::overload_suffix::B)}
    }

    /// Generated from constructor `MR::OverloadSuffix::B::B`.
    ///
    /// Calls `MR_OverloadSuffix_B_Construct_2()`.
    pub fn construct_2(_1: core::ffi::c_int, _2: core::ffi::c_int) -> crate::Owned<crate::mr::overload_suffix::B>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_OverloadSuffix_B_Construct_2(_1, _2)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::overload_suffix::B)}
    }

    /// Generated from method `MR::OverloadSuffix::B::operator=`.
    ///
    /// Calls `MR_OverloadSuffix_B_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::overload_suffix::B) -> &mut crate::mr::overload_suffix::B
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_OverloadSuffix_B_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_OverloadSuffix_B, _other as *const crate::mr::overload_suffix::B as *const crate::ffi::MR_OverloadSuffix_B)};
        crate::__check_exception();
        unsafe {&mut *(__ret as *mut crate::mr::overload_suffix::B)}
    }

    /// Generated from method `MR::OverloadSuffix::B::foo`.
    ///
    /// Calls `MR_OverloadSuffix_B_foo()`.
    pub fn foo(&mut self, _1: core::ffi::c_int)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_OverloadSuffix_B_foo(self as *mut Self as *mut crate::ffi::MR_OverloadSuffix_B, _1)};
        crate::__check_exception();
        __ret
    }

    /// Generated from method `MR::OverloadSuffix::B::foo`.
    ///
    /// Calls `MR_OverloadSuffix_B_foo_1()`.
    pub fn foo_1(&mut self, _1: f32)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_OverloadSuffix_B_foo_1(self as *mut Self as *mut crate::ffi::MR_OverloadSuffix_B, _1)};
        crate::__check_exception();
        __ret
    }

    /// Generated from method `MR::OverloadSuffix::B::foo`.
    ///
    /// Calls `MR_OverloadSuffix_B_foo_2()`.
    pub fn foo_2(&mut self, _1: core::ffi::c_int, _2: core::ffi::c_int)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_OverloadSuffix_B_foo_2(self as *mut Self as *mut crate::ffi::MR_OverloadSuffix_B, _1, _2)};
        crate::__check_exception();
        __ret
    }

    /// Currently has no effect on those.
    /// Generated from method `MR::OverloadSuffix::B::operator-`.
    ///
    /// Calls `MR_C_sub_MR_OverloadSuffix_B_int()`.
    pub fn op_sub_int(&mut self, _1: core::ffi::c_int)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_sub_MR_OverloadSuffix_B_int(self as *mut Self as *mut crate::ffi::MR_OverloadSuffix_B, _1)};
        crate::__check_exception();
        __ret
    }

    /// Generated from method `MR::OverloadSuffix::B::operator-`.
    ///
    /// Calls `MR_C_sub_MR_OverloadSuffix_B_float()`.
    pub fn op_sub_float(&mut self, _1: f32)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_sub_MR_OverloadSuffix_B_float(self as *mut Self as *mut crate::ffi::MR_OverloadSuffix_B, _1)};
        crate::__check_exception();
        __ret
    }

    /// Works on those, though.
    /// Generated from method `MR::OverloadSuffix::B::operator[]`.
    ///
    /// Calls `MR_OverloadSuffix_B_index()`.
    pub fn index(&mut self, _1: core::ffi::c_int)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_OverloadSuffix_B_index(self as *mut Self as *mut crate::ffi::MR_OverloadSuffix_B, _1)};
        crate::__check_exception();
        __ret
    }

    /// Generated from method `MR::OverloadSuffix::B::operator[]`.
    ///
    /// Calls `MR_OverloadSuffix_B_index_float()`.
    pub fn index_float(&mut self, _1: f32)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_OverloadSuffix_B_index_float(self as *mut Self as *mut crate::ffi::MR_OverloadSuffix_B, _1)};
        crate::__check_exception();
        __ret
    }

}

unsafe impl crate::CppCopy for B
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Generated from class `MR::OverloadSuffix::C`.
///
/// Generated from class `MR::OverloadSuffix::C`. Heap-allocated instances are held in `Owned<C>`.
#[repr(transparent)]
pub struct C(crate::ffi::MR_OverloadSuffix_C);

unsafe impl crate::CppClass for C
{
    unsafe fn destroy(ptr: *mut Self) {crate::ffi::MR_OverloadSuffix_C_Destroy(ptr as *const crate::ffi::MR_OverloadSuffix_C)}
}

impl C
{
    /// Generated from constructor `MR::OverloadSuffix::C::C`.
    ///
    /// Calls `MR_OverloadSuffix_C_ConstructFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in the constructed object.
    pub fn construct_from_another(_other: &crate::mr::overload_suffix::C) -> crate::Owned<crate::mr::overload_suffix::C>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_OverloadSuffix_C_ConstructFromAnother(_other as *const crate::mr::overload_suffix::C as *const crate::ffi::MR_OverloadSuffix_C)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::overload_suffix::C)}
    }

    /// Generated from constructor `MR::OverloadSuffix::C::C`.
    ///
    /// Calls `MR_OverloadSuffix_C_Construct_blah()`.
    pub fn construct_blah(_1: core::ffi::c_int) -> crate::Owned<crate::mr::overload_suffix::C>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_OverloadSuffix_C_Construct_blah(_1)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::overload_suffix::C)}
    }

    /// Generated from constructor `MR::OverloadSuffix::C::C`.
    ///
    /// Calls `MR_OverloadSuffix_C_Construct_1()`.
    pub fn construct_1(_1: f32) -> crate::Owned<crate::mr::overload_suffix::C>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_OverloadSuffix_C_Construct_1(_1)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::overload_suffix::C)}
    }

    /// Generated from constructor `MR::OverloadSuffix::C::C`.
    ///
    /// Calls `MR_OverloadSuffix_C_Construct_2()`.
    pub fn construct_2(_1: core::ffi::c_int, _2: core::ffi::c_int) -> crate::Owned<crate::mr::overload_suffix::C>
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_OverloadSuffix_C_Construct_2(_1, _2)};
        crate::__check_exception();
        unsafe {crate::Owned::from_raw(__ret as *mut crate::mr::overload_suffix::C)}
    }

    /// Generated from method `MR::OverloadSuffix::C::operator=`.
    ///
    /// Calls `MR_OverloadSuffix_C_AssignFromAnother()`.
    /// The reference to things referred to by the parameter `_other` (if any) might be preserved in this object.
    pub fn assign_from_another(&mut self, _other: &crate::mr::overload_suffix::C) -> &mut crate::mr::overload_suffix::C
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_OverloadSuffix_C_AssignFromAnother(self as *mut Self as *mut crate::ffi::MR_OverloadSuffix_C, _other as *const crate::mr::overload_suffix::C as *const crate::ffi::MR_OverloadSuffix_C)};
        crate::__check_exception();
        unsafe {&mut *(__ret as *mut crate::mr::overload_suffix::C)}
    }

    /// Generated from method `MR::OverloadSuffix::C::foo`.
    ///
    /// Calls `MR_OverloadSuffix_C_foo_blah()`.
    pub fn foo_blah(&mut self, _1: core::ffi::c_int)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_OverloadSuffix_C_foo_blah(self as *mut Self as *mut crate::ffi::MR_OverloadSuffix_C, _1)};
        crate::__check_exception();
        __ret
    }

    /// Generated from method `MR::OverloadSuffix::C::foo`.
    ///
    /// Calls `MR_OverloadSuffix_C_foo_1()`.
    pub fn foo_1(&mut self, _1: f32)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_OverloadSuffix_C_foo_1(self as *mut Self as *mut crate::ffi::MR_OverloadSuffix_C, _1)};
        crate::__check_exception();
        __ret
    }

    /// Generated from method `MR::OverloadSuffix::C::foo`.
    ///
    /// Calls `MR_OverloadSuffix_C_foo_2()`.
    pub fn foo_2(&mut self, _1: core::ffi::c_int, _2: core::ffi::c_int)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_OverloadSuffix_C_foo_2(self as *mut Self as *mut crate::ffi::MR_OverloadSuffix_C, _1, _2)};
        crate::__check_exception();
        __ret
    }

    /// Currently has no effect on those.
    /// Generated from method `MR::OverloadSuffix::C::operator-`.
    ///
    /// Calls `MR_C_sub_MR_OverloadSuffix_C_int()`.
    pub fn op_sub_int(&mut self, _1: core::ffi::c_int)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_sub_MR_OverloadSuffix_C_int(self as *mut Self as *mut crate::ffi::MR_OverloadSuffix_C, _1)};
        crate::__check_exception();
        __ret
    }

    /// Generated from method `MR::OverloadSuffix::C::operator-`.
    ///
    /// Calls `MR_C_sub_MR_OverloadSuffix_C_float()`.
    pub fn op_sub_float(&mut self, _1: f32)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_C_sub_MR_OverloadSuffix_C_float(self as *mut Self as *mut crate::ffi::MR_OverloadSuffix_C, _1)};
        crate::__check_exception();
        __ret
    }

    /// Works on those, though.
    /// Generated from method `MR::OverloadSuffix::C::operator[]`.
    ///
    /// Calls `MR_OverloadSuffix_C_index_blah()`.
    pub fn index_blah(&mut self, _1: core::ffi::c_int)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_OverloadSuffix_C_index_blah(self as *mut Self as *mut crate::ffi::MR_OverloadSuffix_C, _1)};
        crate::__check_exception();
        __ret
    }

    /// Generated from method `MR::OverloadSuffix::C::operator[]`.
    ///
    /// Calls `MR_OverloadSuffix_C_index()`.
    pub fn index(&mut self, _1: f32)
    {
        crate::__init_exceptions();
        let __ret = unsafe {crate::ffi::MR_OverloadSuffix_C_index(self as *mut Self as *mut crate::ffi::MR_OverloadSuffix_C, _1)};
        crate::__check_exception();
        __ret
    }

}

unsafe impl crate::CppCopy for C
{
    unsafe fn copy(ptr: *const Self) -> *mut Self {Self::construct_from_another(&*ptr).into_raw()}
}

/// Just normal stuff with no annotations:
/// Generated from function `MR::OverloadSuffix::foo_a`.
///
/// Calls `MR_OverloadSuffix_foo_a_1_int()`.
pub fn foo_a_1_int(_1: core::ffi::c_int)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_OverloadSuffix_foo_a_1_int(_1)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::OverloadSuffix::foo_a`.
///
/// Calls `MR_OverloadSuffix_foo_a_1_float()`.
pub fn foo_a_1_float(_1: f32)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_OverloadSuffix_foo_a_1_float(_1)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::OverloadSuffix::foo_a`.
///
/// Calls `MR_OverloadSuffix_foo_a_2()`.
pub fn foo_a_2(_1: core::ffi::c_int, _2: core::ffi::c_int)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_OverloadSuffix_foo_a_2(_1, _2)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::OverloadSuffix::bar_a`.
///
/// Calls `MR_OverloadSuffix_bar_a_int()`.
pub fn bar_a_int(_1: core::ffi::c_int)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_OverloadSuffix_bar_a_int(_1)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::OverloadSuffix::bar_a`.
///
/// Calls `MR_OverloadSuffix_bar_a_float()`.
pub fn bar_a_float(_1: f32)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_OverloadSuffix_bar_a_float(_1)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::OverloadSuffix::baz_a`.
///
/// Calls `MR_OverloadSuffix_baz_a_1()`.
pub fn baz_a_1(_1: core::ffi::c_int)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_OverloadSuffix_baz_a_1(_1)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::OverloadSuffix::baz_a`.
///
/// Calls `MR_OverloadSuffix_baz_a_2()`.
pub fn baz_a_2(_1: core::ffi::c_int, _2: core::ffi::c_int)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_OverloadSuffix_baz_a_2(_1, _2)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::OverloadSuffix::operator+`.
///
/// Calls `MR_C_pos_MR_OverloadSuffix_A_ref()`.
pub fn op_pos_mr_overload_suffix_a_ref(_1: &mut crate::mr::overload_suffix::A)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_C_pos_MR_OverloadSuffix_A_ref(_1 as *mut crate::mr::overload_suffix::A as *mut crate::ffi::MR_OverloadSuffix_A)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::OverloadSuffix::operator+`.
///
/// Calls `MR_C_pos_const_MR_OverloadSuffix_A_ref()`.
pub fn op_pos_const_mr_overload_suffix_a_ref(_1: &crate::mr::overload_suffix::A)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_C_pos_const_MR_OverloadSuffix_A_ref(_1 as *const crate::mr::overload_suffix::A as *const crate::ffi::MR_OverloadSuffix_A)};
    crate::__check_exception();
    __ret
}

/// With empty suffix:
/// Generated from function `MR::OverloadSuffix::foo_b`.
///
/// Calls `MR_OverloadSuffix_foo_b()`.
pub fn foo_b(_1: core::ffi::c_int)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_OverloadSuffix_foo_b(_1)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::OverloadSuffix::foo_b`.
///
/// Calls `MR_OverloadSuffix_foo_b_1()`.
pub fn foo_b_1(_1: f32)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_OverloadSuffix_foo_b_1(_1)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::OverloadSuffix::foo_b`.
///
/// Calls `MR_OverloadSuffix_foo_b_2()`.
pub fn foo_b_2(_1: core::ffi::c_int, _2: core::ffi::c_int)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_OverloadSuffix_foo_b_2(_1, _2)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::OverloadSuffix::bar_b`.
///
/// Calls `MR_OverloadSuffix_bar_b()`.
pub fn bar_b(_1: core::ffi::c_int)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_OverloadSuffix_bar_b(_1)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::OverloadSuffix::bar_b`.
///
/// Calls `MR_OverloadSuffix_bar_b_float()`.
pub fn bar_b_float(_1: f32)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_OverloadSuffix_bar_b_float(_1)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::OverloadSuffix::baz_b`.
///
/// Calls `MR_OverloadSuffix_baz_b()`.
pub fn baz_b(_1: core::ffi::c_int)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_OverloadSuffix_baz_b(_1)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::OverloadSuffix::baz_b`.
///
/// Calls `MR_OverloadSuffix_baz_b_int()`.
pub fn baz_b_int(_1: core::ffi::c_int, _2: core::ffi::c_int)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_OverloadSuffix_baz_b_int(_1, _2)};
    crate::__check_exception();
    __ret
}

/// Currently has no effect on those.
/// Generated from function `MR::OverloadSuffix::operator+`.
///
/// Calls `MR_C_pos_MR_OverloadSuffix_B_ref()`.
pub fn op_pos_mr_overload_suffix_b_ref(_1: &mut crate::mr::overload_suffix::B)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_C_pos_MR_OverloadSuffix_B_ref(_1 as *mut crate::mr::overload_suffix::B as *mut crate::ffi::MR_OverloadSuffix_B)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::OverloadSuffix::operator+`.
///
/// Calls `MR_C_pos_const_MR_OverloadSuffix_B_ref()`.
pub fn op_pos_const_mr_overload_suffix_b_ref(_1: &crate::mr::overload_suffix::B)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_C_pos_const_MR_OverloadSuffix_B_ref(_1 as *const crate::mr::overload_suffix::B as *const crate::ffi::MR_OverloadSuffix_B)};
    crate::__check_exception();
    __ret
}

/// With custom suffix:
/// Generated from function `MR::OverloadSuffix::foo_c`.
///
/// Calls `MR_OverloadSuffix_foo_c_blah()`.
pub fn foo_c_blah(_1: core::ffi::c_int)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_OverloadSuffix_foo_c_blah(_1)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::OverloadSuffix::foo_c`.
///
/// Calls `MR_OverloadSuffix_foo_c_1()`.
pub fn foo_c_1(_1: f32)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_OverloadSuffix_foo_c_1(_1)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::OverloadSuffix::foo_c`.
///
/// Calls `MR_OverloadSuffix_foo_c_2()`.
pub fn foo_c_2(_1: core::ffi::c_int, _2: core::ffi::c_int)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_OverloadSuffix_foo_c_2(_1, _2)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::OverloadSuffix::bar_c`.
///
/// Calls `MR_OverloadSuffix_bar_c_blah()`.
pub fn bar_c_blah(_1: core::ffi::c_int)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_OverloadSuffix_bar_c_blah(_1)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::OverloadSuffix::bar_c`.
///
/// Calls `MR_OverloadSuffix_bar_c()`.
pub fn bar_c(_1: f32)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_OverloadSuffix_bar_c(_1)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::OverloadSuffix::baz_c`.
///
/// Calls `MR_OverloadSuffix_baz_c_blah()`.
pub fn baz_c_blah(_1: core::ffi::c_int)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_OverloadSuffix_baz_c_blah(_1)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::OverloadSuffix::baz_c`.
///
/// Calls `MR_OverloadSuffix_baz_c()`.
pub fn baz_c(_1: core::ffi::c_int, _2: core::ffi::c_int)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_OverloadSuffix_baz_c(_1, _2)};
    crate::__check_exception();
    __ret
}

/// Currently has no effect on those.
/// Generated from function `MR::OverloadSuffix::operator+`.
///
/// Calls `MR_C_pos_MR_OverloadSuffix_C_ref()`.
pub fn op_pos_mr_overload_suffix_c_ref(_1: &mut crate::mr::overload_suffix::C)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_C_pos_MR_OverloadSuffix_C_ref(_1 as *mut crate::mr::overload_suffix::C as *mut crate::ffi::MR_OverloadSuffix_C)};
    crate::__check_exception();
    __ret
}

/// Generated from function `MR::OverloadSuffix::operator+`.
///
/// Calls `MR_C_pos_const_MR_OverloadSuffix_C_ref()`.
pub fn op_pos_const_mr_overload_suffix_c_ref(_1: &crate::mr::overload_suffix::C)
{
    crate::__init_exceptions();
    let __ret = unsafe {crate::ffi::MR_C_pos_const_MR_OverloadSuffix_C_ref(_1 as *const crate::mr::overload_suffix::C as *const crate::ffi::MR_OverloadSuffix_C)};
    crate::__check_exception();
    __ret
}

